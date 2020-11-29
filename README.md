Tick - An LD_PRELOAD logging utility

Beta currently working.

TODO : 
* Print formated arguments for functions
* finish README
* Fix the 
```C
#ifndef waitpid_OVERRIDE
  // #define fork h_fork
  #define waitpid h_waitpid
#endif
```
thing in wrapper.h file
* Proper printf handling with pid print etc
* Note down which functions are not being logged

### Inner workings

* Function prototypes in `generated_preload.c` might differ from ones in your libc. If a function is not getting logged or the project do not compile, this is probably why. You should be watching and fixing errors by watching function definitions for your libc (`man funcname`) and fixing them modifying `generated_preload.c`.

### Usage

```bash
make && env LD_PRELOAD=./libcu.so ./test_binary/break
```