Tick - An LD_PRELOAD logging utility

Beta currently working.

TODO : 
* Solve the linkage problem that would allow to use sem_open to synchronise prints and informations between processes. (!important)
* Print formated arguments for functions
* finish README


### Inner workings

* Function prototypes in `generated_preload.c` might differ from ones in your libc. If a function is not getting logged or the project do not compile, this is probably why. You should be watching and fixing errors by watching function definitions for your libc (`man funcname`) and fixing them modifying `generated_preload.c`.

