#include <stdlib.h>
#include <stdio.h>


#include "logger.h"
/* Mandatory wrapper to use functions as is without having to call the wrapper
 * */
#include "default_preloads/wrapper.h"  

#include "pid_handling.h"

#define HOOK "[% 5ld] [%s] [%d]"
#define RESET "\e[m\n"

void logger(const char* func_name, const char* format) {
    // va_list args;
    // va_start(args, format);
    // for (size_t i = 0; i < getchildid_singleton(); i++)
    // {
    //     printf("  ");
    // }
    switch (getchildid_singleton() % 7)
    {
    case RED:
        printf(KRED  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case GRN:
        printf(KGRN  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case YEL:
        printf(KYEL  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case BLU:
        printf(KBLU  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case MAG:
        printf(KMAG  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case CYN:
        printf(KCYN  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    case WHT:
        printf(KWHT  HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
        break;
    default:
        break;
    }
    // printf(HOOK RESET, getpid_singleton(), func_name, getchildid_singleton());
    // fprintf(stdout, HOOK format RESET, getpid(), func_name, __VA_ARGS__);
    // va_end(args);
}