#ifndef PID_HANDLING_H
#define PID_HANDLING_H
#include <sys/types.h>
#include <semaphore.h>
#include <fcntl.h>

typedef struct shm_pid_list {
    unsigned long number_of_pid;
    pid_t pids[];
} shm_pid_list;
void __shm_create_lock();
void shm_free_shared_memory();
shm_pid_list* shm_get_pid_list_copy();
pid_t shm_get_pid(unsigned long n);
void shm_add_pid(pid_t p);
void shm_lock();
void shm_unlock();
pid_t getpid_singleton();
int getchildid_singleton();

extern int self_pid;
extern int self_childid;



#endif
