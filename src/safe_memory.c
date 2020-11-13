#include <stdlib.h>
#include "../headers/safe_memory.h"
#include "../headers/utils.h"

void* s_malloc(size_t size){
    void* ptr = malloc(size);
    if(!ptr) handle_error("malloc");
    return ptr;
}

void* s_calloc(size_t nb_memb, size_t size){
    void* ptr = calloc(nb_memb, size);
    if(!ptr) handle_error("calloc");
    return ptr;
}

void* s_realloc(void *ptr, size_t size){
    void* ptr = realloc(ptr, size);
    if(!ptr) handle_error("realloc");
    return ptr;
}