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




#endif