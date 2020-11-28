#define _GNU_SOURCE
#include "pid_handling.h"
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>
#include <sys/types.h>


pid_t fork(void){
    int (*o_fork)(void);
    o_fork = dlsym(RTLD_NEXT, "fork");

    shm_lock();
    shm_add_pid(getpid());
    pid_t ret_pid = o_fork();
    if(ret_pid == 0){ // child
        shm_add_pid(getpid());
    }
    shm_unlock();

    return ret_pid;
}


int main(int argc, char const *argv[])
{
    int pid = fork();
    if(pid == 0){
        shm_lock();
        puts("====");
        shm_pid_list * p = shm_get_pid_list_copy();
        printf("Nb of pids : %ld\n", p->number_of_pid);
        
        // shm_add_pid(getpid());
        p = shm_get_pid_list_copy();
        for (size_t i = 0; i < p->number_of_pid; i++)
        {
            printf("From %d | %d | %lu\n", getpid(), p->pids[i], p->number_of_pid);
        }
        shm_unlock();
        int opid = fork();
        if(opid == 0){
            shm_lock();
            // shm_add_pid(getpid());
            // shm_add_pid(getpid());
            
            shm_pid_list * p = shm_get_pid_list_copy();
            printf("Nb of pids : %ld\n", p->number_of_pid);
            shm_unlock();
        } else {
            shm_lock();
            // shm_add_pid(getpid());
            shm_pid_list * p = shm_get_pid_list_copy();
            printf("Nb of pids : %ld\n", p->number_of_pid);
            shm_unlock();
        }
    } else {
        shm_lock();
        puts("====");
        shm_pid_list * p = shm_get_pid_list_copy();
        printf("Nb of pids : %ld\n", p->number_of_pid);
        // shm_add_pid(getpid());
        p = shm_get_pid_list_copy();
        printf("%d | %ld\nList of pids: \n", getpid(), p->number_of_pid);
        for (size_t i = 0; i < p->number_of_pid; i++)
        {
            printf("From %d | %d | %lu\n", getpid(), p->pids[i], p->number_of_pid);
        }
        shm_unlock();
        // printf("%p\n", __shm_get_shared_memory());
        
        // exit(1);
    }
    // sleep(2);
    // printf("%d exits\n", getpid());
    // shm_free_shared_memory();
    return 0;
}
