#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>
#include <stdio.h>
#define PRELOAD_ERROR "LD_PRELOAD ERR : "
#define handle_error(msg) \
    do { perror(PRELOAD_ERROR msg); exit(EXIT_FAILURE); } while (0)


char* hexstr(char* buf, int buf_len);
char* dump_data(void* data, size_t size);
void dump_process(pid_t pid);
u_int64_t* dump_stack(int nb);
u_int64_t* get_proc_addr(pid_t pid);
u_int64_t* get_max_proc_addr(pid_t pid);
char *read_program_name();
#endif