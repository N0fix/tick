#ifndef UTILS_H
#define UTILS_H


#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

typedef struct array {
    unsigned long length;
    void* ptr;
    void (*clear)(array *);
} array;




#endif