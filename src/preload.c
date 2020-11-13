#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#define HOOK "[HOOK %s] [PID %d] "
#define RED "\033[30;101m"
#define PURPLE "\033[30;105m"
#define YELLOW "\033[30;103m"
#define CYAN "\033[30;106m"
#define RESET "\e[m\n"
#define dbg_printf(FORMAT, ...) \
for(int i=0;i < getpid()%3; i++) printf("\t");\
if (getpid() % 3 == 0) printf(RED); \
if (getpid() % 3 == 1) printf(PURPLE); \
if (getpid() % 3 == 2) printf(YELLOW); \
if (getpid() == -38) printf(CYAN); \
fprintf(stdout, HOOK FORMAT RESET, __func__, (unsigned)getpid(), __VA_ARGS__);

#define PT_TRACE_ME PTRACE_TRACEME

  PTRACE_TRACEME = 0,
  /* Return the word in the process's text space at address ADDR.  */
  PTRACE_PEEKTEXT = 1;
  PTRACE_PEEKDATA = 2;
  PTRACE_PEEKUSER = 3;
  PTRACE_POKETEXT = 4;
  PTRACE_POKEDATA = 5;
  PTRACE_POKEUSER = 6;
  PTRACE_CONT = 7;
  PTRACE_KILL = 8;
  PTRACE_SINGLESTEP = 9;
   PTRACE_GETREGS = 12;
   PTRACE_SETREGS = 13;
   PTRACE_GETFPREGS = 14;
   PTRACE_SETFPREGS = 15;
  PTRACE_ATTACH = 16;
  PTRACE_DETACH = 17;
   PTRACE_GETFPXREGS = 18;
   PTRACE_SETFPXREGS = 19;
  PTRACE_SYSCALL = 24;






cnt = 0;
void dump(){
    puts("dump");

    FILE* f = fopen("du", "w+");
    if(f == NULL){
        perror("fopen");
    }

    int from = 0x08048be0;
    int to = 0x08056381;
    char * p = (void *)0x08048be0;
    int fd;
    for (int i = from; i < to; i++) {
        // printf("0x%X", p);
        putc(*p, stderr);
        p += 1;
    }
    exit(1);
}

typedef struct ser_regs_struct
{
  long int ebx;
  long int ecx;
  long int edx;
  long int esi;
  long int edi;
  long int ebp;
  long int eax;
  long int xds;
  long int xes;
  long int xfs;
  long int xgs;
  long int orig_eax;
  long int eip;
  long int xcs;
  long int eflags;
  long int esp;
  long int xss;
}user_regs_struct;

flag = 0;
// cnt == 2061 -> TEA
// out 1
// w3lc0mE_t0_Th3_lAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA@no-flare.com

// out 2
// w3lc0mE_t0_Th3_lBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB@no-flare.com

// out 3
// w3lc0mE_t0_Th3_lBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
long ptrace(int request, pid_t pid, void *addr, void *data);
int pivot_root(const char *new_root, const char *put_old);
int chmod(const char *pathname, mode_t mode);

extern void *_dl_sym(void *, const char *, void *);
extern void *dlsym(void *handle, const char *name){
    static void * (*real_dlsym)(void *, const char *)=NULL;
    if (real_dlsym == NULL)
        real_dlsym=_dl_sym(RTLD_NEXT, "dlsym", dlsym);
    /* my target binary is even asking for dlsym() via dlsym()... */
    // printf("dlsym of : %s\n", name);
    if(!strcmp(name, "ptrace")){
        return ptrace;
    }
    // if(!strcmp(name, "chmod")){
        // return chmod;
    // }
    // if(!strcmp(name, "pivot_root")){
        // return pivot_root;
    // }
    if (!strcmp(name,"dlsym")) 
        return (void*)real_dlsym;
    // dbg_printf("dlsym of %s", name);
    return real_dlsym(handle,name);
}


char* getsig(int sig){
    switch (sig)
    {
    case SIGKILL:
        return "SIGKILL";
    case SIGSTOP:
        return "SIGSTOP";
    case SIGTERM:
        return "SIGTERM";
    case SIGTRAP:
        return "SIGTRAP";
    case SIGABRT:
        return "SIGABRT";
    case SIGALRM:
        return "SIGALARM";
    case SIGSEGV:
        return "SIGSEGV";
    case SIGQUIT:
        return "SIGQUIT";
    case SIGINT:
        return "SIGINT";
    case SIGCHLD:
        return "SIGCHLD";
    case SIGCONT:
        return "SIGCONT";
    case SIGPIPE:
        return "SIGPIPE";
    case SIGFPE:
        return "SIGFPE";
    case SIGILL:
        return "SIGILL";
    case 0:
        return "[NO SIGNAL TO DELIVER]";
    default:
        return "UNKN";
    }
}


long peekdata(int pid, int reg, int offset){
    long (*original_ptrace)(int request, pid_t pid, void *addr, void *data);
    original_ptrace = _dl_sym(RTLD_NEXT, "ptrace", dlsym);
    return original_ptrace(PTRACE_PEEKDATA, pid, reg + offset, 0);
}

long ptrace(int request, pid_t pid, void *addr, void *data){
    long (*original_ptrace)(int request, pid_t pid, void *addr, void *data);
    original_ptrace = _dl_sym(RTLD_NEXT, "ptrace", dlsym);
    pid_t pid_curr = getpid();
    unsigned int * p = (void *)addr;
    if(request == PTRACE_ATTACH){
        dbg_printf("ptrace | ATTACH | pid %d", pid);
    }
    else if(request == PTRACE_POKEDATA){
        cnt++;
        // if(cnt == 6495221){

            // putc(*p, stderr);
            // dbg_printf("ptrace | PEEK | addr %X | data %X", pid_curr, addr, *p);
        // } 
        dbg_printf("ptrace | POKE | addr %X | data %X", addr, data);
        // printf("%d %d\n", cnt, flag);
    }
    else if(request == PTRACE_PEEKDATA){
        cnt ++;
            dbg_printf("ptrace | PEEK | addr %X | data %X", addr, *p);
        // print(cnt)
    }
    else if(request == PTRACE_SETREGS){
        dbg_printf("ptrace | SETREGS | pid %d | addr %X", pid, addr);
        user_regs_struct *regs = (user_regs_struct*)data;
        int *ptrrrr = (void*)regs->eip;
        dbg_printf("\t\teax : %X | ebx : %X | ecx : %X | esp : %X | eip : %X - %X", regs->eax, regs->ebx, regs->ecx, regs->esp, regs->eip, *ptrrrr);
            int * ptr = *((int*)regs->esp+8);
            switch (regs->eip)
            {
            case 0x804C1C9:
                dbg_printf("arg[7] : %X | addr : %X", *(ptr+8), ptr+8);
                break;
            case 0x804C1EC:
                dbg_printf("arg[41] : %X | addr : %X", *(ptr+42), ptr+42);
                break;
            case 0x804C20C:
                dbg_printf("arg[19] : %X | addr : %X", *(ptr+20), ptr+20);
                break;
            default:
                break;
            }
        dbg_printf("Stack :    %X : %lX\n \
        \t\t        arg 1 %X: %lX\n \
        \t\t        arg 2 %X: %lX\n \
        \t\t        arg 3 %X: %lX\n \
        \t\t        arg 4 %X: %lX", 
        regs->esp   , peekdata(pid, regs->esp, 0),
        regs->esp+4 , peekdata(pid, regs->esp, 4 ),
        regs->esp+8 , peekdata(pid, regs->esp, 8 ),
        regs->esp+12, peekdata(pid, regs->esp, 12),
        regs->esp+16, peekdata(pid, regs->esp, 16));
    }
    else if(request == 0x1F){
        dbg_printf("ptrace | SYS_EMU | pid %d", pid);
    } 
    else if(request == PTRACE_CONT){
        dbg_printf("ptrace | CONT | pid %d signal to deliver : %s", pid, getsig(data));
    } else if (request == PTRACE_GETREGS){
        user_regs_struct *regs = (user_regs_struct*)data;
        dbg_printf("ptrace | GETREGS %s", "");
        int ret = original_ptrace(request, pid, addr, data);
        dbg_printf("\t\teax : %X | ebx : %X | ecx : %X | edx : %X | esp : %X | eip : %X | orig_eax: %X | switch : %X", regs->eax, regs->ebx, regs->ecx, regs->edx, regs->esp, regs->eip, regs->orig_eax, (unsigned int)(regs->orig_eax ^ 0xDEADBEEF) * 0x1337CAFE);
        dbg_printf("Stack :    %X : %lX\n \
        \t\t        arg 1 %X: %lX\n \
        \t\t        arg 2 %X: %lX\n \
        \t\t        arg 3 %X: %lX\n \
        \t\t        arg 4 %X: %lX", 
        regs->esp   , peekdata(pid, regs->esp, 0),
        regs->esp+4 , peekdata(pid, regs->esp, 4 ),
        regs->esp+8 , peekdata(pid, regs->esp, 8 ),
        regs->esp+12, peekdata(pid, regs->esp, 12),
        regs->esp+16, peekdata(pid, regs->esp, 16));
        return ret;
    }
    else{
        dbg_printf("ptrace | UNKN!!! %d", request);
    }
    
    // printf("Setting flag to %d, cnt = %d, pid = %d\n", flag, cnt, pid);
    return original_ptrace(request, pid, addr, data);
}




pid_t waitpid(pid_t pid, int *wstatus, int options){
    pid_t (*original_waitpid)(pid_t pid, int *wstatus, int options);
    original_waitpid = dlsym(RTLD_NEXT, "waitpid");
    dbg_printf("%s",  "Waitpid...");
    pid_t p = original_waitpid(pid, wstatus, options);
    switch ( (*wstatus & 0xFF00) >> 8)
    {
    case SIGINT:
        dbg_printf("Waitpid received signal %s",  "SIGINT");
        break;
    case SIGSEGV:
        dbg_printf("Waitpid received signal %s", "SIGSEGV");
        long (*original_ptrace)(int request, pid_t pid, void *addr, void *data);
        original_ptrace = _dl_sym(RTLD_NEXT, "ptrace", dlsym);
        user_regs_struct regs;
        original_ptrace(PTRACE_GETREGS, pid, 0, &regs);
        int first = peekdata(pid, regs.esp, 4);
        int third_arg = peekdata(pid, regs.esp, 12);
        if(first == 0x6B4E102C || first == 0x44DE7A30 || first == 0x5816452E){
            // fprintf(stdout, " [7] = %08X\n[19] = %08X\n[41] = %08X\n", peekdata(pid, ptr, 7*4), peekdata(pid, ptr, 12 * 4), peekdata(pid, ptr, 34 * 4));
            // fprintf(stdout, "%08X\n", third_arg);
        }
        break;
    case SIGSTOP:
        break;
    case SIGCONT:
        dbg_printf("Waitpid received signal %s", "SIGCONT");
        break;
    case SIGILL:
        dbg_printf("Waitpid received signal %s", "SIGILL");
        break;
    case SIGCHLD:
        dbg_printf("Waitpid received signal %s", "SIGCHILD");
        break;
    case SIGTRAP:
        dbg_printf("Waitpid received signal %s", "SIGTRAP");
        break;
    case SIGQUIT:
        dbg_printf("Waitpid received signal %s", "SIGQUIT");
        break;
    case SIGTERM:
        dbg_printf("Waitpid received signal %s", "SIGTERM");
        break;
    case SIGKILL:
        dbg_printf("Waitpid received signal %s", "SIGKILL");
        break;

    default:
        break;
    }
    return p;
}


// #include <dlsym.h>


// int strcmp(const char *s1, const char *s2){
//     int (*original_strcmp)(const char *s1, const char *s2);
//     original_strcmp = dlsym(RTLD_NEXT, "strcmp");
//     dbg_printf("Comparing |%s| with |%s|", s1, s2);
//     return original_strcmp(s1, s2);
// }


int setvbuf(FILE *stream, char *buf, int mode, size_t size){
    int (*original_func)(FILE *stream, char *buf, int mode, size_t size);
    original_func = dlsym(RTLD_NEXT, "setvbuf");
    dbg_printf("setvbuf %s", "");
    return original_func(stream, buf, mode, size);
}


int uname(struct utsname *buf){
    int (*original_func)(struct utsname *buf);
    original_func = dlsym(RTLD_NEXT, "uname");
    dbg_printf("uname %X", buf);
    return original_func(buf);
}

int truncate(const char *path, off_t length){
    int (*original_func)(const char *path, off_t length);
    original_func = dlsym(RTLD_NEXT, "truncate");
    dbg_printf("%s","TRUNCATE ");
    return original_func(path, length);
}

ssize_t read(int fd, void *buf, size_t count){
    int (*original_func)(int fd, void *buf, size_t count);
    original_func = dlsym(RTLD_NEXT, "read");
    dbg_printf("read fd %d buf %X size %d", fd, buf, count);
    return original_func(fd, buf, count);
}

unsigned int alarm(unsigned int seconds){
    int (*original_func)(unsigned int seconds);
    original_func = dlsym(RTLD_NEXT, "alarm");
    dbg_printf("alarm %ds", seconds);
    return original_func(seconds);   
}
int kill(pid_t pid, int sig){
    int (*original_func)(pid_t pid, int sig);
    original_func = dlsym(RTLD_NEXT, "kill");
    dbg_printf("kill pid : %d sig : %d", pid, sig);
    return original_func(pid, sig);   
}

pid_t fork(void){
    int (*original_func)(void);
    original_func = dlsym(RTLD_NEXT, "fork");
    dbg_printf("fork %s", "");
    return original_func();
}

int prctl(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5){
    int (*original_func)(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5);
    original_func = dlsym(RTLD_NEXT, "prctl");
    dbg_printf("prctl self %s", "");
    return original_func(option, arg2,arg3,arg4,arg5);
}

// int printf(const char *format, ...){
//     int (*original_func)(const char* format, ...);
//     original_func = dlsym(RTLD_NEXT, "printf");
//     dbg_printf("printf %s", format);
//     return original_func(format, ...);
// }

int nanosleep(const struct timespec *req, struct timespec *rem){
    int (*original_func)(const struct timespec *req, struct timespec *rem);
    original_func = dlsym(RTLD_NEXT, "nanosleep");
    dbg_printf("nanosleep %s", "") ;
    return original_func(req, rem);
}

int strncmp(const char *s1, const char *s2, size_t n){
    int (*original_strncmp)(const char *s1, const char *s2, size_t n);
    original_strncmp = dlsym(RTLD_NEXT, "strncmp");
    dbg_printf("Comparing |%s| with |%s|", s1, s2);
    fprintf(stdout, "Comparing |%s| with |%s|", s1, s2);
    return original_strncmp(s1, s2, n);
}

char *fgets(char *s, int size, FILE *stream){
    int (*original_fgets)(char *s, int size, FILE* stream);
    original_fgets = dlsym(RTLD_NEXT, "fgets");
    dbg_printf("Size |%d|", size);
    return original_fgets(s, size, stream);
}

int puts(const char *s){
    dbg_printf("%s", s);
    return 1;
}

size_t strlen(const char *s){
    int (*original_strlen)(const char *s1);
    original_strlen = dlsym(RTLD_NEXT, "strlen");
    dbg_printf("Strlen of |%s| is %d", s, original_strlen(s));
    return original_strlen(s);
}
int counter = 0;
int chmod(const char *pathname, mode_t mode){
    int (*orig_chmod)(const char *pathname, mode_t mode);
    orig_chmod = dlsym(RTLD_NEXT, "chmod");
    dbg_printf("|%X| mode 0x%X", pathname, mode);
    counter = (counter + 1) % 16;
    // printf("cnt of chmod : %d\n", counter);
    return orig_chmod(pathname, mode);
}



int pivot_root(const char *new_root, const char *put_old){
    int (*orig_pivot_root)(const char *new_root, const char *put_old);
    orig_pivot_root = dlsym(RTLD_NEXT, "pivot_root");
   
    dbg_printf("|0x%X| to |0x%X|", new_root, put_old);
    return orig_pivot_root(new_root, put_old);
}

int memcmp(const void *s1, const void *s2, size_t n){
    int (*orig_memcmp)(const void *s1, const void *s2, size_t n);
    orig_memcmp = dlsym(RTLD_NEXT, "memcmp");

    if(n != 0x10){
        dbg_printf("memcmp |%X| and |%X|", s1, s2);
    }
    return orig_memcmp(s1, s2, n);
}

void* memcpy(void *dest, const void *src, size_t n){
    int (*orig_memcmp)(void *dest, const void *src, size_t n);
    orig_memcmp = dlsym(RTLD_NEXT, "memcpy");

        dbg_printf("memcpy |%X| and |%X|", dest, src);
    return orig_memcmp(dest, src, n);
}

int execve(const char *filename, char *const argv[], char *const envp[]){
    
    int (*orig_execve)(const char *filename, char *const argv[], char *const envp[]);
    orig_execve = dlsym(RTLD_NEXT, "execve");
    dbg_printf("execve |%s|", filename);
    return orig_execve(filename, argv, envp);
}

void *memset(void *s, int c, size_t n){
    int (*o_memset)(void *s, int c, size_t n);
    o_memset = dlsym(RTLD_NEXT, "memset");
    dbg_printf("memset |%X| |%X|", s, n);
    o_memset(s,c,n);
    return;
}

int nice(int inc){
    int (*o_nice)(int inc);
    o_nice = dlsym(RTLD_NEXT, "nice");
    dbg_printf("nice |%X|", inc);
    return o_nice(inc);
}

int chown(const char *pathname, uid_t owner, gid_t group){
    int (*o_nice)(const char *pathname, uid_t owner, gid_t group);
    o_nice = dlsym(RTLD_NEXT, "chown");
    dbg_printf("chown |%X| |%X| |%X|", pathname, owner, group);
    return o_nice(pathname, owner, group);
}