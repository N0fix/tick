#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>
#include <stdio.h>
#define PRELOAD_ERROR "LD_PRELOAD ERR : "
#define handle_error(msg) \
    do { perror(PRELOAD_ERROR msg); exit(EXIT_FAILURE); } while (0)

// typedef struct array {
//     unsigned long length;
//     void* ptr;
//     void (*clear)(array *);
// } array;


char* hexstr(char* buf, int buf_len);
char* dump_data(void* data, size_t size);
void dump_process(pid_t pid);
u_int64_t* dump_stack(int nb);
#endif