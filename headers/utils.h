#ifndef UTILS_H
#define UTILS_H

typedef struct array {
    unsigned long length;
    void* ptr;
    void (*clear)(array *);
} array;




#endif