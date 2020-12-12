#define _GNU_SOURCE
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <linux/limits.h>
#include "utils.h"
#include "logger.h"
#include "default_preloads/wrapper.h"
#include "pid_handling.h"
#define PROC_MAPS_MAX_LINE_LEN PATH_MAX + 80

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
u_int64_t* dump_stack(int nb){
    #ifdef __x86_64__
    uint64_t *rsp;
    uint64_t *val;
    __asm__ __volatile__("mov %%rsp, %0\n\t"
                         : "=a"(rsp));
    for (int i = 0; i < nb; i++)
    {
       preload_log("rsp + 0x%lX : 0x%016lX", i*8, *(rsp + i));
    }
    // val = *(rsp + (0x70/8));
    // preload_log("rsp + 0x%lX : 0x%016lX", (0x70/8)*8, *val);
    return rsp;
    #else
    uint32_t *esp;
    uint32_t *val;
    __asm__ __volatile__("mov %%esp, %0\n\t"
                         : "=a"(esp));
    for (int i = 0; i < nb; i++)
    {
       preload_log("esp + 0x%lX : 0x%08lX", i*4, *(esp + i));
    }
    return esp;
    #endif
}

char* handle_procmaps_line(char* line){
    char* tok = strtok(line, " ");
    char* from = strtoll(strtok(tok, "-"), NULL, 16);
    char* to = strtoll(strtok(NULL, "-"), NULL, 16);
    return dump_data(from, to-from);
    // preload_log("Dumped from %lX to %lX", from, to);
}

void dump_process(pid_t pid){
    char* dumped_filename;
    char filename[4096];
    char line[PROC_MAPS_MAX_LINE_LEN]; // max path + lenght of a line from /proc/<pid>/maps
    FILE* fd;
    if(snprintf(filename, 4096, "/proc/%d/maps", pid) == -1){
        preload_log("snprintf /proc/%d/maps failed", pid);
    } 
    if((fd = fopen(filename, "r")) == NULL){
        preload_log("Could not open /proc/%d/maps", pid);
    }
    while(fgets(line, PROC_MAPS_MAX_LINE_LEN, fd)) {
        if(strstr(line, "[heap]")) break;
        dumped_filename = handle_procmaps_line(line);
        preload_log("Dumped proc %d to %s", pid, dumped_filename);
    }
    fclose(fd);
}