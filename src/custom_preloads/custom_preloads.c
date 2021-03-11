#define _GNU_SOURCE
#include <unistd.h>
#include "default_preloads/wrapper.h" //mandatory
#include "pid_handling.h"
#include "logger.h"
#include "utils.h"
#include <dlfcn.h>
#include <sys/ptrace.h>
#include <stdarg.h>
#include <sys/user.h>
#include <sys/types.h>
#include <unistd.h>
#define preload_log(FORMAT, ...) \
    do { logger(SYNC, __func__, FORMAT, __VA_ARGS__); } while(0)


int puts(const char *s){
    preload_log("puts(\"%s\")", s);
    return 1;
}


pid_t fork(void){
    int (*o_fork)(void);
    o_fork = dlsym(RTLD_NEXT, "fork");
    shm_add_pid(getpid());
    pid_t ret_pid = o_fork();
    if(ret_pid == 0){ // child
        __shm_create_lock();
        shm_add_pid(getpid());
        self_pid = getpid(); // gets the new pid for logging 
        self_childid++;
        logger(SYNC, __func__, "[child pid %d]", self_pid);
        return ret_pid;
    }
    logger(SYNC, __func__, "%d", ret_pid);
    return ret_pid;
}


pid_t waitpid(pid_t pid, int *wstatus, int options){
    logger(SYNC, __func__, "%s", "");
    pid_t (*original_waitpid)(pid_t pid, int *wstatus, int options);
    original_waitpid = dlsym(RTLD_NEXT, "waitpid");
    pid_t p = original_waitpid(pid, wstatus, options);
    int signo = (*wstatus & 0xFF00) >> 8;
    preload_log("Waitpid received signal %02d : %s from %d", signo, strsignal(signo), pid);
    return p;
}

// long peekdata(int pid, int reg, int offset){
//     long (*original_ptrace)(int request, pid_t pid, void *addr, void *data);
//     original_ptrace = dlsym(RTLD_NEXT, "ptrace");
//     return original_ptrace(PTRACE_PEEKDATA, pid, reg + offset, 0);
// }
long ptrace(enum __ptrace_request request, ...){
    long (*original_ptrace)(int request, ...);
    va_list ap;
    int ret; // ret value of original ptrace
    struct user_regs_struct *regs;
    va_start(ap, request);
    pid_t pid = va_arg(ap, pid_t);
    void* addr = va_arg(ap, void*);
    void* data = va_arg(ap, void*);
    va_end(ap);


    original_ptrace = dlsym(RTLD_NEXT, "ptrace");
    pid_t pid_curr = getpid();
    unsigned int * p = (void *)addr;
    switch (request)
    {
    case PTRACE_ATTACH:
        preload_log("ptrace(PTRACE_ATTACH, %d)", pid);
        break;
    case PTRACE_POKEDATA:
        preload_log("ptrace(PTRACE_POKE, %d, %X, %lX)", pid, addr, *(long int*)data);
        break;
    case PTRACE_PEEKDATA:
        preload_log("ptrace(PTRACE_PEEK, %d, %lX, %lX) | [peek value %lX]", pid, addr, *(long int*)data, *(long int*)addr);
        break;
    case PTRACE_SETREGS:
        #ifdef __x86_64__
        regs = (struct user_regs_struct*)data;
        ret = original_ptrace(request, pid, addr, data);
        preload_log("ptrace(PTRACE_SETREGS, %d)"
        "\n"
        "\t\trax : %lX\n"
        "\t\trcx : %lX\n"
        "\t\trdx : %lX\n"
        "\t\trsi : %lX\n"
        "\t\trdi : %lX\n"
        "\t\trbx : %lX\n"
        "\t\tr8  : %lX\n"
        "\t\tr9  : %lX\n"
        "\t\tr10 : %lX\n"
        "\t\tr11 : %lX\n"
        "\t\tr12 : %lX\n"
        "\t\tr14 : %lX\n"
        "\t\tr13 : %lX\n"
        "\t\tr15 : %lX\n"
        "\t\trbp : %lX\n"
        "\t\trsp : %lX\n"
        "\t\torax : %lX (origin RAX)\n"
        "\t\trip : %lX\n"
        "", pid, regs->rax, regs->rcx, regs->rdx, regs->rsi, regs->rdi, regs->rbx, regs->r8, regs->r9, regs->r10, regs->r11, regs->r12, regs->r13, regs->r14, regs->r15, regs->rbp, regs->rsp, regs->orig_rax, regs->rip);
        return ret;
        #else
        regs = (struct user_regs_struct*)data;
        preload_log("ptrace(PTRACE_GETREGS, %d)", pid);
        ret = original_ptrace(request, pid, addr, data);
        preload_log("\n"
        "\t\teax : %X\n"
        "\t\tebx : %X\n"
        "\t\tecx : %X\n"
        "\t\tedx : %X\n"
        "\t\tedi : %X\n"
        "\t\tesi : %X\n"
        "\t\tesp : %X\n"
        "\t\teip : %X\n"
        "\t\torig_eax: %X\n", regs->eax, regs->ebx, regs->ecx, regs->edx, regs->edi, regs->esi, regs->esp, regs->eip, regs->orig_eax);
        return ret;
        #endif
        break;
    case 0x1F:
        preload_log("ptrace(PTRACE_SYS_EMU, %d)", pid);
        break;
    case PTRACE_TRACEME:
        preload_log("ptrace(PTRACE_TRACEME, %d)", pid);
        break;
    case PTRACE_CONT:
        preload_log("ptrace(PTRACE_CONT, %d) | [Delivered signal]: [%s]", pid, strsignal(data));
        break;
    case PTRACE_GETREGS:
        #ifdef __x86_64__
        regs = (struct user_regs_struct*)data;
        ret = original_ptrace(request, pid, addr, data);
        preload_log("ptrace(PTRACE_GETREGS, %d)"
        "\n"
        "\t\trax : %lX\n"
        "\t\trcx : %lX\n"
        "\t\trdx : %lX\n"
        "\t\trsi : %lX\n"
        "\t\trdi : %lX\n"
        "\t\trbx : %lX\n"
        "\t\tr8  : %lX\n"
        "\t\tr9  : %lX\n"
        "\t\tr10 : %lX\n"
        "\t\tr11 : %lX\n"
        "\t\tr12 : %lX\n"
        "\t\tr14 : %lX\n"
        "\t\tr13 : %lX\n"
        "\t\tr15 : %lX\n"
        "\t\trbp : %lX\n"
        "\t\trsp : %lX\n"
        "\t\torax : %lX (origin RAX)\n"
        "\t\trip : %lX\n"
        "", pid, regs->rax, regs->rcx, regs->rdx, regs->rsi, regs->rdi, regs->rbx, regs->r8, regs->r9, regs->r10, regs->r11, regs->r12, regs->r13, regs->r14, regs->r15, regs->rbp, regs->rsp, regs->orig_rax, regs->rip);
        return ret;
        #else
        regs = (struct user_regs_struct*)data;
        preload_log("ptrace(PTRACE_GETREGS, %d)", pid);
        ret = original_ptrace(request, pid, addr, data);
        preload_log("\n"
        "\t\teax : %X\n"
        "\t\tebx : %X\n"
        "\t\tecx : %X\n"
        "\t\tedx : %X\n"
        "\t\tedi : %X\n"
        "\t\tesi : %X\n"
        "\t\tesp : %X\n"
        "\t\teip : %X\n"
        "\t\torig_eax: %X\n", regs->eax, regs->ebx, regs->ecx, regs->edx, regs->edi, regs->esi, regs->esp, regs->eip, regs->orig_eax);
        return ret;
        #endif
        break;
    case PTRACE_SINGLESTEP:
        preload_log("ptrace(PTRACE_SINGLESTEP, %d)", pid);
        break;
    case PTRACE_DETACH:
        preload_log("ptrace(PTRACE_DETACH, %d)", pid);
        break;
    default:
        preload_log("ptrace | %d is not implemented by the tool.", request);
        break;
    }

    return original_ptrace(request, pid, addr, data);
}

ssize_t write (int filedes, const void *buffer, size_t size){
    ssize_t  (*original_func)(int filedes, const void *buffer, size_t size);
    original_func = dlsym(RTLD_NEXT, "write");
    char* hexbuf = hexstr(buffer, size);
    if (size >= 50) {
        char* filename = dump_data(buffer, size);
        preload_log("write(%d, [hex formated] %.2000s..., %ld). \nContent saved to file %s.", filedes, hexbuf, size, filename);
        free(filename);
    } else {
        preload_log("write(%d, [hex formated] %s, %ld). ", filedes, hexbuf, size);
    }
    free(hexbuf);
    return original_func(filedes,buffer,size);
}

sighandler_t signal (int signum, sighandler_t action){
    sighandler_t  (*original_func)(int signum, sighandler_t action);
    original_func = dlsym(RTLD_NEXT, "signal");
    sighandler_t ret = original_func(signum,action);
    logger(UNSYNC, __func__, "signal(%s, %p)", strsignal(signum), action);
    return ret;
}


int SHA256_Update(SHA256_CTX *c, const void *data, size_t len){
    int  (*original_func)(SHA256_CTX *c, const void *data, size_t len);
    original_func = dlsym(RTLD_NEXT, "SHA256_Update");
    char* hexbuf = hexstr(data, len);
    logger(SYNC, __func__, "SHA256_Update(ctx, 0x%s, %ld)", hexbuf, len);
    free(hexbuf);

    return original_func(c, data, len);
}