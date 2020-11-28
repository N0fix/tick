#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include <fcntl.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include "default_preloads/wrapper.h"



#include "utils.h"
#include "pid_handling.h"
#include "safe_memory.h"


#define SHM_SIZE 4096 * 4 // TODO : properly handle size, might need mmap + remmap.
                          //  Current size is way more than enough to handle PIDs
#define SEM_ID "/SEM_PIDLIST_PRELOAD"
#define SHM_ID "/SHM_PIDLIST_PRELOAD"
#define SEM_INITIAL_VALUE_UNLOCKED 1
#define SHM_KEY_VAL 0xC0FE1337


/*
 * The purpose of this file is to propose a way for logged
 * process to always be able to know its PID and the PID
 * of process it created.
 * 
 * The representation of the memory is defined in the struct shm_pid_list
 * and is composed of a the number of pids and a list of those pids.
 */


key_t shm_key = SHM_KEY_VAL;
int shm_id = 0;
int fd_lock = 0;
sem_t* semaphore = SEM_FAILED;
char* shm_ptr = NULL;
pid_t self_pid = 0;
int self_childid = 0;

/**
 * Creates a shared memory using shm_open and returns the associated file descriptor.
 *
 * @return The file descriptor associated with the created shm. Abort the program if it fails.
 */
int __create_shared_memory(){
    
    int shm_id = shmget(shm_key, SHM_SIZE, IPC_CREAT | IPC_EXCL| 0666);
    if(shm_id == -1) handle_error("shm_open");
    return shm_id; 

    // int shm_id = shm_open(SHM_ID, IPC_CREAT | 0600);
    // if(shm_id == -1) handle_error("shm_open");  
    // return shm_id;
}

/**
 * Initialize the shared memory if necessary.
 *
 * @return The file descriptor associated with the created shm. Abort the program if it fails.
 */
void __shm_init_shared_memory(size_t size) {
    unsigned char creator = 0;
    // Opens the shared memory. Creates it if it does not exist.
    if( (shm_id = shmget(shm_key, SHM_SIZE, 0666)) == -1) {
        if(errno == ENOENT){
            shm_id = __create_shared_memory();
            creator = 1;
            shm_ptr = shmat(shm_id, NULL, 0);
            if(shm_ptr == (void *) -1) {
                handle_error("shmat");
            }
            shmctl(shm_id, IPC_RMID, 0);
            return;
            // shm_unlink(SHM_ID);
        } else {
            handle_error("shmget");
        }
    }
    shm_ptr = shmat(shm_id, NULL, 0);
    if(shm_ptr == (void *) -1) {
        handle_error("shmat");
    }
    
    printf("Creator ? %d\n", creator);

    // ftruncate(shm_id, size);
    // shm_ptr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, shm_id, 0);
    // if (shm_ptr == MAP_FAILED) {
		// handle_error("mmap shared mem");
	// }
}

/**
 * Retrives the shared memory Singleton. Creates
 * the shared memory if it does not exist yet.
 * 
 * @return A pointer to the shared memory.
 */

void* __shm_get_shared_memory(){
    // If shared memory is not initialized yet, initialize it.
    if(!shm_id || !shm_ptr) {
        __shm_init_shared_memory(SHM_SIZE);
    }
    return shm_ptr;
}

/**
 * Create the semaphore lock that is available for locking.
 * 
 */
void __shm_create_lock(){
    semaphore = sem_open(SEM_ID, O_CREAT | O_RDWR, 0600, SEM_INITIAL_VALUE_UNLOCKED);
    // File will be deleted upon program termination
    // but is still opened till then (see unlink man)
    sem_unlink(SEM_ID);
    if(semaphore == SEM_FAILED) handle_error("sem_open");
}


/**
 * Detatch pointer from shared memory, closes the semaphore.
 * 
 */
void shm_free_shared_memory(){
    if(!shm_id) return;

    if(close(shm_id) == -1) {
        puts("could not close fd shm"); 
        return;
    }
    if (shmdt(shm_ptr) == -1) {
      perror("shmdt");
      return;
    }
    if(sem_close(semaphore) == -1){
        puts("Err closing fd_lock");
        return;
    }
}

/**
 * Locks the semaphore.
 * This is intended to be used along with R/W operations
 * on shared memory.
 * 
 */
void shm_lock(){ 
    // actually buggus due to impossible linkage of external libraries 
    // for some reason (-lpthread is needed of sem_open() which is used in
    // __shm_create_lock() )
    if(semaphore == SEM_FAILED){
        __shm_create_lock();
    }
    sem_wait(semaphore);
    printf("%d locked\n", getpid());
}

/**
 * Unlocks the semaphore.
 * This is intended to be used along with R/W operations
 * on shared memory.
 * 
 */

void shm_unlock(){
    if(semaphore == SEM_FAILED){
        return;
    }
    sem_post(semaphore);
    printf("%d unlocked\n", getpid());
}

/**
 * 
 * @return 0 if given pid insn't in share memory pid list. 1 instead.
 * */
char __is_pid_in_shm_pid_list(pid_t pid){
    unsigned long n = 0;
    shm_pid_list* shm = __shm_get_shared_memory();
    n = shm->number_of_pid;
    for (size_t i = 0; i < n; i++)
    {
       if(shm->pids[n] == pid) return 1;
    }
    return 0;
}

/**
 * Returns a copied list of pids. The copy is made in order to prevent race condition between
 * a process that would write a new pid to the shm and one that would want to read the list 
 * at a given point.
 * 
 * @return A copied pid_list the caller has to free.
 */
shm_pid_list* shm_get_pid_list_copy(){
    shm_pid_list* p = s_calloc(1, sizeof(shm_pid_list));
    // shm_pid_list* p = calloc(1, sizeof(shm_pid_list));
    shm_pid_list* shm = __shm_get_shared_memory();
    printf("Getting pid list with %ld pids\n", shm->number_of_pid);
    memcpy(p, shm, sizeof(shm->number_of_pid) + sizeof(pid_t) * shm->number_of_pid);
    return p;
}

/**
 * Retrieves a nth pid from pid list stored in 
 * shared memory.
 * 
 * @return nth pid of the list.
 */
pid_t shm_get_pid(unsigned long n){
    shm_pid_list * shm = shm_get_pid_list_copy();
    if(n > shm->number_of_pid) return -1;
    
    return shm->pids[n];
}

/**
 * Adds a pid to the list stored on shared memory.
 * 
 */
void shm_add_pid(pid_t p){
    if(__is_pid_in_shm_pid_list(p)){
        return;
    }
    unsigned long n = 0;
    shm_pid_list* shm = __shm_get_shared_memory();
    n = shm->number_of_pid;
    shm->pids[n] = p;
    shm->number_of_pid++;
    // printf("Added pid %d cont is now %ld\n", getpid(), shm->number_of_pid);
}

/**
 * Returns current process pid. This function aims at not calling
 * getpid() on each log.
 * 
 * @return pid_t representing pid of current process. 
 */ 
pid_t getpid_singleton(){
    if(!self_pid) {
        self_pid = getpid();
    }
    return self_pid;
}

/**
 * Returns current child id.
 * 
 * @return An int representing the id of the child, with 0 as father, 1 as father's child
 * 2 as father's child child etc. 
 */ 
int getchildid_singleton(){
    return self_childid;
}