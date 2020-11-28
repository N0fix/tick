#define _GNU_SOURCE
#include <unistd.h>
pid_t fork(void);
#include "default_preloads/wrapper.h" //mandatory
#include "pid_handling.h"
#include "logger.h"
#include <dlfcn.h>

pid_t fork(void){
    int (*o_fork)(void);
    o_fork = dlsym(RTLD_NEXT, "fork");
    
    shm_lock();
    logger(__func__, "%s");
    shm_add_pid(getpid());
    pid_t ret_pid = o_fork();
    if(ret_pid == 0){ // child
        shm_add_pid(getpid());
        self_pid = getpid(); // gets the new pid for logging 
        self_childid++;
    }
    shm_unlock();

    return ret_pid;
}