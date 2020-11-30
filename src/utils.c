#define _GNU_SOURCE
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include "utils.h"
#include "logger.h"
#include "default_preloads/wrapper.h"
#include "pid_handling.h"

int dmp_nb = 0;

/**
 * Transforms a char buffer to its hex representation as a char*.
 * 
 * @return a char* that has to be freed, representing input string as hexadecimal
 */
char* hexstr(char* buf, int buf_len) {
    int hex_len = buf_len*2;
    char* hex_buf = malloc(hex_len+1);
    for (int i=0; i<buf_len; i++) {
        sprintf(&(hex_buf[i*2]), "%02x", buf[i] & 0xff);
    }
    hex_buf[hex_len] = '\0';
    return hex_buf;
}

/**
 * Dump data to a file.
 * 
 * @return filename where the data has been dumped to.
 */
char* dump_data(void* data, size_t size){
    char *filename = calloc(1, 4096);
    snprintf(filename, 4096, "%d_%d.dump", dmp_nb, getpid_singleton());
    int fd = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0666);
    // ssize_t  (*original_func)(int filedes, const void *buffer, size_t size);
    // original_func = dlsym(RTLD_NEXT, "write");
    // original_func(fd,data,size);
    h_write(fd,data,size);
    close(fd);
    dmp_nb++;
    return filename;
}

/**
 * Dump stack frame.
 * 
 * @return filename where the data has been dumped to.
 */
uint64_t* dump_stack(int nb){
    uint64_t *rsp;
    uint64_t *val;
    __asm__ __volatile__("mov %%rsp, %0\n\t"
                         : "=a"(rsp));
    for (size_t i = 0; i < nb; i++)
    {
       preload_log("rsp + 0x%lX : 0x%016lX", i*8, *(rsp + i));
    }
    // val = *(rsp + (0x70/8));
    // preload_log("rsp + 0x%lX : 0x%016lX", (0x70/8)*8, *val);
    return rsp;
}