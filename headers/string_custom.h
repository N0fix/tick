#ifndef STRING_CUSTOM_H
#define STRING_CUSTOM_H

typedef struct string {
    unsigned long length;
    char* str;
    void (*clear)(string *);
    void (*append)(string *, string*);
} string;

#endif