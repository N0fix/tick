#include <stdlib.h>
#include <stdio.h>

#include "logger.h"
/* Mandatory wrapper to use functions as is without having to call the wrapper
 * */
#include "default_preloads/wrapper.h"  

#include "pid_handling.h"





void logger(const char* func_name, const char* format, ...) {
    shm_lock();
    va_list args;
    va_start(args, format);
    // for (size_t i = 0; i < getchildid_singleton(); i++)
    // {
    //     printf("  ");
    // }
    #ifdef COLOR
    switch (getchildid_singleton() % 7)
    {
    case RED:
        printf(KRED);
        break;
    case GRN:
        printf(KGRN);
        break;
    case YEL:
        printf(KYEL);
        break;
    case BLU:
        printf(KBLU);
        break;
    case MAG:
        printf(KMAG);
        break;
    case CYN:
        printf(KCYN);
        break;
    case WHT:
        printf(KWHT);
        break;
    default:
        break;
    }
    #endif
    printf(HOOK, getpid_singleton(), func_name);
    vprintf(format, args);
    printf(RESET);
    shm_unlock();

    // fprintf(stdout);
    va_end(args);
}