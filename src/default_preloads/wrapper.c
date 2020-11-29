/**
 * 
 * This is a wrapper file for all preloaded libc functions. 
 * This file has been created in order to be able to use
 * libc functions, altough they are hooked. 
 * This solves the infinite recursion problem we have when using
 * a hooked libc function in our logger, e.g:
 * 
 * void log_function(){
 *      printf("This is a log from %d\n", getpid());
 * }
 * 
 * In the above example, getpid() would get logged, and call log_function again
 * (which would call getpid, that would call log_function and so on...).
 * To prevent that, we need to define wrappers that will not call the logger again.
 * This is what this file and wrapper.h are for. It creates wrapper around libc
 * functions for the dev to use in order to code the logger and other things.
 * 
 * */


#define _GNU_SOURCE

#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>

#include <aio.h>
#include <argp.h>
#include <arpa/inet.h>
#include <complex.h> 
#include <crypt.h>
#include <dirent.h>
#include <dlfcn.h>
#include <errno.h>
#include <fenv.h>
#include <ftw.h>
#include <glob.h>
#include <iconv.h>
#include <inttypes.h>
#include <malloc.h>
#include <math.h>
#include <mcheck.h>
#include <mntent.h>
#include <net/if.h>
#include <netinet/in.h>
#include <nl_types.h>
#include <regex.h>
#include <sched.h>
#include <search.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/resource.h>
#include <sys/resource.h>
#include <sys/sem.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/timex.h>
#include <sys/types.h>
#include <sys/utsname.h>
#include <sys/wait.h>
#include <termio.h>
#include <ucontext.h>
#include <unistd.h>
#include <utime.h>
#include <utmpx.h>
#include <wchar.h>
#include <wctype.h>
#include <wordexp.h>

typedef void (*sighandler_t)(int);


void h__exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "_exit");
}



void h__Exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "_Exit");
}



void h__flushlbf (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "_flushlbf");
}



size_t h___fbufsize (FILE *stream){
    size_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fbufsize");
    return original_func(stream);
}



int h___flbf (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__flbf");
    return original_func(stream);
}



size_t h___fpending (FILE *stream){
    size_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fpending");
    return original_func(stream);
}



void h___fpurge (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fpurge");
    original_func(stream);
}



int h___freadable (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__freadable");
    return original_func(stream);
}



int h___freading (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__freading");
    return original_func(stream);
}



int h___fsetlocking (FILE *stream, int type){
    int  (*original_func)(FILE *stream, int type);
    original_func = dlsym(RTLD_NEXT, "__fsetlocking");
    return original_func(stream,type);
}



int h___fwritable (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fwritable");
    return original_func(stream);
}



int h___fwriting (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "__fwriting");
    return original_func(stream);
}



uint64_t h___ppc_get_timebase (){
    uint64_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_get_timebase");
    return original_func();
}



uint64_t h___ppc_get_timebase_freq (){
    uint64_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_get_timebase_freq");
    return original_func();
}



void h___ppc_mdoio (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_mdoio");
    original_func();
}



void h___ppc_mdoom (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_mdoom");
    original_func();
}



void h___ppc_set_ppr_low (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_low");
    return original_func();
}



void h___ppc_set_ppr_med (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med");
    original_func();
}



void h___ppc_set_ppr_med_high (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med_high");
    original_func();
}



void h___ppc_set_ppr_med_low (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_med_low");
    original_func();
}



void h___ppc_set_ppr_very_low (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_set_ppr_very_low");
    original_func();
}



void h___ppc_yield (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "__ppc_yield");
    original_func();
}



void h___riscv_flush_icache (void *start, void *end, unsigned long int flags){
    void  (*original_func)(void *start, void *end, unsigned long int flags);
    original_func = dlsym(RTLD_NEXT, "__riscv_flush_icache");
    original_func(start,end,flags);
}



long int h_a64l (const char *string){
    long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "a64l");
    return original_func(string);
}



void h_abort (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "abort");
    original_func();
}



int h_abs (int number){
    int  (*original_func)(int number);
    original_func = dlsym(RTLD_NEXT, "abs");
    return original_func(number);
}



int h_accept (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "accept");
    return original_func(socket,addr,length_ptr);
}




int h_access (const char *filename, int how){
    int  (*original_func)(const char *filename, int how);
    original_func = dlsym(RTLD_NEXT, "access");
    return original_func(filename,how);
}




double h_acos (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "acos");
    return original_func(x);
}



float h_acosf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "acosf");
    return original_func(x);
}



double h_acosh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "acosh");
    return original_func(x);
}



float h_acoshf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "acoshf");
    return original_func(x);
}



long double h_acoshl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "acoshl");
    return original_func(x);
}



long double h_acosl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "acosl");
    return original_func(x);
}



int h_addmntent (FILE *stream, const struct mntent *mnt){
    int  (*original_func)(FILE *stream, const struct mntent *mnt);
    original_func = dlsym(RTLD_NEXT, "addmntent");
    return original_func(stream,mnt);
}



int h_addseverity (int severity, const char *string){
    int  (*original_func)(int severity, const char *string);
    original_func = dlsym(RTLD_NEXT, "addseverity");
    return original_func(severity,string);
}



int h_adjtime (const struct timeval *delta, struct timeval *olddelta){
    int  (*original_func)(const struct timeval *delta, struct timeval *olddelta);
    original_func = dlsym(RTLD_NEXT, "adjtime");
    return original_func(delta,olddelta);
}



int h_adjtimex (struct timex *timex){
    int  (*original_func)(struct timex *timex);
    original_func = dlsym(RTLD_NEXT, "adjtimex");
    return original_func(timex);
}



int h_aio_cancel (int fildes, struct aiocb *aiocbp){
    int  (*original_func)(int fildes, struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_cancel");
    return original_func(fildes,aiocbp);
}



int h_aio_cancel64 (int fildes, struct aiocb64 *aiocbp){
    int  (*original_func)(int fildes, struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_cancel64");
    return original_func(fildes,aiocbp);
}



int h_aio_error (const struct aiocb *aiocbp){
    int  (*original_func)(const struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_error");
    return original_func(aiocbp);
}



int h_aio_error64 (const struct aiocb64 *aiocbp){
    int  (*original_func)(const struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_error64");
    return original_func(aiocbp);
}



int h_aio_fsync (int op, struct aiocb *aiocbp){
    int  (*original_func)(int op, struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_fsync");
    return original_func(op,aiocbp);
}



int h_aio_fsync64 (int op, struct aiocb64 *aiocbp){
    int  (*original_func)(int op, struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_fsync64");
    return original_func(op,aiocbp);
}



void h_aio_init (const struct aioinit *init){
    void  (*original_func)(const struct aioinit *init);
    original_func = dlsym(RTLD_NEXT, "aio_init");
    original_func(init);
}



int h_aio_read (struct aiocb *aiocbp){
    int  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_read");
    return original_func(aiocbp);
}



int h_aio_read64 (struct aiocb64 *aiocbp){
    int  (*original_func)(struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_read64");
    return original_func(aiocbp);
}



ssize_t h_aio_return (struct aiocb *aiocbp){
    ssize_t  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_return");
    return original_func(aiocbp);
}



ssize_t h_aio_return64 (struct aiocb64 *aiocbp){
    ssize_t  (*original_func)(struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_return64");
    return original_func(aiocbp);
}



int h_aio_suspend (const struct aiocb *const list[], int nent, const struct timespec *timeout){
    int  (*original_func)(const struct aiocb *const list[], int nent, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "aio_suspend");
    return original_func(list,nent,timeout);
}



int h_aio_suspend64 (const struct aiocb64 *const list[], int nent, const struct timespec *timeout){
    int  (*original_func)(const struct aiocb64 *const list[], int nent, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "aio_suspend64");
    return original_func(list,nent,timeout);
}



int h_aio_write (struct aiocb *aiocbp){
    int  (*original_func)(struct aiocb *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_write");
    return original_func(aiocbp);
}



int h_aio_write64 (struct aiocb64 *aiocbp){
    int  (*original_func)(struct aiocb64 *aiocbp);
    original_func = dlsym(RTLD_NEXT, "aio_write64");
    return original_func(aiocbp);
}



unsigned int h_alarm (unsigned int seconds){
    unsigned int  (*original_func)(unsigned int seconds);
    original_func = dlsym(RTLD_NEXT, "alarm");
    return original_func(seconds);
}



void * h_aligned_alloc (size_t alignment, size_t size){
    void *  (*original_func)(size_t alignment, size_t size);
    original_func = dlsym(RTLD_NEXT, "aligned_alloc");
    return original_func(alignment,size);
}



void * h_alloca (size_t size){
    void *  (*original_func)(size_t size);
    original_func = dlsym(RTLD_NEXT, "alloca");
    return original_func(size);
}



int h_alphasort (const struct dirent **a, const struct dirent **b){
    int  (*original_func)(const struct dirent **a, const struct dirent **b);
    original_func = dlsym(RTLD_NEXT, "alphasort");
    return original_func(a,b);
}



void h_argp_error (const struct argp_state *state, const char *fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    void  (*original_func)(const struct argp_state *state, const char *fmt, ...);
    original_func = dlsym(RTLD_NEXT, "argp_error");
    va_end(ap);
    original_func(state,fmt,ap);
}




void h_argp_failure (const struct argp_state *state, int status, int errnum, const char *fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    void  (*original_func)(const struct argp_state *state, int status, int errnum, const char *fmt, ...);
    original_func = dlsym(RTLD_NEXT, "argp_failure");
    va_end(ap);
    original_func(state,status,errnum,fmt,ap);
}




void h_argp_help (const struct argp *argp, FILE *stream, unsigned flags, char *name){
    void  (*original_func)(const struct argp *argp, FILE *stream, unsigned flags, char *name);
    original_func = dlsym(RTLD_NEXT, "argp_help");
    original_func(argp,stream,flags,name);
}



error_t h_argp_parse (const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input){
    error_t  (*original_func)(const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input);
    original_func = dlsym(RTLD_NEXT, "argp_parse");
    return original_func(argp,argc,argv,flags,arg_index,input);
}



void h_argp_state_help (const struct argp_state *state, FILE *stream, unsigned flags){
    void  (*original_func)(const struct argp_state *state, FILE *stream, unsigned flags);
    original_func = dlsym(RTLD_NEXT, "argp_state_help");
    original_func(state,stream,flags);
}



void h_argp_usage (const struct argp_state *state){
    void  (*original_func)(const struct argp_state *state);
    original_func = dlsym(RTLD_NEXT, "argp_usage");
    original_func(state);
}



error_t h_argz_add (char **argz, size_t *argz_len, const char *str){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str);
    original_func = dlsym(RTLD_NEXT, "argz_add");
    return original_func(argz,argz_len,str);
}



error_t h_argz_add_sep (char **argz, size_t *argz_len, const char *str, int delim){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str, int delim);
    original_func = dlsym(RTLD_NEXT, "argz_add_sep");
    return original_func(argz,argz_len,str,delim);
}



error_t h_argz_append (char **argz, size_t *argz_len, const char *buf, size_t buf_len){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *buf, size_t buf_len);
    original_func = dlsym(RTLD_NEXT, "argz_append");
    return original_func(argz,argz_len,buf,buf_len);
}



size_t h_argz_count (const char *argz, size_t argz_len){
    size_t  (*original_func)(const char *argz, size_t argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_count");
    return original_func(argz,argz_len);
}



error_t h_argz_create (char *const argv[], char **argz, size_t *argz_len){
    error_t  (*original_func)(char *const argv[], char **argz, size_t *argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_create");
    return original_func(argv,argz,argz_len);
}



error_t h_argz_create_sep (const char *string, int sep, char **argz, size_t *argz_len){
    error_t  (*original_func)(const char *string, int sep, char **argz, size_t *argz_len);
    original_func = dlsym(RTLD_NEXT, "argz_create_sep");
    return original_func(string,sep,argz,argz_len);
}



void h_argz_delete (char **argz, size_t *argz_len, char *entry){
    void  (*original_func)(char **argz, size_t *argz_len, char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_delete");
    original_func(argz,argz_len,entry);
}



void h_argz_extract (const char *argz, size_t argz_len, char **argv){
    void  (*original_func)(const char *argz, size_t argz_len, char **argv);
    original_func = dlsym(RTLD_NEXT, "argz_extract");
    original_func(argz,argz_len,argv);
}



error_t h_argz_insert (char **argz, size_t *argz_len, char *before, const char *entry){
    error_t  (*original_func)(char **argz, size_t *argz_len, char *before, const char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_insert");
    return original_func(argz,argz_len,before,entry);
}



char * h_argz_next (const char *argz, size_t argz_len, const char *entry){
    char *  (*original_func)(const char *argz, size_t argz_len, const char *entry);
    original_func = dlsym(RTLD_NEXT, "argz_next");
    return original_func(argz,argz_len,entry);
}



error_t h_argz_replace (char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count){
    error_t  (*original_func)(char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count);
    original_func = dlsym(RTLD_NEXT, "argz_replace");
    return original_func(argz,argz_len,str,with,replace_count);
}



void h_argz_stringify (char *argz, size_t len, int sep){
    void  (*original_func)(char *argz, size_t len, int sep);
    original_func = dlsym(RTLD_NEXT, "argz_stringify");
    original_func(argz,len,sep);
}



char * h_asctime (const struct tm *brokentime){
    char *  (*original_func)(const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "asctime");
    return original_func(brokentime);
}



char * h_asctime_r (const struct tm *brokentime, char *buffer){
    char *  (*original_func)(const struct tm *brokentime, char *buffer);
    original_func = dlsym(RTLD_NEXT, "asctime_r");
    return original_func(brokentime,buffer);
}



double h_asin (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "asin");
    return original_func(x);
}



float h_asinf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "asinf");
    return original_func(x);
}



double h_asinh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "asinh");
    return original_func(x);
}



float h_asinhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "asinhf");
    return original_func(x);
}



long double h_asinhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "asinhl");
    return original_func(x);
}



long double h_asinl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "asinl");
    return original_func(x);
}



int h_asprintf (char **ptr, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char **ptr, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "asprintf");
    int  ret_val = original_func(ptr,template,ap);
    va_end(ap);
    return ret_val;
}



double h_atan (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "atan");
    return original_func(x);
}



double h_atan2 (double y, double x){
    double  (*original_func)(double y, double x);
    original_func = dlsym(RTLD_NEXT, "atan2");
    return original_func(y,x);
}



float h_atan2f (float y, float x){
    float  (*original_func)(float y, float x);
    original_func = dlsym(RTLD_NEXT, "atan2f");
    return original_func(y,x);
}



long double h_atan2l (long double y, long double x){
    long double  (*original_func)(long double y, long double x);
    original_func = dlsym(RTLD_NEXT, "atan2l");
    return original_func(y,x);
}



float h_atanf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "atanf");
    return original_func(x);
}



double h_atanh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "atanh");
    return original_func(x);
}



float h_atanhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "atanhf");
    return original_func(x);
}



long double h_atanhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "atanhl");
    return original_func(x);
}



long double h_atanl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "atanl");
    return original_func(x);
}



int h_atexit (void (*function) ()){
    int  (*original_func)(void (*function) ());
    original_func = dlsym(RTLD_NEXT, "atexit");
    return original_func(function);
}



double h_atof (const char *string){
    double  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atof");
    return original_func(string);
}



int h_atoi (const char *string){
    int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atoi");
    return original_func(string);
}



long int h_atol (const char *string){
    long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atol");
    return original_func(string);
}



long long int h_atoll (const char *string){
    long long int  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "atoll");
    return original_func(string);
}



int h_backtrace (void **buffer, int size){
    int  (*original_func)(void **buffer, int size);
    original_func = dlsym(RTLD_NEXT, "backtrace");
    return original_func(buffer,size);
}



char **h_backtrace_symbols (void *const *buffer, int size){
    char **  (*original_func)(void *const *buffer, int size);
    original_func = dlsym(RTLD_NEXT, "backtrace_symbols");
    return original_func(buffer,size);
}



void h_backtrace_symbols_fd (void *const *buffer, int size, int fd){
    void  (*original_func)(void *const *buffer, int size, int fd);
    original_func = dlsym(RTLD_NEXT, "backtrace_symbols_fd");
    original_func(buffer,size,fd);
}



char * h_basename (char *path){
    char *  (*original_func)(char *path);
    original_func = dlsym(RTLD_NEXT, "basename");
    return original_func(path);
}



int h_bcmp (const void *a1, const void *a2, size_t size){
    int  (*original_func)(const void *a1, const void *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "bcmp");
    return original_func(a1,a2,size);
}



void h_bcopy (const void *from, void *to, size_t size){
    void  (*original_func)(const void *from, void *to, size_t size);
    original_func = dlsym(RTLD_NEXT, "bcopy");
    original_func(from,to,size);
}



int h_bind (int socket, const struct sockaddr *addr, socklen_t length){
    int  (*original_func)(int socket, const struct sockaddr *addr, socklen_t length);
    original_func = dlsym(RTLD_NEXT, "bind");
    return original_func(socket,addr,length);
}



char * h_bindtextdomain (const char *domainname, const char *dirname){
    char *  (*original_func)(const char *domainname, const char *dirname);
    original_func = dlsym(RTLD_NEXT, "bindtextdomain");
    return original_func(domainname,dirname);
}



char * h_bind_textdomain_codeset (const char *domainname, const char *codeset){
    char *  (*original_func)(const char *domainname, const char *codeset);
    original_func = dlsym(RTLD_NEXT, "bind_textdomain_codeset");
    return original_func(domainname,codeset);
}




int h_brk (void *addr){
    int  (*original_func)(void *addr);
    original_func = dlsym(RTLD_NEXT, "brk");
    return original_func(addr);
}




void * h_bsearch (const void *key, const void *array, size_t count, size_t size, int(*compare)(const void *, const void *)){
    void *  (*original_func)(const void *key, const void *array, size_t count, size_t size, int(*compare)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "bsearch");
    return original_func(key,array,count,size,compare);
}



wint_t h_btowc (int c){
    wint_t  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "btowc");
    return original_func(c);
}



void h_bzero (void *block, size_t size){
    void  (*original_func)(void *block, size_t size);
    original_func = dlsym(RTLD_NEXT, "bzero");
    original_func(block,size);
}



double h_cabs (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cabs");
    return original_func(z);
}



float h_cabsf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cabsf");
    return original_func(z);
}



long double h_cabsl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cabsl");
    return original_func(z);
}



complex double h_cacos (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cacos");
    return original_func(z);
}



complex float h_cacosf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cacosf");
    return original_func(z);
}



complex double h_cacosh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cacosh");
    return original_func(z);
}



complex float h_cacoshf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cacoshf");
    return original_func(z);
}



complex long double h_cacoshl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cacoshl");
    return original_func(z);
}



complex long double h_cacosl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cacosl");
    return original_func(z);
}



void * h_calloc (size_t count, size_t eltsize){
    void *  (*original_func)(size_t count, size_t eltsize);
    original_func = dlsym(RTLD_NEXT, "calloc");
    return original_func(count,eltsize);
}



int h_canonicalize (double *cx, const double *x){
    int  (*original_func)(double *cx, const double *x);
    original_func = dlsym(RTLD_NEXT, "canonicalize");
    return original_func(cx,x);
}



int h_canonicalizef (float *cx, const float *x){
    int  (*original_func)(float *cx, const float *x);
    original_func = dlsym(RTLD_NEXT, "canonicalizef");
    return original_func(cx,x);
}



int h_canonicalizel (long double *cx, const long double *x){
    int  (*original_func)(long double *cx, const long double *x);
    original_func = dlsym(RTLD_NEXT, "canonicalizel");
    return original_func(cx,x);
}



char * h_canonicalize_file_name (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "canonicalize_file_name");
    return original_func(name);
}



double h_carg (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "carg");
    return original_func(z);
}



float h_cargf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cargf");
    return original_func(z);
}



long double h_cargl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cargl");
    return original_func(z);
}



complex double h_casin (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "casin");
    return original_func(z);
}



complex float h_casinf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "casinf");
    return original_func(z);
}



complex double h_casinh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "casinh");
    return original_func(z);
}



complex float h_casinhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "casinhf");
    return original_func(z);
}



complex long double h_casinhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "casinhl");
    return original_func(z);
}



complex long double h_casinl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "casinl");
    return original_func(z);
}



complex double h_catan (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "catan");
    return original_func(z);
}



complex float h_catanf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "catanf");
    return original_func(z);
}



complex double h_catanh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "catanh");
    return original_func(z);
}



complex float h_catanhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "catanhf");
    return original_func(z);
}



complex long double h_catanhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "catanhl");
    return original_func(z);
}



complex long double h_catanl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "catanl");
    return original_func(z);
}



int h_catclose (nl_catd catalog_desc){
    int  (*original_func)(nl_catd catalog_desc);
    original_func = dlsym(RTLD_NEXT, "catclose");
    return original_func(catalog_desc);
}



char * h_catgets (nl_catd catalog_desc, int set, int message, const char *string){
    char *  (*original_func)(nl_catd catalog_desc, int set, int message, const char *string);
    original_func = dlsym(RTLD_NEXT, "catgets");
    return original_func(catalog_desc,set,message,string);
}



nl_catd h_catopen (const char *cat_name, int flag){
    nl_catd  (*original_func)(const char *cat_name, int flag);
    original_func = dlsym(RTLD_NEXT, "catopen");
    return original_func(cat_name,flag);
}



double h_cbrt (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cbrt");
    return original_func(x);
}



float h_cbrtf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "cbrtf");
    return original_func(x);
}



long double h_cbrtl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "cbrtl");
    return original_func(x);
}



complex double h_ccos (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ccos");
    return original_func(z);
}



complex float h_ccosf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ccosf");
    return original_func(z);
}



complex double h_ccosh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ccosh");
    return original_func(z);
}



complex float h_ccoshf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ccoshf");
    return original_func(z);
}



complex long double h_ccoshl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ccoshl");
    return original_func(z);
}



complex long double h_ccosl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ccosl");
    return original_func(z);
}



double h_ceil (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "ceil");
    return original_func(x);
}



float h_ceilf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "ceilf");
    return original_func(x);
}



long double h_ceill (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "ceill");
    return original_func(x);
}



complex double h_cexp (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cexp");
    return original_func(z);
}



complex float h_cexpf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cexpf");
    return original_func(z);
}



complex long double h_cexpl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cexpl");
    return original_func(z);
}



speed_t h_cfgetispeed (const struct termios *termios_p){
    speed_t  (*original_func)(const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfgetispeed");
    return original_func(termios_p);
}



speed_t h_cfgetospeed (const struct termios *termios_p){
    speed_t  (*original_func)(const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfgetospeed");
    return original_func(termios_p);
}



void h_cfmakeraw (struct termios *termios_p){
    void  (*original_func)(struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "cfmakeraw");
    return original_func(termios_p);
}



int h_cfsetispeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetispeed");
    return original_func(termios_p,speed);
}



int h_cfsetospeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetospeed");
    return original_func(termios_p,speed);
}



int h_cfsetspeed (struct termios *termios_p, speed_t speed){
    int  (*original_func)(struct termios *termios_p, speed_t speed);
    original_func = dlsym(RTLD_NEXT, "cfsetspeed");
    return original_func(termios_p,speed);
}



int h_chdir (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "chdir");
    return original_func(filename);
}



int h_chmod (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "chmod");
    return original_func(filename,mode);
}



int h_chown (const char *filename, uid_t owner, gid_t group){
    int  (*original_func)(const char *filename, uid_t owner, gid_t group);
    original_func = dlsym(RTLD_NEXT, "chown");
    return original_func(filename,owner,group);
}



double h_cimag (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cimag");
    return original_func(z);
}



float h_cimagf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cimagf");
    return original_func(z);
}



long double h_cimagl (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cimagl");
    return original_func(z);
}



int h_clearenv (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "clearenv");
    return original_func();
}



void h_clearerr (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "clearerr");
    return original_func(stream);
}



void h_clearerr_unlocked (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "clearerr_unlocked");
    return original_func(stream);
}



clock_t h_clock (){
    clock_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "clock");
    return original_func();
}



int h_clock_getres (clockid_t clock, struct timespec *res){
    int  (*original_func)(clockid_t clock, struct timespec *res);
    original_func = dlsym(RTLD_NEXT, "clock_getres");
    return original_func(clock,res);
}



int h_clock_gettime (clockid_t clock, struct timespec *ts){
    int  (*original_func)(clockid_t clock, struct timespec *ts);
    original_func = dlsym(RTLD_NEXT, "clock_gettime");
    return original_func(clock,ts);
}



int h_clock_settime (clockid_t clock, const struct timespec *ts){
    int  (*original_func)(clockid_t clock, const struct timespec *ts);
    original_func = dlsym(RTLD_NEXT, "clock_settime");
    return original_func(clock,ts);
}



complex double h_clog (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "clog");
    return original_func(z);
}



complex double h_clog10 (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "clog10");
    return original_func(z);
}



complex float h_clog10f (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "clog10f");
    return original_func(z);
}



complex long double h_clog10l (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "clog10l");
    return original_func(z);
}



complex float h_clogf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "clogf");
    return original_func(z);
}



complex long double h_clogl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "clogl");
    return original_func(z);
}



int h_close (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "close");
    return original_func(filedes);
}



int h_closedir (DIR *dirstream){
    int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "closedir");
    return original_func(dirstream);
}



void h_closelog (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "closelog");
    return original_func();
}



size_t h_confstr (int parameter, char *buf, size_t len){
    size_t  (*original_func)(int parameter, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "confstr");
    return original_func(parameter,buf,len);
}



complex double h_conj (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "conj");
    return original_func(z);
}



complex float h_conjf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "conjf");
    return original_func(z);
}



complex long double h_conjl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "conjl");
    return original_func(z);
}



int h_connect (int socket, const struct sockaddr *addr, socklen_t length){
    int  (*original_func)(int socket, const struct sockaddr *addr, socklen_t length);
    original_func = dlsym(RTLD_NEXT, "connect");
    return original_func(socket,addr,length);
}



double h_copysign (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "copysign");
    return original_func(x,y);
}



float h_copysignf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "copysignf");
    return original_func(x,y);
}



long double h_copysignl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "copysignl");
    return original_func(x,y);
}



ssize_t h_copy_file_range (int inputfd, loff_t *inputpos, int outputfd, loff_t *outputpos, size_t length, unsigned int flags){
    ssize_t  (*original_func)(int inputfd, loff_t *inputpos, int outputfd, loff_t *outputpos, size_t length, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "copy_file_range");
    return original_func(inputfd,inputpos,outputfd,outputpos,length,flags);
}



double h_cos (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cos");
    return original_func(x);
}



float h_cosf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "cosf");
    return original_func(x);
}



double h_cosh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "cosh");
    return original_func(x);
}



float h_coshf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "coshf");
    return original_func(x);
}



long double h_coshl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "coshl");
    return original_func(x);
}



long double h_cosl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "cosl");
    return original_func(x);
}



complex double h_cpow (complex double base, complex double power){
    complex double  (*original_func)(complex double base, complex double power);
    original_func = dlsym(RTLD_NEXT, "cpow");
    return original_func(base,power);
}



complex float h_cpowf (complex float base, complex float power){
    complex float  (*original_func)(complex float base, complex float power);
    original_func = dlsym(RTLD_NEXT, "cpowf");
    return original_func(base,power);
}



complex long double h_cpowl (complex long double base, complex long double power){
    complex long double  (*original_func)(complex long double base, complex long double power);
    original_func = dlsym(RTLD_NEXT, "cpowl");
    return original_func(base,power);
}



complex double h_cproj (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "cproj");
    return original_func(z);
}



complex float h_cprojf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "cprojf");
    return original_func(z);
}



complex long double h_cprojl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "cprojl");
    return original_func(z);
}



double h_creal (complex double z){
    double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "creal");
    return original_func(z);
}



float h_crealf (complex float z){
    float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "crealf");
    return original_func(z);
}



long double h_creall (complex long double z){
    long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "creall");
    return original_func(z);
}



int h_creat (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "creat");
    return original_func(filename,mode);
}



int h_creat64 (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "creat64");
    return original_func(filename,mode);
}



char * h_crypt (const char *phrase, const char *salt){
    char *  (*original_func)(const char *phrase, const char *salt);
    original_func = dlsym(RTLD_NEXT, "crypt");
    return original_func(phrase,salt);
}



char * h_crypt_r (const char *phrase, const char *salt, struct crypt_data *data){
    char *  (*original_func)(const char *phrase, const char *salt, struct crypt_data *data);
    original_func = dlsym(RTLD_NEXT, "crypt_r");
    return original_func(phrase,salt,data);
}



complex double h_csin (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csin");
    return original_func(z);
}



complex float h_csinf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csinf");
    return original_func(z);
}



complex double h_csinh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csinh");
    return original_func(z);
}



complex float h_csinhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csinhf");
    return original_func(z);
}



complex long double h_csinhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csinhl");
    return original_func(z);
}



complex long double h_csinl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csinl");
    return original_func(z);
}



complex double h_csqrt (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "csqrt");
    return original_func(z);
}



complex float h_csqrtf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "csqrtf");
    return original_func(z);
}



complex long double h_csqrtl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "csqrtl");
    return original_func(z);
}



complex double h_ctan (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ctan");
    return original_func(z);
}



complex float h_ctanf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ctanf");
    return original_func(z);
}



complex double h_ctanh (complex double z){
    complex double  (*original_func)(complex double z);
    original_func = dlsym(RTLD_NEXT, "ctanh");
    return original_func(z);
}



complex float h_ctanhf (complex float z){
    complex float  (*original_func)(complex float z);
    original_func = dlsym(RTLD_NEXT, "ctanhf");
    return original_func(z);
}



complex long double h_ctanhl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ctanhl");
    return original_func(z);
}



complex long double h_ctanl (complex long double z){
    complex long double  (*original_func)(complex long double z);
    original_func = dlsym(RTLD_NEXT, "ctanl");
    return original_func(z);
}



char * h_ctermid (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "ctermid");
    return original_func(string);
}



char * h_ctime (const time_t *time){
    char *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "ctime");
    return original_func(time);
}



char * h_ctime_r (const time_t *time, char *buffer){
    char *  (*original_func)(const time_t *time, char *buffer);
    original_func = dlsym(RTLD_NEXT, "ctime_r");
    return original_func(time,buffer);
}



char * h_cuserid (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "cuserid");
    return original_func(string);
}



double h_daddl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "daddl");
    return original_func(x,y);
}



char * h_dcgettext (const char *domainname, const char *msgid, int category){
    char *  (*original_func)(const char *domainname, const char *msgid, int category);
    original_func = dlsym(RTLD_NEXT, "dcgettext");
    return original_func(domainname,msgid,category);
}



char * h_dcngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n, int category){
    char *  (*original_func)(const char *domain, const char *msgid1, const char *msgid2, unsigned long int n, int category);
    original_func = dlsym(RTLD_NEXT, "dcngettext");
    return original_func(domain,msgid1,msgid2,n,category);
}



double h_ddivl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "ddivl");
    return original_func(x,y);
}



char * h_dgettext (const char *domainname, const char *msgid){
    char *  (*original_func)(const char *domainname, const char *msgid);
    original_func = dlsym(RTLD_NEXT, "dgettext");
    return original_func(domainname,msgid);
}



double h_difftime (time_t end, time_t begin){
    double  (*original_func)(time_t end, time_t begin);
    original_func = dlsym(RTLD_NEXT, "difftime");
    return original_func(end,begin);
}



int h_dirfd (DIR *dirstream){
    int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "dirfd");
    return original_func(dirstream);
}



char * h_dirname (char *path){
    char *  (*original_func)(char *path);
    original_func = dlsym(RTLD_NEXT, "dirname");
    return original_func(path);
}



div_t h_div (int numerator, int denominator){
    div_t  (*original_func)(int numerator, int denominator);
    original_func = dlsym(RTLD_NEXT, "div");
    return original_func(numerator,denominator);
}



double h_dmull (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "dmull");
    return original_func(x,y);
}



char * h_dngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n){
    char *  (*original_func)(const char *domain, const char *msgid1, const char *msgid2, unsigned long int n);
    original_func = dlsym(RTLD_NEXT, "dngettext");
    return original_func(domain,msgid1,msgid2,n);
}



double h_drand48 (){
    double  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "drand48");
    return original_func();
}



int h_drand48_r (struct drand48_data *buffer, double *result){
    int  (*original_func)(struct drand48_data *buffer, double *result);
    original_func = dlsym(RTLD_NEXT, "drand48_r");
    return original_func(buffer,result);
}



double h_drem (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "drem");
    return original_func(numerator,denominator);
}



float h_dremf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "dremf");
    return original_func(numerator,denominator);
}



long double h_dreml (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "dreml");
    return original_func(numerator,denominator);
}



double h_dsubl (long double x, long double y){
    double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "dsubl");
    return original_func(x,y);
}



int h_dup (int old){
    int  (*original_func)(int old);
    original_func = dlsym(RTLD_NEXT, "dup");
    return original_func(old);
}



int h_dup2 (int old, int new){
    int  (*original_func)(int old, int new);
    original_func = dlsym(RTLD_NEXT, "dup2");
    return original_func(old,new);
}



char * h_ecvt (double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "ecvt");
    return original_func(value,ndigit,decpt,neg);
}



int h_ecvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ecvt_r");
    return original_func(value,ndigit,decpt,neg,buf,len);
}



void h_endfsent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endfsent");
    return original_func();
}



void h_endgrent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endgrent");
    return original_func();
}



void h_endhostent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endhostent");
    return original_func();
}



int h_endmntent (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "endmntent");
    return original_func(stream);
}



void h_endnetent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endnetent");
    return original_func();
}



void h_endnetgrent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endnetgrent");
    return original_func();
}



void h_endprotoent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endprotoent");
    return original_func();
}



void h_endpwent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endpwent");
    return original_func();
}



void h_endservent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endservent");
    return original_func();
}



void h_endutent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endutent");
    return original_func();
}



void h_endutxent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "endutxent");
    return original_func();
}



error_t h_envz_add (char **envz, size_t *envz_len, const char *name, const char *value){
    error_t  (*original_func)(char **envz, size_t *envz_len, const char *name, const char *value);
    original_func = dlsym(RTLD_NEXT, "envz_add");
    return original_func(envz,envz_len,name,value);
}



char * h_envz_entry (const char *envz, size_t envz_len, const char *name){
    char *  (*original_func)(const char *envz, size_t envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_entry");
    return original_func(envz,envz_len,name);
}



char * h_envz_get (const char *envz, size_t envz_len, const char *name){
    char *  (*original_func)(const char *envz, size_t envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_get");
    return original_func(envz,envz_len,name);
}



error_t h_envz_merge (char **envz, size_t *envz_len, const char *envz2, size_t envz2_len, int override){
    error_t  (*original_func)(char **envz, size_t *envz_len, const char *envz2, size_t envz2_len, int override);
    original_func = dlsym(RTLD_NEXT, "envz_merge");
    return original_func(envz,envz_len,envz2,envz2_len,override);
}



void h_envz_remove (char **envz, size_t *envz_len, const char *name){
    void  (*original_func)(char **envz, size_t *envz_len, const char *name);
    original_func = dlsym(RTLD_NEXT, "envz_remove");
    return original_func(envz,envz_len,name);
}



void h_envz_strip (char **envz, size_t *envz_len){
    void  (*original_func)(char **envz, size_t *envz_len);
    original_func = dlsym(RTLD_NEXT, "envz_strip");
    return original_func(envz,envz_len);
}



double h_erand48 (unsigned short int xsubi[3]){
    double  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "erand48");
    return original_func(xsubi);
}



int h_erand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, double *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, double *result);
    original_func = dlsym(RTLD_NEXT, "erand48_r");
    return original_func(xsubi,buffer,result);
}



double h_erf (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "erf");
    return original_func(x);
}



double h_erfc (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "erfc");
    return original_func(x);
}



float h_erfcf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "erfcf");
    return original_func(x);
}



long double h_erfcl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "erfcl");
    return original_func(x);
}



float h_erff (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "erff");
    return original_func(x);
}



long double h_erfl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "erfl");
    return original_func(x);
}



void h_err (int status, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "err");
    
    original_func(status,format,ap);
    va_end(ap);
    return;
}




void h_error (int status, int errnum, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, int errnum, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "error");
    original_func(status,errnum,format,ap);
    va_end(ap);
    return;
}




void h_error_at_line (int status, int errnum, const char *fname, unsigned int lineno, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, int errnum, const char *fname, unsigned int lineno, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "error_at_line");
    original_func(status,errnum,fname,lineno,format,ap);
    va_end(ap);
    return;
}




void h_errx (int status, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int status, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "errx");
    original_func(status,format,ap);
    va_end(ap);
    return;
}




int h_execl (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execl");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}



int h_execle (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execle");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}



int h_execlp (const char *filename, const char *arg0, ...){
    va_list ap;
    va_start(ap, arg0);
    int  (*original_func)(const char *filename, const char *arg0, ...);
    original_func = dlsym(RTLD_NEXT, "execlp");
    int  ret_val = original_func(filename,arg0,ap);
    va_end(ap);
    return ret_val;
}



int h_execv (const char *filename, char *const argv[]){
    int  (*original_func)(const char *filename, char *const argv[]);
    original_func = dlsym(RTLD_NEXT, "execv");
    return original_func(filename,argv);
}




int h_execve (const char *filename, char *const argv[], char *const env[]){
    int  (*original_func)(const char *filename, char *const argv[], char *const env[]);
    original_func = dlsym(RTLD_NEXT, "execve");
    return original_func(filename,argv,env);
}




int h_execvp (const char *filename, char *const argv[]){
    int  (*original_func)(const char *filename, char *const argv[]);
    original_func = dlsym(RTLD_NEXT, "execvp");
    return original_func(filename,argv);
}



void h_exit (int status){
    void  (*original_func)(int status);
    original_func = dlsym(RTLD_NEXT, "exit");
    original_func(status);
}



double h_exp (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp");
    return original_func(x);
}



double h_exp10 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp10");
    return original_func(x);
}



float h_exp10f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "exp10f");
    return original_func(x);
}



long double h_exp10l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "exp10l");
    return original_func(x);
}



double h_exp2 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "exp2");
    return original_func(x);
}



float h_exp2f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "exp2f");
    return original_func(x);
}



long double h_exp2l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "exp2l");
    return original_func(x);
}



float h_expf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "expf");
    return original_func(x);
}



long double h_expl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "expl");
    return original_func(x);
}



void h_explicit_bzero (void *block, size_t len){
    void  (*original_func)(void *block, size_t len);
    original_func = dlsym(RTLD_NEXT, "explicit_bzero");
    return original_func(block,len);
}



double h_expm1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "expm1");
    return original_func(x);
}



float h_expm1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "expm1f");
    return original_func(x);
}



long double h_expm1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "expm1l");
    return original_func(x);
}



double h_fabs (double number){
    double  (*original_func)(double number);
    original_func = dlsym(RTLD_NEXT, "fabs");
    return original_func(number);
}



float h_fabsf (float number){
    float  (*original_func)(float number);
    original_func = dlsym(RTLD_NEXT, "fabsf");
    return original_func(number);
}



long double h_fabsl (long double number){
    long double  (*original_func)(long double number);
    original_func = dlsym(RTLD_NEXT, "fabsl");
    return original_func(number);
}



float h_fadd (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fadd");
    return original_func(x,y);
}



float h_faddl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "faddl");
    return original_func(x,y);
}



int h_fchdir (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "fchdir");
    return original_func(filedes);
}



int h_fchmod (int filedes, mode_t mode){
    int  (*original_func)(int filedes, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "fchmod");
    return original_func(filedes,mode);
}



int h_fchown (int filedes, uid_t owner, gid_t group){
    int  (*original_func)(int filedes, uid_t owner, gid_t group);
    original_func = dlsym(RTLD_NEXT, "fchown");
    return original_func(filedes,owner,group);
}



int h_fclose (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fclose");
    return original_func(stream);
}



int h_fcloseall (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "fcloseall");
    return original_func();
}



int h_fcntl (int filedes, int command, ...){
    va_list ap;
    va_start(ap, command);
    // void* arg = va_arg(ap, void*);
    int  (*original_func)(int filedes, int command, ...);
    original_func = dlsym(RTLD_NEXT, "fcntl");
    int  ret_val = original_func(filedes,command,ap);
    va_end(ap);
    return ret_val;
}



char * h_fcvt (double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "fcvt");
    return original_func(value,ndigit,decpt,neg);
}



int h_fcvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "fcvt_r");
    return original_func(value,ndigit,decpt,neg,buf,len);
}



int h_fdatasync (int fildes){
    int  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "fdatasync");
    return original_func(fildes);
}



double h_fdim (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fdim");
    return original_func(x,y);
}



float h_fdimf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fdimf");
    return original_func(x,y);
}



long double h_fdiml (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fdiml");
    return original_func(x,y);
}



float h_fdiv (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fdiv");
    return original_func(x,y);
}



float h_fdivl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fdivl");
    return original_func(x,y);
}



FILE * h_fdopen (int filedes, const char *opentype){
    FILE *  (*original_func)(int filedes, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fdopen");
    return original_func(filedes,opentype);
}



DIR * h_fdopendir (int fd){
    DIR *  (*original_func)(int fd);
    original_func = dlsym(RTLD_NEXT, "fdopendir");
    return original_func(fd);
}



int h_feclearexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feclearexcept");
    return original_func(excepts);
}



int h_fedisableexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fedisableexcept");
    return original_func(excepts);
}



int h_feenableexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feenableexcept");
    return original_func(excepts);
}



int h_fegetenv (fenv_t *envp){
    int  (*original_func)(fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "fegetenv");
    return original_func(envp);
}



int h_fegetexcept (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "fegetexcept");
    return original_func();
}



int h_fegetexceptflag (fexcept_t *flagp, int excepts){
    int  (*original_func)(fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fegetexceptflag");
    return original_func(flagp,excepts);
}



// int h_fegetmode (femode_t *modep){
//     int  (*original_func)(femode_t *modep);
//     original_func = dlsym(RTLD_NEXT, "fegetmode");
//     return original_func(modep);
// }



int h_fegetround (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "fegetround");
    return original_func();
}



int h_feholdexcept (fenv_t *envp){
    int  (*original_func)(fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "feholdexcept");
    return original_func(envp);
}



int h_feof (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "feof");
    return original_func(stream);
}



int h_feof_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "feof_unlocked");
    return original_func(stream);
}



int h_feraiseexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "feraiseexcept");
    return original_func(excepts);
}




int h_ferror (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ferror");
    return original_func(stream);
}



int h_ferror_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ferror_unlocked");
    return original_func(stream);
}



int h_fesetenv (const fenv_t *envp){
    int  (*original_func)(const fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "fesetenv");
    return original_func(envp);
}



int h_fesetexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fesetexcept");
    return original_func(excepts);
}



int h_fesetexceptflag (const fexcept_t *flagp, int excepts){
    int  (*original_func)(const fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fesetexceptflag");
    return original_func(flagp,excepts);
}



// int h_fesetmode (const femode_t *modep){
//     int  (*original_func)(const femode_t *modep);
//     original_func = dlsym(RTLD_NEXT, "fesetmode");
//     return original_func(modep);
// }



int h_fesetround (int round){
    int  (*original_func)(int round);
    original_func = dlsym(RTLD_NEXT, "fesetround");
    return original_func(round);
}



int h_fetestexcept (int excepts){
    int  (*original_func)(int excepts);
    original_func = dlsym(RTLD_NEXT, "fetestexcept");
    return original_func(excepts);
}



int h_fetestexceptflag (const fexcept_t *flagp, int excepts){
    int  (*original_func)(const fexcept_t *flagp, int excepts);
    original_func = dlsym(RTLD_NEXT, "fetestexceptflag");
    return original_func(flagp,excepts);
}



int h_feupdateenv (const fenv_t *envp){
    int  (*original_func)(const fenv_t *envp);
    original_func = dlsym(RTLD_NEXT, "feupdateenv");
    return original_func(envp);
}



int h_fexecve (int fd,  char *const argv[], char *const env[]){
    int  (*original_func)(int fd,  char *const argv[], char *const env[]);
    original_func = dlsym(RTLD_NEXT, "fexecve");
    return original_func(fd,argv,env);
}



int h_fflush (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fflush");
    return original_func(stream);
}



int h_fflush_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fflush_unlocked");
    return original_func(stream);
}



int h_fgetc (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetc");
    return original_func(stream);
}



int h_fgetc_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetc_unlocked");
    return original_func(stream);
}



struct group * h_fgetgrent (FILE *stream){
    struct group *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetgrent");
    return original_func(stream);
}



int h_fgetgrent_r (FILE *stream, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(FILE *stream, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "fgetgrent_r");
    return original_func(stream,result_buf,buffer,buflen,result);
}



int h_fgetpos (FILE *stream, fpos_t *position){
    int  (*original_func)(FILE *stream, fpos_t *position);
    original_func = dlsym(RTLD_NEXT, "fgetpos");
    return original_func(stream,position);
}



// int h_fgetpos64 (FILE *stream, fpos64_t *position){
//     int  (*original_func)(FILE *stream, fpos64_t *position);
//     original_func = dlsym(RTLD_NEXT, "fgetpos64");
//     return original_func(stream,position);
// }



struct passwd * h_fgetpwent (FILE *stream){
    struct passwd *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetpwent");
    return original_func(stream);
}



int h_fgetpwent_r (FILE *stream, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(FILE *stream, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "fgetpwent_r");
    return original_func(stream,result_buf,buffer,buflen,result);
}



char * h_fgets (char *s, int count, FILE *stream){
    char *  (*original_func)(char *s, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgets");
    return original_func(s,count,stream);
}



char * h_fgets_unlocked (char *s, int count, FILE *stream){
    char *  (*original_func)(char *s, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgets_unlocked");
    return original_func(s,count,stream);
}



wint_t h_fgetwc (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetwc");
    return original_func(stream);
}



wint_t h_fgetwc_unlocked (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetwc_unlocked");
    return original_func(stream);
}



wchar_t * h_fgetws (wchar_t *ws, int count, FILE *stream){
    wchar_t *  (*original_func)(wchar_t *ws, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetws");
    return original_func(ws,count,stream);
}



wchar_t * h_fgetws_unlocked (wchar_t *ws, int count, FILE *stream){
    wchar_t *  (*original_func)(wchar_t *ws, int count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fgetws_unlocked");
    return original_func(ws,count,stream);
}



int h_fileno (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fileno");
    return original_func(stream);
}



int h_fileno_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fileno_unlocked");
    return original_func(stream);
}



int h_finite (double x){
    int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "finite");
    return original_func(x);
}



int h_finitef (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "finitef");
    return original_func(x);
}



int h_finitel (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "finitel");
    return original_func(x);
}



void h_flockfile (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "flockfile");
    return original_func(stream);
}



double h_floor (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "floor");
    return original_func(x);
}



float h_floorf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "floorf");
    return original_func(x);
}



long double h_floorl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "floorl");
    return original_func(x);
}



double h_fma (double x, double y, double z){
    double  (*original_func)(double x, double y, double z);
    original_func = dlsym(RTLD_NEXT, "fma");
    return original_func(x,y,z);
}



float h_fmaf (float x, float y, float z){
    float  (*original_func)(float x, float y, float z);
    original_func = dlsym(RTLD_NEXT, "fmaf");
    return original_func(x,y,z);
}



long double h_fmal (long double x, long double y, long double z){
    long double  (*original_func)(long double x, long double y, long double z);
    original_func = dlsym(RTLD_NEXT, "fmal");
    return original_func(x,y,z);
}



double h_fmax (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmax");
    return original_func(x,y);
}



float h_fmaxf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fmaxf");
    return original_func(x,y);
}



long double h_fmaxl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmaxl");
    return original_func(x,y);
}



double h_fmaxmag (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmaxmag");
    return original_func(x,y);
}



float h_fmaxmagf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fmaxmagf");
    return original_func(x,y);
}



long double h_fmaxmagl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmaxmagl");
    return original_func(x,y);
}



FILE * h_fmemopen (void *buf, size_t size, const char *opentype){
    FILE *  (*original_func)(void *buf, size_t size, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fmemopen");
    return original_func(buf,size,opentype);
}



double h_fmin (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmin");
    return original_func(x,y);
}



float h_fminf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fminf");
    return original_func(x,y);
}



long double h_fminl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fminl");
    return original_func(x,y);
}



double h_fminmag (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fminmag");
    return original_func(x,y);
}



float h_fminmagf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "fminmagf");
    return original_func(x,y);
}



long double h_fminmagl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fminmagl");
    return original_func(x,y);
}



double h_fmod (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "fmod");
    return original_func(numerator,denominator);
}



float h_fmodf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "fmodf");
    return original_func(numerator,denominator);
}



long double h_fmodl (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "fmodl");
    return original_func(numerator,denominator);
}



int h_fmtmsg (long int classification, const char *label, int severity, const char *text, const char *action, const char *tag){
    int  (*original_func)(long int classification, const char *label, int severity, const char *text, const char *action, const char *tag);
    original_func = dlsym(RTLD_NEXT, "fmtmsg");
    return original_func(classification,label,severity,text,action,tag);
}



float h_fmul (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fmul");
    return original_func(x,y);
}



float h_fmull (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fmull");
    return original_func(x,y);
}



int h_fnmatch (const char *pattern, const char *string, int flags){
    int  (*original_func)(const char *pattern, const char *string, int flags);
    original_func = dlsym(RTLD_NEXT, "fnmatch");
    return original_func(pattern,string,flags);
}



FILE * h_fopen (const char *filename, const char *opentype){
    FILE *  (*original_func)(const char *filename, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fopen");
    return original_func(filename,opentype);
}




FILE * h_fopen64 (const char *filename, const char *opentype){
    FILE *  (*original_func)(const char *filename, const char *opentype);
    original_func = dlsym(RTLD_NEXT, "fopen64");
    return original_func(filename,opentype);
}



FILE * h_fopencookie (void *cookie, const char *opentype, cookie_io_functions_t io_functions){
    FILE *  (*original_func)(void *cookie, const char *opentype, cookie_io_functions_t io_functions);
    original_func = dlsym(RTLD_NEXT, "fopencookie");
    return original_func(cookie,opentype,io_functions);
}



pid_t h_fork (void){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "fork");
    return original_func();
}



int h_forkpty (int *amaster, char *name, const struct termios *termp, const struct winsize *winp){
    int  (*original_func)(int *amaster, char *name, const struct termios *termp, const struct winsize *winp);
    original_func = dlsym(RTLD_NEXT, "forkpty");
    return original_func(amaster,name,termp,winp);
}



long int h_fpathconf (int filedes, int parameter){
    long int  (*original_func)(int filedes, int parameter);
    original_func = dlsym(RTLD_NEXT, "fpathconf");
    return original_func(filedes,parameter);
}




int h_fprintf (FILE *stream, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "fprintf");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}






int h_fputc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputc");
    return original_func(c,stream);
}



int h_fputc_unlocked (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputc_unlocked");
    return original_func(c,stream);
}



int h_fputs (const char *s, FILE *stream){
    int  (*original_func)(const char *s, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputs");
    return original_func(s,stream);
}



int h_fputs_unlocked (const char *s, FILE *stream){
    int  (*original_func)(const char *s, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputs_unlocked");
    return original_func(s,stream);
}



wint_t h_fputwc (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputwc");
    return original_func(wc,stream);
}



wint_t h_fputwc_unlocked (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputwc_unlocked");
    return original_func(wc,stream);
}



int h_fputws (const wchar_t *ws, FILE *stream){
    int  (*original_func)(const wchar_t *ws, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputws");
    return original_func(ws,stream);
}



int h_fputws_unlocked (const wchar_t *ws, FILE *stream){
    int  (*original_func)(const wchar_t *ws, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fputws_unlocked");
    return original_func(ws,stream);
}



size_t h_fread (void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fread");
    return original_func(data,size,count,stream);
}




size_t h_fread_unlocked (void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fread_unlocked");
    return original_func(data,size,count,stream);
}



void h_free (void *ptr){
    void  (*original_func)(void *ptr);
    original_func = dlsym(RTLD_NEXT, "free");
    return original_func(ptr);
}



FILE * h_freopen (const char *filename, const char *opentype, FILE *stream){
    FILE *  (*original_func)(const char *filename, const char *opentype, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "freopen");
    return original_func(filename,opentype,stream);
}



FILE * h_freopen64 (const char *filename, const char *opentype, FILE *stream){
    FILE *  (*original_func)(const char *filename, const char *opentype, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "freopen64");
    return original_func(filename,opentype,stream);
}



double h_frexp (double value, int *exponent){
    double  (*original_func)(double value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexp");
    return original_func(value,exponent);
}



float h_frexpf (float value, int *exponent){
    float  (*original_func)(float value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexpf");
    return original_func(value,exponent);
}



long double h_frexpl (long double value, int *exponent){
    long double  (*original_func)(long double value, int *exponent);
    original_func = dlsym(RTLD_NEXT, "frexpl");
    return original_func(value,exponent);
}



intmax_t h_fromfp (double x, int round, unsigned int width){
    intmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfp");
    return original_func(x,round,width);
}



intmax_t h_fromfpf (float x, int round, unsigned int width){
    intmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpf");
    return original_func(x,round,width);
}



intmax_t h_fromfpl (long double x, int round, unsigned int width){
    intmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpl");
    return original_func(x,round,width);
}



intmax_t h_fromfpx (double x, int round, unsigned int width){
    intmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpx");
    return original_func(x,round,width);
}



intmax_t h_fromfpxf (float x, int round, unsigned int width){
    intmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpxf");
    return original_func(x,round,width);
}



intmax_t h_fromfpxl (long double x, int round, unsigned int width){
    intmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "fromfpxl");
    return original_func(x,round,width);
}



int h_fscanf (FILE *stream, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "fscanf");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}



int h_fseek (FILE *stream, long int offset, int whence){
    int  (*original_func)(FILE *stream, long int offset, int whence);
    original_func = dlsym(RTLD_NEXT, "fseek");
    return original_func(stream,offset,whence);
}



int h_fseeko (FILE *stream, off_t offset, int whence){
    int  (*original_func)(FILE *stream, off_t offset, int whence);
    original_func = dlsym(RTLD_NEXT, "fseeko");
    return original_func(stream,offset,whence);
}



// int h_fseeko64 (FILE *stream, off64_t offset, int whence){
//     int  (*original_func)(FILE *stream, off64_t offset, int whence);
//     original_func = dlsym(RTLD_NEXT, "fseeko64");
//     return original_func(stream,offset,whence);
// }



int h_fsetpos (FILE *stream, const fpos_t *position){
    int  (*original_func)(FILE *stream, const fpos_t *position);
    original_func = dlsym(RTLD_NEXT, "fsetpos");
    return original_func(stream,position);
}




int h_fsetpos64 (FILE *stream, const fpos64_t *position){
    int  (*original_func)(FILE *stream, const fpos64_t *position);
    original_func = dlsym(RTLD_NEXT, "fsetpos64");
    return original_func(stream,position);
}



int h_fstat (int filedes, struct stat *buf){
    int  (*original_func)(int filedes, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "fstat");
    return original_func(filedes,buf);
}



int h_fstat64 (int filedes, struct stat64 *buf){
    int  (*original_func)(int filedes, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "fstat64");
    return original_func(filedes,buf);
}



float h_fsub (double x, double y){
    float  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "fsub");
    return original_func(x,y);
}



float h_fsubl (long double x, long double y){
    float  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "fsubl");
    return original_func(x,y);
}



int h_fsync (int fildes){
    int  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "fsync");
    return original_func(fildes);
}



long int h_ftell (FILE *stream){
    long int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftell");
    return original_func(stream);
}



off_t h_ftello (FILE *stream){
    off_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftello");
    return original_func(stream);
}



off64_t h_ftello64 (FILE *stream){
    off64_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftello64");
    return original_func(stream);
}



int h_ftruncate (int fd, off_t length){
    int  (*original_func)(int fd, off_t length);
    original_func = dlsym(RTLD_NEXT, "ftruncate");
    return original_func(fd,length);
}



// int h_ftruncate64 (int id, off64_t length){
//     int  (*original_func)(int id, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "ftruncate64");
//     return original_func(id,length);
// }



int h_ftrylockfile (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ftrylockfile");
    return original_func(stream);
}



int h_ftw (const char *filename, __ftw_func_t func, int descriptors){
    int  (*original_func)(const char *filename, __ftw_func_t func, int descriptors);
    original_func = dlsym(RTLD_NEXT, "ftw");
    return original_func(filename,func,descriptors);
}



int h_ftw64 (const char *filename, __ftw64_func_t func, int descriptors){
    int  (*original_func)(const char *filename, __ftw64_func_t func, int descriptors);
    original_func = dlsym(RTLD_NEXT, "ftw64");
    return original_func(filename,func,descriptors);
}



void h_funlockfile (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "funlockfile");
    return original_func(stream);
}



int h_futimes (int fd, const struct timeval tvp[2]){
    int  (*original_func)(int fd, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "futimes");
    return original_func(fd,tvp);
}



int h_fwide (FILE *stream, int mode){
    int  (*original_func)(FILE *stream, int mode);
    original_func = dlsym(RTLD_NEXT, "fwide");
    return original_func(stream,mode);
}



int h_fwprintf (FILE *stream, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "fwprintf");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}



size_t h_fwrite (const void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(const void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fwrite");
    return original_func(data,size,count,stream);
}



size_t h_fwrite_unlocked (const void *data, size_t size, size_t count, FILE *stream){
    size_t  (*original_func)(const void *data, size_t size, size_t count, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "fwrite_unlocked");
    return original_func(data,size,count,stream);
}



int h_fwscanf (FILE *stream, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(FILE *stream, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "fwscanf");
    int  ret_val = original_func(stream,template,ap);
    va_end(ap);
    return ret_val;
}



double h_gamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "gamma");
    return original_func(x);
}



float h_gammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "gammaf");
    return original_func(x);
}



long double h_gammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "gammal");
    return original_func(x);
}



char * h_gcvt (double value, int ndigit, char *buf){
    char *  (*original_func)(double value, int ndigit, char *buf);
    original_func = dlsym(RTLD_NEXT, "gcvt");
    return original_func(value,ndigit,buf);
}



unsigned long int h_getauxval (unsigned long int type){
    unsigned long int  (*original_func)(unsigned long int type);
    original_func = dlsym(RTLD_NEXT, "getauxval");
    return original_func(type);
}



int h_getc (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getc");
    return original_func(stream);
}



int h_getchar (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getchar");
    return original_func();
}



int h_getchar_unlocked (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getchar_unlocked");
    return original_func();
}



int h_getcontext (ucontext_t *ucp){
    int  (*original_func)(ucontext_t *ucp);
    original_func = dlsym(RTLD_NEXT, "getcontext");
    return original_func(ucp);
}



int h_getcpu (unsigned int *cpu, unsigned int *node){
    int  (*original_func)(unsigned int *cpu, unsigned int *node);
    original_func = dlsym(RTLD_NEXT, "getcpu");
    return original_func(cpu,node);
}



char * h_getcwd (char *buffer, size_t size){
    char *  (*original_func)(char *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "getcwd");
    return original_func(buffer,size);
}



int h_getc_unlocked (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getc_unlocked");
    return original_func(stream);
}



struct tm * h_getdate (const char *string){
    struct tm *  (*original_func)(const char *string);
    original_func = dlsym(RTLD_NEXT, "getdate");
    return original_func(string);
}



int h_getdate_r (const char *string, struct tm *tp){
    int  (*original_func)(const char *string, struct tm *tp);
    original_func = dlsym(RTLD_NEXT, "getdate_r");
    return original_func(string,tp);
}



ssize_t h_getdelim (char **lineptr, size_t *n, int delimiter, FILE *stream){
    ssize_t  (*original_func)(char **lineptr, size_t *n, int delimiter, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getdelim");
    return original_func(lineptr,n,delimiter,stream);
}



ssize_t h_getdents64 (int fd, void *buffer, size_t length){
    ssize_t  (*original_func)(int fd, void *buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "getdents64");
    return original_func(fd,buffer,length);
}



int h_getdomainnname (char *name, size_t length){
    int  (*original_func)(char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "getdomainnname");
    return original_func(name,length);
}



gid_t h_getegid (){
    gid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getegid");
    return original_func();
}



int h_getentropy (void *buffer, size_t length){
    int  (*original_func)(void *buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "getentropy");
    return original_func(buffer,length);
}



char * h_getenv (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getenv");
    return original_func(name);
}



uid_t h_geteuid (){
    uid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "geteuid");
    return original_func();
}



struct fstab * h_getfsent (){
    struct fstab *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getfsent");
    return original_func();
}



struct fstab * h_getfsfile (const char *name){
    struct fstab *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getfsfile");
    return original_func(name);
}



struct fstab * h_getfsspec (const char *name){
    struct fstab *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getfsspec");
    return original_func(name);
}



gid_t h_getgid (){
    gid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getgid");
    return original_func();
}



struct group * h_getgrent (){
    struct group *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getgrent");
    return original_func();
}



int h_getgrent_r (struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrent_r");
    return original_func(result_buf,buffer,buflen,result);
}



struct group * h_getgrgid (gid_t gid){
    struct group *  (*original_func)(gid_t gid);
    original_func = dlsym(RTLD_NEXT, "getgrgid");
    return original_func(gid);
}



int h_getgrgid_r (gid_t gid, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(gid_t gid, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrgid_r");
    return original_func(gid,result_buf,buffer,buflen,result);
}



struct group * h_getgrnam (const char *name){
    struct group *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getgrnam");
    return original_func(name);
}



int h_getgrnam_r (const char *name, struct group *result_buf, char *buffer, size_t buflen, struct group **result){
    int  (*original_func)(const char *name, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
    original_func = dlsym(RTLD_NEXT, "getgrnam_r");
    return original_func(name,result_buf,buffer,buflen,result);
}



int h_getgrouplist (const char *user, gid_t group, gid_t *groups, int *ngroups){
    int  (*original_func)(const char *user, gid_t group, gid_t *groups, int *ngroups);
    original_func = dlsym(RTLD_NEXT, "getgrouplist");
    return original_func(user,group,groups,ngroups);
}



int h_getgroups (int count, gid_t *groups){
    int  (*original_func)(int count, gid_t *groups);
    original_func = dlsym(RTLD_NEXT, "getgroups");
    return original_func(count,groups);
}



struct hostent * h_gethostbyaddr (const void *addr, socklen_t length, int format){
    struct hostent *  (*original_func)(const void *addr, socklen_t length, int format);
    original_func = dlsym(RTLD_NEXT, "gethostbyaddr");
    return original_func(addr,length,format);
}



int h_gethostbyaddr_r (const void *addr, socklen_t length, int format, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const void *addr, socklen_t length, int format, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyaddr_r");
    return original_func(addr,length,format,result_buf,buf,buflen,result,h_errnop);
}



struct hostent * h_gethostbyname (const char *name){
    struct hostent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "gethostbyname");
    return original_func(name);
}



struct hostent * h_gethostbyname2 (const char *name, int af){
    struct hostent *  (*original_func)(const char *name, int af);
    original_func = dlsym(RTLD_NEXT, "gethostbyname2");
    return original_func(name,af);
}



int h_gethostbyname2_r (const char *name, int af, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const char *name, int af, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyname2_r");
    return original_func(name,af,result_buf,buf,buflen,result,h_errnop);
}



int h_gethostbyname_r (const char *restrict name, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop){
    int  (*original_func)(const char *restrict name, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
    original_func = dlsym(RTLD_NEXT, "gethostbyname_r");
    return original_func(name,result_buf,buf,buflen,result,h_errnop);
}



struct hostent * h_gethostent (){
    struct hostent *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "gethostent");
    return original_func();
}



long int h_gethostid (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "gethostid");
    return original_func();
}



int h_gethostname (char *name, size_t size){
    int  (*original_func)(char *name, size_t size);
    original_func = dlsym(RTLD_NEXT, "gethostname");
    return original_func(name,size);
}



// int h_getitimer (int which, struct itimerval *old){
//     int  (*original_func)(int which, struct itimerval *old);
//     original_func = dlsym(RTLD_NEXT, "getitimer");
//     return original_func(which,old);
// }

// 

ssize_t h_getline (char **lineptr, size_t *n, FILE *stream){
    ssize_t  (*original_func)(char **lineptr, size_t *n, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getline");
    return original_func(lineptr,n,stream);
}



int h_getloadavg (double loadavg[], int nelem){
    int  (*original_func)(double loadavg[], int nelem);
    original_func = dlsym(RTLD_NEXT, "getloadavg");
    return original_func(loadavg,nelem);
}



char * h_getlogin (){
    char *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getlogin");
    return original_func();
}



struct mntent * h_getmntent (FILE *stream){
    struct mntent *  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getmntent");
    return original_func(stream);
}



struct mntent * h_getmntent_r (FILE *stream, struct mntent *result, char *buffer, int bufsize){
    struct mntent *  (*original_func)(FILE *stream, struct mntent *result, char *buffer, int bufsize);
    original_func = dlsym(RTLD_NEXT, "getmntent_r");
    return original_func(stream,result,buffer,bufsize);
}



struct netent * h_getnetbyaddr (uint32_t net, int type){
    struct netent *  (*original_func)(uint32_t net, int type);
    original_func = dlsym(RTLD_NEXT, "getnetbyaddr");
    return original_func(net,type);
}



struct netent * h_getnetbyname (const char *name){
    struct netent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getnetbyname");
    return original_func(name);
}



struct netent * h_getnetent (){
    struct netent *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getnetent");
    return original_func();
}



int h_getnetgrent (char **hostp, char **userp, char **domainp){
    int  (*original_func)(char **hostp, char **userp, char **domainp);
    original_func = dlsym(RTLD_NEXT, "getnetgrent");
    return original_func(hostp,userp,domainp);
}



int h_getnetgrent_r (char **hostp, char **userp, char **domainp, char *buffer, size_t buflen){
    int  (*original_func)(char **hostp, char **userp, char **domainp, char *buffer, size_t buflen);
    original_func = dlsym(RTLD_NEXT, "getnetgrent_r");
    return original_func(hostp,userp,domainp,buffer,buflen);
}



int h_getopt (int argc, char *const *argv, const char *options){
    int  (*original_func)(int argc, char *const *argv, const char *options);
    original_func = dlsym(RTLD_NEXT, "getopt");
    return original_func(argc,argv,options);
}



int h_getopt_long (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr){
    int  (*original_func)(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
    original_func = dlsym(RTLD_NEXT, "getopt_long");
    return original_func(argc,argv,shortopts,longopts,indexptr);
}



int h_getopt_long_only (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr){
    int  (*original_func)(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
    original_func = dlsym(RTLD_NEXT, "getopt_long_only");
    return original_func(argc,argv,shortopts,longopts,indexptr);
}



int h_getpagesize (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getpagesize");
    return original_func();
}



char * h_getpass (const char *prompt){
    char *  (*original_func)(const char *prompt);
    original_func = dlsym(RTLD_NEXT, "getpass");
    return original_func(prompt);
}



double h_getpayload (const double *x){
    double  (*original_func)(const double *x);
    original_func = dlsym(RTLD_NEXT, "getpayload");
    return original_func(x);
}




float h_getpayloadf (const float *x){
    float  (*original_func)(const float *x);
    original_func = dlsym(RTLD_NEXT, "getpayloadf");
    return original_func(x);
}



long double h_getpayloadl (const long double *x){
    long double  (*original_func)(const long double *x);
    original_func = dlsym(RTLD_NEXT, "getpayloadl");
    return original_func(x);
}



int h_getpeername (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "getpeername");
    return original_func(socket,addr,length_ptr);
}




int h_getpgid (pid_t pid){
    int  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "getpgid");
    return original_func(pid);
}




pid_t h_getpgrp (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getpgrp");
    return original_func();
}




pid_t h_getpid (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getpid");
    return original_func();
}




pid_t h_getppid (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getppid");
    return original_func();
}



// int h_getpriority (int class, int id){
//     int  (*original_func)(int class, int id);
//     original_func = dlsym(RTLD_NEXT, "getpriority");
//     return original_func(class,id);
// }

// 

struct protoent * h_getprotobyname (const char *name){
    struct protoent *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getprotobyname");
    return original_func(name);
}



struct protoent * h_getprotobynumber (int protocol){
    struct protoent *  (*original_func)(int protocol);
    original_func = dlsym(RTLD_NEXT, "getprotobynumber");
    return original_func(protocol);
}



struct protoent * h_getprotoent (){
    struct protoent *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getprotoent");
    return original_func();
}



int h_getpt (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getpt");
    return original_func();
}



struct passwd * h_getpwent (){
    struct passwd *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getpwent");
    return original_func();
}



int h_getpwent_r (struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwent_r");
    return original_func(result_buf,buffer,buflen,result);
}



struct passwd * h_getpwnam (const char *name){
    struct passwd *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "getpwnam");
    return original_func(name);
}



int h_getpwnam_r (const char *name, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(const char *name, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwnam_r");
    return original_func(name,result_buf,buffer,buflen,result);
}



struct passwd * h_getpwuid (uid_t uid){
    struct passwd *  (*original_func)(uid_t uid);
    original_func = dlsym(RTLD_NEXT, "getpwuid");
    return original_func(uid);
}



int h_getpwuid_r (uid_t uid, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result){
    int  (*original_func)(uid_t uid, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
    original_func = dlsym(RTLD_NEXT, "getpwuid_r");
    return original_func(uid,result_buf,buffer,buflen,result);
}



ssize_t h_getrandom (void *buffer, size_t length, unsigned int flags){
    ssize_t  (*original_func)(void *buffer, size_t length, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "getrandom");
    return original_func(buffer,length,flags);
}



// int h_getrlimit (int resource, struct rlimit *rlp){
//     int  (*original_func)(int resource, struct rlimit *rlp);
//     original_func = dlsym(RTLD_NEXT, "getrlimit");
//     return original_func(resource,rlp);
// }

// 

// int h_getrlimit64 (int resource, struct rlimit64 *rlp){
//     int  (*original_func)(int resource, struct rlimit64 *rlp);
//     original_func = dlsym(RTLD_NEXT, "getrlimit64");
//     return original_func(resource,rlp);
// }

// 

int h_getrusage (int processes, struct rusage *rusage){
    int  (*original_func)(int processes, struct rusage *rusage);
    original_func = dlsym(RTLD_NEXT, "getrusage");
    return original_func(processes,rusage);
}



char * h_gets (char *s){
    char *  (*original_func)(char *s);
    original_func = dlsym(RTLD_NEXT, "gets");
    return original_func(s);
}



struct servent * h_getservbyname (const char *name, const char *proto){
    struct servent *  (*original_func)(const char *name, const char *proto);
    original_func = dlsym(RTLD_NEXT, "getservbyname");
    return original_func(name,proto);
}




struct servent * h_getservbyport (int port, const char *proto){
    struct servent *  (*original_func)(int port, const char *proto);
    original_func = dlsym(RTLD_NEXT, "getservbyport");
    return original_func(port,proto);
}



struct servent * h_getservent (){
    struct servent *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getservent");
    return original_func();
}



pid_t h_getsid (pid_t pid){
    pid_t  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "getsid");
    return original_func(pid);
}



int h_getsockname (int socket, struct sockaddr *addr, socklen_t *length_ptr){
    int  (*original_func)(int socket, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "getsockname");
    return original_func(socket,addr,length_ptr);
}



int h_getsockopt (int socket, int level, int optname, void *optval, socklen_t *optlen_ptr){
    int  (*original_func)(int socket, int level, int optname, void *optval, socklen_t *optlen_ptr);
    original_func = dlsym(RTLD_NEXT, "getsockopt");
    return original_func(socket,level,optname,optval,optlen_ptr);
}



int h_getsubopt (char **optionp, char *const *tokens, char **valuep){
    int  (*original_func)(char **optionp, char *const *tokens, char **valuep);
    original_func = dlsym(RTLD_NEXT, "getsubopt");
    return original_func(optionp,tokens,valuep);
}



char * h_gettext (const char *msgid){
    char *  (*original_func)(const char *msgid);
    original_func = dlsym(RTLD_NEXT, "gettext");
    return original_func(msgid);
}



pid_t h_gettid (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "gettid");
    return original_func();
}



// int h_gettimeofday (struct timeval *tp, void *tzp){
//     int  (*original_func)(struct timeval *tp, void *tzp);
//     original_func = dlsym(RTLD_NEXT, "gettimeofday");
//     return original_func(tp,tzp);
// }
// 
// 

uid_t h_getuid (){
    uid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getuid");
    return original_func();
}



mode_t h_getumask (){
    mode_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getumask");
    return original_func();
}



struct utmp * h_getutent (){
    struct utmp *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getutent");
    return original_func();
}



int h_getutent_r (struct utmp *buffer, struct utmp **result){
    int  (*original_func)(struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutent_r");
    return original_func(buffer,result);
}



struct utmp * h_getutid (const struct utmp *id){
    struct utmp *  (*original_func)(const struct utmp *id);
    original_func = dlsym(RTLD_NEXT, "getutid");
    return original_func(id);
}



int h_getutid_r (const struct utmp *id, struct utmp *buffer, struct utmp **result){
    int  (*original_func)(const struct utmp *id, struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutid_r");
    return original_func(id,buffer,result);
}



struct utmp * h_getutline (const struct utmp *line){
    struct utmp *  (*original_func)(const struct utmp *line);
    original_func = dlsym(RTLD_NEXT, "getutline");
    return original_func(line);
}



int h_getutline_r (const struct utmp *line, struct utmp *buffer, struct utmp **result){
    int  (*original_func)(const struct utmp *line, struct utmp *buffer, struct utmp **result);
    original_func = dlsym(RTLD_NEXT, "getutline_r");
    return original_func(line,buffer,result);
}



// int h_getutmp (const struct utmpx *utmpx, struct utmp *utmp){
//     int  (*original_func)(const struct utmpx *utmpx, struct utmp *utmp);
//     original_func = dlsym(RTLD_NEXT, "getutmp");
//     return original_func(utmpx,utmp);
// }

// 

// int h_getutmpx (const struct utmp *utmp, struct utmpx *utmpx){
//     int  (*original_func)(const struct utmp *utmp, struct utmpx *utmpx);
//     original_func = dlsym(RTLD_NEXT, "getutmpx");
//     return original_func(utmp,utmpx);
// }

// 

struct utmpx * h_getutxent (){
    struct utmpx *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getutxent");
    return original_func();
}



struct utmpx * h_getutxid (const struct utmpx *id){
    struct utmpx *  (*original_func)(const struct utmpx *id);
    original_func = dlsym(RTLD_NEXT, "getutxid");
    return original_func(id);
}



struct utmpx * h_getutxline (const struct utmpx *line){
    struct utmpx *  (*original_func)(const struct utmpx *line);
    original_func = dlsym(RTLD_NEXT, "getutxline");
    return original_func(line);
}



int h_getw (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getw");
    return original_func(stream);
}



wint_t h_getwc (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getwc");
    return original_func(stream);
}



wint_t h_getwchar (){
    wint_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getwchar");
    return original_func();
}



wint_t h_getwchar_unlocked (){
    wint_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "getwchar_unlocked");
    return original_func();
}



wint_t h_getwc_unlocked (FILE *stream){
    wint_t  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "getwc_unlocked");
    return original_func(stream);
}



char * h_getwd (char *buffer){
    char *  (*original_func)(char *buffer);
    original_func = dlsym(RTLD_NEXT, "getwd");
    return original_func(buffer);
}



long int h_get_avphys_pages (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "get_avphys_pages");
    return original_func();
}



char * h_get_current_dir_name (){
    char *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "get_current_dir_name");
    return original_func();
}



int h_get_nprocs (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "get_nprocs");
    return original_func();
}



int h_get_nprocs_conf (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "get_nprocs_conf");
    return original_func();
}



long int h_get_phys_pages (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "get_phys_pages");
    return original_func();
}



int h_glob (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob_t *vector_ptr){
    int  (*original_func)(const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob_t *vector_ptr);
    original_func = dlsym(RTLD_NEXT, "glob");
    return original_func(pattern,flags,errfunc,vector_ptr);
}



int h_glob64 (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob64_t *vector_ptr){
    int  (*original_func)(const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob64_t *vector_ptr);
    original_func = dlsym(RTLD_NEXT, "glob64");
    return original_func(pattern,flags,errfunc,vector_ptr);
}



void h_globfree (glob_t *pglob){
    void  (*original_func)(glob_t *pglob);
    original_func = dlsym(RTLD_NEXT, "globfree");
    return original_func(pglob);
}



void h_globfree64 (glob64_t *pglob){
    void  (*original_func)(glob64_t *pglob);
    original_func = dlsym(RTLD_NEXT, "globfree64");
    return original_func(pglob);
}



struct tm * h_gmtime (const time_t *time){
    struct tm *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "gmtime");
    return original_func(time);
}



struct tm * h_gmtime_r (const time_t *time, struct tm *resultp){
    struct tm *  (*original_func)(const time_t *time, struct tm *resultp);
    original_func = dlsym(RTLD_NEXT, "gmtime_r");
    return original_func(time,resultp);
}



int h_grantpt (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "grantpt");
    return original_func(filedes);
}



int h_gsignal (int signum){
    int  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "gsignal");
    return original_func(signum);
}




char * h_hasmntopt (const struct mntent *mnt, const char *opt){
    char *  (*original_func)(const struct mntent *mnt, const char *opt);
    original_func = dlsym(RTLD_NEXT, "hasmntopt");
    return original_func(mnt,opt);
}



int h_hcreate (size_t nel){
    int  (*original_func)(size_t nel);
    original_func = dlsym(RTLD_NEXT, "hcreate");
    return original_func(nel);
}



int h_hcreate_r (size_t nel, struct hsearch_data *htab){
    int  (*original_func)(size_t nel, struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hcreate_r");
    return original_func(nel,htab);
}



void h_hdestroy (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "hdestroy");
    return original_func();
}





void h_hdestroy_r (struct hsearch_data *htab){
    void  (*original_func)(struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hdestroy_r");
    return original_func(htab);
}



ENTRY * h_hsearch (ENTRY item, ACTION action){
    ENTRY *  (*original_func)(ENTRY item, ACTION action);
    original_func = dlsym(RTLD_NEXT, "hsearch");
    return original_func(item,action);
}



int h_hsearch_r (ENTRY item, ACTION action, ENTRY **retval, struct hsearch_data *htab){
    int  (*original_func)(ENTRY item, ACTION action, ENTRY **retval, struct hsearch_data *htab);
    original_func = dlsym(RTLD_NEXT, "hsearch_r");
    return original_func(item,action,retval,htab);
}



uint32_t h_htonl (uint32_t hostlong){
    uint32_t  (*original_func)(uint32_t hostlong);
    original_func = dlsym(RTLD_NEXT, "htonl");
    return original_func(hostlong);
}



uint16_t h_htons (uint16_t hostshort){
    uint16_t  (*original_func)(uint16_t hostshort);
    original_func = dlsym(RTLD_NEXT, "htons");
    return original_func(hostshort);
}



double h_hypot (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "hypot");
    return original_func(x,y);
}



float h_hypotf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "hypotf");
    return original_func(x,y);
}



long double h_hypotl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "hypotl");
    return original_func(x,y);
}



size_t h_iconv (iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft){
    size_t  (*original_func)(iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
    original_func = dlsym(RTLD_NEXT, "iconv");
    return original_func(cd,inbuf,inbytesleft,outbuf,outbytesleft);
}



int h_iconv_close (iconv_t cd){
    int  (*original_func)(iconv_t cd);
    original_func = dlsym(RTLD_NEXT, "iconv_close");
    return original_func(cd);
}



iconv_t h_iconv_open (const char *tocode, const char *fromcode){
    iconv_t  (*original_func)(const char *tocode, const char *fromcode);
    original_func = dlsym(RTLD_NEXT, "iconv_open");
    return original_func(tocode,fromcode);
}



void h_if_freenameindex (struct if_nameindex *ptr){
    void  (*original_func)(struct if_nameindex *ptr);
    original_func = dlsym(RTLD_NEXT, "if_freenameindex");
    return original_func(ptr);
}



char * h_if_indextoname (unsigned int ifindex, char *ifname){
    char *  (*original_func)(unsigned int ifindex, char *ifname);
    original_func = dlsym(RTLD_NEXT, "if_indextoname");
    return original_func(ifindex,ifname);
}



struct if_nameindex * h_if_nameindex (){
    struct if_nameindex * (*original_func)();
    original_func = dlsym(RTLD_NEXT, "if_nameindex");
    return original_func();
}



unsigned int h_if_nametoindex (const char *ifname){
    unsigned int  (*original_func)(const char *ifname);
    original_func = dlsym(RTLD_NEXT, "if_nametoindex");
    return original_func(ifname);
}



int h_ilogb (double x){
    int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "ilogb");
    return original_func(x);
}



int h_ilogbf (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "ilogbf");
    return original_func(x);
}



int h_ilogbl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "ilogbl");
    return original_func(x);
}



intmax_t h_imaxabs (intmax_t number){
    intmax_t  (*original_func)(intmax_t number);
    original_func = dlsym(RTLD_NEXT, "imaxabs");
    return original_func(number);
}



imaxdiv_t h_imaxdiv (intmax_t numerator, intmax_t denominator){
    imaxdiv_t  (*original_func)(intmax_t numerator, intmax_t denominator);
    original_func = dlsym(RTLD_NEXT, "imaxdiv");
    return original_func(numerator,denominator);
}



char * h_index (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "index");
    return original_func(string,c);
}



uint32_t h_inet_addr (const char *name){
    uint32_t  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "inet_addr");
    return original_func(name);
}



int h_inet_aton (const char *name, struct in_addr *addr){
    int  (*original_func)(const char *name, struct in_addr *addr);
    original_func = dlsym(RTLD_NEXT, "inet_aton");
    return original_func(name,addr);
}



uint32_t h_inet_lnaof (struct in_addr addr){
    uint32_t  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_lnaof");
    return original_func(addr);
}



struct in_addr h_inet_makeaddr (uint32_t net, uint32_t local){
    struct in_addr  (*original_func)(uint32_t net, uint32_t local);
    original_func = dlsym(RTLD_NEXT, "inet_makeaddr");
    return original_func(net,local);
}



uint32_t h_inet_netof (struct in_addr addr){
    uint32_t  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_netof");
    return original_func(addr);
}



uint32_t h_inet_network (const char *name){
    uint32_t  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "inet_network");
    return original_func(name);
}



char * h_inet_ntoa (struct in_addr addr){
    char *  (*original_func)(struct in_addr addr);
    original_func = dlsym(RTLD_NEXT, "inet_ntoa");
    return original_func(addr);
}



const char * h_inet_ntop (int af, const void *cp, char *buf, socklen_t len){
    const char *  (*original_func)(int af, const void *cp, char *buf, socklen_t len);
    original_func = dlsym(RTLD_NEXT, "inet_ntop");
    return original_func(af,cp,buf,len);
}



int h_inet_pton (int af, const char *cp, void *buf){
    int  (*original_func)(int af, const char *cp, void *buf);
    original_func = dlsym(RTLD_NEXT, "inet_pton");
    return original_func(af,cp,buf);
}



int h_initgroups (const char *user, gid_t group){
    int  (*original_func)(const char *user, gid_t group);
    original_func = dlsym(RTLD_NEXT, "initgroups");
    return original_func(user,group);
}



char * h_initstate (unsigned int seed, char *state, size_t size){
    char *  (*original_func)(unsigned int seed, char *state, size_t size);
    original_func = dlsym(RTLD_NEXT, "initstate");
    return original_func(seed,state,size);
}



int h_initstate_r (unsigned int seed, char *restrict statebuf, size_t statelen, struct random_data *restrict buf){
    int  (*original_func)(unsigned int seed, char *restrict statebuf, size_t statelen, struct random_data *restrict buf);
    original_func = dlsym(RTLD_NEXT, "initstate_r");
    return original_func(seed,statebuf,statelen,buf);
}



int h_innetgr (const char *netgroup, const char *host, const char *user, const char *domain){
    int  (*original_func)(const char *netgroup, const char *host, const char *user, const char *domain);
    original_func = dlsym(RTLD_NEXT, "innetgr");
    return original_func(netgroup,host,user,domain);
}



int h_ioctl (int filedes, unsigned long command, ...){
    va_list ap;
    va_start(ap, command);
    int  (*original_func)(int filedes, unsigned long command, ...);
    original_func = dlsym(RTLD_NEXT, "ioctl");
    int  ret_val = original_func(filedes,command,ap);
    va_end(ap);
    return ret_val;
}



int h_isatty (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "isatty");
    return original_func(filedes);
}



int h_isinff (float x){
    int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "isinff");
    return original_func(x);
}



int h_isinfl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "isinfl");
    return original_func(x);
}



int h_isnanl (long double x){
    int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "isnanl");
    return original_func(x);
}




int h_iswalnum (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswalnum");
    return original_func(wc);
}



int h_iswalpha (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswalpha");
    return original_func(wc);
}



int h_iswblank (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswblank");
    return original_func(wc);
}



int h_iswcntrl (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswcntrl");
    return original_func(wc);
}



int h_iswctype (wint_t wc, wctype_t desc){
    int  (*original_func)(wint_t wc, wctype_t desc);
    original_func = dlsym(RTLD_NEXT, "iswctype");
    return original_func(wc,desc);
}



int h_iswdigit (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswdigit");
    return original_func(wc);
}



int h_iswgraph (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswgraph");
    return original_func(wc);
}



int h_iswlower (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswlower");
    return original_func(wc);
}



int h_iswprint (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswprint");
    return original_func(wc);
}



int h_iswpunct (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswpunct");
    return original_func(wc);
}



int h_iswspace (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswspace");
    return original_func(wc);
}



int h_iswupper (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswupper");
    return original_func(wc);
}



int h_iswxdigit (wint_t wc){
    int  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "iswxdigit");
    return original_func(wc);
}




double h_j0 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "j0");
    return original_func(x);
}



float h_j0f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "j0f");
    return original_func(x);
}



long double h_j0l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "j0l");
    return original_func(x);
}



double h_j1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "j1");
    return original_func(x);
}



float h_j1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "j1f");
    return original_func(x);
}



long double h_j1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "j1l");
    return original_func(x);
}



double h_jn (int n, double x){
    double  (*original_func)(int n, double x);
    original_func = dlsym(RTLD_NEXT, "jn");
    return original_func(n,x);
}



float h_jnf (int n, float x){
    float  (*original_func)(int n, float x);
    original_func = dlsym(RTLD_NEXT, "jnf");
    return original_func(n,x);
}



long double h_jnl (int n, long double x){
    long double  (*original_func)(int n, long double x);
    original_func = dlsym(RTLD_NEXT, "jnl");
    return original_func(n,x);
}



long int h_jrand48 (unsigned short int xsubi[3]){
    long int  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "jrand48");
    return original_func(xsubi);
}



int h_jrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "jrand48_r");
    return original_func(xsubi,buffer,result);
}



int h_kill (pid_t pid, int signum){
    int  (*original_func)(pid_t pid, int signum);
    original_func = dlsym(RTLD_NEXT, "kill");
    return original_func(pid,signum);
}



int h_killpg (int pgid, int signum){
    int  (*original_func)(int pgid, int signum);
    original_func = dlsym(RTLD_NEXT, "killpg");
    return original_func(pgid,signum);
}



char * h_l64a (long int n){
    char *  (*original_func)(long int n);
    original_func = dlsym(RTLD_NEXT, "l64a");
    return original_func(n);
}



long int h_labs (long int number){
    long int  (*original_func)(long int number);
    original_func = dlsym(RTLD_NEXT, "labs");
    return original_func(number);
}



void h_lcong48 (unsigned short int param[7]){
    void  (*original_func)(unsigned short int param[7]);
    original_func = dlsym(RTLD_NEXT, "lcong48");
    return original_func(param);
}



int h_lcong48_r (unsigned short int param[7], struct drand48_data *buffer){
    int  (*original_func)(unsigned short int param[7], struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "lcong48_r");
    return original_func(param,buffer);
}



double h_ldexp (double value, int exponent){
    double  (*original_func)(double value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexp");
    return original_func(value,exponent);
}



float h_ldexpf (float value, int exponent){
    float  (*original_func)(float value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexpf");
    return original_func(value,exponent);
}



long double h_ldexpl (long double value, int exponent){
    long double  (*original_func)(long double value, int exponent);
    original_func = dlsym(RTLD_NEXT, "ldexpl");
    return original_func(value,exponent);
}



ldiv_t h_ldiv (long int numerator, long int denominator){
    ldiv_t  (*original_func)(long int numerator, long int denominator);
    original_func = dlsym(RTLD_NEXT, "ldiv");
    return original_func(numerator,denominator);
}



void * h_lfind (const void *key, const void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, const void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "lfind");
    return original_func(key,base,nmemb,size,compar);
}



double h_lgamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lgamma");
    return original_func(x);
}



float h_lgammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lgammaf");
    return original_func(x);
}



float h_lgammaf_r (float x, int *signp){
    float  (*original_func)(float x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgammaf_r");
    return original_func(x,signp);
}



long double h_lgammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lgammal");
    return original_func(x);
}



long double h_lgammal_r (long double x, int *signp){
    long double  (*original_func)(long double x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgammal_r");
    return original_func(x,signp);
}



double h_lgamma_r (double x, int *signp){
    double  (*original_func)(double x, int *signp);
    original_func = dlsym(RTLD_NEXT, "lgamma_r");
    return original_func(x,signp);
}



int h_link (const char *oldname, const char *newname){
    int  (*original_func)(const char *oldname, const char *newname);
    original_func = dlsym(RTLD_NEXT, "link");
    return original_func(oldname,newname);
}



int h_linkat (int oldfd, const char *oldname, int newfd, const char *newname, int flags){
    int  (*original_func)(int oldfd, const char *oldname, int newfd, const char *newname, int flags);
    original_func = dlsym(RTLD_NEXT, "linkat");
    return original_func(oldfd,oldname,newfd,newname,flags);
}



int h_lio_listio (int mode, struct aiocb *const list[], int nent, struct sigevent *sig){
    int  (*original_func)(int mode, struct aiocb *const list[], int nent, struct sigevent *sig);
    original_func = dlsym(RTLD_NEXT, "lio_listio");
    return original_func(mode,list,nent,sig);
}



int h_lio_listio64 (int mode, struct aiocb64 *const list[], int nent, struct sigevent *sig){
    int  (*original_func)(int mode, struct aiocb64 *const list[], int nent, struct sigevent *sig);
    original_func = dlsym(RTLD_NEXT, "lio_listio64");
    return original_func(mode,list,nent,sig);
}



int h_listen (int socket, int n){
    int  (*original_func)(int socket, int n);
    original_func = dlsym(RTLD_NEXT, "listen");
    return original_func(socket,n);
}



long long int h_llabs (long long int number){
    long long int  (*original_func)(long long int number);
    original_func = dlsym(RTLD_NEXT, "llabs");
    return original_func(number);
}



lldiv_t h_lldiv (long long int numerator, long long int denominator){
    lldiv_t  (*original_func)(long long int numerator, long long int denominator);
    original_func = dlsym(RTLD_NEXT, "lldiv");
    return original_func(numerator,denominator);
}



long int h_llogb (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llogb");
    return original_func(x);
}



long int h_llogbf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llogbf");
    return original_func(x);
}



long int h_llogbl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llogbl");
    return original_func(x);
}



long long int h_llrint (double x){
    long long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llrint");
    return original_func(x);
}



long long int h_llrintf (float x){
    long long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llrintf");
    return original_func(x);
}



long long int h_llrintl (long double x){
    long long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llrintl");
    return original_func(x);
}



long long int h_llround (double x){
    long long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "llround");
    return original_func(x);
}



long long int h_llroundf (float x){
    long long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "llroundf");
    return original_func(x);
}



long long int h_llroundl (long double x){
    long long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "llroundl");
    return original_func(x);
}



struct lconv * h_localeconv (){
    struct lconv *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "localeconv");
    return original_func();
}



struct tm * h_localtime (const time_t *time){
    struct tm *  (*original_func)(const time_t *time);
    original_func = dlsym(RTLD_NEXT, "localtime");
    return original_func(time);
}



struct tm * h_localtime_r (const time_t *time, struct tm *resultp){
    struct tm *  (*original_func)(const time_t *time, struct tm *resultp);
    original_func = dlsym(RTLD_NEXT, "localtime_r");
    return original_func(time,resultp);
}



double h_log (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log");
    return original_func(x);
}



double h_log10 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log10");
    return original_func(x);
}



float h_log10f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log10f");
    return original_func(x);
}



long double h_log10l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log10l");
    return original_func(x);
}



double h_log1p (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log1p");
    return original_func(x);
}



float h_log1pf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log1pf");
    return original_func(x);
}



long double h_log1pl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log1pl");
    return original_func(x);
}



double h_log2 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "log2");
    return original_func(x);
}



float h_log2f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "log2f");
    return original_func(x);
}



long double h_log2l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "log2l");
    return original_func(x);
}



double h_logb (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "logb");
    return original_func(x);
}



float h_logbf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "logbf");
    return original_func(x);
}



long double h_logbl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "logbl");
    return original_func(x);
}



float h_logf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "logf");
    return original_func(x);
}



void h_login (const struct utmp *entry){
    void  (*original_func)(const struct utmp *entry);
    original_func = dlsym(RTLD_NEXT, "login");
    return original_func(entry);
}



int h_login_tty (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "login_tty");
    return original_func(filedes);
}



long double h_logl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "logl");
    return original_func(x);
}



int h_logout (const char *ut_line){
    int  (*original_func)(const char *ut_line);
    original_func = dlsym(RTLD_NEXT, "logout");
    return original_func(ut_line);
}



void h_logwtmp (const char *ut_line, const char *ut_name, const char *ut_host){
    void  (*original_func)(const char *ut_line, const char *ut_name, const char *ut_host);
    original_func = dlsym(RTLD_NEXT, "logwtmp");
    original_func(ut_line,ut_name,ut_host);
}



void h_longjmp (jmp_buf state, int value){
    void  (*original_func)(jmp_buf state, int value);
    original_func = dlsym(RTLD_NEXT, "longjmp");
    original_func(state,value);
}



long int h_lrand48 (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "lrand48");
    return original_func();
}



int h_lrand48_r (struct drand48_data *buffer, long int *result){
    int  (*original_func)(struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "lrand48_r");
    return original_func(buffer,result);
}



long int h_lrint (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lrint");
    return original_func(x);
}



long int h_lrintf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lrintf");
    return original_func(x);
}



long int h_lrintl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lrintl");
    return original_func(x);
}



long int h_lround (double x){
    long int  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "lround");
    return original_func(x);
}



long int h_lroundf (float x){
    long int  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "lroundf");
    return original_func(x);
}



long int h_lroundl (long double x){
    long int  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "lroundl");
    return original_func(x);
}



void * h_lsearch (const void *key, void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "lsearch");
    return original_func(key,base,nmemb,size,compar);
}



off_t h_lseek (int filedes, off_t offset, int whence){
    off_t  (*original_func)(int filedes, off_t offset, int whence);
    original_func = dlsym(RTLD_NEXT, "lseek");
    return original_func(filedes,offset,whence);
}



// off64_t h_lseek64 (int filedes, off64_t offset, int whence){
//     off64_t  (*original_func)(int filedes, off64_t offset, int whence);
//     original_func = dlsym(RTLD_NEXT, "lseek64");
//     return original_func(filedes,offset,whence);
// }



int h_lstat (const char *filename, struct stat *buf){
    int  (*original_func)(const char *filename, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "lstat");
    return original_func(filename,buf);
}



int h_lstat64 (const char *filename, struct stat64 *buf){
    int  (*original_func)(const char *filename, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "lstat64");
    return original_func(filename,buf);
}



int h_lutimes (const char *filename, const struct timeval tvp[2]){
    int  (*original_func)(const char *filename, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "lutimes");
    return original_func(filename,tvp);
}



int h_madvise (void *addr, size_t length, int advice){
    int  (*original_func)(void *addr, size_t length, int advice);
    original_func = dlsym(RTLD_NEXT, "madvise");
    return original_func(addr,length,advice);
}



void h_makecontext (ucontext_t *ucp, void (*func) (), int argc, ...){
    va_list ap;
    va_start(ap, argc);
    // h_for(int i = 0; i < argc; i++){
        // va_arg(ap, int);
    // }
    void  (*original_func)(ucontext_t *ucp, void (*func) (), int argc, ...);
    original_func = dlsym(RTLD_NEXT, "makecontext");
    original_func(ucp,func,argc,ap);
    va_end(ap);
    return;
}




struct mallinfo h_mallinfo (){
    struct mallinfo (*original_func)();
    original_func = dlsym(RTLD_NEXT, "mallinfo");
    return original_func();
}



// h_void * malloc (size_t size){
//     void *  (*original_func)(size_t size);
//     original_func = dlsym(RTLD_NEXT, "malloc");
//     return original_func(size);
// }

// 

int h_mallopt (int param, int value){
    int  (*original_func)(int param, int value);
    original_func = dlsym(RTLD_NEXT, "mallopt");
    return original_func(param,value);
}



int h_mblen (const char *string, size_t size){
    int  (*original_func)(const char *string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mblen");
    return original_func(string,size);
}



size_t h_mbrlen (const char *restrict s, size_t n, mbstate_t *ps){
    size_t  (*original_func)(const char *restrict s, size_t n, mbstate_t *ps);
    original_func = dlsym(RTLD_NEXT, "mbrlen");
    return original_func(s,n,ps);
}



size_t h_mbrtowc (wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbrtowc");
    return original_func(pwc,s,n,ps);
}



int h_mbsinit (const mbstate_t *ps){
    int  (*original_func)(const mbstate_t *ps);
    original_func = dlsym(RTLD_NEXT, "mbsinit");
    return original_func(ps);
}



size_t h_mbsnrtowcs (wchar_t *restrict dst, const char **restrict src, size_t nmc, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict dst, const char **restrict src, size_t nmc, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbsnrtowcs");
    return original_func(dst,src,nmc,len,ps);
}



size_t h_mbsrtowcs (wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "mbsrtowcs");
    return original_func(dst,src,len,ps);
}



size_t h_mbstowcs (wchar_t *wstring, const char *string, size_t size){
    size_t  (*original_func)(wchar_t *wstring, const char *string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mbstowcs");
    return original_func(wstring,string,size);
}



int h_mbtowc (wchar_t *restrict result, const char *restrict string, size_t size){
    int  (*original_func)(wchar_t *restrict result, const char *restrict string, size_t size);
    original_func = dlsym(RTLD_NEXT, "mbtowc");
    return original_func(result,string,size);
}



int h_mcheck (void (*abortfn) (enum mcheck_status status)){
    int  (*original_func)(void (*abortfn) (enum mcheck_status status));
    original_func = dlsym(RTLD_NEXT, "mcheck");
    return original_func(abortfn);
}



void * h_memalign (size_t boundary, size_t size){
    void *  (*original_func)(size_t boundary, size_t size);
    original_func = dlsym(RTLD_NEXT, "memalign");
    return original_func(boundary,size);
}



void * h_memccpy (void *restrict to, const void *restrict from, int c, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memccpy");
    return original_func(to,from,c,size);
}



void * h_memchr (const void *block, int c, size_t size){
    void *  (*original_func)(const void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memchr");
    return original_func(block,c,size);
}



int h_memcmp (const void *a1, const void *a2, size_t size){
    int  (*original_func)(const void *a1, const void *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "memcmp");
    return original_func(a1,a2,size);
}



void * h_memcpy (void *restrict to, const void *restrict from, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "memcpy");
    return original_func(to,from,size);
}



int h_memfd_create (const char *name, unsigned int flags){
    int  (*original_func)(const char *name, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "memfd_create");
    return original_func(name,flags);
}



void * h_memfrob (void *mem, size_t length){
    void *  (*original_func)(void *mem, size_t length);
    original_func = dlsym(RTLD_NEXT, "memfrob");
    return original_func(mem,length);
}



void * h_memmem (const void *haystack, size_t haystack_len,const void *needle, size_t needle_len){
    void *  (*original_func)(const void *haystack, size_t haystack_len,const void *needle, size_t needle_len);
    original_func = dlsym(RTLD_NEXT, "memmem");
    return original_func(haystack,haystack_len,needle,needle_len);
}



void * h_memmove (void *to, const void *from, size_t size){
    void *  (*original_func)(void *to, const void *from, size_t size);
    original_func = dlsym(RTLD_NEXT, "memmove");
    return original_func(to,from,size);
}



void * h_mempcpy (void *restrict to, const void *restrict from, size_t size){
    void *  (*original_func)(void *restrict to, const void *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "mempcpy");
    return original_func(to,from,size);
}



void * h_memrchr (const void *block, int c, size_t size){
    void *  (*original_func)(const void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memrchr");
    return original_func(block,c,size);
}



void * h_memset (void *block, int c, size_t size){
    void *  (*original_func)(void *block, int c, size_t size);
    original_func = dlsym(RTLD_NEXT, "memset");
    return original_func(block,c,size);
}



int h_mkdir (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "mkdir");
    return original_func(filename,mode);
}



char * h_mkdtemp (char *template){
    char *  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mkdtemp");
    return original_func(template);
}



int h_mkfifo (const char *filename, mode_t mode){
    int  (*original_func)(const char *filename, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "mkfifo");
    return original_func(filename,mode);
}



int h_mknod (const char *filename, mode_t mode, dev_t dev){
    int  (*original_func)(const char *filename, mode_t mode, dev_t dev);
    original_func = dlsym(RTLD_NEXT, "mknod");
    return original_func(filename,mode,dev);
}



int h_mkstemp (char *template){
    int  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mkstemp");
    return original_func(template);
}



char * h_mktemp (char *template){
    char *  (*original_func)(char *template);
    original_func = dlsym(RTLD_NEXT, "mktemp");
    return original_func(template);
}



time_t h_mktime (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "mktime");
    return original_func(brokentime);
}



int h_mlock (const void *addr, size_t len){
    int  (*original_func)(const void *addr, size_t len);
    original_func = dlsym(RTLD_NEXT, "mlock");
    return original_func(addr,len);
}



int h_mlock2 (const void *addr, size_t len, unsigned int flags){
    int  (*original_func)(const void *addr, size_t len, unsigned int flags);
    original_func = dlsym(RTLD_NEXT, "mlock2");
    return original_func(addr,len,flags);
}



int h_mlockall (int flags){
    int  (*original_func)(int flags);
    original_func = dlsym(RTLD_NEXT, "mlockall");
    return original_func(flags);
}




void * h_mmap (void *address, size_t length, int protect, int flags, int filedes, off_t offset){
    void *  (*original_func)(void *address, size_t length, int protect, int flags, int filedes, off_t offset);
    original_func = dlsym(RTLD_NEXT, "mmap");
    return original_func(address,length,protect,flags,filedes,offset);
}




// void * h_mmap64 (void *address, size_t length, int protect, int flags, int filedes, off64_t offset){
//     void *  (*original_func)(void *address, size_t length, int protect, int flags, int filedes, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "mmap64");
//     return original_func(address,length,protect,flags,filedes,offset);
// }



double h_modf (double value, double *integer_part){
    double  (*original_func)(double value, double *integer_part);
    original_func = dlsym(RTLD_NEXT, "modf");
    return original_func(value,integer_part);
}



float h_modff (float value, float *integer_part){
    float  (*original_func)(float value, float *integer_part);
    original_func = dlsym(RTLD_NEXT, "modff");
    return original_func(value,integer_part);
}



long double h_modfl (long double value, long double *integer_part){
    long double  (*original_func)(long double value, long double *integer_part);
    original_func = dlsym(RTLD_NEXT, "modfl");
    return original_func(value,integer_part);
}



int h_mount (const char *special_file, const char *dir, const char *fstype, unsigned long int options, const void *data){
    int  (*original_func)(const char *special_file, const char *dir, const char *fstype, unsigned long int options, const void *data);
    original_func = dlsym(RTLD_NEXT, "mount");
    return original_func(special_file,dir,fstype,options,data);
}



int h_mprobe (void *pointer){
    enum mcheck_status  (*original_func)(void *pointer);
    original_func = dlsym(RTLD_NEXT, "mprobe");
    return original_func(pointer);
}



int h_mprotect (void *address, size_t length, int protection){
    int  (*original_func)(void *address, size_t length, int protection);
    original_func = dlsym(RTLD_NEXT, "mprotect");
    return original_func(address,length,protection);
}




long int h_mrand48 (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "mrand48");
    return original_func();
}



int h_mrand48_r (struct drand48_data *buffer, long int *result){
    int  (*original_func)(struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "mrand48_r");
    return original_func(buffer,result);
}



void * h_mremap (void *address, size_t length, size_t new_length, int flag){
    void *  (*original_func)(void *address, size_t length, size_t new_length, int flag);
    original_func = dlsym(RTLD_NEXT, "mremap");
    return original_func(address,length,new_length,flag);
}



int h_msync (void *address, size_t length, int flags){
    int  (*original_func)(void *address, size_t length, int flags);
    original_func = dlsym(RTLD_NEXT, "msync");
    return original_func(address,length,flags);
}



void h_mtrace (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "mtrace");
    return original_func();
}



int h_munlock (const void *addr, size_t len){
    int  (*original_func)(const void *addr, size_t len);
    original_func = dlsym(RTLD_NEXT, "munlock");
    return original_func(addr,len);
}



int h_munlockall (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "munlockall");
    return original_func();
}




int h_munmap (void *addr, size_t length){
    int  (*original_func)(void *addr, size_t length);
    original_func = dlsym(RTLD_NEXT, "munmap");
    return original_func(addr,length);
}




void h_muntrace (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "muntrace");
    return original_func();
}



double h_nan (const char *tagp){
    double  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nan");
    return original_func(tagp);
}



float h_nanf (const char *tagp){
    float  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nanf");
    return original_func(tagp);
}



long double h_nanl (const char *tagp){
    long double  (*original_func)(const char *tagp);
    original_func = dlsym(RTLD_NEXT, "nanl");
    return original_func(tagp);
}



int h_nanosleep (const struct timespec *requested_time, struct timespec *remaining){
    int  (*original_func)(const struct timespec *requested_time, struct timespec *remaining);
    original_func = dlsym(RTLD_NEXT, "nanosleep");
    return original_func(requested_time,remaining);
}



double h_nearbyint (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nearbyint");
    return original_func(x);
}



float h_nearbyintf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nearbyintf");
    return original_func(x);
}



long double h_nearbyintl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nearbyintl");
    return original_func(x);
}



double h_nextafter (double x, double y){
    double  (*original_func)(double x, double y);
    original_func = dlsym(RTLD_NEXT, "nextafter");
    return original_func(x,y);
}



float h_nextafterf (float x, float y){
    float  (*original_func)(float x, float y);
    original_func = dlsym(RTLD_NEXT, "nextafterf");
    return original_func(x,y);
}



long double h_nextafterl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nextafterl");
    return original_func(x,y);
}



double h_nextdown (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nextdown");
    return original_func(x);
}



float h_nextdownf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nextdownf");
    return original_func(x);
}



long double h_nextdownl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nextdownl");
    return original_func(x);
}



double h_nexttoward (double x, long double y){
    double  (*original_func)(double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttoward");
    return original_func(x,y);
}



float h_nexttowardf (float x, long double y){
    float  (*original_func)(float x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttowardf");
    return original_func(x,y);
}



long double h_nexttowardl (long double x, long double y){
    long double  (*original_func)(long double x, long double y);
    original_func = dlsym(RTLD_NEXT, "nexttowardl");
    return original_func(x,y);
}



double h_nextup (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "nextup");
    return original_func(x);
}



float h_nextupf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "nextupf");
    return original_func(x);
}



long double h_nextupl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "nextupl");
    return original_func(x);
}



int h_nftw (const char *filename, __nftw_func_t func, int descriptors, int flag){
    int  (*original_func)(const char *filename, __nftw_func_t func, int descriptors, int flag);
    original_func = dlsym(RTLD_NEXT, "nftw");
    return original_func(filename,func,descriptors,flag);
}



int h_nftw64 (const char *filename, __nftw64_func_t func, int descriptors, int flag){
    int  (*original_func)(const char *filename, __nftw64_func_t func, int descriptors, int flag);
    original_func = dlsym(RTLD_NEXT, "nftw64");
    return original_func(filename,func,descriptors,flag);
}



char * h_ngettext (const char *msgid1, const char *msgid2, unsigned long int n){
    char *  (*original_func)(const char *msgid1, const char *msgid2, unsigned long int n);
    original_func = dlsym(RTLD_NEXT, "ngettext");
    return original_func(msgid1,msgid2,n);
}



int h_nice (int increment){
    int  (*original_func)(int increment);
    original_func = dlsym(RTLD_NEXT, "nice");
    return original_func(increment);
}



char * h_nl_langinfo (nl_item item){
    char *  (*original_func)(nl_item item);
    original_func = dlsym(RTLD_NEXT, "nl_langinfo");
    return original_func(item);
}



long int h_nrand48 (unsigned short int xsubi[3]){
    long int  (*original_func)(unsigned short int xsubi[3]);
    original_func = dlsym(RTLD_NEXT, "nrand48");
    return original_func(xsubi);
}



int h_nrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result){
    int  (*original_func)(unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
    original_func = dlsym(RTLD_NEXT, "nrand48_r");
    return original_func(xsubi,buffer,result);
}



uint32_t h_ntohl (uint32_t netlong){
    uint32_t  (*original_func)(uint32_t netlong);
    original_func = dlsym(RTLD_NEXT, "ntohl");
    return original_func(netlong);
}



uint16_t h_ntohs (uint16_t netshort){
    uint16_t  (*original_func)(uint16_t netshort);
    original_func = dlsym(RTLD_NEXT, "ntohs");
    return original_func(netshort);
}



int h_ntp_adjtime (struct timex *tptr){
    int  (*original_func)(struct timex *tptr);
    original_func = dlsym(RTLD_NEXT, "ntp_adjtime");
    return original_func(tptr);
}



int h_ntp_gettime (struct ntptimeval *tptr){
    int  (*original_func)(struct ntptimeval *tptr);
    original_func = dlsym(RTLD_NEXT, "ntp_gettime");
    return original_func(tptr);
}



void h_obstack_1grow (struct obstack *obstack_ptr, char c){
    void  (*original_func)(struct obstack *obstack_ptr, char c);
    original_func = dlsym(RTLD_NEXT, "obstack_1grow");
    return original_func(obstack_ptr,c);
}



void h_obstack_1grow_fast (struct obstack *obstack_ptr, char c){
    void  (*original_func)(struct obstack *obstack_ptr, char c);
    original_func = dlsym(RTLD_NEXT, "obstack_1grow_fast");
    return original_func(obstack_ptr,c);
}



void * h_obstack_alloc (struct obstack *obstack_ptr, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_alloc");
    return original_func(obstack_ptr,size);
}



void * h_obstack_base (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_base");
    return original_func(obstack_ptr);
}



void h_obstack_blank (struct obstack *obstack_ptr, int size){
    void  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_blank");
    return original_func(obstack_ptr,size);
}



void h_obstack_blank_fast (struct obstack *obstack_ptr, int size){
    void  (*original_func)(struct obstack *obstack_ptr, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_blank_fast");
    return original_func(obstack_ptr,size);
}



void * h_obstack_copy (struct obstack *obstack_ptr, void *address, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, void *address, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_copy");
    return original_func(obstack_ptr,address,size);
}



void * h_obstack_copy0 (struct obstack *obstack_ptr, void *address, int size){
    void *  (*original_func)(struct obstack *obstack_ptr, void *address, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_copy0");
    return original_func(obstack_ptr,address,size);
}



void * h_obstack_finish (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_finish");
    return original_func(obstack_ptr);
}



void h_obstack_free (struct obstack *obstack_ptr, void *object){
    void  (*original_func)(struct obstack *obstack_ptr, void *object);
    original_func = dlsym(RTLD_NEXT, "obstack_free");
    return original_func(obstack_ptr,object);
}



void h_obstack_grow (struct obstack *obstack_ptr, void *data, int size){
    void  (*original_func)(struct obstack *obstack_ptr, void *data, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_grow");
    return original_func(obstack_ptr,data,size);
}



void h_obstack_grow0 (struct obstack *obstack_ptr, void *data, int size){
    void  (*original_func)(struct obstack *obstack_ptr, void *data, int size);
    original_func = dlsym(RTLD_NEXT, "obstack_grow0");
    return original_func(obstack_ptr,data,size);
}



int h_obstack_init (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_init");
    return original_func(obstack_ptr);
}



void h_obstack_int_grow (struct obstack *obstack_ptr, int data){
    void  (*original_func)(struct obstack *obstack_ptr, int data);
    original_func = dlsym(RTLD_NEXT, "obstack_int_grow");
    return original_func(obstack_ptr,data);
}



void h_obstack_int_grow_fast (struct obstack *obstack_ptr, int data){
    void  (*original_func)(struct obstack *obstack_ptr, int data);
    original_func = dlsym(RTLD_NEXT, "obstack_int_grow_fast");
    return original_func(obstack_ptr,data);
}



void * h_obstack_next_free (struct obstack *obstack_ptr){
    void *  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_next_free");
    return original_func(obstack_ptr);
}



int h_obstack_object_size (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_object_size");
    return original_func(obstack_ptr);
}




void h_obstack_ptr_grow (struct obstack *obstack_ptr, void *data){
    void  (*original_func)(struct obstack *obstack_ptr, void *data);
    original_func = dlsym(RTLD_NEXT, "obstack_ptr_grow");
    return original_func(obstack_ptr,data);
}



void h_obstack_ptr_grow_fast (struct obstack *obstack_ptr, void *data){
    void  (*original_func)(struct obstack *obstack_ptr, void *data);
    original_func = dlsym(RTLD_NEXT, "obstack_ptr_grow_fast");
    return original_func(obstack_ptr,data);
}



int h_obstack_room (struct obstack *obstack_ptr){
    int  (*original_func)(struct obstack *obstack_ptr);
    original_func = dlsym(RTLD_NEXT, "obstack_room");
    return original_func(obstack_ptr);
}




int h_on_exit (void (*function)(int status, void *arg), void *arg){
    int  (*original_func)(void (*function)(int status, void *arg), void *arg);
    original_func = dlsym(RTLD_NEXT, "on_exit");
    return original_func(function,arg);
}



int h_open (const char *filename, int flags){
    int  (*original_func)(const char *filename, int flags);
    original_func = dlsym(RTLD_NEXT, "open");
    return original_func(filename,flags);
}



DIR * h_opendir (const char *dirname){
    DIR *  (*original_func)(const char *dirname);
    original_func = dlsym(RTLD_NEXT, "opendir");
    return original_func(dirname);
}



void h_openlog (const char *ident, int option, int facility){
    void  (*original_func)(const char *ident, int option, int facility);
    original_func = dlsym(RTLD_NEXT, "openlog");
    return original_func(ident,option,facility);
}



int h_openpty (int *amaster, int *aslave, char *name, const struct termios *termp, const struct winsize *winp){
    int  (*original_func)(int *amaster, int *aslave, char *name, const struct termios *termp, const struct winsize *winp);
    original_func = dlsym(RTLD_NEXT, "openpty");
    return original_func(amaster,aslave,name,termp,winp);
}



FILE * h_open_memstream (char **ptr, size_t *sizeloc){
    FILE *  (*original_func)(char **ptr, size_t *sizeloc);
    original_func = dlsym(RTLD_NEXT, "open_memstream");
    return original_func(ptr,sizeloc);
}



size_t h_parse_printf_format (const char *template, size_t n, int *argtypes){
    size_t  (*original_func)(const char *template, size_t n, int *argtypes);
    original_func = dlsym(RTLD_NEXT, "parse_printf_format");
    return original_func(template,n,argtypes);
}



long int h_pathconf (const char *filename, int parameter){
    long int  (*original_func)(const char *filename, int parameter);
    original_func = dlsym(RTLD_NEXT, "pathconf");
    return original_func(filename,parameter);
}



int h_pause (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "pause");
    return original_func();
}



int h_pclose (FILE *stream){
    int  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "pclose");
    return original_func(stream);
}



void h_perror (const char *message){
    void  (*original_func)(const char *message);
    original_func = dlsym(RTLD_NEXT, "perror");
    return original_func(message);
}



int h_pipe (int filedes[2]){
    int  (*original_func)(int filedes[2]);
    original_func = dlsym(RTLD_NEXT, "pipe");
    return original_func(filedes);
}



int h_pkey_alloc (unsigned int flags, unsigned int restrictions){
    int  (*original_func)(unsigned int flags, unsigned int restrictions);
    original_func = dlsym(RTLD_NEXT, "pkey_alloc");
    return original_func(flags,restrictions);
}



int h_pkey_free (int key){
    int  (*original_func)(int key);
    original_func = dlsym(RTLD_NEXT, "pkey_free");
    return original_func(key);
}



int h_pkey_get (int key){
    int  (*original_func)(int key);
    original_func = dlsym(RTLD_NEXT, "pkey_get");
    return original_func(key);
}



int h_pkey_mprotect (void *address, size_t length, int protection, int key){
    int  (*original_func)(void *address, size_t length, int protection, int key);
    original_func = dlsym(RTLD_NEXT, "pkey_mprotect");
    return original_func(address,length,protection,key);
}



int h_pkey_set (int key, unsigned int rights){
    int  (*original_func)(int key, unsigned int rights);
    original_func = dlsym(RTLD_NEXT, "pkey_set");
    return original_func(key,rights);
}



FILE * h_popen (const char *command, const char *mode){
    FILE *  (*original_func)(const char *command, const char *mode);
    original_func = dlsym(RTLD_NEXT, "popen");
    return original_func(command,mode);
}



int h_posix_fallocate (int fd, off_t offset, off_t length){
    int  (*original_func)(int fd, off_t offset, off_t length);
    original_func = dlsym(RTLD_NEXT, "posix_fallocate");
    return original_func(fd,offset,length);
}



// int h_posix_fallocate64 (int fd, off64_t offset, off64_t length){
//     int  (*original_func)(int fd, off64_t offset, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "posix_fallocate64");
//     return original_func(fd,offset,length);
// }



int h_posix_memalign (void **memptr, size_t alignment, size_t size){
    int  (*original_func)(void **memptr, size_t alignment, size_t size);
    original_func = dlsym(RTLD_NEXT, "posix_memalign");
    return original_func(memptr,alignment,size);
}



double h_pow (double base, double power){
    double  (*original_func)(double base, double power);
    original_func = dlsym(RTLD_NEXT, "pow");
    return original_func(base,power);
}



float h_powf (float base, float power){
    float  (*original_func)(float base, float power);
    original_func = dlsym(RTLD_NEXT, "powf");
    return original_func(base,power);
}



long double h_powl (long double base, long double power){
    long double  (*original_func)(long double base, long double power);
    original_func = dlsym(RTLD_NEXT, "powl");
    return original_func(base,power);
}



ssize_t h_pread (int filedes, void *buffer, size_t size, off_t offset){
    ssize_t  (*original_func)(int filedes, void *buffer, size_t size, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pread");
    return original_func(filedes,buffer,size,offset);
}



// ssize_t h_pread64 (int filedes, void *buffer, size_t size, off64_t offset){
//     ssize_t  (*original_func)(int filedes, void *buffer, size_t size, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pread64");
//     return original_func(filedes,buffer,size,offset);
// }



ssize_t h_preadv (int fd, const struct iovec *iov, int iovcnt, off_t offset){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset);
    original_func = dlsym(RTLD_NEXT, "preadv");
    return original_func(fd,iov,iovcnt,offset);
}



ssize_t h_preadv2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "preadv2");
    return original_func(fd,iov,iovcnt,offset,flags);
}



// ssize_t h_preadv64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "preadv64");
//     return original_func(fd,iov,iovcnt,offset);
// }



ssize_t h_preadv64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "preadv64v2");
    return original_func(fd,iov,iovcnt,offset,flags);
}




int h_printf (const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "vprintf");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}





void h_psignal (int signum, const char *message){
    void  (*original_func)(int signum, const char *message);
    original_func = dlsym(RTLD_NEXT, "psignal");
    return original_func(signum,message);
}



int h_pthread_attr_getsigmask_np (const pthread_attr_t *attr, sigset_t *sigmask){
    int  (*original_func)(const pthread_attr_t *attr, sigset_t *sigmask);
    original_func = dlsym(RTLD_NEXT, "pthread_attr_getsigmask_np");
    return original_func(attr,sigmask);
}



int h_pthread_attr_setsigmask_np (pthread_attr_t *attr, const sigset_t *sigmask){
    int  (*original_func)(pthread_attr_t *attr, const sigset_t *sigmask);
    original_func = dlsym(RTLD_NEXT, "pthread_attr_setsigmask_np");
    return original_func(attr,sigmask);
}



int h_pthread_clockjoin_np (pthread_t *thread,void **thread_return, clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_t *thread,void **thread_return, clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_clockjoin_np");
    return original_func(thread,thread_return,clockid,abstime);
}



int h_pthread_cond_clockwait (pthread_cond_t *cond, pthread_mutex_t *mutex,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_cond_t *cond, pthread_mutex_t *mutex,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_cond_clockwait");
    return original_func(cond,mutex,clockid,abstime);
}



int h_pthread_getattr_default_np (pthread_attr_t *attr){
    int  (*original_func)(pthread_attr_t *attr);
    original_func = dlsym(RTLD_NEXT, "pthread_getattr_default_np");
    return original_func(attr);
}



int h_pthread_key_create (pthread_key_t *key, void (*destructor)(void*)){
    int  (*original_func)(pthread_key_t *key, void (*destructor)(void*));
    original_func = dlsym(RTLD_NEXT, "pthread_key_create");
    return original_func(key,destructor);
}



int h_pthread_key_delete (pthread_key_t key){
    int  (*original_func)(pthread_key_t key);
    original_func = dlsym(RTLD_NEXT, "pthread_key_delete");
    return original_func(key);
}



int h_pthread_rwlock_clockrdlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_rwlock_clockrdlock");
    return original_func(rwlock,clockid,abstime);
}



int h_pthread_rwlock_clockwrlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime){
    int  (*original_func)(pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_rwlock_clockwrlock");
    return original_func(rwlock,clockid,abstime);
}



int h_pthread_setattr_default_np (pthread_attr_t *attr){
    int  (*original_func)(pthread_attr_t *attr);
    original_func = dlsym(RTLD_NEXT, "pthread_setattr_default_np");
    return original_func(attr);
}



int h_pthread_setspecific (pthread_key_t key, const void *value){
    int  (*original_func)(pthread_key_t key, const void *value);
    original_func = dlsym(RTLD_NEXT, "pthread_setspecific");
    return original_func(key,value);
}



int h_pthread_timedjoin_np (pthread_t *thread,void **thread_return, const struct timespec *abstime){
    int  (*original_func)(pthread_t *thread,void **thread_return, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "pthread_timedjoin_np");
    return original_func(thread,thread_return,abstime);
}



int h_pthread_tryjoin_np (pthread_t *thread,void **thread_return){
    int  (*original_func)(pthread_t *thread,void **thread_return);
    original_func = dlsym(RTLD_NEXT, "pthread_tryjoin_np");
    return original_func(thread,thread_return);
}



char * h_ptsname (int filedes){
    char *  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "ptsname");
    return original_func(filedes);
}



int h_ptsname_r (int filedes, char *buf, size_t len){
    int  (*original_func)(int filedes, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ptsname_r");
    return original_func(filedes,buf,len);
}



int h_putc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putc");
    return original_func(c,stream);
}



int h_putchar (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "putchar");
    return original_func(c);
}



int h_putchar_unlocked (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "putchar_unlocked");
    return original_func(c);
}



int h_putc_unlocked (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putc_unlocked");
    return original_func(c,stream);
}



int h_putenv (char *string){
    int  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "putenv");
    return original_func(string);
}



int h_putpwent (const struct passwd *p, FILE *stream){
    int  (*original_func)(const struct passwd *p, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putpwent");
    return original_func(p,stream);
}




int h_puts(const char *s){
    return 1;
}




struct utmp * h_pututline (const struct utmp *utmp){
    struct utmp *  (*original_func)(const struct utmp *utmp);
    original_func = dlsym(RTLD_NEXT, "pututline");
    return original_func(utmp);
}



struct utmpx * h_pututxline (const struct utmpx *utmp){
    struct utmpx *  (*original_func)(const struct utmpx *utmp);
    original_func = dlsym(RTLD_NEXT, "pututxline");
    return original_func(utmp);
}



int h_putw (int w, FILE *stream){
    int  (*original_func)(int w, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putw");
    return original_func(w,stream);
}



wint_t h_putwc (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putwc");
    return original_func(wc,stream);
}



wint_t h_putwchar (wchar_t wc){
    wint_t  (*original_func)(wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "putwchar");
    return original_func(wc);
}



wint_t h_putwchar_unlocked (wchar_t wc){
    wint_t  (*original_func)(wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "putwchar_unlocked");
    return original_func(wc);
}



wint_t h_putwc_unlocked (wchar_t wc, FILE *stream){
    wint_t  (*original_func)(wchar_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "putwc_unlocked");
    return original_func(wc,stream);
}



ssize_t h_pwrite (int filedes, const void *buffer, size_t size, off_t offset){
    ssize_t  (*original_func)(int filedes, const void *buffer, size_t size, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pwrite");
    return original_func(filedes,buffer,size,offset);
}



// ssize_t h_pwrite64 (int filedes, const void *buffer, size_t size, off64_t offset){
//     ssize_t  (*original_func)(int filedes, const void *buffer, size_t size, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pwrite64");
//     return original_func(filedes,buffer,size,offset);
// }



ssize_t h_pwritev (int fd, const struct iovec *iov, int iovcnt, off_t offset){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset);
    original_func = dlsym(RTLD_NEXT, "pwritev");
    return original_func(fd,iov,iovcnt,offset);
}



ssize_t h_pwritev2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "pwritev2");
    return original_func(fd,iov,iovcnt,offset,flags);
}



// ssize_t h_pwritev64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset){
//     ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset);
//     original_func = dlsym(RTLD_NEXT, "pwritev64");
//     return original_func(fd,iov,iovcnt,offset);
// }



ssize_t h_pwritev64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags){
    ssize_t  (*original_func)(int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
    original_func = dlsym(RTLD_NEXT, "pwritev64v2");
    return original_func(fd,iov,iovcnt,offset,flags);
}



char * h_qecvt (long double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(long double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "qecvt");
    return original_func(value,ndigit,decpt,neg);
}



int h_qecvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "qecvt_r");
    return original_func(value,ndigit,decpt,neg,buf,len);
}



char * h_qfcvt (long double value, int ndigit, int *decpt, int *neg){
    char *  (*original_func)(long double value, int ndigit, int *decpt, int *neg);
    original_func = dlsym(RTLD_NEXT, "qfcvt");
    return original_func(value,ndigit,decpt,neg);
}



int h_qfcvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len){
    int  (*original_func)(long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "qfcvt_r");
    return original_func(value,ndigit,decpt,neg,buf,len);
}



char * h_qgcvt (long double value, int ndigit, char *buf){
    char *  (*original_func)(long double value, int ndigit, char *buf);
    original_func = dlsym(RTLD_NEXT, "qgcvt");
    return original_func(value,ndigit,buf);
}



void h_qsort (void *array, size_t count, size_t size, int(*compare)(const void *, const void *)){
    void  (*original_func)(void *array, size_t count, size_t size, int(*compare)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "qsort");
    return original_func(array,count,size,compare);
}



int h_raise (int signum){
    int  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "raise");
    return original_func(signum);
}



int h_rand (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "rand");
    return original_func();
}



long int h_random (){
    long int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "random");
    return original_func();
}



int h_random_r (struct random_data *restrict buf, int32_t *restrict result){
    int  (*original_func)(struct random_data *restrict buf, int32_t *restrict result);
    original_func = dlsym(RTLD_NEXT, "random_r");
    return original_func(buf,result);
}



int h_rand_r (unsigned int *seed){
    int  (*original_func)(unsigned int *seed);
    original_func = dlsym(RTLD_NEXT, "rand_r");
    return original_func(seed);
}



void * h_rawmemchr (const void *block, int c){
    void *  (*original_func)(const void *block, int c);
    original_func = dlsym(RTLD_NEXT, "rawmemchr");
    return original_func(block,c);
}



ssize_t h_read (int filedes, void *buffer, size_t size){
    ssize_t  (*original_func)(int filedes, void *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "read");
    return original_func(filedes,buffer,size);
}



struct dirent * h_readdir (DIR *dirstream){
    struct dirent *  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "readdir");
    return original_func(dirstream);
}



struct dirent64 * h_readdir64 (DIR *dirstream){
    struct dirent64 *  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "readdir64");
    return original_func(dirstream);
}



int h_readdir64_r (DIR *dirstream, struct dirent64 *entry, struct dirent64 **result){
    int  (*original_func)(DIR *dirstream, struct dirent64 *entry, struct dirent64 **result);
    original_func = dlsym(RTLD_NEXT, "readdir64_r");
    return original_func(dirstream,entry,result);
}



int h_readdir_r (DIR *dirstream, struct dirent *entry, struct dirent **result){
    int  (*original_func)(DIR *dirstream, struct dirent *entry, struct dirent **result);
    original_func = dlsym(RTLD_NEXT, "readdir_r");
    return original_func(dirstream,entry,result);
}



ssize_t h_readlink (const char *filename, char *buffer, size_t size){
    ssize_t  (*original_func)(const char *filename, char *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "readlink");
    return original_func(filename,buffer,size);
}



ssize_t h_readv (int filedes, const struct iovec *vector, int count){
    ssize_t  (*original_func)(int filedes, const struct iovec *vector, int count);
    original_func = dlsym(RTLD_NEXT, "readv");
    return original_func(filedes,vector,count);
}



void * h_realloc (void *ptr, size_t newsize){
    void *  (*original_func)(void *ptr, size_t newsize);
    original_func = dlsym(RTLD_NEXT, "realloc");
    return original_func(ptr,newsize);
}



void * h_reallocarray (void *ptr, size_t nmemb, size_t size){
    void *  (*original_func)(void *ptr, size_t nmemb, size_t size);
    original_func = dlsym(RTLD_NEXT, "reallocarray");
    return original_func(ptr,nmemb,size);
}



char * h_realpath (const char *restrict name, char *restrict resolved){
    char *  (*original_func)(const char *restrict name, char *restrict resolved);
    original_func = dlsym(RTLD_NEXT, "realpath");
    return original_func(name,resolved);
}



ssize_t h_recv (int socket, void *buffer, size_t size, int flags){
    ssize_t  (*original_func)(int socket, void *buffer, size_t size, int flags);
    original_func = dlsym(RTLD_NEXT, "recv");
    return original_func(socket,buffer,size,flags);
}



ssize_t h_recvfrom (int socket, void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t *length_ptr){
    ssize_t  (*original_func)(int socket, void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t *length_ptr);
    original_func = dlsym(RTLD_NEXT, "recvfrom");
    return original_func(socket,buffer,size,flags,addr,length_ptr);
}



int h_regcomp (regex_t *restrict compiled, const char *restrict pattern, int cflags){
    int  (*original_func)(regex_t *restrict compiled, const char *restrict pattern, int cflags);
    original_func = dlsym(RTLD_NEXT, "regcomp");
    return original_func(compiled,pattern,cflags);
}



size_t h_regerror (int errcode, const regex_t *restrict compiled, char *restrict buffer, size_t length){
    size_t  (*original_func)(int errcode, const regex_t *restrict compiled, char *restrict buffer, size_t length);
    original_func = dlsym(RTLD_NEXT, "regerror");
    return original_func(errcode,compiled,buffer,length);
}



int h_regexec (const regex_t *restrict compiled, const char *restrict string, size_t nmatch, regmatch_t matchptr[restrict], int eflags){
    int  (*original_func)(const regex_t *restrict compiled, const char *restrict string, size_t nmatch, regmatch_t matchptr[restrict], int eflags);
    original_func = dlsym(RTLD_NEXT, "regexec");
    return original_func(compiled,string,nmatch,matchptr,eflags);
}



void h_regfree (regex_t *compiled){
    void  (*original_func)(regex_t *compiled);
    original_func = dlsym(RTLD_NEXT, "regfree");
    return original_func(compiled);
}



double h_remainder (double numerator, double denominator){
    double  (*original_func)(double numerator, double denominator);
    original_func = dlsym(RTLD_NEXT, "remainder");
    return original_func(numerator,denominator);
}



float h_remainderf (float numerator, float denominator){
    float  (*original_func)(float numerator, float denominator);
    original_func = dlsym(RTLD_NEXT, "remainderf");
    return original_func(numerator,denominator);
}



long double h_remainderl (long double numerator, long double denominator){
    long double  (*original_func)(long double numerator, long double denominator);
    original_func = dlsym(RTLD_NEXT, "remainderl");
    return original_func(numerator,denominator);
}



int h_remove (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "remove");
    return original_func(filename);
}



int h_rename (const char *oldname, const char *newname){
    int  (*original_func)(const char *oldname, const char *newname);
    original_func = dlsym(RTLD_NEXT, "rename");
    return original_func(oldname,newname);
}



void h_rewind (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "rewind");
    return original_func(stream);
}



void h_rewinddir (DIR *dirstream){
    void  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "rewinddir");
    return original_func(dirstream);
}



char * h_rindex (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "rindex");
    return original_func(string,c);
}



double h_rint (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "rint");
    return original_func(x);
}



float h_rintf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "rintf");
    return original_func(x);
}



long double h_rintl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "rintl");
    return original_func(x);
}



int h_rmdir (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "rmdir");
    return original_func(filename);
}



double h_round (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "round");
    return original_func(x);
}



double h_roundeven (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "roundeven");
    return original_func(x);
}



float h_roundevenf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "roundevenf");
    return original_func(x);
}



long double h_roundevenl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "roundevenl");
    return original_func(x);
}



float h_roundf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "roundf");
    return original_func(x);
}



long double h_roundl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "roundl");
    return original_func(x);
}



int h_rpmatch (const char *response){
    int  (*original_func)(const char *response);
    original_func = dlsym(RTLD_NEXT, "rpmatch");
    return original_func(response);
}



double h_scalb (double value, double exponent){
    double  (*original_func)(double value, double exponent);
    original_func = dlsym(RTLD_NEXT, "scalb");
    return original_func(value,exponent);
}



float h_scalbf (float value, float exponent){
    float  (*original_func)(float value, float exponent);
    original_func = dlsym(RTLD_NEXT, "scalbf");
    return original_func(value,exponent);
}



long double h_scalbl (long double value, long double exponent){
    long double  (*original_func)(long double value, long double exponent);
    original_func = dlsym(RTLD_NEXT, "scalbl");
    return original_func(value,exponent);
}



double h_scalbln (double x, long int n){
    double  (*original_func)(double x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalbln");
    return original_func(x,n);
}



float h_scalblnf (float x, long int n){
    float  (*original_func)(float x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalblnf");
    return original_func(x,n);
}



long double h_scalblnl (long double x, long int n){
    long double  (*original_func)(long double x, long int n);
    original_func = dlsym(RTLD_NEXT, "scalblnl");
    return original_func(x,n);
}



double h_scalbn (double x, int n){
    double  (*original_func)(double x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbn");
    return original_func(x,n);
}



float h_scalbnf (float x, int n){
    float  (*original_func)(float x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbnf");
    return original_func(x,n);
}



long double h_scalbnl (long double x, int n){
    long double  (*original_func)(long double x, int n);
    original_func = dlsym(RTLD_NEXT, "scalbnl");
    return original_func(x,n);
}



int h_scandir (const char *dir, struct dirent ***namelist, int (*selector) (const struct dirent *), int (*cmp) (const struct dirent **, const struct dirent **)){
    int  (*original_func)(const char *dir, struct dirent ***namelist, int (*selector) (const struct dirent *), int (*cmp) (const struct dirent **, const struct dirent **));
    original_func = dlsym(RTLD_NEXT, "scandir");
    return original_func(dir,namelist,selector,cmp);
}



int h_scandir64 (const char *dir, struct dirent64 ***namelist, int (*selector) (const struct dirent64 *), int (*cmp) (const struct dirent64 **, const struct dirent64 **)){
    int  (*original_func)(const char *dir, struct dirent64 ***namelist, int (*selector) (const struct dirent64 *), int (*cmp) (const struct dirent64 **, const struct dirent64 **));
    original_func = dlsym(RTLD_NEXT, "scandir64");
    return original_func(dir,namelist,selector,cmp);
}



int h_scanf (const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "scanf");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}



int h_sched_getaffinity (pid_t pid, size_t cpusetsize, cpu_set_t *cpuset){
    int  (*original_func)(pid_t pid, size_t cpusetsize, cpu_set_t *cpuset);
    original_func = dlsym(RTLD_NEXT, "sched_getaffinity");
    return original_func(pid,cpusetsize,cpuset);
}



int h_sched_getparam (pid_t pid, struct sched_param *param){
    int  (*original_func)(pid_t pid, struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_getparam");
    return original_func(pid,param);
}



int h_sched_getscheduler (pid_t pid){
    int  (*original_func)(pid_t pid);
    original_func = dlsym(RTLD_NEXT, "sched_getscheduler");
    return original_func(pid);
}



int h_sched_get_priority_max (int policy){
    int  (*original_func)(int policy);
    original_func = dlsym(RTLD_NEXT, "sched_get_priority_max");
    return original_func(policy);
}



int h_sched_get_priority_min (int policy){
    int  (*original_func)(int policy);
    original_func = dlsym(RTLD_NEXT, "sched_get_priority_min");
    return original_func(policy);
}



int h_sched_rr_get_interval (pid_t pid, struct timespec *interval){
    int  (*original_func)(pid_t pid, struct timespec *interval);
    original_func = dlsym(RTLD_NEXT, "sched_rr_get_interval");
    return original_func(pid,interval);
}



int h_sched_setaffinity (pid_t pid, size_t cpusetsize, const cpu_set_t *cpuset){
    int  (*original_func)(pid_t pid, size_t cpusetsize, const cpu_set_t *cpuset);
    original_func = dlsym(RTLD_NEXT, "sched_setaffinity");
    return original_func(pid,cpusetsize,cpuset);
}



int h_sched_setparam (pid_t pid, const struct sched_param *param){
    int  (*original_func)(pid_t pid, const struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_setparam");
    return original_func(pid,param);
}



int h_sched_setscheduler (pid_t pid, int policy, const struct sched_param *param){
    int  (*original_func)(pid_t pid, int policy, const struct sched_param *param);
    original_func = dlsym(RTLD_NEXT, "sched_setscheduler");
    return original_func(pid,policy,param);
}



int h_sched_yield (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "sched_yield");
    return original_func();
}



char * h_secure_getenv (const char *name){
    char *  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "secure_getenv");
    return original_func(name);
}



unsigned short int * h_seed48 (unsigned short int seed16v[3]){
    unsigned short int *  (*original_func)(unsigned short int seed16v[3]);
    original_func = dlsym(RTLD_NEXT, "seed48");
    return original_func(seed16v);
}



int h_seed48_r (unsigned short int seed16v[3], struct drand48_data *buffer){
    int  (*original_func)(unsigned short int seed16v[3], struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "seed48_r");
    return original_func(seed16v,buffer);
}



void h_seekdir (DIR *dirstream, long int pos){
    void  (*original_func)(DIR *dirstream, long int pos);
    original_func = dlsym(RTLD_NEXT, "seekdir");
    return original_func(dirstream,pos);
}



int h_select (int nfds, fd_set *read_fds, fd_set *write_fds, fd_set *except_fds, struct timeval *timeout){
    int  (*original_func)(int nfds, fd_set *read_fds, fd_set *write_fds, fd_set *except_fds, struct timeval *timeout);
    original_func = dlsym(RTLD_NEXT, "select");
    return original_func(nfds,read_fds,write_fds,except_fds,timeout);
}



int h_semctl (int semid, int semnum, int cmd, ...){
    int  (*original_func)(int semid, int semnum, int cmd, ...);
    va_list ap;
    va_start(ap, cmd);
    original_func = dlsym(RTLD_NEXT, "semctl");
    original_func(semid,semnum,cmd, ap);
    va_end(ap);
    return ;
}



int h_semget (key_t key, int nsems, int semflg){
    int  (*original_func)(key_t key, int nsems, int semflg);
    original_func = dlsym(RTLD_NEXT, "semget");
    return original_func(key,nsems,semflg);
}



int h_semop (int semid, struct sembuf *sops, size_t nsops){
    int  (*original_func)(int semid, struct sembuf *sops, size_t nsops);
    original_func = dlsym(RTLD_NEXT, "semop");
    return original_func(semid,sops,nsops);
}



int h_semtimedop (int semid, struct sembuf *sops, size_t nsops, const struct timespec *timeout){
    int  (*original_func)(int semid, struct sembuf *sops, size_t nsops, const struct timespec *timeout);
    original_func = dlsym(RTLD_NEXT, "semtimedop");
    return original_func(semid,sops,nsops,timeout);
}



int h_sem_clockwait (sem_t *sem, clockid_t clockid,const struct timespec *abstime){
    int  (*original_func)(sem_t *sem, clockid_t clockid,const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "sem_clockwait");
    return original_func(sem,clockid,abstime);
}



int h_sem_close (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_close");
    return original_func(sem);
}



int h_sem_destroy (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_destroy");
    return original_func(sem);
}



int h_sem_getvalue (sem_t *sem, int *sval){
    int  (*original_func)(sem_t *sem, int *sval);
    original_func = dlsym(RTLD_NEXT, "sem_getvalue");
    return original_func(sem,sval);
}



int h_sem_init (sem_t *sem, int pshared, unsigned int value){
    int  (*original_func)(sem_t *sem, int pshared, unsigned int value);
    original_func = dlsym(RTLD_NEXT, "sem_init");
    return original_func(sem,pshared,value);
}


// sem_t *h_sem_open(const char *name, int oflag, ...){
//     int  (*original_func)(const char *name, int oflag, ...);
//     original_func = dlsym(RTLD_NEXT, "sem_open");
//     #ifndef O_CREAT
//     # define O_CREAT           0100        /* Not fcntl.  */
//     #endif
//     #ifndef O_EXCL
//     # define O_EXCL                   0200        /* Not fcntl.  */
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



int h_sem_post (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_post");
    return original_func(sem);
}



int h_sem_timedwait (sem_t *sem, const struct timespec *abstime){
    int  (*original_func)(sem_t *sem, const struct timespec *abstime);
    original_func = dlsym(RTLD_NEXT, "sem_timedwait");
    return original_func(sem,abstime);
}



int h_sem_trywait (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_trywait");
    return original_func(sem);
}



int h_sem_unlink (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "sem_unlink");
    return original_func(name);
}



int h_sem_wait (sem_t *sem){
    int  (*original_func)(sem_t *sem);
    original_func = dlsym(RTLD_NEXT, "sem_wait");
    return original_func(sem);
}



ssize_t h_send (int socket, const void *buffer, size_t size, int flags){
    ssize_t  (*original_func)(int socket, const void *buffer, size_t size, int flags);
    original_func = dlsym(RTLD_NEXT, "send");
    return original_func(socket,buffer,size,flags);
}



// h_ssize_t sendto (int socket, const void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t length){
//     ssize_t  (*original_func)(int socket, const void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t length);
//     original_func = dlsym(RTLD_NEXT, "sendto");
//     return original_func(socket,buffer,size,flags,addr,length);
// }

// 

void h_setbuf (FILE *stream, char *buf){
    void  (*original_func)(FILE *stream, char *buf);
    original_func = dlsym(RTLD_NEXT, "setbuf");
    return original_func(stream,buf);
}



void h_setbuffer (FILE *stream, char *buf, size_t size){
    void  (*original_func)(FILE *stream, char *buf, size_t size);
    original_func = dlsym(RTLD_NEXT, "setbuffer");
    return original_func(stream,buf,size);
}



int h_setcontext (const ucontext_t *ucp){
    int  (*original_func)(const ucontext_t *ucp);
    original_func = dlsym(RTLD_NEXT, "setcontext");
    return original_func(ucp);
}



int h_setdomainname (const char *name, size_t length){
    int  (*original_func)(const char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "setdomainname");
    return original_func(name,length);
}



int h_setegid (gid_t newgid){
    int  (*original_func)(gid_t newgid);
    original_func = dlsym(RTLD_NEXT, "setegid");
    return original_func(newgid);
}



int h_setenv (const char *name, const char *value, int replace){
    int  (*original_func)(const char *name, const char *value, int replace);
    original_func = dlsym(RTLD_NEXT, "setenv");
    return original_func(name,value,replace);
}



int h_seteuid (uid_t neweuid){
    int  (*original_func)(uid_t neweuid);
    original_func = dlsym(RTLD_NEXT, "seteuid");
    return original_func(neweuid);
}



int h_setfsent (){
    int  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setfsent");
    return original_func();
}



int h_setgid (gid_t newgid){
    int  (*original_func)(gid_t newgid);
    original_func = dlsym(RTLD_NEXT, "setgid");
    return original_func(newgid);
}



void h_setgrent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setgrent");
    return original_func();
}



int h_setgroups (size_t count, const gid_t *groups){
    int  (*original_func)(size_t count, const gid_t *groups);
    original_func = dlsym(RTLD_NEXT, "setgroups");
    return original_func(count,groups);
}



void h_sethostent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "sethostent");
    return original_func(stayopen);
}



int h_sethostid (long int id){
    int  (*original_func)(long int id);
    original_func = dlsym(RTLD_NEXT, "sethostid");
    return original_func(id);
}



int h_sethostname (const char *name, size_t length){
    int  (*original_func)(const char *name, size_t length);
    original_func = dlsym(RTLD_NEXT, "sethostname");
    return original_func(name,length);
}



// int h_setitimer (int which, const struct itimerval *new, struct itimerval *old){
//     int  (*original_func)(int which, const struct itimerval *new, struct itimerval *old);
//     original_func = dlsym(RTLD_NEXT, "setitimer");
//     return original_func(which,new,old);
// }

// 

void h_setlinebuf (FILE *stream){
    void  (*original_func)(FILE *stream);
    original_func = dlsym(RTLD_NEXT, "setlinebuf");
    return original_func(stream);
}



char * h_setlocale (int category, const char *locale){
    char *  (*original_func)(int category, const char *locale);
    original_func = dlsym(RTLD_NEXT, "setlocale");
    return original_func(category,locale);
}



int h_setlogmask (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "setlogmask");
    return original_func(mask);
}



FILE * h_setmntent (const char *file, const char *mode){
    FILE *  (*original_func)(const char *file, const char *mode);
    original_func = dlsym(RTLD_NEXT, "setmntent");
    return original_func(file,mode);
}



void h_setnetent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setnetent");
    return original_func(stayopen);
}



int h_setnetgrent (const char *netgroup){
    int  (*original_func)(const char *netgroup);
    original_func = dlsym(RTLD_NEXT, "setnetgrent");
    return original_func(netgroup);
}



int h_setpayload (double *x, double payload){
    int  (*original_func)(double *x, double payload);
    original_func = dlsym(RTLD_NEXT, "setpayload");
    return original_func(x,payload);
}



int h_setpayloadf (float *x, float payload){
    int  (*original_func)(float *x, float payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadf");
    return original_func(x,payload);
}



int h_setpayloadl (long double *x, long double payload){
    int  (*original_func)(long double *x, long double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadl");
    return original_func(x,payload);
}



int h_setpayloadsig (double *x, double payload){
    int  (*original_func)(double *x, double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsig");
    return original_func(x,payload);
}



int h_setpayloadsigf (float *x, float payload){
    int  (*original_func)(float *x, float payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsigf");
    return original_func(x,payload);
}



int h_setpayloadsigl (long double *x, long double payload){
    int  (*original_func)(long double *x, long double payload);
    original_func = dlsym(RTLD_NEXT, "setpayloadsigl");
    return original_func(x,payload);
}



int h_setpgid (pid_t pid, pid_t pgid){
    int  (*original_func)(pid_t pid, pid_t pgid);
    original_func = dlsym(RTLD_NEXT, "setpgid");
    return original_func(pid,pgid);
}



// int h_setpgrp (pid_t pid, pid_t pgid){
//     int  (*original_func)(pid_t pid, pid_t pgid);
//     original_func = dlsym(RTLD_NEXT, "setpgrp");
//     return original_func(pid,pgid);
// }

// 

// int h_setpriority (int class, int id, int niceval){
//     int  (*original_func)(int class, int id, int niceval);
//     original_func = dlsym(RTLD_NEXT, "setpriority");
//     return original_func(class,id,niceval);
// }

// 

void h_setprotoent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setprotoent");
    return original_func(stayopen);
}



void h_setpwent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setpwent");
    return original_func();
}



int h_setregid (gid_t rgid, gid_t egid){
    int  (*original_func)(gid_t rgid, gid_t egid);
    original_func = dlsym(RTLD_NEXT, "setregid");
    return original_func(rgid,egid);
}



int h_setreuid (uid_t ruid, uid_t euid){
    int  (*original_func)(uid_t ruid, uid_t euid);
    original_func = dlsym(RTLD_NEXT, "setreuid");
    return original_func(ruid,euid);
}



// int h_setrlimit (int resource, const struct rlimit *rlp){
//     int  (*original_func)(int resource, const struct rlimit *rlp);
//     original_func = dlsym(RTLD_NEXT, "setrlimit");
//     return original_func(resource,rlp);
// }

// 

// int h_setrlimit64 (int resource, const struct rlimit64 *rlp){
//     int  (*original_func)(int resource, const struct rlimit64 *rlp);
//     original_func = dlsym(RTLD_NEXT, "setrlimit64");
//     return original_func(resource,rlp);
// }

// 

void h_setservent (int stayopen){
    void  (*original_func)(int stayopen);
    original_func = dlsym(RTLD_NEXT, "setservent");
    return original_func(stayopen);
}



pid_t h_setsid (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setsid");
    return original_func();
}



int h_setsockopt (int socket, int level, int optname, const void *optval, socklen_t optlen){
    int  (*original_func)(int socket, int level, int optname, const void *optval, socklen_t optlen);
    original_func = dlsym(RTLD_NEXT, "setsockopt");
    return original_func(socket,level,optname,optval,optlen);
}



char * h_setstate (char *state){
    char *  (*original_func)(char *state);
    original_func = dlsym(RTLD_NEXT, "setstate");
    return original_func(state);
}



int h_setstate_r (char *restrict statebuf, struct random_data *restrict buf){
    int  (*original_func)(char *restrict statebuf, struct random_data *restrict buf);
    original_func = dlsym(RTLD_NEXT, "setstate_r");
    return original_func(statebuf,buf);
}



// int h_settimeofday (const struct timeval *tp, const void *tzp){
//     int  (*original_func)(const struct timeval *tp, const void *tzp);
//     original_func = dlsym(RTLD_NEXT, "settimeofday");
//     return original_func(tp,tzp);
// }

// 

int h_setuid (uid_t newuid){
    int  (*original_func)(uid_t newuid);
    original_func = dlsym(RTLD_NEXT, "setuid");
    return original_func(newuid);
}



void h_setutent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setutent");
    return original_func();
}



void h_setutxent (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "setutxent");
    return original_func();
}



int h_setvbuf (FILE *stream, char *buf, int mode, size_t size){
    int  (*original_func)(FILE *stream, char *buf, int mode, size_t size);
    original_func = dlsym(RTLD_NEXT, "setvbuf");
    return original_func(stream,buf,mode,size);
}



int h_shm_open (const char *name, int oflag, mode_t mode){
    int  (*original_func)(const char *name, int oflag, mode_t mode);
    original_func = dlsym(RTLD_NEXT, "shm_open");
    return original_func(name,oflag,mode);
}



int h_shm_unlink (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "shm_unlink");
    return original_func(name);
}



int h_shutdown (int socket, int how){
    int  (*original_func)(int socket, int how);
    original_func = dlsym(RTLD_NEXT, "shutdown");
    return original_func(socket,how);
}



void h_sigabbrev_np (int signum){
    void  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "sigabbrev_np");
    return original_func(signum);
}



int h_sigaction (int signum, const struct sigaction *restrict action, struct sigaction *restrict old_action){
    int  (*original_func)(int signum, const struct sigaction *restrict action, struct sigaction *restrict old_action);
    original_func = dlsym(RTLD_NEXT, "sigaction");
    return original_func(signum,action,old_action);
}



int h_sigaddset (sigset_t *set, int signum){
    int  (*original_func)(sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigaddset");
    return original_func(set,signum);
}



int h_sigaltstack (const stack_t *restrict stack, stack_t *restrict oldstack){
    int  (*original_func)(const stack_t *restrict stack, stack_t *restrict oldstack);
    original_func = dlsym(RTLD_NEXT, "sigaltstack");
    return original_func(stack,oldstack);
}



int h_sigblock (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigblock");
    return original_func(mask);
}



int h_sigdelset (sigset_t *set, int signum){
    int  (*original_func)(sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigdelset");
    return original_func(set,signum);
}



void h_sigdescr_np (int signum){
    void  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "sigdescr_np");
    return original_func(signum);
}



int h_sigemptyset (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigemptyset");
    return original_func(set);
}



int h_sigfillset (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigfillset");
    return original_func(set);
}



int h_siginterrupt (int signum, int failflag){
    int  (*original_func)(int signum, int failflag);
    original_func = dlsym(RTLD_NEXT, "siginterrupt");
    return original_func(signum,failflag);
}



int h_sigismember (const sigset_t *set, int signum){
    int  (*original_func)(const sigset_t *set, int signum);
    original_func = dlsym(RTLD_NEXT, "sigismember");
    return original_func(set,signum);
}



void h_siglongjmp (sigjmp_buf state, int value){
    void  (*original_func)(sigjmp_buf state, int value);
    original_func = dlsym(RTLD_NEXT, "siglongjmp");
    original_func(state,value);
}



sighandler_t h_signal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "signal");
    return original_func(signum,action);
}



double h_significand (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "significand");
    return original_func(x);
}



float h_significandf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "significandf");
    return original_func(x);
}



long double h_significandl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "significandl");
    return original_func(x);
}



int h_sigpause (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigpause");
    return original_func(mask);
}



int h_sigpending (sigset_t *set){
    int  (*original_func)(sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigpending");
    return original_func(set);
}



int h_sigprocmask (int how, const sigset_t *restrict set, sigset_t *restrict oldset){
    int  (*original_func)(int how, const sigset_t *restrict set, sigset_t *restrict oldset);
    original_func = dlsym(RTLD_NEXT, "sigprocmask");
    return original_func(how,set,oldset);
}



int h_sigsetjmp (sigjmp_buf state, int savesigs){
    int  (*original_func)(sigjmp_buf state, int savesigs);
    original_func = dlsym(RTLD_NEXT, "sigsetjmp");
    return original_func(state,savesigs);
}



int h_sigsetmask (int mask){
    int  (*original_func)(int mask);
    original_func = dlsym(RTLD_NEXT, "sigsetmask");
    return original_func(mask);
}



int h_sigstack (struct sigstack *stack, struct sigstack *oldstack){
    int  (*original_func)(struct sigstack *stack, struct sigstack *oldstack);
    original_func = dlsym(RTLD_NEXT, "sigstack");
    return original_func(stack,oldstack);
}



int h_sigsuspend (const sigset_t *set){
    int  (*original_func)(const sigset_t *set);
    original_func = dlsym(RTLD_NEXT, "sigsuspend");
    return original_func(set);
}



double h_sin (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sin");
    return original_func(x);
}



void h_sincos (double x, double *sinx, double *cosx){
    void  (*original_func)(double x, double *sinx, double *cosx);
    original_func = dlsym(RTLD_NEXT, "sincos");
    return original_func(x,sinx,cosx);
}



void h_sincosf (float x, float *sinx, float *cosx){
    void  (*original_func)(float x, float *sinx, float *cosx);
    original_func = dlsym(RTLD_NEXT, "sincosf");
    return original_func(x,sinx,cosx);
}



void h_sincosl (long double x, long double *sinx, long double *cosx){
    void  (*original_func)(long double x, long double *sinx, long double *cosx);
    original_func = dlsym(RTLD_NEXT, "sincosl");
    return original_func(x,sinx,cosx);
}



float h_sinf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sinf");
    return original_func(x);
}



double h_sinh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sinh");
    return original_func(x);
}



float h_sinhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sinhf");
    return original_func(x);
}



long double h_sinhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sinhl");
    return original_func(x);
}



long double h_sinl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sinl");
    return original_func(x);
}



unsigned int h_sleep (unsigned int seconds){
    unsigned int  (*original_func)(unsigned int seconds);
    original_func = dlsym(RTLD_NEXT, "sleep");
    return original_func(seconds);
}



int h_snprintf (char *s, size_t size, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char *s, size_t size, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "snprintf");
    int  ret_val = original_func(s,size,template,ap);
    va_end(ap);
    return ret_val;
}



int h_socket (int namespace, int style, int protocol){
    int  (*original_func)(int namespace, int style, int protocol);
    original_func = dlsym(RTLD_NEXT, "socket");
    return original_func(namespace,style,protocol);
}



int h_socketpair (int namespace, int style, int protocol, int filedes[2]){
    int  (*original_func)(int namespace, int style, int protocol, int filedes[2]);
    original_func = dlsym(RTLD_NEXT, "socketpair");
    return original_func(namespace,style,protocol,filedes);
}



int h_sprintf (char *s, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(char *s, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "sprintf");
    int  ret_val = original_func(s,template,ap);
    va_end(ap);
    return ret_val;
}



double h_sqrt (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "sqrt");
    return original_func(x);
}



float h_sqrtf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "sqrtf");
    return original_func(x);
}



long double h_sqrtl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "sqrtl");
    return original_func(x);
}



void h_srand (unsigned int seed){
    void  (*original_func)(unsigned int seed);
    original_func = dlsym(RTLD_NEXT, "srand");
    return original_func(seed);
}



void h_srand48 (long int seedval){
    void  (*original_func)(long int seedval);
    original_func = dlsym(RTLD_NEXT, "srand48");
    return original_func(seedval);
}



int h_srand48_r (long int seedval, struct drand48_data *buffer){
    int  (*original_func)(long int seedval, struct drand48_data *buffer);
    original_func = dlsym(RTLD_NEXT, "srand48_r");
    return original_func(seedval,buffer);
}



void h_srandom (unsigned int seed){
    void  (*original_func)(unsigned int seed);
    original_func = dlsym(RTLD_NEXT, "srandom");
    return original_func(seed);
}



int h_srandom_r (unsigned int seed, struct random_data *buf){
    int  (*original_func)(unsigned int seed, struct random_data *buf);
    original_func = dlsym(RTLD_NEXT, "srandom_r");
    return original_func(seed,buf);
}



int h_sscanf (const char *s, const char *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const char *s, const char *template, ...);
    original_func = dlsym(RTLD_NEXT, "sscanf");
    int  ret_val = original_func(s,template,ap);
    va_end(ap);
    return ret_val;
}



sighandler_t h_ssignal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "ssignal");
    return original_func(signum,action);
}



int h_stat (const char *filename, struct stat *buf){
    int  (*original_func)(const char *filename, struct stat *buf);
    original_func = dlsym(RTLD_NEXT, "stat");
    return original_func(filename,buf);
}



int h_stat64 (const char *filename, struct stat64 *buf){
    int  (*original_func)(const char *filename, struct stat64 *buf);
    original_func = dlsym(RTLD_NEXT, "stat64");
    return original_func(filename,buf);
}



int h_stime (const time_t *newtime){
    int  (*original_func)(const time_t *newtime);
    original_func = dlsym(RTLD_NEXT, "stime");
    return original_func(newtime);
}



char * h_stpcpy (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "stpcpy");
    return original_func(to,from);
}



char * h_stpncpy (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "stpncpy");
    return original_func(to,from,size);
}



int h_strcasecmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcasecmp");
    return original_func(s1,s2);
}



char * h_strcasestr (const char *haystack, const char *needle){
    char *  (*original_func)(const char *haystack, const char *needle);
    original_func = dlsym(RTLD_NEXT, "strcasestr");
    return original_func(haystack,needle);
}



char * h_strcat (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "strcat");
    return original_func(to,from);
}



char * h_strchr (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strchr");
    return original_func(string,c);
}



char * h_strchrnul (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strchrnul");
    return original_func(string,c);
}



int h_strcmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcmp");
    return original_func(s1,s2);
}



int h_strcoll (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strcoll");
    return original_func(s1,s2);
}



char * h_strcpy (char *restrict to, const char *restrict from){
    char *  (*original_func)(char *restrict to, const char *restrict from);
    original_func = dlsym(RTLD_NEXT, "strcpy");
    return original_func(to,from);
}



size_t h_strcspn (const char *string, const char *stopset){
    size_t  (*original_func)(const char *string, const char *stopset);
    original_func = dlsym(RTLD_NEXT, "strcspn");
    return original_func(string,stopset);
}



char * h_strdup (const char *s){
    char *  (*original_func)(const char *s);
    original_func = dlsym(RTLD_NEXT, "strdup");
    return original_func(s);
}



char * h_strerror (int errnum){
    char *  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerror");
    return original_func(errnum);
}



void h_strerrordesc_np (int errnum){
    void  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerrordesc_np");
    return original_func(errnum);
}



void h_strerrorname_np (int errnum){
    void  (*original_func)(int errnum);
    original_func = dlsym(RTLD_NEXT, "strerrorname_np");
    return original_func(errnum);
}



char * h_strerror_r (int errnum, char *buf, size_t n){
    char *  (*original_func)(int errnum, char *buf, size_t n);
    original_func = dlsym(RTLD_NEXT, "strerror_r");
    return original_func(errnum,buf,n);
}



ssize_t h_strfmon (char *s, size_t maxsize, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    ssize_t  (*original_func)(char *s, size_t maxsize, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "strfmon");
    ssize_t  ret_val = original_func(s,maxsize,format,ap);
    va_end(ap);
    return ret_val;
}



int h_strfromd (char *restrict string, size_t size, const char *restrict format, double value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, double value);
    original_func = dlsym(RTLD_NEXT, "strfromd");
    return original_func(string,size,format,value);
}



int h_strfromf (char *restrict string, size_t size, const char *restrict format, float value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, float value);
    original_func = dlsym(RTLD_NEXT, "strfromf");
    return original_func(string,size,format,value);
}



int h_strfroml (char *restrict string, size_t size, const char *restrict format, long double value){
    int  (*original_func)(char *restrict string, size_t size, const char *restrict format, long double value);
    original_func = dlsym(RTLD_NEXT, "strfroml");
    return original_func(string,size,format,value);
}



char * h_strfry (char *string){
    char *  (*original_func)(char *string);
    original_func = dlsym(RTLD_NEXT, "strfry");
    return original_func(string);
}



size_t h_strftime (char *s, size_t size, const char *template, const struct tm *brokentime){
    size_t  (*original_func)(char *s, size_t size, const char *template, const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "strftime");
    return original_func(s,size,template,brokentime);
}



size_t h_strlen (const char *s){
    size_t  (*original_func)(const char *s);
    original_func = dlsym(RTLD_NEXT, "strlen");
    return original_func(s);
}



int h_strncasecmp (const char *s1, const char *s2, size_t n){
    int  (*original_func)(const char *s1, const char *s2, size_t n);
    original_func = dlsym(RTLD_NEXT, "strncasecmp");
    return original_func(s1,s2,n);
}



char * h_strncat (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncat");
    return original_func(to,from,size);
}



int h_strncmp (const char *s1, const char *s2, size_t size){
    int  (*original_func)(const char *s1, const char *s2, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncmp");
    return original_func(s1,s2,size);
}



char * h_strncpy (char *restrict to, const char *restrict from, size_t size){
    char *  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strncpy");
    return original_func(to,from,size);
}



char * h_strndup (const char *s, size_t size){
    char *  (*original_func)(const char *s, size_t size);
    original_func = dlsym(RTLD_NEXT, "strndup");
    return original_func(s,size);
}



size_t h_strnlen (const char *s, size_t maxlen){
    size_t  (*original_func)(const char *s, size_t maxlen);
    original_func = dlsym(RTLD_NEXT, "strnlen");
    return original_func(s,maxlen);
}



char * h_strpbrk (const char *string, const char *stopset){
    char *  (*original_func)(const char *string, const char *stopset);
    original_func = dlsym(RTLD_NEXT, "strpbrk");
    return original_func(string,stopset);
}



char * h_strptime (const char *s, const char *fmt, struct tm *tp){
    char *  (*original_func)(const char *s, const char *fmt, struct tm *tp);
    original_func = dlsym(RTLD_NEXT, "strptime");
    return original_func(s,fmt,tp);
}



char * h_strrchr (const char *string, int c){
    char *  (*original_func)(const char *string, int c);
    original_func = dlsym(RTLD_NEXT, "strrchr");
    return original_func(string,c);
}



char * h_strsep (char **string_ptr, const char *delimiter){
    char *  (*original_func)(char **string_ptr, const char *delimiter);
    original_func = dlsym(RTLD_NEXT, "strsep");
    return original_func(string_ptr,delimiter);
}



char * h_strsignal (int signum){
    char *  (*original_func)(int signum);
    original_func = dlsym(RTLD_NEXT, "strsignal");
    return original_func(signum);
}



size_t h_strspn (const char *string, const char *skipset){
    size_t  (*original_func)(const char *string, const char *skipset);
    original_func = dlsym(RTLD_NEXT, "strspn");
    return original_func(string,skipset);
}



char * h_strstr (const char *haystack, const char *needle){
    char *  (*original_func)(const char *haystack, const char *needle);
    original_func = dlsym(RTLD_NEXT, "strstr");
    return original_func(haystack,needle);
}



double h_strtod (const char *restrict string, char **restrict tailptr){
    double  (*original_func)(const char *restrict string, char **restrict tailptr);
    original_func = dlsym(RTLD_NEXT, "strtod");
    return original_func(string,tailptr);
}



float h_strtof (const char *string, char **tailptr){
    float  (*original_func)(const char *string, char **tailptr);
    original_func = dlsym(RTLD_NEXT, "strtof");
    return original_func(string,tailptr);
}



intmax_t h_strtoimax (const char *restrict string, char **restrict tailptr, int base){
    intmax_t  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoimax");
    return original_func(string,tailptr,base);
}



char * h_strtok (char *restrict newstring, const char *restrict delimiters){
    char *  (*original_func)(char *restrict newstring, const char *restrict delimiters);
    original_func = dlsym(RTLD_NEXT, "strtok");
    return original_func(newstring,delimiters);
}



char * h_strtok_r (char *newstring, const char *delimiters, char **save_ptr){
    char *  (*original_func)(char *newstring, const char *delimiters, char **save_ptr);
    original_func = dlsym(RTLD_NEXT, "strtok_r");
    return original_func(newstring,delimiters,save_ptr);
}



long int h_strtol (const char *restrict string, char **restrict tailptr, int base){
    long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtol");
    return original_func(string,tailptr,base);
}



long double h_strtold (const char *string, char **tailptr){
    long double  (*original_func)(const char *string, char **tailptr);
    original_func = dlsym(RTLD_NEXT, "strtold");
    return original_func(string,tailptr);
}



long long int h_strtoll (const char *restrict string, char **restrict tailptr, int base){
    long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoll");
    return original_func(string,tailptr,base);
}



long long int h_strtoq (const char *restrict string, char **restrict tailptr, int base){
    long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoq");
    return original_func(string,tailptr,base);
}



unsigned long int h_strtoul (const char *restrict string, char **restrict tailptr, int base){
    unsigned long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoul");
    return original_func(string,tailptr,base);
}



unsigned long long int h_strtoull (const char *restrict string, char **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoull");
    return original_func(string,tailptr,base);
}



uintmax_t h_strtoumax (const char *restrict string, char **restrict tailptr, int base){
    uintmax_t  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtoumax");
    return original_func(string,tailptr,base);
}



unsigned long long int h_strtouq (const char *restrict string, char **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const char *restrict string, char **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "strtouq");
    return original_func(string,tailptr,base);
}



int h_strverscmp (const char *s1, const char *s2){
    int  (*original_func)(const char *s1, const char *s2);
    original_func = dlsym(RTLD_NEXT, "strverscmp");
    return original_func(s1,s2);
}



size_t h_strxfrm (char *restrict to, const char *restrict from, size_t size){
    size_t  (*original_func)(char *restrict to, const char *restrict from, size_t size);
    original_func = dlsym(RTLD_NEXT, "strxfrm");
    return original_func(to,from,size);
}




int h_swapcontext (ucontext_t *restrict oucp, const ucontext_t *restrict ucp){
    int  (*original_func)(ucontext_t *restrict oucp, const ucontext_t *restrict ucp);
    original_func = dlsym(RTLD_NEXT, "swapcontext");
    return original_func(oucp,ucp);
}



int h_swprintf (wchar_t *ws, size_t size, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(wchar_t *ws, size_t size, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "swprintf");
    int  ret_val = original_func(ws,size,template,ap);
    va_end(ap);
    return ret_val;
}



int h_swscanf (const wchar_t *ws, const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *ws, const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "swscanf");
    int  ret_val = original_func(ws,template,ap);
    va_end(ap);
    return ret_val;
}



int h_symlink (const char *oldname, const char *newname){
    int  (*original_func)(const char *oldname, const char *newname);
    original_func = dlsym(RTLD_NEXT, "symlink");
    return original_func(oldname,newname);
}



void h_sync (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "sync");
    return original_func();
}



long int h_syscall (long int sysno, ...){
    va_list ap;
    va_start(ap, sysno);
    long int  (*original_func)(long int sysno, ...);
    original_func = dlsym(RTLD_NEXT, "syscall");
    long int  ret_val = original_func(sysno,ap);
    va_end(ap);
    return ret_val;
}



long int h_sysconf (int parameter){
    long int  (*original_func)(int parameter);
    original_func = dlsym(RTLD_NEXT, "sysconf");
    return original_func(parameter);
}



void h_syslog (int facility_priority, const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(int facility_priority, const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "syslog");
    original_func(facility_priority,format,ap);
    va_end(ap);
    return;
}




int h_system (const char *command){
    int  (*original_func)(const char *command);
    original_func = dlsym(RTLD_NEXT, "system");
    return original_func(command);
}



sighandler_t h_sysv_signal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "sysv_signal");
    return original_func(signum,action);
}



double h_tan (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tan");
    return original_func(x);
}



float h_tanf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tanf");
    return original_func(x);
}



double h_tanh (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tanh");
    return original_func(x);
}



float h_tanhf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tanhf");
    return original_func(x);
}



long double h_tanhl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tanhl");
    return original_func(x);
}



long double h_tanl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tanl");
    return original_func(x);
}



int h_tcdrain (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "tcdrain");
    return original_func(filedes);
}



int h_tcflow (int filedes, int action){
    int  (*original_func)(int filedes, int action);
    original_func = dlsym(RTLD_NEXT, "tcflow");
    return original_func(filedes,action);
}



int h_tcflush (int filedes, int queue){
    int  (*original_func)(int filedes, int queue);
    original_func = dlsym(RTLD_NEXT, "tcflush");
    return original_func(filedes,queue);
}



int h_tcgetattr (int filedes, struct termios *termios_p){
    int  (*original_func)(int filedes, struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "tcgetattr");
    return original_func(filedes,termios_p);
}



pid_t h_tcgetpgrp (int filedes){
    pid_t  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "tcgetpgrp");
    return original_func(filedes);
}



pid_t h_tcgetsid (int fildes){
    pid_t  (*original_func)(int fildes);
    original_func = dlsym(RTLD_NEXT, "tcgetsid");
    return original_func(fildes);
}



int h_tcsendbreak (int filedes, int duration){
    int  (*original_func)(int filedes, int duration);
    original_func = dlsym(RTLD_NEXT, "tcsendbreak");
    return original_func(filedes,duration);
}



int h_tcsetattr (int filedes, int when, const struct termios *termios_p){
    int  (*original_func)(int filedes, int when, const struct termios *termios_p);
    original_func = dlsym(RTLD_NEXT, "tcsetattr");
    return original_func(filedes,when,termios_p);
}



int h_tcsetpgrp (int filedes, pid_t pgid){
    int  (*original_func)(int filedes, pid_t pgid);
    original_func = dlsym(RTLD_NEXT, "tcsetpgrp");
    return original_func(filedes,pgid);
}



void * h_tdelete (const void *key, void **rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void **rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tdelete");
    return original_func(key,rootp,compar);
}



// void h_tdestroy (void *vroot, __free_fn_t freefct){
//     void  (*original_func)(void *vroot, __free_fn_t freefct);
//     original_func = dlsym(RTLD_NEXT, "tdestroy");
//     return original_func(vroot,freefct);
// }



long int h_telldir (DIR *dirstream){
    long int  (*original_func)(DIR *dirstream);
    original_func = dlsym(RTLD_NEXT, "telldir");
    return original_func(dirstream);
}



char * h_tempnam (const char *dir, const char *prefix){
    char *  (*original_func)(const char *dir, const char *prefix);
    original_func = dlsym(RTLD_NEXT, "tempnam");
    return original_func(dir,prefix);
}



char * h_textdomain (const char *domainname){
    char *  (*original_func)(const char *domainname);
    original_func = dlsym(RTLD_NEXT, "textdomain");
    return original_func(domainname);
}



void * h_tfind (const void *key, void *const *rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void *const *rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tfind");
    return original_func(key,rootp,compar);
}



double h_tgamma (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "tgamma");
    return original_func(x);
}



float h_tgammaf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "tgammaf");
    return original_func(x);
}



long double h_tgammal (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "tgammal");
    return original_func(x);
}



int h_tgkill (pid_t pid, pid_t tid, int signum){
    int  (*original_func)(pid_t pid, pid_t tid, int signum);
    original_func = dlsym(RTLD_NEXT, "tgkill");
    return original_func(pid,tid,signum);
}



time_t h_time (time_t *result){
    time_t  (*original_func)(time_t *result);
    original_func = dlsym(RTLD_NEXT, "time");
    return original_func(result);
}



time_t h_timegm (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "timegm");
    return original_func(brokentime);
}



time_t h_timelocal (struct tm *brokentime){
    time_t  (*original_func)(struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "timelocal");
    return original_func(brokentime);
}



clock_t h_times (struct tms *buffer){
    clock_t  (*original_func)(struct tms *buffer);
    original_func = dlsym(RTLD_NEXT, "times");
    return original_func(buffer);
}



FILE * h_tmpfile (){
    FILE *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "tmpfile");
    return original_func();
}



FILE * h_tmpfile64 (){
    FILE *  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "tmpfile64");
    return original_func();
}



char * h_tmpnam (char *result){
    char *  (*original_func)(char *result);
    original_func = dlsym(RTLD_NEXT, "tmpnam");
    return original_func(result);
}



char * h_tmpnam_r (char *result){
    char *  (*original_func)(char *result);
    original_func = dlsym(RTLD_NEXT, "tmpnam_r");
    return original_func(result);
}




int h_tolower (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "tolower");
    return original_func(c);
}



int h_toupper (int c){
    int  (*original_func)(int c);
    original_func = dlsym(RTLD_NEXT, "toupper");
    return original_func(c);
}



wint_t h_towctrans (wint_t wc, wctrans_t desc){
    wint_t  (*original_func)(wint_t wc, wctrans_t desc);
    original_func = dlsym(RTLD_NEXT, "towctrans");
    return original_func(wc,desc);
}



wint_t h_towlower (wint_t wc){
    wint_t  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "towlower");
    return original_func(wc);
}



wint_t h_towupper (wint_t wc){
    wint_t  (*original_func)(wint_t wc);
    original_func = dlsym(RTLD_NEXT, "towupper");
    return original_func(wc);
}



double h_trunc (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "trunc");
    return original_func(x);
}



int h_truncate (const char *filename, off_t length){
    int  (*original_func)(const char *filename, off_t length);
    original_func = dlsym(RTLD_NEXT, "truncate");
    return original_func(filename,length);
}



// int h_truncate64 (const char *name, off64_t length){
//     int  (*original_func)(const char *name, off64_t length);
//     original_func = dlsym(RTLD_NEXT, "truncate64");
//     return original_func(name,length);
// }



float h_truncf (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "truncf");
    return original_func(x);
}



long double h_truncl (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "truncl");
    return original_func(x);
}



void * h_tsearch (const void *key, void **rootp, int(*compar)(const void *, const void *)){
    void *  (*original_func)(const void *key, void **rootp, int(*compar)(const void *, const void *));
    original_func = dlsym(RTLD_NEXT, "tsearch");
    return original_func(key,rootp,compar);
}



char * h_ttyname (int filedes){
    char *  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "ttyname");
    return original_func(filedes);
}



int h_ttyname_r (int filedes, char *buf, size_t len){
    int  (*original_func)(int filedes, char *buf, size_t len);
    original_func = dlsym(RTLD_NEXT, "ttyname_r");
    return original_func(filedes,buf,len);
}



void h_twalk (const void *root, __action_fn_t action){
    void  (*original_func)(const void *root, __action_fn_t action);
    original_func = dlsym(RTLD_NEXT, "twalk");
    return original_func(root,action);
}



void h_twalk_r (const void *root, void (*action) (const void *key, VISIT which, void *closure), void *closure){
    void  (*original_func)(const void *root, void (*action) (const void *key, VISIT which, void *closure), void *closure);
    original_func = dlsym(RTLD_NEXT, "twalk_r");
    return original_func(root,action,closure);
}



void h_tzset (){
    void  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "tzset");
    return original_func();
}



uintmax_t h_ufromfp (double x, int round, unsigned int width){
    uintmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfp");
    return original_func(x,round,width);
}



uintmax_t h_ufromfpf (float x, int round, unsigned int width){
    uintmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpf");
    return original_func(x,round,width);
}



uintmax_t h_ufromfpl (long double x, int round, unsigned int width){
    uintmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpl");
    return original_func(x,round,width);
}



uintmax_t h_ufromfpx (double x, int round, unsigned int width){
    uintmax_t  (*original_func)(double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpx");
    return original_func(x,round,width);
}



uintmax_t h_ufromfpxf (float x, int round, unsigned int width){
    uintmax_t  (*original_func)(float x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpxf");
    return original_func(x,round,width);
}



uintmax_t h_ufromfpxl (long double x, int round, unsigned int width){
    uintmax_t  (*original_func)(long double x, int round, unsigned int width);
    original_func = dlsym(RTLD_NEXT, "ufromfpxl");
    return original_func(x,round,width);
}



long int h_ulimit (int cmd, long newlimit){
    long int  (*original_func)(int cmd, long newlimit);
    original_func = dlsym(RTLD_NEXT, "ulimit");
    long int  ret_val = original_func(cmd,newlimit);
    return ret_val;
}



mode_t h_umask (mode_t mask){
    mode_t  (*original_func)(mode_t mask);
    original_func = dlsym(RTLD_NEXT, "umask");
    return original_func(mask);
}



int h_umount (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "umount");
    return original_func(file);
}



int h_umount2 (const char *file, int flags){
    int  (*original_func)(const char *file, int flags);
    original_func = dlsym(RTLD_NEXT, "umount2");
    return original_func(file,flags);
}



int h_uname (struct utsname *info){
    int  (*original_func)(struct utsname *info);
    original_func = dlsym(RTLD_NEXT, "uname");
    return original_func(info);
}



int h_ungetc (int c, FILE *stream){
    int  (*original_func)(int c, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ungetc");
    return original_func(c,stream);
}



wint_t h_ungetwc (wint_t wc, FILE *stream){
    wint_t  (*original_func)(wint_t wc, FILE *stream);
    original_func = dlsym(RTLD_NEXT, "ungetwc");
    return original_func(wc,stream);
}



int h_unlink (const char *filename){
    int  (*original_func)(const char *filename);
    original_func = dlsym(RTLD_NEXT, "unlink");
    return original_func(filename);
}



int h_unlockpt (int filedes){
    int  (*original_func)(int filedes);
    original_func = dlsym(RTLD_NEXT, "unlockpt");
    return original_func(filedes);
}



int h_unsetenv (const char *name){
    int  (*original_func)(const char *name);
    original_func = dlsym(RTLD_NEXT, "unsetenv");
    return original_func(name);
}



void h_updwtmp (const char *wtmp_file, const struct utmp *utmp){
    void  (*original_func)(const char *wtmp_file, const struct utmp *utmp);
    original_func = dlsym(RTLD_NEXT, "updwtmp");
    return original_func(wtmp_file,utmp);
}



int h_utime (const char *filename, const struct utimbuf *times){
    int  (*original_func)(const char *filename, const struct utimbuf *times);
    original_func = dlsym(RTLD_NEXT, "utime");
    return original_func(filename,times);
}



int h_utimes (const char *filename, const struct timeval tvp[2]){
    int  (*original_func)(const char *filename, const struct timeval tvp[2]);
    original_func = dlsym(RTLD_NEXT, "utimes");
    return original_func(filename,tvp);
}



int h_utmpname (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "utmpname");
    return original_func(file);
}



int h_utmpxname (const char *file){
    int  (*original_func)(const char *file);
    original_func = dlsym(RTLD_NEXT, "utmpxname");
    return original_func(file);
}



void * h_valloc (size_t size){
    void *  (*original_func)(size_t size);
    original_func = dlsym(RTLD_NEXT, "valloc");
    return original_func(size);
}



int h_vasprintf (char **ptr, const char *template, va_list ap){
    int  (*original_func)(char **ptr, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vasprintf");
    return original_func(ptr,template,ap);
}



void h_verr (int status, const char *format, va_list ap){
    void  (*original_func)(int status, const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "verr");
    return original_func(status,format,ap);
}



void h_verrx (int status, const char *format, va_list ap){
    void  (*original_func)(int status, const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "verrx");
    return original_func(status,format,ap);
}



int h_versionsort (const struct dirent **a, const struct dirent **b){
    int  (*original_func)(const struct dirent **a, const struct dirent **b);
    original_func = dlsym(RTLD_NEXT, "versionsort");
    return original_func(a,b);
}



int h_versionsort64 (const struct dirent64 **a, const struct dirent64 **b){
    int  (*original_func)(const struct dirent64 **a, const struct dirent64 **b);
    original_func = dlsym(RTLD_NEXT, "versionsort64");
    return original_func(a,b);
}



pid_t h_vfork (){
    pid_t  (*original_func)();
    original_func = dlsym(RTLD_NEXT, "vfork");
    return original_func();
}



int h_vfprintf (FILE *stream, const char *template, va_list ap){
    int  (*original_func)(FILE *stream, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfprintf");
    return original_func(stream,template,ap);
}



int h_vfscanf (FILE *stream, const char *template, va_list ap){
    int  (*original_func)(FILE *stream, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfscanf");
    return original_func(stream,template,ap);
}



int h_vfwprintf (FILE *stream, const wchar_t *template, va_list ap){
    int  (*original_func)(FILE *stream, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfwprintf");
    return original_func(stream,template,ap);
}



int h_vfwscanf (FILE *stream, const wchar_t *template, va_list ap){
    int  (*original_func)(FILE *stream, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vfwscanf");
    return original_func(stream,template,ap);
}



int h_vlimit (int resource, int limit){
    int  (*original_func)(int resource, int limit);
    original_func = dlsym(RTLD_NEXT, "vlimit");
    return original_func(resource,limit);
}



int h_vprintf (const char *template, va_list ap){
    int  (*original_func)(const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vprintf");
    return original_func(template,ap);
}



int h_vscanf (const char *template, va_list ap){
    int  (*original_func)(const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vscanf");
    return original_func(template,ap);
}



int h_vsnprintf (char *s, size_t size, const char *template, va_list ap){
    int  (*original_func)(char *s, size_t size, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsnprintf");
    return original_func(s,size,template,ap);
}



int h_vsprintf (char *s, const char *template, va_list ap){
    int  (*original_func)(char *s, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsprintf");
    return original_func(s,template,ap);
}



int h_vsscanf (const char *s, const char *template, va_list ap){
    int  (*original_func)(const char *s, const char *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vsscanf");
    return original_func(s,template,ap);
}



int h_vswprintf (wchar_t *ws, size_t size, const wchar_t *template, va_list ap){
    int  (*original_func)(wchar_t *ws, size_t size, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vswprintf");
    return original_func(ws,size,template,ap);
}



int h_vswscanf (const wchar_t *s, const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *s, const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vswscanf");
    return original_func(s,template,ap);
}



void h_vsyslog (int facility_priority, const char *format, va_list arglist){
    void  (*original_func)(int facility_priority, const char *format, va_list arglist);
    original_func = dlsym(RTLD_NEXT, "vsyslog");
    return original_func(facility_priority,format,arglist);
}



void h_vwarn (const char *format, va_list ap){
    void  (*original_func)(const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwarn");
    return original_func(format,ap);
}



void h_vwarnx (const char *format, va_list ap){
    void  (*original_func)(const char *format, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwarnx");
    return original_func(format,ap);
}



int h_vwprintf (const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwprintf");
    return original_func(template,ap);
}



int h_vwscanf (const wchar_t *template, va_list ap){
    int  (*original_func)(const wchar_t *template, va_list ap);
    original_func = dlsym(RTLD_NEXT, "vwscanf");
    return original_func(template,ap);
}



pid_t h_wait (int *status_ptr){
    pid_t  (*original_func)(int *status_ptr);
    original_func = dlsym(RTLD_NEXT, "wait");
    return original_func(status_ptr);
}



pid_t h_wait3 (int *status_ptr, int options, struct rusage *usage){
    pid_t  (*original_func)(int *status_ptr, int options, struct rusage *usage);
    original_func = dlsym(RTLD_NEXT, "wait3");
    return original_func(status_ptr,options,usage);
}



pid_t h_wait4 (pid_t pid, int *status_ptr, int options, struct rusage *usage){
    pid_t  (*original_func)(pid_t pid, int *status_ptr, int options, struct rusage *usage);
    original_func = dlsym(RTLD_NEXT, "wait4");
    return original_func(pid,status_ptr,options,usage);
}



pid_t h_waitpid (pid_t pid, int *status_ptr, int options){
    pid_t  (*original_func)(pid_t pid, int *status_ptr, int options);
    original_func = dlsym(RTLD_NEXT, "waitpid");
    return original_func(pid,status_ptr,options);
}



void h_warn (const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "warn");
    original_func(format,ap);
    va_end(ap);
    return;
}




void h_warnx (const char *format, ...){
    va_list ap;
    va_start(ap, format);
    void  (*original_func)(const char *format, ...);
    original_func = dlsym(RTLD_NEXT, "warnx");
    original_func(format,ap);
    va_end(ap);
    return;
}




wchar_t * h_wcpcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcpcpy");
    return original_func(wto,wfrom);
}



wchar_t * h_wcpncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcpncpy");
    return original_func(wto,wfrom,size);
}



size_t h_wcrtomb (char *restrict s, wchar_t wc, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict s, wchar_t wc, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcrtomb");
    return original_func(s,wc,ps);
}



int h_wcscasecmp (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscasecmp");
    return original_func(ws1,ws2);
}



wchar_t * h_wcscat (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcscat");
    return original_func(wto,wfrom);
}



wchar_t * h_wcschr (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcschr");
    return original_func(wstring,wc);
}



wchar_t * h_wcschrnul (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcschrnul");
    return original_func(wstring,wc);
}



int h_wcscmp (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscmp");
    return original_func(ws1,ws2);
}



int h_wcscoll (const wchar_t *ws1, const wchar_t *ws2){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2);
    original_func = dlsym(RTLD_NEXT, "wcscoll");
    return original_func(ws1,ws2);
}



wchar_t * h_wcscpy (wchar_t *restrict wto, const wchar_t *restrict wfrom){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom);
    original_func = dlsym(RTLD_NEXT, "wcscpy");
    return original_func(wto,wfrom);
}



size_t h_wcscspn (const wchar_t *wstring, const wchar_t *stopset){
    size_t  (*original_func)(const wchar_t *wstring, const wchar_t *stopset);
    original_func = dlsym(RTLD_NEXT, "wcscspn");
    return original_func(wstring,stopset);
}



wchar_t * h_wcsdup (const wchar_t *ws){
    wchar_t *  (*original_func)(const wchar_t *ws);
    original_func = dlsym(RTLD_NEXT, "wcsdup");
    return original_func(ws);
}



size_t h_wcsftime (wchar_t *s, size_t size, const wchar_t *template, const struct tm *brokentime){
    size_t  (*original_func)(wchar_t *s, size_t size, const wchar_t *template, const struct tm *brokentime);
    original_func = dlsym(RTLD_NEXT, "wcsftime");
    return original_func(s,size,template,brokentime);
}



size_t h_wcslen (const wchar_t *ws){
    size_t  (*original_func)(const wchar_t *ws);
    original_func = dlsym(RTLD_NEXT, "wcslen");
    return original_func(ws);
}



int h_wcsncasecmp (const wchar_t *ws1, const wchar_t *s2, size_t n){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *s2, size_t n);
    original_func = dlsym(RTLD_NEXT, "wcsncasecmp");
    return original_func(ws1,s2,n);
}



wchar_t * h_wcsncat (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncat");
    return original_func(wto,wfrom,size);
}



int h_wcsncmp (const wchar_t *ws1, const wchar_t *ws2, size_t size){
    int  (*original_func)(const wchar_t *ws1, const wchar_t *ws2, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncmp");
    return original_func(ws1,ws2,size);
}



wchar_t * h_wcsncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsncpy");
    return original_func(wto,wfrom,size);
}



size_t h_wcsnlen (const wchar_t *ws, size_t maxlen){
    size_t  (*original_func)(const wchar_t *ws, size_t maxlen);
    original_func = dlsym(RTLD_NEXT, "wcsnlen");
    return original_func(ws,maxlen);
}



size_t h_wcsnrtombs (char *restrict dst, const wchar_t **restrict src, size_t nwc, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict dst, const wchar_t **restrict src, size_t nwc, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcsnrtombs");
    return original_func(dst,src,nwc,len,ps);
}



wchar_t * h_wcspbrk (const wchar_t *wstring, const wchar_t *stopset){
    wchar_t *  (*original_func)(const wchar_t *wstring, const wchar_t *stopset);
    original_func = dlsym(RTLD_NEXT, "wcspbrk");
    return original_func(wstring,stopset);
}



wchar_t * h_wcsrchr (const wchar_t *wstring, wchar_t wc){
    wchar_t *  (*original_func)(const wchar_t *wstring, wchar_t wc);
    original_func = dlsym(RTLD_NEXT, "wcsrchr");
    return original_func(wstring,wc);
}



size_t h_wcsrtombs (char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps){
    size_t  (*original_func)(char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps);
    original_func = dlsym(RTLD_NEXT, "wcsrtombs");
    return original_func(dst,src,len,ps);
}



size_t h_wcsspn (const wchar_t *wstring, const wchar_t *skipset){
    size_t  (*original_func)(const wchar_t *wstring, const wchar_t *skipset);
    original_func = dlsym(RTLD_NEXT, "wcsspn");
    return original_func(wstring,skipset);
}



wchar_t * h_wcsstr (const wchar_t *haystack, const wchar_t *needle){
    wchar_t *  (*original_func)(const wchar_t *haystack, const wchar_t *needle);
    original_func = dlsym(RTLD_NEXT, "wcsstr");
    return original_func(haystack,needle);
}



double h_wcstod (const wchar_t *restrict string, wchar_t **restrict tailptr){
    double  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstod");
    return original_func(string,tailptr);
}



float h_wcstof (const wchar_t *string, wchar_t **tailptr){
    float  (*original_func)(const wchar_t *string, wchar_t **tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstof");
    return original_func(string,tailptr);
}



intmax_t h_wcstoimax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    intmax_t  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoimax");
    return original_func(string,tailptr,base);
}



wchar_t * h_wcstok (wchar_t *newstring, const wchar_t *delimiters, wchar_t **save_ptr){
    wchar_t *  (*original_func)(wchar_t *newstring, const wchar_t *delimiters, wchar_t **save_ptr);
    original_func = dlsym(RTLD_NEXT, "wcstok");
    return original_func(newstring,delimiters,save_ptr);
}



long int h_wcstol (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstol");
    return original_func(string,tailptr,base);
}



long double h_wcstold (const wchar_t *string, wchar_t **tailptr){
    long double  (*original_func)(const wchar_t *string, wchar_t **tailptr);
    original_func = dlsym(RTLD_NEXT, "wcstold");
    return original_func(string,tailptr);
}



long long int h_wcstoll (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoll");
    return original_func(string,tailptr,base);
}



size_t h_wcstombs (char *string, const wchar_t *wstring, size_t size){
    size_t  (*original_func)(char *string, const wchar_t *wstring, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcstombs");
    return original_func(string,wstring,size);
}



long long int h_wcstoq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoq");
    return original_func(string,tailptr,base);
}



unsigned long int h_wcstoul (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoul");
    return original_func(string,tailptr,base);
}



unsigned long long int h_wcstoull (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoull");
    return original_func(string,tailptr,base);
}



uintmax_t h_wcstoumax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    uintmax_t  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstoumax");
    return original_func(string,tailptr,base);
}



unsigned long long int h_wcstouq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base){
    unsigned long long int  (*original_func)(const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
    original_func = dlsym(RTLD_NEXT, "wcstouq");
    return original_func(string,tailptr,base);
}



wchar_t * h_wcswcs (const wchar_t *haystack, const wchar_t *needle){
    wchar_t *  (*original_func)(const wchar_t *haystack, const wchar_t *needle);
    original_func = dlsym(RTLD_NEXT, "wcswcs");
    return original_func(haystack,needle);
}



size_t h_wcsxfrm (wchar_t *restrict wto, const wchar_t *wfrom, size_t size){
    size_t  (*original_func)(wchar_t *restrict wto, const wchar_t *wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wcsxfrm");
    return original_func(wto,wfrom,size);
}



int h_wctob (wint_t c){
    int  (*original_func)(wint_t c);
    original_func = dlsym(RTLD_NEXT, "wctob");
    return original_func(c);
}



int h_wctomb (char *string, wchar_t wchar){
    int  (*original_func)(char *string, wchar_t wchar);
    original_func = dlsym(RTLD_NEXT, "wctomb");
    return original_func(string,wchar);
}



wctrans_t h_wctrans (const char *property){
    wctrans_t  (*original_func)(const char *property);
    original_func = dlsym(RTLD_NEXT, "wctrans");
    return original_func(property);
}



wctype_t h_wctype (const char *property){
    wctype_t  (*original_func)(const char *property);
    original_func = dlsym(RTLD_NEXT, "wctype");
    return original_func(property);
}



wchar_t * h_wmemchr (const wchar_t *block, wchar_t wc, size_t size){
    wchar_t *  (*original_func)(const wchar_t *block, wchar_t wc, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemchr");
    return original_func(block,wc,size);
}



int h_wmemcmp (const wchar_t *a1, const wchar_t *a2, size_t size){
    int  (*original_func)(const wchar_t *a1, const wchar_t *a2, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemcmp");
    return original_func(a1,a2,size);
}



wchar_t * h_wmemcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemcpy");
    return original_func(wto,wfrom,size);
}



wchar_t * h_wmemmove (wchar_t *wto, const wchar_t *wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *wto, const wchar_t *wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemmove");
    return original_func(wto,wfrom,size);
}



wchar_t * h_wmempcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size){
    wchar_t *  (*original_func)(wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmempcpy");
    return original_func(wto,wfrom,size);
}



wchar_t * h_wmemset (wchar_t *block, wchar_t wc, size_t size){
    wchar_t *  (*original_func)(wchar_t *block, wchar_t wc, size_t size);
    original_func = dlsym(RTLD_NEXT, "wmemset");
    return original_func(block,wc,size);
}



int h_wordexp (const char *words, wordexp_t *word_vector_ptr, int flags){
    int  (*original_func)(const char *words, wordexp_t *word_vector_ptr, int flags);
    original_func = dlsym(RTLD_NEXT, "wordexp");
    return original_func(words,word_vector_ptr,flags);
}



void h_wordfree (wordexp_t *word_vector_ptr){
    void  (*original_func)(wordexp_t *word_vector_ptr);
    original_func = dlsym(RTLD_NEXT, "wordfree");
    return original_func(word_vector_ptr);
}



int h_wprintf (const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "wprintf");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}



ssize_t h_write (int filedes, const void *buffer, size_t size){
    ssize_t  (*original_func)(int filedes, const void *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "write");
    return original_func(filedes,buffer,size);
}




ssize_t h_writev (int filedes, const struct iovec *vector, int count){
    ssize_t  (*original_func)(int filedes, const struct iovec *vector, int count);
    original_func = dlsym(RTLD_NEXT, "writev");
    return original_func(filedes,vector,count);
}



int h_wscanf (const wchar_t *template, ...){
    va_list ap;
    va_start(ap, template);
    int  (*original_func)(const wchar_t *template, ...);
    original_func = dlsym(RTLD_NEXT, "wscanf");
    int  ret_val = original_func(template,ap);
    va_end(ap);
    return ret_val;
}



double h_y0 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "y0");
    return original_func(x);
}



float h_y0f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "y0f");
    return original_func(x);
}



long double h_y0l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "y0l");
    return original_func(x);
}



double h_y1 (double x){
    double  (*original_func)(double x);
    original_func = dlsym(RTLD_NEXT, "y1");
    return original_func(x);
}



float h_y1f (float x){
    float  (*original_func)(float x);
    original_func = dlsym(RTLD_NEXT, "y1f");
    return original_func(x);
}



long double h_y1l (long double x){
    long double  (*original_func)(long double x);
    original_func = dlsym(RTLD_NEXT, "y1l");
    return original_func(x);
}



double h_yn (int n, double x){
    double  (*original_func)(int n, double x);
    original_func = dlsym(RTLD_NEXT, "yn");
    return original_func(n,x);
}



float h_ynf (int n, float x){
    float  (*original_func)(int n, float x);
    original_func = dlsym(RTLD_NEXT, "ynf");
    return original_func(n,x);
}



long double h_ynl (int n, long double x){
    long double  (*original_func)(int n, long double x);
    original_func = dlsym(RTLD_NEXT, "ynl");
    return original_func(n,x);
}


