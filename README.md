Tick - An LD_PRELOAD logging utility

Beta currently working.

This utility can be used on dynamically compiled binaries that uses `ptrace`, preventing you from using `strace -f` or `ltrace -f` to get print calls their arguments. It uses the LD_PRELOAD env variable to preload most of libc's functions, thus avoiding many dbg prevention based on ptrace. It's not perfect, but it helps.

**If the binary you want to trace do not have any ptrace anti-dbg-ish thing, there is no need to use this project. You better use ltrace, strace, or one of the many many public github projects created to log functions.**

## Features

 * Preload a good amount of libc's function using LD_PRELOAD
 * Already print common functions arguments and return values
 * Dump out `write (2)` buffer automatically to filesystem
 * Easily customisable
 * Also tracks childs

TODO : 
 - [ ] Print formated arguments for functions
 - [ ] ~~Proper printf handling with pid print etc~~ (should be working now)
 - [ ] Note down which functions are not being logged (due to compatibility and linkage issues)
 - [ ] Hide preload using lib init() call (see https://haxelion.eu/article/LD_NOT_PRELOADED_FOR_REAL/)
 - [ ] Write a proper 32bits/64bits compilation flag in the makefile
 - [ ] `dump_process` from `utils.c` isn't working, fix that man 

### Inner workings

* Function prototypes in `generated_preload.c` might differ from ones in your libc. If a function is not getting logged or the project do not compile, this is probably why. You should be watching and fixing errors by watching function definitions for your libc (`man funcname`) and fixing them modifying `generated_preload.c`.

### Usage

```bash
make && env LD_PRELOAD=./libcu.so ./test_binary/break
```

Target (32 or 64 bits) can be changed using flag `-m32` or `-m64` in makefile's `TARGET` variable.

### Demo

[![asciicast](https://asciinema.org/a/1KeaXypx0OBNLlTpZbvHsHZMK.svg)](https://asciinema.org/a/1KeaXypx0OBNLlTpZbvHsHZMK)

### Adding custom functions

You can add custom preloaded functions in `custom_preloads.c`. If you do so, be sure to add `#define {func_name}_OVERRIDE` in `custom_preload.h` (see `./headers/custom_preloads/custom_preload.h`), indicating that you are creating a custom preload for this function.
Adding any function somewhere else might cause a segfault due to `wrapper.h` not properly being imported and linked.
