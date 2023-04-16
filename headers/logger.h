#ifndef _LOGGER_H
#define _LOGGER_H
#define preload_log(FORMAT, ...) \
    do { logger(UNSYNC, __func__, FORMAT, __VA_ARGS__); } while(0)

#ifndef _COLORS_
#define _COLORS_

/* FOREGROUND */
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

enum colors{
    RED,
    GRN,
    YEL,
    BLU,
    MAG,
    CYN,
    WHT
};

#endif  /* _COLORS_ */
#define HOOK "[% 5ld] [%s] "
#ifdef COLOR
    #define RESET "\e[m\n"
#else
    #define RESET "\n"
#endif

enum log_print{
    UNSYNC,
    SYNC
};

void logger(int sync, const char* func_name, const char* format, ...);


#endif