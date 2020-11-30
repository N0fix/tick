Tick - An LD_PRELOAD logging utility

Beta currently working.

TODO : 
* Print formated arguments for functions
* Proper printf handling with pid print etc
* Note down which functions are not being logged (due to compatibility and linkage issues)
* Hide preload using lib init() call (see https://haxelion.eu/article/LD_NOT_PRELOADED_FOR_REAL/)

### Inner workings

* Function prototypes in `generated_preload.c` might differ from ones in your libc. If a function is not getting logged or the project do not compile, this is probably why. You should be watching and fixing errors by watching function definitions for your libc (`man funcname`) and fixing them modifying `generated_preload.c`.

### Usage

```bash
make && env LD_PRELOAD=./libcu.so ./test_binary/break
```

Target (32 or 64 bits) can be changed using flag `-m32` or `-m64` in makefile's `TARGET` variable.

### Adding custom functions

You can add custom preloaded functions in `custom_preloads.c`. If you do so, be sure to add `#define {func_name}_OVERRIDE` in `custom_preload.h`, indicating that you are creating a custom preload for this function.