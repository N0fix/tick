#define _GNU_SOURCE
#include <unistd.h>
pid_t fork(void);
#include "default_preloads/wrapper.h" //mandatory
#include "pid_handling.h"
#include "logger.h"
#include <dlfcn.h>
#include <sys/ptrace.h>
#include <stdarg.h>
#include <sys/user.h>
#include <sys/types.h>
#include <unistd.h>
#define preload_log(FORMAT, ...) \
    do { logger(__func__, FORMAT, __VA_ARGS__); } while(0)

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
        logger(__func__, "[child pid %d]", self_pid);
        return ret_pid;
    }
    logger(__func__, "%d", ret_pid);
    return ret_pid;
}


pid_t waitpid(pid_t pid, int *wstatus, int options){
    logger(__func__, "%s", "");
    pid_t (*original_waitpid)(pid_t pid, int *wstatus, int options);
    original_waitpid = dlsym(RTLD_NEXT, "waitpid");
    pid_t p = original_waitpid(pid, wstatus, options);
    int signo = (*wstatus & 0xFF00) >> 8;
    preload_log("Waitpid received signal %02d : %s", signo, strsignal(signo));
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
    va_start(ap, request);
    pid_t pid = va_arg(ap, pid_t);
    void* addr = va_arg(ap, void*);
    void* data = va_arg(ap, void*);
    va_end(ap);


    original_ptrace = dlsym(RTLD_NEXT, "ptrace");
    pid_t pid_curr = getpid();
    unsigned int * p = (void *)addr;
    if(request == PTRACE_ATTACH){
        preload_log("ptrace(PTRACE_ATTACH, %d)", pid);
    }
    else if(request == PTRACE_POKEDATA){
        preload_log("ptrace(PTRACE_POKE, %d, %X, %lX)", pid, addr, *(long int*)data);
    }
    else if(request == PTRACE_PEEKDATA){
        preload_log("ptrace(PTRACE_PEEK, %d, %lX, %lX) | [peek value %lX]", pid, addr, *(long int*)data, *(long int*)addr);
    }
    else if(request == PTRACE_SETREGS){
        #ifdef __x86_64__
        struct user_regs_struct *regs = (struct user_regs_struct*)data;
        int ret = original_ptrace(request, pid, addr, data);
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
        struct user_regs_struct *regs = (struct user_regs_struct*)data;
        preload_log("ptrace(PTRACE_GETREGS, %d)", pid);
        int ret = original_ptrace(request, pid, addr, data);
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
    }
    else if(request == 0x1F){
        preload_log("ptrace(PTRACE_SYS_EMU, %d)", pid);
    } 
    else if(request == PTRACE_CONT){
        preload_log("ptrace(PTRACE_CONT, %d) | [Delivered signal %s]: %s", pid, getsig(data));
    } 
    else if (request == PTRACE_GETREGS){
        #ifdef __x86_64__
        struct user_regs_struct *regs = (struct user_regs_struct*)data;
        int ret = original_ptrace(request, pid, addr, data);
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
        struct user_regs_struct *regs = (struct user_regs_struct*)data;
        preload_log("ptrace(PTRACE_GETREGS, %d)", pid);
        int ret = original_ptrace(request, pid, addr, data);
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
        
    } else if (request == PTRACE_SINGLESTEP){
        preload_log("ptrace(PTRACE_SINGLESTEP, %d)", pid);
    }
    else{
        preload_log("ptrace | %d is not implemented by the tool.", request);
    }
    
    return original_ptrace(request, pid, addr, data);
}
