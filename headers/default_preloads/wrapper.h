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



#ifndef _FUNCTIONS_DEF_H
#define _FUNCTIONS_DEF_H

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

#define __fbufsize h___fbufsize
#define __flbf h___flbf
#define __fpending h___fpending
#define __fpurge h___fpurge
#define __freadable h___freadable
#define __freading h___freading
#define __fsetlocking h___fsetlocking
#define __fwritable h___fwritable
#define __fwriting h___fwriting
#define __ppc_get_timebase h___ppc_get_timebase
#define __ppc_get_timebase_freq h___ppc_get_timebase_freq
#define __ppc_mdoio h___ppc_mdoio
#define __ppc_mdoom h___ppc_mdoom
#define __ppc_set_ppr_low h___ppc_set_ppr_low
#define __ppc_set_ppr_med h___ppc_set_ppr_med
#define __ppc_set_ppr_med_high h___ppc_set_ppr_med_high
#define __ppc_set_ppr_med_low h___ppc_set_ppr_med_low
#define __ppc_set_ppr_very_low h___ppc_set_ppr_very_low
#define __ppc_yield h___ppc_yield
#define __riscv_flush_icache h___riscv_flush_icache
#define _exit h__exit
#define _Exit h__Exit
#define _flushlbf h__flushlbf
#define a64l h_a64l
#define abort h_abort
#define abs h_abs
#define accept h_accept
#define access h_access
#define acos h_acos
#define acosf h_acosf
#define acosh h_acosh
#define acoshf h_acoshf
#define acoshl h_acoshl
#define acosl h_acosl
#define addmntent h_addmntent
#define addseverity h_addseverity
#define adjtime h_adjtime
#define adjtimex h_adjtimex
#define aio_cancel h_aio_cancel
#define aio_cancel64 h_aio_cancel64
#define aio_error h_aio_error
#define aio_error64 h_aio_error64
#define aio_fsync h_aio_fsync
#define aio_fsync64 h_aio_fsync64
#define aio_init h_aio_init
#define aio_read h_aio_read
#define aio_read64 h_aio_read64
#define aio_suspend h_aio_suspend
#define aio_suspend64 h_aio_suspend64
#define aio_write h_aio_write
#define aio_write64 h_aio_write64
#define alarm h_alarm
#define aligned_alloc h_aligned_alloc
// #define alloca h_alloca
#define alphasort h_alphasort
#define argp_error h_argp_error
#define argp_failure h_argp_failure
#define argp_help h_argp_help
#define argp_parse h_argp_parse
#define argp_state_help h_argp_state_help
#define argp_usage h_argp_usage
#define argz_add h_argz_add
#define argz_add_sep h_argz_add_sep
#define argz_append h_argz_append
#define argz_count h_argz_count
#define argz_create h_argz_create
#define argz_create_sep h_argz_create_sep
#define argz_delete h_argz_delete
#define argz_extract h_argz_extract
#define argz_insert h_argz_insert
#define argz_next h_argz_next
#define argz_replace h_argz_replace
#define argz_stringify h_argz_stringify
#define asctime h_asctime
#define asctime_r h_asctime_r
#define asin h_asin
#define asinf h_asinf
#define asinh h_asinh
#define asinhf h_asinhf
#define asinhl h_asinhl
#define asinl h_asinl
#define asprintf h_asprintf
#define atan h_atan
#define atan2 h_atan2
#define atan2f h_atan2f
#define atan2l h_atan2l
#define atanf h_atanf
#define atanh h_atanh
#define atanhf h_atanhf
#define atanhl h_atanhl
#define atanl h_atanl
#define atexit h_atexit
#define atof h_atof
#define atoi h_atoi
#define atol h_atol
#define atoll h_atoll
#define backtrace h_backtrace
#define backtrace_symbols h_backtrace_symbols
#define backtrace_symbols_fd h_backtrace_symbols_fd
#define basename h_basename
#define bcmp h_bcmp
#define bcopy h_bcopy
#define bind h_bind
#define bind_textdomain_codeset h_bind_textdomain_codeset
#define bindtextdomain h_bindtextdomain
#define brk h_brk
#define bsearch h_bsearch
#define btowc h_btowc
#define bzero h_bzero
#define cabs h_cabs
#define cabsf h_cabsf
#define cabsl h_cabsl
#define cacos h_cacos
#define cacosf h_cacosf
#define cacosh h_cacosh
#define cacoshf h_cacoshf
#define cacoshl h_cacoshl
#define cacosl h_cacosl
#define calloc h_calloc
#define canonicalize h_canonicalize
#define canonicalize_file_name h_canonicalize_file_name
#define canonicalizef h_canonicalizef
#define canonicalizel h_canonicalizel
#define carg h_carg
#define cargf h_cargf
#define cargl h_cargl
#define casin h_casin
#define casinf h_casinf
#define casinh h_casinh
#define casinhf h_casinhf
#define casinhl h_casinhl
#define casinl h_casinl
#define catan h_catan
#define catanf h_catanf
#define catanh h_catanh
#define catanhf h_catanhf
#define catanhl h_catanhl
#define catanl h_catanl
#define catclose h_catclose
#define catgets h_catgets
#define catopen h_catopen
#define cbrt h_cbrt
#define cbrtf h_cbrtf
#define cbrtl h_cbrtl
#define ccos h_ccos
#define ccosf h_ccosf
#define ccosh h_ccosh
#define ccoshf h_ccoshf
#define ccoshl h_ccoshl
#define ccosl h_ccosl
#define ceil h_ceil
#define ceilf h_ceilf
#define ceill h_ceill
#define cexp h_cexp
#define cexpf h_cexpf
#define cexpl h_cexpl
#define cfgetispeed h_cfgetispeed
#define cfgetospeed h_cfgetospeed
#define cfmakeraw h_cfmakeraw
#define cfsetispeed h_cfsetispeed
#define cfsetospeed h_cfsetospeed
#define cfsetspeed h_cfsetspeed
#define chdir h_chdir
#define chmod h_chmod
#define chown h_chown
#define cimag h_cimag
#define cimagf h_cimagf
#define cimagl h_cimagl
#define clearenv h_clearenv
#define clearerr h_clearerr
#define clearerr_unlocked h_clearerr_unlocked
#define clock h_clock
#define clock_getres h_clock_getres
#define clock_gettime h_clock_gettime
#define clock_settime h_clock_settime
#define clog h_clog
#define clog10 h_clog10
#define clog10f h_clog10f
#define clog10l h_clog10l
#define clogf h_clogf
#define clogl h_clogl
#define close h_close
#define closedir h_closedir
#define closelog h_closelog
#define confstr h_confstr
#define conj h_conj
#define conjf h_conjf
#define conjl h_conjl
#define connect h_connect
#define copy_file_range h_copy_file_range
#define copysign h_copysign
#define copysignf h_copysignf
#define copysignl h_copysignl
#define cos h_cos
#define cosf h_cosf
#define cosh h_cosh
#define coshf h_coshf
#define coshl h_coshl
#define cosl h_cosl
#define cpow h_cpow
#define cpowf h_cpowf
#define cpowl h_cpowl
#define cproj h_cproj
#define cprojf h_cprojf
#define cprojl h_cprojl
#define creal h_creal
#define crealf h_crealf
#define creall h_creall
#define creat h_creat
#define creat64 h_creat64
#define crypt h_crypt
#define crypt_r h_crypt_r
#define csin h_csin
#define csinf h_csinf
#define csinh h_csinh
#define csinhf h_csinhf
#define csinhl h_csinhl
#define csinl h_csinl
#define csqrt h_csqrt
#define csqrtf h_csqrtf
#define csqrtl h_csqrtl
#define ctan h_ctan
#define ctanf h_ctanf
#define ctanh h_ctanh
#define ctanhf h_ctanhf
#define ctanhl h_ctanhl
#define ctanl h_ctanl
#define ctermid h_ctermid
#define ctime h_ctime
#define ctime_r h_ctime_r
#define cuserid h_cuserid
#define daddl h_daddl
#define dcgettext h_dcgettext
#define dcngettext h_dcngettext
#define ddivl h_ddivl
#define dgettext h_dgettext
#define difftime h_difftime
#define dirfd h_dirfd
#define dirname h_dirname
#define div h_div
#define dmull h_dmull
#define dngettext h_dngettext
#define drand48 h_drand48
#define drand48_r h_drand48_r
#define drem h_drem
#define dremf h_dremf
#define dreml h_dreml
#define dsubl h_dsubl
#define dup h_dup
#define dup2 h_dup2
#define ecvt h_ecvt
#define ecvt_r h_ecvt_r
#define endfsent h_endfsent
#define endgrent h_endgrent
#define endhostent h_endhostent
#define endmntent h_endmntent
#define endnetent h_endnetent
#define endnetgrent h_endnetgrent
#define endprotoent h_endprotoent
#define endpwent h_endpwent
#define endservent h_endservent
#define endutent h_endutent
#define endutxent h_endutxent
#define envz_add h_envz_add
#define envz_entry h_envz_entry
#define envz_get h_envz_get
#define envz_merge h_envz_merge
#define envz_remove h_envz_remove
#define envz_strip h_envz_strip
#define erand48 h_erand48
#define erand48_r h_erand48_r
#define erf h_erf
#define erfc h_erfc
#define erfcf h_erfcf
#define erfcl h_erfcl
#define erff h_erff
#define erfl h_erfl
#define err h_err
#define error h_error
#define error_at_line h_error_at_line
#define errx h_errx
#define execl h_execl
#define execle h_execle
#define execlp h_execlp
#define execv h_execv
#define execve h_execve
#define execvp h_execvp
#define exit h_exit
#define exp h_exp
#define exp10 h_exp10
#define exp10f h_exp10f
#define exp10l h_exp10l
#define exp2 h_exp2
#define exp2f h_exp2f
#define exp2l h_exp2l
#define expf h_expf
#define expl h_expl
#define explicit_bzero h_explicit_bzero
#define expm1 h_expm1
#define expm1f h_expm1f
#define expm1l h_expm1l
#define fabs h_fabs
#define fabsf h_fabsf
#define fabsl h_fabsl
#define fadd h_fadd
#define faddl h_faddl
#define fchdir h_fchdir
#define fchmod h_fchmod
#define fchown h_fchown
#define fclose h_fclose
#define fcloseall h_fcloseall
#define fcntl h_fcntl
#define fcvt h_fcvt
#define fcvt_r h_fcvt_r
#define fdatasync h_fdatasync
#define fdim h_fdim
#define fdimf h_fdimf
#define fdiml h_fdiml
#define fdiv h_fdiv
#define fdivl h_fdivl
#define fdopen h_fdopen
#define fdopendir h_fdopendir
#define feclearexcept h_feclearexcept
#define fedisableexcept h_fedisableexcept
#define feenableexcept h_feenableexcept
#define fegetenv h_fegetenv
#define fegetexcept h_fegetexcept
#define fegetexceptflag h_fegetexceptflag
#define fegetmode h_fegetmode
#define fegetround h_fegetround
#define feholdexcept h_feholdexcept
#define feof h_feof
#define feof_unlocked h_feof_unlocked
#define feraiseexcept h_feraiseexcept
#define ferror h_ferror
#define ferror_unlocked h_ferror_unlocked
#define fesetenv h_fesetenv
#define fesetexcept h_fesetexcept
#define fesetexceptflag h_fesetexceptflag
#define fesetmode h_fesetmode
#define fesetround h_fesetround
#define fetestexcept h_fetestexcept
#define fetestexceptflag h_fetestexceptflag
#define feupdateenv h_feupdateenv
#define fexecve h_fexecve
#define fflush h_fflush
#define fflush_unlocked h_fflush_unlocked
#define fgetc h_fgetc
#define fgetc_unlocked h_fgetc_unlocked
#define fgetgrent h_fgetgrent
#define fgetgrent_r h_fgetgrent_r
#define fgetpos h_fgetpos
#define fgetpos64 h_fgetpos64
#define fgetpwent h_fgetpwent
#define fgetpwent_r h_fgetpwent_r
#define fgets h_fgets
#define fgets_unlocked h_fgets_unlocked
#define fgetwc h_fgetwc
#define fgetwc_unlocked h_fgetwc_unlocked
#define fgetws h_fgetws
#define fgetws_unlocked h_fgetws_unlocked
#define fileno h_fileno
#define fileno_unlocked h_fileno_unlocked
#define finite h_finite
#define finitef h_finitef
#define finitel h_finitel
#define flockfile h_flockfile
#define floor h_floor
#define floorf h_floorf
#define floorl h_floorl
#define fma h_fma
#define fmaf h_fmaf
#define fmal h_fmal
#define fmax h_fmax
#define fmaxf h_fmaxf
#define fmaxl h_fmaxl
#define fmaxmag h_fmaxmag
#define fmaxmagf h_fmaxmagf
#define fmaxmagl h_fmaxmagl
#define fmemopen h_fmemopen
#define fmin h_fmin
#define fminf h_fminf
#define fminl h_fminl
#define fminmag h_fminmag
#define fminmagf h_fminmagf
#define fminmagl h_fminmagl
#define fmod h_fmod
#define fmodf h_fmodf
#define fmodl h_fmodl
#define fmtmsg h_fmtmsg
#define fmul h_fmul
#define fmull h_fmull
#define fnmatch h_fnmatch
#define fopen h_fopen
#define fopen64 h_fopen64
// #define fopencookie h_fopencookie
#ifndef fork_OVERRIDE
  // #define fork h_fork
#endif
#define forkpty h_forkpty
#define fpathconf h_fpathconf
#define fprintf h_fprintf
#define fputc h_fputc
#define fputc_unlocked h_fputc_unlocked
#define fputs h_fputs
#define fputs_unlocked h_fputs_unlocked
#define fputwc h_fputwc
#define fputwc_unlocked h_fputwc_unlocked
#define fputws h_fputws
#define fputws_unlocked h_fputws_unlocked
#define fread h_fread
#define fread_unlocked h_fread_unlocked
#define free h_free
#define freopen h_freopen
#define freopen64 h_freopen64
#define frexp h_frexp
#define frexpf h_frexpf
#define frexpl h_frexpl
#define fromfp h_fromfp
#define fromfpf h_fromfpf
#define fromfpl h_fromfpl
#define fromfpx h_fromfpx
#define fromfpxf h_fromfpxf
#define fromfpxl h_fromfpxl
#define fscanf h_fscanf
#define fseek h_fseek
#define fseeko h_fseeko
#define fseeko64 h_fseeko64
#define fsetpos h_fsetpos
// // #define fsetpos64 h_fsetpos64
#define fstat h_fstat
#define fstat64 h_fstat64
#define fsub h_fsub
#define fsubl h_fsubl
#define fsync h_fsync
#define ftell h_ftell
#define ftello h_ftello
// // #define ftello64 h_ftello64
#define ftruncate h_ftruncate
#define ftruncate64 h_ftruncate64
#define ftrylockfile h_ftrylockfile
#define ftw h_ftw
// #define ftw64 h_ftw64
#define funlockfile h_funlockfile
#define futimes h_futimes
#define fwide h_fwide
#define fwprintf h_fwprintf
#define fwrite h_fwrite
#define fwrite_unlocked h_fwrite_unlocked
#define fwscanf h_fwscanf
#define gamma h_gamma
#define gammaf h_gammaf
#define gammal h_gammal
#define gcvt h_gcvt
#define get_avphys_pages h_get_avphys_pages
#define get_current_dir_name h_get_current_dir_name
#define get_nprocs h_get_nprocs
#define get_nprocs_conf h_get_nprocs_conf
#define get_phys_pages h_get_phys_pages
#define getauxval h_getauxval
// #define getc h_getc
#define getc_unlocked h_getc_unlocked
#define getchar h_getchar
#define getchar_unlocked h_getchar_unlocked
#define getcontext h_getcontext
#define getcpu h_getcpu
#define getcwd h_getcwd
#define getdate h_getdate
#define getdate_r h_getdate_r
#define getdelim h_getdelim
#define getdents64 h_getdents64
#define getdomainnname h_getdomainnname
#define getegid h_getegid
#define getentropy h_getentropy
#define getenv h_getenv
#define geteuid h_geteuid
#define getfsent h_getfsent
#define getfsfile h_getfsfile
#define getfsspec h_getfsspec
#define getgid h_getgid
#define getgrent h_getgrent
#define getgrent_r h_getgrent_r
#define getgrgid h_getgrgid
#define getgrgid_r h_getgrgid_r
#define getgrnam h_getgrnam
#define getgrnam_r h_getgrnam_r
#define getgrouplist h_getgrouplist
#define getgroups h_getgroups
#define gethostbyaddr h_gethostbyaddr
#define gethostbyaddr_r h_gethostbyaddr_r
#define gethostbyname h_gethostbyname
#define gethostbyname_r h_gethostbyname_r
#define gethostbyname2 h_gethostbyname2
#define gethostbyname2_r h_gethostbyname2_r
#define gethostent h_gethostent
#define gethostid h_gethostid
#define gethostname h_gethostname
#define getline h_getline
#define getloadavg h_getloadavg
#define getlogin h_getlogin
#define getmntent h_getmntent
#define getmntent_r h_getmntent_r
#define getnetbyaddr h_getnetbyaddr
#define getnetbyname h_getnetbyname
#define getnetent h_getnetent
#define getnetgrent h_getnetgrent
#define getnetgrent_r h_getnetgrent_r
#define getopt h_getopt
#define getopt_long h_getopt_long
#define getopt_long_only h_getopt_long_only
#define getpagesize h_getpagesize
#define getpass h_getpass
#define getpayload h_getpayload
#define getpayloadf h_getpayloadf
#define getpayloadl h_getpayloadl
#define getpeername h_getpeername
#define getpgid h_getpgid
#define getpgrp h_getpgrp
#define getpid h_getpid
#define getppid h_getppid
#define getprotobyname h_getprotobyname
#define getprotobynumber h_getprotobynumber
#define getprotoent h_getprotoent
#define getpt h_getpt
#define getpwent h_getpwent
#define getpwent_r h_getpwent_r
#define getpwnam h_getpwnam
#define getpwnam_r h_getpwnam_r
#define getpwuid h_getpwuid
#define getpwuid_r h_getpwuid_r
#define getrandom h_getrandom
#define getrusage h_getrusage
#define gets h_gets
#define getservbyname h_getservbyname
#define getservbyport h_getservbyport
#define getservent h_getservent
#define getsid h_getsid
#define getsockname h_getsockname
#define getsockopt h_getsockopt
#define getsubopt h_getsubopt
#define gettext h_gettext
#define gettid h_gettid
#define getuid h_getuid
#define getumask h_getumask
#define getutent h_getutent
#define getutent_r h_getutent_r
#define getutid h_getutid
#define getutid_r h_getutid_r
#define getutline h_getutline
#define getutline_r h_getutline_r
#define getutxent h_getutxent
#define getutxid h_getutxid
#define getutxline h_getutxline
#define getw h_getw
#define getwc h_getwc
#define getwc_unlocked h_getwc_unlocked
#define getwchar h_getwchar
#define getwchar_unlocked h_getwchar_unlocked
#define getwd h_getwd
#define glob h_glob
// #define glob64 h_glob64
#define globfree h_globfree
// #define globfree64 h_globfree64
#define gmtime h_gmtime
#define gmtime_r h_gmtime_r
#define grantpt h_grantpt
#define gsignal h_gsignal
#define hasmntopt h_hasmntopt
#define hcreate h_hcreate
#define hcreate_r h_hcreate_r
#define hdestroy h_hdestroy
#define hdestroy_r h_hdestroy_r
#define hsearch h_hsearch
#define hsearch_r h_hsearch_r
#define htonl h_htonl
#define htons h_htons
#define hypot h_hypot
#define hypotf h_hypotf
#define hypotl h_hypotl
#define iconv h_iconv
#define iconv_close h_iconv_close
#define iconv_open h_iconv_open
#define if_freenameindex h_if_freenameindex
#define if_indextoname h_if_indextoname
// #define if_nameindex h_if_nameindex
#define if_nametoindex h_if_nametoindex
#define ilogb h_ilogb
#define ilogbf h_ilogbf
#define ilogbl h_ilogbl
#define imaxabs h_imaxabs
#define imaxdiv h_imaxdiv
#define index h_index
#define inet_addr h_inet_addr
#define inet_aton h_inet_aton
#define inet_lnaof h_inet_lnaof
#define inet_makeaddr h_inet_makeaddr
#define inet_netof h_inet_netof
#define inet_network h_inet_network
#define inet_ntoa h_inet_ntoa
#define inet_ntop h_inet_ntop
#define inet_pton h_inet_pton
#define initgroups h_initgroups
#define initstate h_initstate
#define initstate_r h_initstate_r
#define innetgr h_innetgr
#define ioctl h_ioctl
#define isatty h_isatty
#define isinff h_isinff
#define isinfl h_isinfl
#define isnanl h_isnanl
#define iswalnum h_iswalnum
#define iswalpha h_iswalpha
#define iswblank h_iswblank
#define iswcntrl h_iswcntrl
#define iswctype h_iswctype
#define iswdigit h_iswdigit
#define iswgraph h_iswgraph
#define iswlower h_iswlower
#define iswprint h_iswprint
#define iswpunct h_iswpunct
#define iswspace h_iswspace
#define iswupper h_iswupper
#define iswxdigit h_iswxdigit
#define j0 h_j0
#define j0f h_j0f
#define j0l h_j0l
#define j1 h_j1
#define j1f h_j1f
#define j1l h_j1l
#define jn h_jn
#define jnf h_jnf
#define jnl h_jnl
#define jrand48 h_jrand48
#define jrand48_r h_jrand48_r
#define kill h_kill
#define killpg h_killpg
#define l64a h_l64a
#define labs h_labs
#define lcong48 h_lcong48
#define lcong48_r h_lcong48_r
#define ldexp h_ldexp
#define ldexpf h_ldexpf
#define ldexpl h_ldexpl
#define ldiv h_ldiv
#define lfind h_lfind
#define lgamma h_lgamma
#define lgamma_r h_lgamma_r
#define lgammaf h_lgammaf
#define lgammaf_r h_lgammaf_r
#define lgammal h_lgammal
#define lgammal_r h_lgammal_r
#define link h_link
#define linkat h_linkat
#define lio_listio h_lio_listio
#define lio_listio64 h_lio_listio64
#define listen h_listen
#define llabs h_llabs
#define lldiv h_lldiv
#define llogb h_llogb
#define llogbf h_llogbf
#define llogbl h_llogbl
#define llrint h_llrint
#define llrintf h_llrintf
#define llrintl h_llrintl
#define llround h_llround
#define llroundf h_llroundf
#define llroundl h_llroundl
#define localeconv h_localeconv
#define localtime h_localtime
#define localtime_r h_localtime_r
#define log h_log
#define log10 h_log10
#define log10f h_log10f
#define log10l h_log10l
#define log1p h_log1p
#define log1pf h_log1pf
#define log1pl h_log1pl
#define log2 h_log2
#define log2f h_log2f
#define log2l h_log2l
#define logb h_logb
#define logbf h_logbf
#define logbl h_logbl
#define logf h_logf
#define login h_login
#define login_tty h_login_tty
#define logl h_logl
#define logout h_logout
#define logwtmp h_logwtmp
#define longjmp h_longjmp
#define lrand48 h_lrand48
#define lrand48_r h_lrand48_r
#define lrint h_lrint
#define lrintf h_lrintf
#define lrintl h_lrintl
#define lround h_lround
#define lroundf h_lroundf
#define lroundl h_lroundl
#define lsearch h_lsearch
#define lseek h_lseek
#define lseek64 h_lseek64
#define lstat h_lstat
#define lstat64 h_lstat64
#define lutimes h_lutimes
#define madvise h_madvise
#define maillinfo h_mallinfo
#define makecontext h_makecontext
#define mallopt h_mallopt
#define mblen h_mblen
#define mbrlen h_mbrlen
#define mbrtowc h_mbrtowc
#define mbsinit h_mbsinit
#define mbsnrtowcs h_mbsnrtowcs
#define mbsrtowcs h_mbsrtowcs
#define mbstowcs h_mbstowcs
#define mbtowc h_mbtowc
#define mcheck h_mcheck
#define memalign h_memalign
#define memccpy h_memccpy
#define memchr h_memchr
#define memcmp h_memcmp
#define memcpy h_memcpy
#define memfd_create h_memfd_create
#define memfrob h_memfrob
#define memmem h_memmem
#define memmove h_memmove
#define mempcpy h_mempcpy
#define memrchr h_memrchr
#define memset h_memset
#define mkdir h_mkdir
#define mkdtemp h_mkdtemp
#define mkfifo h_mkfifo
#define mknod h_mknod
#define mkstemp h_mkstemp
#define mktemp h_mktemp
#define mktime h_mktime
#define mlock h_mlock
#define mlock2 h_mlock2
#define mlockall h_mlockall
#define mmap h_mmap
#define mmap64 h_mmap64
#define modf h_modf
#define modff h_modff
#define modfl h_modfl
#define mount h_mount
#define mprobe h_mprobe
#define mprotect h_mprotect
#define mrand48 h_mrand48
#define mrand48_r h_mrand48_r
#define mremap h_mremap
#define msync h_msync
#define mtrace h_mtrace
#define munlock h_munlock
#define munlockall h_munlockall
#define munmap h_munmap
#define muntrace h_muntrace
#define nan h_nan
#define nanf h_nanf
#define nanl h_nanl
#define nanosleep h_nanosleep
#define nearbyint h_nearbyint
#define nearbyintf h_nearbyintf
#define nearbyintl h_nearbyintl
#define nextafter h_nextafter
#define nextafterf h_nextafterf
#define nextafterl h_nextafterl
#define nextdown h_nextdown
#define nextdownf h_nextdownf
#define nextdownl h_nextdownl
#define nexttoward h_nexttoward
#define nexttowardf h_nexttowardf
#define nexttowardl h_nexttowardl
#define nextup h_nextup
#define nextupf h_nextupf
#define nextupl h_nextupl
// #define nftw h_nftw
// #define nftw64 h_nftw64
#define ngettext h_ngettext
#define nice h_nice
#define nl_langinfo h_nl_langinfo
#define nrand48 h_nrand48
#define nrand48_r h_nrand48_r
#define ntohl h_ntohl
#define ntohs h_ntohs
#define ntp_adjtime h_ntp_adjtime
#define ntp_gettime h_ntp_gettime
#define obstack_1grow h_obstack_1grow
#define obstack_1grow_fast h_obstack_1grow_fast
#define obstack_alloc h_obstack_alloc
#define obstack_base h_obstack_base
#define obstack_blank h_obstack_blank
#define obstack_blank_fast h_obstack_blank_fast
#define obstack_copy h_obstack_copy
#define obstack_copy0 h_obstack_copy0
#define obstack_finish h_obstack_finish
#define obstack_free h_obstack_free
#define obstack_grow h_obstack_grow
#define obstack_grow0 h_obstack_grow0
#define obstack_init h_obstack_init
#define obstack_int_grow h_obstack_int_grow
#define obstack_int_grow_fast h_obstack_int_grow_fast
#define obstack_next_free h_obstack_next_free
#define obstack_object_size h_obstack_object_size
#define obstack_ptr_grow h_obstack_ptr_grow
#define obstack_ptr_grow_fast h_obstack_ptr_grow_fast
#define obstack_room h_obstack_room
#define on_exit h_on_exit
#define open h_open
#define open_memstream h_open_memstream
#define opendir h_opendir
#define openlog h_openlog
#define openpty h_openpty
#define parse_printf_format h_parse_printf_format
#define pathconf h_pathconf
#define pause h_pause
#define pclose h_pclose
#define perror h_perror
#define pipe h_pipe
#define pkey_alloc h_pkey_alloc
#define pkey_free h_pkey_free
#define pkey_get h_pkey_get
#define pkey_mprotect h_pkey_mprotect
#define pkey_set h_pkey_set
#define popen h_popen
#define posix_fallocate h_posix_fallocate
#define posix_fallocate64 h_posix_fallocate64
#define posix_memalign h_posix_memalign
#define pow h_pow
#define powf h_powf
#define powl h_powl
#define pread h_pread
#define pread64 h_pread64
#define preadv h_preadv
#define preadv2 h_preadv2
#define preadv64 h_preadv64
// #define preadv64v2 h_preadv64v2
#define printf h_printf
#define psignal h_psignal
#define pthread_attr_getsigmask_np h_pthread_attr_getsigmask_np
#define pthread_attr_setsigmask_np h_pthread_attr_setsigmask_np
#define pthread_cond_clockwait h_pthread_cond_clockwait
#define pthread_getattr_default_np h_pthread_getattr_default_np
#define pthread_key_create h_pthread_key_create
#define pthread_key_delete h_pthread_key_delete
#define pthread_rwlock_clockrdlock h_pthread_rwlock_clockrdlock
#define pthread_rwlock_clockwrlock h_pthread_rwlock_clockwrlock
#define pthread_setattr_default_np h_pthread_setattr_default_np
#define pthread_setspecific h_pthread_setspecific
#define ptsname h_ptsname
#define ptsname_r h_ptsname_r
// #define putc h_putc
#define putc_unlocked h_putc_unlocked
#define putchar h_putchar
#define putchar_unlocked h_putchar_unlocked
#define putenv h_putenv
#define putpwent h_putpwent
#define puts h_puts
#define pututline h_pututline
#define pututxline h_pututxline
#define putw h_putw
#define putwc h_putwc
#define putwc_unlocked h_putwc_unlocked
#define putwchar h_putwchar
#define putwchar_unlocked h_putwchar_unlocked
#define pwrite h_pwrite
#define pwrite64 h_pwrite64
#define pwritev h_pwritev
#define pwritev2 h_pwritev2
#define pwritev64 h_pwritev64
// #define pwritev64v2 h_pwritev64v2
#define qecvt h_qecvt
#define qecvt_r h_qecvt_r
#define qfcvt h_qfcvt
#define qfcvt_r h_qfcvt_r
#define qgcvt h_qgcvt
#define qsort h_qsort
#define raise h_raise
#define rand h_rand
#define rand_r h_rand_r
#define random h_random
#define random_r h_random_r
#define rawmemchr h_rawmemchr
#define read h_read
#define readdir h_readdir
#define readdir_r h_readdir_r
#define readdir64 h_readdir64
#define readdir64_r h_readdir64_r
#define readlink h_readlink
#define readv h_readv
#define realloc h_realloc
#define reallocarray h_reallocarray
#define realpath h_realpath
#define recv h_recv
#define recvfrom h_recvfrom
#define regcomp h_regcomp
#define regerror h_regerror
#define regexec h_regexec
#define regfree h_regfree
#define remainder h_remainder
#define remainderf h_remainderf
#define remainderl h_remainderl
#define remove h_remove
#define rename h_rename
#define rewind h_rewind
#define rewinddir h_rewinddir
#define rindex h_rindex
#define rint h_rint
#define rintf h_rintf
#define rintl h_rintl
#define rmdir h_rmdir
#define round h_round
#define roundeven h_roundeven
#define roundevenf h_roundevenf
#define roundevenl h_roundevenl
#define roundf h_roundf
#define roundl h_roundl
#define rpmatch h_rpmatch
#define scalb h_scalb
#define scalbf h_scalbf
#define scalbl h_scalbl
#define scalbln h_scalbln
#define scalblnf h_scalblnf
#define scalblnl h_scalblnl
#define scalbn h_scalbn
#define scalbnf h_scalbnf
#define scalbnl h_scalbnl
#define scandir h_scandir
#define scandir64 h_scandir64
#define scanf h_scanf
#define sched_get_priority_max h_sched_get_priority_max
#define sched_get_priority_min h_sched_get_priority_min
#define sched_getaffinity h_sched_getaffinity
#define sched_getparam h_sched_getparam
#define sched_getscheduler h_sched_getscheduler
#define sched_rr_get_interval h_sched_rr_get_interval
#define sched_setaffinity h_sched_setaffinity
#define sched_setparam h_sched_setparam
#define sched_setscheduler h_sched_setscheduler
#define sched_yield h_sched_yield
#define secure_getenv h_secure_getenv
#define seed48 h_seed48
#define seed48_r h_seed48_r
#define seekdir h_seekdir
#define select h_select
#define sem_clockwait h_sem_clockwait
#define sem_close h_sem_close
#define sem_destroy h_sem_destroy
#define sem_getvalue h_sem_getvalue
#define sem_init h_sem_init
// #define sem_open h_sem_open
#define sem_post h_sem_post
#define sem_timedwait h_sem_timedwait
#define sem_trywait h_sem_trywait
#define sem_unlink h_sem_unlink
#define sem_wait h_sem_wait
#define semctl h_semctl
#define semget h_semget
#define semop h_semop
#define semtimedop h_semtimedop
#define send h_send
#define setbuf h_setbuf
#define setbuffer h_setbuffer
#define setcontext h_setcontext
#define setdomainname h_setdomainname
#define setegid h_setegid
#define setenv h_setenv
#define seteuid h_seteuid
#define setfsent h_setfsent
#define setgid h_setgid
#define setgrent h_setgrent
#define setgroups h_setgroups
#define sethostent h_sethostent
#define sethostid h_sethostid
#define sethostname h_sethostname
#define setlinebuf h_setlinebuf
#define setlocale h_setlocale
#define setlogmask h_setlogmask
#define setmntent h_setmntent
#define setnetent h_setnetent
#define setnetgrent h_setnetgrent
#define setpayload h_setpayload
#define setpayloadf h_setpayloadf
#define setpayloadl h_setpayloadl
#define setpayloadsig h_setpayloadsig
#define setpayloadsigf h_setpayloadsigf
#define setpayloadsigl h_setpayloadsigl
#define setpgid h_setpgid
#define setprotoent h_setprotoent
#define setpwent h_setpwent
#define setregid h_setregid
#define setreuid h_setreuid
#define setservent h_setservent
#define setsid h_setsid
#define setsockopt h_setsockopt
#define setstate h_setstate
#define setstate_r h_setstate_r
#define setuid h_setuid
#define setutent h_setutent
#define setutxent h_setutxent
#define setvbuf h_setvbuf
#define shm_open h_shm_open
#define shm_unlink h_shm_unlink
#define shutdown h_shutdown
#define sigabbrev_np h_sigabbrev_np
// #define sigaction h_sigaction
#define sigaddset h_sigaddset
#define sigaltstack h_sigaltstack
#define sigblock h_sigblock
#define sigdelset h_sigdelset
#define sigdescr_np h_sigdescr_np
#define sigemptyset h_sigemptyset
#define sigfillset h_sigfillset
#define siginterrupt h_siginterrupt
#define sigismember h_sigismember
#define siglongjmp h_siglongjmp
#define signal h_signal
#define significand h_significand
#define significandf h_significandf
#define significandl h_significandl
#define sigpause h_sigpause
#define sigpending h_sigpending
#define sigprocmask h_sigprocmask
// #define sigsetjmp h_sigsetjmp
#define sigsetmask h_sigsetmask
// #define sigstack h_sigstack
#define sigsuspend h_sigsuspend
#define sin h_sin
#define sincos h_sincos
#define sincosf h_sincosf
#define sincosl h_sincosl
#define sinf h_sinf
#define sinh h_sinh
#define sinhf h_sinhf
#define sinhl h_sinhl
#define sinl h_sinl
#define sleep h_sleep
#define snprintf h_snprintf
#define socket h_socket
#define socketpair h_socketpair
#define sprintf h_sprintf
#define sqrt h_sqrt
#define sqrtf h_sqrtf
#define sqrtl h_sqrtl
#define srand h_srand
#define srand48 h_srand48
#define srand48_r h_srand48_r
#define srandom h_srandom
#define srandom_r h_srandom_r
#define sscanf h_sscanf
#define ssignal h_ssignal
// #define stat h_stat
// #define stat64 h_stat64
#define stime h_stime
#define stpcpy h_stpcpy
#define stpncpy h_stpncpy
#define strcasecmp h_strcasecmp
#define strcasestr h_strcasestr
#define strcat h_strcat
#define strchr h_strchr
#define strchrnul h_strchrnul
#define strcmp h_strcmp
#define strcoll h_strcoll
#define strcpy h_strcpy
#define strcspn h_strcspn
#define strdup h_strdup
#define strerror h_strerror
#define strerror_r h_strerror_r
#define strerrordesc_np h_strerrordesc_np
#define strerrorname_np h_strerrorname_np
#define strfmon h_strfmon
#define strfromd h_strfromd
#define strfromf h_strfromf
#define strfroml h_strfroml
#define strfry h_strfry
#define strftime h_strftime
#define strlen h_strlen
#define strncasecmp h_strncasecmp
#define strncat h_strncat
#define strncmp h_strncmp
#define strncpy h_strncpy
#define strndup h_strndup
#define strnlen h_strnlen
#define strpbrk h_strpbrk
#define strptime h_strptime
#define strrchr h_strrchr
#define strsep h_strsep
#define strsignal h_strsignal
#define strspn h_strspn
#define strstr h_strstr
#define strtod h_strtod
#define strtof h_strtof
#define strtoimax h_strtoimax
#define strtok h_strtok
#define strtok_r h_strtok_r
#define strtol h_strtol
#define strtold h_strtold
#define strtoll h_strtoll
#define strtoq h_strtoq
#define strtoul h_strtoul
#define strtoull h_strtoull
#define strtoumax h_strtoumax
#define strtouq h_strtouq
#define strverscmp h_strverscmp
#define strxfrm h_strxfrm
#define swapcontext h_swapcontext
#define swprintf h_swprintf
#define swscanf h_swscanf
#define symlink h_symlink
#define sync h_sync
#define syscall h_syscall
#define sysconf h_sysconf
#define syslog h_syslog
#define system h_system
#define sysv_signal h_sysv_signal
#define tan h_tan
#define tanf h_tanf
#define tanh h_tanh
#define tanhf h_tanhf
#define tanhl h_tanhl
#define tanl h_tanl
#define tcdrain h_tcdrain
#define tcflow h_tcflow
#define tcflush h_tcflush
#define tcgetattr h_tcgetattr
#define tcgetpgrp h_tcgetpgrp
#define tcgetsid h_tcgetsid
#define tcsendbreak h_tcsendbreak
#define tcsetattr h_tcsetattr
#define tcsetpgrp h_tcsetpgrp
#define tdelete h_tdelete
// #define tdestroy h_tdestroy
#define telldir h_telldir
#define tempnam h_tempnam
#define textdomain h_textdomain
#define tfind h_tfind
#define tgamma h_tgamma
#define tgammaf h_tgammaf
#define tgammal h_tgammal
#define tgkill h_tgkill
#define time h_time
#define timegm h_timegm
#define timelocal h_timelocal
#define times h_times
#define tmpfile h_tmpfile
#define tmpfile64 h_tmpfile64
#define tmpnam h_tmpnam
#define tmpnam_r h_tmpnam_r
#define tolower h_tolower
#define toupper h_toupper
#define towctrans h_towctrans
#define towlower h_towlower
#define towupper h_towupper
#define trunc h_trunc
#define truncate h_truncate
#define truncate64 h_truncate64
#define truncf h_truncf
#define truncl h_truncl
#define tsearch h_tsearch
#define ttyname h_ttyname
#define ttyname_r h_ttyname_r
#define twalk h_twalk
#define twalk_r h_twalk_r
#define tzset h_tzset
#define ufromfp h_ufromfp
#define ufromfpf h_ufromfpf
#define ufromfpl h_ufromfpl
#define ufromfpx h_ufromfpx
#define ufromfpxf h_ufromfpxf
#define ufromfpxl h_ufromfpxl
#define ulimit h_ulimit
#define umask h_umask
#define umount h_umount
#define umount2 h_umount2
#define uname h_uname
#define ungetc h_ungetc
#define ungetwc h_ungetwc
#define unlink h_unlink
#define unlockpt h_unlockpt
#define unsetenv h_unsetenv
#define updwtmp h_updwtmp
#define utime h_utime
#define utimes h_utimes
#define utmpname h_utmpname
#define utmpxname h_utmpxname
#define valloc h_valloc
#define versionsort h_versionsort
#define versionsort64 h_versionsort64
#define vfork h_vfork
#define vlimit h_vlimit
#define wait h_wait
#define wait3 h_wait3
#define wait4 h_wait4
#define waitpid h_waitpid
#define warn h_warn
#define warnx h_warnx
#define wcpcpy h_wcpcpy
#define wcpncpy h_wcpncpy
#define wcrtomb h_wcrtomb
#define wcscasecmp h_wcscasecmp
#define wcscat h_wcscat
#define wcschr h_wcschr
#define wcschrnul h_wcschrnul
#define wcscmp h_wcscmp
#define wcscoll h_wcscoll
#define wcscpy h_wcscpy
#define wcscspn h_wcscspn
#define wcsdup h_wcsdup
#define wcsftime h_wcsftime
#define wcslen h_wcslen
#define wcsncasecmp h_wcsncasecmp
#define wcsncat h_wcsncat
#define wcsncmp h_wcsncmp
#define wcsncpy h_wcsncpy
#define wcsnlen h_wcsnlen
#define wcsnrtombs h_wcsnrtombs
#define wcspbrk h_wcspbrk
#define wcsrchr h_wcsrchr
#define wcsrtombs h_wcsrtombs
#define wcsspn h_wcsspn
#define wcsstr h_wcsstr
#define wcstod h_wcstod
#define wcstof h_wcstof
#define wcstoimax h_wcstoimax
#define wcstok h_wcstok
#define wcstol h_wcstol
#define wcstold h_wcstold
#define wcstoll h_wcstoll
#define wcstombs h_wcstombs
#define wcstoq h_wcstoq
#define wcstoul h_wcstoul
#define wcstoull h_wcstoull
#define wcstoumax h_wcstoumax
#define wcstouq h_wcstouq
#define wcswcs h_wcswcs
#define wcsxfrm h_wcsxfrm
#define wctob h_wctob
#define wctomb h_wctomb
#define wctrans h_wctrans
#define wctype h_wctype
#define wmemchr h_wmemchr
#define wmemcmp h_wmemcmp
#define wmemcpy h_wmemcpy
#define wmemmove h_wmemmove
#define wmempcpy h_wmempcpy
#define wmemset h_wmemset
#define wordexp h_wordexp
#define wordfree h_wordfree
#define wprintf h_wprintf
#define write h_write
#define writev h_writev
#define wscanf h_wscanf
#define y0 h_y0
#define y0f h_y0f
#define y0l h_y0l
#define y1 h_y1
#define y1f h_y1f
#define y1l h_y1l
#define yn h_yn
#define ynf h_ynf
#define ynl h_ynl


/* Type representing floating-point control modes.  */
// typedef struct
//   {
//     unsigned short int __control_word;
//     unsigned short int __glibc_reserved;
//     unsigned int __mxcsr;
//   }
femode_t;

void h__exit (int status);
void h__Exit (int status);
void h__flushlbf (void);
size_t h___fbufsize (FILE *stream);
int h___flbf (FILE *stream);
size_t h___fpending (FILE *stream);
void h___fpurge (FILE *stream);
int h___freadable (FILE *stream);
int h___freading (FILE *stream);
int h___fsetlocking (FILE *stream, int type);
int h___fwritable (FILE *stream);
int h___fwriting (FILE *stream);
uint64_t h___ppc_get_timebase (void);
uint64_t h___ppc_get_timebase_freq (void);
void h___ppc_mdoio (void);
void h___ppc_mdoom (void);
void h___ppc_set_ppr_low (void);
void h___ppc_set_ppr_med (void);
void h___ppc_set_ppr_med_high (void);
void h___ppc_set_ppr_med_low (void);
void h___ppc_set_ppr_very_low (void);
void h___ppc_yield (void);
void h___riscv_flush_icache (void *start, void *end, unsigned long int flags);
long int h_a64l (const char *string);
void h_abort (void);
int h_abs (int number);
int h_accept (int socket, struct sockaddr *addr, socklen_t *length_ptr);
int h_access (const char *filename, int how);
double h_acos (double x);
float h_acosf (float x);
double h_acosh (double x);
float h_acoshf (float x);
long double h_acoshl (long double x);
long double h_acosl (long double x);
int h_addmntent (FILE *stream, const struct mntent *mnt);
int h_addseverity (int severity, const char *string);
int h_adjtime (const struct timeval *delta, struct timeval *olddelta);
int h_adjtimex (struct timex *timex);
int h_aio_cancel (int fildes, struct aiocb *aiocbp);
int h_aio_cancel64 (int fildes, struct aiocb64 *aiocbp);
int h_aio_error (const struct aiocb *aiocbp);
int h_aio_error64 (const struct aiocb64 *aiocbp);
int h_aio_fsync (int op, struct aiocb *aiocbp);
int h_aio_fsync64 (int op, struct aiocb64 *aiocbp);
void h_aio_init (const struct aioinit *init);
int h_aio_read (struct aiocb *aiocbp);
int h_aio_read64 (struct aiocb64 *aiocbp);
int h_aio_suspend (const struct aiocb *const list[], int nent, const struct timespec *timeout);
int h_aio_suspend64 (const struct aiocb64 *const list[], int nent, const struct timespec *timeout);
int h_aio_write (struct aiocb *aiocbp);
int h_aio_write64 (struct aiocb64 *aiocbp);
unsigned int h_alarm (unsigned int seconds);
void * h_aligned_alloc (size_t alignment, size_t size);
void * h_alloca (size_t size);
int h_alphasort (const struct dirent **a, const struct dirent **b);
void h_argp_error (const struct argp_state *state, const char *fmt, ...);
void h_argp_failure (const struct argp_state *state, int status, int errnum, const char *fmt, ...);
void h_argp_help (const struct argp *argp, FILE *stream, unsigned flags, char *name);
error_t h_argp_parse (const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input);
void h_argp_state_help (const struct argp_state *state, FILE *stream, unsigned flags);
void h_argp_usage (const struct argp_state *state);
error_t h_argz_add (char **argz, size_t *argz_len, const char *str);
error_t h_argz_add_sep (char **argz, size_t *argz_len, const char *str, int delim);
error_t h_argz_append (char **argz, size_t *argz_len, const char *buf, size_t buf_len);
size_t h_argz_count (const char *argz, size_t argz_len);
error_t h_argz_create (char *const argv[], char **argz, size_t *argz_len);
error_t h_argz_create_sep (const char *string, int sep, char **argz, size_t *argz_len);
void h_argz_delete (char **argz, size_t *argz_len, char *entry);
void h_argz_extract (const char *argz, size_t argz_len, char **argv);
error_t h_argz_insert (char **argz, size_t *argz_len, char *before, const char *entry);
char * h_argz_next (const char *argz, size_t argz_len, const char *entry);
error_t h_argz_replace (char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count);
void h_argz_stringify (char *argz, size_t len, int sep);
char * h_asctime (const struct tm *brokentime);
char * h_asctime_r (const struct tm *brokentime, char *buffer);
double h_asin (double x);
float h_asinf (float x);
double h_asinh (double x);
float h_asinhf (float x);
long double h_asinhl (long double x);
long double h_asinl (long double x);
int h_asprintf (char **ptr, const char *template, ...);
double h_atan (double x);
double h_atan2 (double y, double x);
float h_atan2f (float y, float x);
long double h_atan2l (long double y, long double x);
float h_atanf (float x);
double h_atanh (double x);
float h_atanhf (float x);
long double h_atanhl (long double x);
long double h_atanl (long double x);
int h_atexit (void (*function) (void));
double h_atof (const char *string);
int h_atoi (const char *string);
long int h_atol (const char *string);
long long int h_atoll (const char *string);
int h_backtrace (void **buffer, int size);
char **h_backtrace_symbols (void *const *buffer, int size);
void h_backtrace_symbols_fd (void *const *buffer, int size, int fd);
char * h_basename (char *path);
int h_bcmp (const void *a1, const void *a2, size_t size);
void h_bcopy (const void *from, void *to, size_t size);
int h_bind (int socket, const struct sockaddr *addr, socklen_t length);
char * h_bindtextdomain (const char *domainname, const char *dirname);
char * h_bind_textdomain_codeset (const char *domainname, const char *codeset);
int h_brk (void *addr);
void * h_bsearch (const void *key, const void *array, size_t count, size_t size, int (*compar)(const void *, const void *));
wint_t h_btowc (int c);
void h_bzero (void *block, size_t size);
double h_cabs (complex double z);
float h_cabsf (complex float z);
long double h_cabsl (complex long double z);
complex double h_cacos (complex double z);
complex float h_cacosf (complex float z);
complex double h_cacosh (complex double z);
complex float h_cacoshf (complex float z);
complex long double h_cacoshl (complex long double z);
complex long double h_cacosl (complex long double z);
void * h_calloc (size_t count, size_t eltsize);
int h_canonicalize (double *cx, const double *x);
int h_canonicalizef (float *cx, const float *x);
int h_canonicalizel (long double *cx, const long double *x);
char * h_canonicalize_file_name (const char *name);
double h_carg (complex double z);
float h_cargf (complex float z);
long double h_cargl (complex long double z);
complex double h_casin (complex double z);
complex float h_casinf (complex float z);
complex double h_casinh (complex double z);
complex float h_casinhf (complex float z);
complex long double h_casinhl (complex long double z);
complex long double h_casinl (complex long double z);
complex double h_catan (complex double z);
complex float h_catanf (complex float z);
complex double h_catanh (complex double z);
complex float h_catanhf (complex float z);
complex long double h_catanhl (complex long double z);
complex long double h_catanl (complex long double z);
int h_catclose (nl_catd catalog_desc);
char * h_catgets (nl_catd catalog_desc, int set, int message, const char *string);
nl_catd h_catopen (const char *cat_name, int flag);
double h_cbrt (double x);
float h_cbrtf (float x);
long double h_cbrtl (long double x);
complex double h_ccos (complex double z);
complex float h_ccosf (complex float z);
complex double h_ccosh (complex double z);
complex float h_ccoshf (complex float z);
complex long double h_ccoshl (complex long double z);
complex long double h_ccosl (complex long double z);
double h_ceil (double x);
float h_ceilf (float x);
long double h_ceill (long double x);
complex double h_cexp (complex double z);
complex float h_cexpf (complex float z);
complex long double h_cexpl (complex long double z);
speed_t h_cfgetispeed (const struct termios *termios_p);
speed_t h_cfgetospeed (const struct termios *termios_p);
void h_cfmakeraw (struct termios *termios_p);
int h_cfsetispeed (struct termios *termios_p, speed_t speed);
int h_cfsetospeed (struct termios *termios_p, speed_t speed);
int h_cfsetspeed (struct termios *termios_p, speed_t speed);
int h_chdir (const char *filename);
int h_chmod (const char *filename, mode_t mode);
int h_chown (const char *filename, uid_t owner, gid_t group);
double h_cimag (complex double z);
float h_cimagf (complex float z);
long double h_cimagl (complex long double z);
int h_clearenv (void);
void h_clearerr (FILE *stream);
void h_clearerr_unlocked (FILE *stream);
clock_t h_clock (void);
int h_clock_getres (clockid_t clock, struct timespec *res);
int h_clock_gettime (clockid_t clock, struct timespec *ts);
int h_clock_settime (clockid_t clock, const struct timespec *ts);
complex double h_clog (complex double z);
complex double h_clog10 (complex double z);
complex float h_clog10f (complex float z);
complex long double h_clog10l (complex long double z);
complex float h_clogf (complex float z);
complex long double h_clogl (complex long double z);
int h_close (int filedes);
int h_closedir (DIR *dirstream);
void h_closelog (void);
size_t h_confstr (int parameter, char *buf, size_t len);
complex double h_conj (complex double z);
complex float h_conjf (complex float z);
complex long double h_conjl (complex long double z);
int h_connect (int socket, const struct sockaddr *addr, socklen_t length);
double h_copysign (double x, double y);
float h_copysignf (float x, float y);
long double h_copysignl (long double x, long double y);
ssize_t h_copy_file_range (int inputfd, loff_t *inputpos, int outputfd, loff_t *outputpos, size_t length, unsigned int flags);
double h_cos (double x);
float h_cosf (float x);
double h_cosh (double x);
float h_coshf (float x);
long double h_coshl (long double x);
long double h_cosl (long double x);
complex double h_cpow (complex double base, complex double power);
complex float h_cpowf (complex float base, complex float power);
complex long double h_cpowl (complex long double base, complex long double power);
complex double h_cproj (complex double z);
complex float h_cprojf (complex float z);
complex long double h_cprojl (complex long double z);
double h_creal (complex double z);
float h_crealf (complex float z);
long double h_creall (complex long double z);
int h_creat (const char *filename, mode_t mode);
int h_creat64 (const char *filename, mode_t mode);
char * h_crypt (const char *phrase, const char *salt);
char * h_crypt_r (const char *phrase, const char *salt, struct crypt_data *data);
complex double h_csin (complex double z);
complex float h_csinf (complex float z);
complex double h_csinh (complex double z);
complex float h_csinhf (complex float z);
complex long double h_csinhl (complex long double z);
complex long double h_csinl (complex long double z);
complex double h_csqrt (complex double z);
complex float h_csqrtf (complex float z);
complex long double h_csqrtl (complex long double z);
complex double h_ctan (complex double z);
complex float h_ctanf (complex float z);
complex double h_ctanh (complex double z);
complex float h_ctanhf (complex float z);
complex long double h_ctanhl (complex long double z);
complex long double h_ctanl (complex long double z);
char * h_ctermid (char *string);
char * h_ctime (const time_t *time);
char * h_ctime_r (const time_t *time, char *buffer);
char * h_cuserid (char *string);
double h_daddl (long double x, long double y);
char * h_dcgettext (const char *domainname, const char *msgid, int category);
char * h_dcngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n, int category);
double h_ddivl (long double x, long double y);
char * h_dgettext (const char *domainname, const char *msgid);
double h_difftime (time_t end, time_t begin);
int h_dirfd (DIR *dirstream);
char * h_dirname (char *path);
div_t h_div (int numerator, int denominator);
double h_dmull (long double x, long double y);
char * h_dngettext (const char *domain, const char *msgid1, const char *msgid2, unsigned long int n);
double h_drand48 (void);
int h_drand48_r (struct drand48_data *buffer, double *result);
double h_drem (double numerator, double denominator);
float h_dremf (float numerator, float denominator);
long double h_dreml (long double numerator, long double denominator);
double h_dsubl (long double x, long double y);
int h_dup (int old);
int h_dup2 (int old, int new);
char * h_ecvt (double value, int ndigit, int *decpt, int *neg);
int h_ecvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
void h_endfsent (void);
void h_endgrent (void);
void h_endhostent (void);
int h_endmntent (FILE *stream);
void h_endnetent (void);
void h_endnetgrent (void);
void h_endprotoent (void);
void h_endpwent (void);
void h_endservent (void);
void h_endutent (void);
void h_endutxent (void);
error_t h_envz_add (char **envz, size_t *envz_len, const char *name, const char *value);
char * h_envz_entry (const char *envz, size_t envz_len, const char *name);
char * h_envz_get (const char *envz, size_t envz_len, const char *name);
error_t h_envz_merge (char **envz, size_t *envz_len, const char *envz2, size_t envz2_len, int override);
void h_envz_remove (char **envz, size_t *envz_len, const char *name);
void h_envz_strip (char **envz, size_t *envz_len);
double h_erand48 (unsigned short int xsubi[3]);
int h_erand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, double *result);
double h_erf (double x);
double h_erfc (double x);
float h_erfcf (float x);
long double h_erfcl (long double x);
float h_erff (float x);
long double h_erfl (long double x);
void h_err (int status, const char *format, ...);

void h_error (int status, int errnum, const char *format, ...);
void h_error_at_line (int status, int errnum, const char *fname, unsigned int lineno, const char *format, ...);
void h_errx (int status, const char *format, ...);
int h_execl (const char *filename, const char *arg0, ...);
int h_execle (const char *filename, const char *arg0, ...);
int h_execlp (const char *filename, const char *arg0, ...);
int h_execv (const char *filename, char *const argv[]);
int h_execve (const char *filename, char *const argv[], char *const env[]);
int h_execvp (const char *filename, char *const argv[]);
void h_exit (int status);
double h_exp (double x);
double h_exp10 (double x);
float h_exp10f (float x);
long double h_exp10l (long double x);
double h_exp2 (double x);
float h_exp2f (float x);
long double h_exp2l (long double x);
float h_expf (float x);
long double h_expl (long double x);
void h_explicit_bzero (void *block, size_t len);
double h_expm1 (double x);
float h_expm1f (float x);
long double h_expm1l (long double x);
double h_fabs (double number);
float h_fabsf (float number);
long double h_fabsl (long double number);
float h_fadd (double x, double y);
float h_faddl (long double x, long double y);
int h_fchdir (int filedes);
int h_fchmod (int filedes, mode_t mode);
int h_fchown (int filedes, uid_t owner, gid_t group);
int h_fclose (FILE *stream);
int h_fcloseall (void);
int h_fcntl (int filedes, int command, ...);
char * h_fcvt (double value, int ndigit, int *decpt, int *neg);
int h_fcvt_r (double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
int h_fdatasync (int fildes);
double h_fdim (double x, double y);
float h_fdimf (float x, float y);
long double h_fdiml (long double x, long double y);
float h_fdiv (double x, double y);
float h_fdivl (long double x, long double y);
FILE * h_fdopen (int filedes, const char *opentype);
DIR * h_fdopendir (int fd);
int h_feclearexcept (int excepts);
int h_fedisableexcept (int excepts);
int h_feenableexcept (int excepts);
int h_fegetenv (fenv_t *envp);
int h_fegetexcept (void);
int h_fegetexceptflag (fexcept_t *flagp, int excepts);
// int h_fegetmode (femode_t *modep);
int h_fegetround (void);
int h_feholdexcept (fenv_t *envp);
int h_feof (FILE *stream);
int h_feof_unlocked (FILE *stream);
int h_feraiseexcept (int excepts);
int h_ferror (FILE *stream);
int h_ferror_unlocked (FILE *stream);
int h_fesetenv (const fenv_t *envp);
int h_fesetexcept (int excepts);
int h_fesetexceptflag (const fexcept_t *flagp, int excepts);
// int h_fesetmode (const femode_t *modep);
int h_fesetround (int round);
int h_fetestexcept (int excepts);
int h_fetestexceptflag (const fexcept_t *flagp, int excepts);
int h_feupdateenv (const fenv_t *envp);
int h_fexecve (int fd,  char *const argv[], char *const env[]);
int h_fflush (FILE *stream);
int h_fflush_unlocked (FILE *stream);
int h_fgetc (FILE *stream);
int h_fgetc_unlocked (FILE *stream);
struct group * h_fgetgrent (FILE *stream);
int h_fgetgrent_r (FILE *stream, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
int h_fgetpos (FILE *stream, fpos_t *position);
// int h_fgetpos64 (FILE *stream, fpos64_t *position);
struct passwd * h_fgetpwent (FILE *stream);
int h_fgetpwent_r (FILE *stream, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
char * h_fgets (char *s, int count, FILE *stream);
char * h_fgets_unlocked (char *s, int count, FILE *stream);
wint_t h_fgetwc (FILE *stream);
wint_t h_fgetwc_unlocked (FILE *stream);
wchar_t * h_fgetws (wchar_t *ws, int count, FILE *stream);
wchar_t * h_fgetws_unlocked (wchar_t *ws, int count, FILE *stream);
int h_fileno (FILE *stream);
int h_fileno_unlocked (FILE *stream);
int h_finite (double x);
int h_finitef (float x);
int h_finitel (long double x);
void h_flockfile (FILE *stream);
double h_floor (double x);
float h_floorf (float x);
long double h_floorl (long double x);
double h_fma (double x, double y, double z);
float h_fmaf (float x, float y, float z);
long double h_fmal (long double x, long double y, long double z);
double h_fmax (double x, double y);
float h_fmaxf (float x, float y);
long double h_fmaxl (long double x, long double y);
double h_fmaxmag (double x, double y);
float h_fmaxmagf (float x, float y);
long double h_fmaxmagl (long double x, long double y);
FILE * h_fmemopen (void *buf, size_t size, const char *opentype);
double h_fmin (double x, double y);
float h_fminf (float x, float y);
long double h_fminl (long double x, long double y);
double h_fminmag (double x, double y);
float h_fminmagf (float x, float y);
long double h_fminmagl (long double x, long double y);
double h_fmod (double numerator, double denominator);
float h_fmodf (float numerator, float denominator);
long double h_fmodl (long double numerator, long double denominator);
int h_fmtmsg (long int classification, const char *label, int severity, const char *text, const char *action, const char *tag);
float h_fmul (double x, double y);
float h_fmull (long double x, long double y);
int h_fnmatch (const char *pattern, const char *string, int flags);
FILE * h_fopen (const char *filename, const char *opentype);
FILE * h_fopen64 (const char *filename, const char *opentype);
// FILE * h_fopencookie (void *cookie, const char *opentype, cookie_io_functions_t io_functions);
pid_t h_fork (void);
int h_forkpty (int *amaster, char *name, const struct termios *termp, const struct winsize *winp);
long int h_fpathconf (int filedes, int parameter);
int h_fprintf (FILE *stream, const char *template, ...);
int h_fputc (int c, FILE *stream);
int h_fputc_unlocked (int c, FILE *stream);
int h_fputs (const char *s, FILE *stream);
int h_fputs_unlocked (const char *s, FILE *stream);
wint_t h_fputwc (wchar_t wc, FILE *stream);
wint_t h_fputwc_unlocked (wchar_t wc, FILE *stream);
int h_fputws (const wchar_t *ws, FILE *stream);
int h_fputws_unlocked (const wchar_t *ws, FILE *stream);
size_t h_fread (void *data, size_t size, size_t count, FILE *stream);
size_t h_fread_unlocked (void *data, size_t size, size_t count, FILE *stream);
void h_free (void *ptr);
FILE * h_freopen (const char *filename, const char *opentype, FILE *stream);
FILE * h_freopen64 (const char *filename, const char *opentype, FILE *stream);
double h_frexp (double value, int *exponent);
float h_frexpf (float value, int *exponent);
long double h_frexpl (long double value, int *exponent);
intmax_t h_fromfp (double x, int round, unsigned int width);
intmax_t h_fromfpf (float x, int round, unsigned int width);
intmax_t h_fromfpl (long double x, int round, unsigned int width);
intmax_t h_fromfpx (double x, int round, unsigned int width);
intmax_t h_fromfpxf (float x, int round, unsigned int width);
intmax_t h_fromfpxl (long double x, int round, unsigned int width);
int h_fscanf (FILE *stream, const char *template, ...);
int h_fseek (FILE *stream, long int offset, int whence);
int h_fseeko (FILE *stream, off_t offset, int whence);
// int h_fseeko64 (FILE *stream, off64_t offset, int whence);
int h_fsetpos (FILE *stream, const fpos_t *position);
// int h_fsetpos64 (FILE *stream, const fpos64_t *position);
int h_fstat (int filedes, struct stat *buf);
int h_fstat64 (int filedes, struct stat64 *buf);
float h_fsub (double x, double y);
float h_fsubl (long double x, long double y);
int h_fsync (int fildes);
long int h_ftell (FILE *stream);
off_t h_ftello (FILE *stream);
// off64_t h_ftello64 (FILE *stream);
int h_ftruncate (int fd, off_t length);
// int h_ftruncate64 (int id, off64_t length);
int h_ftrylockfile (FILE *stream);
int h_ftw (const char *filename, __ftw_func_t func, int descriptors);
// int h_ftw64 (const char *filename, __ftw64_func_t func, int descriptors);
void h_funlockfile (FILE *stream);
int h_futimes (int fd, const struct timeval tvp[2]);
int h_fwide (FILE *stream, int mode);
int h_fwprintf (FILE *stream, const wchar_t *template, ...);
size_t h_fwrite (const void *data, size_t size, size_t count, FILE *stream);
size_t h_fwrite_unlocked (const void *data, size_t size, size_t count, FILE *stream);
int h_fwscanf (FILE *stream, const wchar_t *template, ...);
double h_gamma (double x);
float h_gammaf (float x);
long double h_gammal (long double x);
char * h_gcvt (double value, int ndigit, char *buf);
unsigned long int h_getauxval (unsigned long int type);
int h_getc (FILE *stream);
int h_getchar (void);
int h_getchar_unlocked (void);
int h_getcontext (ucontext_t *ucp);
int h_getcpu (unsigned int *cpu, unsigned int *node);
char * h_getcwd (char *buffer, size_t size);
int h_getc_unlocked (FILE *stream);
struct tm * h_getdate (const char *string);
int h_getdate_r (const char *string, struct tm *tp);
ssize_t h_getdelim (char **lineptr, size_t *n, int delimiter, FILE *stream);
ssize_t h_getdents64 (int fd, void *buffer, size_t length);
int h_getdomainnname (char *name, size_t length);
gid_t h_getegid (void);
int h_getentropy (void *buffer, size_t length);
char * h_getenv (const char *name);
uid_t h_geteuid (void);
struct fstab * h_getfsent (void);
struct fstab * h_getfsfile (const char *name);
struct fstab * h_getfsspec (const char *name);
gid_t h_getgid (void);
struct group * h_getgrent (void);
int h_getgrent_r (struct group *result_buf, char *buffer, size_t buflen, struct group **result);
struct group * h_getgrgid (gid_t gid);
int h_getgrgid_r (gid_t gid, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
struct group * h_getgrnam (const char *name);
int h_getgrnam_r (const char *name, struct group *result_buf, char *buffer, size_t buflen, struct group **result);
int h_getgrouplist (const char *user, gid_t group, gid_t *groups, int *ngroups);
int h_getgroups (int count, gid_t *groups);
struct hostent * h_gethostbyaddr (const void *addr, socklen_t length, int format);
int h_gethostbyaddr_r (const void *addr, socklen_t length, int format, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
struct hostent * h_gethostbyname (const char *name);
struct hostent * h_gethostbyname2 (const char *name, int af);
int h_gethostbyname2_r (const char *name, int af, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
int h_gethostbyname_r (const char *restrict name, struct hostent *restrict result_buf, char *restrict buf, size_t buflen, struct hostent **restrict result, int *restrict h_errnop);
struct hostent * h_gethostent (void);
long int h_gethostid (void);
int h_gethostname (char *name, size_t size);

ssize_t h_getline (char **lineptr, size_t *n, FILE *stream);
int h_getloadavg (double loadavg[], int nelem);
char * h_getlogin (void);
struct mntent * h_getmntent (FILE *stream);
struct mntent * h_getmntent_r (FILE *stream, struct mntent *result, char *buffer, int bufsize);
struct netent * h_getnetbyaddr (uint32_t net, int type);
struct netent * h_getnetbyname (const char *name);
struct netent * h_getnetent (void);
int h_getnetgrent (char **hostp, char **userp, char **domainp);
int h_getnetgrent_r (char **hostp, char **userp, char **domainp, char *buffer, size_t buflen);
int h_getopt (int argc, char *const *argv, const char *options);
int h_getopt_long (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
int h_getopt_long_only (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *indexptr);
int h_getpagesize (void);
char * h_getpass (const char *prompt);
double h_getpayload (const double *x);
float h_getpayloadf (const float *x);
long double h_getpayloadl (const long double *x);
int h_getpeername (int socket, struct sockaddr *addr, socklen_t *length_ptr);
int h_getpgid (pid_t pid);
pid_t h_getpgrp (void);
pid_t h_getpid (void);
pid_t h_getppid (void);


struct protoent * h_getprotobyname (const char *name);
struct protoent * h_getprotobynumber (int protocol);
struct protoent * h_getprotoent (void);
int h_getpt (void);
struct passwd * h_getpwent (void);
int h_getpwent_r (struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
struct passwd * h_getpwnam (const char *name);
int h_getpwnam_r (const char *name, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
struct passwd * h_getpwuid (uid_t uid);
int h_getpwuid_r (uid_t uid, struct passwd *result_buf, char *buffer, size_t buflen, struct passwd **result);
ssize_t h_getrandom (void *buffer, size_t length, unsigned int flags);


int h_getrusage (int processes, struct rusage *rusage);
char * h_gets (char *s);
struct servent * h_getservbyname (const char *name, const char *proto);
struct servent * h_getservbyport (int port, const char *proto);
struct servent * h_getservent (void);
pid_t h_getsid (pid_t pid);
int h_getsockname (int socket, struct sockaddr *addr, socklen_t *length_ptr);
int h_getsockopt (int socket, int level, int optname, void *optval, socklen_t *optlen_ptr);
int h_getsubopt (char **optionp, char *const *tokens, char **valuep);
char * h_gettext (const char *msgid);
pid_t h_gettid (void);

uid_t h_getuid (void);
mode_t h_getumask (void);
struct utmp * h_getutent (void);
int h_getutent_r (struct utmp *buffer, struct utmp **result);
struct utmp * h_getutid (const struct utmp *id);
int h_getutid_r (const struct utmp *id, struct utmp *buffer, struct utmp **result);
struct utmp * h_getutline (const struct utmp *line);
int h_getutline_r (const struct utmp *line, struct utmp *buffer, struct utmp **result);


struct utmpx * h_getutxent (void);
struct utmpx * h_getutxid (const struct utmpx *id);
struct utmpx * h_getutxline (const struct utmpx *line);
int h_getw (FILE *stream);
wint_t h_getwc (FILE *stream);
wint_t h_getwchar (void);
wint_t h_getwchar_unlocked (void);
wint_t h_getwc_unlocked (FILE *stream);
char * h_getwd (char *buffer);
long int h_get_avphys_pages (void);
char * h_get_current_dir_name (void);
int h_get_nprocs (void);
int h_get_nprocs_conf (void);
long int h_get_phys_pages (void);
int h_glob (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob_t *vector_ptr);
// int h_glob64 (const char *pattern, int flags, int (*errfunc) (const char *filename, int error_code), glob64_t *vector_ptr);
void h_globfree (glob_t *pglob);
// void h_globfree64 (glob64_t *pglob);
struct tm * h_gmtime (const time_t *time);
struct tm * h_gmtime_r (const time_t *time, struct tm *resultp);
int h_grantpt (int filedes);
int h_gsignal (int signum);
char * h_hasmntopt (const struct mntent *mnt, const char *opt);
int h_hcreate (size_t nel);
int h_hcreate_r (size_t nel, struct hsearch_data *htab);
void h_hdestroy (void);
void h_hdestroy_r (struct hsearch_data *htab);
ENTRY * h_hsearch (ENTRY item, ACTION action);
int h_hsearch_r (ENTRY item, ACTION action, ENTRY **retval, struct hsearch_data *htab);
uint32_t h_htonl (uint32_t hostlong);
uint16_t h_htons (uint16_t hostshort);
double h_hypot (double x, double y);
float h_hypotf (float x, float y);
long double h_hypotl (long double x, long double y);
size_t h_iconv (iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
int h_iconv_close (iconv_t cd);
iconv_t h_iconv_open (const char *tocode, const char *fromcode);
void h_if_freenameindex (struct if_nameindex *ptr);
char * h_if_indextoname (unsigned int ifindex, char *ifname);
struct if_nameindex * h_if_nameindex (void);
unsigned int h_if_nametoindex (const char *ifname);
int h_ilogb (double x);
int h_ilogbf (float x);
int h_ilogbl (long double x);
intmax_t h_imaxabs (intmax_t number);
imaxdiv_t h_imaxdiv (intmax_t numerator, intmax_t denominator);
char * h_index (const char *string, int c);
uint32_t h_inet_addr (const char *name);
int h_inet_aton (const char *name, struct in_addr *addr);
uint32_t h_inet_lnaof (struct in_addr addr);
struct in_addr h_inet_makeaddr (uint32_t net, uint32_t local);
uint32_t h_inet_netof (struct in_addr addr);
uint32_t h_inet_network (const char *name);
char * h_inet_ntoa (struct in_addr addr);
const char * h_inet_ntop (int af, const void *cp, char *buf, socklen_t len);
int h_inet_pton (int af, const char *cp, void *buf);
int h_initgroups (const char *user, gid_t group);
char * h_initstate (unsigned int seed, char *state, size_t size);
int h_initstate_r (unsigned int seed, char *restrict statebuf, size_t statelen, struct random_data *restrict buf);
int h_innetgr (const char *netgroup, const char *host, const char *user, const char *domain);
int h_ioctl (int filedes, unsigned long command, ...);
int h_isatty (int filedes);
int h_isinff (float x);
int h_isinfl (long double x);
int h_isnanl (long double x);
int h_iswalnum (wint_t wc);
int h_iswalpha (wint_t wc);
int h_iswblank (wint_t wc);
int h_iswcntrl (wint_t wc);
int h_iswctype (wint_t wc, wctype_t desc);
int h_iswdigit (wint_t wc);
int h_iswgraph (wint_t wc);
int h_iswlower (wint_t wc);
int h_iswprint (wint_t wc);
int h_iswpunct (wint_t wc);
int h_iswspace (wint_t wc);
int h_iswupper (wint_t wc);
int h_iswxdigit (wint_t wc);
double h_j0 (double x);
float h_j0f (float x);
long double h_j0l (long double x);
double h_j1 (double x);
float h_j1f (float x);
long double h_j1l (long double x);
double h_jn (int n, double x);
float h_jnf (int n, float x);
long double h_jnl (int n, long double x);
long int h_jrand48 (unsigned short int xsubi[3]);
int h_jrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
int h_kill (pid_t pid, int signum);
int h_killpg (int pgid, int signum);
char * h_l64a (long int n);
long int h_labs (long int number);
void h_lcong48 (unsigned short int param[7]);
int h_lcong48_r (unsigned short int param[7], struct drand48_data *buffer);
double h_ldexp (double value, int exponent);
float h_ldexpf (float value, int exponent);
long double h_ldexpl (long double value, int exponent);
ldiv_t h_ldiv (long int numerator, long int denominator);
void * h_lfind (const void *key, const void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
double h_lgamma (double x);
float h_lgammaf (float x);
float h_lgammaf_r (float x, int *signp);
long double h_lgammal (long double x);
long double h_lgammal_r (long double x, int *signp);
double h_lgamma_r (double x, int *signp);
int h_link (const char *oldname, const char *newname);
int h_linkat (int oldfd, const char *oldname, int newfd, const char *newname, int flags);
int h_lio_listio (int mode, struct aiocb *const list[], int nent, struct sigevent *sig);
int h_lio_listio64 (int mode, struct aiocb64 *const list[], int nent, struct sigevent *sig);
int h_listen (int socket, int n);
long long int h_llabs (long long int number);
lldiv_t h_lldiv (long long int numerator, long long int denominator);
long int h_llogb (double x);
long int h_llogbf (float x);
long int h_llogbl (long double x);
long long int h_llrint (double x);
long long int h_llrintf (float x);
long long int h_llrintl (long double x);
long long int h_llround (double x);
long long int h_llroundf (float x);
long long int h_llroundl (long double x);
struct lconv * h_localeconv (void);
struct tm * h_localtime (const time_t *time);
struct tm * h_localtime_r (const time_t *time, struct tm *resultp);
double h_log (double x);
double h_log10 (double x);
float h_log10f (float x);
long double h_log10l (long double x);
double h_log1p (double x);
float h_log1pf (float x);
long double h_log1pl (long double x);
double h_log2 (double x);
float h_log2f (float x);
long double h_log2l (long double x);
double h_logb (double x);
float h_logbf (float x);
long double h_logbl (long double x);
float h_logf (float x);
void h_login (const struct utmp *entry);
int h_login_tty (int filedes);
long double h_logl (long double x);
int h_logout (const char *ut_line);
void h_logwtmp (const char *ut_line, const char *ut_name, const char *ut_host);
void h_longjmp (jmp_buf state, int value);
long int h_lrand48 (void);
int h_lrand48_r (struct drand48_data *buffer, long int *result);
long int h_lrint (double x);
long int h_lrintf (float x);
long int h_lrintl (long double x);
long int h_lround (double x);
long int h_lroundf (float x);
long int h_lroundl (long double x);
void * h_lsearch (const void *key, void *base, size_t *nmemb, size_t size, int(*compar)(const void *, const void *));
off_t h_lseek (int filedes, off_t offset, int whence);
// off64_t h_lseek64 (int filedes, off64_t offset, int whence);
int h_lstat (const char *filename, struct stat *buf);
int h_lstat64 (const char *filename, struct stat64 *buf);
int h_lutimes (const char *filename, const struct timeval tvp[2]);
int h_madvise (void *addr, size_t length, int advice);
void h_makecontext (ucontext_t *ucp, void (*func) (void), int argc, ...);
struct mallinfo h_mallinfo (void);
int h_mallopt (int param, int value);
int h_mblen (const char *string, size_t size);
size_t h_mbrlen (const char *restrict s, size_t n, mbstate_t *ps);
size_t h_mbrtowc (wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps);
int h_mbsinit (const mbstate_t *ps);
size_t h_mbsnrtowcs (wchar_t *restrict dst, const char **restrict src, size_t nmc, size_t len, mbstate_t *restrict ps);
size_t h_mbsrtowcs (wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps);
size_t h_mbstowcs (wchar_t *wstring, const char *string, size_t size);
int h_mbtowc (wchar_t *restrict result, const char *restrict string, size_t size);
int h_mcheck (void (*abortfn) (enum mcheck_status status));
void * h_memalign (size_t boundary, size_t size);
void * h_memccpy (void *restrict to, const void *restrict from, int c, size_t size);
void * h_memchr (const void *block, int c, size_t size);
int h_memcmp (const void *a1, const void *a2, size_t size);
void * h_memcpy (void *restrict to, const void *restrict from, size_t size);
int h_memfd_create (const char *name, unsigned int flags);
void * h_memfrob (void *mem, size_t length);
void * h_memmem (const void *haystack, size_t haystack_len,const void *needle, size_t needle_len);
void * h_memmove (void *to, const void *from, size_t size);
void * h_mempcpy (void *restrict to, const void *restrict from, size_t size);
void * h_memrchr (const void *block, int c, size_t size);
void * h_memset (void *block, int c, size_t size);
int h_mkdir (const char *filename, mode_t mode);
char * h_mkdtemp (char *template);
int h_mkfifo (const char *filename, mode_t mode);
int h_mknod (const char *filename, mode_t mode, dev_t dev);
int h_mkstemp (char *template);
char * h_mktemp (char *template);
time_t h_mktime (struct tm *brokentime);
int h_mlock (const void *addr, size_t len);
int h_mlock2 (const void *addr, size_t len, unsigned int flags);
int h_mlockall (int flags);
void * h_mmap (void *address, size_t length, int protect, int flags, int filedes, off_t offset);
// void * h_mmap64 (void *address, size_t length, int protect, int flags, int filedes, off64_t offset);
double h_modf (double value, double *integer_part);
float h_modff (float value, float *integer_part);
long double h_modfl (long double value, long double *integer_part);
int h_mount (const char *special_file, const char *dir, const char *fstype, unsigned long int options, const void *data);
int h_mprobe (void *pointer);
int h_mprotect (void *address, size_t length, int protection);
long int h_mrand48 (void);
int h_mrand48_r (struct drand48_data *buffer, long int *result);
void * h_mremap (void *address, size_t length, size_t new_length, int flag);
int h_msync (void *address, size_t length, int flags);
void h_mtrace (void);
int h_munlock (const void *addr, size_t len);
int h_munlockall (void);
int h_munmap (void *addr, size_t length);
void h_muntrace (void);
double h_nan (const char *tagp);
float h_nanf (const char *tagp);
long double h_nanl (const char *tagp);
int h_nanosleep (const struct timespec *requested_time, struct timespec *remaining);
double h_nearbyint (double x);
float h_nearbyintf (float x);
long double h_nearbyintl (long double x);
double h_nextafter (double x, double y);
float h_nextafterf (float x, float y);
long double h_nextafterl (long double x, long double y);
double h_nextdown (double x);
float h_nextdownf (float x);
long double h_nextdownl (long double x);
double h_nexttoward (double x, long double y);
float h_nexttowardf (float x, long double y);
long double h_nexttowardl (long double x, long double y);
double h_nextup (double x);
float h_nextupf (float x);
long double h_nextupl (long double x);
// int h_nftw (const char *filename, __nftw_func_t func, int descriptors, int flag);
// int h_nftw64 (const char *filename, __nftw64_func_t func, int descriptors, int flag);
char * h_ngettext (const char *msgid1, const char *msgid2, unsigned long int n);
int h_nice (int increment);
char * h_nl_langinfo (nl_item item);
long int h_nrand48 (unsigned short int xsubi[3]);
int h_nrand48_r (unsigned short int xsubi[3], struct drand48_data *buffer, long int *result);
uint32_t h_ntohl (uint32_t netlong);
uint16_t h_ntohs (uint16_t netshort);
int h_ntp_adjtime (struct timex *tptr);
int h_ntp_gettime (struct ntptimeval *tptr);
void h_obstack_1grow (struct obstack *obstack_ptr, char c);
void h_obstack_1grow_fast (struct obstack *obstack_ptr, char c);
void * h_obstack_alloc (struct obstack *obstack_ptr, int size);
void * h_obstack_base (struct obstack *obstack_ptr);
void h_obstack_blank (struct obstack *obstack_ptr, int size);
void h_obstack_blank_fast (struct obstack *obstack_ptr, int size);
void * h_obstack_copy (struct obstack *obstack_ptr, void *address, int size);
void * h_obstack_copy0 (struct obstack *obstack_ptr, void *address, int size);
void * h_obstack_finish (struct obstack *obstack_ptr);
void h_obstack_free (struct obstack *obstack_ptr, void *object);
void h_obstack_grow (struct obstack *obstack_ptr, void *data, int size);
void h_obstack_grow0 (struct obstack *obstack_ptr, void *data, int size);
int h_obstack_init (struct obstack *obstack_ptr);
void h_obstack_int_grow (struct obstack *obstack_ptr, int data);
void h_obstack_int_grow_fast (struct obstack *obstack_ptr, int data);
void * h_obstack_next_free (struct obstack *obstack_ptr);
int h_obstack_object_size (struct obstack *obstack_ptr);
void h_obstack_ptr_grow (struct obstack *obstack_ptr, void *data);
void h_obstack_ptr_grow_fast (struct obstack *obstack_ptr, void *data);
int h_obstack_room (struct obstack *obstack_ptr);
int h_on_exit (void (*function)(int status, void *arg), void *arg);
int h_open (const char *filename, int flags);
DIR * h_opendir (const char *dirname);
void h_openlog (const char *ident, int option, int facility);
int h_openpty (int *amaster, int *aslave, char *name, const struct termios *termp, const struct winsize *winp);
FILE * h_open_memstream (char **ptr, size_t *sizeloc);
size_t h_parse_printf_format (const char *template, size_t n, int *argtypes);
long int h_pathconf (const char *filename, int parameter);
int h_pause (void);
int h_pclose (FILE *stream);
void h_perror (const char *message);
int h_pipe (int filedes[2]);
int h_pkey_alloc (unsigned int flags, unsigned int restrictions);
int h_pkey_free (int key);
int h_pkey_get (int key);
int h_pkey_mprotect (void *address, size_t length, int protection, int key);
int h_pkey_set (int key, unsigned int rights);
FILE * h_popen (const char *command, const char *mode);
int h_posix_fallocate (int fd, off_t offset, off_t length);
// int h_posix_fallocate64 (int fd, off64_t offset, off64_t length);
int h_posix_memalign (void **memptr, size_t alignment, size_t size);
double h_pow (double base, double power);
float h_powf (float base, float power);
long double h_powl (long double base, long double power);
ssize_t h_pread (int filedes, void *buffer, size_t size, off_t offset);
// ssize_t h_pread64 (int filedes, void *buffer, size_t size, off64_t offset);
ssize_t h_preadv (int fd, const struct iovec *iov, int iovcnt, off_t offset);
ssize_t h_preadv2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
// ssize_t h_preadv64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset);
// ssize_t h_preadv64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
int h_printf (const char *template, ...);
void h_psignal (int signum, const char *message);
int h_pthread_attr_getsigmask_np (const pthread_attr_t *attr, sigset_t *sigmask);
int h_pthread_attr_setsigmask_np (pthread_attr_t *attr, const sigset_t *sigmask);
int h_pthread_cond_clockwait (pthread_cond_t *cond, pthread_mutex_t *mutex,clockid_t clockid, const struct timespec *abstime);
int h_pthread_getattr_default_np (pthread_attr_t *attr);
int h_pthread_key_create (pthread_key_t *key, void (*destructor)(void*));
int h_pthread_key_delete (pthread_key_t key);
int h_pthread_rwlock_clockrdlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
int h_pthread_rwlock_clockwrlock (pthread_rwlock_t *rwlock,clockid_t clockid, const struct timespec *abstime);
int h_pthread_setattr_default_np (pthread_attr_t *attr);
int h_pthread_setspecific (pthread_key_t key, const void *value);
char * h_ptsname (int filedes);
int h_ptsname_r (int filedes, char *buf, size_t len);
int h_putc (int c, FILE *stream);
int h_putchar (int c);
int h_putchar_unlocked (int c);
int h_putc_unlocked (int c, FILE *stream);
int h_putenv (char *string);
int h_putpwent (const struct passwd *p, FILE *stream);
int h_puts(const char *s);
struct utmp * h_pututline (const struct utmp *utmp);
struct utmpx * h_pututxline (const struct utmpx *utmp);
int h_putw (int w, FILE *stream);
wint_t h_putwc (wchar_t wc, FILE *stream);
wint_t h_putwchar (wchar_t wc);
wint_t h_putwchar_unlocked (wchar_t wc);
wint_t h_putwc_unlocked (wchar_t wc, FILE *stream);
ssize_t h_pwrite (int filedes, const void *buffer, size_t size, off_t offset);
// ssize_t h_pwrite64 (int filedes, const void *buffer, size_t size, off64_t offset);
ssize_t h_pwritev (int fd, const struct iovec *iov, int iovcnt, off_t offset);
ssize_t h_pwritev2 (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags);
// ssize_t h_pwritev64 (int fd, const struct iovec *iov, int iovcnt, off64_t offset);
// ssize_t h_pwritev64v2 (int fd, const struct iovec *iov, int iovcnt, off64_t offset, int flags);
char * h_qecvt (long double value, int ndigit, int *decpt, int *neg);
int h_qecvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
char * h_qfcvt (long double value, int ndigit, int *decpt, int *neg);
int h_qfcvt_r (long double value, int ndigit, int *decpt, int *neg, char *buf, size_t len);
char * h_qgcvt (long double value, int ndigit, char *buf);
void h_qsort (void *array, size_t count, size_t size, int(*compare)(const void *, const void *));
int h_raise (int signum);
int h_rand (void);
long int h_random (void);
int h_random_r (struct random_data *restrict buf, int32_t *restrict result);
int h_rand_r (unsigned int *seed);
void * h_rawmemchr (const void *block, int c);
ssize_t h_read (int filedes, void *buffer, size_t size);
struct dirent * h_readdir (DIR *dirstream);
struct dirent64 * h_readdir64 (DIR *dirstream);
int h_readdir64_r (DIR *dirstream, struct dirent64 *entry, struct dirent64 **result);
int h_readdir_r (DIR *dirstream, struct dirent *entry, struct dirent **result);
ssize_t h_readlink (const char *filename, char *buffer, size_t size);
ssize_t h_readv (int filedes, const struct iovec *vector, int count);
void * h_realloc (void *ptr, size_t newsize);
void * h_reallocarray (void *ptr, size_t nmemb, size_t size);
char * h_realpath (const char *restrict name, char *restrict resolved);
ssize_t h_recv (int socket, void *buffer, size_t size, int flags);
ssize_t h_recvfrom (int socket, void *buffer, size_t size, int flags, struct sockaddr *addr, socklen_t *length_ptr);
int h_regcomp (regex_t *restrict compiled, const char *restrict pattern, int cflags);
size_t h_regerror (int errcode, const regex_t *restrict compiled, char *restrict buffer, size_t length);
int h_regexec (const regex_t *restrict compiled, const char *restrict string, size_t nmatch, regmatch_t matchptr[restrict], int eflags);
void h_regfree (regex_t *compiled);
double h_remainder (double numerator, double denominator);
float h_remainderf (float numerator, float denominator);
long double h_remainderl (long double numerator, long double denominator);
int h_remove (const char *filename);
int h_rename (const char *oldname, const char *newname);
void h_rewind (FILE *stream);
void h_rewinddir (DIR *dirstream);
char * h_rindex (const char *string, int c);
double h_rint (double x);
float h_rintf (float x);
long double h_rintl (long double x);
int h_rmdir (const char *filename);
double h_round (double x);
double h_roundeven (double x);
float h_roundevenf (float x);
long double h_roundevenl (long double x);
float h_roundf (float x);
long double h_roundl (long double x);
int h_rpmatch (const char *response);
double h_scalb (double value, double exponent);
float h_scalbf (float value, float exponent);
long double h_scalbl (long double value, long double exponent);
double h_scalbln (double x, long int n);
float h_scalblnf (float x, long int n);
long double h_scalblnl (long double x, long int n);
double h_scalbn (double x, int n);
float h_scalbnf (float x, int n);
long double h_scalbnl (long double x, int n);
int h_scandir (const char *dir, struct dirent ***namelist, int (*selector) (const struct dirent *), int (*cmp) (const struct dirent **, const struct dirent **));
int h_scandir64 (const char *dir, struct dirent64 ***namelist, int (*selector) (const struct dirent64 *), int (*cmp) (const struct dirent64 **, const struct dirent64 **));
int h_scanf (const char *template, ...);
int h_sched_getaffinity (pid_t pid, size_t cpusetsize, cpu_set_t *cpuset);
int h_sched_getparam (pid_t pid, struct sched_param *param);
int h_sched_getscheduler (pid_t pid);
int h_sched_get_priority_max (int policy);
int h_sched_get_priority_min (int policy);
int h_sched_rr_get_interval (pid_t pid, struct timespec *interval);
int h_sched_setaffinity (pid_t pid, size_t cpusetsize, const cpu_set_t *cpuset);
int h_sched_setparam (pid_t pid, const struct sched_param *param);
int h_sched_setscheduler (pid_t pid, int policy, const struct sched_param *param);
int h_sched_yield (void);
char * h_secure_getenv (const char *name);
unsigned short int * h_seed48 (unsigned short int seed16v[3]);
int h_seed48_r (unsigned short int seed16v[3], struct drand48_data *buffer);
void h_seekdir (DIR *dirstream, long int pos);
int h_select (int nfds, fd_set *read_fds, fd_set *write_fds, fd_set *except_fds, struct timeval *timeout);
int h_semctl (int semid, int semnum, int cmd, ...);
int h_semget (key_t key, int nsems, int semflg);
int h_semop (int semid, struct sembuf *sops, size_t nsops);
int h_semtimedop (int semid, struct sembuf *sops, size_t nsops, const struct timespec *timeout);
int h_sem_clockwait (sem_t *sem, clockid_t clockid,const struct timespec *abstime);
int h_sem_close (sem_t *sem);
int h_sem_destroy (sem_t *sem);
int h_sem_getvalue (sem_t *sem, int *sval);
int h_sem_init (sem_t *sem, int pshared, unsigned int value);
// sem_t* h_sem_open(const char *name, int oflag, ...);
int h_sem_post (sem_t *sem);
int h_sem_timedwait (sem_t *sem, const struct timespec *abstime);
int h_sem_trywait (sem_t *sem);
int h_sem_unlink (const char *name);
int h_sem_wait (sem_t *sem);
ssize_t h_send (int socket, const void *buffer, size_t size, int flags);

void h_setbuf (FILE *stream, char *buf);
void h_setbuffer (FILE *stream, char *buf, size_t size);
int h_setcontext (const ucontext_t *ucp);
int h_setdomainname (const char *name, size_t length);
int h_setegid (gid_t newgid);
int h_setenv (const char *name, const char *value, int replace);
int h_seteuid (uid_t neweuid);
int h_setfsent (void);
int h_setgid (gid_t newgid);
void h_setgrent (void);
int h_setgroups (size_t count, const gid_t *groups);
void h_sethostent (int stayopen);
int h_sethostid (long int id);
int h_sethostname (const char *name, size_t length);

void h_setlinebuf (FILE *stream);
char * h_setlocale (int category, const char *locale);
int h_setlogmask (int mask);
FILE * h_setmntent (const char *file, const char *mode);
void h_setnetent (int stayopen);
int h_setnetgrent (const char *netgroup);
int h_setpayload (double *x, double payload);
int h_setpayloadf (float *x, float payload);
int h_setpayloadl (long double *x, long double payload);
int h_setpayloadsig (double *x, double payload);
int h_setpayloadsigf (float *x, float payload);
int h_setpayloadsigl (long double *x, long double payload);
int h_setpgid (pid_t pid, pid_t pgid);


void h_setprotoent (int stayopen);
void h_setpwent (void);
int h_setregid (gid_t rgid, gid_t egid);
int h_setreuid (uid_t ruid, uid_t euid);


void h_setservent (int stayopen);
pid_t h_setsid (void);
int h_setsockopt (int socket, int level, int optname, const void *optval, socklen_t optlen);
char * h_setstate (char *state);
int h_setstate_r (char *restrict statebuf, struct random_data *restrict buf);

int h_setuid (uid_t newuid);
void h_setutent (void);
void h_setutxent (void);
int h_setvbuf (FILE *stream, char *buf, int mode, size_t size);
int h_shm_open (const char *name, int oflag, mode_t mode);
int h_shm_unlink (const char *name);
int h_shutdown (int socket, int how);
void h_sigabbrev_np (int signum);
int h_sigaction (int signum, const struct sigaction *restrict action, struct sigaction *restrict old_action);
int h_sigaddset (sigset_t *set, int signum);
int h_sigaltstack (const stack_t *restrict stack, stack_t *restrict oldstack);
int h_sigblock (int mask);
int h_sigdelset (sigset_t *set, int signum);
void h_sigdescr_np (int signum);
int h_sigemptyset (sigset_t *set);
int h_sigfillset (sigset_t *set);
int h_siginterrupt (int signum, int failflag);
int h_sigismember (const sigset_t *set, int signum);
void h_siglongjmp (sigjmp_buf state, int value);
sighandler_t h_signal (int signum, sighandler_t action);
double h_significand (double x);
float h_significandf (float x);
long double h_significandl (long double x);
int h_sigpause (int mask);
int h_sigpending (sigset_t *set);
int h_sigprocmask (int how, const sigset_t *restrict set, sigset_t *restrict oldset);
int h_sigsetjmp (sigjmp_buf state, int savesigs);
int h_sigsetmask (int mask);
int h_sigstack (struct sigstack *stack, struct sigstack *oldstack);
int h_sigsuspend (const sigset_t *set);
double h_sin (double x);
void h_sincos (double x, double *sinx, double *cosx);
void h_sincosf (float x, float *sinx, float *cosx);
void h_sincosl (long double x, long double *sinx, long double *cosx);
float h_sinf (float x);
double h_sinh (double x);
float h_sinhf (float x);
long double h_sinhl (long double x);
long double h_sinl (long double x);
unsigned int h_sleep (unsigned int seconds);
int h_snprintf (char *s, size_t size, const char *template, ...);
int h_socket (int namespace, int style, int protocol);
int h_socketpair (int namespace, int style, int protocol, int filedes[2]);
int h_sprintf (char *s, const char *template, ...);
double h_sqrt (double x);
float h_sqrtf (float x);
long double h_sqrtl (long double x);
void h_srand (unsigned int seed);
void h_srand48 (long int seedval);
int h_srand48_r (long int seedval, struct drand48_data *buffer);
void h_srandom (unsigned int seed);
int h_srandom_r (unsigned int seed, struct random_data *buf);
int h_sscanf (const char *s, const char *template, ...);
sighandler_t h_ssignal (int signum, sighandler_t action);
int h_stat (const char *filename, struct stat *buf);
int h_stat64 (const char *filename, struct stat64 *buf);
int h_stime (const time_t *newtime);
char * h_stpcpy (char *restrict to, const char *restrict from);
char * h_stpncpy (char *restrict to, const char *restrict from, size_t size);
int h_strcasecmp (const char *s1, const char *s2);
char * h_strcasestr (const char *haystack, const char *needle);
char * h_strcat (char *restrict to, const char *restrict from);
char * h_strchr (const char *string, int c);
char * h_strchrnul (const char *string, int c);
int h_strcmp (const char *s1, const char *s2);
int h_strcoll (const char *s1, const char *s2);
char * h_strcpy (char *restrict to, const char *restrict from);
size_t h_strcspn (const char *string, const char *stopset);
char * h_strdup (const char *s);
char * h_strerror (int errnum);
void h_strerrordesc_np (int errnum);
void h_strerrorname_np (int errnum);
char * h_strerror_r (int errnum, char *buf, size_t n);
ssize_t h_strfmon (char *s, size_t maxsize, const char *format, ...);
int h_strfromd (char *restrict string, size_t size, const char *restrict format, double value);
int h_strfromf (char *restrict string, size_t size, const char *restrict format, float value);
int h_strfroml (char *restrict string, size_t size, const char *restrict format, long double value);
char * h_strfry (char *string);
size_t h_strftime (char *s, size_t size, const char *template, const struct tm *brokentime);
size_t h_strlen (const char *s);
int h_strncasecmp (const char *s1, const char *s2, size_t n);
char * h_strncat (char *restrict to, const char *restrict from, size_t size);
int h_strncmp (const char *s1, const char *s2, size_t size);
char * h_strncpy (char *restrict to, const char *restrict from, size_t size);
char * h_strndup (const char *s, size_t size);
size_t h_strnlen (const char *s, size_t maxlen);
char * h_strpbrk (const char *string, const char *stopset);
char * h_strptime (const char *s, const char *fmt, struct tm *tp);
char * h_strrchr (const char *string, int c);
char * h_strsep (char **string_ptr, const char *delimiter);
char * h_strsignal (int signum);
size_t h_strspn (const char *string, const char *skipset);
char * h_strstr (const char *haystack, const char *needle);
double h_strtod (const char *restrict string, char **restrict tailptr);
float h_strtof (const char *string, char **tailptr);
intmax_t h_strtoimax (const char *restrict string, char **restrict tailptr, int base);
char * h_strtok (char *restrict newstring, const char *restrict delimiters);
char * h_strtok_r (char *newstring, const char *delimiters, char **save_ptr);
long int h_strtol (const char *restrict string, char **restrict tailptr, int base);
long double h_strtold (const char *string, char **tailptr);
long long int h_strtoll (const char *restrict string, char **restrict tailptr, int base);
long long int h_strtoq (const char *restrict string, char **restrict tailptr, int base);
unsigned long int h_strtoul (const char *restrict string, char **restrict tailptr, int base);
unsigned long long int h_strtoull (const char *restrict string, char **restrict tailptr, int base);
uintmax_t h_strtoumax (const char *restrict string, char **restrict tailptr, int base);
unsigned long long int h_strtouq (const char *restrict string, char **restrict tailptr, int base);
int h_strverscmp (const char *s1, const char *s2);
size_t h_strxfrm (char *restrict to, const char *restrict from, size_t size);
int h_swapcontext (ucontext_t *restrict oucp, const ucontext_t *restrict ucp);
int h_swprintf (wchar_t *ws, size_t size, const wchar_t *template, ...);
int h_swscanf (const wchar_t *ws, const wchar_t *template, ...);
int h_symlink (const char *oldname, const char *newname);
void h_sync (void);
long int h_syscall (long int sysno, ...);
long int h_sysconf (int parameter);
void h_syslog (int facility_priority, const char *format, ...);
int h_system (const char *command);
sighandler_t h_sysv_signal (int signum, sighandler_t action);
double h_tan (double x);
float h_tanf (float x);
double h_tanh (double x);
float h_tanhf (float x);
long double h_tanhl (long double x);
long double h_tanl (long double x);
int h_tcdrain (int filedes);
int h_tcflow (int filedes, int action);
int h_tcflush (int filedes, int queue);
int h_tcgetattr (int filedes, struct termios *termios_p);
pid_t h_tcgetpgrp (int filedes);
pid_t h_tcgetsid (int fildes);
int h_tcsendbreak (int filedes, int duration);
int h_tcsetattr (int filedes, int when, const struct termios *termios_p);
int h_tcsetpgrp (int filedes, pid_t pgid);
void * h_tdelete (const void *key, void **rootp, int(*compar)(const void *, const void *));
// void h_tdestroy (void *vroot, __free_fn_t freefct);
long int h_telldir (DIR *dirstream);
char * h_tempnam (const char *dir, const char *prefix);
char * h_textdomain (const char *domainname);
void * h_tfind (const void *key, void *const *rootp, int(*compar)(const void *, const void *));
double h_tgamma (double x);
float h_tgammaf (float x);
long double h_tgammal (long double x);
int h_tgkill (pid_t pid, pid_t tid, int signum);
time_t h_time (time_t *result);
time_t h_timegm (struct tm *brokentime);
time_t h_timelocal (struct tm *brokentime);
clock_t h_times (struct tms *buffer);
FILE * h_tmpfile (void);
FILE * h_tmpfile64 (void);
char * h_tmpnam (char *result);
char * h_tmpnam_r (char *result);
int h_tolower (int c);
int h_toupper (int c);
wint_t h_towctrans (wint_t wc, wctrans_t desc);
wint_t h_towlower (wint_t wc);
wint_t h_towupper (wint_t wc);
double h_trunc (double x);
int h_truncate (const char *filename, off_t length);
// int h_truncate64 (const char *name, off64_t length);
float h_truncf (float x);
long double h_truncl (long double x);
void * h_tsearch (const void *key, void **rootp, int(*compar)(const void *, const void *));
char * h_ttyname (int filedes);
int h_ttyname_r (int filedes, char *buf, size_t len);
void h_twalk (const void *root, __action_fn_t action);
void h_twalk_r (const void *root, void (*action) (const void *key, VISIT which, void *closure), void *closure);
void h_tzset (void);
uintmax_t h_ufromfp (double x, int round, unsigned int width);
uintmax_t h_ufromfpf (float x, int round, unsigned int width);
uintmax_t h_ufromfpl (long double x, int round, unsigned int width);
uintmax_t h_ufromfpx (double x, int round, unsigned int width);
uintmax_t h_ufromfpxf (float x, int round, unsigned int width);
uintmax_t h_ufromfpxl (long double x, int round, unsigned int width);
long int h_ulimit (int cmd, long newlimit);
mode_t h_umask (mode_t mask);
int h_umount (const char *file);
int h_umount2 (const char *file, int flags);
int h_uname (struct utsname *info);
int h_ungetc (int c, FILE *stream);
wint_t h_ungetwc (wint_t wc, FILE *stream);
int h_unlink (const char *filename);
int h_unlockpt (int filedes);
int h_unsetenv (const char *name);
void h_updwtmp (const char *wtmp_file, const struct utmp *utmp);
int h_utime (const char *filename, const struct utimbuf *times);
int h_utimes (const char *filename, const struct timeval tvp[2]);
int h_utmpname (const char *file);
int h_utmpxname (const char *file);
void * h_valloc (size_t size);
int h_versionsort (const struct dirent **a, const struct dirent **b);
int h_versionsort64 (const struct dirent64 **a, const struct dirent64 **b);
pid_t h_vfork (void);
int h_vlimit (int resource, int limit);
pid_t h_wait (int *status_ptr);
pid_t h_wait3 (int *status_ptr, int options, struct rusage *usage);
pid_t h_wait4 (pid_t pid, int *status_ptr, int options, struct rusage *usage);
pid_t h_waitpid (pid_t pid, int *status_ptr, int options);
void h_warn (const char *format, ...);
void h_warnx (const char *format, ...);
wchar_t * h_wcpcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom);
wchar_t * h_wcpncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
size_t h_wcrtomb (char *restrict s, wchar_t wc, mbstate_t *restrict ps);
int h_wcscasecmp (const wchar_t *ws1, const wchar_t *ws2);
wchar_t * h_wcscat (wchar_t *restrict wto, const wchar_t *restrict wfrom);
wchar_t * h_wcschr (const wchar_t *wstring, wchar_t wc);
wchar_t * h_wcschrnul (const wchar_t *wstring, wchar_t wc);
int h_wcscmp (const wchar_t *ws1, const wchar_t *ws2);
int h_wcscoll (const wchar_t *ws1, const wchar_t *ws2);
wchar_t * h_wcscpy (wchar_t *restrict wto, const wchar_t *restrict wfrom);
size_t h_wcscspn (const wchar_t *wstring, const wchar_t *stopset);
wchar_t * h_wcsdup (const wchar_t *ws);
size_t h_wcsftime (wchar_t *s, size_t size, const wchar_t *template, const struct tm *brokentime);
size_t h_wcslen (const wchar_t *ws);
int h_wcsncasecmp (const wchar_t *ws1, const wchar_t *s2, size_t n);
wchar_t * h_wcsncat (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
int h_wcsncmp (const wchar_t *ws1, const wchar_t *ws2, size_t size);
wchar_t * h_wcsncpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
size_t h_wcsnlen (const wchar_t *ws, size_t maxlen);
size_t h_wcsnrtombs (char *restrict dst, const wchar_t **restrict src, size_t nwc, size_t len, mbstate_t *restrict ps);
wchar_t * h_wcspbrk (const wchar_t *wstring, const wchar_t *stopset);
wchar_t * h_wcsrchr (const wchar_t *wstring, wchar_t wc);
size_t h_wcsrtombs (char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps);
size_t h_wcsspn (const wchar_t *wstring, const wchar_t *skipset);
wchar_t * h_wcsstr (const wchar_t *haystack, const wchar_t *needle);
double h_wcstod (const wchar_t *restrict string, wchar_t **restrict tailptr);
float h_wcstof (const wchar_t *string, wchar_t **tailptr);
intmax_t h_wcstoimax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
wchar_t * h_wcstok (wchar_t *newstring, const wchar_t *delimiters, wchar_t **save_ptr);
long int h_wcstol (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
long double h_wcstold (const wchar_t *string, wchar_t **tailptr);
long long int h_wcstoll (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
size_t h_wcstombs (char *string, const wchar_t *wstring, size_t size);
long long int h_wcstoq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
unsigned long int h_wcstoul (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
unsigned long long int h_wcstoull (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
uintmax_t h_wcstoumax (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
unsigned long long int h_wcstouq (const wchar_t *restrict string, wchar_t **restrict tailptr, int base);
wchar_t * h_wcswcs (const wchar_t *haystack, const wchar_t *needle);
size_t h_wcsxfrm (wchar_t *restrict wto, const wchar_t *wfrom, size_t size);
int h_wctob (wint_t c);
int h_wctomb (char *string, wchar_t wchar);
wctrans_t h_wctrans (const char *property);
wctype_t h_wctype (const char *property);
wchar_t * h_wmemchr (const wchar_t *block, wchar_t wc, size_t size);
int h_wmemcmp (const wchar_t *a1, const wchar_t *a2, size_t size);
wchar_t * h_wmemcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
wchar_t * h_wmemmove (wchar_t *wto, const wchar_t *wfrom, size_t size);
wchar_t * h_wmempcpy (wchar_t *restrict wto, const wchar_t *restrict wfrom, size_t size);
wchar_t * h_wmemset (wchar_t *block, wchar_t wc, size_t size);
int h_wordexp (const char *words, wordexp_t *word_vector_ptr, int flags);
void h_wordfree (wordexp_t *word_vector_ptr);
int h_wprintf (const wchar_t *template, ...);
ssize_t h_write (int filedes, const void *buffer, size_t size);
ssize_t h_writev (int filedes, const struct iovec *vector, int count);
int h_wscanf (const wchar_t *template, ...);
double h_y0 (double x);
float h_y0f (float x);
long double h_y0l (long double x);
double h_y1 (double x);
float h_y1f (float x);
long double h_y1l (long double x);
double h_yn (int n, double x);
float h_ynf (int n, float x);
long double h_ynl (int n, long double x);

#endif