#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../headers/string_custom.h"
#include "../headers/safe_memory.h"

/**
 * Creates a new String.
 *
 * @param <str> String content.
 * @return A new string object with your string content. Returns NULL if @param<str> is NULL.
 */
string* new_string(char* str){
    if(!str) return NULL;
    string * new_str = s_calloc(1, sizeof(string));
    new_str->length = strlen(str);
    new_str->str = s_calloc(1, new_str->length);
    memcpy(new_str, str, new_str->length);
    new_str->clear = __string_clear;
    new_str->append = __string_append;
}

void __string_append(string* dst, string* src){
    unsigned long total_len = dst->length + src->length + 1;
    dst->length = total_len;
    if(!s_realloc(dst->str, total_len)) abort();
    strncat(dst->str, src->str, total_len);
}

void __string_clear(string* s){
    free(s->str);
    free(s);
}