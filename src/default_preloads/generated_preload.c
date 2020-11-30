
#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <inttypes.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include <errno.h>
#include <stddef.h>
#include <wchar.h>
#include <wctype.h>
#include <complex.h> 
#include <stdlib.h>
#include <nl_types.h>
#include <termio.h>
#include <sys/types.h>
#include <dirent.h>
#include <ftw.h>
#include <ucontext.h>
#include <setjmp.h>
#include <regex.h>
#include <sched.h>
#include <semaphore.h>
#include <signal.h>
#include <search.h>
#include <wordexp.h>
#include <fenv.h>
#include <glob.h>
#include <iconv.h>
#include <mcheck.h>
#include <malloc.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <sys/utsname.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/wait.h>
#include <utime.h>
#include <sys/types.h>
#include <aio.h>
#include <sys/resource.h>
#include <mntent.h>
#include <sys/resource.h>
#include <sys/timex.h>
#include <argp.h>
#include <crypt.h>
#include <utmpx.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <stdarg.h>


#include "logger.h"
#include "utils.h"
#include "custom_preloads/custom_preloads.h"
#define HOOK "[% 5lu] [%s] "
#define RESET "\e[m\n"
#define preload_log(FORMAT, ...) \
    do { logger(SYNC, __func__, FORMAT, __VA_ARGS__); } while(0)



#ifndef _exit_OVERRIDE
#define _exit_OVERRIDE

void _exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "_exit");
    preload_log("%s", "");
}

#endif
#ifndef _Exit_OVERRIDE
#define _Exit_OVERRIDE

void _Exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "_Exit");
    preload_log("%s", "");
}

#endif 
#ifndef _flushlbf_OVERRIDE
#define _flushlbf_OVERRIDE

void _flushlbf (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "_flushlbf");
    preload_log("%s", "");
}

#endif
#ifndef __fbufsize_OVERRIDE
#define __fbufsize_OVERRIDE

size_t __fbufsize (FILE *stream){
    size_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fbufsize");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __flbf_OVERRIDE
#define __flbf_OVERRIDE

int __flbf (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__flbf");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __fpending_OVERRIDE
#define __fpending_OVERRIDE

size_t __fpending (FILE *stream){
    size_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fpending");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __fpurge_OVERRIDE
#define __fpurge_OVERRIDE

void __fpurge (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fpurge");
    preload_log("%s", "");
    original_func(stream);
}

#endif
#ifndef __freadable_OVERRIDE
#define __freadable_OVERRIDE

int __freadable (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__freadable");
    preload_log("%s", "");
    return original_func(stream);
}

#endif 
#ifndef __freading_OVERRIDE
#define __freading_OVERRIDE

int __freading (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__freading");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __fsetlocking_OVERRIDE
#define __fsetlocking_OVERRIDE

int __fsetlocking (FILE *stream, int type){
    int  (*original_func)(FILE *stream, int type);
    original_func = dlsym(RTLD_NEXT, "__fsetlocking");
    preload_log("%s", "");
    return original_func(stream,type);
}

#endif
#ifndef __fwritable_OVERRIDE
#define __fwritable_OVERRIDE

int __fwritable (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fwritable");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __fwriting_OVERRIDE
#define __fwriting_OVERRIDE

int __fwriting (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fwriting");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef __ppc_get_timebase_OVERRIDE
#define __ppc_get_timebase_OVERRIDE

uint64_t __ppc_get_timebase (void){
    uint64_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_get_timebase");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef __ppc_get_timebase_freq_OVERRIDE
#define __ppc_get_timebase_freq_OVERRIDE

uint64_t __ppc_get_timebase_freq (void){
    uint64_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_get_timebase_freq");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef __ppc_mdoio_OVERRIDE
#define __ppc_mdoio_OVERRIDE

void __ppc_mdoio (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_mdoio");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __ppc_mdoom_OVERRIDE
#define __ppc_mdoom_OVERRIDE

void __ppc_mdoom (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_mdoom");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __ppc_set_ppr_low_OVERRIDE
#define __ppc_set_ppr_low_OVERRIDE

void __ppc_set_ppr_low (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_low");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef __ppc_set_ppr_med_OVERRIDE
#define __ppc_set_ppr_med_OVERRIDE

void __ppc_set_ppr_med (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __ppc_set_ppr_med_high_OVERRIDE
#define __ppc_set_ppr_med_high_OVERRIDE

void __ppc_set_ppr_med_high (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med_high");
    preload_log("%s", "");
    original_func();
}

#endif 
#ifndef __ppc_set_ppr_med_low_OVERRIDE
#define __ppc_set_ppr_med_low_OVERRIDE

void __ppc_set_ppr_med_low (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med_low");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __ppc_set_ppr_very_low_OVERRIDE
#define __ppc_set_ppr_very_low_OVERRIDE

void __ppc_set_ppr_very_low (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_very_low");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __ppc_yield_OVERRIDE
#define __ppc_yield_OVERRIDE

void __ppc_yield (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "__ppc_yield");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef __riscv_flush_icache_OVERRIDE
#define __riscv_flush_icache_OVERRIDE

void __riscv_flush_icache (void *start, void *end, unsigned long int flags){
    void  (*original_func)(void *start, void *end, unsigned long int flags);
    original_func = dlsym(RTLD_NEXT, "__riscv_flush_icache");
    preload_log("%s", "");
    original_func(start,end,flags);
}

#endif
#ifndef a64l_OVERRIDE
#define a64l_OVERRIDE

long int a64l (const char *string){
    long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "a64l");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef abort_OVERRIDE
#define abort_OVERRIDE

void abort (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "abort");
    preload_log("%s", "");
    original_func();
}

#endif
#ifndef abs_OVERRIDE
#define abs_OVERRIDE

int abs (int number){
    int  (*original_func)(int number);
    original_func = dlsym(RTLD_NEXT, "abs");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef accept_OVERRIDE
#define accept_OVERRIDE

int accept (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "accept");
    preload_log("%s", "");
    return original_func(socket,addr,length_ptr);
}

#endif

#ifndef access_OVERRIDE
#define access_OVERRIDE

int access (const char *filename, int how){
    int  (*original_func)(const char *filename, int how);
    original_func = dlsym(RTLD_NEXT, "access");
    preload_log("%s", "");
    return original_func(filename,how);
}

#endif

#ifndef acos_OVERRIDE
#define acos_OVERRIDE

double acos (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "acos");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef acosf_OVERRIDE
#define acosf_OVERRIDE

float acosf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "acosf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef acosh_OVERRIDE
#define acosh_OVERRIDE

double acosh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "acosh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef acoshf_OVERRIDE
#define acoshf_OVERRIDE

float acoshf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "acoshf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef acoshl_OVERRIDE
#define acoshl_OVERRIDE

long double acoshl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "acoshl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef acosl_OVERRIDE
#define acosl_OVERRIDE

long double acosl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "acosl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef addmntent_OVERRIDE
#define addmntent_OVERRIDE

int addmntent (FILE *stream, const struct mntent *mnt){
    int  (*original_func)(FILE *stream, const struct mntent *mnt);
    original_func = dlsym(RTLD_NEXT, "addmntent");
    preload_log("%s", "");
    return original_func(stream,mnt);
}

#endif
#ifndef addseverity_OVERRIDE
#define addseverity_OVERRIDE

int addseverity (int severity, const char *string){
    int  (*original_func)(int severity, const char *string);
    original_func = dlsym(RTLD_NEXT, "addseverity");
    preload_log("%s", "");
    return original_func(severity,string);
}

#endif
#ifndef adjtime_OVERRIDE
#define adjtime_OVERRIDE

int adjtime (const struct timeval *delta, struct timeval *olddelta){
    int  (*original_func)(const struct timeval *delta, struct timeval *olddelta);
    original_func = dlsym(RTLD_NEXT, "adjtime");
    preload_log("%s", "");
    return original_func(delta,olddelta);
}

#endif
#ifndef adjtimex_OVERRIDE
#define adjtimex_OVERRIDE

int adjtimex (struct timex *timex){
    int  (*original_func)(struct timex *timex);
    original_func = dlsym(RTLD_NEXT, "adjtimex");
    preload_log("%s", "");
    return original_func(timex);
}

#endif
#ifndef aio_cancel_OVERRIDE
#define aio_cancel_OVERRIDE

int aio_cancel (int fildes, struct aiocb *aiocbp){
    int  (*original_func)(int fildes, struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_cancel");
    preload_log("%s", "");
    return original_func(fildes,aiocbp);
}

#endif 
#ifndef aio_cancel64_OVERRIDE
#define aio_cancel64_OVERRIDE

int aio_cancel64 (int fildes, struct aiocb64 *aiocbp){
    int  (*original_func)(int fildes, struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_cancel64");
    preload_log("%s", "");
    return original_func(fildes,aiocbp);
}

#endif
#ifndef aio_error_OVERRIDE
#define aio_error_OVERRIDE

int aio_error (const struct aiocb *aiocbp){
    int  (*original_func)(const struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_error");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif
#ifndef aio_error64_OVERRIDE
#define aio_error64_OVERRIDE

int aio_error64 (const struct aiocb64 *aiocbp){
    int  (*original_func)(const struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_error64");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif 
#ifndef aio_fsync_OVERRIDE
#define aio_fsync_OVERRIDE

int aio_fsync (int op, struct aiocb *aiocbp){
    int  (*original_func)(int op, struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_fsync");
    preload_log("%s", "");
    return original_func(op,aiocbp);
}

#endif
#ifndef aio_fsync64_OVERRIDE
#define aio_fsync64_OVERRIDE

int aio_fsync64 (int op, struct aiocb64 *aiocbp){
    int  (*original_func)(int op, struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_fsync64");
    preload_log("%s", "");
    return original_func(op,aiocbp);
}

#endif
#ifndef aio_init_OVERRIDE
#define aio_init_OVERRIDE

void aio_init (const struct aioinit *init){
    void  (*original_func)(const struct aioinit *init);
    original_func = dlsym(RTLD_NEXT, "aio_init");
    preload_log("%s", "");
    original_func(init);
}

#endif
#ifndef aio_read_OVERRIDE
#define aio_read_OVERRIDE

int aio_read (struct aiocb *aiocbp){
    int  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_read");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif
#ifndef aio_read64_OVERRIDE
#define aio_read64_OVERRIDE

int aio_read64 (struct aiocb64 *aiocbp){
    int  (*original_func)(struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_read64");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif 
#ifndef aio_return_OVERRIDE
#define aio_return_OVERRIDE

ssize_t aio_return (struct aiocb *aiocbp){
    ssize_t  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_return");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif
#ifndef aio_return64_OVERRIDE
#define aio_return64_OVERRIDE

ssize_t aio_return64 (struct aiocb64 *aiocbp){
    ssize_t  (*original_func)(struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_return64");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif
#ifndef aio_suspend_OVERRIDE
#define aio_suspend_OVERRIDE

int aio_suspend (const struct aiocb *const list[], int nent, const struct timespec *timeout){
    int  (*original_func)(const struct aiocb *const list[], int nent, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "aio_suspend");
    preload_log("%s", "");
    return original_func(list,nent,timeout);
}

#endif
#ifndef aio_suspend64_OVERRIDE
#define aio_suspend64_OVERRIDE

int aio_suspend64 (const struct aiocb64 *const list[], int nent, const struct timespec *timeout){
    int  (*original_func)(const struct aiocb64 *const list[], int nent, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "aio_suspend64");
    preload_log("%s", "");
    return original_func(list,nent,timeout);
}

#endif
#ifndef aio_write_OVERRIDE
#define aio_write_OVERRIDE

int aio_write (struct aiocb *aiocbp){
    int  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_write");
    preload_log("%s", "");
    return original_func(aiocbp);
}

#endif
// #ifndef aio_write64_OVERRIDE
// #define aio_write64_OVERRIDE

// int aio_write64 (struct aiocb64 *aiocbp){
//     int  (*original_func)(struct aiocb64 *aiocbp);
//     original_func = dlsym(RTLD_NEXT, "aio_write64");
//     preload_log("%s", "");
//     return original_func(aiocbp);
// }

// #endif
#ifndef alarm_OVERRIDE
#define alarm_OVERRIDE

unsigned int alarm (unsigned int seconds){
    unsigned int  (*original_func)(unsigned int seconds);
    original_func = dlsym(RTLD_NEXT, "alarm");
    preload_log("%s", "");
    return original_func(seconds);
}

#endif
#ifndef aligned_alloc_OVERRIDE
#define aligned_alloc_OVERRIDE

void * aligned_alloc (size_t alignment, size_t size){
    void *  (*original_func)(size_t alignment, size_t size);
    original_func = dlsym(RTLD_NEXT, "aligned_alloc");
    preload_log("%s", "");
    return original_func(alignment,size);
}

#endif
#ifndef alloca_OVERRIDE
#define alloca_OVERRIDE

void * alloca (size_t size){
    void *  (*original_func)(size_t size);
    original_func = dlsym(RTLD_NEXT, "alloca");
    preload_log("%s", "");
    return original_func(size);
}

#endif
#ifndef alphasort_OVERRIDE
#define alphasort_OVERRIDE

int alphasort (const struct dirent **a, const struct dirent **b){
    int  (*original_func)(const struct dirent **a, const struct dirent **b);
    original_func = dlsym(RTLD_NEXT, "alphasort");
    preload_log("%s", "");
    return original_func(a,b);
}

#endif
#ifndef argp_error_OVERRIDE
#define argp_error_OVERRIDE

void argp_error (const struct argp_state *state, const char *fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    void  (*original_func)(const struct argp_state *state, const char *fmt, ...);
    original_func = dlsym(RTLD_NEXT, "argp_error");
    preload_log("%s", "");
    va_end(ap);
    original_func(state,fmt,ap);
}


#endif
#ifndef argp_failure_OVERRIDE
#define argp_failure_OVERRIDE

void argp_failure (const struct argp_state *state, int status, int errnum, const char *fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    void  (*original_func)(const struct argp_state *state, int status, int errnum, const char *fmt, ...);
    original_func = dlsym(RTLD_NEXT, "argp_failure");
    preload_log("%s", "");
    va_end(ap);
    original_func(state,status,errnum,fmt,ap);
}


#endif
#ifndef argp_help_OVERRIDE
#define argp_help_OVERRIDE

void argp_help (const struct argp *argp, FILE *stream, unsigned flags, char *name){
    void  (*original_func)(const struct argp *argp, FILE *stream, unsigned flags, char *name);
    original_func = dlsym(RTLD_NEXT, "argp_help");
    preload_log("%s", "");
    original_func(argp,stream,flags,name);
}

#endif
#ifndef argp_parse_OVERRIDE
#define argp_parse_OVERRIDE

error_t argp_parse (const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input){
    error_t  (*original_func)(const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input);
    original_func = dlsym(RTLD_NEXT, "argp_parse");
    preload_log("%s", "");
    return original_func(argp,argc,argv,flags,arg_index,input);
}

#endif
#ifndef argp_state_help_OVERRIDE
#define argp_state_help_OVERRIDE

void argp_state_help (const struct argp_state *state, FILE *stream, unsigned flags){
    void  (*original_func)(const struct argp_state *state, FILE *stream, unsigned flags);
    original_func = dlsym(RTLD_NEXT, "argp_state_help");
    preload_log("%s", "");
    original_func(state,stream,flags);
}

#endif
#ifndef argp_usage_OVERRIDE
#define argp_usage_OVERRIDE

void argp_usage (const struct argp_state *state){
    void  (*original_func)(const struct argp_state *state);
    original_func = dlsym(RTLD_NEXT, "argp_usage");
    preload_log("%s", "");
    original_func(state);
}

#endif
#ifndef argz_add_OVERRIDE
#define argz_add_OVERRIDE

error_t argz_add (char **argz, size_t *argz_len, const char *str){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str);
    original_func = dlsym(RTLD_NEXT, "argz_add");
    preload_log("%s", "");
    return original_func(argz,argz_len,str);
}

#endif
#ifndef argz_add_sep_OVERRIDE
#define argz_add_sep_OVERRIDE

error_t argz_add_sep (char **argz, size_t *argz_len, const char *str, int delim){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str, int delim);
    original_func = dlsym(RTLD_NEXT, "argz_add_sep");
    preload_log("%s", "");
    return original_func(argz,argz_len,str,delim);
}

#endif
#ifndef argz_append_OVERRIDE
#define argz_append_OVERRIDE

error_t argz_append (char **argz, size_t *argz_len, const char *buf, size_t buf_len){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *buf, size_t buf_len);
    original_func = dlsym(RTLD_NEXT, "argz_append");
    preload_log("%s", "");
    return original_func(argz,argz_len,buf,buf_len);
}

#endif
#ifndef argz_count_OVERRIDE
#define argz_count_OVERRIDE

size_t argz_count (const char *argz, size_t argz_len){
    size_t  (*original_func)(const char *argz, size_t argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_count");
    preload_log("%s", "");
    return original_func(argz,argz_len);
}

#endif
#ifndef argz_create_OVERRIDE
#define argz_create_OVERRIDE

error_t argz_create (char *const argv[], char **argz, size_t *argz_len){
    error_t  (*original_func)(char *const argv[], char **argz, size_t *argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_create");
    preload_log("%s", "");
    return original_func(argv,argz,argz_len);
}

#endif
#ifndef argz_create_sep_OVERRIDE
#define argz_create_sep_OVERRIDE

error_t argz_create_sep (const char *string, int sep, char **argz, size_t *argz_len){
    error_t  (*original_func)(const char *string, int sep, char **argz, size_t *argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_create_sep");
    preload_log("%s", "");
    return original_func(string,sep,argz,argz_len);
}

#endif
#ifndef argz_delete_OVERRIDE
#define argz_delete_OVERRIDE

void argz_delete (char **argz, size_t *argz_len, char *entry){
    void  (*original_func)(char **argz, size_t *argz_len, char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_delete");
    preload_log("%s", "");
    original_func(argz,argz_len,entry);
}

#endif
#ifndef argz_extract_OVERRIDE
#define argz_extract_OVERRIDE

void argz_extract (const char *argz, size_t argz_len, char **argv){
    void  (*original_func)(const char *argz, size_t argz_len, char **argv);
    original_func = dlsym(RTLD_NEXT, "argz_extract");
    preload_log("%s", "");
    original_func(argz,argz_len,argv);
}

#endif
#ifndef argz_insert_OVERRIDE
#define argz_insert_OVERRIDE

error_t argz_insert (char **argz, size_t *argz_len, char *before, const char *entry){
    error_t  (*original_func)(char **argz, size_t *argz_len, char *before, const char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_insert");
    preload_log("%s", "");
    return original_func(argz,argz_len,before,entry);
}

#endif
#ifndef argz_next_OVERRIDE
#define argz_next_OVERRIDE

char * argz_next (const char *argz, size_t argz_len, const char *entry){
    char *  (*original_func)(const char *argz, size_t argz_len, const char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_next");
    preload_log("%s", "");
    return original_func(argz,argz_len,entry);
}

#endif
#ifndef argz_replace_OVERRIDE
#define argz_replace_OVERRIDE

error_t argz_replace (char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count);
    original_func = dlsym(RTLD_NEXT, "argz_replace");
    preload_log("%s", "");
    return original_func(argz,argz_len,str,with,replace_count);
}

#endif
#ifndef argz_stringify_OVERRIDE
#define argz_stringify_OVERRIDE

void argz_stringify (char *argz, size_t len, int sep){
    void  (*original_func)(char *argz, size_t len, int sep);
    original_func = dlsym(RTLD_NEXT, "argz_stringify");
    preload_log("%s", "");
    original_func(argz,len,sep);
}

#endif
#ifndef asctime_OVERRIDE
#define asctime_OVERRIDE

char * asctime (const struct tm *brokentime){
    char *  (*original_func)(const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "asctime");
    preload_log("%s", "");
    return original_func(brokentime);
}

#endif
#ifndef asctime_r_OVERRIDE
#define asctime_r_OVERRIDE

char * asctime_r (const struct tm *brokentime, char *buffer){
    char *  (*original_func)(const struct tm *brokentime, char *buffer);
    original_func = dlsym(RTLD_NEXT, "asctime_r");
    preload_log("%s", "");
    return original_func(brokentime,buffer);
}

#endif
#ifndef asin_OVERRIDE
#define asin_OVERRIDE

double asin (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "asin");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asinf_OVERRIDE
#define asinf_OVERRIDE

float asinf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "asinf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asinh_OVERRIDE
#define asinh_OVERRIDE

double asinh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "asinh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asinhf_OVERRIDE
#define asinhf_OVERRIDE

float asinhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "asinhf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asinhl_OVERRIDE
#define asinhl_OVERRIDE

long double asinhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "asinhl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asinl_OVERRIDE
#define asinl_OVERRIDE

long double asinl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "asinl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef asprintf_OVERRIDE
#define asprintf_OVERRIDE

int asprintf (char **ptr, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char **ptr, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "asprintf");
    preload_log("%s", "");
    int  ret_val = original_func(ptr,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef atan_OVERRIDE
#define atan_OVERRIDE

double atan (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "atan");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atan2_OVERRIDE
#define atan2_OVERRIDE

double atan2 (double y, double x){
    double  (*original_func)(double y, double x);
    original_func = dlsym(RTLD_NEXT, "atan2");
    preload_log("%s", "");
    return original_func(y,x);
}

#endif
#ifndef atan2f_OVERRIDE
#define atan2f_OVERRIDE

float atan2f (float y, float x){
    float  (*original_func)(float y, float x);
    original_func = dlsym(RTLD_NEXT, "atan2f");
    preload_log("%s", "");
    return original_func(y,x);
}

#endif
#ifndef atan2l_OVERRIDE
#define atan2l_OVERRIDE

long double atan2l (long double y, long double x){
    long double  (*original_func)(long double y, long double x);
    original_func = dlsym(RTLD_NEXT, "atan2l");
    preload_log("%s", "");
    return original_func(y,x);
}

#endif
#ifndef atanf_OVERRIDE
#define atanf_OVERRIDE

float atanf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "atanf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atanh_OVERRIDE
#define atanh_OVERRIDE

double atanh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "atanh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atanhf_OVERRIDE
#define atanhf_OVERRIDE

float atanhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "atanhf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atanhl_OVERRIDE
#define atanhl_OVERRIDE

long double atanhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "atanhl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atanl_OVERRIDE
#define atanl_OVERRIDE

long double atanl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "atanl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef atexit_OVERRIDE
#define atexit_OVERRIDE

int atexit (void (*function) (void)){
    int  (*original_func)(void (*function) (void));
    original_func = dlsym(RTLD_NEXT, "atexit");
    preload_log("%s", "");
    return original_func(function);
}

#endif
#ifndef atof_OVERRIDE
#define atof_OVERRIDE

double atof (const char *string){
    double  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atof");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef atoi_OVERRIDE
#define atoi_OVERRIDE

int atoi (const char *string){
    int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atoi");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef atol_OVERRIDE
#define atol_OVERRIDE

long int atol (const char *string){
    long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atol");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef atoll_OVERRIDE
#define atoll_OVERRIDE

long long int atoll (const char *string){
    long long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atoll");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef backtrace_OVERRIDE
#define backtrace_OVERRIDE

int backtrace (void **buffer, int size){
    int  (*original_func)(void **buffer, int size);
    original_func = dlsym(RTLD_NEXT, "backtrace");
    preload_log("%s", "");
    return original_func(buffer,size);
}

#endif 
#ifndef backtrace_symbols_OVERRIDE
#define backtrace_symbols_OVERRIDE

char ** backtrace_symbols (void *const *buffer, int size){
    char **  (*original_func)(void *const *buffer, int size);
    original_func = dlsym(RTLD_NEXT, "backtrace_symbols");
    preload_log("%s", "");
    return original_func(buffer,size);
}

#endif
#ifndef backtrace_symbols_fd_OVERRIDE
#define backtrace_symbols_fd_OVERRIDE

void backtrace_symbols_fd (void *const *buffer, int size, int fd){
    void  (*original_func)(void *const *buffer, int size, int fd);
    original_func = dlsym(RTLD_NEXT, "backtrace_symbols_fd");
    preload_log("%s", "");
    original_func(buffer,size,fd);
}

#endif 
#ifndef basename_OVERRIDE
#define basename_OVERRIDE

char * basename (char *path){
    char *  (*original_func)(char *path);
    original_func = dlsym(RTLD_NEXT, "basename");
    preload_log("%s", "");
    return original_func(path);
}

#endif
#ifndef bcmp_OVERRIDE
#define bcmp_OVERRIDE

int bcmp (const void *a1, const void *a2, size_t size){
    int  (*original_func)(const void *a1, const void *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "bcmp");
    preload_log("%s", "");
    return original_func(a1,a2,size);
}

#endif
#ifndef bcopy_OVERRIDE
#define bcopy_OVERRIDE

void bcopy (const void *from, void *to, size_t size){
    void  (*original_func)(const void *from, void *to, size_t size);
    original_func = dlsym(RTLD_NEXT, "bcopy");
    preload_log("%s", "");
    original_func(from,to,size);
}

#endif 
#ifndef bind_OVERRIDE
#define bind_OVERRIDE

int bind (int socket, const struct sockaddr *addr, socklen_t length){
    int  (*original_func)(int socket, const struct sockaddr *addr, socklen_t length);
    original_func = dlsym(RTLD_NEXT, "bind");
    preload_log("%s", "");
    return original_func(socket,addr,length);
}

#endif
#ifndef bindtextdomain_OVERRIDE
#define bindtextdomain_OVERRIDE

char * bindtextdomain (const char *domainname, const char *dirname){
    char *  (*original_func)(const char *domainname, const char *dirname);
    original_func = dlsym(RTLD_NEXT, "bindtextdomain");
    preload_log("%s", "");
    return original_func(domainname,dirname);
}

#endif
#ifndef bind_textdomain_codeset_OVERRIDE
#define bind_textdomain_codeset_OVERRIDE

char * bind_textdomain_codeset (const char *domainname, const char *codeset){
    char *  (*original_func)(const char *domainname, const char *codeset);
    original_func = dlsym(RTLD_NEXT, "bind_textdomain_codeset");
    preload_log("%s", "");
    return original_func(domainname,codeset);
}

#endif 

#ifndef brk_OVERRIDE
#define brk_OVERRIDE

int brk (void *addr){
    int  (*original_func)(void *addr);
    original_func = dlsym(RTLD_NEXT, "brk");
    preload_log("%s", "");
    return original_func(addr);
}

#endif 

#ifndef bsearch_OVERRIDE
#define bsearch_OVERRIDE

void * bsearch (const void *key, const void *array, size_t count, size_t size, int(*compare)(const void *, const void *)){
    void *  (*original_func)(const void *key, const void *array, size_t count, size_t size, int(*compare)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "bsearch");
    preload_log("%s", "");
    return original_func(key,array,count,size,compare);
}

#endif
#ifndef btowc_OVERRIDE
#define btowc_OVERRIDE

wint_t btowc (int c){
    wint_t  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "btowc");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef bzero_OVERRIDE
#define bzero_OVERRIDE

void bzero (void *block, size_t size){
    void  (*original_func)(void *block, size_t size);
    original_func = dlsym(RTLD_NEXT, "bzero");
    preload_log("%s", "");
    original_func(block,size);
}

#endif 
#ifndef cabs_OVERRIDE
#define cabs_OVERRIDE

double cabs (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cabs");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cabsf_OVERRIDE
#define cabsf_OVERRIDE

float cabsf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cabsf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cabsl_OVERRIDE
#define cabsl_OVERRIDE

long double cabsl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cabsl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacos_OVERRIDE
#define cacos_OVERRIDE

complex double cacos (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cacos");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacosf_OVERRIDE
#define cacosf_OVERRIDE

complex float cacosf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cacosf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacosh_OVERRIDE
#define cacosh_OVERRIDE

complex double cacosh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cacosh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacoshf_OVERRIDE
#define cacoshf_OVERRIDE

complex float cacoshf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cacoshf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacoshl_OVERRIDE
#define cacoshl_OVERRIDE

complex long double cacoshl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cacoshl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cacosl_OVERRIDE
#define cacosl_OVERRIDE

complex long double cacosl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cacosl");
    preload_log("%s", "");
    return original_func(z);
}

#endif 
// #ifndef calloc_OVERRIDE
// #define calloc_OVERRIDE

// void * calloc (size_t count, size_t eltsize){
//     void *  (*original_func)(size_t count, size_t eltsize);
//     original_func = dlsym(RTLD_NEXT, "calloc");
//     preload_log("%s", "");
//     return original_func(count,eltsize);
// }

// #endif
#ifndef canonicalize_OVERRIDE
#define canonicalize_OVERRIDE

int canonicalize (double *cx, const double *x){
    int  (*original_func)(double *cx, const double *x);
    original_func = dlsym(RTLD_NEXT, "canonicalize");
    preload_log("%s", "");
    return original_func(cx,x);
}

#endif
#ifndef canonicalizef_OVERRIDE
#define canonicalizef_OVERRIDE

int canonicalizef (float *cx, const float *x){
    int  (*original_func)(float *cx, const float *x);
    original_func = dlsym(RTLD_NEXT, "canonicalizef");
    preload_log("%s", "");
    return original_func(cx,x);
}

#endif 
#ifndef canonicalizel_OVERRIDE
#define canonicalizel_OVERRIDE

int canonicalizel (long double *cx, const long double *x){
    int  (*original_func)(long double *cx, const long double *x);
    original_func = dlsym(RTLD_NEXT, "canonicalizel");
    preload_log("%s", "");
    return original_func(cx,x);
}

#endif
#ifndef canonicalize_file_name_OVERRIDE
#define canonicalize_file_name_OVERRIDE

char * canonicalize_file_name (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "canonicalize_file_name");
    preload_log("%s", "");
    return original_func(name);
}

#endif 
#ifndef carg_OVERRIDE
#define carg_OVERRIDE

double carg (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "carg");
    preload_log("%s", "");
    return original_func(z);
}

#endif  
#ifndef cargf_OVERRIDE
#define cargf_OVERRIDE

float cargf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cargf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cargl_OVERRIDE
#define cargl_OVERRIDE

long double cargl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cargl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef casin_OVERRIDE
#define casin_OVERRIDE

complex double casin (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "casin");
    preload_log("%s", "");
    return original_func(z);
}

#endif 
#ifndef casinf_OVERRIDE
#define casinf_OVERRIDE

complex float casinf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "casinf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef casinh_OVERRIDE
#define casinh_OVERRIDE

complex double casinh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "casinh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef casinhf_OVERRIDE
#define casinhf_OVERRIDE

complex float casinhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "casinhf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef casinhl_OVERRIDE
#define casinhl_OVERRIDE

complex long double casinhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "casinhl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef casinl_OVERRIDE
#define casinl_OVERRIDE

complex long double casinl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "casinl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catan_OVERRIDE
#define catan_OVERRIDE

complex double catan (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "catan");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catanf_OVERRIDE
#define catanf_OVERRIDE

complex float catanf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "catanf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catanh_OVERRIDE
#define catanh_OVERRIDE

complex double catanh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "catanh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catanhf_OVERRIDE
#define catanhf_OVERRIDE

complex float catanhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "catanhf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catanhl_OVERRIDE
#define catanhl_OVERRIDE

complex long double catanhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "catanhl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catanl_OVERRIDE
#define catanl_OVERRIDE

complex long double catanl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "catanl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef catclose_OVERRIDE
#define catclose_OVERRIDE

int catclose (nl_catd catalog_desc){
    int  (*original_func)(nl_catd catalog_desc);
    original_func = dlsym(RTLD_NEXT, "catclose");
    preload_log("%s", "");
    return original_func(catalog_desc);
}

#endif
#ifndef catgets_OVERRIDE
#define catgets_OVERRIDE

char * catgets (nl_catd catalog_desc, int set, int message, const char *string){
    char *  (*original_func)(nl_catd catalog_desc, int set, int message, const char *string);
    original_func = dlsym(RTLD_NEXT, "catgets");
    preload_log("%s", "");
    return original_func(catalog_desc,set,message,string);
}

#endif
#ifndef catopen_OVERRIDE
#define catopen_OVERRIDE

nl_catd catopen (const char *cat_name, int flag){
    nl_catd  (*original_func)(const char *cat_name, int flag);
    original_func = dlsym(RTLD_NEXT, "catopen");
    preload_log("%s", "");
    return original_func(cat_name,flag);
}

#endif
#ifndef cbrt_OVERRIDE
#define cbrt_OVERRIDE

double cbrt (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cbrt");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cbrtf_OVERRIDE
#define cbrtf_OVERRIDE

float cbrtf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "cbrtf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cbrtl_OVERRIDE
#define cbrtl_OVERRIDE

long double cbrtl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "cbrtl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef ccos_OVERRIDE
#define ccos_OVERRIDE

complex double ccos (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ccos");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ccosf_OVERRIDE
#define ccosf_OVERRIDE

complex float ccosf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ccosf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ccosh_OVERRIDE
#define ccosh_OVERRIDE

complex double ccosh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ccosh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ccoshf_OVERRIDE
#define ccoshf_OVERRIDE

complex float ccoshf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ccoshf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ccoshl_OVERRIDE
#define ccoshl_OVERRIDE

complex long double ccoshl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ccoshl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ccosl_OVERRIDE
#define ccosl_OVERRIDE

complex long double ccosl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ccosl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ceil_OVERRIDE
#define ceil_OVERRIDE

double ceil (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "ceil");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef ceilf_OVERRIDE
#define ceilf_OVERRIDE

float ceilf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "ceilf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef ceill_OVERRIDE
#define ceill_OVERRIDE

long double ceill (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "ceill");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cexp_OVERRIDE
#define cexp_OVERRIDE

complex double cexp (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cexp");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cexpf_OVERRIDE
#define cexpf_OVERRIDE

complex float cexpf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cexpf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cexpl_OVERRIDE
#define cexpl_OVERRIDE

complex long double cexpl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cexpl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cfgetispeed_OVERRIDE
#define cfgetispeed_OVERRIDE

speed_t cfgetispeed (const struct termios *termios_p){
    speed_t  (*original_func)(const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfgetispeed");
    preload_log("%s", "");
    return original_func(termios_p);
}

#endif
#ifndef cfgetospeed_OVERRIDE
#define cfgetospeed_OVERRIDE

speed_t cfgetospeed (const struct termios *termios_p){
    speed_t  (*original_func)(const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfgetospeed");
    preload_log("%s", "");
    return original_func(termios_p);
}

#endif
#ifndef cfmakeraw_OVERRIDE
#define cfmakeraw_OVERRIDE

void cfmakeraw (struct termios *termios_p){
    void  (*original_func)(struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfmakeraw");
    preload_log("%s", "");
    return original_func(termios_p);
}

#endif
#ifndef cfsetispeed_OVERRIDE
#define cfsetispeed_OVERRIDE

int cfsetispeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetispeed");
    preload_log("%s", "");
    return original_func(termios_p,speed);
}

#endif
#ifndef cfsetospeed_OVERRIDE
#define cfsetospeed_OVERRIDE

int cfsetospeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetospeed");
    preload_log("%s", "");
    return original_func(termios_p,speed);
}

#endif
#ifndef cfsetspeed_OVERRIDE
#define cfsetspeed_OVERRIDE

int cfsetspeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetspeed");
    preload_log("%s", "");
    return original_func(termios_p,speed);
}

#endif
#ifndef chdir_OVERRIDE
#define chdir_OVERRIDE

int chdir (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "chdir");
    preload_log("%s", "");
    return original_func(filename);
}

#endif
#ifndef chmod_OVERRIDE
#define chmod_OVERRIDE

int chmod (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "chmod");
    preload_log("%s", "");
    return original_func(filename,mode);
}

#endif
#ifndef chown_OVERRIDE
#define chown_OVERRIDE

int chown (const char *filename, uid_t owner, gid_t group){
    int  (*original_func)(const char *filename, uid_t owner, gid_t group);
    original_func = dlsym(RTLD_NEXT, "chown");
    preload_log("%s", "");
    return original_func(filename,owner,group);
}

#endif
#ifndef cimag_OVERRIDE
#define cimag_OVERRIDE

double cimag (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cimag");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cimagf_OVERRIDE
#define cimagf_OVERRIDE

float cimagf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cimagf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cimagl_OVERRIDE
#define cimagl_OVERRIDE

long double cimagl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cimagl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clearenv_OVERRIDE
#define clearenv_OVERRIDE

int clearenv (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "clearenv");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef clearerr_OVERRIDE
#define clearerr_OVERRIDE

void clearerr (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "clearerr");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef clearerr_unlocked_OVERRIDE
#define clearerr_unlocked_OVERRIDE

void clearerr_unlocked (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "clearerr_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef clock_OVERRIDE
#define clock_OVERRIDE

clock_t clock (void){
    clock_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "clock");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef clock_getres_OVERRIDE
#define clock_getres_OVERRIDE

int clock_getres (clockid_t clock, struct timespec *res){
    int  (*original_func)(clockid_t clock, struct timespec *res);
    original_func = dlsym(RTLD_NEXT, "clock_getres");
    preload_log("%s", "");
    return original_func(clock,res);
}

#endif
#ifndef clock_gettime_OVERRIDE
#define clock_gettime_OVERRIDE

int clock_gettime (clockid_t clock, struct timespec *ts){
    int  (*original_func)(clockid_t clock, struct timespec *ts);
    original_func = dlsym(RTLD_NEXT, "clock_gettime");
    preload_log("%s", "");
    return original_func(clock,ts);
}

#endif
#ifndef clock_settime_OVERRIDE
#define clock_settime_OVERRIDE

int clock_settime (clockid_t clock, const struct timespec *ts){
    int  (*original_func)(clockid_t clock, const struct timespec *ts);
    original_func = dlsym(RTLD_NEXT, "clock_settime");
    preload_log("%s", "");
    return original_func(clock,ts);
}

#endif
#ifndef clog_OVERRIDE
#define clog_OVERRIDE

complex double clog (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "clog");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clog10_OVERRIDE
#define clog10_OVERRIDE

complex double clog10 (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "clog10");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clog10f_OVERRIDE
#define clog10f_OVERRIDE

complex float clog10f (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "clog10f");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clog10l_OVERRIDE
#define clog10l_OVERRIDE

complex long double clog10l (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "clog10l");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clogf_OVERRIDE
#define clogf_OVERRIDE

complex float clogf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "clogf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef clogl_OVERRIDE
#define clogl_OVERRIDE

complex long double clogl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "clogl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef close_OVERRIDE
#define close_OVERRIDE

int close (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "close");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef closedir_OVERRIDE
#define closedir_OVERRIDE

int closedir (DIR *dirstream){
    int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "closedir");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif
#ifndef closelog_OVERRIDE
#define closelog_OVERRIDE

void closelog (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "closelog");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef confstr_OVERRIDE
#define confstr_OVERRIDE

size_t confstr (int parameter, char *buf, size_t len){
    size_t  (*original_func)(int parameter, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "confstr");
    preload_log("%s", "");
    return original_func(parameter,buf,len);
}

#endif
#ifndef conj_OVERRIDE
#define conj_OVERRIDE

complex double conj (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "conj");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef conjf_OVERRIDE
#define conjf_OVERRIDE

complex float conjf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "conjf");
    preload_log("%s", "");
    return original_func(z);
}

#endif 
#ifndef conjl_OVERRIDE
#define conjl_OVERRIDE

complex long double conjl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "conjl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef connect_OVERRIDE
#define connect_OVERRIDE

int connect (int socket, const struct sockaddr *addr, socklen_t length){
    int  (*original_func)(int socket, const struct sockaddr *addr, socklen_t length);
    original_func = dlsym(RTLD_NEXT, "connect");
    preload_log("%s", "");
    return original_func(socket,addr,length);
}

#endif
#ifndef copysign_OVERRIDE
#define copysign_OVERRIDE

double copysign (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "copysign");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef copysignf_OVERRIDE
#define copysignf_OVERRIDE

float copysignf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "copysignf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef copysignl_OVERRIDE
#define copysignl_OVERRIDE

long double copysignl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "copysignl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef copy_file_range_OVERRIDE
#define copy_file_range_OVERRIDE

ssize_t copy_file_range (int inputfd, loff_t *inputpos, int outputfd, loff_t *outputpos, size_t length, unsigned int flags){
    ssize_t  (*original_func)(int inputfd, loff_t *inputpos, int outputfd, loff_t *outputpos, size_t length, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "copy_file_range");
    preload_log("%s", "");
    return original_func(inputfd,inputpos,outputfd,outputpos,length,flags);
}

#endif
#ifndef cos_OVERRIDE
#define cos_OVERRIDE

double cos (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cos");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cosf_OVERRIDE
#define cosf_OVERRIDE

float cosf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "cosf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cosh_OVERRIDE
#define cosh_OVERRIDE

double cosh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cosh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef coshf_OVERRIDE
#define coshf_OVERRIDE

float coshf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "coshf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef coshl_OVERRIDE
#define coshl_OVERRIDE

long double coshl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "coshl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef cosl_OVERRIDE
#define cosl_OVERRIDE

long double cosl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "cosl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef cpow_OVERRIDE
#define cpow_OVERRIDE

complex double cpow (complex double base, complex double power){
    complex double  (*original_func)(complex double base, complex double power);
    original_func = dlsym(RTLD_NEXT, "cpow");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef cpowf_OVERRIDE
#define cpowf_OVERRIDE

complex float cpowf (complex float base, complex float power){
    complex float  (*original_func)(complex float base, complex float power);
    original_func = dlsym(RTLD_NEXT, "cpowf");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef cpowl_OVERRIDE
#define cpowl_OVERRIDE

complex long double cpowl (complex long double base, complex long double power){
    complex long double  (*original_func)(complex long double base, complex long double power);
    original_func = dlsym(RTLD_NEXT, "cpowl");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef cproj_OVERRIDE
#define cproj_OVERRIDE

complex double cproj (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cproj");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cprojf_OVERRIDE
#define cprojf_OVERRIDE

complex float cprojf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cprojf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef cprojl_OVERRIDE
#define cprojl_OVERRIDE

complex long double cprojl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cprojl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef creal_OVERRIDE
#define creal_OVERRIDE

double creal (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "creal");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef crealf_OVERRIDE
#define crealf_OVERRIDE

float crealf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "crealf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef creall_OVERRIDE
#define creall_OVERRIDE

long double creall (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "creall");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef creat_OVERRIDE
#define creat_OVERRIDE

int creat (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "creat");
    preload_log("%s", "");
    return original_func(filename,mode);
}

#endif
#ifndef creat64_OVERRIDE
#define creat64_OVERRIDE

int creat64 (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "creat64");
    preload_log("%s", "");
    return original_func(filename,mode);
}

#endif
#ifndef crypt_OVERRIDE
#define crypt_OVERRIDE

char * crypt (const char *phrase, const char *salt){
    char *  (*original_func)(const char *phrase, const char *salt);
    original_func = dlsym(RTLD_NEXT, "crypt");
    preload_log("%s", "");
    return original_func(phrase,salt);
}

#endif
#ifndef crypt_r_OVERRIDE
#define crypt_r_OVERRIDE

char * crypt_r (const char *phrase, const char *salt, struct crypt_data *data){
    char *  (*original_func)(const char *phrase, const char *salt, struct crypt_data *data);
    original_func = dlsym(RTLD_NEXT, "crypt_r");
    preload_log("%s", "");
    return original_func(phrase,salt,data);
}

#endif
#ifndef csin_OVERRIDE
#define csin_OVERRIDE

complex double csin (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csin");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csinf_OVERRIDE
#define csinf_OVERRIDE

complex float csinf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csinf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csinh_OVERRIDE
#define csinh_OVERRIDE

complex double csinh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csinh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csinhf_OVERRIDE
#define csinhf_OVERRIDE

complex float csinhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csinhf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csinhl_OVERRIDE
#define csinhl_OVERRIDE

complex long double csinhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csinhl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csinl_OVERRIDE
#define csinl_OVERRIDE

complex long double csinl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csinl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csqrt_OVERRIDE
#define csqrt_OVERRIDE

complex double csqrt (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csqrt");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csqrtf_OVERRIDE
#define csqrtf_OVERRIDE

complex float csqrtf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csqrtf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef csqrtl_OVERRIDE
#define csqrtl_OVERRIDE

complex long double csqrtl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csqrtl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctan_OVERRIDE
#define ctan_OVERRIDE

complex double ctan (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ctan");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctanf_OVERRIDE
#define ctanf_OVERRIDE

complex float ctanf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ctanf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctanh_OVERRIDE
#define ctanh_OVERRIDE

complex double ctanh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ctanh");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctanhf_OVERRIDE
#define ctanhf_OVERRIDE

complex float ctanhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ctanhf");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctanhl_OVERRIDE
#define ctanhl_OVERRIDE

complex long double ctanhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ctanhl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctanl_OVERRIDE
#define ctanl_OVERRIDE

complex long double ctanl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ctanl");
    preload_log("%s", "");
    return original_func(z);
}

#endif
#ifndef ctermid_OVERRIDE
#define ctermid_OVERRIDE

char * ctermid (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "ctermid");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef ctime_OVERRIDE
#define ctime_OVERRIDE

char * ctime (const time_t *time){
    char *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "ctime");
    preload_log("%s", "");
    return original_func(time);
}

#endif
#ifndef ctime_r_OVERRIDE
#define ctime_r_OVERRIDE

char * ctime_r (const time_t *time, char *buffer){
    char *  (*original_func)(const time_t *time, char *buffer);
    original_func = dlsym(RTLD_NEXT, "ctime_r");
    preload_log("%s", "");
    return original_func(time,buffer);
}

#endif
#ifndef cuserid_OVERRIDE
#define cuserid_OVERRIDE

char * cuserid (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "cuserid");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef daddl_OVERRIDE
#define daddl_OVERRIDE

double daddl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "daddl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef dcgettext_OVERRIDE
#define dcgettext_OVERRIDE

char * dcgettext (const char *domainname, const char *msgid, int category){
    char *  (*original_func)(const char *domainname, const char *msgid, int category);
    original_func = dlsym(RTLD_NEXT, "dcgettext");
    preload_log("%s", "");
    return original_func(domainname,msgid,category);
}

#endif
#ifndef dcngettext_OVERRIDE
#define dcngettext_OVERRIDE

char * dcngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n, int category){
    char *  (*original_func)(const char *domain, const char *msgid1, const char *msgid2, unsigned long int n, int category);
    original_func = dlsym(RTLD_NEXT, "dcngettext");
    preload_log("%s", "");
    return original_func(domain,msgid1,msgid2,n,category);
}

#endif
#ifndef ddivl_OVERRIDE
#define ddivl_OVERRIDE

double ddivl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "ddivl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef dgettext_OVERRIDE
#define dgettext_OVERRIDE

char * dgettext (const char *domainname, const char *msgid){
    char *  (*original_func)(const char *domainname, const char *msgid);
    original_func = dlsym(RTLD_NEXT, "dgettext");
    preload_log("%s", "");
    return original_func(domainname,msgid);
}

#endif
#ifndef difftime_OVERRIDE
#define difftime_OVERRIDE

double difftime (time_t end, time_t begin){
    double  (*original_func)(time_t end, time_t begin);
    original_func = dlsym(RTLD_NEXT, "difftime");
    preload_log("%s", "");
    return original_func(end,begin);
}

#endif
#ifndef dirfd_OVERRIDE
#define dirfd_OVERRIDE

int dirfd (DIR *dirstream){
    int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "dirfd");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif
#ifndef dirname_OVERRIDE
#define dirname_OVERRIDE

char * dirname (char *path){
    char *  (*original_func)(char *path);
    original_func = dlsym(RTLD_NEXT, "dirname");
    preload_log("%s", "");
    return original_func(path);
}

#endif
#ifndef div_OVERRIDE
#define div_OVERRIDE

div_t div (int numerator, int denominator){
    div_t  (*original_func)(int numerator, int denominator);
    original_func = dlsym(RTLD_NEXT, "div");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef dmull_OVERRIDE
#define dmull_OVERRIDE

double dmull (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "dmull");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef dngettext_OVERRIDE
#define dngettext_OVERRIDE

char * dngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n){
    char *  (*original_func)(const char *domain, const char *msgid1, const char *msgid2, unsigned long int n);
    original_func = dlsym(RTLD_NEXT, "dngettext");
    preload_log("%s", "");
    return original_func(domain,msgid1,msgid2,n);
}

#endif
#ifndef drand48_OVERRIDE
#define drand48_OVERRIDE

double drand48 (void){
    double  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "drand48");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef drand48_r_OVERRIDE
#define drand48_r_OVERRIDE

int drand48_r (struct drand48_data *buffer, double *result){
    int  (*original_func)(struct drand48_data *buffer, double *result);
    original_func = dlsym(RTLD_NEXT, "drand48_r");
    preload_log("%s", "");
    return original_func(buffer,result);
}

#endif
#ifndef drem_OVERRIDE
#define drem_OVERRIDE

double drem (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "drem");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef dremf_OVERRIDE
#define dremf_OVERRIDE

float dremf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "dremf");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef dreml_OVERRIDE
#define dreml_OVERRIDE

long double dreml (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "dreml");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef dsubl_OVERRIDE
#define dsubl_OVERRIDE

double dsubl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "dsubl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef dup_OVERRIDE
#define dup_OVERRIDE

int dup (int old){
    int  (*original_func)(int old);
    original_func = dlsym(RTLD_NEXT, "dup");
    preload_log("%s", "");
    return original_func(old);
}

#endif
#ifndef dup2_OVERRIDE
#define dup2_OVERRIDE

int dup2 (int old, int new){
    int  (*original_func)(int old, int new);
    original_func = dlsym(RTLD_NEXT, "dup2");
    preload_log("%s", "");
    return original_func(old,new);
}

#endif
#ifndef ecvt_OVERRIDE
#define ecvt_OVERRIDE

char * ecvt (double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "ecvt");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg);
}

#endif
#ifndef ecvt_r_OVERRIDE
#define ecvt_r_OVERRIDE

int ecvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ecvt_r");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg,buf,len);
}

#endif
#ifndef endfsent_OVERRIDE
#define endfsent_OVERRIDE

void endfsent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endfsent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endgrent_OVERRIDE
#define endgrent_OVERRIDE

void endgrent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endgrent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endhostent_OVERRIDE
#define endhostent_OVERRIDE

void endhostent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endhostent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endmntent_OVERRIDE
#define endmntent_OVERRIDE

int endmntent (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "endmntent");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef endnetent_OVERRIDE
#define endnetent_OVERRIDE

void endnetent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endnetent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endnetgrent_OVERRIDE
#define endnetgrent_OVERRIDE

void endnetgrent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endnetgrent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endprotoent_OVERRIDE
#define endprotoent_OVERRIDE

void endprotoent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endprotoent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endpwent_OVERRIDE
#define endpwent_OVERRIDE

void endpwent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endpwent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef endservent_OVERRIDE
#define endservent_OVERRIDE

void endservent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endservent");
    preload_log("%s", "");
    return original_func();
}

#endif 
#ifndef endutent_OVERRIDE
#define endutent_OVERRIDE

void endutent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endutent");
    preload_log("%s", "");
    return original_func();
}

#endif 
#ifndef endutxent_OVERRIDE
#define endutxent_OVERRIDE

void endutxent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "endutxent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef envz_add_OVERRIDE
#define envz_add_OVERRIDE

error_t envz_add (char **envz, size_t *envz_len, const char *name, const char *value){
    error_t  (*original_func)(char **envz, size_t *envz_len, const char *name, const char *value);
    original_func = dlsym(RTLD_NEXT, "envz_add");
    preload_log("%s", "");
    return original_func(envz,envz_len,name,value);
}

#endif
#ifndef envz_entry_OVERRIDE
#define envz_entry_OVERRIDE

char * envz_entry (const char *envz, size_t envz_len, const char *name){
    char *  (*original_func)(const char *envz, size_t envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_entry");
    preload_log("%s", "");
    return original_func(envz,envz_len,name);
}

#endif
#ifndef envz_get_OVERRIDE
#define envz_get_OVERRIDE

char * envz_get (const char *envz, size_t envz_len, const char *name){
    char *  (*original_func)(const char *envz, size_t envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_get");
    preload_log("%s", "");
    return original_func(envz,envz_len,name);
}

#endif
#ifndef envz_merge_OVERRIDE
#define envz_merge_OVERRIDE

error_t envz_merge (char **envz, size_t *envz_len, const char *envz2, size_t envz2_len, int override){
    error_t  (*original_func)(char **envz, size_t *envz_len, const char *envz2, size_t envz2_len, int override);
    original_func = dlsym(RTLD_NEXT, "envz_merge");
    preload_log("%s", "");
    return original_func(envz,envz_len,envz2,envz2_len,override);
}

#endif
#ifndef envz_remove_OVERRIDE
#define envz_remove_OVERRIDE

void envz_remove (char **envz, size_t *envz_len, const char *name){
    void  (*original_func)(char **envz, size_t *envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_remove");
    preload_log("%s", "");
    return original_func(envz,envz_len,name);
}

#endif
#ifndef envz_strip_OVERRIDE
#define envz_strip_OVERRIDE

void envz_strip (char **envz, size_t *envz_len){
    void  (*original_func)(char **envz, size_t *envz_len);
    original_func = dlsym(RTLD_NEXT, "envz_strip");
    preload_log("%s", "");
    return original_func(envz,envz_len);
}

#endif
#ifndef erand48_OVERRIDE
#define erand48_OVERRIDE

double erand48 (unsigned short int xsubi[3]){
    double  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "erand48");
    preload_log("%s", "");
    return original_func(xsubi);
}

#endif
#ifndef erand48_r_OVERRIDE
#define erand48_r_OVERRIDE

int erand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, double *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, double *result);
    original_func = dlsym(RTLD_NEXT, "erand48_r");
    preload_log("%s", "");
    return original_func(xsubi,buffer,result);
}

#endif
#ifndef erf_OVERRIDE
#define erf_OVERRIDE

double erf (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "erf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef erfc_OVERRIDE
#define erfc_OVERRIDE

double erfc (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "erfc");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef erfcf_OVERRIDE
#define erfcf_OVERRIDE

float erfcf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "erfcf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef erfcl_OVERRIDE
#define erfcl_OVERRIDE

long double erfcl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "erfcl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef erff_OVERRIDE
#define erff_OVERRIDE

float erff (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "erff");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef erfl_OVERRIDE
#define erfl_OVERRIDE

long double erfl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "erfl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef err_OVERRIDE
#define err_OVERRIDE

void err (int status, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "err");
    preload_log("%s", "");
    
    original_func(status,format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef error_OVERRIDE
#define error_OVERRIDE

void error (int status, int errnum, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, int errnum, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "error");
    preload_log("%s", "");
    original_func(status,errnum,format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef error_at_line_OVERRIDE
#define error_at_line_OVERRIDE

void error_at_line (int status, int errnum, const char *fname, unsigned int lineno, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, int errnum, const char *fname, unsigned int lineno, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "error_at_line");
    preload_log("%s", "");
    original_func(status,errnum,fname,lineno,format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef errx_OVERRIDE
#define errx_OVERRIDE

void errx (int status, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "errx");
    preload_log("%s", "");
    original_func(status,format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef execl_OVERRIDE
#define execl_OVERRIDE

int execl (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execl");
    preload_log("%s", "");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef execle_OVERRIDE
#define execle_OVERRIDE

int execle (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execle");
    preload_log("%s", "");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef execlp_OVERRIDE
#define execlp_OVERRIDE

int execlp (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execlp");
    preload_log("%s", "");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef execv_OVERRIDE
#define execv_OVERRIDE

int execv (const char *filename, char *const argv[]){
    int  (*original_func)(const char *filename, char *const argv[]);
    original_func = dlsym(RTLD_NEXT, "execv");
    preload_log("%s", "");
    return original_func(filename,argv);
}

#endif

#ifndef execve_OVERRIDE
#define execve_OVERRIDE

int execve (const char *filename, char *const argv[], char *const env[]){
    int  (*original_func)(const char *filename, char *const argv[], char *const env[]);
    original_func = dlsym(RTLD_NEXT, "execve");
    preload_log("%s", "");
    preload_log("%s", "OUIOUOIUOIU");
    return original_func(filename,argv,env);
}

#endif 

#ifndef execvp_OVERRIDE
#define execvp_OVERRIDE

int execvp (const char *filename, char *const argv[]){
    int  (*original_func)(const char *filename, char *const argv[]);
    original_func = dlsym(RTLD_NEXT, "execvp");
    preload_log("%s", "");
    return original_func(filename,argv);
}

#endif
#ifndef exit_OVERRIDE
#define exit_OVERRIDE

void exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "exit");
    preload_log("%s", "");
    original_func(status);
}

#endif
#ifndef exp_OVERRIDE
#define exp_OVERRIDE

double exp (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp10_OVERRIDE
#define exp10_OVERRIDE

double exp10 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp10");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp10f_OVERRIDE
#define exp10f_OVERRIDE

float exp10f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "exp10f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp10l_OVERRIDE
#define exp10l_OVERRIDE

long double exp10l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "exp10l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp2_OVERRIDE
#define exp2_OVERRIDE

double exp2 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp2");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp2f_OVERRIDE
#define exp2f_OVERRIDE

float exp2f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "exp2f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef exp2l_OVERRIDE
#define exp2l_OVERRIDE

long double exp2l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "exp2l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef expf_OVERRIDE
#define expf_OVERRIDE

float expf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "expf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef expl_OVERRIDE
#define expl_OVERRIDE

long double expl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "expl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef explicit_bzero_OVERRIDE
#define explicit_bzero_OVERRIDE

void explicit_bzero (void *block, size_t len){
    void  (*original_func)(void *block, size_t len);
    original_func = dlsym(RTLD_NEXT, "explicit_bzero");
    preload_log("%s", "");
    return original_func(block,len);
}

#endif
#ifndef expm1_OVERRIDE
#define expm1_OVERRIDE

double expm1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "expm1");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef expm1f_OVERRIDE
#define expm1f_OVERRIDE

float expm1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "expm1f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef expm1l_OVERRIDE
#define expm1l_OVERRIDE

long double expm1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "expm1l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef fabs_OVERRIDE
#define fabs_OVERRIDE

double fabs (double number){
    double  (*original_func)(double number);
    original_func = dlsym(RTLD_NEXT, "fabs");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef fabsf_OVERRIDE
#define fabsf_OVERRIDE

float fabsf (float number){
    float  (*original_func)(float number);
    original_func = dlsym(RTLD_NEXT, "fabsf");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef fabsl_OVERRIDE
#define fabsl_OVERRIDE

long double fabsl (long double number){
    long double  (*original_func)(long double number);
    original_func = dlsym(RTLD_NEXT, "fabsl");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef fadd_OVERRIDE
#define fadd_OVERRIDE

float fadd (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fadd");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef faddl_OVERRIDE
#define faddl_OVERRIDE

float faddl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "faddl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fchdir_OVERRIDE
#define fchdir_OVERRIDE

int fchdir (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "fchdir");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef fchmod_OVERRIDE
#define fchmod_OVERRIDE

int fchmod (int filedes, mode_t mode){
    int  (*original_func)(int filedes, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "fchmod");
    preload_log("%s", "");
    return original_func(filedes,mode);
}

#endif
#ifndef fchown_OVERRIDE
#define fchown_OVERRIDE

int fchown (int filedes, uid_t owner, gid_t group){
    int  (*original_func)(int filedes, uid_t owner, gid_t group);
    original_func = dlsym(RTLD_NEXT, "fchown");
    preload_log("%s", "");
    return original_func(filedes,owner,group);
}

#endif
#ifndef fclose_OVERRIDE
#define fclose_OVERRIDE

int fclose (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fclose");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fcloseall_OVERRIDE
#define fcloseall_OVERRIDE

int fcloseall (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "fcloseall");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef fcntl_OVERRIDE
#define fcntl_OVERRIDE

int fcntl (int filedes, int command, ...){
    va_list ap;
    va_start(ap, command);
    // void* arg = va_arg(ap, void*);
    int  (*original_func)(int filedes, int command, ...);
    original_func = dlsym(RTLD_NEXT, "fcntl");
    preload_log("%s", "");
    int  ret_val = original_func(filedes,command,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef fcvt_OVERRIDE
#define fcvt_OVERRIDE

char * fcvt (double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "fcvt");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg);
}

#endif
#ifndef fcvt_r_OVERRIDE
#define fcvt_r_OVERRIDE

int fcvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "fcvt_r");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg,buf,len);
}

#endif
#ifndef fdatasync_OVERRIDE
#define fdatasync_OVERRIDE

int fdatasync (int fildes){
    int  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "fdatasync");
    preload_log("%s", "");
    return original_func(fildes);
}

#endif
#ifndef fdim_OVERRIDE
#define fdim_OVERRIDE

double fdim (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fdim");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fdimf_OVERRIDE
#define fdimf_OVERRIDE

float fdimf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fdimf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fdiml_OVERRIDE
#define fdiml_OVERRIDE

long double fdiml (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fdiml");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif 
#ifndef fdiv_OVERRIDE
#define fdiv_OVERRIDE

float fdiv (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fdiv");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fdivl_OVERRIDE
#define fdivl_OVERRIDE

float fdivl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fdivl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fdopen_OVERRIDE
#define fdopen_OVERRIDE

FILE * fdopen (int filedes, const char *opentype){
    FILE *  (*original_func)(int filedes, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fdopen");
    preload_log("%s", "");
    return original_func(filedes,opentype);
}

#endif
#ifndef fdopendir_OVERRIDE
#define fdopendir_OVERRIDE

DIR * fdopendir (int fd){
    DIR *  (*original_func)(int fd);
    original_func = dlsym(RTLD_NEXT, "fdopendir");
    preload_log("%s", "");
    return original_func(fd);
}

#endif
#ifndef feclearexcept_OVERRIDE
#define feclearexcept_OVERRIDE

int feclearexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feclearexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif
#ifndef fedisableexcept_OVERRIDE
#define fedisableexcept_OVERRIDE

int fedisableexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fedisableexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif
#ifndef feenableexcept_OVERRIDE
#define feenableexcept_OVERRIDE

int feenableexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feenableexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif
#ifndef fegetenv_OVERRIDE
#define fegetenv_OVERRIDE

int fegetenv (fenv_t *envp){
    int  (*original_func)(fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "fegetenv");
    preload_log("%s", "");
    return original_func(envp);
}

#endif
#ifndef fegetexcept_OVERRIDE
#define fegetexcept_OVERRIDE

int fegetexcept (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "fegetexcept");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef fegetexceptflag_OVERRIDE
#define fegetexceptflag_OVERRIDE

int fegetexceptflag (fexcept_t *flagp, int excepts){
    int  (*original_func)(fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fegetexceptflag");
    preload_log("%s", "");
    return original_func(flagp,excepts);
}

#endif
#ifndef fegetmode_OVERRIDE
#define fegetmode_OVERRIDE

int fegetmode (femode_t *modep){
    int  (*original_func)(femode_t *modep);
    original_func = dlsym(RTLD_NEXT, "fegetmode");
    preload_log("%s", "");
    return original_func(modep);
}

#endif
#ifndef fegetround_OVERRIDE
#define fegetround_OVERRIDE

int fegetround (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "fegetround");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef feholdexcept_OVERRIDE
#define feholdexcept_OVERRIDE

int feholdexcept (fenv_t *envp){
    int  (*original_func)(fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "feholdexcept");
    preload_log("%s", "");
    return original_func(envp);
}

#endif
#ifndef feof_OVERRIDE
#define feof_OVERRIDE

int feof (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "feof");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef feof_unlocked_OVERRIDE
#define feof_unlocked_OVERRIDE

int feof_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "feof_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef feraiseexcept_OVERRIDE
#define feraiseexcept_OVERRIDE

int feraiseexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feraiseexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif

#ifndef ferror_OVERRIDE
#define ferror_OVERRIDE

int ferror (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ferror");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef ferror_unlocked_OVERRIDE
#define ferror_unlocked_OVERRIDE

int ferror_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ferror_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fesetenv_OVERRIDE
#define fesetenv_OVERRIDE

int fesetenv (const fenv_t *envp){
    int  (*original_func)(const fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "fesetenv");
    preload_log("%s", "");
    return original_func(envp);
}

#endif
#ifndef fesetexcept_OVERRIDE
#define fesetexcept_OVERRIDE

int fesetexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fesetexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif
#ifndef fesetexceptflag_OVERRIDE
#define fesetexceptflag_OVERRIDE

int fesetexceptflag (const fexcept_t *flagp, int excepts){
    int  (*original_func)(const fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fesetexceptflag");
    preload_log("%s", "");
    return original_func(flagp,excepts);
}

#endif
#ifndef fesetmode_OVERRIDE
#define fesetmode_OVERRIDE

int fesetmode (const femode_t *modep){
    int  (*original_func)(const femode_t *modep);
    original_func = dlsym(RTLD_NEXT, "fesetmode");
    preload_log("%s", "");
    return original_func(modep);
}

#endif
#ifndef fesetround_OVERRIDE
#define fesetround_OVERRIDE

int fesetround (int round){
    int  (*original_func)(int round);
    original_func = dlsym(RTLD_NEXT, "fesetround");
    preload_log("%s", "");
    return original_func(round);
}

#endif
#ifndef fetestexcept_OVERRIDE
#define fetestexcept_OVERRIDE

int fetestexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fetestexcept");
    preload_log("%s", "");
    return original_func(excepts);
}

#endif
#ifndef fetestexceptflag_OVERRIDE
#define fetestexceptflag_OVERRIDE

int fetestexceptflag (const fexcept_t *flagp, int excepts){
    int  (*original_func)(const fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fetestexceptflag");
    preload_log("%s", "");
    return original_func(flagp,excepts);
}

#endif
#ifndef feupdateenv_OVERRIDE
#define feupdateenv_OVERRIDE

int feupdateenv (const fenv_t *envp){
    int  (*original_func)(const fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "feupdateenv");
    preload_log("%s", "");
    return original_func(envp);
}

#endif
#ifndef fexecve_OVERRIDE
#define fexecve_OVERRIDE

int fexecve (int fd,  char *const argv[], char *const env[]){
    int  (*original_func)(int fd,  char *const argv[], char *const env[]);
    original_func = dlsym(RTLD_NEXT, "fexecve");
    preload_log("%s", "");
    return original_func(fd,argv,env);
}

#endif
#ifndef fflush_OVERRIDE
#define fflush_OVERRIDE

int fflush (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fflush");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fflush_unlocked_OVERRIDE
#define fflush_unlocked_OVERRIDE

int fflush_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fflush_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetc_OVERRIDE
#define fgetc_OVERRIDE

int fgetc (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetc");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetc_unlocked_OVERRIDE
#define fgetc_unlocked_OVERRIDE

int fgetc_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetc_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetgrent_OVERRIDE
#define fgetgrent_OVERRIDE

struct group * fgetgrent (FILE *stream){
    struct group *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetgrent");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetgrent_r_OVERRIDE
#define fgetgrent_r_OVERRIDE

int fgetgrent_r (FILE *stream, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(FILE *stream, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "fgetgrent_r");
    preload_log("%s", "");
    return original_func(stream,result_buf,buffer,buflen,result);
}

#endif
#ifndef fgetpos_OVERRIDE
#define fgetpos_OVERRIDE

int fgetpos (FILE *stream, fpos_t *position){
    int  (*original_func)(FILE *stream, fpos_t *position);
    original_func = dlsym(RTLD_NEXT, "fgetpos");
    preload_log("%s", "");
    return original_func(stream,position);
}

#endif
// #ifndef fgetpos64_OVERRIDE
// #define fgetpos64_OVERRIDE

// int fgetpos64 (FILE *stream, fpos64_t *position){
//     int  (*original_func)(FILE *stream, fpos64_t *position);
//     original_func = dlsym(RTLD_NEXT, "fgetpos64");
//     preload_log("%s", "");
//     return original_func(stream,position);
// }

// #endif
#ifndef fgetpwent_OVERRIDE
#define fgetpwent_OVERRIDE

struct passwd * fgetpwent (FILE *stream){
    struct passwd *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetpwent");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetpwent_r_OVERRIDE
#define fgetpwent_r_OVERRIDE

int fgetpwent_r (FILE *stream, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(FILE *stream, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "fgetpwent_r");
    preload_log("%s", "");
    return original_func(stream,result_buf,buffer,buflen,result);
}

#endif
#ifndef fgets_OVERRIDE
#define fgets_OVERRIDE

char * fgets (char *s, int count, FILE *stream){
    char *  (*original_func)(char *s, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgets");
    preload_log("%s", "");
    return original_func(s,count,stream);
}

#endif
#ifndef fgets_unlocked_OVERRIDE
#define fgets_unlocked_OVERRIDE

char * fgets_unlocked (char *s, int count, FILE *stream){
    char *  (*original_func)(char *s, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgets_unlocked");
    preload_log("%s", "");
    return original_func(s,count,stream);
}

#endif
#ifndef fgetwc_OVERRIDE
#define fgetwc_OVERRIDE

wint_t fgetwc (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetwc");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetwc_unlocked_OVERRIDE
#define fgetwc_unlocked_OVERRIDE

wint_t fgetwc_unlocked (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetwc_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fgetws_OVERRIDE
#define fgetws_OVERRIDE

wchar_t * fgetws (wchar_t *ws, int count, FILE *stream){
    wchar_t *  (*original_func)(wchar_t *ws, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetws");
    preload_log("%s", "");
    return original_func(ws,count,stream);
}

#endif
#ifndef fgetws_unlocked_OVERRIDE
#define fgetws_unlocked_OVERRIDE

wchar_t * fgetws_unlocked (wchar_t *ws, int count, FILE *stream){
    wchar_t *  (*original_func)(wchar_t *ws, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetws_unlocked");
    preload_log("%s", "");
    return original_func(ws,count,stream);
}

#endif
#ifndef fileno_OVERRIDE
#define fileno_OVERRIDE

int fileno (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fileno");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef fileno_unlocked_OVERRIDE
#define fileno_unlocked_OVERRIDE

int fileno_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fileno_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif

#ifndef finite_OVERRIDE
#define finite_OVERRIDE
int finite (double x){
    int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "finite");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef finitef_OVERRIDE
#define finitef_OVERRIDE

int finitef (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "finitef");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef finitel_OVERRIDE
#define finitel_OVERRIDE

int finitel (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "finitel");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef flockfile_OVERRIDE
#define flockfile_OVERRIDE

void flockfile (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "flockfile");
    preload_log("%s", "");
    return original_func(stream);
}

#endif 
#ifndef floor_OVERRIDE
#define floor_OVERRIDE

double floor (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "floor");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef floorf_OVERRIDE
#define floorf_OVERRIDE

float floorf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "floorf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef floorl_OVERRIDE
#define floorl_OVERRIDE

long double floorl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "floorl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef fma_OVERRIDE
#define fma_OVERRIDE

double fma (double x, double y, double z){
    double  (*original_func)(double x, double y, double z);
    original_func = dlsym(RTLD_NEXT, "fma");
    preload_log("%s", "");
    return original_func(x,y,z);
}

#endif
#ifndef fmaf_OVERRIDE
#define fmaf_OVERRIDE

float fmaf (float x, float y, float z){
    float  (*original_func)(float x, float y, float z);
    original_func = dlsym(RTLD_NEXT, "fmaf");
    preload_log("%s", "");
    return original_func(x,y,z);
}

#endif
#ifndef fmal_OVERRIDE
#define fmal_OVERRIDE

long double fmal (long double x, long double y, long double z){
    long double  (*original_func)(long double x, long double y, long double z);
    original_func = dlsym(RTLD_NEXT, "fmal");
    preload_log("%s", "");
    return original_func(x,y,z);
}

#endif
#ifndef fmax_OVERRIDE
#define fmax_OVERRIDE

double fmax (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmax");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmaxf_OVERRIDE
#define fmaxf_OVERRIDE

float fmaxf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fmaxf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmaxl_OVERRIDE
#define fmaxl_OVERRIDE

long double fmaxl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmaxl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmaxmag_OVERRIDE
#define fmaxmag_OVERRIDE

double fmaxmag (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmaxmag");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmaxmagf_OVERRIDE
#define fmaxmagf_OVERRIDE

float fmaxmagf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fmaxmagf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmaxmagl_OVERRIDE
#define fmaxmagl_OVERRIDE

long double fmaxmagl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmaxmagl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmemopen_OVERRIDE
#define fmemopen_OVERRIDE

FILE * fmemopen (void *buf, size_t size, const char *opentype){
    FILE *  (*original_func)(void *buf, size_t size, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fmemopen");
    preload_log("%s", "");
    return original_func(buf,size,opentype);
}

#endif
#ifndef fmin_OVERRIDE
#define fmin_OVERRIDE

double fmin (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmin");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fminf_OVERRIDE
#define fminf_OVERRIDE

float fminf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fminf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fminl_OVERRIDE
#define fminl_OVERRIDE

long double fminl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fminl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fminmag_OVERRIDE
#define fminmag_OVERRIDE

double fminmag (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fminmag");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fminmagf_OVERRIDE
#define fminmagf_OVERRIDE

float fminmagf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fminmagf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fminmagl_OVERRIDE
#define fminmagl_OVERRIDE

long double fminmagl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fminmagl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmod_OVERRIDE
#define fmod_OVERRIDE

double fmod (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "fmod");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef fmodf_OVERRIDE
#define fmodf_OVERRIDE

float fmodf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "fmodf");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef fmodl_OVERRIDE
#define fmodl_OVERRIDE

long double fmodl (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "fmodl");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef fmtmsg_OVERRIDE
#define fmtmsg_OVERRIDE

int fmtmsg (long int classification, const char *label, int severity, const char *text, const char *action, const char *tag){
    int  (*original_func)(long int classification, const char *label, int severity, const char *text, const char *action, const char *tag);
    original_func = dlsym(RTLD_NEXT, "fmtmsg");
    preload_log("%s", "");
    return original_func(classification,label,severity,text,action,tag);
}

#endif
#ifndef fmul_OVERRIDE
#define fmul_OVERRIDE

float fmul (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmul");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fmull_OVERRIDE
#define fmull_OVERRIDE

float fmull (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmull");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fnmatch_OVERRIDE
#define fnmatch_OVERRIDE

int fnmatch (const char *pattern, const char *string, int flags){
    int  (*original_func)(const char *pattern, const char *string, int flags);
    original_func = dlsym(RTLD_NEXT, "fnmatch");
    preload_log("%s", "");
    return original_func(pattern,string,flags);
}

#endif
#ifndef fopen_OVERRIDE
#define fopen_OVERRIDE

FILE * fopen (const char *filename, const char *opentype){
    FILE *  (*original_func)(const char *filename, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fopen");
    preload_log("%s", "");
    return original_func(filename,opentype);
}

#endif

#ifndef fopen64_OVERRIDE
#define fopen64_OVERRIDE

FILE * fopen64 (const char *filename, const char *opentype){
    FILE *  (*original_func)(const char *filename, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fopen64");
    preload_log("%s", "");
    return original_func(filename,opentype);
}

#endif
    // #ifndef fopencookie_OVERRIDE
    // #define fopencookie_OVERRIDE

    // FILE * fopencookie (void *cookie, const char *opentype, cookie_io_functions_t io_functions){
    //     FILE *  (*original_func)(void *cookie, const char *opentype, cookie_io_functions_t io_functions);
    //     original_func = dlsym(RTLD_NEXT, "fopencookie");
    //     preload_log("%s", "");
    //     return original_func(cookie,opentype,io_functions);
    // }

    // #endif

#ifndef fork_OVERRIDE
#define fork_OVERRIDE

pid_t fork (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "fork");
    preload_log("%s", "");
    return original_func();
}

#endif 
#ifndef forkpty_OVERRIDE
#define forkpty_OVERRIDE

int forkpty (int *amaster, char *name, const struct termios *termp, const struct winsize *winp){
    int  (*original_func)(int *amaster, char *name, const struct termios *termp, const struct winsize *winp);
    original_func = dlsym(RTLD_NEXT, "forkpty");
    preload_log("%s", "");
    return original_func(amaster,name,termp,winp);
}

#endif
#ifndef fpathconf_OVERRIDE
#define fpathconf_OVERRIDE

long int fpathconf (int filedes, int parameter){
    long int  (*original_func)(int filedes, int parameter);
    original_func = dlsym(RTLD_NEXT, "fpathconf");
    preload_log("%s", "");
    return original_func(filedes,parameter);
}

#endif 

#ifndef fprintf_OVERRIDE
#define fprintf_OVERRIDE

int fprintf (FILE *stream, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "fprintf");
    preload_log("%s", "");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}

#endif



#ifndef fputc_OVERRIDE
#define fputc_OVERRIDE

int fputc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputc");
    preload_log("%s", "");
    return original_func(c,stream);
}

#endif
#ifndef fputc_unlocked_OVERRIDE
#define fputc_unlocked_OVERRIDE

int fputc_unlocked (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputc_unlocked");
    preload_log("%s", "");
    return original_func(c,stream);
}

#endif
#ifndef fputs_OVERRIDE
#define fputs_OVERRIDE

int fputs (const char *s, FILE *stream){
    int  (*original_func)(const char *s, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputs");
    preload_log("%s", "");
    return original_func(s,stream);
}

#endif
#ifndef fputs_unlocked_OVERRIDE
#define fputs_unlocked_OVERRIDE

int fputs_unlocked (const char *s, FILE *stream){
    int  (*original_func)(const char *s, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputs_unlocked");
    preload_log("%s", "");
    return original_func(s,stream);
}

#endif
#ifndef fputwc_OVERRIDE
#define fputwc_OVERRIDE

wint_t fputwc (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputwc");
    preload_log("%s", "");
    return original_func(wc,stream);
}

#endif
#ifndef fputwc_unlocked_OVERRIDE
#define fputwc_unlocked_OVERRIDE

wint_t fputwc_unlocked (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputwc_unlocked");
    preload_log("%s", "");
    return original_func(wc,stream);
}

#endif
#ifndef fputws_OVERRIDE
#define fputws_OVERRIDE

int fputws (const wchar_t *ws, FILE *stream){
    int  (*original_func)(const wchar_t *ws, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputws");
    preload_log("%s", "");
    return original_func(ws,stream);
}

#endif
#ifndef fputws_unlocked_OVERRIDE
#define fputws_unlocked_OVERRIDE

int fputws_unlocked (const wchar_t *ws, FILE *stream){
    int  (*original_func)(const wchar_t *ws, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputws_unlocked");
    preload_log("%s", "");
    return original_func(ws,stream);
}

#endif
#ifndef fread_OVERRIDE
#define fread_OVERRIDE

size_t fread (void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fread");
    preload_log("%s", "");
    return original_func(data,size,count,stream);
}

#endif

#ifndef fread_unlocked_OVERRIDE
#define fread_unlocked_OVERRIDE

size_t fread_unlocked (void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fread_unlocked");
    preload_log("%s", "");
    return original_func(data,size,count,stream);
}

#endif
#ifndef free_OVERRIDE
#define free_OVERRIDE

void free (void *ptr){
    void  (*original_func)(void *ptr);
    original_func = dlsym(RTLD_NEXT, "free");
    preload_log("%s", "");
    return original_func(ptr);
}

#endif
#ifndef freopen_OVERRIDE
#define freopen_OVERRIDE

FILE * freopen (const char *filename, const char *opentype, FILE *stream){
    FILE *  (*original_func)(const char *filename, const char *opentype, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "freopen");
    preload_log("%s", "");
    return original_func(filename,opentype,stream);
}

#endif
#ifndef freopen64_OVERRIDE
#define freopen64_OVERRIDE

FILE * freopen64 (const char *filename, const char *opentype, FILE *stream){
    FILE *  (*original_func)(const char *filename, const char *opentype, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "freopen64");
    preload_log("%s", "");
    return original_func(filename,opentype,stream);
}

#endif
#ifndef frexp_OVERRIDE
#define frexp_OVERRIDE

double frexp (double value, int *exponent){
    double  (*original_func)(double value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexp");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef frexpf_OVERRIDE
#define frexpf_OVERRIDE

float frexpf (float value, int *exponent){
    float  (*original_func)(float value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexpf");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef frexpl_OVERRIDE
#define frexpl_OVERRIDE

long double frexpl (long double value, int *exponent){
    long double  (*original_func)(long double value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexpl");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef fromfp_OVERRIDE
#define fromfp_OVERRIDE

intmax_t fromfp (double x, int round, unsigned int width){
    intmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfp");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fromfpf_OVERRIDE
#define fromfpf_OVERRIDE

intmax_t fromfpf (float x, int round, unsigned int width){
    intmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpf");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fromfpl_OVERRIDE
#define fromfpl_OVERRIDE

intmax_t fromfpl (long double x, int round, unsigned int width){
    intmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpl");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fromfpx_OVERRIDE
#define fromfpx_OVERRIDE

intmax_t fromfpx (double x, int round, unsigned int width){
    intmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpx");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fromfpxf_OVERRIDE
#define fromfpxf_OVERRIDE

intmax_t fromfpxf (float x, int round, unsigned int width){
    intmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpxf");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fromfpxl_OVERRIDE
#define fromfpxl_OVERRIDE

intmax_t fromfpxl (long double x, int round, unsigned int width){
    intmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpxl");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef fscanf_OVERRIDE
#define fscanf_OVERRIDE

int fscanf (FILE *stream, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "fscanf");
    preload_log("%s", "");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef fseek_OVERRIDE
#define fseek_OVERRIDE

int fseek (FILE *stream, long int offset, int whence){
    int  (*original_func)(FILE *stream, long int offset, int whence);
    original_func = dlsym(RTLD_NEXT, "fseek");
    preload_log("%s", "");
    return original_func(stream,offset,whence);
}

#endif
#ifndef fseeko_OVERRIDE
#define fseeko_OVERRIDE

int fseeko (FILE *stream, off_t offset, int whence){
    int  (*original_func)(FILE *stream, off_t offset, int whence);
    original_func = dlsym(RTLD_NEXT, "fseeko");
    preload_log("%s", "");
    return original_func(stream,offset,whence);
}

#endif
// #ifndef fseeko64_OVERRIDE
// #define fseeko64_OVERRIDE

// int fseeko64 (FILE *stream, off64_t offset, int whence){
//     int  (*original_func)(FILE *stream, off64_t offset, int whence);
//     original_func = dlsym(RTLD_NEXT, "fseeko64");
//     preload_log("%s", "");
//     return original_func(stream,offset,whence);
// }

// #endif
#ifndef fsetpos_OVERRIDE
#define fsetpos_OVERRIDE

int fsetpos (FILE *stream, const fpos_t *position){
    int  (*original_func)(FILE *stream, const fpos_t *position);
    original_func = dlsym(RTLD_NEXT, "fsetpos");
    preload_log("%s", "");
    return original_func(stream,position);
}

#endif

// #ifndef fsetpos64_OVERRIDE
// #define fsetpos64_OVERRIDE

// int fsetpos64 (FILE *stream, const fpos64_t *position){
//     int  (*original_func)(FILE *stream, const fpos64_t *position);
//     original_func = dlsym(RTLD_NEXT, "fsetpos64");
//     preload_log("%s", "");
//     return original_func(stream,position);
// }

// #endif
#ifndef fstat_OVERRIDE
#define fstat_OVERRIDE

int fstat (int filedes, struct stat *buf){
    int  (*original_func)(int filedes, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "fstat");
    preload_log("%s", "");
    return original_func(filedes,buf);
}

#endif
#ifndef fstat64_OVERRIDE
#define fstat64_OVERRIDE

int fstat64 (int filedes, struct stat64 *buf){
    int  (*original_func)(int filedes, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "fstat64");
    preload_log("%s", "");
    return original_func(filedes,buf);
}

#endif
#ifndef fsub_OVERRIDE
#define fsub_OVERRIDE

float fsub (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fsub");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fsubl_OVERRIDE
#define fsubl_OVERRIDE

float fsubl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fsubl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef fsync_OVERRIDE
#define fsync_OVERRIDE

int fsync (int fildes){
    int  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "fsync");
    preload_log("%s", "");
    return original_func(fildes);
}

#endif
#ifndef ftell_OVERRIDE
#define ftell_OVERRIDE

long int ftell (FILE *stream){
    long int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftell");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef ftello_OVERRIDE
#define ftello_OVERRIDE

off_t ftello (FILE *stream){
    off_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftello");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
// #ifndef ftello64_OVERRIDE
// #define ftello64_OVERRIDE

// off64_t ftello64 (FILE *stream){
//     off64_t  (*original_func)(FILE *stream);
//     original_func = dlsym(RTLD_NEXT, "ftello64");
//     preload_log("%s", "");
//     return original_func(stream);
// }

// #endif
#ifndef ftruncate_OVERRIDE
#define ftruncate_OVERRIDE

int ftruncate (int fd, off_t length){
    int  (*original_func)(int fd, off_t length);
    original_func = dlsym(RTLD_NEXT, "ftruncate");
    preload_log("%s", "");
    return original_func(fd,length);
}

#endif
// #ifndef ftruncate64_OVERRIDE
// #define ftruncate64_OVERRIDE

// int ftruncate64 (int id, off64_t length){
//     int  (*original_func)(int id, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "ftruncate64");
//     preload_log("%s", "");
//     return original_func(id,length);
// }

// #endif
#ifndef ftrylockfile_OVERRIDE
#define ftrylockfile_OVERRIDE

int ftrylockfile (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftrylockfile");
    preload_log("%s", "");
    return original_func(stream);
}

#endif 
#ifndef ftw_OVERRIDE
#define ftw_OVERRIDE

int ftw (const char *filename, __ftw_func_t func, int descriptors){
    int  (*original_func)(const char *filename, __ftw_func_t func, int descriptors);
    original_func = dlsym(RTLD_NEXT, "ftw");
    preload_log("%s", "");
    return original_func(filename,func,descriptors);
}

#endif
// #ifndef ftw64_OVERRIDE
// #define ftw64_OVERRIDE

// int ftw64 (const char *filename, __ftw64_func_t func, int descriptors){
//     int  (*original_func)(const char *filename, __ftw64_func_t func, int descriptors);
//     original_func = dlsym(RTLD_NEXT, "ftw64");
//     preload_log("%s", "");
//     return original_func(filename,func,descriptors);
// }

// #endif
#ifndef funlockfile_OVERRIDE
#define funlockfile_OVERRIDE

void funlockfile (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "funlockfile");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef futimes_OVERRIDE
#define futimes_OVERRIDE

int futimes (int fd, const struct timeval tvp[2]){
    int  (*original_func)(int fd, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "futimes");
    preload_log("%s", "");
    return original_func(fd,tvp);
}

#endif
#ifndef fwide_OVERRIDE
#define fwide_OVERRIDE

int fwide (FILE *stream, int mode){
    int  (*original_func)(FILE *stream, int mode);
    original_func = dlsym(RTLD_NEXT, "fwide");
    preload_log("%s", "");
    return original_func(stream,mode);
}

#endif
#ifndef fwprintf_OVERRIDE
#define fwprintf_OVERRIDE

int fwprintf (FILE *stream, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "fwprintf");
    preload_log("%s", "");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef fwrite_OVERRIDE
#define fwrite_OVERRIDE

size_t fwrite (const void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(const void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fwrite");
    preload_log("%s", "");
    return original_func(data,size,count,stream);
}

#endif
#ifndef fwrite_unlocked_OVERRIDE
#define fwrite_unlocked_OVERRIDE

size_t fwrite_unlocked (const void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(const void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fwrite_unlocked");
    preload_log("%s", "");
    return original_func(data,size,count,stream);
}

#endif
#ifndef fwscanf_OVERRIDE
#define fwscanf_OVERRIDE

int fwscanf (FILE *stream, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "fwscanf");
    preload_log("%s", "");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef gamma_OVERRIDE
#define gamma_OVERRIDE

double gamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "gamma");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef gammaf_OVERRIDE
#define gammaf_OVERRIDE

float gammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "gammaf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef gammal_OVERRIDE
#define gammal_OVERRIDE

long double gammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "gammal");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef gcvt_OVERRIDE
#define gcvt_OVERRIDE

char * gcvt (double value, int ndigit, char *buf){
    char *  (*original_func)(double value, int ndigit, char *buf);
    original_func = dlsym(RTLD_NEXT, "gcvt");
    preload_log("%s", "");
    return original_func(value,ndigit,buf);
}

#endif
#ifndef getauxval_OVERRIDE
#define getauxval_OVERRIDE

unsigned long int getauxval (unsigned long int type){
    unsigned long int  (*original_func)(unsigned long int type);
    original_func = dlsym(RTLD_NEXT, "getauxval");
    preload_log("%s", "");
    return original_func(type);
}

#endif
#ifndef getc_OVERRIDE
#define getc_OVERRIDE

int getc (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getc");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getchar_OVERRIDE
#define getchar_OVERRIDE

int getchar (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getchar");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getchar_unlocked_OVERRIDE
#define getchar_unlocked_OVERRIDE

int getchar_unlocked (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getchar_unlocked");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getcontext_OVERRIDE
#define getcontext_OVERRIDE

int getcontext (ucontext_t *ucp){
    int  (*original_func)(ucontext_t *ucp);
    original_func = dlsym(RTLD_NEXT, "getcontext");
    preload_log("%s", "");
    return original_func(ucp);
}

#endif
#ifndef getcpu_OVERRIDE
#define getcpu_OVERRIDE

int getcpu (unsigned int *cpu, unsigned int *node){
    int  (*original_func)(unsigned int *cpu, unsigned int *node);
    original_func = dlsym(RTLD_NEXT, "getcpu");
    preload_log("%s", "");
    return original_func(cpu,node);
}

#endif 
#ifndef getcwd_OVERRIDE
#define getcwd_OVERRIDE

char * getcwd (char *buffer, size_t size){
    char *  (*original_func)(char *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "getcwd");
    preload_log("%s", "");
    return original_func(buffer,size);
}

#endif
#ifndef getc_unlocked_OVERRIDE
#define getc_unlocked_OVERRIDE

int getc_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getc_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getdate_OVERRIDE
#define getdate_OVERRIDE

struct tm * getdate (const char *string){
    struct tm *  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "getdate");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef getdate_r_OVERRIDE
#define getdate_r_OVERRIDE

int getdate_r (const char *string, struct tm *tp){
    int  (*original_func)(const char *string, struct tm *tp);
    original_func = dlsym(RTLD_NEXT, "getdate_r");
    preload_log("%s", "");
    return original_func(string,tp);
}

#endif
#ifndef getdelim_OVERRIDE
#define getdelim_OVERRIDE

ssize_t getdelim (char **lineptr, size_t *n, int delimiter, FILE *stream){
    ssize_t  (*original_func)(char **lineptr, size_t *n, int delimiter, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getdelim");
    preload_log("%s", "");
    return original_func(lineptr,n,delimiter,stream);
}

#endif
#ifndef getdents64_OVERRIDE
#define getdents64_OVERRIDE

ssize_t getdents64 (int fd, void *buffer, size_t length){
    ssize_t  (*original_func)(int fd, void *buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "getdents64");
    preload_log("%s", "");
    return original_func(fd,buffer,length);
}

#endif
#ifndef getdomainnname_OVERRIDE
#define getdomainnname_OVERRIDE

int getdomainnname (char *name, size_t length){
    int  (*original_func)(char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "getdomainnname");
    preload_log("%s", "");
    return original_func(name,length);
}

#endif
#ifndef getegid_OVERRIDE
#define getegid_OVERRIDE

gid_t getegid (void){
    gid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getegid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getentropy_OVERRIDE
#define getentropy_OVERRIDE

int getentropy (void *buffer, size_t length){
    int  (*original_func)(void *buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "getentropy");
    preload_log("%s", "");
    return original_func(buffer,length);
}

#endif
#ifndef getenv_OVERRIDE
#define getenv_OVERRIDE

char * getenv (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getenv");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef geteuid_OVERRIDE
#define geteuid_OVERRIDE

uid_t geteuid (void){
    uid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "geteuid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getfsent_OVERRIDE
#define getfsent_OVERRIDE

struct fstab * getfsent (void){
    struct fstab *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getfsent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getfsfile_OVERRIDE
#define getfsfile_OVERRIDE

struct fstab * getfsfile (const char *name){
    struct fstab *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getfsfile");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getfsspec_OVERRIDE
#define getfsspec_OVERRIDE

struct fstab * getfsspec (const char *name){
    struct fstab *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getfsspec");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getgid_OVERRIDE
#define getgid_OVERRIDE

gid_t getgid (void){
    gid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getgid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getgrent_OVERRIDE
#define getgrent_OVERRIDE

struct group * getgrent (void){
    struct group *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getgrent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getgrent_r_OVERRIDE
#define getgrent_r_OVERRIDE

int getgrent_r (struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrent_r");
    preload_log("%s", "");
    return original_func(result_buf,buffer,buflen,result);
}

#endif
#ifndef getgrgid_OVERRIDE
#define getgrgid_OVERRIDE

struct group * getgrgid (gid_t gid){
    struct group *  (*original_func)(gid_t gid);
    original_func = dlsym(RTLD_NEXT, "getgrgid");
    preload_log("%s", "");
    return original_func(gid);
}

#endif
#ifndef getgrgid_r_OVERRIDE
#define getgrgid_r_OVERRIDE

int getgrgid_r (gid_t gid, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(gid_t gid, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrgid_r");
    preload_log("%s", "");
    return original_func(gid,result_buf,buffer,buflen,result);
}

#endif
#ifndef getgrnam_OVERRIDE
#define getgrnam_OVERRIDE

struct group * getgrnam (const char *name){
    struct group *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getgrnam");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getgrnam_r_OVERRIDE
#define getgrnam_r_OVERRIDE

int getgrnam_r (const char *name, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(const char *name, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrnam_r");
    preload_log("%s", "");
    return original_func(name,result_buf,buffer,buflen,result);
}

#endif
#ifndef getgrouplist_OVERRIDE
#define getgrouplist_OVERRIDE

int getgrouplist (const char *user, gid_t group, gid_t *groups, int *ngroups){
    int  (*original_func)(const char *user, gid_t group, gid_t *groups, int *ngroups);
    original_func = dlsym(RTLD_NEXT, "getgrouplist");
    preload_log("%s", "");
    return original_func(user,group,groups,ngroups);
}

#endif
#ifndef getgroups_OVERRIDE
#define getgroups_OVERRIDE

int getgroups (int count, gid_t *groups){
    int  (*original_func)(int count, gid_t *groups);
    original_func = dlsym(RTLD_NEXT, "getgroups");
    preload_log("%s", "");
    return original_func(count,groups);
}

#endif
#ifndef gethostbyaddr_OVERRIDE
#define gethostbyaddr_OVERRIDE

struct hostent * gethostbyaddr (const void *addr, socklen_t length, int format){
    struct hostent *  (*original_func)(const void *addr, socklen_t length, int format);
    original_func = dlsym(RTLD_NEXT, "gethostbyaddr");
    preload_log("%s", "");
    return original_func(addr,length,format);
}

#endif
#ifndef gethostbyaddr_r_OVERRIDE
#define gethostbyaddr_r_OVERRIDE

int gethostbyaddr_r (const void *addr, socklen_t length, int format, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const void *addr, socklen_t length, int format, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyaddr_r");
    preload_log("%s", "");
    return original_func(addr,length,format,result_buf,buf,buflen,result,h_errnop);
}

#endif
#ifndef gethostbyname_OVERRIDE
#define gethostbyname_OVERRIDE

struct hostent * gethostbyname (const char *name){
    struct hostent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "gethostbyname");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef gethostbyname2_OVERRIDE
#define gethostbyname2_OVERRIDE

struct hostent * gethostbyname2 (const char *name, int af){
    struct hostent *  (*original_func)(const char *name, int af);
    original_func = dlsym(RTLD_NEXT, "gethostbyname2");
    preload_log("%s", "");
    return original_func(name,af);
}

#endif
#ifndef gethostbyname2_r_OVERRIDE
#define gethostbyname2_r_OVERRIDE

int gethostbyname2_r (const char *name, int af, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const char *name, int af, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyname2_r");
    preload_log("%s", "");
    return original_func(name,af,result_buf,buf,buflen,result,h_errnop);
}

#endif
#ifndef gethostbyname_r_OVERRIDE
#define gethostbyname_r_OVERRIDE

int gethostbyname_r (const char *restrict name, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const char *restrict name, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyname_r");
    preload_log("%s", "");
    return original_func(name,result_buf,buf,buflen,result,h_errnop);
}

#endif
#ifndef gethostent_OVERRIDE
#define gethostent_OVERRIDE

struct hostent * gethostent (void){
    struct hostent *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "gethostent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef gethostid_OVERRIDE
#define gethostid_OVERRIDE

long int gethostid (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "gethostid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef gethostname_OVERRIDE
#define gethostname_OVERRIDE

int gethostname (char *name, size_t size){
    int  (*original_func)(char *name, size_t size);
    original_func = dlsym(RTLD_NEXT, "gethostname");
    preload_log("%s", "");
    return original_func(name,size);
}

#endif
// #ifndef getitimer_OVERRIDE
// #define getitimer_OVERRIDE

// int getitimer (int which, struct itimerval *old){
//     int  (*original_func)(int which, struct itimerval *old);
//     original_func = dlsym(RTLD_NEXT, "getitimer");
//     preload_log("%s", "");
//     return original_func(which,old);
// }

// #endif
#ifndef getline_OVERRIDE
#define getline_OVERRIDE

ssize_t getline (char **lineptr, size_t *n, FILE *stream){
    ssize_t  (*original_func)(char **lineptr, size_t *n, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getline");
    preload_log("%s", "");
    return original_func(lineptr,n,stream);
}

#endif
#ifndef getloadavg_OVERRIDE
#define getloadavg_OVERRIDE

int getloadavg (double loadavg[], int nelem){
    int  (*original_func)(double loadavg[], int nelem);
    original_func = dlsym(RTLD_NEXT, "getloadavg");
    preload_log("%s", "");
    return original_func(loadavg,nelem);
}

#endif
#ifndef getlogin_OVERRIDE
#define getlogin_OVERRIDE

char * getlogin (void){
    char *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getlogin");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getmntent_OVERRIDE
#define getmntent_OVERRIDE

struct mntent * getmntent (FILE *stream){
    struct mntent *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getmntent");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getmntent_r_OVERRIDE
#define getmntent_r_OVERRIDE

struct mntent * getmntent_r (FILE *stream, struct mntent *result, char *buffer, int bufsize){
    struct mntent *  (*original_func)(FILE *stream, struct mntent *result, char *buffer, int bufsize);
    original_func = dlsym(RTLD_NEXT, "getmntent_r");
    preload_log("%s", "");
    return original_func(stream,result,buffer,bufsize);
}

#endif
#ifndef getnetbyaddr_OVERRIDE
#define getnetbyaddr_OVERRIDE

struct netent * getnetbyaddr (uint32_t net, int type){
    struct netent *  (*original_func)(uint32_t net, int type);
    original_func = dlsym(RTLD_NEXT, "getnetbyaddr");
    preload_log("%s", "");
    return original_func(net,type);
}

#endif
#ifndef getnetbyname_OVERRIDE
#define getnetbyname_OVERRIDE

struct netent * getnetbyname (const char *name){
    struct netent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getnetbyname");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getnetent_OVERRIDE
#define getnetent_OVERRIDE

struct netent * getnetent (void){
    struct netent *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getnetent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getnetgrent_OVERRIDE
#define getnetgrent_OVERRIDE

int getnetgrent (char **hostp, char **userp, char **domainp){
    int  (*original_func)(char **hostp, char **userp, char **domainp);
    original_func = dlsym(RTLD_NEXT, "getnetgrent");
    preload_log("%s", "");
    return original_func(hostp,userp,domainp);
}

#endif
#ifndef getnetgrent_r_OVERRIDE
#define getnetgrent_r_OVERRIDE

int getnetgrent_r (char **hostp, char **userp, char **domainp, char *buffer, size_t buflen){
    int  (*original_func)(char **hostp, char **userp, char **domainp, char *buffer, size_t buflen);
    original_func = dlsym(RTLD_NEXT, "getnetgrent_r");
    preload_log("%s", "");
    return original_func(hostp,userp,domainp,buffer,buflen);
}

#endif
#ifndef getopt_OVERRIDE
#define getopt_OVERRIDE

int getopt (int argc, char *const *argv, const char *options){
    int  (*original_func)(int argc, char *const *argv, const char *options);
    original_func = dlsym(RTLD_NEXT, "getopt");
    preload_log("%s", "");
    return original_func(argc,argv,options);
}

#endif
#ifndef getopt_long_OVERRIDE
#define getopt_long_OVERRIDE

int getopt_long (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr){
    int  (*original_func)(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
    original_func = dlsym(RTLD_NEXT, "getopt_long");
    preload_log("%s", "");
    return original_func(argc,argv,shortopts,longopts,indexptr);
}

#endif 
#ifndef getopt_long_only_OVERRIDE
#define getopt_long_only_OVERRIDE

int getopt_long_only (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr){
    int  (*original_func)(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
    original_func = dlsym(RTLD_NEXT, "getopt_long_only");
    preload_log("%s", "");
    return original_func(argc,argv,shortopts,longopts,indexptr);
}

#endif
#ifndef getpagesize_OVERRIDE
#define getpagesize_OVERRIDE

int getpagesize (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getpagesize");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getpass_OVERRIDE
#define getpass_OVERRIDE

char * getpass (const char *prompt){
    char *  (*original_func)(const char *prompt);
    original_func = dlsym(RTLD_NEXT, "getpass");
    preload_log("%s", "");
    return original_func(prompt);
}

#endif 
#ifndef getpayload_OVERRIDE
#define getpayload_OVERRIDE

double getpayload (const double *x){
    double  (*original_func)(const double *x);
    original_func = dlsym(RTLD_NEXT, "getpayload");
    preload_log("%s", "");
    return original_func(x);
}

#endif

#ifndef getpayloadf_OVERRIDE
#define getpayloadf_OVERRIDE

float getpayloadf (const float *x){
    float  (*original_func)(const float *x);
    original_func = dlsym(RTLD_NEXT, "getpayloadf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef getpayloadl_OVERRIDE
#define getpayloadl_OVERRIDE

long double getpayloadl (const long double *x){
    long double  (*original_func)(const long double *x);
    original_func = dlsym(RTLD_NEXT, "getpayloadl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef getpeername_OVERRIDE
#define getpeername_OVERRIDE

int getpeername (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "getpeername");
    preload_log("%s", "");
    return original_func(socket,addr,length_ptr);
}

#endif

#ifndef getpgid_OVERRIDE
#define getpgid_OVERRIDE

int getpgid (pid_t pid){
    int  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "getpgid");
    preload_log("%s", "");
    return original_func(pid);
}

#endif

#ifndef getpgrp_OVERRIDE
#define getpgrp_OVERRIDE

pid_t getpgrp (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getpgrp");
    preload_log("%s", "");
    return original_func();
}

#endif

#ifndef getpid_OVERRIDE
#define getpid_OVERRIDE

pid_t getpid (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getpid");
    preload_log("%s", "");
    return original_func();
}

#endif

#ifndef getppid_OVERRIDE
#define getppid_OVERRIDE

pid_t getppid (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getppid");
    preload_log("%s", "");
    return original_func();
}

#endif
// #ifndef getpriority_OVERRIDE
// #define getpriority_OVERRIDE

// int getpriority (int class, int id){
//     int  (*original_func)(int class, int id);
//     original_func = dlsym(RTLD_NEXT, "getpriority");
//     preload_log("%s", "");
//     return original_func(class,id);
// }

// #endif
#ifndef getprotobyname_OVERRIDE
#define getprotobyname_OVERRIDE

struct protoent * getprotobyname (const char *name){
    struct protoent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getprotobyname");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getprotobynumber_OVERRIDE
#define getprotobynumber_OVERRIDE

struct protoent * getprotobynumber (int protocol){
    struct protoent *  (*original_func)(int protocol);
    original_func = dlsym(RTLD_NEXT, "getprotobynumber");
    preload_log("%s", "");
    return original_func(protocol);
}

#endif
#ifndef getprotoent_OVERRIDE
#define getprotoent_OVERRIDE

struct protoent * getprotoent (void){
    struct protoent *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getprotoent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getpt_OVERRIDE
#define getpt_OVERRIDE

int getpt (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getpt");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getpwent_OVERRIDE
#define getpwent_OVERRIDE

struct passwd * getpwent (void){
    struct passwd *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getpwent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getpwent_r_OVERRIDE
#define getpwent_r_OVERRIDE

int getpwent_r (struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwent_r");
    preload_log("%s", "");
    return original_func(result_buf,buffer,buflen,result);
}

#endif
#ifndef getpwnam_OVERRIDE
#define getpwnam_OVERRIDE

struct passwd * getpwnam (const char *name){
    struct passwd *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getpwnam");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef getpwnam_r_OVERRIDE
#define getpwnam_r_OVERRIDE

int getpwnam_r (const char *name, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(const char *name, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwnam_r");
    preload_log("%s", "");
    return original_func(name,result_buf,buffer,buflen,result);
}

#endif
#ifndef getpwuid_OVERRIDE
#define getpwuid_OVERRIDE

struct passwd * getpwuid (uid_t uid){
    struct passwd *  (*original_func)(uid_t uid);
    original_func = dlsym(RTLD_NEXT, "getpwuid");
    preload_log("%s", "");
    return original_func(uid);
}

#endif
#ifndef getpwuid_r_OVERRIDE
#define getpwuid_r_OVERRIDE

int getpwuid_r (uid_t uid, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(uid_t uid, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwuid_r");
    preload_log("%s", "");
    return original_func(uid,result_buf,buffer,buflen,result);
}

#endif
#ifndef getrandom_OVERRIDE
#define getrandom_OVERRIDE

ssize_t getrandom (void *buffer, size_t length, unsigned int flags){
    ssize_t  (*original_func)(void *buffer, size_t length, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "getrandom");
    preload_log("%s", "");
    return original_func(buffer,length,flags);
}

#endif
// #ifndef getrlimit_OVERRIDE
// #define getrlimit_OVERRIDE

// int getrlimit (int resource, struct rlimit *rlp){
//     int  (*original_func)(int resource, struct rlimit *rlp);
//     original_func = dlsym(RTLD_NEXT, "getrlimit");
//     preload_log("%s", "");
//     return original_func(resource,rlp);
// }

// #endif
// #ifndef getrlimit64_OVERRIDE
// #define getrlimit64_OVERRIDE

// int getrlimit64 (int resource, struct rlimit64 *rlp){
//     int  (*original_func)(int resource, struct rlimit64 *rlp);
//     original_func = dlsym(RTLD_NEXT, "getrlimit64");
//     preload_log("%s", "");
//     return original_func(resource,rlp);
// }

// #endif

#ifndef getrusage_OVERRIDE
#define getrusage_OVERRIDE

int getrusage (int processes, struct rusage *rusage){
    int  (*original_func)(int processes, struct rusage *rusage);
    original_func = dlsym(RTLD_NEXT, "getrusage");
    preload_log("%s", "");
    return original_func(processes,rusage);
}

#endif
#ifndef gets_OVERRIDE
#define gets_OVERRIDE

char * gets (char *s){
    char *  (*original_func)(char *s);
    original_func = dlsym(RTLD_NEXT, "gets");
    preload_log("%s", "");
    return original_func(s);
}

#endif
#ifndef getservbyname_OVERRIDE
#define getservbyname_OVERRIDE

struct servent * getservbyname (const char *name, const char *proto){
    struct servent *  (*original_func)(const char *name, const char *proto);
    original_func = dlsym(RTLD_NEXT, "getservbyname");
    preload_log("%s", "");
    return original_func(name,proto);
}

#endif

#ifndef getservbyport_OVERRIDE
#define getservbyport_OVERRIDE

struct servent * getservbyport (int port, const char *proto){
    struct servent *  (*original_func)(int port, const char *proto);
    original_func = dlsym(RTLD_NEXT, "getservbyport");
    preload_log("%s", "");
    return original_func(port,proto);
}

#endif
#ifndef getservent_OVERRIDE
#define getservent_OVERRIDE

struct servent * getservent (void){
    struct servent *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getservent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getsid_OVERRIDE
#define getsid_OVERRIDE

pid_t getsid (pid_t pid){
    pid_t  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "getsid");
    preload_log("%s", "");
    return original_func(pid);
}

#endif
#ifndef getsockname_OVERRIDE
#define getsockname_OVERRIDE

int getsockname (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "getsockname");
    preload_log("%s", "");
    return original_func(socket,addr,length_ptr);
}

#endif
#ifndef getsockopt_OVERRIDE
#define getsockopt_OVERRIDE

int getsockopt (int socket, int level, int optname, void *optval, socklen_t *optlen_ptr){
    int  (*original_func)(int socket, int level, int optname, void *optval, socklen_t *optlen_ptr);
    original_func = dlsym(RTLD_NEXT, "getsockopt");
    preload_log("%s", "");
    return original_func(socket,level,optname,optval,optlen_ptr);
}

#endif 
#ifndef getsubopt_OVERRIDE
#define getsubopt_OVERRIDE

int getsubopt (char **optionp, char *const *tokens, char **valuep){
    int  (*original_func)(char **optionp, char *const *tokens, char **valuep);
    original_func = dlsym(RTLD_NEXT, "getsubopt");
    preload_log("%s", "");
    return original_func(optionp,tokens,valuep);
}

#endif
#ifndef gettext_OVERRIDE
#define gettext_OVERRIDE

char * gettext (const char *msgid){
    char *  (*original_func)(const char *msgid);
    original_func = dlsym(RTLD_NEXT, "gettext");
    preload_log("%s", "");
    return original_func(msgid);
}

#endif
#ifndef gettid_OVERRIDE
#define gettid_OVERRIDE

pid_t gettid (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "gettid");
    preload_log("%s", "");
    return original_func();
}

#endif
// #ifndef gettimeofday_OVERRIDE
// #define gettimeofday_OVERRIDE

// int gettimeofday (struct timeval *tp, void *tzp){
//     int  (*original_func)(struct timeval *tp, void *tzp);
//     original_func = dlsym(RTLD_NEXT, "gettimeofday");
//     preload_log("%s", "");
//     return original_func(tp,tzp);
// }
// 
// #endif
#ifndef getuid_OVERRIDE
#define getuid_OVERRIDE

uid_t getuid (void){
    uid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getuid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getumask_OVERRIDE
#define getumask_OVERRIDE

mode_t getumask (void){
    mode_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getumask");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getutent_OVERRIDE
#define getutent_OVERRIDE

struct utmp * getutent (void){
    struct utmp *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getutent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getutent_r_OVERRIDE
#define getutent_r_OVERRIDE

int getutent_r (struct utmp *buffer, struct utmp **result){
    int  (*original_func)(struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutent_r");
    preload_log("%s", "");
    return original_func(buffer,result);
}

#endif
#ifndef getutid_OVERRIDE
#define getutid_OVERRIDE

struct utmp * getutid (const struct utmp *id){
    struct utmp *  (*original_func)(const struct utmp *id);
    original_func = dlsym(RTLD_NEXT, "getutid");
    preload_log("%s", "");
    return original_func(id);
}

#endif
#ifndef getutid_r_OVERRIDE
#define getutid_r_OVERRIDE

int getutid_r (const struct utmp *id, struct utmp *buffer, struct utmp **result){
    int  (*original_func)(const struct utmp *id, struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutid_r");
    preload_log("%s", "");
    return original_func(id,buffer,result);
}

#endif
#ifndef getutline_OVERRIDE
#define getutline_OVERRIDE

struct utmp * getutline (const struct utmp *line){
    struct utmp *  (*original_func)(const struct utmp *line);
    original_func = dlsym(RTLD_NEXT, "getutline");
    preload_log("%s", "");
    return original_func(line);
}

#endif
#ifndef getutline_r_OVERRIDE
#define getutline_r_OVERRIDE

int getutline_r (const struct utmp *line, struct utmp *buffer, struct utmp **result){
    int  (*original_func)(const struct utmp *line, struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutline_r");
    preload_log("%s", "");
    return original_func(line,buffer,result);
}

#endif
// #ifndef getutmp_OVERRIDE
// #define getutmp_OVERRIDE

// int getutmp (const struct utmpx *utmpx, struct utmp *utmp){
//     int  (*original_func)(const struct utmpx *utmpx, struct utmp *utmp);
//     original_func = dlsym(RTLD_NEXT, "getutmp");
//     preload_log("%s", "");
//     return original_func(utmpx,utmp);
// }

// #endif
// #ifndef getutmpx_OVERRIDE
// #define getutmpx_OVERRIDE

// int getutmpx (const struct utmp *utmp, struct utmpx *utmpx){
//     int  (*original_func)(const struct utmp *utmp, struct utmpx *utmpx);
//     original_func = dlsym(RTLD_NEXT, "getutmpx");
//     preload_log("%s", "");
//     return original_func(utmp,utmpx);
// }

// #endif
#ifndef getutxent_OVERRIDE
#define getutxent_OVERRIDE

struct utmpx * getutxent (void){
    struct utmpx *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getutxent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getutxid_OVERRIDE
#define getutxid_OVERRIDE

struct utmpx * getutxid (const struct utmpx *id){
    struct utmpx *  (*original_func)(const struct utmpx *id);
    original_func = dlsym(RTLD_NEXT, "getutxid");
    preload_log("%s", "");
    return original_func(id);
}

#endif
#ifndef getutxline_OVERRIDE
#define getutxline_OVERRIDE

struct utmpx * getutxline (const struct utmpx *line){
    struct utmpx *  (*original_func)(const struct utmpx *line);
    original_func = dlsym(RTLD_NEXT, "getutxline");
    preload_log("%s", "");
    return original_func(line);
}

#endif
#ifndef getw_OVERRIDE
#define getw_OVERRIDE

int getw (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getw");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getwc_OVERRIDE
#define getwc_OVERRIDE

wint_t getwc (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getwc");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getwchar_OVERRIDE
#define getwchar_OVERRIDE

wint_t getwchar (void){
    wint_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getwchar");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef getwchar_unlocked_OVERRIDE
#define getwchar_unlocked_OVERRIDE

wint_t getwchar_unlocked (void){
    wint_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "getwchar_unlocked");
    preload_log("%s", "");
    return original_func();
}

#endif 
#ifndef getwc_unlocked_OVERRIDE
#define getwc_unlocked_OVERRIDE

wint_t getwc_unlocked (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getwc_unlocked");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef getwd_OVERRIDE
#define getwd_OVERRIDE

char * getwd (char *buffer){
    char *  (*original_func)(char *buffer);
    original_func = dlsym(RTLD_NEXT, "getwd");
    preload_log("%s", "");
    return original_func(buffer);
}

#endif
#ifndef get_avphys_pages_OVERRIDE
#define get_avphys_pages_OVERRIDE

long int get_avphys_pages (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "get_avphys_pages");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef get_current_dir_name_OVERRIDE
#define get_current_dir_name_OVERRIDE

char * get_current_dir_name (void){
    char *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "get_current_dir_name");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef get_nprocs_OVERRIDE
#define get_nprocs_OVERRIDE

int get_nprocs (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "get_nprocs");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef get_nprocs_conf_OVERRIDE
#define get_nprocs_conf_OVERRIDE

int get_nprocs_conf (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "get_nprocs_conf");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef get_phys_pages_OVERRIDE
#define get_phys_pages_OVERRIDE

long int get_phys_pages (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "get_phys_pages");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef glob_OVERRIDE
#define glob_OVERRIDE

int glob (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob_t *vector_ptr){
    int  (*original_func)(const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob_t *vector_ptr);
    original_func = dlsym(RTLD_NEXT, "glob");
    preload_log("%s", "");
    return original_func(pattern,flags,errfunc,vector_ptr);
}

#endif
// #ifndef glob64_OVERRIDE
// #define glob64_OVERRIDE

// int glob64 (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob64_t *vector_ptr){
//     int  (*original_func)(const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob64_t *vector_ptr);
//     original_func = dlsym(RTLD_NEXT, "glob64");
//     preload_log("%s", "");
//     return original_func(pattern,flags,errfunc,vector_ptr);
// }

// #endif
#ifndef globfree_OVERRIDE
#define globfree_OVERRIDE

void globfree (glob_t *pglob){
    void  (*original_func)(glob_t *pglob);
    original_func = dlsym(RTLD_NEXT, "globfree");
    preload_log("%s", "");
    return original_func(pglob);
}

#endif
// #ifndef globfree64_OVERRIDE
// #define globfree64_OVERRIDE

// void globfree64 (glob64_t *pglob){
//     void  (*original_func)(glob64_t *pglob);
//     original_func = dlsym(RTLD_NEXT, "globfree64");
//     preload_log("%s", "");
//     return original_func(pglob);
// }

// #endif
#ifndef gmtime_OVERRIDE
#define gmtime_OVERRIDE

struct tm * gmtime (const time_t *time){
    struct tm *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "gmtime");
    preload_log("%s", "");
    return original_func(time);
}

#endif
#ifndef gmtime_r_OVERRIDE
#define gmtime_r_OVERRIDE

struct tm * gmtime_r (const time_t *time, struct tm *resultp){
    struct tm *  (*original_func)(const time_t *time, struct tm *resultp);
    original_func = dlsym(RTLD_NEXT, "gmtime_r");
    preload_log("%s", "");
    return original_func(time,resultp);
}

#endif
#ifndef grantpt_OVERRIDE
#define grantpt_OVERRIDE

int grantpt (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "grantpt");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef gsignal_OVERRIDE
#define gsignal_OVERRIDE

int gsignal (int signum){
    int  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "gsignal");
    preload_log("%s", "");
    return original_func(signum);
}

#endif

#ifndef hasmntopt_OVERRIDE
#define hasmntopt_OVERRIDE

char * hasmntopt (const struct mntent *mnt, const char *opt){
    char *  (*original_func)(const struct mntent *mnt, const char *opt);
    original_func = dlsym(RTLD_NEXT, "hasmntopt");
    preload_log("%s", "");
    return original_func(mnt,opt);
}

#endif
#ifndef hcreate_OVERRIDE
#define hcreate_OVERRIDE

int hcreate (size_t nel){
    int  (*original_func)(size_t nel);
    original_func = dlsym(RTLD_NEXT, "hcreate");
    preload_log("%s", "");
    return original_func(nel);
}

#endif
#ifndef hcreate_r_OVERRIDE
#define hcreate_r_OVERRIDE

int hcreate_r (size_t nel, struct hsearch_data *htab){
    int  (*original_func)(size_t nel, struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hcreate_r");
    preload_log("%s", "");
    return original_func(nel,htab);
}

#endif
#ifndef hdestroy_OVERRIDE
#define hdestroy_OVERRIDE

void hdestroy (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "hdestroy");
    preload_log("%s", "");
    return original_func();
}

#endif


#ifndef hdestroy_r_OVERRIDE
#define hdestroy_r_OVERRIDE

void hdestroy_r (struct hsearch_data *htab){
    void  (*original_func)(struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hdestroy_r");
    preload_log("%s", "");
    return original_func(htab);
}

#endif
#ifndef hsearch_OVERRIDE
#define hsearch_OVERRIDE

ENTRY * hsearch (ENTRY item, ACTION action){
    ENTRY *  (*original_func)(ENTRY item, ACTION action);
    original_func = dlsym(RTLD_NEXT, "hsearch");
    preload_log("%s", "");
    return original_func(item,action);
}

#endif
#ifndef hsearch_r_OVERRIDE
#define hsearch_r_OVERRIDE

int hsearch_r (ENTRY item, ACTION action, ENTRY **retval, struct hsearch_data *htab){
    int  (*original_func)(ENTRY item, ACTION action, ENTRY **retval, struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hsearch_r");
    preload_log("%s", "");
    return original_func(item,action,retval,htab);
}

#endif
#ifndef htonl_OVERRIDE
#define htonl_OVERRIDE

uint32_t htonl (uint32_t hostlong){
    uint32_t  (*original_func)(uint32_t hostlong);
    original_func = dlsym(RTLD_NEXT, "htonl");
    preload_log("%s", "");
    return original_func(hostlong);
}

#endif
#ifndef htons_OVERRIDE
#define htons_OVERRIDE

uint16_t htons (uint16_t hostshort){
    uint16_t  (*original_func)(uint16_t hostshort);
    original_func = dlsym(RTLD_NEXT, "htons");
    preload_log("%s", "");
    return original_func(hostshort);
}

#endif
#ifndef hypot_OVERRIDE
#define hypot_OVERRIDE

double hypot (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "hypot");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef hypotf_OVERRIDE
#define hypotf_OVERRIDE

float hypotf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "hypotf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef hypotl_OVERRIDE
#define hypotl_OVERRIDE

long double hypotl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "hypotl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef iconv_OVERRIDE
#define iconv_OVERRIDE

size_t iconv (iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft){
    size_t  (*original_func)(iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
    original_func = dlsym(RTLD_NEXT, "iconv");
    preload_log("%s", "");
    return original_func(cd,inbuf,inbytesleft,outbuf,outbytesleft);
}

#endif
#ifndef iconv_close_OVERRIDE
#define iconv_close_OVERRIDE

int iconv_close (iconv_t cd){
    int  (*original_func)(iconv_t cd);
    original_func = dlsym(RTLD_NEXT, "iconv_close");
    preload_log("%s", "");
    return original_func(cd);
}

#endif
#ifndef iconv_open_OVERRIDE
#define iconv_open_OVERRIDE

iconv_t iconv_open (const char *tocode, const char *fromcode){
    iconv_t  (*original_func)(const char *tocode, const char *fromcode);
    original_func = dlsym(RTLD_NEXT, "iconv_open");
    preload_log("%s", "");
    return original_func(tocode,fromcode);
}

#endif
#ifndef if_freenameindex_OVERRIDE
#define if_freenameindex_OVERRIDE

void if_freenameindex (struct if_nameindex *ptr){
    void  (*original_func)(struct if_nameindex *ptr);
    original_func = dlsym(RTLD_NEXT, "if_freenameindex");
    preload_log("%s", "");
    return original_func(ptr);
}

#endif
#ifndef if_indextoname_OVERRIDE
#define if_indextoname_OVERRIDE

char * if_indextoname (unsigned int ifindex, char *ifname){
    char *  (*original_func)(unsigned int ifindex, char *ifname);
    original_func = dlsym(RTLD_NEXT, "if_indextoname");
    preload_log("%s", "");
    return original_func(ifindex,ifname);
}

#endif 
#ifndef if_nameindex_OVERRIDE
#define if_nameindex_OVERRIDE

struct if_nameindex * if_nameindex (void){
    struct if_nameindex * (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "if_nameindex");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef if_nametoindex_OVERRIDE
#define if_nametoindex_OVERRIDE

unsigned int if_nametoindex (const char *ifname){
    unsigned int  (*original_func)(const char *ifname);
    original_func = dlsym(RTLD_NEXT, "if_nametoindex");
    preload_log("%s", "");
    return original_func(ifname);
}

#endif 
#ifndef ilogb_OVERRIDE
#define ilogb_OVERRIDE

int ilogb (double x){
    int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "ilogb");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef ilogbf_OVERRIDE
#define ilogbf_OVERRIDE

int ilogbf (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "ilogbf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef ilogbl_OVERRIDE
#define ilogbl_OVERRIDE

int ilogbl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "ilogbl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef imaxabs_OVERRIDE
#define imaxabs_OVERRIDE

intmax_t imaxabs (intmax_t number){
    intmax_t  (*original_func)(intmax_t number);
    original_func = dlsym(RTLD_NEXT, "imaxabs");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef imaxdiv_OVERRIDE
#define imaxdiv_OVERRIDE

imaxdiv_t imaxdiv (intmax_t numerator, intmax_t denominator){
    imaxdiv_t  (*original_func)(intmax_t numerator, intmax_t denominator);
    original_func = dlsym(RTLD_NEXT, "imaxdiv");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef index_OVERRIDE
#define index_OVERRIDE

char * index (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "index");
    preload_log("%s", "");
    return original_func(string,c);
}

#endif 
#ifndef inet_addr_OVERRIDE
#define inet_addr_OVERRIDE

uint32_t inet_addr (const char *name){
    uint32_t  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "inet_addr");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef inet_aton_OVERRIDE
#define inet_aton_OVERRIDE

int inet_aton (const char *name, struct in_addr *addr){
    int  (*original_func)(const char *name, struct in_addr *addr);
    original_func = dlsym(RTLD_NEXT, "inet_aton");
    preload_log("%s", "");
    return original_func(name,addr);
}

#endif
#ifndef inet_lnaof_OVERRIDE
#define inet_lnaof_OVERRIDE

uint32_t inet_lnaof (struct in_addr addr){
    uint32_t  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_lnaof");
    preload_log("%s", "");
    return original_func(addr);
}

#endif
#ifndef inet_makeaddr_OVERRIDE
#define inet_makeaddr_OVERRIDE

struct in_addr inet_makeaddr (uint32_t net, uint32_t local){
    struct in_addr  (*original_func)(uint32_t net, uint32_t local);
    original_func = dlsym(RTLD_NEXT, "inet_makeaddr");
    preload_log("%s", "");
    return original_func(net,local);
}

#endif 
#ifndef inet_netof_OVERRIDE
#define inet_netof_OVERRIDE

uint32_t inet_netof (struct in_addr addr){
    uint32_t  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_netof");
    preload_log("%s", "");
    return original_func(addr);
}

#endif
#ifndef inet_network_OVERRIDE
#define inet_network_OVERRIDE

uint32_t inet_network (const char *name){
    uint32_t  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "inet_network");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef inet_ntoa_OVERRIDE
#define inet_ntoa_OVERRIDE

char * inet_ntoa (struct in_addr addr){
    char *  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_ntoa");
    preload_log("%s", "");
    return original_func(addr);
}

#endif
#ifndef inet_ntop_OVERRIDE
#define inet_ntop_OVERRIDE

const char * inet_ntop (int af, const void *cp, char *buf, socklen_t len){
    const char *  (*original_func)(int af, const void *cp, char *buf, socklen_t len);
    original_func = dlsym(RTLD_NEXT, "inet_ntop");
    preload_log("%s", "");
    return original_func(af,cp,buf,len);
}

#endif
#ifndef inet_pton_OVERRIDE
#define inet_pton_OVERRIDE

int inet_pton (int af, const char *cp, void *buf){
    int  (*original_func)(int af, const char *cp, void *buf);
    original_func = dlsym(RTLD_NEXT, "inet_pton");
    preload_log("%s", "");
    return original_func(af,cp,buf);
}

#endif
#ifndef initgroups_OVERRIDE
#define initgroups_OVERRIDE

int initgroups (const char *user, gid_t group){
    int  (*original_func)(const char *user, gid_t group);
    original_func = dlsym(RTLD_NEXT, "initgroups");
    preload_log("%s", "");
    return original_func(user,group);
}

#endif 
#ifndef initstate_OVERRIDE
#define initstate_OVERRIDE

char * initstate (unsigned int seed, char *state, size_t size){
    char *  (*original_func)(unsigned int seed, char *state, size_t size);
    original_func = dlsym(RTLD_NEXT, "initstate");
    preload_log("%s", "");
    return original_func(seed,state,size);
}

#endif
#ifndef initstate_r_OVERRIDE
#define initstate_r_OVERRIDE

int initstate_r (unsigned int seed, char *restrict statebuf, size_t statelen, struct random_data *restrict buf){
    int  (*original_func)(unsigned int seed, char *restrict statebuf, size_t statelen, struct random_data *restrict buf);
    original_func = dlsym(RTLD_NEXT, "initstate_r");
    preload_log("%s", "");
    return original_func(seed,statebuf,statelen,buf);
}

#endif
#ifndef innetgr_OVERRIDE
#define innetgr_OVERRIDE

int innetgr (const char *netgroup, const char *host, const char *user, const char *domain){
    int  (*original_func)(const char *netgroup, const char *host, const char *user, const char *domain);
    original_func = dlsym(RTLD_NEXT, "innetgr");
    preload_log("%s", "");
    return original_func(netgroup,host,user,domain);
}

#endif 
#ifndef ioctl_OVERRIDE
#define ioctl_OVERRIDE

int ioctl (int filedes, unsigned long command, ...){
    va_list ap;
    va_start(ap, command);
    int  (*original_func)(int filedes, unsigned long command, ...);
    original_func = dlsym(RTLD_NEXT, "ioctl");
    preload_log("%s", "");
    int  ret_val = original_func(filedes,command,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef isatty_OVERRIDE
#define isatty_OVERRIDE

int isatty (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "isatty");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef isinff_OVERRIDE
#define isinff_OVERRIDE

int isinff (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "isinff");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef isinfl_OVERRIDE
#define isinfl_OVERRIDE

int isinfl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "isinfl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef isnanl_OVERRIDE
#define isnanl_OVERRIDE

int isnanl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "isnanl");
    preload_log("%s", "");
    return original_func(x);
}

#endif

#ifndef iswalnum_OVERRIDE
#define iswalnum_OVERRIDE

int iswalnum (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswalnum");
    preload_log("%s", "");
    return original_func(wc);
}

#endif 
#ifndef iswalpha_OVERRIDE
#define iswalpha_OVERRIDE

int iswalpha (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswalpha");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswblank_OVERRIDE
#define iswblank_OVERRIDE

int iswblank (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswblank");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswcntrl_OVERRIDE
#define iswcntrl_OVERRIDE

int iswcntrl (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswcntrl");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswctype_OVERRIDE
#define iswctype_OVERRIDE

int iswctype (wint_t wc, wctype_t desc){
    int  (*original_func)(wint_t wc, wctype_t desc);
    original_func = dlsym(RTLD_NEXT, "iswctype");
    preload_log("%s", "");
    return original_func(wc,desc);
}

#endif
#ifndef iswdigit_OVERRIDE
#define iswdigit_OVERRIDE

int iswdigit (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswdigit");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswgraph_OVERRIDE
#define iswgraph_OVERRIDE

int iswgraph (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswgraph");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswlower_OVERRIDE
#define iswlower_OVERRIDE

int iswlower (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswlower");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswprint_OVERRIDE
#define iswprint_OVERRIDE

int iswprint (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswprint");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswpunct_OVERRIDE
#define iswpunct_OVERRIDE

int iswpunct (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswpunct");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswspace_OVERRIDE
#define iswspace_OVERRIDE

int iswspace (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswspace");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswupper_OVERRIDE
#define iswupper_OVERRIDE

int iswupper (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswupper");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef iswxdigit_OVERRIDE
#define iswxdigit_OVERRIDE

int iswxdigit (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswxdigit");
    preload_log("%s", "");
    return original_func(wc);
}

#endif

#ifndef j0_OVERRIDE
#define j0_OVERRIDE

double j0 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "j0");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef j0f_OVERRIDE
#define j0f_OVERRIDE

float j0f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "j0f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef j0l_OVERRIDE
#define j0l_OVERRIDE

long double j0l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "j0l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef j1_OVERRIDE
#define j1_OVERRIDE

double j1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "j1");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef j1f_OVERRIDE
#define j1f_OVERRIDE

float j1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "j1f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef j1l_OVERRIDE
#define j1l_OVERRIDE

long double j1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "j1l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef jn_OVERRIDE
#define jn_OVERRIDE

double jn (int n, double x){
    double  (*original_func)(int n, double x);
    original_func = dlsym(RTLD_NEXT, "jn");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
#ifndef jnf_OVERRIDE
#define jnf_OVERRIDE

float jnf (int n, float x){
    float  (*original_func)(int n, float x);
    original_func = dlsym(RTLD_NEXT, "jnf");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
#ifndef jnl_OVERRIDE
#define jnl_OVERRIDE

long double jnl (int n, long double x){
    long double  (*original_func)(int n, long double x);
    original_func = dlsym(RTLD_NEXT, "jnl");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
#ifndef jrand48_OVERRIDE
#define jrand48_OVERRIDE

long int jrand48 (unsigned short int xsubi[3]){
    long int  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "jrand48");
    preload_log("%s", "");
    return original_func(xsubi);
}

#endif
#ifndef jrand48_r_OVERRIDE
#define jrand48_r_OVERRIDE

int jrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "jrand48_r");
    preload_log("%s", "");
    return original_func(xsubi,buffer,result);
}

#endif
#ifndef kill_OVERRIDE
#define kill_OVERRIDE

int kill (pid_t pid, int signum){
    int  (*original_func)(pid_t pid, int signum);
    original_func = dlsym(RTLD_NEXT, "kill");
    preload_log("%s", "");
    return original_func(pid,signum);
}

#endif
#ifndef killpg_OVERRIDE
#define killpg_OVERRIDE

int killpg (int pgid, int signum){
    int  (*original_func)(int pgid, int signum);
    original_func = dlsym(RTLD_NEXT, "killpg");
    preload_log("%s", "");
    return original_func(pgid,signum);
}

#endif 
#ifndef l64a_OVERRIDE
#define l64a_OVERRIDE

char * l64a (long int n){
    char *  (*original_func)(long int n);
    original_func = dlsym(RTLD_NEXT, "l64a");
    preload_log("%s", "");
    return original_func(n);
}

#endif 
#ifndef labs_OVERRIDE
#define labs_OVERRIDE

long int labs (long int number){
    long int  (*original_func)(long int number);
    original_func = dlsym(RTLD_NEXT, "labs");
    preload_log("%s", "");
    return original_func(number);
}

#endif
#ifndef lcong48_OVERRIDE
#define lcong48_OVERRIDE

void lcong48 (unsigned short int param[7]){
    void  (*original_func)(unsigned short int param[7]);
    original_func = dlsym(RTLD_NEXT, "lcong48");
    preload_log("%s", "");
    return original_func(param);
}

#endif
#ifndef lcong48_r_OVERRIDE
#define lcong48_r_OVERRIDE

int lcong48_r (unsigned short int param[7], struct drand48_data *buffer){
    int  (*original_func)(unsigned short int param[7], struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "lcong48_r");
    preload_log("%s", "");
    return original_func(param,buffer);
}

#endif
#ifndef ldexp_OVERRIDE
#define ldexp_OVERRIDE

double ldexp (double value, int exponent){
    double  (*original_func)(double value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexp");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef ldexpf_OVERRIDE
#define ldexpf_OVERRIDE

float ldexpf (float value, int exponent){
    float  (*original_func)(float value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexpf");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef ldexpl_OVERRIDE
#define ldexpl_OVERRIDE

long double ldexpl (long double value, int exponent){
    long double  (*original_func)(long double value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexpl");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif 
#ifndef ldiv_OVERRIDE
#define ldiv_OVERRIDE

ldiv_t ldiv (long int numerator, long int denominator){
    ldiv_t  (*original_func)(long int numerator, long int denominator);
    original_func = dlsym(RTLD_NEXT, "ldiv");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif 
#ifndef lfind_OVERRIDE
#define lfind_OVERRIDE

void * lfind (const void *key, const void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, const void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "lfind");
    preload_log("%s", "");
    return original_func(key,base,nmemb,size,compar);
}

#endif
#ifndef lgamma_OVERRIDE
#define lgamma_OVERRIDE

double lgamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lgamma");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lgammaf_OVERRIDE
#define lgammaf_OVERRIDE

float lgammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lgammaf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lgammaf_r_OVERRIDE
#define lgammaf_r_OVERRIDE

float lgammaf_r (float x, int *signp){
    float  (*original_func)(float x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgammaf_r");
    preload_log("%s", "");
    return original_func(x,signp);
}

#endif
#ifndef lgammal_OVERRIDE
#define lgammal_OVERRIDE

long double lgammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lgammal");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef lgammal_r_OVERRIDE
#define lgammal_r_OVERRIDE

long double lgammal_r (long double x, int *signp){
    long double  (*original_func)(long double x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgammal_r");
    preload_log("%s", "");
    return original_func(x,signp);
}

#endif
#ifndef lgamma_r_OVERRIDE
#define lgamma_r_OVERRIDE

double lgamma_r (double x, int *signp){
    double  (*original_func)(double x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgamma_r");
    preload_log("%s", "");
    return original_func(x,signp);
}

#endif 
// #ifndef link_OVERRIDE
// #define link_OVERRIDE

// int link (const char *oldname, const char *newname){
//     int  (*original_func)(const char *oldname, const char *newname);
//     original_func = dlsym(RTLD_NEXT, "link");
//     preload_log("%s", "");
//     return original_func(oldname,newname);
// }

// #endif  
#ifndef linkat_OVERRIDE
#define linkat_OVERRIDE

int linkat (int oldfd, const char *oldname, int newfd, const char *newname, int flags){
    int  (*original_func)(int oldfd, const char *oldname, int newfd, const char *newname, int flags);
    original_func = dlsym(RTLD_NEXT, "linkat");
    // preload_log("%s", "");
    return original_func(oldfd,oldname,newfd,newname,flags);
}

#endif 
#ifndef lio_listio_OVERRIDE
#define lio_listio_OVERRIDE

int lio_listio (int mode, struct aiocb *const list[], int nent, struct sigevent *sig){
    int  (*original_func)(int mode, struct aiocb *const list[], int nent, struct sigevent *sig);
    original_func = dlsym(RTLD_NEXT, "lio_listio");
    preload_log("%s", "");
    return original_func(mode,list,nent,sig);
}

#endif
#ifndef lio_listio64_OVERRIDE
#define lio_listio64_OVERRIDE

int lio_listio64 (int mode, struct aiocb64 *const list[], int nent, struct sigevent *sig){
    int  (*original_func)(int mode, struct aiocb64 *const list[], int nent, struct sigevent *sig);
    original_func = dlsym(RTLD_NEXT, "lio_listio64");
    preload_log("%s", "");
    return original_func(mode,list,nent,sig);
}

#endif  
#ifndef listen_OVERRIDE
#define listen_OVERRIDE

int listen (int socket, int n){
    int  (*original_func)(int socket, int n);
    original_func = dlsym(RTLD_NEXT, "listen");
    preload_log("%s", "");
    return original_func(socket,n);
}

#endif
#ifndef llabs_OVERRIDE
#define llabs_OVERRIDE

long long int llabs (long long int number){
    long long int  (*original_func)(long long int number);
    original_func = dlsym(RTLD_NEXT, "llabs");
    preload_log("%s", "");
    return original_func(number);
}

#endif 
#ifndef lldiv_OVERRIDE
#define lldiv_OVERRIDE

lldiv_t lldiv (long long int numerator, long long int denominator){
    lldiv_t  (*original_func)(long long int numerator, long long int denominator);
    original_func = dlsym(RTLD_NEXT, "lldiv");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef llogb_OVERRIDE
#define llogb_OVERRIDE

long int llogb (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llogb");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef llogbf_OVERRIDE
#define llogbf_OVERRIDE

long int llogbf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llogbf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llogbl_OVERRIDE
#define llogbl_OVERRIDE

long int llogbl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llogbl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llrint_OVERRIDE
#define llrint_OVERRIDE

long long int llrint (double x){
    long long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llrint");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llrintf_OVERRIDE
#define llrintf_OVERRIDE

long long int llrintf (float x){
    long long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llrintf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llrintl_OVERRIDE
#define llrintl_OVERRIDE

long long int llrintl (long double x){
    long long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llrintl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llround_OVERRIDE
#define llround_OVERRIDE

long long int llround (double x){
    long long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llround");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llroundf_OVERRIDE
#define llroundf_OVERRIDE

long long int llroundf (float x){
    long long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llroundf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef llroundl_OVERRIDE
#define llroundl_OVERRIDE

long long int llroundl (long double x){
    long long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llroundl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef localeconv_OVERRIDE
#define localeconv_OVERRIDE

struct lconv * localeconv (void){
    struct lconv *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "localeconv");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef localtime_OVERRIDE
#define localtime_OVERRIDE

struct tm * localtime (const time_t *time){
    struct tm *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "localtime");
    preload_log("%s", "");
    return original_func(time);
}

#endif 
#ifndef localtime_r_OVERRIDE
#define localtime_r_OVERRIDE

struct tm * localtime_r (const time_t *time, struct tm *resultp){
    struct tm *  (*original_func)(const time_t *time, struct tm *resultp);
    original_func = dlsym(RTLD_NEXT, "localtime_r");
    preload_log("%s", "");
    return original_func(time,resultp);
}

#endif
#ifndef log_OVERRIDE
#define log_OVERRIDE

double log (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef log10_OVERRIDE
#define log10_OVERRIDE

double log10 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log10");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log10f_OVERRIDE
#define log10f_OVERRIDE

float log10f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log10f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log10l_OVERRIDE
#define log10l_OVERRIDE

long double log10l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log10l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log1p_OVERRIDE
#define log1p_OVERRIDE

double log1p (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log1p");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log1pf_OVERRIDE
#define log1pf_OVERRIDE

float log1pf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log1pf");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef log1pl_OVERRIDE
#define log1pl_OVERRIDE

long double log1pl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log1pl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log2_OVERRIDE
#define log2_OVERRIDE

double log2 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log2");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log2f_OVERRIDE
#define log2f_OVERRIDE

float log2f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log2f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef log2l_OVERRIDE
#define log2l_OVERRIDE

long double log2l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log2l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef logb_OVERRIDE
#define logb_OVERRIDE

double logb (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "logb");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef logbf_OVERRIDE
#define logbf_OVERRIDE

float logbf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "logbf");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef logbl_OVERRIDE
#define logbl_OVERRIDE

long double logbl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "logbl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef logf_OVERRIDE
#define logf_OVERRIDE

float logf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "logf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef login_OVERRIDE
#define login_OVERRIDE

void login (const struct utmp *entry){
    void  (*original_func)(const struct utmp *entry);
    original_func = dlsym(RTLD_NEXT, "login");
    preload_log("%s", "");
    return original_func(entry);
}

#endif
#ifndef login_tty_OVERRIDE
#define login_tty_OVERRIDE

int login_tty (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "login_tty");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef logl_OVERRIDE
#define logl_OVERRIDE

long double logl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "logl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef logout_OVERRIDE
#define logout_OVERRIDE

int logout (const char *ut_line){
    int  (*original_func)(const char *ut_line);
    original_func = dlsym(RTLD_NEXT, "logout");
    preload_log("%s", "");
    return original_func(ut_line);
}

#endif
#ifndef logwtmp_OVERRIDE
#define logwtmp_OVERRIDE

void logwtmp (const char *ut_line, const char *ut_name, const char *ut_host){
    void  (*original_func)(const char *ut_line, const char *ut_name, const char *ut_host);
    original_func = dlsym(RTLD_NEXT, "logwtmp");
    preload_log("%s", "");
    original_func(ut_line,ut_name,ut_host);
}

#endif
#ifndef longjmp_OVERRIDE
#define longjmp_OVERRIDE

void longjmp (jmp_buf state, int value){
    void  (*original_func)(jmp_buf state, int value);
    original_func = dlsym(RTLD_NEXT, "longjmp");
    preload_log("%s", "");
    original_func(state,value);
}

#endif
#ifndef lrand48_OVERRIDE
#define lrand48_OVERRIDE

long int lrand48 (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "lrand48");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef lrand48_r_OVERRIDE
#define lrand48_r_OVERRIDE

int lrand48_r (struct drand48_data *buffer, long int *result){
    int  (*original_func)(struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "lrand48_r");
    preload_log("%s", "");
    return original_func(buffer,result);
}

#endif
#ifndef lrint_OVERRIDE
#define lrint_OVERRIDE

long int lrint (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lrint");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lrintf_OVERRIDE
#define lrintf_OVERRIDE

long int lrintf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lrintf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lrintl_OVERRIDE
#define lrintl_OVERRIDE

long int lrintl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lrintl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lround_OVERRIDE
#define lround_OVERRIDE

long int lround (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lround");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lroundf_OVERRIDE
#define lroundf_OVERRIDE

long int lroundf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lroundf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lroundl_OVERRIDE
#define lroundl_OVERRIDE

long int lroundl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lroundl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef lsearch_OVERRIDE
#define lsearch_OVERRIDE

void * lsearch (const void *key, void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "lsearch");
    preload_log("%s", "");
    return original_func(key,base,nmemb,size,compar);
}

#endif
#ifndef lseek_OVERRIDE
#define lseek_OVERRIDE

off_t lseek (int filedes, off_t offset, int whence){
    off_t  (*original_func)(int filedes, off_t offset, int whence);
    original_func = dlsym(RTLD_NEXT, "lseek");
    preload_log("%s", "");
    return original_func(filedes,offset,whence);
}

#endif
// #ifndef lseek64_OVERRIDE
// #define lseek64_OVERRIDE

// off64_t lseek64 (int filedes, off64_t offset, int whence){
//     off64_t  (*original_func)(int filedes, off64_t offset, int whence);
//     original_func = dlsym(RTLD_NEXT, "lseek64");
//     preload_log("%s", "");
//     return original_func(filedes,offset,whence);
// }

// #endif
#ifndef lstat_OVERRIDE
#define lstat_OVERRIDE

int lstat (const char *filename, struct stat *buf){
    int  (*original_func)(const char *filename, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "lstat");
    preload_log("%s", "");
    return original_func(filename,buf);
}

#endif
#ifndef lstat64_OVERRIDE
#define lstat64_OVERRIDE

int lstat64 (const char *filename, struct stat64 *buf){
    int  (*original_func)(const char *filename, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "lstat64");
    preload_log("%s", "");
    return original_func(filename,buf);
}

#endif
#ifndef lutimes_OVERRIDE
#define lutimes_OVERRIDE

int lutimes (const char *filename, const struct timeval tvp[2]){
    int  (*original_func)(const char *filename, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "lutimes");
    preload_log("%s", "");
    return original_func(filename,tvp);
}

#endif
#ifndef madvise_OVERRIDE
#define madvise_OVERRIDE

int madvise (void *addr, size_t length, int advice){
    int  (*original_func)(void *addr, size_t length, int advice);
    original_func = dlsym(RTLD_NEXT, "madvise");
    preload_log("%s", "");
    return original_func(addr,length,advice);
}

#endif
#ifndef makecontext_OVERRIDE
#define makecontext_OVERRIDE

void makecontext (ucontext_t *ucp, void (*func) (void), int argc, ...){
    va_list ap;
    va_start(ap, argc);
    // for(int i = 0; i < argc; i++){
        // va_arg(ap, int);
    // }
    void  (*original_func)(ucontext_t *ucp, void (*func) (void), int argc, ...);
    original_func = dlsym(RTLD_NEXT, "makecontext");
    preload_log("%s", "");
    original_func(ucp,func,argc,ap);
    va_end(ap);
    return;
}


#endif 
#ifndef mallinfo_OVERRIDE
#define mallinfo_OVERRIDE

struct mallinfo mallinfo (void){
    struct mallinfo (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "mallinfo");
    preload_log("%s", "");
    return original_func();
}

#endif
// #ifndef malloc_OVERRIDE
// #define malloc_OVERRIDE

// void * malloc (size_t size){
//     void *  (*original_func)(size_t size);
//     original_func = dlsym(RTLD_NEXT, "malloc");
//     preload_log("%s", "");
//     return original_func(size);
// }

// #endif
#ifndef mallopt_OVERRIDE
#define mallopt_OVERRIDE

int mallopt (int param, int value){
    int  (*original_func)(int param, int value);
    original_func = dlsym(RTLD_NEXT, "mallopt");
    preload_log("%s", "");
    return original_func(param,value);
}

#endif
#ifndef mblen_OVERRIDE
#define mblen_OVERRIDE

int mblen (const char *string, size_t size){
    int  (*original_func)(const char *string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mblen");
    preload_log("%s", "");
    return original_func(string,size);
}

#endif
#ifndef mbrlen_OVERRIDE
#define mbrlen_OVERRIDE

size_t mbrlen (const char *restrict s, size_t n, mbstate_t *ps){
    size_t  (*original_func)(const char *restrict s, size_t n, mbstate_t *ps);
    original_func = dlsym(RTLD_NEXT, "mbrlen");
    preload_log("%s", "");
    return original_func(s,n,ps);
}

#endif
#ifndef mbrtowc_OVERRIDE
#define mbrtowc_OVERRIDE

size_t mbrtowc (wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbrtowc");
    preload_log("%s", "");
    return original_func(pwc,s,n,ps);
}

#endif 
#ifndef mbsinit_OVERRIDE
#define mbsinit_OVERRIDE

int mbsinit (const mbstate_t *ps){
    int  (*original_func)(const mbstate_t *ps);
    original_func = dlsym(RTLD_NEXT, "mbsinit");
    preload_log("%s", "");
    return original_func(ps);
}

#endif
#ifndef mbsnrtowcs_OVERRIDE
#define mbsnrtowcs_OVERRIDE

size_t mbsnrtowcs (wchar_t *restrict dst, const char **restrict src, size_t nmc, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict dst, const char **restrict src, size_t nmc, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbsnrtowcs");
    preload_log("%s", "");
    return original_func(dst,src,nmc,len,ps);
}

#endif
#ifndef mbsrtowcs_OVERRIDE
#define mbsrtowcs_OVERRIDE

size_t mbsrtowcs (wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbsrtowcs");
    preload_log("%s", "");
    return original_func(dst,src,len,ps);
}

#endif
#ifndef mbstowcs_OVERRIDE
#define mbstowcs_OVERRIDE

size_t mbstowcs (wchar_t *wstring, const char *string, size_t size){
    size_t  (*original_func)(wchar_t *wstring, const char *string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mbstowcs");
    preload_log("%s", "");
    return original_func(wstring,string,size);
}

#endif
#ifndef mbtowc_OVERRIDE
#define mbtowc_OVERRIDE

int mbtowc (wchar_t *restrict result, const char *restrict string, size_t size){
    int  (*original_func)(wchar_t *restrict result, const char *restrict string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mbtowc");
    preload_log("%s", "");
    return original_func(result,string,size);
}

#endif
#ifndef mcheck_OVERRIDE
#define mcheck_OVERRIDE

int mcheck (void (*abortfn) (enum mcheck_status status)){
    int  (*original_func)(void (*abortfn) (enum mcheck_status status));
    original_func = dlsym(RTLD_NEXT, "mcheck");
    preload_log("%s", "");
    return original_func(abortfn);
}

#endif 
#ifndef memalign_OVERRIDE
#define memalign_OVERRIDE

void * memalign (size_t boundary, size_t size){
    void *  (*original_func)(size_t boundary, size_t size);
    original_func = dlsym(RTLD_NEXT, "memalign");
    preload_log("%s", "");
    return original_func(boundary,size);
}

#endif 
#ifndef memccpy_OVERRIDE
#define memccpy_OVERRIDE

void * memccpy (void *restrict to, const void *restrict from, int c, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memccpy");
    preload_log("%s", "");
    return original_func(to,from,c,size);
}

#endif
#ifndef memchr_OVERRIDE
#define memchr_OVERRIDE

void * memchr (const void *block, int c, size_t size){
    void *  (*original_func)(const void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memchr");
    preload_log("%s", "");
    return original_func(block,c,size);
}

#endif
#ifndef memcmp_OVERRIDE
#define memcmp_OVERRIDE

int memcmp (const void *a1, const void *a2, size_t size){
    int  (*original_func)(const void *a1, const void *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "memcmp");
    preload_log("%s", "");
    return original_func(a1,a2,size);
}

#endif 
#ifndef memcpy_OVERRIDE
#define memcpy_OVERRIDE

void * memcpy (void *restrict to, const void *restrict from, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "memcpy");
    // preload_log("%s", "");
    return original_func(to,from,size);
}

#endif 
#ifndef memfd_create_OVERRIDE
#define memfd_create_OVERRIDE

int memfd_create (const char *name, unsigned int flags){
    int  (*original_func)(const char *name, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "memfd_create");
    preload_log("%s", "");
    return original_func(name,flags);
}

#endif
#ifndef memfrob_OVERRIDE
#define memfrob_OVERRIDE

void * memfrob (void *mem, size_t length){
    void *  (*original_func)(void *mem, size_t length);
    original_func = dlsym(RTLD_NEXT, "memfrob");
    preload_log("%s", "");
    return original_func(mem,length);
}

#endif 
#ifndef memmem_OVERRIDE
#define memmem_OVERRIDE

void * memmem (const void *haystack, size_t haystack_len,const void *needle, size_t needle_len){
    void *  (*original_func)(const void *haystack, size_t haystack_len,const void *needle, size_t needle_len);
    original_func = dlsym(RTLD_NEXT, "memmem");
    preload_log("%s", "");
    return original_func(haystack,haystack_len,needle,needle_len);
}

#endif
#ifndef memmove_OVERRIDE
#define memmove_OVERRIDE

void * memmove (void *to, const void *from, size_t size){
    void *  (*original_func)(void *to, const void *from, size_t size);
    original_func = dlsym(RTLD_NEXT, "memmove");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif
#ifndef mempcpy_OVERRIDE
#define mempcpy_OVERRIDE

void * mempcpy (void *restrict to, const void *restrict from, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "mempcpy");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif 
#ifndef memrchr_OVERRIDE
#define memrchr_OVERRIDE

void * memrchr (const void *block, int c, size_t size){
    void *  (*original_func)(const void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memrchr");
    preload_log("%s", "");
    return original_func(block,c,size);
}

#endif
#ifndef memset_OVERRIDE
#define memset_OVERRIDE

void * memset (void *block, int c, size_t size){
    void *  (*original_func)(void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memset");
    preload_log("%s", "");
    return original_func(block,c,size);
}

#endif
#ifndef mkdir_OVERRIDE
#define mkdir_OVERRIDE

int mkdir (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "mkdir");
    preload_log("%s", "");
    return original_func(filename,mode);
}

#endif
#ifndef mkdtemp_OVERRIDE
#define mkdtemp_OVERRIDE

char * mkdtemp (char *template){
    char *  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mkdtemp");
    preload_log("%s", "");
    return original_func(template);
}

#endif
#ifndef mkfifo_OVERRIDE
#define mkfifo_OVERRIDE

int mkfifo (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "mkfifo");
    preload_log("%s", "");
    return original_func(filename,mode);
}

#endif 
#ifndef mknod_OVERRIDE
#define mknod_OVERRIDE

int mknod (const char *filename, mode_t mode, dev_t dev){
    int  (*original_func)(const char *filename, mode_t mode, dev_t dev);
    original_func = dlsym(RTLD_NEXT, "mknod");
    preload_log("%s", "");
    return original_func(filename,mode,dev);
}

#endif
#ifndef mkstemp_OVERRIDE
#define mkstemp_OVERRIDE

int mkstemp (char *template){
    int  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mkstemp");
    preload_log("%s", "");
    return original_func(template);
}

#endif
#ifndef mktemp_OVERRIDE
#define mktemp_OVERRIDE

char * mktemp (char *template){
    char *  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mktemp");
    preload_log("%s", "");
    return original_func(template);
}

#endif 
#ifndef mktime_OVERRIDE
#define mktime_OVERRIDE

time_t mktime (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "mktime");
    preload_log("%s", "");
    return original_func(brokentime);
}

#endif
#ifndef mlock_OVERRIDE
#define mlock_OVERRIDE

int mlock (const void *addr, size_t len){
    int  (*original_func)(const void *addr, size_t len);
    original_func = dlsym(RTLD_NEXT, "mlock");
    preload_log("%s", "");
    return original_func(addr,len);
}

#endif  
#ifndef mlock2_OVERRIDE
#define mlock2_OVERRIDE

int mlock2 (const void *addr, size_t len, unsigned int flags){
    int  (*original_func)(const void *addr, size_t len, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "mlock2");
    preload_log("%s", "");
    return original_func(addr,len,flags);
}

#endif
#ifndef mlockall_OVERRIDE
#define mlockall_OVERRIDE

int mlockall (int flags){
    int  (*original_func)(int flags);
    original_func = dlsym(RTLD_NEXT, "mlockall");
    preload_log("%s", "");
    return original_func(flags);
}

#endif 

#ifndef mmap_OVERRIDE
#define mmap_OVERRIDE

void * mmap (void *address, size_t length, int protect, int flags, int filedes, off_t offset){
    void *  (*original_func)(void *address, size_t length, int protect, int flags, int filedes, off_t offset);
    original_func = dlsym(RTLD_NEXT, "mmap");
    // preload_log("%s", "");
    return original_func(address,length,protect,flags,filedes,offset);
}

#endif 

// #ifndef mmap64_OVERRIDE
// #define mmap64_OVERRIDE

// void * mmap64 (void *address, size_t length, int protect, int flags, int filedes, off64_t offset){
//     void *  (*original_func)(void *address, size_t length, int protect, int flags, int filedes, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "mmap64");
//     preload_log("%s", "");
//     return original_func(address,length,protect,flags,filedes,offset);
// }

// #endif

#ifndef modf_OVERRIDE
#define modf_OVERRIDE

double modf (double value, double *integer_part){
    double  (*original_func)(double value, double *integer_part);
    original_func = dlsym(RTLD_NEXT, "modf");
    preload_log("%s", "");
    return original_func(value,integer_part);
}

#endif
#ifndef modff_OVERRIDE
#define modff_OVERRIDE

float modff (float value, float *integer_part){
    float  (*original_func)(float value, float *integer_part);
    original_func = dlsym(RTLD_NEXT, "modff");
    preload_log("%s", "");
    return original_func(value,integer_part);
}

#endif
#ifndef modfl_OVERRIDE
#define modfl_OVERRIDE

long double modfl (long double value, long double *integer_part){
    long double  (*original_func)(long double value, long double *integer_part);
    original_func = dlsym(RTLD_NEXT, "modfl");
    preload_log("%s", "");
    return original_func(value,integer_part);
}

#endif
#ifndef mount_OVERRIDE
#define mount_OVERRIDE

int mount (const char *special_file, const char *dir, const char *fstype, unsigned long int options, const void *data){
    int  (*original_func)(const char *special_file, const char *dir, const char *fstype, unsigned long int options, const void *data);
    original_func = dlsym(RTLD_NEXT, "mount");
    preload_log("%s", "");
    return original_func(special_file,dir,fstype,options,data);
}

#endif 
#ifndef mprobe_OVERRIDE
#define mprobe_OVERRIDE

int mprobe (void *pointer){
    enum mcheck_status  (*original_func)(void *pointer);
    original_func = dlsym(RTLD_NEXT, "mprobe");
    preload_log("%s", "");
    return original_func(pointer);
}

#endif
#ifndef mprotect_OVERRIDE
#define mprotect_OVERRIDE

int mprotect (void *address, size_t length, int protection){
    int  (*original_func)(void *address, size_t length, int protection);
    original_func = dlsym(RTLD_NEXT, "mprotect");
    preload_log("%s", "");
    return original_func(address,length,protection);
}

#endif

#ifndef mrand48_OVERRIDE
#define mrand48_OVERRIDE

long int mrand48 (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "mrand48");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef mrand48_r_OVERRIDE
#define mrand48_r_OVERRIDE

int mrand48_r (struct drand48_data *buffer, long int *result){
    int  (*original_func)(struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "mrand48_r");
    preload_log("%s", "");
    return original_func(buffer,result);
}

#endif
#ifndef mremap_OVERRIDE
#define mremap_OVERRIDE

void * mremap (void *address, size_t length, size_t new_length, int flag){
    void *  (*original_func)(void *address, size_t length, size_t new_length, int flag);
    original_func = dlsym(RTLD_NEXT, "mremap");
    preload_log("%s", "");
    return original_func(address,length,new_length,flag);
}

#endif 
#ifndef msync_OVERRIDE
#define msync_OVERRIDE

int msync (void *address, size_t length, int flags){
    int  (*original_func)(void *address, size_t length, int flags);
    original_func = dlsym(RTLD_NEXT, "msync");
    preload_log("%s", "");
    return original_func(address,length,flags);
}

#endif
#ifndef mtrace_OVERRIDE
#define mtrace_OVERRIDE

void mtrace (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "mtrace");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef munlock_OVERRIDE
#define munlock_OVERRIDE

int munlock (const void *addr, size_t len){
    int  (*original_func)(const void *addr, size_t len);
    original_func = dlsym(RTLD_NEXT, "munlock");
    preload_log("%s", "");
    return original_func(addr,len);
}

#endif
#ifndef munlockall_OVERRIDE
#define munlockall_OVERRIDE

int munlockall (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "munlockall");
    preload_log("%s", "");
    return original_func();
}

#endif

#ifndef munmap_OVERRIDE
#define munmap_OVERRIDE

int munmap (void *addr, size_t length){
    int  (*original_func)(void *addr, size_t length);
    original_func = dlsym(RTLD_NEXT, "munmap");
    preload_log("%s", "");
    return original_func(addr,length);
}

#endif

#ifndef muntrace_OVERRIDE
#define muntrace_OVERRIDE

void muntrace (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "muntrace");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef nan_OVERRIDE
#define nan_OVERRIDE

double nan (const char *tagp){
    double  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nan");
    preload_log("%s", "");
    return original_func(tagp);
}

#endif
#ifndef nanf_OVERRIDE
#define nanf_OVERRIDE

float nanf (const char *tagp){
    float  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nanf");
    preload_log("%s", "");
    return original_func(tagp);
}

#endif
#ifndef nanl_OVERRIDE
#define nanl_OVERRIDE

long double nanl (const char *tagp){
    long double  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nanl");
    preload_log("%s", "");
    return original_func(tagp);
}

#endif
#ifndef nanosleep_OVERRIDE
#define nanosleep_OVERRIDE

int nanosleep (const struct timespec *requested_time, struct timespec *remaining){
    int  (*original_func)(const struct timespec *requested_time, struct timespec *remaining);
    original_func = dlsym(RTLD_NEXT, "nanosleep");
    preload_log("%s", "");
    return original_func(requested_time,remaining);
}

#endif
#ifndef nearbyint_OVERRIDE
#define nearbyint_OVERRIDE

double nearbyint (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nearbyint");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nearbyintf_OVERRIDE
#define nearbyintf_OVERRIDE

float nearbyintf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nearbyintf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nearbyintl_OVERRIDE
#define nearbyintl_OVERRIDE

long double nearbyintl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nearbyintl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nextafter_OVERRIDE
#define nextafter_OVERRIDE

double nextafter (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "nextafter");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nextafterf_OVERRIDE
#define nextafterf_OVERRIDE

float nextafterf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "nextafterf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nextafterl_OVERRIDE
#define nextafterl_OVERRIDE

long double nextafterl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nextafterl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nextdown_OVERRIDE
#define nextdown_OVERRIDE

double nextdown (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nextdown");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nextdownf_OVERRIDE
#define nextdownf_OVERRIDE

float nextdownf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nextdownf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nextdownl_OVERRIDE
#define nextdownl_OVERRIDE

long double nextdownl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nextdownl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nexttoward_OVERRIDE
#define nexttoward_OVERRIDE

double nexttoward (double x, long double y){
    double  (*original_func)(double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttoward");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nexttowardf_OVERRIDE
#define nexttowardf_OVERRIDE

float nexttowardf (float x, long double y){
    float  (*original_func)(float x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttowardf");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nexttowardl_OVERRIDE
#define nexttowardl_OVERRIDE

long double nexttowardl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttowardl");
    preload_log("%s", "");
    return original_func(x,y);
}

#endif
#ifndef nextup_OVERRIDE
#define nextup_OVERRIDE

double nextup (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nextup");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nextupf_OVERRIDE
#define nextupf_OVERRIDE

float nextupf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nextupf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef nextupl_OVERRIDE
#define nextupl_OVERRIDE

long double nextupl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nextupl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
// #ifndef nftw_OVERRIDE
// #define nftw_OVERRIDE

// int nftw (const char *filename, __nftw_func_t func, int descriptors, int flag){
//     int  (*original_func)(const char *filename, __nftw_func_t func, int descriptors, int flag);
//     original_func = dlsym(RTLD_NEXT, "nftw");
//     preload_log("%s", "");
//     return original_func(filename,func,descriptors,flag);
// }

// #endif
// #ifndef nftw64_OVERRIDE
// #define nftw64_OVERRIDE

// int nftw64 (const char *filename, __nftw64_func_t func, int descriptors, int flag){
//     int  (*original_func)(const char *filename, __nftw64_func_t func, int descriptors, int flag);
//     original_func = dlsym(RTLD_NEXT, "nftw64");
//     preload_log("%s", "");
//     return original_func(filename,func,descriptors,flag);
// }

// #endif
#ifndef ngettext_OVERRIDE
#define ngettext_OVERRIDE

char * ngettext (const char *msgid1, const char *msgid2, unsigned long int n){
    char *  (*original_func)(const char *msgid1, const char *msgid2, unsigned long int n);
    original_func = dlsym(RTLD_NEXT, "ngettext");
    preload_log("%s", "");
    return original_func(msgid1,msgid2,n);
}

#endif
#ifndef nice_OVERRIDE
#define nice_OVERRIDE

int nice (int increment){
    int  (*original_func)(int increment);
    original_func = dlsym(RTLD_NEXT, "nice");
    preload_log("%s", "");
    return original_func(increment);
}

#endif 
#ifndef nl_langinfo_OVERRIDE
#define nl_langinfo_OVERRIDE

char * nl_langinfo (nl_item item){
    char *  (*original_func)(nl_item item);
    original_func = dlsym(RTLD_NEXT, "nl_langinfo");
    preload_log("%s", "");
    return original_func(item);
}

#endif
#ifndef nrand48_OVERRIDE
#define nrand48_OVERRIDE

long int nrand48 (unsigned short int xsubi[3]){
    long int  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "nrand48");
    preload_log("%s", "");
    return original_func(xsubi);
}

#endif
#ifndef nrand48_r_OVERRIDE
#define nrand48_r_OVERRIDE

int nrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "nrand48_r");
    preload_log("%s", "");
    return original_func(xsubi,buffer,result);
}

#endif
#ifndef ntohl_OVERRIDE
#define ntohl_OVERRIDE

uint32_t ntohl (uint32_t netlong){
    uint32_t  (*original_func)(uint32_t netlong);
    original_func = dlsym(RTLD_NEXT, "ntohl");
    preload_log("%s", "");
    return original_func(netlong);
}

#endif
#ifndef ntohs_OVERRIDE
#define ntohs_OVERRIDE

uint16_t ntohs (uint16_t netshort){
    uint16_t  (*original_func)(uint16_t netshort);
    original_func = dlsym(RTLD_NEXT, "ntohs");
    preload_log("%s", "");
    return original_func(netshort);
}

#endif
#ifndef ntp_adjtime_OVERRIDE
#define ntp_adjtime_OVERRIDE

int ntp_adjtime (struct timex *tptr){
    int  (*original_func)(struct timex *tptr);
    original_func = dlsym(RTLD_NEXT, "ntp_adjtime");
    preload_log("%s", "");
    return original_func(tptr);
}

#endif
#ifndef ntp_gettime_OVERRIDE
#define ntp_gettime_OVERRIDE

int ntp_gettime (struct ntptimeval *tptr){
    int  (*original_func)(struct ntptimeval *tptr);
    original_func = dlsym(RTLD_NEXT, "ntp_gettime");
    preload_log("%s", "");
    return original_func(tptr);
}

#endif
#ifndef obstack_1grow_OVERRIDE
#define obstack_1grow_OVERRIDE

void obstack_1grow (struct obstack *obstack_ptr, char c){
    void  (*original_func)(struct obstack *obstack_ptr, char c);
    original_func = dlsym(RTLD_NEXT, "obstack_1grow");
    preload_log("%s", "");
    return original_func(obstack_ptr,c);
}

#endif
#ifndef obstack_1grow_fast_OVERRIDE
#define obstack_1grow_fast_OVERRIDE

void obstack_1grow_fast (struct obstack *obstack_ptr, char c){
    void  (*original_func)(struct obstack *obstack_ptr, char c);
    original_func = dlsym(RTLD_NEXT, "obstack_1grow_fast");
    preload_log("%s", "");
    return original_func(obstack_ptr,c);
}

#endif
#ifndef obstack_alloc_OVERRIDE
#define obstack_alloc_OVERRIDE

void * obstack_alloc (struct obstack *obstack_ptr, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_alloc");
    preload_log("%s", "");
    return original_func(obstack_ptr,size);
}

#endif
#ifndef obstack_base_OVERRIDE
#define obstack_base_OVERRIDE

void * obstack_base (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_base");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif
#ifndef obstack_blank_OVERRIDE
#define obstack_blank_OVERRIDE

void obstack_blank (struct obstack *obstack_ptr, int size){
    void  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_blank");
    preload_log("%s", "");
    return original_func(obstack_ptr,size);
}

#endif 
#ifndef obstack_blank_fast_OVERRIDE
#define obstack_blank_fast_OVERRIDE

void obstack_blank_fast (struct obstack *obstack_ptr, int size){
    void  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_blank_fast");
    preload_log("%s", "");
    return original_func(obstack_ptr,size);
}

#endif
#ifndef obstack_copy_OVERRIDE
#define obstack_copy_OVERRIDE

void * obstack_copy (struct obstack *obstack_ptr, void *address, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, void *address, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_copy");
    preload_log("%s", "");
    return original_func(obstack_ptr,address,size);
}

#endif
#ifndef obstack_copy0_OVERRIDE
#define obstack_copy0_OVERRIDE

void * obstack_copy0 (struct obstack *obstack_ptr, void *address, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, void *address, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_copy0");
    preload_log("%s", "");
    return original_func(obstack_ptr,address,size);
}

#endif
#ifndef obstack_finish_OVERRIDE
#define obstack_finish_OVERRIDE

void * obstack_finish (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_finish");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif 
#ifndef obstack_free_OVERRIDE
#define obstack_free_OVERRIDE

void obstack_free (struct obstack *obstack_ptr, void *object){
    void  (*original_func)(struct obstack *obstack_ptr, void *object);
    original_func = dlsym(RTLD_NEXT, "obstack_free");
    preload_log("%s", "");
    return original_func(obstack_ptr,object);
}

#endif
#ifndef obstack_grow_OVERRIDE
#define obstack_grow_OVERRIDE

void obstack_grow (struct obstack *obstack_ptr, void *data, int size){
    void  (*original_func)(struct obstack *obstack_ptr, void *data, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_grow");
    preload_log("%s", "");
    return original_func(obstack_ptr,data,size);
}

#endif
#ifndef obstack_grow0_OVERRIDE
#define obstack_grow0_OVERRIDE

void obstack_grow0 (struct obstack *obstack_ptr, void *data, int size){
    void  (*original_func)(struct obstack *obstack_ptr, void *data, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_grow0");
    preload_log("%s", "");
    return original_func(obstack_ptr,data,size);
}

#endif
#ifndef obstack_init_OVERRIDE
#define obstack_init_OVERRIDE

int obstack_init (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_init");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif
#ifndef obstack_int_grow_OVERRIDE
#define obstack_int_grow_OVERRIDE

void obstack_int_grow (struct obstack *obstack_ptr, int data){
    void  (*original_func)(struct obstack *obstack_ptr, int data);
    original_func = dlsym(RTLD_NEXT, "obstack_int_grow");
    preload_log("%s", "");
    return original_func(obstack_ptr,data);
}

#endif
#ifndef obstack_int_grow_fast_OVERRIDE
#define obstack_int_grow_fast_OVERRIDE

void obstack_int_grow_fast (struct obstack *obstack_ptr, int data){
    void  (*original_func)(struct obstack *obstack_ptr, int data);
    original_func = dlsym(RTLD_NEXT, "obstack_int_grow_fast");
    preload_log("%s", "");
    return original_func(obstack_ptr,data);
}

#endif
#ifndef obstack_next_free_OVERRIDE
#define obstack_next_free_OVERRIDE

void * obstack_next_free (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_next_free");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif
#ifndef obstack_object_size_OVERRIDE
#define obstack_object_size_OVERRIDE

int obstack_object_size (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_object_size");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif 

#ifndef obstack_ptr_grow_OVERRIDE
#define obstack_ptr_grow_OVERRIDE

void obstack_ptr_grow (struct obstack *obstack_ptr, void *data){
    void  (*original_func)(struct obstack *obstack_ptr, void *data);
    original_func = dlsym(RTLD_NEXT, "obstack_ptr_grow");
    preload_log("%s", "");
    return original_func(obstack_ptr,data);
}

#endif
#ifndef obstack_ptr_grow_fast_OVERRIDE
#define obstack_ptr_grow_fast_OVERRIDE

void obstack_ptr_grow_fast (struct obstack *obstack_ptr, void *data){
    void  (*original_func)(struct obstack *obstack_ptr, void *data);
    original_func = dlsym(RTLD_NEXT, "obstack_ptr_grow_fast");
    preload_log("%s", "");
    return original_func(obstack_ptr,data);
}

#endif
#ifndef obstack_room_OVERRIDE
#define obstack_room_OVERRIDE

int obstack_room (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_room");
    preload_log("%s", "");
    return original_func(obstack_ptr);
}

#endif

#ifndef on_exit_OVERRIDE
#define on_exit_OVERRIDE

int on_exit (void (*function)(int status, void *arg), void *arg){
    int  (*original_func)(void (*function)(int status, void *arg), void *arg);
    original_func = dlsym(RTLD_NEXT, "on_exit");
    preload_log("%s", "");
    return original_func(function,arg);
}

#endif
#ifndef open_OVERRIDE
#define open_OVERRIDE

int open (const char *filename, int flags){
    int  (*original_func)(const char *filename, int flags);
    original_func = dlsym(RTLD_NEXT, "open");
    preload_log("%s", "");
    return original_func(filename,flags);
}

#endif
#ifndef opendir_OVERRIDE
#define opendir_OVERRIDE

DIR * opendir (const char *dirname){
    DIR *  (*original_func)(const char *dirname);
    original_func = dlsym(RTLD_NEXT, "opendir");
    preload_log("%s", "");
    return original_func(dirname);
}

#endif
#ifndef openlog_OVERRIDE
#define openlog_OVERRIDE

void openlog (const char *ident, int option, int facility){
    void  (*original_func)(const char *ident, int option, int facility);
    original_func = dlsym(RTLD_NEXT, "openlog");
    preload_log("%s", "");
    return original_func(ident,option,facility);
}

#endif
#ifndef openpty_OVERRIDE
#define openpty_OVERRIDE

int openpty (int *amaster, int *aslave, char *name, const struct termios *termp, const struct winsize *winp){
    int  (*original_func)(int *amaster, int *aslave, char *name, const struct termios *termp, const struct winsize *winp);
    original_func = dlsym(RTLD_NEXT, "openpty");
    preload_log("%s", "");
    return original_func(amaster,aslave,name,termp,winp);
}

#endif
#ifndef open_memstream_OVERRIDE
#define open_memstream_OVERRIDE

FILE * open_memstream (char **ptr, size_t *sizeloc){
    FILE *  (*original_func)(char **ptr, size_t *sizeloc);
    original_func = dlsym(RTLD_NEXT, "open_memstream");
    preload_log("%s", "");
    return original_func(ptr,sizeloc);
}

#endif
#ifndef parse_printf_format_OVERRIDE
#define parse_printf_format_OVERRIDE

size_t parse_printf_format (const char *template, size_t n, int *argtypes){
    size_t  (*original_func)(const char *template, size_t n, int *argtypes);
    original_func = dlsym(RTLD_NEXT, "parse_printf_format");
    preload_log("%s", "");
    return original_func(template,n,argtypes);
}

#endif
#ifndef pathconf_OVERRIDE
#define pathconf_OVERRIDE

long int pathconf (const char *filename, int parameter){
    long int  (*original_func)(const char *filename, int parameter);
    original_func = dlsym(RTLD_NEXT, "pathconf");
    preload_log("%s", "");
    return original_func(filename,parameter);
}

#endif
#ifndef pause_OVERRIDE
#define pause_OVERRIDE

int pause (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "pause");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef pclose_OVERRIDE
#define pclose_OVERRIDE

int pclose (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "pclose");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef perror_OVERRIDE
#define perror_OVERRIDE

void perror (const char *message){
    void  (*original_func)(const char *message);
    original_func = dlsym(RTLD_NEXT, "perror");
    preload_log("%s", "");
    return original_func(message);
}

#endif
#ifndef pipe_OVERRIDE
#define pipe_OVERRIDE

int pipe (int filedes[2]){
    int  (*original_func)(int filedes[2]);
    original_func = dlsym(RTLD_NEXT, "pipe");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef pkey_alloc_OVERRIDE
#define pkey_alloc_OVERRIDE

int pkey_alloc (unsigned int flags, unsigned int restrictions){
    int  (*original_func)(unsigned int flags, unsigned int restrictions);
    original_func = dlsym(RTLD_NEXT, "pkey_alloc");
    preload_log("%s", "");
    return original_func(flags,restrictions);
}

#endif
#ifndef pkey_free_OVERRIDE
#define pkey_free_OVERRIDE

int pkey_free (int key){
    int  (*original_func)(int key);
    original_func = dlsym(RTLD_NEXT, "pkey_free");
    preload_log("%s", "");
    return original_func(key);
}

#endif
#ifndef pkey_get_OVERRIDE
#define pkey_get_OVERRIDE

int pkey_get (int key){
    int  (*original_func)(int key);
    original_func = dlsym(RTLD_NEXT, "pkey_get");
    preload_log("%s", "");
    return original_func(key);
}

#endif
#ifndef pkey_mprotect_OVERRIDE
#define pkey_mprotect_OVERRIDE

int pkey_mprotect (void *address, size_t length, int protection, int key){
    int  (*original_func)(void *address, size_t length, int protection, int key);
    original_func = dlsym(RTLD_NEXT, "pkey_mprotect");
    preload_log("%s", "");
    return original_func(address,length,protection,key);
}

#endif
#ifndef pkey_set_OVERRIDE
#define pkey_set_OVERRIDE

int pkey_set (int key, unsigned int rights){
    int  (*original_func)(int key, unsigned int rights);
    original_func = dlsym(RTLD_NEXT, "pkey_set");
    preload_log("%s", "");
    return original_func(key,rights);
}

#endif
#ifndef popen_OVERRIDE
#define popen_OVERRIDE

FILE * popen (const char *command, const char *mode){
    FILE *  (*original_func)(const char *command, const char *mode);
    original_func = dlsym(RTLD_NEXT, "popen");
    preload_log("%s", "");
    return original_func(command,mode);
}

#endif
#ifndef posix_fallocate_OVERRIDE
#define posix_fallocate_OVERRIDE

int posix_fallocate (int fd, off_t offset, off_t length){
    int  (*original_func)(int fd, off_t offset, off_t length);
    original_func = dlsym(RTLD_NEXT, "posix_fallocate");
    preload_log("%s", "");
    return original_func(fd,offset,length);
}

#endif
// #ifndef posix_fallocate64_OVERRIDE
// #define posix_fallocate64_OVERRIDE

// int posix_fallocate64 (int fd, off64_t offset, off64_t length){
//     int  (*original_func)(int fd, off64_t offset, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "posix_fallocate64");
//     preload_log("%s", "");
//     return original_func(fd,offset,length);
// }

// #endif
#ifndef posix_memalign_OVERRIDE
#define posix_memalign_OVERRIDE

int posix_memalign (void **memptr, size_t alignment, size_t size){
    int  (*original_func)(void **memptr, size_t alignment, size_t size);
    original_func = dlsym(RTLD_NEXT, "posix_memalign");
    preload_log("%s", "");
    return original_func(memptr,alignment,size);
}

#endif
#ifndef pow_OVERRIDE
#define pow_OVERRIDE

double pow (double base, double power){
    double  (*original_func)(double base, double power);
    original_func = dlsym(RTLD_NEXT, "pow");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef powf_OVERRIDE
#define powf_OVERRIDE

float powf (float base, float power){
    float  (*original_func)(float base, float power);
    original_func = dlsym(RTLD_NEXT, "powf");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef powl_OVERRIDE
#define powl_OVERRIDE

long double powl (long double base, long double power){
    long double  (*original_func)(long double base, long double power);
    original_func = dlsym(RTLD_NEXT, "powl");
    preload_log("%s", "");
    return original_func(base,power);
}

#endif
#ifndef pread_OVERRIDE
#define pread_OVERRIDE

ssize_t pread (int filedes, void *buffer, size_t size, off_t offset){
    ssize_t  (*original_func)(int filedes, void *buffer, size_t size, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pread");
    preload_log("%s", "");
    return original_func(filedes,buffer,size,offset);
}

#endif
// #ifndef pread64_OVERRIDE
// #define pread64_OVERRIDE

// ssize_t pread64 (int filedes, void *buffer, size_t size, off64_t offset){
//     ssize_t  (*original_func)(int filedes, void *buffer, size_t size, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pread64");
//     preload_log("%s", "");
//     return original_func(filedes,buffer,size,offset);
// }

// #endif
#ifndef preadv_OVERRIDE
#define preadv_OVERRIDE

ssize_t preadv (int fd, const struct iovec *iov, int iovcnt, off_t offset){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset);
    original_func = dlsym(RTLD_NEXT, "preadv");
    preload_log("%s", "");
    return original_func(fd,iov,iovcnt,offset);
}

#endif
#ifndef preadv2_OVERRIDE
#define preadv2_OVERRIDE

ssize_t preadv2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "preadv2");
    preload_log("%s", "");
    return original_func(fd,iov,iovcnt,offset,flags);
}

#endif
// #ifndef preadv64_OVERRIDE
// #define preadv64_OVERRIDE

// ssize_t preadv64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "preadv64");
//     preload_log("%s", "");
//     return original_func(fd,iov,iovcnt,offset);
// }

// #endif
// #ifndef preadv64v2_OVERRIDE
// #define preadv64v2_OVERRIDE

// ssize_t preadv64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
//     original_func = dlsym(RTLD_NEXT, "preadv64v2");
//     preload_log("%s", "");
//     return original_func(fd,iov,iovcnt,offset,flags);
// }

// #endif


#ifndef printf_OVERRIDE
#define printf_OVERRIDE

int printf (const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "vprintf");
    preload_log("%s", "");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}

#endif


#ifndef psignal_OVERRIDE
#define psignal_OVERRIDE

void psignal (int signum, const char *message){
    void  (*original_func)(int signum, const char *message);
    original_func = dlsym(RTLD_NEXT, "psignal");
    preload_log("%s", "");
    return original_func(signum,message);
}

#endif
#ifndef pthread_attr_getsigmask_np_OVERRIDE
#define pthread_attr_getsigmask_np_OVERRIDE

int pthread_attr_getsigmask_np (const pthread_attr_t *attr, sigset_t *sigmask){
    int  (*original_func)(const pthread_attr_t *attr, sigset_t *sigmask);
    original_func = dlsym(RTLD_NEXT, "pthread_attr_getsigmask_np");
    preload_log("%s", "");
    return original_func(attr,sigmask);
}

#endif
#ifndef pthread_attr_setsigmask_np_OVERRIDE
#define pthread_attr_setsigmask_np_OVERRIDE

int pthread_attr_setsigmask_np (pthread_attr_t *attr, const sigset_t *sigmask){
    int  (*original_func)(pthread_attr_t *attr, const sigset_t *sigmask);
    original_func = dlsym(RTLD_NEXT, "pthread_attr_setsigmask_np");
    preload_log("%s", "");
    return original_func(attr,sigmask);
}

#endif
#ifndef pthread_clockjoin_np_OVERRIDE
#define pthread_clockjoin_np_OVERRIDE

int pthread_clockjoin_np (pthread_t *thread,void **thread_return, clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_t *thread,void **thread_return, clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_clockjoin_np");
    preload_log("%s", "");
    return original_func(thread,thread_return,clockid,abstime);
}

#endif
#ifndef pthread_cond_clockwait_OVERRIDE
#define pthread_cond_clockwait_OVERRIDE

int pthread_cond_clockwait (pthread_cond_t *cond, pthread_mutex_t *mutex,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_cond_t *cond, pthread_mutex_t *mutex,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_cond_clockwait");
    preload_log("%s", "");
    return original_func(cond,mutex,clockid,abstime);
}

#endif
#ifndef pthread_getattr_default_np_OVERRIDE
#define pthread_getattr_default_np_OVERRIDE

int pthread_getattr_default_np (pthread_attr_t *attr){
    int  (*original_func)(pthread_attr_t *attr);
    original_func = dlsym(RTLD_NEXT, "pthread_getattr_default_np");
    preload_log("%s", "");
    return original_func(attr);
}

#endif
#ifndef pthread_key_create_OVERRIDE
#define pthread_key_create_OVERRIDE

int pthread_key_create (pthread_key_t *key, void (*destructor)(void*)){
    int  (*original_func)(pthread_key_t *key, void (*destructor)(void*));
    original_func = dlsym(RTLD_NEXT, "pthread_key_create");
    preload_log("%s", "");
    return original_func(key,destructor);
}

#endif
#ifndef pthread_key_delete_OVERRIDE
#define pthread_key_delete_OVERRIDE

int pthread_key_delete (pthread_key_t key){
    int  (*original_func)(pthread_key_t key);
    original_func = dlsym(RTLD_NEXT, "pthread_key_delete");
    preload_log("%s", "");
    return original_func(key);
}

#endif
#ifndef pthread_rwlock_clockrdlock_OVERRIDE
#define pthread_rwlock_clockrdlock_OVERRIDE

int pthread_rwlock_clockrdlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_rwlock_clockrdlock");
    preload_log("%s", "");
    return original_func(rwlock,clockid,abstime);
}

#endif
#ifndef pthread_rwlock_clockwrlock_OVERRIDE
#define pthread_rwlock_clockwrlock_OVERRIDE

int pthread_rwlock_clockwrlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_rwlock_clockwrlock");
    preload_log("%s", "");
    return original_func(rwlock,clockid,abstime);
}

#endif
#ifndef pthread_setattr_default_np_OVERRIDE
#define pthread_setattr_default_np_OVERRIDE

int pthread_setattr_default_np (pthread_attr_t *attr){
    int  (*original_func)(pthread_attr_t *attr);
    original_func = dlsym(RTLD_NEXT, "pthread_setattr_default_np");
    preload_log("%s", "");
    return original_func(attr);
}

#endif
#ifndef pthread_setspecific_OVERRIDE
#define pthread_setspecific_OVERRIDE

int pthread_setspecific (pthread_key_t key, const void *value){
    int  (*original_func)(pthread_key_t key, const void *value);
    original_func = dlsym(RTLD_NEXT, "pthread_setspecific");
    preload_log("%s", "");
    return original_func(key,value);
}

#endif
#ifndef pthread_timedjoin_np_OVERRIDE
#define pthread_timedjoin_np_OVERRIDE

int pthread_timedjoin_np (pthread_t *thread,void **thread_return, const struct timespec *abstime){
    int  (*original_func)(pthread_t *thread,void **thread_return, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_timedjoin_np");
    preload_log("%s", "");
    return original_func(thread,thread_return,abstime);
}

#endif
#ifndef pthread_tryjoin_np_OVERRIDE
#define pthread_tryjoin_np_OVERRIDE

int pthread_tryjoin_np (pthread_t *thread,void **thread_return){
    int  (*original_func)(pthread_t *thread,void **thread_return);
    original_func = dlsym(RTLD_NEXT, "pthread_tryjoin_np");
    preload_log("%s", "");
    return original_func(thread,thread_return);
}

#endif
#ifndef ptsname_OVERRIDE
#define ptsname_OVERRIDE

char * ptsname (int filedes){
    char *  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "ptsname");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef ptsname_r_OVERRIDE
#define ptsname_r_OVERRIDE

int ptsname_r (int filedes, char *buf, size_t len){
    int  (*original_func)(int filedes, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ptsname_r");
    preload_log("%s", "");
    return original_func(filedes,buf,len);
}

#endif
#ifndef putc_OVERRIDE
#define putc_OVERRIDE

int putc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putc");
    preload_log("%s", "");
    return original_func(c,stream);
}

#endif
#ifndef putchar_OVERRIDE
#define putchar_OVERRIDE

int putchar (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "putchar");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef putchar_unlocked_OVERRIDE
#define putchar_unlocked_OVERRIDE

int putchar_unlocked (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "putchar_unlocked");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef putc_unlocked_OVERRIDE
#define putc_unlocked_OVERRIDE

int putc_unlocked (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putc_unlocked");
    preload_log("%s", "");
    return original_func(c,stream);
}

#endif
#ifndef putenv_OVERRIDE
#define putenv_OVERRIDE

int putenv (char *string){
    int  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "putenv");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef putpwent_OVERRIDE
#define putpwent_OVERRIDE

int putpwent (const struct passwd *p, FILE *stream){
    int  (*original_func)(const struct passwd *p, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putpwent");
    preload_log("%s", "");
    return original_func(p,stream);
}

#endif

#ifndef puts_OVERRIDE
#define puts_OVERRIDE

int puts(const char *s){
    preload_log("puts(\"%s\")", s);
    // dump_stack(20);

    return 1;
}

#endif

#ifndef pututline_OVERRIDE
#define pututline_OVERRIDE

struct utmp * pututline (const struct utmp *utmp){
    struct utmp *  (*original_func)(const struct utmp *utmp);
    original_func = dlsym(RTLD_NEXT, "pututline");
    preload_log("%s", "");
    return original_func(utmp);
}

#endif 
#ifndef pututxline_OVERRIDE
#define pututxline_OVERRIDE

struct utmpx * pututxline (const struct utmpx *utmp){
    struct utmpx *  (*original_func)(const struct utmpx *utmp);
    original_func = dlsym(RTLD_NEXT, "pututxline");
    preload_log("%s", "");
    return original_func(utmp);
}

#endif
#ifndef putw_OVERRIDE
#define putw_OVERRIDE

int putw (int w, FILE *stream){
    int  (*original_func)(int w, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putw");
    preload_log("%s", "");
    return original_func(w,stream);
}

#endif
#ifndef putwc_OVERRIDE
#define putwc_OVERRIDE

wint_t putwc (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putwc");
    preload_log("%s", "");
    return original_func(wc,stream);
}

#endif
#ifndef putwchar_OVERRIDE
#define putwchar_OVERRIDE

wint_t putwchar (wchar_t wc){
    wint_t  (*original_func)(wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "putwchar");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef putwchar_unlocked_OVERRIDE
#define putwchar_unlocked_OVERRIDE

wint_t putwchar_unlocked (wchar_t wc){
    wint_t  (*original_func)(wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "putwchar_unlocked");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef putwc_unlocked_OVERRIDE
#define putwc_unlocked_OVERRIDE

wint_t putwc_unlocked (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putwc_unlocked");
    preload_log("%s", "");
    return original_func(wc,stream);
}

#endif
#ifndef pwrite_OVERRIDE
#define pwrite_OVERRIDE

ssize_t pwrite (int filedes, const void *buffer, size_t size, off_t offset){
    ssize_t  (*original_func)(int filedes, const void *buffer, size_t size, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pwrite");
    preload_log("%s", "");
    return original_func(filedes,buffer,size,offset);
}

#endif
// #ifndef pwrite64_OVERRIDE
// #define pwrite64_OVERRIDE

// ssize_t pwrite64 (int filedes, const void *buffer, size_t size, off64_t offset){
//     ssize_t  (*original_func)(int filedes, const void *buffer, size_t size, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pwrite64");
//     preload_log("%s", "");
//     return original_func(filedes,buffer,size,offset);
// }

// #endif
#ifndef pwritev_OVERRIDE
#define pwritev_OVERRIDE

ssize_t pwritev (int fd, const struct iovec *iov, int iovcnt, off_t offset){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pwritev");
    preload_log("%s", "");
    return original_func(fd,iov,iovcnt,offset);
}

#endif
#ifndef pwritev2_OVERRIDE
#define pwritev2_OVERRIDE

ssize_t pwritev2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "pwritev2");
    preload_log("%s", "");
    return original_func(fd,iov,iovcnt,offset,flags);
}

#endif
// #ifndef pwritev64_OVERRIDE
// #define pwritev64_OVERRIDE

// ssize_t pwritev64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pwritev64");
//     preload_log("%s", "");
//     return original_func(fd,iov,iovcnt,offset);
// }

// #endif
// #ifndef pwritev64v2_OVERRIDE
// #define pwritev64v2_OVERRIDE

// ssize_t pwritev64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
//     original_func = dlsym(RTLD_NEXT, "pwritev64v2");
//     preload_log("%s", "");
//     return original_func(fd,iov,iovcnt,offset,flags);
// }

// #endif
#ifndef qecvt_OVERRIDE
#define qecvt_OVERRIDE

char * qecvt (long double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(long double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "qecvt");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg);
}

#endif
#ifndef qecvt_r_OVERRIDE
#define qecvt_r_OVERRIDE

int qecvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "qecvt_r");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg,buf,len);
}

#endif
#ifndef qfcvt_OVERRIDE
#define qfcvt_OVERRIDE

char * qfcvt (long double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(long double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "qfcvt");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg);
}

#endif
#ifndef qfcvt_r_OVERRIDE
#define qfcvt_r_OVERRIDE

int qfcvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "qfcvt_r");
    preload_log("%s", "");
    return original_func(value,ndigit,decpt,neg,buf,len);
}

#endif
#ifndef qgcvt_OVERRIDE
#define qgcvt_OVERRIDE

char * qgcvt (long double value, int ndigit, char *buf){
    char *  (*original_func)(long double value, int ndigit, char *buf);
    original_func = dlsym(RTLD_NEXT, "qgcvt");
    preload_log("%s", "");
    return original_func(value,ndigit,buf);
}

#endif
#ifndef qsort_OVERRIDE
#define qsort_OVERRIDE

void qsort (void *array, size_t count, size_t size, int(*compare)(const void *, const void *)){
    void  (*original_func)(void *array, size_t count, size_t size, int(*compare)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "qsort");
    preload_log("%s", "");
    return original_func(array,count,size,compare);
}

#endif 
#ifndef raise_OVERRIDE
#define raise_OVERRIDE

int raise (int signum){
    int  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "raise");
    preload_log("%s", "");
    return original_func(signum);
}

#endif
#ifndef rand_OVERRIDE
#define rand_OVERRIDE

int rand (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "rand");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef random_OVERRIDE
#define random_OVERRIDE

long int random (void){
    long int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "random");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef random_r_OVERRIDE
#define random_r_OVERRIDE

int random_r (struct random_data *restrict buf, int32_t *restrict result){
    int  (*original_func)(struct random_data *restrict buf, int32_t *restrict result);
    original_func = dlsym(RTLD_NEXT, "random_r");
    preload_log("%s", "");
    return original_func(buf,result);
}

#endif
#ifndef rand_r_OVERRIDE
#define rand_r_OVERRIDE

int rand_r (unsigned int *seed){
    int  (*original_func)(unsigned int *seed);
    original_func = dlsym(RTLD_NEXT, "rand_r");
    preload_log("%s", "");
    return original_func(seed);
}

#endif
#ifndef rawmemchr_OVERRIDE
#define rawmemchr_OVERRIDE

void * rawmemchr (const void *block, int c){
    void *  (*original_func)(const void *block, int c);
    original_func = dlsym(RTLD_NEXT, "rawmemchr");
    preload_log("%s", "");
    return original_func(block,c);
}

#endif
#ifndef read_OVERRIDE
#define read_OVERRIDE

ssize_t read (int filedes, void *buffer, size_t size){
    ssize_t  (*original_func)(int filedes, void *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "read");
    preload_log("%s", "");
    return original_func(filedes,buffer,size);
}

#endif
#ifndef readdir_OVERRIDE
#define readdir_OVERRIDE

struct dirent * readdir (DIR *dirstream){
    struct dirent *  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "readdir");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif
#ifndef readdir64_OVERRIDE
#define readdir64_OVERRIDE

struct dirent64 * readdir64 (DIR *dirstream){
    struct dirent64 *  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "readdir64");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif
#ifndef readdir64_r_OVERRIDE
#define readdir64_r_OVERRIDE

int readdir64_r (DIR *dirstream, struct dirent64 *entry, struct dirent64 **result){
    int  (*original_func)(DIR *dirstream, struct dirent64 *entry, struct dirent64 **result);
    original_func = dlsym(RTLD_NEXT, "readdir64_r");
    preload_log("%s", "");
    return original_func(dirstream,entry,result);
}

#endif
#ifndef readdir_r_OVERRIDE
#define readdir_r_OVERRIDE

int readdir_r (DIR *dirstream, struct dirent *entry, struct dirent **result){
    int  (*original_func)(DIR *dirstream, struct dirent *entry, struct dirent **result);
    original_func = dlsym(RTLD_NEXT, "readdir_r");
    preload_log("%s", "");
    return original_func(dirstream,entry,result);
}

#endif
#ifndef readlink_OVERRIDE
#define readlink_OVERRIDE

ssize_t readlink (const char *filename, char *buffer, size_t size){
    ssize_t  (*original_func)(const char *filename, char *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "readlink");
    preload_log("%s", "");
    return original_func(filename,buffer,size);
}

#endif
#ifndef readv_OVERRIDE
#define readv_OVERRIDE

ssize_t readv (int filedes, const struct iovec *vector, int count){
    ssize_t  (*original_func)(int filedes, const struct iovec *vector, int count);
    original_func = dlsym(RTLD_NEXT, "readv");
    preload_log("%s", "");
    return original_func(filedes,vector,count);
}

#endif
#ifndef realloc_OVERRIDE
#define realloc_OVERRIDE

void * realloc (void *ptr, size_t newsize){
    void *  (*original_func)(void *ptr, size_t newsize);
    original_func = dlsym(RTLD_NEXT, "realloc");
    preload_log("%s", "");
    return original_func(ptr,newsize);
}

#endif
#ifndef reallocarray_OVERRIDE
#define reallocarray_OVERRIDE

void * reallocarray (void *ptr, size_t nmemb, size_t size){
    void *  (*original_func)(void *ptr, size_t nmemb, size_t size);
    original_func = dlsym(RTLD_NEXT, "reallocarray");
    preload_log("%s", "");
    return original_func(ptr,nmemb,size);
}

#endif
#ifndef realpath_OVERRIDE
#define realpath_OVERRIDE

char * realpath (const char *restrict name, char *restrict resolved){
    char *  (*original_func)(const char *restrict name, char *restrict resolved);
    original_func = dlsym(RTLD_NEXT, "realpath");
    preload_log("%s", "");
    return original_func(name,resolved);
}

#endif
#ifndef recv_OVERRIDE
#define recv_OVERRIDE

ssize_t recv (int socket, void *buffer, size_t size, int flags){
    ssize_t  (*original_func)(int socket, void *buffer, size_t size, int flags);
    original_func = dlsym(RTLD_NEXT, "recv");
    preload_log("%s", "");
    return original_func(socket,buffer,size,flags);
}

#endif
#ifndef recvfrom_OVERRIDE
#define recvfrom_OVERRIDE

ssize_t recvfrom (int socket, void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t *length_ptr){
    ssize_t  (*original_func)(int socket, void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "recvfrom");
    preload_log("%s", "");
    return original_func(socket,buffer,size,flags,addr,length_ptr);
}

#endif
#ifndef regcomp_OVERRIDE
#define regcomp_OVERRIDE

int regcomp (regex_t *restrict compiled, const char *restrict pattern, int cflags){
    int  (*original_func)(regex_t *restrict compiled, const char *restrict pattern, int cflags);
    original_func = dlsym(RTLD_NEXT, "regcomp");
    preload_log("%s", "");
    return original_func(compiled,pattern,cflags);
}

#endif 
#ifndef regerror_OVERRIDE
#define regerror_OVERRIDE

size_t regerror (int errcode, const regex_t *restrict compiled, char *restrict buffer, size_t length){
    size_t  (*original_func)(int errcode, const regex_t *restrict compiled, char *restrict buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "regerror");
    preload_log("%s", "");
    return original_func(errcode,compiled,buffer,length);
}

#endif
#ifndef regexec_OVERRIDE
#define regexec_OVERRIDE

int regexec (const regex_t *restrict compiled, const char *restrict string, size_t nmatch, regmatch_t matchptr[restrict], int eflags){
    int  (*original_func)(const regex_t *restrict compiled, const char *restrict string, size_t nmatch, regmatch_t matchptr[restrict], int eflags);
    original_func = dlsym(RTLD_NEXT, "regexec");
    preload_log("%s", "");
    return original_func(compiled,string,nmatch,matchptr,eflags);
}

#endif
#ifndef regfree_OVERRIDE
#define regfree_OVERRIDE

void regfree (regex_t *compiled){
    void  (*original_func)(regex_t *compiled);
    original_func = dlsym(RTLD_NEXT, "regfree");
    preload_log("%s", "");
    return original_func(compiled);
}

#endif
#ifndef remainder_OVERRIDE
#define remainder_OVERRIDE

double remainder (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "remainder");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef remainderf_OVERRIDE
#define remainderf_OVERRIDE

float remainderf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "remainderf");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef remainderl_OVERRIDE
#define remainderl_OVERRIDE

long double remainderl (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "remainderl");
    preload_log("%s", "");
    return original_func(numerator,denominator);
}

#endif
#ifndef remove_OVERRIDE
#define remove_OVERRIDE

int remove (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "remove");
    preload_log("%s", "");
    return original_func(filename);
}

#endif
#ifndef rename_OVERRIDE
#define rename_OVERRIDE

int rename (const char *oldname, const char *newname){
    int  (*original_func)(const char *oldname, const char *newname);
    original_func = dlsym(RTLD_NEXT, "rename");
    preload_log("%s", "");
    return original_func(oldname,newname);
}

#endif
#ifndef rewind_OVERRIDE
#define rewind_OVERRIDE

void rewind (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "rewind");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef rewinddir_OVERRIDE
#define rewinddir_OVERRIDE

void rewinddir (DIR *dirstream){
    void  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "rewinddir");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif
#ifndef rindex_OVERRIDE
#define rindex_OVERRIDE

char * rindex (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "rindex");
    preload_log("%s", "");
    return original_func(string,c);
}

#endif
#ifndef rint_OVERRIDE
#define rint_OVERRIDE

double rint (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "rint");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef rintf_OVERRIDE
#define rintf_OVERRIDE

float rintf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "rintf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef rintl_OVERRIDE
#define rintl_OVERRIDE

long double rintl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "rintl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef rmdir_OVERRIDE
#define rmdir_OVERRIDE

int rmdir (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "rmdir");
    preload_log("%s", "");
    return original_func(filename);
}

#endif
#ifndef round_OVERRIDE
#define round_OVERRIDE

double round (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "round");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef roundeven_OVERRIDE
#define roundeven_OVERRIDE

double roundeven (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "roundeven");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef roundevenf_OVERRIDE
#define roundevenf_OVERRIDE

float roundevenf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "roundevenf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef roundevenl_OVERRIDE
#define roundevenl_OVERRIDE

long double roundevenl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "roundevenl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef roundf_OVERRIDE
#define roundf_OVERRIDE

float roundf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "roundf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef roundl_OVERRIDE
#define roundl_OVERRIDE

long double roundl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "roundl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef rpmatch_OVERRIDE
#define rpmatch_OVERRIDE

int rpmatch (const char *response){
    int  (*original_func)(const char *response);
    original_func = dlsym(RTLD_NEXT, "rpmatch");
    preload_log("%s", "");
    return original_func(response);
}

#endif 
#ifndef scalb_OVERRIDE
#define scalb_OVERRIDE

double scalb (double value, double exponent){
    double  (*original_func)(double value, double exponent);
    original_func = dlsym(RTLD_NEXT, "scalb");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef scalbf_OVERRIDE
#define scalbf_OVERRIDE

float scalbf (float value, float exponent){
    float  (*original_func)(float value, float exponent);
    original_func = dlsym(RTLD_NEXT, "scalbf");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef scalbl_OVERRIDE
#define scalbl_OVERRIDE

long double scalbl (long double value, long double exponent){
    long double  (*original_func)(long double value, long double exponent);
    original_func = dlsym(RTLD_NEXT, "scalbl");
    preload_log("%s", "");
    return original_func(value,exponent);
}

#endif
#ifndef scalbln_OVERRIDE
#define scalbln_OVERRIDE

double scalbln (double x, long int n){
    double  (*original_func)(double x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalbln");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scalblnf_OVERRIDE
#define scalblnf_OVERRIDE

float scalblnf (float x, long int n){
    float  (*original_func)(float x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalblnf");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scalblnl_OVERRIDE
#define scalblnl_OVERRIDE

long double scalblnl (long double x, long int n){
    long double  (*original_func)(long double x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalblnl");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scalbn_OVERRIDE
#define scalbn_OVERRIDE

double scalbn (double x, int n){
    double  (*original_func)(double x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbn");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scalbnf_OVERRIDE
#define scalbnf_OVERRIDE

float scalbnf (float x, int n){
    float  (*original_func)(float x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbnf");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scalbnl_OVERRIDE
#define scalbnl_OVERRIDE

long double scalbnl (long double x, int n){
    long double  (*original_func)(long double x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbnl");
    preload_log("%s", "");
    return original_func(x,n);
}

#endif
#ifndef scandir_OVERRIDE
#define scandir_OVERRIDE

int scandir (const char *dir, struct dirent ***namelist, int (*selector) (const struct dirent *), int (*cmp) (const struct dirent **, const struct dirent **)){
    int  (*original_func)(const char *dir, struct dirent ***namelist, int (*selector) (const struct dirent *), int (*cmp) (const struct dirent **, const struct dirent **));
    original_func = dlsym(RTLD_NEXT, "scandir");
    preload_log("%s", "");
    return original_func(dir,namelist,selector,cmp);
}

#endif
#ifndef scandir64_OVERRIDE
#define scandir64_OVERRIDE

int scandir64 (const char *dir, struct dirent64 ***namelist, int (*selector) (const struct dirent64 *), int (*cmp) (const struct dirent64 **, const struct dirent64 **)){
    int  (*original_func)(const char *dir, struct dirent64 ***namelist, int (*selector) (const struct dirent64 *), int (*cmp) (const struct dirent64 **, const struct dirent64 **));
    original_func = dlsym(RTLD_NEXT, "scandir64");
    preload_log("%s", "");
    return original_func(dir,namelist,selector,cmp);
}

#endif
#ifndef scanf_OVERRIDE
#define scanf_OVERRIDE

int scanf (const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "vscanf");
    preload_log("%s", "");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef __isoc99_scanf_OVERRIDE
#define __isoc99_scanf_OVERRIDE

int __isoc99_scanf (const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "vscanf");
    preload_log("%s", "");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}

#endif


#ifndef sched_getaffinity_OVERRIDE
#define sched_getaffinity_OVERRIDE

int sched_getaffinity (pid_t pid, size_t cpusetsize, cpu_set_t *cpuset){
    int  (*original_func)(pid_t pid, size_t cpusetsize, cpu_set_t *cpuset);
    original_func = dlsym(RTLD_NEXT, "sched_getaffinity");
    preload_log("%s", "");
    return original_func(pid,cpusetsize,cpuset);
}

#endif
#ifndef sched_getparam_OVERRIDE
#define sched_getparam_OVERRIDE

int sched_getparam (pid_t pid, struct sched_param *param){
    int  (*original_func)(pid_t pid, struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_getparam");
    preload_log("%s", "");
    return original_func(pid,param);
}

#endif
#ifndef sched_getscheduler_OVERRIDE
#define sched_getscheduler_OVERRIDE

int sched_getscheduler (pid_t pid){
    int  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "sched_getscheduler");
    preload_log("%s", "");
    return original_func(pid);
}

#endif
#ifndef sched_get_priority_max_OVERRIDE
#define sched_get_priority_max_OVERRIDE

int sched_get_priority_max (int policy){
    int  (*original_func)(int policy);
    original_func = dlsym(RTLD_NEXT, "sched_get_priority_max");
    preload_log("%s", "");
    return original_func(policy);
}

#endif
#ifndef sched_get_priority_min_OVERRIDE
#define sched_get_priority_min_OVERRIDE

int sched_get_priority_min (int policy){
    int  (*original_func)(int policy);
    original_func = dlsym(RTLD_NEXT, "sched_get_priority_min");
    preload_log("%s", "");
    return original_func(policy);
}

#endif
#ifndef sched_rr_get_interval_OVERRIDE
#define sched_rr_get_interval_OVERRIDE

int sched_rr_get_interval (pid_t pid, struct timespec *interval){
    int  (*original_func)(pid_t pid, struct timespec *interval);
    original_func = dlsym(RTLD_NEXT, "sched_rr_get_interval");
    preload_log("%s", "");
    return original_func(pid,interval);
}

#endif
#ifndef sched_setaffinity_OVERRIDE
#define sched_setaffinity_OVERRIDE

int sched_setaffinity (pid_t pid, size_t cpusetsize, const cpu_set_t *cpuset){
    int  (*original_func)(pid_t pid, size_t cpusetsize, const cpu_set_t *cpuset);
    original_func = dlsym(RTLD_NEXT, "sched_setaffinity");
    preload_log("%s", "");
    return original_func(pid,cpusetsize,cpuset);
}

#endif
#ifndef sched_setparam_OVERRIDE
#define sched_setparam_OVERRIDE

int sched_setparam (pid_t pid, const struct sched_param *param){
    int  (*original_func)(pid_t pid, const struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_setparam");
    preload_log("%s", "");
    return original_func(pid,param);
}

#endif
#ifndef sched_setscheduler_OVERRIDE
#define sched_setscheduler_OVERRIDE

int sched_setscheduler (pid_t pid, int policy, const struct sched_param *param){
    int  (*original_func)(pid_t pid, int policy, const struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_setscheduler");
    preload_log("%s", "");
    return original_func(pid,policy,param);
}

#endif
#ifndef sched_yield_OVERRIDE
#define sched_yield_OVERRIDE

int sched_yield (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "sched_yield");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef secure_getenv_OVERRIDE
#define secure_getenv_OVERRIDE

char * secure_getenv (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "secure_getenv");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef seed48_OVERRIDE
#define seed48_OVERRIDE

unsigned short int * seed48 (unsigned short int seed16v[3]){
    unsigned short int *  (*original_func)(unsigned short int seed16v[3]);
    original_func = dlsym(RTLD_NEXT, "seed48");
    preload_log("%s", "");
    return original_func(seed16v);
}

#endif
#ifndef seed48_r_OVERRIDE
#define seed48_r_OVERRIDE

int seed48_r (unsigned short int seed16v[3], struct drand48_data *buffer){
    int  (*original_func)(unsigned short int seed16v[3], struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "seed48_r");
    preload_log("%s", "");
    return original_func(seed16v,buffer);
}

#endif
#ifndef seekdir_OVERRIDE
#define seekdir_OVERRIDE

void seekdir (DIR *dirstream, long int pos){
    void  (*original_func)(DIR *dirstream, long int pos);
    original_func = dlsym(RTLD_NEXT, "seekdir");
    preload_log("%s", "");
    return original_func(dirstream,pos);
}

#endif
#ifndef select_OVERRIDE
#define select_OVERRIDE

int select (int nfds, fd_set *read_fds, fd_set *write_fds, fd_set *except_fds, struct timeval *timeout){
    int  (*original_func)(int nfds, fd_set *read_fds, fd_set *write_fds, fd_set *except_fds, struct timeval *timeout);
    original_func = dlsym(RTLD_NEXT, "select");
    preload_log("%s", "");
    return original_func(nfds,read_fds,write_fds,except_fds,timeout);
}

#endif
#ifndef semctl_OVERRIDE
#define semctl_OVERRIDE

int semctl (int semid, int semnum, int cmd, ...){
    int  (*original_func)(int semid, int semnum, int cmd, ...);
    va_list ap;
    va_start(ap, cmd);
    original_func = dlsym(RTLD_NEXT, "semctl");
    preload_log("%s", "");
    original_func(semid,semnum,cmd, ap);
    va_end(ap);
    return ;
}

#endif
#ifndef semget_OVERRIDE
#define semget_OVERRIDE

int semget (key_t key, int nsems, int semflg){
    int  (*original_func)(key_t key, int nsems, int semflg);
    original_func = dlsym(RTLD_NEXT, "semget");
    preload_log("%s", "");
    return original_func(key,nsems,semflg);
}

#endif
#ifndef semop_OVERRIDE
#define semop_OVERRIDE

int semop (int semid, struct sembuf *sops, size_t nsops){
    int  (*original_func)(int semid, struct sembuf *sops, size_t nsops);
    original_func = dlsym(RTLD_NEXT, "semop");
    preload_log("%s", "");
    return original_func(semid,sops,nsops);
}

#endif
#ifndef semtimedop_OVERRIDE
#define semtimedop_OVERRIDE

int semtimedop (int semid, struct sembuf *sops, size_t nsops, const struct timespec *timeout){
    int  (*original_func)(int semid, struct sembuf *sops, size_t nsops, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "semtimedop");
    preload_log("%s", "");
    return original_func(semid,sops,nsops,timeout);
}

#endif 
#ifndef sem_clockwait_OVERRIDE
#define sem_clockwait_OVERRIDE

int sem_clockwait (sem_t *sem, clockid_t clockid,const struct timespec *abstime){
    int  (*original_func)(sem_t *sem, clockid_t clockid,const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "sem_clockwait");
    preload_log("%s", "");
    return original_func(sem,clockid,abstime);
}

#endif
#ifndef sem_close_OVERRIDE
#define sem_close_OVERRIDE

int sem_close (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_close");
    preload_log("%s", "");
    return original_func(sem);
}

#endif
#ifndef sem_destroy_OVERRIDE
#define sem_destroy_OVERRIDE

int sem_destroy (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_destroy");
    preload_log("%s", "");
    return original_func(sem);
}

#endif
#ifndef sem_getvalue_OVERRIDE
#define sem_getvalue_OVERRIDE

int sem_getvalue (sem_t *sem, int *sval){
    int  (*original_func)(sem_t *sem, int *sval);
    original_func = dlsym(RTLD_NEXT, "sem_getvalue");
    preload_log("%s", "");
    return original_func(sem,sval);
}

#endif
#ifndef sem_init_OVERRIDE
#define sem_init_OVERRIDE

int sem_init (sem_t *sem, int pshared, unsigned int value){
    int  (*original_func)(sem_t *sem, int pshared, unsigned int value);
    original_func = dlsym(RTLD_NEXT, "sem_init");
    preload_log("%s", "");
    return original_func(sem,pshared,value);
}

#endif

// #ifndef sem_open_OVERRIDE
// #define sem_open_OVERRIDE

// sem_t *sem_open(const char *name, int oflag, ...){
//     int  (*original_func)(const char *name, int oflag, ...);
//     preload_log("%s", "");

//     original_func = dlsym(RTLD_DEFAULT, "sem_open");
//     #ifndef O_CREAT
//     # define O_CREAT           0100        
//     #endif
//     #ifndef O_EXCL
//     # define O_EXCL                   0200        
//     #endif
//     if ((oflag & O_CREAT) == 0 || (oflag & O_EXCL) == 0){
//         return original_func(name,oflag);      
//     } else {
//         mode_t mode;
//         unsigned int value;
//         sem_t * ret;
//         va_list ap;
//         va_start(ap, oflag);
//         mode = va_arg (ap, mode_t);
//         value = va_arg (ap, unsigned int);
//         ret = original_func(name,oflag, mode, value);    
//         va_end (ap);
//         return ret;
//     }
// }

// #endif


#ifndef sem_post_OVERRIDE
#define sem_post_OVERRIDE

int sem_post (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_post");
    preload_log("%s", "");
    return original_func(sem);
}

#endif
#ifndef sem_timedwait_OVERRIDE
#define sem_timedwait_OVERRIDE

int sem_timedwait (sem_t *sem, const struct timespec *abstime){
    int  (*original_func)(sem_t *sem, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "sem_timedwait");
    preload_log("%s", "");
    return original_func(sem,abstime);
}

#endif
#ifndef sem_trywait_OVERRIDE
#define sem_trywait_OVERRIDE

int sem_trywait (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_trywait");
    preload_log("%s", "");
    return original_func(sem);
}

#endif
#ifndef sem_unlink_OVERRIDE
#define sem_unlink_OVERRIDE

int sem_unlink (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "sem_unlink");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef sem_wait_OVERRIDE
#define sem_wait_OVERRIDE

int sem_wait (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_wait");
    preload_log("%s", "");
    return original_func(sem);
}

#endif
#ifndef send_OVERRIDE
#define send_OVERRIDE

ssize_t send (int socket, const void *buffer, size_t size, int flags){
    ssize_t  (*original_func)(int socket, const void *buffer, size_t size, int flags);
    original_func = dlsym(RTLD_NEXT, "send");
    preload_log("%s", "");
    return original_func(socket,buffer,size,flags);
}

#endif
// #ifndef sendto_OVERRIDE
// #define sendto_OVERRIDE

// ssize_t sendto (int socket, const void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t length){
//     ssize_t  (*original_func)(int socket, const void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t length);
//     original_func = dlsym(RTLD_NEXT, "sendto");
//     preload_log("%s", "");
//     return original_func(socket,buffer,size,flags,addr,length);
// }

// #endif
#ifndef setbuf_OVERRIDE
#define setbuf_OVERRIDE

void setbuf (FILE *stream, char *buf){
    void  (*original_func)(FILE *stream, char *buf);
    original_func = dlsym(RTLD_NEXT, "setbuf");
    preload_log("%s", "");
    return original_func(stream,buf);
}

#endif
#ifndef setbuffer_OVERRIDE
#define setbuffer_OVERRIDE

void setbuffer (FILE *stream, char *buf, size_t size){
    void  (*original_func)(FILE *stream, char *buf, size_t size);
    original_func = dlsym(RTLD_NEXT, "setbuffer");
    preload_log("%s", "");
    return original_func(stream,buf,size);
}

#endif
#ifndef setcontext_OVERRIDE
#define setcontext_OVERRIDE

int setcontext (const ucontext_t *ucp){
    int  (*original_func)(const ucontext_t *ucp);
    original_func = dlsym(RTLD_NEXT, "setcontext");
    preload_log("%s", "");
    return original_func(ucp);
}

#endif
#ifndef setdomainname_OVERRIDE
#define setdomainname_OVERRIDE

int setdomainname (const char *name, size_t length){
    int  (*original_func)(const char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "setdomainname");
    preload_log("%s", "");
    return original_func(name,length);
}

#endif 
#ifndef setegid_OVERRIDE
#define setegid_OVERRIDE

int setegid (gid_t newgid){
    int  (*original_func)(gid_t newgid);
    original_func = dlsym(RTLD_NEXT, "setegid");
    preload_log("%s", "");
    return original_func(newgid);
}

#endif
#ifndef setenv_OVERRIDE
#define setenv_OVERRIDE

int setenv (const char *name, const char *value, int replace){
    int  (*original_func)(const char *name, const char *value, int replace);
    original_func = dlsym(RTLD_NEXT, "setenv");
    preload_log("%s", "");
    return original_func(name,value,replace);
}

#endif
#ifndef seteuid_OVERRIDE
#define seteuid_OVERRIDE

int seteuid (uid_t neweuid){
    int  (*original_func)(uid_t neweuid);
    original_func = dlsym(RTLD_NEXT, "seteuid");
    preload_log("%s", "");
    return original_func(neweuid);
}

#endif
#ifndef setfsent_OVERRIDE
#define setfsent_OVERRIDE

int setfsent (void){
    int  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setfsent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setgid_OVERRIDE
#define setgid_OVERRIDE

int setgid (gid_t newgid){
    int  (*original_func)(gid_t newgid);
    original_func = dlsym(RTLD_NEXT, "setgid");
    preload_log("%s", "");
    return original_func(newgid);
}

#endif
#ifndef setgrent_OVERRIDE
#define setgrent_OVERRIDE

void setgrent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setgrent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setgroups_OVERRIDE
#define setgroups_OVERRIDE

int setgroups (size_t count, const gid_t *groups){
    int  (*original_func)(size_t count, const gid_t *groups);
    original_func = dlsym(RTLD_NEXT, "setgroups");
    preload_log("%s", "");
    return original_func(count,groups);
}

#endif
#ifndef sethostent_OVERRIDE
#define sethostent_OVERRIDE

void sethostent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "sethostent");
    preload_log("%s", "");
    return original_func(stayopen);
}

#endif
#ifndef sethostid_OVERRIDE
#define sethostid_OVERRIDE

int sethostid (long int id){
    int  (*original_func)(long int id);
    original_func = dlsym(RTLD_NEXT, "sethostid");
    preload_log("%s", "");
    return original_func(id);
}

#endif
#ifndef sethostname_OVERRIDE
#define sethostname_OVERRIDE

int sethostname (const char *name, size_t length){
    int  (*original_func)(const char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "sethostname");
    preload_log("%s", "");
    return original_func(name,length);
}

#endif
// #ifndef setitimer_OVERRIDE
// #define setitimer_OVERRIDE

// int setitimer (int which, const struct itimerval *new, struct itimerval *old){
//     int  (*original_func)(int which, const struct itimerval *new, struct itimerval *old);
//     original_func = dlsym(RTLD_NEXT, "setitimer");
//     preload_log("%s", "");
//     return original_func(which,new,old);
// }

// #endif
#ifndef setlinebuf_OVERRIDE
#define setlinebuf_OVERRIDE

void setlinebuf (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "setlinebuf");
    preload_log("%s", "");
    return original_func(stream);
}

#endif
#ifndef setlocale_OVERRIDE
#define setlocale_OVERRIDE

char * setlocale (int category, const char *locale){
    char *  (*original_func)(int category, const char *locale);
    original_func = dlsym(RTLD_NEXT, "setlocale");
    preload_log("%s", "");
    return original_func(category,locale);
}

#endif
#ifndef setlogmask_OVERRIDE
#define setlogmask_OVERRIDE

int setlogmask (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "setlogmask");
    preload_log("%s", "");
    return original_func(mask);
}

#endif
#ifndef setmntent_OVERRIDE
#define setmntent_OVERRIDE

FILE * setmntent (const char *file, const char *mode){
    FILE *  (*original_func)(const char *file, const char *mode);
    original_func = dlsym(RTLD_NEXT, "setmntent");
    preload_log("%s", "");
    return original_func(file,mode);
}

#endif
#ifndef setnetent_OVERRIDE
#define setnetent_OVERRIDE

void setnetent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setnetent");
    preload_log("%s", "");
    return original_func(stayopen);
}

#endif
#ifndef setnetgrent_OVERRIDE
#define setnetgrent_OVERRIDE

int setnetgrent (const char *netgroup){
    int  (*original_func)(const char *netgroup);
    original_func = dlsym(RTLD_NEXT, "setnetgrent");
    preload_log("%s", "");
    return original_func(netgroup);
}

#endif
#ifndef setpayload_OVERRIDE
#define setpayload_OVERRIDE

int setpayload (double *x, double payload){
    int  (*original_func)(double *x, double payload);
    original_func = dlsym(RTLD_NEXT, "setpayload");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpayloadf_OVERRIDE
#define setpayloadf_OVERRIDE

int setpayloadf (float *x, float payload){
    int  (*original_func)(float *x, float payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadf");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpayloadl_OVERRIDE
#define setpayloadl_OVERRIDE

int setpayloadl (long double *x, long double payload){
    int  (*original_func)(long double *x, long double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadl");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpayloadsig_OVERRIDE
#define setpayloadsig_OVERRIDE

int setpayloadsig (double *x, double payload){
    int  (*original_func)(double *x, double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsig");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpayloadsigf_OVERRIDE
#define setpayloadsigf_OVERRIDE

int setpayloadsigf (float *x, float payload){
    int  (*original_func)(float *x, float payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsigf");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpayloadsigl_OVERRIDE
#define setpayloadsigl_OVERRIDE

int setpayloadsigl (long double *x, long double payload){
    int  (*original_func)(long double *x, long double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsigl");
    preload_log("%s", "");
    return original_func(x,payload);
}

#endif
#ifndef setpgid_OVERRIDE
#define setpgid_OVERRIDE

int setpgid (pid_t pid, pid_t pgid){
    int  (*original_func)(pid_t pid, pid_t pgid);
    original_func = dlsym(RTLD_NEXT, "setpgid");
    preload_log("%s", "");
    return original_func(pid,pgid);
}

#endif
// #ifndef setpgrp_OVERRIDE
// #define setpgrp_OVERRIDE

// int setpgrp (pid_t pid, pid_t pgid){
//     int  (*original_func)(pid_t pid, pid_t pgid);
//     original_func = dlsym(RTLD_NEXT, "setpgrp");
//     preload_log("%s", "");
//     return original_func(pid,pgid);
// }

// #endif
// #ifndef setpriority_OVERRIDE
// #define setpriority_OVERRIDE

// int setpriority (int class, int id, int niceval){
//     int  (*original_func)(int class, int id, int niceval);
//     original_func = dlsym(RTLD_NEXT, "setpriority");
//     preload_log("%s", "");
//     return original_func(class,id,niceval);
// }

// #endif
#ifndef setprotoent_OVERRIDE
#define setprotoent_OVERRIDE

void setprotoent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setprotoent");
    preload_log("%s", "");
    return original_func(stayopen);
}

#endif
#ifndef setpwent_OVERRIDE
#define setpwent_OVERRIDE

void setpwent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setpwent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setregid_OVERRIDE
#define setregid_OVERRIDE

int setregid (gid_t rgid, gid_t egid){
    int  (*original_func)(gid_t rgid, gid_t egid);
    original_func = dlsym(RTLD_NEXT, "setregid");
    preload_log("%s", "");
    return original_func(rgid,egid);
}

#endif
#ifndef setreuid_OVERRIDE
#define setreuid_OVERRIDE

int setreuid (uid_t ruid, uid_t euid){
    int  (*original_func)(uid_t ruid, uid_t euid);
    original_func = dlsym(RTLD_NEXT, "setreuid");
    preload_log("%s", "");
    return original_func(ruid,euid);
}

#endif
// #ifndef setrlimit_OVERRIDE
// #define setrlimit_OVERRIDE

// int setrlimit (int resource, const struct rlimit *rlp){
//     int  (*original_func)(int resource, const struct rlimit *rlp);
//     original_func = dlsym(RTLD_NEXT, "setrlimit");
//     preload_log("%s", "");
//     return original_func(resource,rlp);
// }

// #endif
// #ifndef setrlimit64_OVERRIDE
// #define setrlimit64_OVERRIDE

// int setrlimit64 (int resource, const struct rlimit64 *rlp){
//     int  (*original_func)(int resource, const struct rlimit64 *rlp);
//     original_func = dlsym(RTLD_NEXT, "setrlimit64");
//     preload_log("%s", "");
//     return original_func(resource,rlp);
// }

// #endif
#ifndef setservent_OVERRIDE
#define setservent_OVERRIDE

void setservent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setservent");
    preload_log("%s", "");
    return original_func(stayopen);
}

#endif
#ifndef setsid_OVERRIDE
#define setsid_OVERRIDE

pid_t setsid (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setsid");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setsockopt_OVERRIDE
#define setsockopt_OVERRIDE

int setsockopt (int socket, int level, int optname, const void *optval, socklen_t optlen){
    int  (*original_func)(int socket, int level, int optname, const void *optval, socklen_t optlen);
    original_func = dlsym(RTLD_NEXT, "setsockopt");
    preload_log("%s", "");
    return original_func(socket,level,optname,optval,optlen);
}

#endif
#ifndef setstate_OVERRIDE
#define setstate_OVERRIDE

char * setstate (char *state){
    char *  (*original_func)(char *state);
    original_func = dlsym(RTLD_NEXT, "setstate");
    preload_log("%s", "");
    return original_func(state);
}

#endif
#ifndef setstate_r_OVERRIDE
#define setstate_r_OVERRIDE

int setstate_r (char *restrict statebuf, struct random_data *restrict buf){
    int  (*original_func)(char *restrict statebuf, struct random_data *restrict buf);
    original_func = dlsym(RTLD_NEXT, "setstate_r");
    preload_log("%s", "");
    return original_func(statebuf,buf);
}

#endif
// #ifndef settimeofday_OVERRIDE
// #define settimeofday_OVERRIDE

// int settimeofday (const struct timeval *tp, const void *tzp){
//     int  (*original_func)(const struct timeval *tp, const void *tzp);
//     original_func = dlsym(RTLD_NEXT, "settimeofday");
//     preload_log("%s", "");
//     return original_func(tp,tzp);
// }

// #endif
#ifndef setuid_OVERRIDE
#define setuid_OVERRIDE

int setuid (uid_t newuid){
    int  (*original_func)(uid_t newuid);
    original_func = dlsym(RTLD_NEXT, "setuid");
    preload_log("%s", "");
    return original_func(newuid);
}

#endif
#ifndef setutent_OVERRIDE
#define setutent_OVERRIDE

void setutent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setutent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setutxent_OVERRIDE
#define setutxent_OVERRIDE

void setutxent (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "setutxent");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef setvbuf_OVERRIDE
#define setvbuf_OVERRIDE

int setvbuf (FILE *stream, char *buf, int mode, size_t size){
    int  (*original_func)(FILE *stream, char *buf, int mode, size_t size);
    original_func = dlsym(RTLD_NEXT, "setvbuf");
    preload_log("%s", "");
    return original_func(stream,buf,mode,size);
}

#endif
#ifndef shm_open_OVERRIDE
#define shm_open_OVERRIDE

int shm_open (const char *name, int oflag, mode_t mode){
    int  (*original_func)(const char *name, int oflag, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "shm_open");
    preload_log("%s", "");
    return original_func(name,oflag,mode);
}

#endif
#ifndef shm_unlink_OVERRIDE
#define shm_unlink_OVERRIDE

int shm_unlink (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "shm_unlink");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef shutdown_OVERRIDE
#define shutdown_OVERRIDE

int shutdown (int socket, int how){
    int  (*original_func)(int socket, int how);
    original_func = dlsym(RTLD_NEXT, "shutdown");
    preload_log("%s", "");
    return original_func(socket,how);
}

#endif
#ifndef sigabbrev_np_OVERRIDE
#define sigabbrev_np_OVERRIDE

void sigabbrev_np (int signum){
    void  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "sigabbrev_np");
    preload_log("%s", "");
    return original_func(signum);
}

#endif
#ifndef sigaction_OVERRIDE
#define sigaction_OVERRIDE

int sigaction (int signum, const struct sigaction *restrict action, struct sigaction *restrict old_action){
    int  (*original_func)(int signum, const struct sigaction *restrict action, struct sigaction *restrict old_action);
    original_func = dlsym(RTLD_NEXT, "sigaction");
    preload_log("%s", "");
    return original_func(signum,action,old_action);
}

#endif
#ifndef sigaddset_OVERRIDE
#define sigaddset_OVERRIDE

int sigaddset (sigset_t *set, int signum){
    int  (*original_func)(sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigaddset");
    preload_log("%s", "");
    return original_func(set,signum);
}

#endif
#ifndef sigaltstack_OVERRIDE
#define sigaltstack_OVERRIDE

int sigaltstack (const stack_t *restrict stack, stack_t *restrict oldstack){
    int  (*original_func)(const stack_t *restrict stack, stack_t *restrict oldstack);
    original_func = dlsym(RTLD_NEXT, "sigaltstack");
    preload_log("%s", "");
    return original_func(stack,oldstack);
}

#endif
#ifndef sigblock_OVERRIDE
#define sigblock_OVERRIDE

int sigblock (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigblock");
    preload_log("%s", "");
    return original_func(mask);
}

#endif
#ifndef sigdelset_OVERRIDE
#define sigdelset_OVERRIDE

int sigdelset (sigset_t *set, int signum){
    int  (*original_func)(sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigdelset");
    preload_log("%s", "");
    return original_func(set,signum);
}

#endif 
#ifndef sigdescr_np_OVERRIDE
#define sigdescr_np_OVERRIDE

void sigdescr_np (int signum){
    void  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "sigdescr_np");
    preload_log("%s", "");
    return original_func(signum);
}

#endif
#ifndef sigemptyset_OVERRIDE
#define sigemptyset_OVERRIDE

int sigemptyset (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigemptyset");
    preload_log("%s", "");
    return original_func(set);
}

#endif
#ifndef sigfillset_OVERRIDE
#define sigfillset_OVERRIDE

int sigfillset (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigfillset");
    preload_log("%s", "");
    return original_func(set);
}

#endif 
#ifndef siginterrupt_OVERRIDE
#define siginterrupt_OVERRIDE

int siginterrupt (int signum, int failflag){
    int  (*original_func)(int signum, int failflag);
    original_func = dlsym(RTLD_NEXT, "siginterrupt");
    preload_log("%s", "");
    return original_func(signum,failflag);
}

#endif  
#ifndef sigismember_OVERRIDE
#define sigismember_OVERRIDE

int sigismember (const sigset_t *set, int signum){
    int  (*original_func)(const sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigismember");
    preload_log("%s", "");
    return original_func(set,signum);
}

#endif
#ifndef siglongjmp_OVERRIDE
#define siglongjmp_OVERRIDE

void siglongjmp (sigjmp_buf state, int value){
    void  (*original_func)(sigjmp_buf state, int value);
    original_func = dlsym(RTLD_NEXT, "siglongjmp");
    preload_log("%s", "");
    original_func(state,value);
}

#endif  
#ifndef signal_OVERRIDE
#define signal_OVERRIDE

sighandler_t signal (int signum, sighandler_t action){
    // preload_log("%s", "qwe");
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "signal");

    // logger(__func__, "%d", 1);
    // printf("wwwww\n");
    return original_func(signum,action);
}

#endif  
#ifndef significand_OVERRIDE
#define significand_OVERRIDE

double significand (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "significand");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef significandf_OVERRIDE
#define significandf_OVERRIDE

float significandf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "significandf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef significandl_OVERRIDE
#define significandl_OVERRIDE

long double significandl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "significandl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sigpause_OVERRIDE
#define sigpause_OVERRIDE

int sigpause (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigpause");
    preload_log("%s", "");
    return original_func(mask);
}

#endif
#ifndef sigpending_OVERRIDE
#define sigpending_OVERRIDE

int sigpending (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigpending");
    preload_log("%s", "");
    return original_func(set);
}

#endif
#ifndef sigprocmask_OVERRIDE
#define sigprocmask_OVERRIDE

int sigprocmask (int how, const sigset_t *restrict set, sigset_t *restrict oldset){
    int  (*original_func)(int how, const sigset_t *restrict set, sigset_t *restrict oldset);
    original_func = dlsym(RTLD_NEXT, "sigprocmask");
    preload_log("%s", "");
    return original_func(how,set,oldset);
}

#endif
#ifndef sigsetjmp_OVERRIDE
#define sigsetjmp_OVERRIDE

int sigsetjmp (sigjmp_buf state, int savesigs){
    int  (*original_func)(sigjmp_buf state, int savesigs);
    original_func = dlsym(RTLD_NEXT, "sigsetjmp");
    preload_log("%s", "");
    return original_func(state,savesigs);
}

#endif 
#ifndef sigsetmask_OVERRIDE
#define sigsetmask_OVERRIDE

int sigsetmask (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigsetmask");
    preload_log("%s", "");
    return original_func(mask);
}

#endif 
#ifndef sigstack_OVERRIDE
#define sigstack_OVERRIDE

int sigstack (struct sigstack *stack, struct sigstack *oldstack){
    int  (*original_func)(struct sigstack *stack, struct sigstack *oldstack);
    original_func = dlsym(RTLD_NEXT, "sigstack");
    preload_log("%s", "");
    return original_func(stack,oldstack);
}

#endif
#ifndef sigsuspend_OVERRIDE
#define sigsuspend_OVERRIDE

int sigsuspend (const sigset_t *set){
    int  (*original_func)(const sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigsuspend");
    preload_log("%s", "");
    return original_func(set);
}

#endif
#ifndef sin_OVERRIDE
#define sin_OVERRIDE

double sin (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sin");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef sincos_OVERRIDE
#define sincos_OVERRIDE

void sincos (double x, double *sinx, double *cosx){
    void  (*original_func)(double x, double *sinx, double *cosx);
    original_func = dlsym(RTLD_NEXT, "sincos");
    preload_log("%s", "");
    return original_func(x,sinx,cosx);
}

#endif
#ifndef sincosf_OVERRIDE
#define sincosf_OVERRIDE

void sincosf (float x, float *sinx, float *cosx){
    void  (*original_func)(float x, float *sinx, float *cosx);
    original_func = dlsym(RTLD_NEXT, "sincosf");
    preload_log("%s", "");
    return original_func(x,sinx,cosx);
}

#endif
#ifndef sincosl_OVERRIDE
#define sincosl_OVERRIDE

void sincosl (long double x, long double *sinx, long double *cosx){
    void  (*original_func)(long double x, long double *sinx, long double *cosx);
    original_func = dlsym(RTLD_NEXT, "sincosl");
    preload_log("%s", "");
    return original_func(x,sinx,cosx);
}

#endif
#ifndef sinf_OVERRIDE
#define sinf_OVERRIDE

float sinf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sinf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sinh_OVERRIDE
#define sinh_OVERRIDE

double sinh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sinh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sinhf_OVERRIDE
#define sinhf_OVERRIDE

float sinhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sinhf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sinhl_OVERRIDE
#define sinhl_OVERRIDE

long double sinhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sinhl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sinl_OVERRIDE
#define sinl_OVERRIDE

long double sinl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sinl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef sleep_OVERRIDE
#define sleep_OVERRIDE

unsigned int sleep (unsigned int seconds){
    unsigned int  (*original_func)(unsigned int seconds);
    original_func = dlsym(RTLD_NEXT, "sleep");
    preload_log("%s", "");
    return original_func(seconds);
}

#endif 
#ifndef snprintf_OVERRIDE
#define snprintf_OVERRIDE

int snprintf (char *s, size_t size, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char *s, size_t size, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "vsnprintf");
    preload_log("%s", "");
    int  ret_val = original_func(s,size,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef socket_OVERRIDE
#define socket_OVERRIDE

int socket (int namespace, int style, int protocol){
    int  (*original_func)(int namespace, int style, int protocol);
    original_func = dlsym(RTLD_NEXT, "socket");
    preload_log("%s", "");
    return original_func(namespace,style,protocol);
}

#endif
#ifndef socketpair_OVERRIDE
#define socketpair_OVERRIDE

int socketpair (int namespace, int style, int protocol, int filedes[2]){
    int  (*original_func)(int namespace, int style, int protocol, int filedes[2]);
    original_func = dlsym(RTLD_NEXT, "socketpair");
    preload_log("%s", "");
    return original_func(namespace,style,protocol,filedes);
}

#endif 
#ifndef sprintf_OVERRIDE
#define sprintf_OVERRIDE

int sprintf (char *s, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char *s, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "sprintf");
    preload_log("%s", "");
    int  ret_val = original_func(s,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef sqrt_OVERRIDE
#define sqrt_OVERRIDE

double sqrt (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sqrt");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef sqrtf_OVERRIDE
#define sqrtf_OVERRIDE

float sqrtf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sqrtf");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef sqrtl_OVERRIDE
#define sqrtl_OVERRIDE

long double sqrtl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sqrtl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef srand_OVERRIDE
#define srand_OVERRIDE

void srand (unsigned int seed){
    void  (*original_func)(unsigned int seed);
    original_func = dlsym(RTLD_NEXT, "srand");
    preload_log("%s", "");
    return original_func(seed);
}

#endif
#ifndef srand48_OVERRIDE
#define srand48_OVERRIDE

void srand48 (long int seedval){
    void  (*original_func)(long int seedval);
    original_func = dlsym(RTLD_NEXT, "srand48");
    preload_log("%s", "");
    return original_func(seedval);
}

#endif 
#ifndef srand48_r_OVERRIDE
#define srand48_r_OVERRIDE

int srand48_r (long int seedval, struct drand48_data *buffer){
    int  (*original_func)(long int seedval, struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "srand48_r");
    preload_log("%s", "");
    return original_func(seedval,buffer);
}

#endif
#ifndef srandom_OVERRIDE
#define srandom_OVERRIDE

void srandom (unsigned int seed){
    void  (*original_func)(unsigned int seed);
    original_func = dlsym(RTLD_NEXT, "srandom");
    preload_log("%s", "");
    return original_func(seed);
}

#endif
#ifndef srandom_r_OVERRIDE
#define srandom_r_OVERRIDE

int srandom_r (unsigned int seed, struct random_data *buf){
    int  (*original_func)(unsigned int seed, struct random_data *buf);
    original_func = dlsym(RTLD_NEXT, "srandom_r");
    preload_log("%s", "");
    return original_func(seed,buf);
}

#endif 
#ifndef sscanf_OVERRIDE
#define sscanf_OVERRIDE

int sscanf (const char *s, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *s, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "sscanf");
    preload_log("%s", "");
    int  ret_val = original_func(s,template,ap);
    va_end(ap);
    return ret_val;
}

#endif 
#ifndef ssignal_OVERRIDE
#define ssignal_OVERRIDE

sighandler_t ssignal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "ssignal");
    preload_log("%s", "");
    return original_func(signum,action);
}

#endif 
#ifndef stat_OVERRIDE
#define stat_OVERRIDE

int stat (const char *filename, struct stat *buf){
    int  (*original_func)(const char *filename, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "stat");
    preload_log("%s", "");
    return original_func(filename,buf);
}

#endif
#ifndef stat64_OVERRIDE
#define stat64_OVERRIDE

int stat64 (const char *filename, struct stat64 *buf){
    int  (*original_func)(const char *filename, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "stat64");
    preload_log("%s", "");
    return original_func(filename,buf);
}

#endif
#ifndef stime_OVERRIDE
#define stime_OVERRIDE

int stime (const time_t *newtime){
    int  (*original_func)(const time_t *newtime);
    original_func = dlsym(RTLD_NEXT, "stime");
    preload_log("%s", "");
    return original_func(newtime);
}

#endif
#ifndef stpcpy_OVERRIDE
#define stpcpy_OVERRIDE

char * stpcpy (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "stpcpy");
    preload_log("%s", "");
    return original_func(to,from);
}

#endif
#ifndef stpncpy_OVERRIDE
#define stpncpy_OVERRIDE

char * stpncpy (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "stpncpy");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif  
#ifndef strcasecmp_OVERRIDE
#define strcasecmp_OVERRIDE

int strcasecmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcasecmp");
    preload_log("%s", "");
    return original_func(s1,s2);
}

#endif
#ifndef strcasestr_OVERRIDE
#define strcasestr_OVERRIDE

char * strcasestr (const char *haystack, const char *needle){
    char *  (*original_func)(const char *haystack, const char *needle);
    original_func = dlsym(RTLD_NEXT, "strcasestr");
    preload_log("%s", "");
    return original_func(haystack,needle);
}

#endif
#ifndef strcat_OVERRIDE
#define strcat_OVERRIDE

char * strcat (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "strcat");
    preload_log("%s", "");
    return original_func(to,from);
}

#endif 
#ifndef strchr_OVERRIDE
#define strchr_OVERRIDE

char * strchr (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strchr");
    // preload_log("%s", "");
    return original_func(string,c);
}

#endif 
#ifndef strchrnul_OVERRIDE
#define strchrnul_OVERRIDE

char * strchrnul (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strchrnul");
    preload_log("%s", "");
    return original_func(string,c);
}

#endif 
#ifndef strcmp_OVERRIDE
#define strcmp_OVERRIDE

int strcmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcmp");
    preload_log("%s", "");
    return original_func(s1,s2);
}

#endif 
#ifndef strcoll_OVERRIDE
#define strcoll_OVERRIDE

int strcoll (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcoll");
    preload_log("%s", "");
    return original_func(s1,s2);
}

#endif
#ifndef strcpy_OVERRIDE
#define strcpy_OVERRIDE

char * strcpy (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "strcpy");
    preload_log("%s", "");
    return original_func(to,from);
}

#endif 
#ifndef strcspn_OVERRIDE
#define strcspn_OVERRIDE

size_t strcspn (const char *string, const char *stopset){
    size_t  (*original_func)(const char *string, const char *stopset);
    original_func = dlsym(RTLD_NEXT, "strcspn");
    preload_log("%s", "");
    return original_func(string,stopset);
}

#endif
#ifndef strdup_OVERRIDE
#define strdup_OVERRIDE

char * strdup (const char *s){
    char *  (*original_func)(const char *s);
    original_func = dlsym(RTLD_NEXT, "strdup");
    preload_log("%s", "");
    return original_func(s);
}

#endif
#ifndef strerror_OVERRIDE
#define strerror_OVERRIDE

char * strerror (int errnum){
    char *  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerror");
    preload_log("%s", "");
    return original_func(errnum);
}

#endif
#ifndef strerrordesc_np_OVERRIDE
#define strerrordesc_np_OVERRIDE

void strerrordesc_np (int errnum){
    void  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerrordesc_np");
    preload_log("%s", "");
    return original_func(errnum);
}

#endif
#ifndef strerrorname_np_OVERRIDE
#define strerrorname_np_OVERRIDE

void strerrorname_np (int errnum){
    void  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerrorname_np");
    preload_log("%s", "");
    return original_func(errnum);
}

#endif
#ifndef strerror_r_OVERRIDE
#define strerror_r_OVERRIDE

char * strerror_r (int errnum, char *buf, size_t n){
    char *  (*original_func)(int errnum, char *buf, size_t n);
    original_func = dlsym(RTLD_NEXT, "strerror_r");
    preload_log("%s", "");
    return original_func(errnum,buf,n);
}

#endif 
#ifndef strfmon_OVERRIDE
#define strfmon_OVERRIDE

ssize_t strfmon (char *s, size_t maxsize, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    ssize_t  (*original_func)(char *s, size_t maxsize, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "strfmon");
    preload_log("%s", "");
    ssize_t  ret_val = original_func(s,maxsize,format,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef strfromd_OVERRIDE
#define strfromd_OVERRIDE

int strfromd (char *restrict string, size_t size, const char *restrict format, double value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, double value);
    original_func = dlsym(RTLD_NEXT, "strfromd");
    preload_log("%s", "");
    return original_func(string,size,format,value);
}

#endif
#ifndef strfromf_OVERRIDE
#define strfromf_OVERRIDE

int strfromf (char *restrict string, size_t size, const char *restrict format, float value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, float value);
    original_func = dlsym(RTLD_NEXT, "strfromf");
    preload_log("%s", "");
    return original_func(string,size,format,value);
}

#endif
#ifndef strfroml_OVERRIDE
#define strfroml_OVERRIDE

int strfroml (char *restrict string, size_t size, const char *restrict format, long double value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, long double value);
    original_func = dlsym(RTLD_NEXT, "strfroml");
    preload_log("%s", "");
    return original_func(string,size,format,value);
}

#endif 
#ifndef strfry_OVERRIDE
#define strfry_OVERRIDE

char * strfry (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "strfry");
    preload_log("%s", "");
    return original_func(string);
}

#endif
#ifndef strftime_OVERRIDE
#define strftime_OVERRIDE

size_t strftime (char *s, size_t size, const char *template, const struct tm *brokentime){
    size_t  (*original_func)(char *s, size_t size, const char *template, const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "strftime");
    preload_log("%s", "");
    return original_func(s,size,template,brokentime);
}

#endif  
#ifndef strlen_OVERRIDE
#define strlen_OVERRIDE

size_t strlen (const char *s){
    size_t  (*original_func)(const char *s);
    original_func = dlsym(RTLD_NEXT, "strlen");
    // preload_log("%s", "");
    return original_func(s);
}

#endif 
#ifndef strncasecmp_OVERRIDE
#define strncasecmp_OVERRIDE

int strncasecmp (const char *s1, const char *s2, size_t n){
    int  (*original_func)(const char *s1, const char *s2, size_t n);
    original_func = dlsym(RTLD_NEXT, "strncasecmp");
    preload_log("%s", "");
    return original_func(s1,s2,n);
}

#endif 
#ifndef strncat_OVERRIDE
#define strncat_OVERRIDE

char * strncat (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncat");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif
#ifndef strncmp_OVERRIDE
#define strncmp_OVERRIDE

int strncmp (const char *s1, const char *s2, size_t size){
    int  (*original_func)(const char *s1, const char *s2, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncmp");
    preload_log("%s", "");
    return original_func(s1,s2,size);
}

#endif
#ifndef strncpy_OVERRIDE
#define strncpy_OVERRIDE

char * strncpy (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncpy");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif
#ifndef strndup_OVERRIDE
#define strndup_OVERRIDE

char * strndup (const char *s, size_t size){
    char *  (*original_func)(const char *s, size_t size);
    original_func = dlsym(RTLD_NEXT, "strndup");
    preload_log("%s", "");
    return original_func(s,size);
}

#endif
#ifndef strnlen_OVERRIDE
#define strnlen_OVERRIDE

size_t strnlen (const char *s, size_t maxlen){
    size_t  (*original_func)(const char *s, size_t maxlen);
    original_func = dlsym(RTLD_NEXT, "strnlen");
    preload_log("%s", "");
    return original_func(s,maxlen);
}

#endif 
#ifndef strpbrk_OVERRIDE
#define strpbrk_OVERRIDE

char * strpbrk (const char *string, const char *stopset){
    char *  (*original_func)(const char *string, const char *stopset);
    original_func = dlsym(RTLD_NEXT, "strpbrk");
    preload_log("%s", "");
    return original_func(string,stopset);
}

#endif
#ifndef strptime_OVERRIDE
#define strptime_OVERRIDE

char * strptime (const char *s, const char *fmt, struct tm *tp){
    char *  (*original_func)(const char *s, const char *fmt, struct tm *tp);
    original_func = dlsym(RTLD_NEXT, "strptime");
    preload_log("%s", "");
    return original_func(s,fmt,tp);
}

#endif
#ifndef strrchr_OVERRIDE
#define strrchr_OVERRIDE

char * strrchr (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strrchr");
    preload_log("%s", "");
    return original_func(string,c);
}

#endif
#ifndef strsep_OVERRIDE
#define strsep_OVERRIDE

char * strsep (char **string_ptr, const char *delimiter){
    char *  (*original_func)(char **string_ptr, const char *delimiter);
    original_func = dlsym(RTLD_NEXT, "strsep");
    preload_log("%s", "");
    return original_func(string_ptr,delimiter);
}

#endif
#ifndef strsignal_OVERRIDE
#define strsignal_OVERRIDE

char * strsignal (int signum){
    char *  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "strsignal");
    preload_log("%s", "");
    return original_func(signum);
}

#endif 
#ifndef strspn_OVERRIDE
#define strspn_OVERRIDE

size_t strspn (const char *string, const char *skipset){
    size_t  (*original_func)(const char *string, const char *skipset);
    original_func = dlsym(RTLD_NEXT, "strspn");
    preload_log("%s", "");
    return original_func(string,skipset);
}

#endif
#ifndef strstr_OVERRIDE
#define strstr_OVERRIDE

char * strstr (const char *haystack, const char *needle){
    char *  (*original_func)(const char *haystack, const char *needle);
    original_func = dlsym(RTLD_NEXT, "strstr");
    preload_log("%s", "");
    return original_func(haystack,needle);
}

#endif
#ifndef strtod_OVERRIDE
#define strtod_OVERRIDE

double strtod (const char *restrict string, char **restrict tailptr){
    double  (*original_func)(const char *restrict string, char **restrict tailptr);
    original_func = dlsym(RTLD_NEXT, "strtod");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef strtof_OVERRIDE
#define strtof_OVERRIDE

float strtof (const char *string, char **tailptr){
    float  (*original_func)(const char *string, char **tailptr);
    original_func = dlsym(RTLD_NEXT, "strtof");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef strtoimax_OVERRIDE
#define strtoimax_OVERRIDE

intmax_t strtoimax (const char *restrict string, char **restrict tailptr, int base){
    intmax_t  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoimax");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtok_OVERRIDE
#define strtok_OVERRIDE

char * strtok (char *restrict newstring, const char *restrict delimiters){
    char *  (*original_func)(char *restrict newstring, const char *restrict delimiters);
    original_func = dlsym(RTLD_NEXT, "strtok");
    preload_log("%s", "");
    return original_func(newstring,delimiters);
}

#endif
#ifndef strtok_r_OVERRIDE
#define strtok_r_OVERRIDE

char * strtok_r (char *newstring, const char *delimiters, char **save_ptr){
    char *  (*original_func)(char *newstring, const char *delimiters, char **save_ptr);
    original_func = dlsym(RTLD_NEXT, "strtok_r");
    preload_log("%s", "");
    return original_func(newstring,delimiters,save_ptr);
}

#endif
#ifndef strtol_OVERRIDE
#define strtol_OVERRIDE

long int strtol (const char *restrict string, char **restrict tailptr, int base){
    long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtol");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtold_OVERRIDE
#define strtold_OVERRIDE

long double strtold (const char *string, char **tailptr){
    long double  (*original_func)(const char *string, char **tailptr);
    original_func = dlsym(RTLD_NEXT, "strtold");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef strtoll_OVERRIDE
#define strtoll_OVERRIDE

long long int strtoll (const char *restrict string, char **restrict tailptr, int base){
    long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoll");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtoq_OVERRIDE
#define strtoq_OVERRIDE

long long int strtoq (const char *restrict string, char **restrict tailptr, int base){
    long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoq");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtoul_OVERRIDE
#define strtoul_OVERRIDE

unsigned long int strtoul (const char *restrict string, char **restrict tailptr, int base){
    unsigned long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoul");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtoull_OVERRIDE
#define strtoull_OVERRIDE

unsigned long long int strtoull (const char *restrict string, char **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoull");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtoumax_OVERRIDE
#define strtoumax_OVERRIDE

uintmax_t strtoumax (const char *restrict string, char **restrict tailptr, int base){
    uintmax_t  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoumax");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strtouq_OVERRIDE
#define strtouq_OVERRIDE

unsigned long long int strtouq (const char *restrict string, char **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtouq");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef strverscmp_OVERRIDE
#define strverscmp_OVERRIDE

int strverscmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strverscmp");
    preload_log("%s", "");
    return original_func(s1,s2);
}

#endif
#ifndef strxfrm_OVERRIDE
#define strxfrm_OVERRIDE

size_t strxfrm (char *restrict to, const char *restrict from, size_t size){
    size_t  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strxfrm");
    preload_log("%s", "");
    return original_func(to,from,size);
}

#endif

#ifndef swapcontext_OVERRIDE
#define swapcontext_OVERRIDE

int swapcontext (ucontext_t *restrict oucp, const ucontext_t *restrict ucp){
    int  (*original_func)(ucontext_t *restrict oucp, const ucontext_t *restrict ucp);
    original_func = dlsym(RTLD_NEXT, "swapcontext");
    preload_log("%s", "");
    return original_func(oucp,ucp);
}

#endif
#ifndef swprintf_OVERRIDE
#define swprintf_OVERRIDE

int swprintf (wchar_t *ws, size_t size, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(wchar_t *ws, size_t size, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "swprintf");
    preload_log("%s", "");
    int  ret_val = original_func(ws,size,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef swscanf_OVERRIDE
#define swscanf_OVERRIDE

int swscanf (const wchar_t *ws, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *ws, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "swscanf");
    preload_log("%s", "");
    int  ret_val = original_func(ws,template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef symlink_OVERRIDE
#define symlink_OVERRIDE

int symlink (const char *oldname, const char *newname){
    int  (*original_func)(const char *oldname, const char *newname);
    original_func = dlsym(RTLD_NEXT, "symlink");
    preload_log("%s", "");
    return original_func(oldname,newname);
}

#endif
#ifndef sync_OVERRIDE
#define sync_OVERRIDE

void sync (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "sync");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef syscall_OVERRIDE
#define syscall_OVERRIDE

long int syscall (long int sysno, ...){
    va_list ap;
    va_start(ap, sysno);
    long int  (*original_func)(long int sysno, ...);
    original_func = dlsym(RTLD_NEXT, "syscall");
    preload_log("%s", "");
    long int  ret_val = original_func(sysno,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef sysconf_OVERRIDE
#define sysconf_OVERRIDE

long int sysconf (int parameter){
    long int  (*original_func)(int parameter);
    original_func = dlsym(RTLD_NEXT, "sysconf");
    preload_log("%s", "");
    return original_func(parameter);
}

#endif
#ifndef syslog_OVERRIDE
#define syslog_OVERRIDE

void syslog (int facility_priority, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int facility_priority, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "syslog");
    preload_log("%s", "");
    original_func(facility_priority,format,ap);
    va_end(ap);
    return;
}


#endif 
#ifndef system_OVERRIDE
#define system_OVERRIDE

int system (const char *command){
    int  (*original_func)(const char *command);
    original_func = dlsym(RTLD_NEXT, "system");
    preload_log("%s", "");
    return original_func(command);
}

#endif
#ifndef sysv_signal_OVERRIDE
#define sysv_signal_OVERRIDE

sighandler_t sysv_signal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "sysv_signal");
    preload_log("%s", "");
    return original_func(signum,action);
}

#endif
#ifndef tan_OVERRIDE
#define tan_OVERRIDE

double tan (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tan");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tanf_OVERRIDE
#define tanf_OVERRIDE

float tanf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tanf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tanh_OVERRIDE
#define tanh_OVERRIDE

double tanh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tanh");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tanhf_OVERRIDE
#define tanhf_OVERRIDE

float tanhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tanhf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tanhl_OVERRIDE
#define tanhl_OVERRIDE

long double tanhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tanhl");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef tanl_OVERRIDE
#define tanl_OVERRIDE

long double tanl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tanl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tcdrain_OVERRIDE
#define tcdrain_OVERRIDE

int tcdrain (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "tcdrain");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif 
#ifndef tcflow_OVERRIDE
#define tcflow_OVERRIDE

int tcflow (int filedes, int action){
    int  (*original_func)(int filedes, int action);
    original_func = dlsym(RTLD_NEXT, "tcflow");
    preload_log("%s", "");
    return original_func(filedes,action);
}

#endif
#ifndef tcflush_OVERRIDE
#define tcflush_OVERRIDE

int tcflush (int filedes, int queue){
    int  (*original_func)(int filedes, int queue);
    original_func = dlsym(RTLD_NEXT, "tcflush");
    preload_log("%s", "");
    return original_func(filedes,queue);
}

#endif
#ifndef tcgetattr_OVERRIDE
#define tcgetattr_OVERRIDE

int tcgetattr (int filedes, struct termios *termios_p){
    int  (*original_func)(int filedes, struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "tcgetattr");
    preload_log("%s", "");
    return original_func(filedes,termios_p);
}

#endif
#ifndef tcgetpgrp_OVERRIDE
#define tcgetpgrp_OVERRIDE

pid_t tcgetpgrp (int filedes){
    pid_t  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "tcgetpgrp");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef tcgetsid_OVERRIDE
#define tcgetsid_OVERRIDE

pid_t tcgetsid (int fildes){
    pid_t  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "tcgetsid");
    preload_log("%s", "");
    return original_func(fildes);
}

#endif
#ifndef tcsendbreak_OVERRIDE
#define tcsendbreak_OVERRIDE

int tcsendbreak (int filedes, int duration){
    int  (*original_func)(int filedes, int duration);
    original_func = dlsym(RTLD_NEXT, "tcsendbreak");
    preload_log("%s", "");
    return original_func(filedes,duration);
}

#endif
#ifndef tcsetattr_OVERRIDE
#define tcsetattr_OVERRIDE

int tcsetattr (int filedes, int when, const struct termios *termios_p){
    int  (*original_func)(int filedes, int when, const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "tcsetattr");
    preload_log("%s", "");
    return original_func(filedes,when,termios_p);
}

#endif
#ifndef tcsetpgrp_OVERRIDE
#define tcsetpgrp_OVERRIDE

int tcsetpgrp (int filedes, pid_t pgid){
    int  (*original_func)(int filedes, pid_t pgid);
    original_func = dlsym(RTLD_NEXT, "tcsetpgrp");
    preload_log("%s", "");
    return original_func(filedes,pgid);
}

#endif
#ifndef tdelete_OVERRIDE
#define tdelete_OVERRIDE

void * tdelete (const void *key, void **rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void **rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tdelete");
    preload_log("%s", "");
    return original_func(key,rootp,compar);
}

#endif
// #ifndef tdestroy_OVERRIDE
// #define tdestroy_OVERRIDE

// void tdestroy (void *vroot, __free_fn_t freefct){
//     void  (*original_func)(void *vroot, __free_fn_t freefct);
//     original_func = dlsym(RTLD_NEXT, "tdestroy");
//     preload_log("%s", "");
//     return original_func(vroot,freefct);
// }

// #endif
#ifndef telldir_OVERRIDE
#define telldir_OVERRIDE

long int telldir (DIR *dirstream){
    long int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "telldir");
    preload_log("%s", "");
    return original_func(dirstream);
}

#endif 
#ifndef tempnam_OVERRIDE
#define tempnam_OVERRIDE

char * tempnam (const char *dir, const char *prefix){
    char *  (*original_func)(const char *dir, const char *prefix);
    original_func = dlsym(RTLD_NEXT, "tempnam");
    preload_log("%s", "");
    return original_func(dir,prefix);
}

#endif
#ifndef textdomain_OVERRIDE
#define textdomain_OVERRIDE

char * textdomain (const char *domainname){
    char *  (*original_func)(const char *domainname);
    original_func = dlsym(RTLD_NEXT, "textdomain");
    preload_log("%s", "");
    return original_func(domainname);
}

#endif
#ifndef tfind_OVERRIDE
#define tfind_OVERRIDE

void * tfind (const void *key, void *const *rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void *const *rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tfind");
    preload_log("%s", "");
    return original_func(key,rootp,compar);
}

#endif
#ifndef tgamma_OVERRIDE
#define tgamma_OVERRIDE

double tgamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tgamma");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tgammaf_OVERRIDE
#define tgammaf_OVERRIDE

float tgammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tgammaf");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tgammal_OVERRIDE
#define tgammal_OVERRIDE

long double tgammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tgammal");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tgkill_OVERRIDE
#define tgkill_OVERRIDE

int tgkill (pid_t pid, pid_t tid, int signum){
    int  (*original_func)(pid_t pid, pid_t tid, int signum);
    original_func = dlsym(RTLD_NEXT, "tgkill");
    preload_log("%s", "");
    return original_func(pid,tid,signum);
}

#endif
#ifndef time_OVERRIDE
#define time_OVERRIDE

time_t time (time_t *result){
    time_t  (*original_func)(time_t *result);
    original_func = dlsym(RTLD_NEXT, "time");
    preload_log("%s", "");
    return original_func(result);
}

#endif
#ifndef timegm_OVERRIDE
#define timegm_OVERRIDE

time_t timegm (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "timegm");
    preload_log("%s", "");
    return original_func(brokentime);
}

#endif
#ifndef timelocal_OVERRIDE
#define timelocal_OVERRIDE

time_t timelocal (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "timelocal");
    preload_log("%s", "");
    return original_func(brokentime);
}

#endif
#ifndef times_OVERRIDE
#define times_OVERRIDE

clock_t times (struct tms *buffer){
    clock_t  (*original_func)(struct tms *buffer);
    original_func = dlsym(RTLD_NEXT, "times");
    preload_log("%s", "");
    return original_func(buffer);
}

#endif
#ifndef tmpfile_OVERRIDE
#define tmpfile_OVERRIDE

FILE * tmpfile (void){
    FILE *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "tmpfile");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef tmpfile64_OVERRIDE
#define tmpfile64_OVERRIDE

FILE * tmpfile64 (void){
    FILE *  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "tmpfile64");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef tmpnam_OVERRIDE
#define tmpnam_OVERRIDE

char * tmpnam (char *result){
    char *  (*original_func)(char *result);
    original_func = dlsym(RTLD_NEXT, "tmpnam");
    preload_log("%s", "");
    return original_func(result);
}

#endif
#ifndef tmpnam_r_OVERRIDE
#define tmpnam_r_OVERRIDE

char * tmpnam_r (char *result){
    char *  (*original_func)(char *result);
    original_func = dlsym(RTLD_NEXT, "tmpnam_r");
    preload_log("%s", "");
    return original_func(result);
}

#endif 

#ifndef tolower_OVERRIDE
#define tolower_OVERRIDE

int tolower (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "tolower");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef toupper_OVERRIDE
#define toupper_OVERRIDE

int toupper (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "toupper");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef towctrans_OVERRIDE
#define towctrans_OVERRIDE

wint_t towctrans (wint_t wc, wctrans_t desc){
    wint_t  (*original_func)(wint_t wc, wctrans_t desc);
    original_func = dlsym(RTLD_NEXT, "towctrans");
    preload_log("%s", "");
    return original_func(wc,desc);
}

#endif  
#ifndef towlower_OVERRIDE
#define towlower_OVERRIDE

wint_t towlower (wint_t wc){
    wint_t  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "towlower");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef towupper_OVERRIDE
#define towupper_OVERRIDE

wint_t towupper (wint_t wc){
    wint_t  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "towupper");
    preload_log("%s", "");
    return original_func(wc);
}

#endif
#ifndef trunc_OVERRIDE
#define trunc_OVERRIDE

double trunc (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "trunc");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef truncate_OVERRIDE
#define truncate_OVERRIDE

int truncate (const char *filename, off_t length){
    int  (*original_func)(const char *filename, off_t length);
    original_func = dlsym(RTLD_NEXT, "truncate");
    preload_log("%s", "");
    return original_func(filename,length);
}

#endif
// #ifndef truncate64_OVERRIDE
// #define truncate64_OVERRIDE

// int truncate64 (const char *name, off64_t length){
//     int  (*original_func)(const char *name, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "truncate64");
//     preload_log("%s", "");
//     return original_func(name,length);
// }

// #endif
#ifndef truncf_OVERRIDE
#define truncf_OVERRIDE

float truncf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "truncf");
    preload_log("%s", "");
    return original_func(x);
}

#endif 
#ifndef truncl_OVERRIDE
#define truncl_OVERRIDE

long double truncl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "truncl");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef tsearch_OVERRIDE
#define tsearch_OVERRIDE

void * tsearch (const void *key, void **rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void **rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tsearch");
    preload_log("%s", "");
    return original_func(key,rootp,compar);
}

#endif 
#ifndef ttyname_OVERRIDE
#define ttyname_OVERRIDE

char * ttyname (int filedes){
    char *  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "ttyname");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef ttyname_r_OVERRIDE
#define ttyname_r_OVERRIDE

int ttyname_r (int filedes, char *buf, size_t len){
    int  (*original_func)(int filedes, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ttyname_r");
    preload_log("%s", "");
    return original_func(filedes,buf,len);
}

#endif
#ifndef twalk_OVERRIDE
#define twalk_OVERRIDE

void twalk (const void *root, __action_fn_t action){
    void  (*original_func)(const void *root, __action_fn_t action);
    original_func = dlsym(RTLD_NEXT, "twalk");
    preload_log("%s", "");
    return original_func(root,action);
}

#endif
#ifndef twalk_r_OVERRIDE
#define twalk_r_OVERRIDE

void twalk_r (const void *root, void (*action) (const void *key, VISIT which, void *closure), void *closure){
    void  (*original_func)(const void *root, void (*action) (const void *key, VISIT which, void *closure), void *closure);
    original_func = dlsym(RTLD_NEXT, "twalk_r");
    preload_log("%s", "");
    return original_func(root,action,closure);
}

#endif
#ifndef tzset_OVERRIDE
#define tzset_OVERRIDE

void tzset (void){
    void  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "tzset");
    preload_log("%s", "");
    return original_func();
}

#endif 
#ifndef ufromfp_OVERRIDE
#define ufromfp_OVERRIDE

uintmax_t ufromfp (double x, int round, unsigned int width){
    uintmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfp");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef ufromfpf_OVERRIDE
#define ufromfpf_OVERRIDE

uintmax_t ufromfpf (float x, int round, unsigned int width){
    uintmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpf");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef ufromfpl_OVERRIDE
#define ufromfpl_OVERRIDE

uintmax_t ufromfpl (long double x, int round, unsigned int width){
    uintmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpl");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif 
#ifndef ufromfpx_OVERRIDE
#define ufromfpx_OVERRIDE

uintmax_t ufromfpx (double x, int round, unsigned int width){
    uintmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpx");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef ufromfpxf_OVERRIDE
#define ufromfpxf_OVERRIDE

uintmax_t ufromfpxf (float x, int round, unsigned int width){
    uintmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpxf");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef ufromfpxl_OVERRIDE
#define ufromfpxl_OVERRIDE

uintmax_t ufromfpxl (long double x, int round, unsigned int width){
    uintmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpxl");
    preload_log("%s", "");
    return original_func(x,round,width);
}

#endif
#ifndef ulimit_OVERRIDE
#define ulimit_OVERRIDE

long int ulimit (int cmd, long newlimit){
    long int  (*original_func)(int cmd, long newlimit);
    original_func = dlsym(RTLD_NEXT, "ulimit");
    preload_log("%s", "");
    long int  ret_val = original_func(cmd,newlimit);
    return ret_val;
}

#endif
#ifndef umask_OVERRIDE
#define umask_OVERRIDE

mode_t umask (mode_t mask){
    mode_t  (*original_func)(mode_t mask);
    original_func = dlsym(RTLD_NEXT, "umask");
    preload_log("%s", "");
    return original_func(mask);
}

#endif
#ifndef umount_OVERRIDE
#define umount_OVERRIDE

int umount (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "umount");
    preload_log("%s", "");
    return original_func(file);
}

#endif
#ifndef umount2_OVERRIDE
#define umount2_OVERRIDE

int umount2 (const char *file, int flags){
    int  (*original_func)(const char *file, int flags);
    original_func = dlsym(RTLD_NEXT, "umount2");
    preload_log("%s", "");
    return original_func(file,flags);
}

#endif
#ifndef uname_OVERRIDE
#define uname_OVERRIDE

int uname (struct utsname *info){
    int  (*original_func)(struct utsname *info);
    original_func = dlsym(RTLD_NEXT, "uname");
    preload_log("%s", "");
    return original_func(info);
}

#endif
#ifndef ungetc_OVERRIDE
#define ungetc_OVERRIDE

int ungetc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ungetc");
    preload_log("%s", "");
    return original_func(c,stream);
}

#endif
#ifndef ungetwc_OVERRIDE
#define ungetwc_OVERRIDE

wint_t ungetwc (wint_t wc, FILE *stream){
    wint_t  (*original_func)(wint_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ungetwc");
    preload_log("%s", "");
    return original_func(wc,stream);
}

#endif 
// #ifndef unlink_OVERRIDE
// #define unlink_OVERRIDE

// int unlink (const char *filename){
//     int  (*original_func)(const char *filename);
//     original_func = dlsym(RTLD_NEXT, "unlink");
//     preload_log("%s", "");
//     return original_func(filename);
// }

// #endif 
#ifndef unlockpt_OVERRIDE
#define unlockpt_OVERRIDE

int unlockpt (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "unlockpt");
    preload_log("%s", "");
    return original_func(filedes);
}

#endif
#ifndef unsetenv_OVERRIDE
#define unsetenv_OVERRIDE

int unsetenv (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "unsetenv");
    preload_log("%s", "");
    return original_func(name);
}

#endif
#ifndef updwtmp_OVERRIDE
#define updwtmp_OVERRIDE

void updwtmp (const char *wtmp_file, const struct utmp *utmp){
    void  (*original_func)(const char *wtmp_file, const struct utmp *utmp);
    original_func = dlsym(RTLD_NEXT, "updwtmp");
    preload_log("%s", "");
    return original_func(wtmp_file,utmp);
}

#endif
#ifndef utime_OVERRIDE
#define utime_OVERRIDE

int utime (const char *filename, const struct utimbuf *times){
    int  (*original_func)(const char *filename, const struct utimbuf *times);
    original_func = dlsym(RTLD_NEXT, "utime");
    preload_log("%s", "");
    return original_func(filename,times);
}

#endif
#ifndef utimes_OVERRIDE
#define utimes_OVERRIDE

int utimes (const char *filename, const struct timeval tvp[2]){
    int  (*original_func)(const char *filename, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "utimes");
    preload_log("%s", "");
    return original_func(filename,tvp);
}

#endif
#ifndef utmpname_OVERRIDE
#define utmpname_OVERRIDE

int utmpname (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "utmpname");
    preload_log("%s", "");
    return original_func(file);
}

#endif
#ifndef utmpxname_OVERRIDE
#define utmpxname_OVERRIDE

int utmpxname (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "utmpxname");
    preload_log("%s", "");
    return original_func(file);
}

#endif 
#ifndef valloc_OVERRIDE
#define valloc_OVERRIDE

void * valloc (size_t size){
    void *  (*original_func)(size_t size);
    original_func = dlsym(RTLD_NEXT, "valloc");
    preload_log("%s", "");
    return original_func(size);
}

#endif
#ifndef vasprintf_OVERRIDE
#define vasprintf_OVERRIDE

int vasprintf (char **ptr, const char *template, va_list ap){
    int  (*original_func)(char **ptr, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vasprintf");
    preload_log("%s", "");
    return original_func(ptr,template,ap);
}

#endif
#ifndef verr_OVERRIDE
#define verr_OVERRIDE

void verr (int status, const char *format, va_list ap){
    void  (*original_func)(int status, const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "verr");
    preload_log("%s", "");
    return original_func(status,format,ap);
}

#endif
#ifndef verrx_OVERRIDE
#define verrx_OVERRIDE

void verrx (int status, const char *format, va_list ap){
    void  (*original_func)(int status, const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "verrx");
    preload_log("%s", "");
    return original_func(status,format,ap);
}

#endif
#ifndef versionsort_OVERRIDE
#define versionsort_OVERRIDE

int versionsort (const struct dirent **a, const struct dirent **b){
    int  (*original_func)(const struct dirent **a, const struct dirent **b);
    original_func = dlsym(RTLD_NEXT, "versionsort");
    preload_log("%s", "");
    return original_func(a,b);
}

#endif
#ifndef versionsort64_OVERRIDE
#define versionsort64_OVERRIDE

int versionsort64 (const struct dirent64 **a, const struct dirent64 **b){
    int  (*original_func)(const struct dirent64 **a, const struct dirent64 **b);
    original_func = dlsym(RTLD_NEXT, "versionsort64");
    preload_log("%s", "");
    return original_func(a,b);
}

#endif
#ifndef vfork_OVERRIDE
#define vfork_OVERRIDE

pid_t vfork (void){
    pid_t  (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "vfork");
    preload_log("%s", "");
    return original_func();
}

#endif
#ifndef vfprintf_OVERRIDE
#define vfprintf_OVERRIDE

int vfprintf (FILE *stream, const char *template, va_list ap){
    int  (*original_func)(FILE *stream, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfprintf");
    preload_log("%s", "");
    return original_func(stream,template,ap);
}

#endif
#ifndef vfscanf_OVERRIDE
#define vfscanf_OVERRIDE

int vfscanf (FILE *stream, const char *template, va_list ap){
    int  (*original_func)(FILE *stream, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfscanf");
    preload_log("%s", "");
    return original_func(stream,template,ap);
}

#endif
#ifndef vfwprintf_OVERRIDE
#define vfwprintf_OVERRIDE

int vfwprintf (FILE *stream, const wchar_t *template, va_list ap){
    int  (*original_func)(FILE *stream, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfwprintf");
    preload_log("%s", "");
    return original_func(stream,template,ap);
}

#endif
#ifndef vfwscanf_OVERRIDE
#define vfwscanf_OVERRIDE

int vfwscanf (FILE *stream, const wchar_t *template, va_list ap){
    int  (*original_func)(FILE *stream, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfwscanf");
    preload_log("%s", "");
    return original_func(stream,template,ap);
}

#endif
#ifndef vlimit_OVERRIDE
#define vlimit_OVERRIDE

int vlimit (int resource, int limit){
    int  (*original_func)(int resource, int limit);
    original_func = dlsym(RTLD_NEXT, "vlimit");
    preload_log("%s", "");
    return original_func(resource,limit);
}

#endif
#ifndef vprintf_OVERRIDE
#define vprintf_OVERRIDE

int vprintf (const char *template, va_list ap){
    int  (*original_func)(const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vprintf");
    preload_log("%s", "");
    return original_func(template,ap);
}

#endif
#ifndef vscanf_OVERRIDE
#define vscanf_OVERRIDE

int vscanf (const char *template, va_list ap){
    int  (*original_func)(const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vscanf");
    preload_log("%s", "");
    return original_func(template,ap);
}

#endif
#ifndef vsnprintf_OVERRIDE
#define vsnprintf_OVERRIDE

int vsnprintf (char *s, size_t size, const char *template, va_list ap){
    int  (*original_func)(char *s, size_t size, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsnprintf");
    preload_log("%s", "");
    return original_func(s,size,template,ap);
}

#endif
#ifndef vsprintf_OVERRIDE
#define vsprintf_OVERRIDE

int vsprintf (char *s, const char *template, va_list ap){
    int  (*original_func)(char *s, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsprintf");
    preload_log("%s", "");
    return original_func(s,template,ap);
}

#endif
#ifndef vsscanf_OVERRIDE
#define vsscanf_OVERRIDE

int vsscanf (const char *s, const char *template, va_list ap){
    int  (*original_func)(const char *s, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsscanf");
    preload_log("%s", "");
    return original_func(s,template,ap);
}

#endif
#ifndef vswprintf_OVERRIDE
#define vswprintf_OVERRIDE

int vswprintf (wchar_t *ws, size_t size, const wchar_t *template, va_list ap){
    int  (*original_func)(wchar_t *ws, size_t size, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vswprintf");
    preload_log("%s", "");
    return original_func(ws,size,template,ap);
}

#endif
#ifndef vswscanf_OVERRIDE
#define vswscanf_OVERRIDE

int vswscanf (const wchar_t *s, const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *s, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vswscanf");
    preload_log("%s", "");
    return original_func(s,template,ap);
}

#endif
#ifndef vsyslog_OVERRIDE
#define vsyslog_OVERRIDE

void vsyslog (int facility_priority, const char *format, va_list arglist){
    void  (*original_func)(int facility_priority, const char *format, va_list arglist);
    original_func = dlsym(RTLD_NEXT, "vsyslog");
    preload_log("%s", "");
    return original_func(facility_priority,format,arglist);
}

#endif
#ifndef vwarn_OVERRIDE
#define vwarn_OVERRIDE

void vwarn (const char *format, va_list ap){
    void  (*original_func)(const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwarn");
    preload_log("%s", "");
    return original_func(format,ap);
}

#endif
#ifndef vwarnx_OVERRIDE
#define vwarnx_OVERRIDE

void vwarnx (const char *format, va_list ap){
    void  (*original_func)(const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwarnx");
    preload_log("%s", "");
    return original_func(format,ap);
}

#endif
#ifndef vwprintf_OVERRIDE
#define vwprintf_OVERRIDE

int vwprintf (const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwprintf");
    preload_log("%s", "");
    return original_func(template,ap);
}

#endif 
#ifndef vwscanf_OVERRIDE
#define vwscanf_OVERRIDE

int vwscanf (const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwscanf");
    preload_log("%s", "");
    return original_func(template,ap);
}

#endif 
#ifndef wait_OVERRIDE
#define wait_OVERRIDE

pid_t wait (int *status_ptr){
    pid_t  (*original_func)(int *status_ptr);
    original_func = dlsym(RTLD_NEXT, "wait");
    preload_log("%s", "");
    return original_func(status_ptr);
}

#endif
#ifndef wait3_OVERRIDE
#define wait3_OVERRIDE

pid_t wait3 (int *status_ptr, int options, struct rusage *usage){
    pid_t  (*original_func)(int *status_ptr, int options, struct rusage *usage);
    original_func = dlsym(RTLD_NEXT, "wait3");
    preload_log("%s", "");
    return original_func(status_ptr,options,usage);
}

#endif
#ifndef wait4_OVERRIDE
#define wait4_OVERRIDE

pid_t wait4 (pid_t pid, int *status_ptr, int options, struct rusage *usage){
    pid_t  (*original_func)(pid_t pid, int *status_ptr, int options, struct rusage *usage);
    original_func = dlsym(RTLD_NEXT, "wait4");
    preload_log("%s", "");
    return original_func(pid,status_ptr,options,usage);
}

#endif
#ifndef waitpid_OVERRIDE
#define waitpid_OVERRIDE

pid_t waitpid (pid_t pid, int *status_ptr, int options){
    pid_t  (*original_func)(pid_t pid, int *status_ptr, int options);
    original_func = dlsym(RTLD_NEXT, "waitpid");
    preload_log("%s", "");
    return original_func(pid,status_ptr,options);
}

#endif
#ifndef warn_OVERRIDE
#define warn_OVERRIDE

void warn (const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "warn");
    preload_log("%s", "");
    original_func(format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef warnx_OVERRIDE
#define warnx_OVERRIDE

void warnx (const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "warnx");
    preload_log("%s", "");
    original_func(format,ap);
    va_end(ap);
    return;
}


#endif
#ifndef wcpcpy_OVERRIDE
#define wcpcpy_OVERRIDE

wchar_t * wcpcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcpcpy");
    preload_log("%s", "");
    return original_func(wto,wfrom);
}

#endif
#ifndef wcpncpy_OVERRIDE
#define wcpncpy_OVERRIDE

wchar_t * wcpncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcpncpy");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wcrtomb_OVERRIDE
#define wcrtomb_OVERRIDE

size_t wcrtomb (char *restrict s, wchar_t wc, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict s, wchar_t wc, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcrtomb");
    preload_log("%s", "");
    return original_func(s,wc,ps);
}

#endif
#ifndef wcscasecmp_OVERRIDE
#define wcscasecmp_OVERRIDE

int wcscasecmp (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscasecmp");
    preload_log("%s", "");
    return original_func(ws1,ws2);
}

#endif
#ifndef wcscat_OVERRIDE
#define wcscat_OVERRIDE

wchar_t * wcscat (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcscat");
    preload_log("%s", "");
    return original_func(wto,wfrom);
}

#endif
#ifndef wcschr_OVERRIDE
#define wcschr_OVERRIDE

wchar_t * wcschr (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcschr");
    preload_log("%s", "");
    return original_func(wstring,wc);
}

#endif
#ifndef wcschrnul_OVERRIDE
#define wcschrnul_OVERRIDE

wchar_t * wcschrnul (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcschrnul");
    preload_log("%s", "");
    return original_func(wstring,wc);
}

#endif
#ifndef wcscmp_OVERRIDE
#define wcscmp_OVERRIDE

int wcscmp (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscmp");
    preload_log("%s", "");
    return original_func(ws1,ws2);
}

#endif
#ifndef wcscoll_OVERRIDE
#define wcscoll_OVERRIDE

int wcscoll (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscoll");
    preload_log("%s", "");
    return original_func(ws1,ws2);
}

#endif
#ifndef wcscpy_OVERRIDE
#define wcscpy_OVERRIDE

wchar_t * wcscpy (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcscpy");
    preload_log("%s", "");
    return original_func(wto,wfrom);
}

#endif
#ifndef wcscspn_OVERRIDE
#define wcscspn_OVERRIDE

size_t wcscspn (const wchar_t *wstring, const wchar_t *stopset){
    size_t  (*original_func)(const wchar_t *wstring, const wchar_t *stopset);
    original_func = dlsym(RTLD_NEXT, "wcscspn");
    preload_log("%s", "");
    return original_func(wstring,stopset);
}

#endif
#ifndef wcsdup_OVERRIDE
#define wcsdup_OVERRIDE

wchar_t * wcsdup (const wchar_t *ws){
    wchar_t *  (*original_func)(const wchar_t *ws);
    original_func = dlsym(RTLD_NEXT, "wcsdup");
    preload_log("%s", "");
    return original_func(ws);
}

#endif
#ifndef wcsftime_OVERRIDE
#define wcsftime_OVERRIDE

size_t wcsftime (wchar_t *s, size_t size, const wchar_t *template, const struct tm *brokentime){
    size_t  (*original_func)(wchar_t *s, size_t size, const wchar_t *template, const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "wcsftime");
    preload_log("%s", "");
    return original_func(s,size,template,brokentime);
}

#endif
#ifndef wcslen_OVERRIDE
#define wcslen_OVERRIDE

size_t wcslen (const wchar_t *ws){
    size_t  (*original_func)(const wchar_t *ws);
    original_func = dlsym(RTLD_NEXT, "wcslen");
    preload_log("%s", "");
    return original_func(ws);
}

#endif
#ifndef wcsncasecmp_OVERRIDE
#define wcsncasecmp_OVERRIDE

int wcsncasecmp (const wchar_t *ws1, const wchar_t *s2, size_t n){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *s2, size_t n);
    original_func = dlsym(RTLD_NEXT, "wcsncasecmp");
    preload_log("%s", "");
    return original_func(ws1,s2,n);
}

#endif
#ifndef wcsncat_OVERRIDE
#define wcsncat_OVERRIDE

wchar_t * wcsncat (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncat");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wcsncmp_OVERRIDE
#define wcsncmp_OVERRIDE

int wcsncmp (const wchar_t *ws1, const wchar_t *ws2, size_t size){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncmp");
    preload_log("%s", "");
    return original_func(ws1,ws2,size);
}

#endif
#ifndef wcsncpy_OVERRIDE
#define wcsncpy_OVERRIDE

wchar_t * wcsncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncpy");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wcsnlen_OVERRIDE
#define wcsnlen_OVERRIDE

size_t wcsnlen (const wchar_t *ws, size_t maxlen){
    size_t  (*original_func)(const wchar_t *ws, size_t maxlen);
    original_func = dlsym(RTLD_NEXT, "wcsnlen");
    preload_log("%s", "");
    return original_func(ws,maxlen);
}

#endif
#ifndef wcsnrtombs_OVERRIDE
#define wcsnrtombs_OVERRIDE

size_t wcsnrtombs (char *restrict dst, const wchar_t **restrict src, size_t nwc, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict dst, const wchar_t **restrict src, size_t nwc, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcsnrtombs");
    preload_log("%s", "");
    return original_func(dst,src,nwc,len,ps);
}

#endif
#ifndef wcspbrk_OVERRIDE
#define wcspbrk_OVERRIDE

wchar_t * wcspbrk (const wchar_t *wstring, const wchar_t *stopset){
    wchar_t *  (*original_func)(const wchar_t *wstring, const wchar_t *stopset);
    original_func = dlsym(RTLD_NEXT, "wcspbrk");
    preload_log("%s", "");
    return original_func(wstring,stopset);
}

#endif
#ifndef wcsrchr_OVERRIDE
#define wcsrchr_OVERRIDE

wchar_t * wcsrchr (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcsrchr");
    preload_log("%s", "");
    return original_func(wstring,wc);
}

#endif
#ifndef wcsrtombs_OVERRIDE
#define wcsrtombs_OVERRIDE

size_t wcsrtombs (char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcsrtombs");
    preload_log("%s", "");
    return original_func(dst,src,len,ps);
}

#endif
#ifndef wcsspn_OVERRIDE
#define wcsspn_OVERRIDE

size_t wcsspn (const wchar_t *wstring, const wchar_t *skipset){
    size_t  (*original_func)(const wchar_t *wstring, const wchar_t *skipset);
    original_func = dlsym(RTLD_NEXT, "wcsspn");
    preload_log("%s", "");
    return original_func(wstring,skipset);
}

#endif
#ifndef wcsstr_OVERRIDE
#define wcsstr_OVERRIDE

wchar_t * wcsstr (const wchar_t *haystack, const wchar_t *needle){
    wchar_t *  (*original_func)(const wchar_t *haystack, const wchar_t *needle);
    original_func = dlsym(RTLD_NEXT, "wcsstr");
    preload_log("%s", "");
    return original_func(haystack,needle);
}

#endif
#ifndef wcstod_OVERRIDE
#define wcstod_OVERRIDE

double wcstod (const wchar_t *restrict string, wchar_t **restrict tailptr){
    double  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstod");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef wcstof_OVERRIDE
#define wcstof_OVERRIDE

float wcstof (const wchar_t *string, wchar_t **tailptr){
    float  (*original_func)(const wchar_t *string, wchar_t **tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstof");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef wcstoimax_OVERRIDE
#define wcstoimax_OVERRIDE

intmax_t wcstoimax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    intmax_t  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoimax");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstok_OVERRIDE
#define wcstok_OVERRIDE

wchar_t * wcstok (wchar_t *newstring, const wchar_t *delimiters, wchar_t **save_ptr){
    wchar_t *  (*original_func)(wchar_t *newstring, const wchar_t *delimiters, wchar_t **save_ptr);
    original_func = dlsym(RTLD_NEXT, "wcstok");
    preload_log("%s", "");
    return original_func(newstring,delimiters,save_ptr);
}

#endif
#ifndef wcstol_OVERRIDE
#define wcstol_OVERRIDE

long int wcstol (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstol");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstold_OVERRIDE
#define wcstold_OVERRIDE

long double wcstold (const wchar_t *string, wchar_t **tailptr){
    long double  (*original_func)(const wchar_t *string, wchar_t **tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstold");
    preload_log("%s", "");
    return original_func(string,tailptr);
}

#endif
#ifndef wcstoll_OVERRIDE
#define wcstoll_OVERRIDE

long long int wcstoll (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoll");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstombs_OVERRIDE
#define wcstombs_OVERRIDE

size_t wcstombs (char *string, const wchar_t *wstring, size_t size){
    size_t  (*original_func)(char *string, const wchar_t *wstring, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcstombs");
    preload_log("%s", "");
    return original_func(string,wstring,size);
}

#endif
#ifndef wcstoq_OVERRIDE
#define wcstoq_OVERRIDE

long long int wcstoq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoq");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstoul_OVERRIDE
#define wcstoul_OVERRIDE

unsigned long int wcstoul (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoul");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstoull_OVERRIDE
#define wcstoull_OVERRIDE

unsigned long long int wcstoull (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoull");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstoumax_OVERRIDE
#define wcstoumax_OVERRIDE

uintmax_t wcstoumax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    uintmax_t  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoumax");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcstouq_OVERRIDE
#define wcstouq_OVERRIDE

unsigned long long int wcstouq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstouq");
    preload_log("%s", "");
    return original_func(string,tailptr,base);
}

#endif
#ifndef wcswcs_OVERRIDE
#define wcswcs_OVERRIDE

wchar_t * wcswcs (const wchar_t *haystack, const wchar_t *needle){
    wchar_t *  (*original_func)(const wchar_t *haystack, const wchar_t *needle);
    original_func = dlsym(RTLD_NEXT, "wcswcs");
    preload_log("%s", "");
    return original_func(haystack,needle);
}

#endif
#ifndef wcsxfrm_OVERRIDE
#define wcsxfrm_OVERRIDE

size_t wcsxfrm (wchar_t *restrict wto, const wchar_t *wfrom, size_t size){
    size_t  (*original_func)(wchar_t *restrict wto, const wchar_t *wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsxfrm");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wctob_OVERRIDE
#define wctob_OVERRIDE

int wctob (wint_t c){
    int  (*original_func)(wint_t c);
    original_func = dlsym(RTLD_NEXT, "wctob");
    preload_log("%s", "");
    return original_func(c);
}

#endif
#ifndef wctomb_OVERRIDE
#define wctomb_OVERRIDE

int wctomb (char *string, wchar_t wchar){
    int  (*original_func)(char *string, wchar_t wchar);
    original_func = dlsym(RTLD_NEXT, "wctomb");
    preload_log("%s", "");
    return original_func(string,wchar);
}

#endif
#ifndef wctrans_OVERRIDE
#define wctrans_OVERRIDE

wctrans_t wctrans (const char *property){
    wctrans_t  (*original_func)(const char *property);
    original_func = dlsym(RTLD_NEXT, "wctrans");
    preload_log("%s", "");
    return original_func(property);
}

#endif
#ifndef wctype_OVERRIDE
#define wctype_OVERRIDE

wctype_t wctype (const char *property){
    wctype_t  (*original_func)(const char *property);
    original_func = dlsym(RTLD_NEXT, "wctype");
    preload_log("%s", "");
    return original_func(property);
}

#endif
#ifndef wmemchr_OVERRIDE
#define wmemchr_OVERRIDE

wchar_t * wmemchr (const wchar_t *block, wchar_t wc, size_t size){
    wchar_t *  (*original_func)(const wchar_t *block, wchar_t wc, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemchr");
    preload_log("%s", "");
    return original_func(block,wc,size);
}

#endif
#ifndef wmemcmp_OVERRIDE
#define wmemcmp_OVERRIDE

int wmemcmp (const wchar_t *a1, const wchar_t *a2, size_t size){
    int  (*original_func)(const wchar_t *a1, const wchar_t *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemcmp");
    preload_log("%s", "");
    return original_func(a1,a2,size);
}

#endif
#ifndef wmemcpy_OVERRIDE
#define wmemcpy_OVERRIDE

wchar_t * wmemcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemcpy");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wmemmove_OVERRIDE
#define wmemmove_OVERRIDE

wchar_t * wmemmove (wchar_t *wto, const wchar_t *wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *wto, const wchar_t *wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemmove");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wmempcpy_OVERRIDE
#define wmempcpy_OVERRIDE

wchar_t * wmempcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmempcpy");
    preload_log("%s", "");
    return original_func(wto,wfrom,size);
}

#endif
#ifndef wmemset_OVERRIDE
#define wmemset_OVERRIDE

wchar_t * wmemset (wchar_t *block, wchar_t wc, size_t size){
    wchar_t *  (*original_func)(wchar_t *block, wchar_t wc, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemset");
    preload_log("%s", "");
    return original_func(block,wc,size);
}

#endif
#ifndef wordexp_OVERRIDE
#define wordexp_OVERRIDE

int wordexp (const char *words, wordexp_t *word_vector_ptr, int flags){
    int  (*original_func)(const char *words, wordexp_t *word_vector_ptr, int flags);
    original_func = dlsym(RTLD_NEXT, "wordexp");
    preload_log("%s", "");
    return original_func(words,word_vector_ptr,flags);
}

#endif 
#ifndef wordfree_OVERRIDE
#define wordfree_OVERRIDE

void wordfree (wordexp_t *word_vector_ptr){
    void  (*original_func)(wordexp_t *word_vector_ptr);
    original_func = dlsym(RTLD_NEXT, "wordfree");
    preload_log("%s", "");
    return original_func(word_vector_ptr);
}

#endif
#ifndef wprintf_OVERRIDE
#define wprintf_OVERRIDE

int wprintf (const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "wprintf");
    preload_log("%s", "");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}

#endif
#ifndef write_OVERRIDE
#define write_OVERRIDE

ssize_t write (int filedes, const void *buffer, size_t size){
    ssize_t  (*original_func)(int filedes, const void *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "write");
    char* hexbuf = hexstr(buffer, size);
    preload_log("write(%d, %s, %ld)", filedes, hexbuf, size);
    free(hexbuf);
    return original_func(filedes,buffer,size);
}

#endif

#ifndef writev_OVERRIDE
#define writev_OVERRIDE

ssize_t writev (int filedes, const struct iovec *vector, int count){
    ssize_t  (*original_func)(int filedes, const struct iovec *vector, int count);
    original_func = dlsym(RTLD_NEXT, "writev");
    preload_log("%s", "");
    return original_func(filedes,vector,count);
}

#endif
#ifndef wscanf_OVERRIDE
#define wscanf_OVERRIDE

int wscanf (const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "wscanf");
    preload_log("%s", "");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}

#endif 
#ifndef y0_OVERRIDE
#define y0_OVERRIDE

double y0 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "y0");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef y0f_OVERRIDE
#define y0f_OVERRIDE

float y0f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "y0f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef y0l_OVERRIDE
#define y0l_OVERRIDE

long double y0l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "y0l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef y1_OVERRIDE
#define y1_OVERRIDE

double y1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "y1");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef y1f_OVERRIDE
#define y1f_OVERRIDE

float y1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "y1f");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef y1l_OVERRIDE
#define y1l_OVERRIDE

long double y1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "y1l");
    preload_log("%s", "");
    return original_func(x);
}

#endif
#ifndef yn_OVERRIDE
#define yn_OVERRIDE

double yn (int n, double x){
    double  (*original_func)(int n, double x);
    original_func = dlsym(RTLD_NEXT, "yn");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
#ifndef ynf_OVERRIDE
#define ynf_OVERRIDE

float ynf (int n, float x){
    float  (*original_func)(int n, float x);
    original_func = dlsym(RTLD_NEXT, "ynf");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
#ifndef ynl_OVERRIDE
#define ynl_OVERRIDE

long double ynl (int n, long double x){
    long double  (*original_func)(int n, long double x);
    original_func = dlsym(RTLD_NEXT, "ynl");
    preload_log("%s", "");
    return original_func(n,x);
}

#endif
