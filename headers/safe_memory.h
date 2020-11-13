#ifndef SAFE_MEM_H
#define SAFE_MEM_H

void* s_malloc(size_t size);
void* s_calloc(size_t nb_memb, size_t size);
void* s_realloc(void *ptr, size_t size);

#endif