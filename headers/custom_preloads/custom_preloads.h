#ifndef _CUSTOM_PRELOADS_H
#define _CUSTOM_PRELOADS_H

/* Put defines here for functions you want to create custom preload for */

#define fork_OVERRIDE
#define waitpid_OVERRIDE
#define ptrace_OVERRIDE
#define write_OVERRIDE
#define signal_OVERRIDE
#define puts_OVERRIDE
#define SHA256_Update_OVERRIDE

// #define exit_OVERRIDE

#endif