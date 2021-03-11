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

#include "custom_preloads/custom_preloads.h"


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

#ifndef __fbufsize_OVERRIDE
  #define __fbufsize h___fbufsize
#endif
#ifndef __flbf_OVERRIDE
  #define __flbf h___flbf
#endif
#ifndef __fpending_OVERRIDE
  #define __fpending h___fpending
#endif
#ifndef __fpurge_OVERRIDE
  #define __fpurge h___fpurge
#endif
#ifndef __freadable_OVERRIDE
  #define __freadable h___freadable
#endif
#ifndef __freading_OVERRIDE
  #define __freading h___freading
#endif
#ifndef __fsetlocking_OVERRIDE
  #define __fsetlocking h___fsetlocking
#endif
#ifndef __fwritable_OVERRIDE
  #define __fwritable h___fwritable
#endif
#ifndef __fwriting_OVERRIDE
  #define __fwriting h___fwriting
#endif
#ifndef __ppc_get_timebase_OVERRIDE
  #define __ppc_get_timebase h___ppc_get_timebase
#endif
#ifndef __ppc_get_timebase_freq_OVERRIDE
  #define __ppc_get_timebase_freq h___ppc_get_timebase_freq
#endif
#ifndef __ppc_mdoio_OVERRIDE
  #define __ppc_mdoio h___ppc_mdoio
#endif
#ifndef __ppc_mdoom_OVERRIDE
  #define __ppc_mdoom h___ppc_mdoom
#endif
#ifndef __ppc_set_ppr_low_OVERRIDE
  #define __ppc_set_ppr_low h___ppc_set_ppr_low
#endif
#ifndef __ppc_set_ppr_med_OVERRIDE
  #define __ppc_set_ppr_med h___ppc_set_ppr_med
#endif
#ifndef __ppc_set_ppr_med_high_OVERRIDE
  #define __ppc_set_ppr_med_high h___ppc_set_ppr_med_high
#endif
#ifndef __ppc_set_ppr_med_low_OVERRIDE
  #define __ppc_set_ppr_med_low h___ppc_set_ppr_med_low
#endif
#ifndef __ppc_set_ppr_very_low_OVERRIDE
  #define __ppc_set_ppr_very_low h___ppc_set_ppr_very_low
#endif
#ifndef __ppc_yield_OVERRIDE
  #define __ppc_yield h___ppc_yield
#endif
#ifndef __riscv_flush_icache_OVERRIDE
  #define __riscv_flush_icache h___riscv_flush_icache
#endif
#ifndef _exit_OVERRIDE
  #define _exit h__exit
#endif
#ifndef _Exit_OVERRIDE
  #define _Exit h__Exit
#endif
#ifndef _flushlbf_OVERRIDE
  #define _flushlbf h__flushlbf
#endif
#ifndef a64l_OVERRIDE
  #define a64l h_a64l
#endif
#ifndef abort_OVERRIDE
  #define abort h_abort
#endif
#ifndef abs_OVERRIDE
  #define abs h_abs
#endif
#ifndef accept_OVERRIDE
  #define accept h_accept
#endif
#ifndef access_OVERRIDE
  #define access h_access
#endif
#ifndef acos_OVERRIDE
  #define acos h_acos
#endif
#ifndef acosf_OVERRIDE
  #define acosf h_acosf
#endif
#ifndef acosh_OVERRIDE
  #define acosh h_acosh
#endif
#ifndef acoshf_OVERRIDE
  #define acoshf h_acoshf
#endif
#ifndef acoshl_OVERRIDE
  #define acoshl h_acoshl
#endif
#ifndef acosl_OVERRIDE
  #define acosl h_acosl
#endif
#ifndef addmntent_OVERRIDE
  #define addmntent h_addmntent
#endif
#ifndef addseverity_OVERRIDE
  #define addseverity h_addseverity
#endif
#ifndef adjtime_OVERRIDE
  #define adjtime h_adjtime
#endif
#ifndef adjtimex_OVERRIDE
  #define adjtimex h_adjtimex
#endif
#ifndef aio_cancel_OVERRIDE
  #define aio_cancel h_aio_cancel
#endif
#ifndef aio_cancel64_OVERRIDE
  #define aio_cancel64 h_aio_cancel64
#endif
#ifndef aio_error_OVERRIDE
  #define aio_error h_aio_error
#endif
#ifndef aio_error64_OVERRIDE
  #define aio_error64 h_aio_error64
#endif
#ifndef aio_fsync_OVERRIDE
  #define aio_fsync h_aio_fsync
#endif
#ifndef aio_fsync64_OVERRIDE
  #define aio_fsync64 h_aio_fsync64
#endif
#ifndef aio_init_OVERRIDE
  #define aio_init h_aio_init
#endif
#ifndef aio_read_OVERRIDE
  #define aio_read h_aio_read
#endif
#ifndef aio_read64_OVERRIDE
  #define aio_read64 h_aio_read64
#endif
#ifndef aio_suspend_OVERRIDE
  #define aio_suspend h_aio_suspend
#endif
#ifndef aio_suspend64_OVERRIDE
  #define aio_suspend64 h_aio_suspend64
#endif
#ifndef aio_write_OVERRIDE
  #define aio_write h_aio_write
#endif
#ifndef aio_write64_OVERRIDE
  #define aio_write64 h_aio_write64
#endif
#ifndef alarm_OVERRIDE
  #define alarm h_alarm
#endif
#ifndef aligned_alloc_OVERRIDE
  #define aligned_alloc h_aligned_alloc
#endif
// #define alloca h_alloca
#ifndef alphasort_OVERRIDE
  #define alphasort h_alphasort
#endif
#ifndef argp_error_OVERRIDE
  #define argp_error h_argp_error
#endif
#ifndef argp_failure_OVERRIDE
  #define argp_failure h_argp_failure
#endif
#ifndef argp_help_OVERRIDE
  #define argp_help h_argp_help
#endif
#ifndef argp_parse_OVERRIDE
  #define argp_parse h_argp_parse
#endif
#ifndef argp_state_help_OVERRIDE
  #define argp_state_help h_argp_state_help
#endif
#ifndef argp_usage_OVERRIDE
  #define argp_usage h_argp_usage
#endif
#ifndef argz_add_OVERRIDE
  #define argz_add h_argz_add
#endif
#ifndef argz_add_sep_OVERRIDE
  #define argz_add_sep h_argz_add_sep
#endif
#ifndef argz_append_OVERRIDE
  #define argz_append h_argz_append
#endif
#ifndef argz_count_OVERRIDE
  #define argz_count h_argz_count
#endif
#ifndef argz_create_OVERRIDE
  #define argz_create h_argz_create
#endif
#ifndef argz_create_sep_OVERRIDE
  #define argz_create_sep h_argz_create_sep
#endif
#ifndef argz_delete_OVERRIDE
  #define argz_delete h_argz_delete
#endif
#ifndef argz_extract_OVERRIDE
  #define argz_extract h_argz_extract
#endif
#ifndef argz_insert_OVERRIDE
  #define argz_insert h_argz_insert
#endif
#ifndef argz_next_OVERRIDE
  #define argz_next h_argz_next
#endif
#ifndef argz_replace_OVERRIDE
  #define argz_replace h_argz_replace
#endif
#ifndef argz_stringify_OVERRIDE
  #define argz_stringify h_argz_stringify
#endif
#ifndef asctime_OVERRIDE
  #define asctime h_asctime
#endif
#ifndef asctime_r_OVERRIDE
  #define asctime_r h_asctime_r
#endif
#ifndef asin_OVERRIDE
  #define asin h_asin
#endif
#ifndef asinf_OVERRIDE
  #define asinf h_asinf
#endif
#ifndef asinh_OVERRIDE
  #define asinh h_asinh
#endif
#ifndef asinhf_OVERRIDE
  #define asinhf h_asinhf
#endif
#ifndef asinhl_OVERRIDE
  #define asinhl h_asinhl
#endif
#ifndef asinl_OVERRIDE
  #define asinl h_asinl
#endif
#ifndef asprintf_OVERRIDE
  #define asprintf h_asprintf
#endif
#ifndef atan_OVERRIDE
  #define atan h_atan
#endif
#ifndef atan2_OVERRIDE
  #define atan2 h_atan2
#endif
#ifndef atan2f_OVERRIDE
  #define atan2f h_atan2f
#endif
#ifndef atan2l_OVERRIDE
  #define atan2l h_atan2l
#endif
#ifndef atanf_OVERRIDE
  #define atanf h_atanf
#endif
#ifndef atanh_OVERRIDE
  #define atanh h_atanh
#endif
#ifndef atanhf_OVERRIDE
  #define atanhf h_atanhf
#endif
#ifndef atanhl_OVERRIDE
  #define atanhl h_atanhl
#endif
#ifndef atanl_OVERRIDE
  #define atanl h_atanl
#endif
#ifndef atexit_OVERRIDE
  #define atexit h_atexit
#endif
#ifndef atof_OVERRIDE
  #define atof h_atof
#endif
#ifndef atoi_OVERRIDE
  #define atoi h_atoi
#endif
#ifndef atol_OVERRIDE
  #define atol h_atol
#endif
#ifndef atoll_OVERRIDE
  #define atoll h_atoll
#endif
#ifndef backtrace_OVERRIDE
  #define backtrace h_backtrace
#endif
#ifndef backtrace_symbols_OVERRIDE
  #define backtrace_symbols h_backtrace_symbols
#endif
#ifndef backtrace_symbols_fd_OVERRIDE
  #define backtrace_symbols_fd h_backtrace_symbols_fd
#endif
#ifndef basename_OVERRIDE
  #define basename h_basename
#endif
#ifndef bcmp_OVERRIDE
  #define bcmp h_bcmp
#endif
#ifndef bcopy_OVERRIDE
  #define bcopy h_bcopy
#endif
#ifndef bind_OVERRIDE
  #define bind h_bind
#endif
#ifndef bind_textdomain_codeset_OVERRIDE
  #define bind_textdomain_codeset h_bind_textdomain_codeset
#endif
#ifndef bindtextdomain_OVERRIDE
  #define bindtextdomain h_bindtextdomain
#endif
#ifndef brk_OVERRIDE
  #define brk h_brk
#endif
#ifndef bsearch_OVERRIDE
  #define bsearch h_bsearch
#endif
#ifndef btowc_OVERRIDE
  #define btowc h_btowc
#endif
#ifndef bzero_OVERRIDE
  #define bzero h_bzero
#endif
#ifndef cabs_OVERRIDE
  #define cabs h_cabs
#endif
#ifndef cabsf_OVERRIDE
  #define cabsf h_cabsf
#endif
#ifndef cabsl_OVERRIDE
  #define cabsl h_cabsl
#endif
#ifndef cacos_OVERRIDE
  #define cacos h_cacos
#endif
#ifndef cacosf_OVERRIDE
  #define cacosf h_cacosf
#endif
#ifndef cacosh_OVERRIDE
  #define cacosh h_cacosh
#endif
#ifndef cacoshf_OVERRIDE
  #define cacoshf h_cacoshf
#endif
#ifndef cacoshl_OVERRIDE
  #define cacoshl h_cacoshl
#endif
#ifndef cacosl_OVERRIDE
  #define cacosl h_cacosl
#endif
#ifndef calloc_OVERRIDE
  #define calloc h_calloc
#endif
#ifndef canonicalize_OVERRIDE
  #define canonicalize h_canonicalize
#endif
#ifndef canonicalize_file_name_OVERRIDE
  #define canonicalize_file_name h_canonicalize_file_name
#endif
#ifndef canonicalizef_OVERRIDE
  #define canonicalizef h_canonicalizef
#endif
#ifndef canonicalizel_OVERRIDE
  #define canonicalizel h_canonicalizel
#endif
#ifndef carg_OVERRIDE
  #define carg h_carg
#endif
#ifndef cargf_OVERRIDE
  #define cargf h_cargf
#endif
#ifndef cargl_OVERRIDE
  #define cargl h_cargl
#endif
#ifndef casin_OVERRIDE
  #define casin h_casin
#endif
#ifndef casinf_OVERRIDE
  #define casinf h_casinf
#endif
#ifndef casinh_OVERRIDE
  #define casinh h_casinh
#endif
#ifndef casinhf_OVERRIDE
  #define casinhf h_casinhf
#endif
#ifndef casinhl_OVERRIDE
  #define casinhl h_casinhl
#endif
#ifndef casinl_OVERRIDE
  #define casinl h_casinl
#endif
#ifndef catan_OVERRIDE
  #define catan h_catan
#endif
#ifndef catanf_OVERRIDE
  #define catanf h_catanf
#endif
#ifndef catanh_OVERRIDE
  #define catanh h_catanh
#endif
#ifndef catanhf_OVERRIDE
  #define catanhf h_catanhf
#endif
#ifndef catanhl_OVERRIDE
  #define catanhl h_catanhl
#endif
#ifndef catanl_OVERRIDE
  #define catanl h_catanl
#endif
#ifndef catclose_OVERRIDE
  #define catclose h_catclose
#endif
#ifndef catgets_OVERRIDE
  #define catgets h_catgets
#endif
#ifndef catopen_OVERRIDE
  #define catopen h_catopen
#endif
#ifndef cbrt_OVERRIDE
  #define cbrt h_cbrt
#endif
#ifndef cbrtf_OVERRIDE
  #define cbrtf h_cbrtf
#endif
#ifndef cbrtl_OVERRIDE
  #define cbrtl h_cbrtl
#endif
#ifndef ccos_OVERRIDE
  #define ccos h_ccos
#endif
#ifndef ccosf_OVERRIDE
  #define ccosf h_ccosf
#endif
#ifndef ccosh_OVERRIDE
  #define ccosh h_ccosh
#endif
#ifndef ccoshf_OVERRIDE
  #define ccoshf h_ccoshf
#endif
#ifndef ccoshl_OVERRIDE
  #define ccoshl h_ccoshl
#endif
#ifndef ccosl_OVERRIDE
  #define ccosl h_ccosl
#endif
#ifndef ceil_OVERRIDE
  #define ceil h_ceil
#endif
#ifndef ceilf_OVERRIDE
  #define ceilf h_ceilf
#endif
#ifndef ceill_OVERRIDE
  #define ceill h_ceill
#endif
#ifndef cexp_OVERRIDE
  #define cexp h_cexp
#endif
#ifndef cexpf_OVERRIDE
  #define cexpf h_cexpf
#endif
#ifndef cexpl_OVERRIDE
  #define cexpl h_cexpl
#endif
#ifndef cfgetispeed_OVERRIDE
  #define cfgetispeed h_cfgetispeed
#endif
#ifndef cfgetospeed_OVERRIDE
  #define cfgetospeed h_cfgetospeed
#endif
#ifndef cfmakeraw_OVERRIDE
  #define cfmakeraw h_cfmakeraw
#endif
#ifndef cfsetispeed_OVERRIDE
  #define cfsetispeed h_cfsetispeed
#endif
#ifndef cfsetospeed_OVERRIDE
  #define cfsetospeed h_cfsetospeed
#endif
#ifndef cfsetspeed_OVERRIDE
  #define cfsetspeed h_cfsetspeed
#endif
#ifndef chdir_OVERRIDE
  #define chdir h_chdir
#endif
#ifndef chmod_OVERRIDE
  #define chmod h_chmod
#endif
#ifndef chown_OVERRIDE
  #define chown h_chown
#endif
#ifndef cimag_OVERRIDE
  #define cimag h_cimag
#endif
#ifndef cimagf_OVERRIDE
  #define cimagf h_cimagf
#endif
#ifndef cimagl_OVERRIDE
  #define cimagl h_cimagl
#endif
#ifndef clearenv_OVERRIDE
  #define clearenv h_clearenv
#endif
#ifndef clearerr_OVERRIDE
  #define clearerr h_clearerr
#endif
#ifndef clearerr_unlocked_OVERRIDE
  #define clearerr_unlocked h_clearerr_unlocked
#endif
#ifndef clock_OVERRIDE
  #define clock h_clock
#endif
#ifndef clock_getres_OVERRIDE
  #define clock_getres h_clock_getres
#endif
#ifndef clock_gettime_OVERRIDE
  #define clock_gettime h_clock_gettime
#endif
#ifndef clock_settime_OVERRIDE
  #define clock_settime h_clock_settime
#endif
#ifndef clog_OVERRIDE
  #define clog h_clog
#endif
#ifndef clog10_OVERRIDE
  #define clog10 h_clog10
#endif
#ifndef clog10f_OVERRIDE
  #define clog10f h_clog10f
#endif
#ifndef clog10l_OVERRIDE
  #define clog10l h_clog10l
#endif
#ifndef clogf_OVERRIDE
  #define clogf h_clogf
#endif
#ifndef clogl_OVERRIDE
  #define clogl h_clogl
#endif
#ifndef close_OVERRIDE
  #define close h_close
#endif
#ifndef closedir_OVERRIDE
  #define closedir h_closedir
#endif
#ifndef closelog_OVERRIDE
  #define closelog h_closelog
#endif
#ifndef confstr_OVERRIDE
  #define confstr h_confstr
#endif
#ifndef conj_OVERRIDE
  #define conj h_conj
#endif
#ifndef conjf_OVERRIDE
  #define conjf h_conjf
#endif
#ifndef conjl_OVERRIDE
  #define conjl h_conjl
#endif
#ifndef connect_OVERRIDE
  #define connect h_connect
#endif
#ifndef copy_file_range_OVERRIDE
  #define copy_file_range h_copy_file_range
#endif
#ifndef copysign_OVERRIDE
  #define copysign h_copysign
#endif
#ifndef copysignf_OVERRIDE
  #define copysignf h_copysignf
#endif
#ifndef copysignl_OVERRIDE
  #define copysignl h_copysignl
#endif
#ifndef cos_OVERRIDE
  #define cos h_cos
#endif
#ifndef cosf_OVERRIDE
  #define cosf h_cosf
#endif
#ifndef cosh_OVERRIDE
  #define cosh h_cosh
#endif
#ifndef coshf_OVERRIDE
  #define coshf h_coshf
#endif
#ifndef coshl_OVERRIDE
  #define coshl h_coshl
#endif
#ifndef cosl_OVERRIDE
  #define cosl h_cosl
#endif
#ifndef cpow_OVERRIDE
  #define cpow h_cpow
#endif
#ifndef cpowf_OVERRIDE
  #define cpowf h_cpowf
#endif
#ifndef cpowl_OVERRIDE
  #define cpowl h_cpowl
#endif
#ifndef cproj_OVERRIDE
  #define cproj h_cproj
#endif
#ifndef cprojf_OVERRIDE
  #define cprojf h_cprojf
#endif
#ifndef cprojl_OVERRIDE
  #define cprojl h_cprojl
#endif
#ifndef creal_OVERRIDE
  #define creal h_creal
#endif
#ifndef crealf_OVERRIDE
  #define crealf h_crealf
#endif
#ifndef creall_OVERRIDE
  #define creall h_creall
#endif
#ifndef creat_OVERRIDE
  #define creat h_creat
#endif
#ifndef creat64_OVERRIDE
  #define creat64 h_creat64
#endif
#ifndef crypt_OVERRIDE
  #define crypt h_crypt
#endif
#ifndef crypt_r_OVERRIDE
  #define crypt_r h_crypt_r
#endif
#ifndef csin_OVERRIDE
  #define csin h_csin
#endif
#ifndef csinf_OVERRIDE
  #define csinf h_csinf
#endif
#ifndef csinh_OVERRIDE
  #define csinh h_csinh
#endif
#ifndef csinhf_OVERRIDE
  #define csinhf h_csinhf
#endif
#ifndef csinhl_OVERRIDE
  #define csinhl h_csinhl
#endif
#ifndef csinl_OVERRIDE
  #define csinl h_csinl
#endif
#ifndef csqrt_OVERRIDE
  #define csqrt h_csqrt
#endif
#ifndef csqrtf_OVERRIDE
  #define csqrtf h_csqrtf
#endif
#ifndef csqrtl_OVERRIDE
  #define csqrtl h_csqrtl
#endif
#ifndef ctan_OVERRIDE
  #define ctan h_ctan
#endif
#ifndef ctanf_OVERRIDE
  #define ctanf h_ctanf
#endif
#ifndef ctanh_OVERRIDE
  #define ctanh h_ctanh
#endif
#ifndef ctanhf_OVERRIDE
  #define ctanhf h_ctanhf
#endif
#ifndef ctanhl_OVERRIDE
  #define ctanhl h_ctanhl
#endif
#ifndef ctanl_OVERRIDE
  #define ctanl h_ctanl
#endif
#ifndef ctermid_OVERRIDE
  #define ctermid h_ctermid
#endif
#ifndef ctime_OVERRIDE
  #define ctime h_ctime
#endif
#ifndef ctime_r_OVERRIDE
  #define ctime_r h_ctime_r
#endif
#ifndef cuserid_OVERRIDE
  #define cuserid h_cuserid
#endif
#ifndef daddl_OVERRIDE
  #define daddl h_daddl
#endif
#ifndef dcgettext_OVERRIDE
  #define dcgettext h_dcgettext
#endif
#ifndef dcngettext_OVERRIDE
  #define dcngettext h_dcngettext
#endif
#ifndef ddivl_OVERRIDE
  #define ddivl h_ddivl
#endif
#ifndef dgettext_OVERRIDE
  #define dgettext h_dgettext
#endif
#ifndef difftime_OVERRIDE
  #define difftime h_difftime
#endif
#ifndef dirfd_OVERRIDE
  #define dirfd h_dirfd
#endif
#ifndef dirname_OVERRIDE
  #define dirname h_dirname
#endif
#ifndef div_OVERRIDE
  #define div h_div
#endif
#ifndef dmull_OVERRIDE
  #define dmull h_dmull
#endif
#ifndef dngettext_OVERRIDE
  #define dngettext h_dngettext
#endif
#ifndef drand48_OVERRIDE
  #define drand48 h_drand48
#endif
#ifndef drand48_r_OVERRIDE
  #define drand48_r h_drand48_r
#endif
#ifndef drem_OVERRIDE
  #define drem h_drem
#endif
#ifndef dremf_OVERRIDE
  #define dremf h_dremf
#endif
#ifndef dreml_OVERRIDE
  #define dreml h_dreml
#endif
#ifndef dsubl_OVERRIDE
  #define dsubl h_dsubl
#endif
#ifndef dup_OVERRIDE
  #define dup h_dup
#endif
#ifndef dup2_OVERRIDE
  #define dup2 h_dup2
#endif
#ifndef ecvt_OVERRIDE
  #define ecvt h_ecvt
#endif
#ifndef ecvt_r_OVERRIDE
  #define ecvt_r h_ecvt_r
#endif
#ifndef endfsent_OVERRIDE
  #define endfsent h_endfsent
#endif
#ifndef endgrent_OVERRIDE
  #define endgrent h_endgrent
#endif
#ifndef endhostent_OVERRIDE
  #define endhostent h_endhostent
#endif
#ifndef endmntent_OVERRIDE
  #define endmntent h_endmntent
#endif
#ifndef endnetent_OVERRIDE
  #define endnetent h_endnetent
#endif
#ifndef endnetgrent_OVERRIDE
  #define endnetgrent h_endnetgrent
#endif
#ifndef endprotoent_OVERRIDE
  #define endprotoent h_endprotoent
#endif
#ifndef endpwent_OVERRIDE
  #define endpwent h_endpwent
#endif
#ifndef endservent_OVERRIDE
  #define endservent h_endservent
#endif
#ifndef endutent_OVERRIDE
  #define endutent h_endutent
#endif
#ifndef endutxent_OVERRIDE
  #define endutxent h_endutxent
#endif
#ifndef envz_add_OVERRIDE
  #define envz_add h_envz_add
#endif
#ifndef envz_entry_OVERRIDE
  #define envz_entry h_envz_entry
#endif
#ifndef envz_get_OVERRIDE
  #define envz_get h_envz_get
#endif
#ifndef envz_merge_OVERRIDE
  #define envz_merge h_envz_merge
#endif
#ifndef envz_remove_OVERRIDE
  #define envz_remove h_envz_remove
#endif
#ifndef envz_strip_OVERRIDE
  #define envz_strip h_envz_strip
#endif
#ifndef erand48_OVERRIDE
  #define erand48 h_erand48
#endif
#ifndef erand48_r_OVERRIDE
  #define erand48_r h_erand48_r
#endif
#ifndef erf_OVERRIDE
  #define erf h_erf
#endif
#ifndef erfc_OVERRIDE
  #define erfc h_erfc
#endif
#ifndef erfcf_OVERRIDE
  #define erfcf h_erfcf
#endif
#ifndef erfcl_OVERRIDE
  #define erfcl h_erfcl
#endif
#ifndef erff_OVERRIDE
  #define erff h_erff
#endif
#ifndef erfl_OVERRIDE
  #define erfl h_erfl
#endif
#ifndef err_OVERRIDE
  #define err h_err
#endif
#ifndef error_OVERRIDE
  #define error h_error
#endif
#ifndef error_at_line_OVERRIDE
  #define error_at_line h_error_at_line
#endif
#ifndef errx_OVERRIDE
  #define errx h_errx
#endif
#ifndef execl_OVERRIDE
  #define execl h_execl
#endif
#ifndef execle_OVERRIDE
  #define execle h_execle
#endif
#ifndef execlp_OVERRIDE
  #define execlp h_execlp
#endif
#ifndef execv_OVERRIDE
  #define execv h_execv
#endif
#ifndef execve_OVERRIDE
  #define execve h_execve
#endif
#ifndef execvp_OVERRIDE
  #define execvp h_execvp
#endif
#ifndef exit_OVERRIDE
  #define exit h_exit
#endif
#ifndef exp_OVERRIDE
  #define exp h_exp
#endif
#ifndef exp10_OVERRIDE
  #define exp10 h_exp10
#endif
#ifndef exp10f_OVERRIDE
  #define exp10f h_exp10f
#endif
#ifndef exp10l_OVERRIDE
  #define exp10l h_exp10l
#endif
#ifndef exp2_OVERRIDE
  #define exp2 h_exp2
#endif
#ifndef exp2f_OVERRIDE
  #define exp2f h_exp2f
#endif
#ifndef exp2l_OVERRIDE
  #define exp2l h_exp2l
#endif
#ifndef expf_OVERRIDE
  #define expf h_expf
#endif
#ifndef expl_OVERRIDE
  #define expl h_expl
#endif
#ifndef explicit_bzero_OVERRIDE
  #define explicit_bzero h_explicit_bzero
#endif
#ifndef expm1_OVERRIDE
  #define expm1 h_expm1
#endif
#ifndef expm1f_OVERRIDE
  #define expm1f h_expm1f
#endif
#ifndef expm1l_OVERRIDE
  #define expm1l h_expm1l
#endif
#ifndef fabs_OVERRIDE
  #define fabs h_fabs
#endif
#ifndef fabsf_OVERRIDE
  #define fabsf h_fabsf
#endif
#ifndef fabsl_OVERRIDE
  #define fabsl h_fabsl
#endif
#ifndef fadd_OVERRIDE
  #define fadd h_fadd
#endif
#ifndef faddl_OVERRIDE
  #define faddl h_faddl
#endif
#ifndef fchdir_OVERRIDE
  #define fchdir h_fchdir
#endif
#ifndef fchmod_OVERRIDE
  #define fchmod h_fchmod
#endif
#ifndef fchown_OVERRIDE
  #define fchown h_fchown
#endif
#ifndef fclose_OVERRIDE
  #define fclose h_fclose
#endif
#ifndef fcloseall_OVERRIDE
  #define fcloseall h_fcloseall
#endif
#ifndef fcntl_OVERRIDE
  #define fcntl h_fcntl
#endif
#ifndef fcvt_OVERRIDE
  #define fcvt h_fcvt
#endif
#ifndef fcvt_r_OVERRIDE
  #define fcvt_r h_fcvt_r
#endif
#ifndef fdatasync_OVERRIDE
  #define fdatasync h_fdatasync
#endif
#ifndef fdim_OVERRIDE
  #define fdim h_fdim
#endif
#ifndef fdimf_OVERRIDE
  #define fdimf h_fdimf
#endif
#ifndef fdiml_OVERRIDE
  #define fdiml h_fdiml
#endif
#ifndef fdiv_OVERRIDE
  #define fdiv h_fdiv
#endif
#ifndef fdivl_OVERRIDE
  #define fdivl h_fdivl
#endif
#ifndef fdopen_OVERRIDE
  #define fdopen h_fdopen
#endif
#ifndef fdopendir_OVERRIDE
  #define fdopendir h_fdopendir
#endif
#ifndef feclearexcept_OVERRIDE
  #define feclearexcept h_feclearexcept
#endif
#ifndef fedisableexcept_OVERRIDE
  #define fedisableexcept h_fedisableexcept
#endif
#ifndef feenableexcept_OVERRIDE
  #define feenableexcept h_feenableexcept
#endif
#ifndef fegetenv_OVERRIDE
  #define fegetenv h_fegetenv
#endif
#ifndef fegetexcept_OVERRIDE
  #define fegetexcept h_fegetexcept
#endif
#ifndef fegetexceptflag_OVERRIDE
  #define fegetexceptflag h_fegetexceptflag
#endif
#ifndef fegetmode_OVERRIDE
  #define fegetmode h_fegetmode
#endif
#ifndef fegetround_OVERRIDE
  #define fegetround h_fegetround
#endif
#ifndef feholdexcept_OVERRIDE
  #define feholdexcept h_feholdexcept
#endif
#ifndef feof_OVERRIDE
  #define feof h_feof
#endif
#ifndef feof_unlocked_OVERRIDE
  #define feof_unlocked h_feof_unlocked
#endif
#ifndef feraiseexcept_OVERRIDE
  #define feraiseexcept h_feraiseexcept
#endif
#ifndef ferror_OVERRIDE
  #define ferror h_ferror
#endif
#ifndef ferror_unlocked_OVERRIDE
  #define ferror_unlocked h_ferror_unlocked
#endif
#ifndef fesetenv_OVERRIDE
  #define fesetenv h_fesetenv
#endif
#ifndef fesetexcept_OVERRIDE
  #define fesetexcept h_fesetexcept
#endif
#ifndef fesetexceptflag_OVERRIDE
  #define fesetexceptflag h_fesetexceptflag
#endif
#ifndef fesetmode_OVERRIDE
  #define fesetmode h_fesetmode
#endif
#ifndef fesetround_OVERRIDE
  #define fesetround h_fesetround
#endif
#ifndef fetestexcept_OVERRIDE
  #define fetestexcept h_fetestexcept
#endif
#ifndef fetestexceptflag_OVERRIDE
  #define fetestexceptflag h_fetestexceptflag
#endif
#ifndef feupdateenv_OVERRIDE
  #define feupdateenv h_feupdateenv
#endif
#ifndef fexecve_OVERRIDE
  #define fexecve h_fexecve
#endif
#ifndef fflush_OVERRIDE
  #define fflush h_fflush
#endif
#ifndef fflush_unlocked_OVERRIDE
  #define fflush_unlocked h_fflush_unlocked
#endif
#ifndef fgetc_OVERRIDE
  #define fgetc h_fgetc
#endif
#ifndef fgetc_unlocked_OVERRIDE
  #define fgetc_unlocked h_fgetc_unlocked
#endif
#ifndef fgetgrent_OVERRIDE
  #define fgetgrent h_fgetgrent
#endif
#ifndef fgetgrent_r_OVERRIDE
  #define fgetgrent_r h_fgetgrent_r
#endif
#ifndef fgetpos_OVERRIDE
  #define fgetpos h_fgetpos
#endif
#ifndef fgetpos64_OVERRIDE
  #define fgetpos64 h_fgetpos64
#endif
#ifndef fgetpwent_OVERRIDE
  #define fgetpwent h_fgetpwent
#endif
#ifndef fgetpwent_r_OVERRIDE
  #define fgetpwent_r h_fgetpwent_r
#endif
#ifndef fgets_OVERRIDE
  #define fgets h_fgets
#endif
#ifndef fgets_unlocked_OVERRIDE
  #define fgets_unlocked h_fgets_unlocked
#endif
#ifndef fgetwc_OVERRIDE
  #define fgetwc h_fgetwc
#endif
#ifndef fgetwc_unlocked_OVERRIDE
  #define fgetwc_unlocked h_fgetwc_unlocked
#endif
#ifndef fgetws_OVERRIDE
  #define fgetws h_fgetws
#endif
#ifndef fgetws_unlocked_OVERRIDE
  #define fgetws_unlocked h_fgetws_unlocked
#endif
#ifndef fileno_OVERRIDE
  #define fileno h_fileno
#endif
#ifndef fileno_unlocked_OVERRIDE
  #define fileno_unlocked h_fileno_unlocked
#endif
#ifndef finite_OVERRIDE
  #define finite h_finite
#endif
#ifndef finitef_OVERRIDE
  #define finitef h_finitef
#endif
#ifndef finitel_OVERRIDE
  #define finitel h_finitel
#endif
#ifndef flockfile_OVERRIDE
  #define flockfile h_flockfile
#endif
#ifndef floor_OVERRIDE
  #define floor h_floor
#endif
#ifndef floorf_OVERRIDE
  #define floorf h_floorf
#endif
#ifndef floorl_OVERRIDE
  #define floorl h_floorl
#endif
#ifndef fma_OVERRIDE
  #define fma h_fma
#endif
#ifndef fmaf_OVERRIDE
  #define fmaf h_fmaf
#endif
#ifndef fmal_OVERRIDE
  #define fmal h_fmal
#endif
#ifndef fmax_OVERRIDE
  #define fmax h_fmax
#endif
#ifndef fmaxf_OVERRIDE
  #define fmaxf h_fmaxf
#endif
#ifndef fmaxl_OVERRIDE
  #define fmaxl h_fmaxl
#endif
#ifndef fmaxmag_OVERRIDE
  #define fmaxmag h_fmaxmag
#endif
#ifndef fmaxmagf_OVERRIDE
  #define fmaxmagf h_fmaxmagf
#endif
#ifndef fmaxmagl_OVERRIDE
  #define fmaxmagl h_fmaxmagl
#endif
#ifndef fmemopen_OVERRIDE
  #define fmemopen h_fmemopen
#endif
#ifndef fmin_OVERRIDE
  #define fmin h_fmin
#endif
#ifndef fminf_OVERRIDE
  #define fminf h_fminf
#endif
#ifndef fminl_OVERRIDE
  #define fminl h_fminl
#endif
#ifndef fminmag_OVERRIDE
  #define fminmag h_fminmag
#endif
#ifndef fminmagf_OVERRIDE
  #define fminmagf h_fminmagf
#endif
#ifndef fminmagl_OVERRIDE
  #define fminmagl h_fminmagl
#endif
#ifndef fmod_OVERRIDE
  #define fmod h_fmod
#endif
#ifndef fmodf_OVERRIDE
  #define fmodf h_fmodf
#endif
#ifndef fmodl_OVERRIDE
  #define fmodl h_fmodl
#endif
#ifndef fmtmsg_OVERRIDE
  #define fmtmsg h_fmtmsg
#endif
#ifndef fmul_OVERRIDE
  #define fmul h_fmul
#endif
#ifndef fmull_OVERRIDE
  #define fmull h_fmull
#endif
#ifndef fnmatch_OVERRIDE
  #define fnmatch h_fnmatch
#endif
#ifndef fopen_OVERRIDE
  #define fopen h_fopen
#endif
#ifndef fopen64_OVERRIDE
  #define fopen64 h_fopen64
#endif
// #define fopencookie h_fopencookie
#ifndef fork_OVERRIDE
  #define fork h_fork
#endif
#ifndef forkpty_OVERRIDE
  #define forkpty h_forkpty
#endif
#ifndef fpathconf_OVERRIDE
  #define fpathconf h_fpathconf
#endif
#ifndef fprintf_OVERRIDE
  #define fprintf h_fprintf
#endif
#ifndef fputc_OVERRIDE
  #define fputc h_fputc
#endif
#ifndef fputc_unlocked_OVERRIDE
  #define fputc_unlocked h_fputc_unlocked
#endif
#ifndef fputs_OVERRIDE
  #define fputs h_fputs
#endif
#ifndef fputs_unlocked_OVERRIDE
  #define fputs_unlocked h_fputs_unlocked
#endif
#ifndef fputwc_OVERRIDE
  #define fputwc h_fputwc
#endif
#ifndef fputwc_unlocked_OVERRIDE
  #define fputwc_unlocked h_fputwc_unlocked
#endif
#ifndef fputws_OVERRIDE
  #define fputws h_fputws
#endif
#ifndef fputws_unlocked_OVERRIDE
  #define fputws_unlocked h_fputws_unlocked
#endif
#ifndef fread_OVERRIDE
  #define fread h_fread
#endif
#ifndef fread_unlocked_OVERRIDE
  #define fread_unlocked h_fread_unlocked
#endif
#ifndef free_OVERRIDE
  #define free h_free
#endif
#ifndef freopen_OVERRIDE
  #define freopen h_freopen
#endif
#ifndef freopen64_OVERRIDE
  #define freopen64 h_freopen64
#endif
#ifndef frexp_OVERRIDE
  #define frexp h_frexp
#endif
#ifndef frexpf_OVERRIDE
  #define frexpf h_frexpf
#endif
#ifndef frexpl_OVERRIDE
  #define frexpl h_frexpl
#endif
#ifndef fromfp_OVERRIDE
  #define fromfp h_fromfp
#endif
#ifndef fromfpf_OVERRIDE
  #define fromfpf h_fromfpf
#endif
#ifndef fromfpl_OVERRIDE
  #define fromfpl h_fromfpl
#endif
#ifndef fromfpx_OVERRIDE
  #define fromfpx h_fromfpx
#endif
#ifndef fromfpxf_OVERRIDE
  #define fromfpxf h_fromfpxf
#endif
#ifndef fromfpxl_OVERRIDE
  #define fromfpxl h_fromfpxl
#endif
#ifndef fscanf_OVERRIDE
  #define fscanf h_fscanf
#endif
#ifndef fseek_OVERRIDE
  #define fseek h_fseek
#endif
#ifndef fseeko_OVERRIDE
  #define fseeko h_fseeko
#endif
#ifndef fseeko64_OVERRIDE
  #define fseeko64 h_fseeko64
#endif
#ifndef fsetpos_OVERRIDE
  #define fsetpos h_fsetpos
#endif
// // #define fsetpos64 h_fsetpos64
#ifndef fstat_OVERRIDE
  #define fstat h_fstat
#endif
#ifndef fstat64_OVERRIDE
  #define fstat64 h_fstat64
#endif
#ifndef fsub_OVERRIDE
  #define fsub h_fsub
#endif
#ifndef fsubl_OVERRIDE
  #define fsubl h_fsubl
#endif
#ifndef fsync_OVERRIDE
  #define fsync h_fsync
#endif
#ifndef ftell_OVERRIDE
  #define ftell h_ftell
#endif
#ifndef ftello_OVERRIDE
  #define ftello h_ftello
#endif
// // #define ftello64 h_ftello64
#ifndef ftruncate_OVERRIDE
  #define ftruncate h_ftruncate
#endif
#ifndef ftruncate64_OVERRIDE
  #define ftruncate64 h_ftruncate64
#endif
#ifndef ftrylockfile_OVERRIDE
  #define ftrylockfile h_ftrylockfile
#endif
#ifndef ftw_OVERRIDE
  #define ftw h_ftw
#endif
// #define ftw64 h_ftw64
#ifndef funlockfile_OVERRIDE
  #define funlockfile h_funlockfile
#endif
#ifndef futimes_OVERRIDE
  #define futimes h_futimes
#endif
#ifndef fwide_OVERRIDE
  #define fwide h_fwide
#endif
#ifndef fwprintf_OVERRIDE
  #define fwprintf h_fwprintf
#endif
#ifndef fwrite_OVERRIDE
  #define fwrite h_fwrite
#endif
#ifndef fwrite_unlocked_OVERRIDE
  #define fwrite_unlocked h_fwrite_unlocked
#endif
#ifndef fwscanf_OVERRIDE
  #define fwscanf h_fwscanf
#endif
#ifndef gamma_OVERRIDE
  #define gamma h_gamma
#endif
#ifndef gammaf_OVERRIDE
  #define gammaf h_gammaf
#endif
#ifndef gammal_OVERRIDE
  #define gammal h_gammal
#endif
#ifndef gcvt_OVERRIDE
  #define gcvt h_gcvt
#endif
#ifndef get_avphys_pages_OVERRIDE
  #define get_avphys_pages h_get_avphys_pages
#endif
#ifndef get_current_dir_name_OVERRIDE
  #define get_current_dir_name h_get_current_dir_name
#endif
#ifndef get_nprocs_OVERRIDE
  #define get_nprocs h_get_nprocs
#endif
#ifndef get_nprocs_conf_OVERRIDE
  #define get_nprocs_conf h_get_nprocs_conf
#endif
#ifndef get_phys_pages_OVERRIDE
  #define get_phys_pages h_get_phys_pages
#endif
#ifndef getauxval_OVERRIDE
  #define getauxval h_getauxval
#endif
// #define getc h_getc
#ifndef getc_unlocked_OVERRIDE
  #define getc_unlocked h_getc_unlocked
#endif
#ifndef getchar_OVERRIDE
  #define getchar h_getchar
#endif
#ifndef getchar_unlocked_OVERRIDE
  #define getchar_unlocked h_getchar_unlocked
#endif
#ifndef getcontext_OVERRIDE
  #define getcontext h_getcontext
#endif
#ifndef getcpu_OVERRIDE
  #define getcpu h_getcpu
#endif
#ifndef getcwd_OVERRIDE
  #define getcwd h_getcwd
#endif
#ifndef getdate_OVERRIDE
  #define getdate h_getdate
#endif
#ifndef getdate_r_OVERRIDE
  #define getdate_r h_getdate_r
#endif
#ifndef getdelim_OVERRIDE
  #define getdelim h_getdelim
#endif
#ifndef getdents64_OVERRIDE
  #define getdents64 h_getdents64
#endif
#ifndef getdomainnname_OVERRIDE
  #define getdomainnname h_getdomainnname
#endif
#ifndef getegid_OVERRIDE
  #define getegid h_getegid
#endif
#ifndef getentropy_OVERRIDE
  #define getentropy h_getentropy
#endif
#ifndef getenv_OVERRIDE
  #define getenv h_getenv
#endif
#ifndef geteuid_OVERRIDE
  #define geteuid h_geteuid
#endif
#ifndef getfsent_OVERRIDE
  #define getfsent h_getfsent
#endif
#ifndef getfsfile_OVERRIDE
  #define getfsfile h_getfsfile
#endif
#ifndef getfsspec_OVERRIDE
  #define getfsspec h_getfsspec
#endif
#ifndef getgid_OVERRIDE
  #define getgid h_getgid
#endif
#ifndef getgrent_OVERRIDE
  #define getgrent h_getgrent
#endif
#ifndef getgrent_r_OVERRIDE
  #define getgrent_r h_getgrent_r
#endif
#ifndef getgrgid_OVERRIDE
  #define getgrgid h_getgrgid
#endif
#ifndef getgrgid_r_OVERRIDE
  #define getgrgid_r h_getgrgid_r
#endif
#ifndef getgrnam_OVERRIDE
  #define getgrnam h_getgrnam
#endif
#ifndef getgrnam_r_OVERRIDE
  #define getgrnam_r h_getgrnam_r
#endif
#ifndef getgrouplist_OVERRIDE
  #define getgrouplist h_getgrouplist
#endif
#ifndef getgroups_OVERRIDE
  #define getgroups h_getgroups
#endif
#ifndef gethostbyaddr_OVERRIDE
  #define gethostbyaddr h_gethostbyaddr
#endif
#ifndef gethostbyaddr_r_OVERRIDE
  #define gethostbyaddr_r h_gethostbyaddr_r
#endif
#ifndef gethostbyname_OVERRIDE
  #define gethostbyname h_gethostbyname
#endif
#ifndef gethostbyname_r_OVERRIDE
  #define gethostbyname_r h_gethostbyname_r
#endif
#ifndef gethostbyname2_OVERRIDE
  #define gethostbyname2 h_gethostbyname2
#endif
#ifndef gethostbyname2_r_OVERRIDE
  #define gethostbyname2_r h_gethostbyname2_r
#endif
#ifndef gethostent_OVERRIDE
  #define gethostent h_gethostent
#endif
#ifndef gethostid_OVERRIDE
  #define gethostid h_gethostid
#endif
#ifndef gethostname_OVERRIDE
  #define gethostname h_gethostname
#endif
#ifndef getline_OVERRIDE
  #define getline h_getline
#endif
#ifndef getloadavg_OVERRIDE
  #define getloadavg h_getloadavg
#endif
#ifndef getlogin_OVERRIDE
  #define getlogin h_getlogin
#endif
#ifndef getmntent_OVERRIDE
  #define getmntent h_getmntent
#endif
#ifndef getmntent_r_OVERRIDE
  #define getmntent_r h_getmntent_r
#endif
#ifndef getnetbyaddr_OVERRIDE
  #define getnetbyaddr h_getnetbyaddr
#endif
#ifndef getnetbyname_OVERRIDE
  #define getnetbyname h_getnetbyname
#endif
#ifndef getnetent_OVERRIDE
  #define getnetent h_getnetent
#endif
#ifndef getnetgrent_OVERRIDE
  #define getnetgrent h_getnetgrent
#endif
#ifndef getnetgrent_r_OVERRIDE
  #define getnetgrent_r h_getnetgrent_r
#endif
#ifndef getopt_OVERRIDE
  #define getopt h_getopt
#endif
#ifndef getopt_long_OVERRIDE
  #define getopt_long h_getopt_long
#endif
#ifndef getopt_long_only_OVERRIDE
  #define getopt_long_only h_getopt_long_only
#endif
#ifndef getpagesize_OVERRIDE
  #define getpagesize h_getpagesize
#endif
#ifndef getpass_OVERRIDE
  #define getpass h_getpass
#endif
#ifndef getpayload_OVERRIDE
  #define getpayload h_getpayload
#endif
#ifndef getpayloadf_OVERRIDE
  #define getpayloadf h_getpayloadf
#endif
#ifndef getpayloadl_OVERRIDE
  #define getpayloadl h_getpayloadl
#endif
#ifndef getpeername_OVERRIDE
  #define getpeername h_getpeername
#endif
#ifndef getpgid_OVERRIDE
  #define getpgid h_getpgid
#endif
#ifndef getpgrp_OVERRIDE
  #define getpgrp h_getpgrp
#endif
#ifndef getpid_OVERRIDE
  #define getpid h_getpid
#endif
#ifndef getppid_OVERRIDE
  #define getppid h_getppid
#endif
#ifndef getprotobyname_OVERRIDE
  #define getprotobyname h_getprotobyname
#endif
#ifndef getprotobynumber_OVERRIDE
  #define getprotobynumber h_getprotobynumber
#endif
#ifndef getprotoent_OVERRIDE
  #define getprotoent h_getprotoent
#endif
#ifndef getpt_OVERRIDE
  #define getpt h_getpt
#endif
#ifndef getpwent_OVERRIDE
  #define getpwent h_getpwent
#endif
#ifndef getpwent_r_OVERRIDE
  #define getpwent_r h_getpwent_r
#endif
#ifndef getpwnam_OVERRIDE
  #define getpwnam h_getpwnam
#endif
#ifndef getpwnam_r_OVERRIDE
  #define getpwnam_r h_getpwnam_r
#endif
#ifndef getpwuid_OVERRIDE
  #define getpwuid h_getpwuid
#endif
#ifndef getpwuid_r_OVERRIDE
  #define getpwuid_r h_getpwuid_r
#endif
#ifndef getrandom_OVERRIDE
  #define getrandom h_getrandom
#endif
#ifndef getrusage_OVERRIDE
  #define getrusage h_getrusage
#endif
#ifndef gets_OVERRIDE
  #define gets h_gets
#endif
#ifndef getservbyname_OVERRIDE
  #define getservbyname h_getservbyname
#endif
#ifndef getservbyport_OVERRIDE
  #define getservbyport h_getservbyport
#endif
#ifndef getservent_OVERRIDE
  #define getservent h_getservent
#endif
#ifndef getsid_OVERRIDE
  #define getsid h_getsid
#endif
#ifndef getsockname_OVERRIDE
  #define getsockname h_getsockname
#endif
#ifndef getsockopt_OVERRIDE
  #define getsockopt h_getsockopt
#endif
#ifndef getsubopt_OVERRIDE
  #define getsubopt h_getsubopt
#endif
#ifndef gettext_OVERRIDE
  #define gettext h_gettext
#endif
#ifndef gettid_OVERRIDE
  #define gettid h_gettid
#endif
#ifndef getuid_OVERRIDE
  #define getuid h_getuid
#endif
#ifndef getumask_OVERRIDE
  #define getumask h_getumask
#endif
#ifndef getutent_OVERRIDE
  #define getutent h_getutent
#endif
#ifndef getutent_r_OVERRIDE
  #define getutent_r h_getutent_r
#endif
#ifndef getutid_OVERRIDE
  #define getutid h_getutid
#endif
#ifndef getutid_r_OVERRIDE
  #define getutid_r h_getutid_r
#endif
#ifndef getutline_OVERRIDE
  #define getutline h_getutline
#endif
#ifndef getutline_r_OVERRIDE
  #define getutline_r h_getutline_r
#endif
#ifndef getutxent_OVERRIDE
  #define getutxent h_getutxent
#endif
#ifndef getutxid_OVERRIDE
  #define getutxid h_getutxid
#endif
#ifndef getutxline_OVERRIDE
  #define getutxline h_getutxline
#endif
#ifndef getw_OVERRIDE
  #define getw h_getw
#endif
#ifndef getwc_OVERRIDE
  #define getwc h_getwc
#endif
#ifndef getwc_unlocked_OVERRIDE
  #define getwc_unlocked h_getwc_unlocked
#endif
#ifndef getwchar_OVERRIDE
  #define getwchar h_getwchar
#endif
#ifndef getwchar_unlocked_OVERRIDE
  #define getwchar_unlocked h_getwchar_unlocked
#endif
#ifndef getwd_OVERRIDE
  #define getwd h_getwd
#endif
#ifndef glob_OVERRIDE
  #define glob h_glob
#endif
// #define glob64 h_glob64
#ifndef globfree_OVERRIDE
  #define globfree h_globfree
#endif
// #define globfree64 h_globfree64
#ifndef gmtime_OVERRIDE
  #define gmtime h_gmtime
#endif
#ifndef gmtime_r_OVERRIDE
  #define gmtime_r h_gmtime_r
#endif
#ifndef grantpt_OVERRIDE
  #define grantpt h_grantpt
#endif
#ifndef gsignal_OVERRIDE
  #define gsignal h_gsignal
#endif
#ifndef hasmntopt_OVERRIDE
  #define hasmntopt h_hasmntopt
#endif
#ifndef hcreate_OVERRIDE
  #define hcreate h_hcreate
#endif
#ifndef hcreate_r_OVERRIDE
  #define hcreate_r h_hcreate_r
#endif
#ifndef hdestroy_OVERRIDE
  #define hdestroy h_hdestroy
#endif
#ifndef hdestroy_r_OVERRIDE
  #define hdestroy_r h_hdestroy_r
#endif
#ifndef hsearch_OVERRIDE
  #define hsearch h_hsearch
#endif
#ifndef hsearch_r_OVERRIDE
  #define hsearch_r h_hsearch_r
#endif
#ifndef htonl_OVERRIDE
  #define htonl h_htonl
#endif
#ifndef htons_OVERRIDE
  #define htons h_htons
#endif
#ifndef hypot_OVERRIDE
  #define hypot h_hypot
#endif
#ifndef hypotf_OVERRIDE
  #define hypotf h_hypotf
#endif
#ifndef hypotl_OVERRIDE
  #define hypotl h_hypotl
#endif
#ifndef iconv_OVERRIDE
  #define iconv h_iconv
#endif
#ifndef iconv_close_OVERRIDE
  #define iconv_close h_iconv_close
#endif
#ifndef iconv_open_OVERRIDE
  #define iconv_open h_iconv_open
#endif
#ifndef if_freenameindex_OVERRIDE
  #define if_freenameindex h_if_freenameindex
#endif
#ifndef if_indextoname_OVERRIDE
  #define if_indextoname h_if_indextoname
#endif
// #define if_nameindex h_if_nameindex
#ifndef if_nametoindex_OVERRIDE
  #define if_nametoindex h_if_nametoindex
#endif
#ifndef ilogb_OVERRIDE
  #define ilogb h_ilogb
#endif
#ifndef ilogbf_OVERRIDE
  #define ilogbf h_ilogbf
#endif
#ifndef ilogbl_OVERRIDE
  #define ilogbl h_ilogbl
#endif
#ifndef imaxabs_OVERRIDE
  #define imaxabs h_imaxabs
#endif
#ifndef imaxdiv_OVERRIDE
  #define imaxdiv h_imaxdiv
#endif
#ifndef index_OVERRIDE
  #define index h_index
#endif
#ifndef inet_addr_OVERRIDE
  #define inet_addr h_inet_addr
#endif
#ifndef inet_aton_OVERRIDE
  #define inet_aton h_inet_aton
#endif
#ifndef inet_lnaof_OVERRIDE
  #define inet_lnaof h_inet_lnaof
#endif
#ifndef inet_makeaddr_OVERRIDE
  #define inet_makeaddr h_inet_makeaddr
#endif
#ifndef inet_netof_OVERRIDE
  #define inet_netof h_inet_netof
#endif
#ifndef inet_network_OVERRIDE
  #define inet_network h_inet_network
#endif
#ifndef inet_ntoa_OVERRIDE
  #define inet_ntoa h_inet_ntoa
#endif
#ifndef inet_ntop_OVERRIDE
  #define inet_ntop h_inet_ntop
#endif
#ifndef inet_pton_OVERRIDE
  #define inet_pton h_inet_pton
#endif
#ifndef initgroups_OVERRIDE
  #define initgroups h_initgroups
#endif
#ifndef initstate_OVERRIDE
  #define initstate h_initstate
#endif
#ifndef initstate_r_OVERRIDE
  #define initstate_r h_initstate_r
#endif
#ifndef innetgr_OVERRIDE
  #define innetgr h_innetgr
#endif
#ifndef ioctl_OVERRIDE
  #define ioctl h_ioctl
#endif
#ifndef isatty_OVERRIDE
  #define isatty h_isatty
#endif
#ifndef isinff_OVERRIDE
  #define isinff h_isinff
#endif
#ifndef isinfl_OVERRIDE
  #define isinfl h_isinfl
#endif
#ifndef isnanl_OVERRIDE
  #define isnanl h_isnanl
#endif
#ifndef iswalnum_OVERRIDE
  #define iswalnum h_iswalnum
#endif
#ifndef iswalpha_OVERRIDE
  #define iswalpha h_iswalpha
#endif
#ifndef iswblank_OVERRIDE
  #define iswblank h_iswblank
#endif
#ifndef iswcntrl_OVERRIDE
  #define iswcntrl h_iswcntrl
#endif
#ifndef iswctype_OVERRIDE
  #define iswctype h_iswctype
#endif
#ifndef iswdigit_OVERRIDE
  #define iswdigit h_iswdigit
#endif
#ifndef iswgraph_OVERRIDE
  #define iswgraph h_iswgraph
#endif
#ifndef iswlower_OVERRIDE
  #define iswlower h_iswlower
#endif
#ifndef iswprint_OVERRIDE
  #define iswprint h_iswprint
#endif
#ifndef iswpunct_OVERRIDE
  #define iswpunct h_iswpunct
#endif
#ifndef iswspace_OVERRIDE
  #define iswspace h_iswspace
#endif
#ifndef iswupper_OVERRIDE
  #define iswupper h_iswupper
#endif
#ifndef iswxdigit_OVERRIDE
  #define iswxdigit h_iswxdigit
#endif
#ifndef j0_OVERRIDE
  #define j0 h_j0
#endif
#ifndef j0f_OVERRIDE
  #define j0f h_j0f
#endif
#ifndef j0l_OVERRIDE
  #define j0l h_j0l
#endif
#ifndef j1_OVERRIDE
  #define j1 h_j1
#endif
#ifndef j1f_OVERRIDE
  #define j1f h_j1f
#endif
#ifndef j1l_OVERRIDE
  #define j1l h_j1l
#endif
#ifndef jn_OVERRIDE
  #define jn h_jn
#endif
#ifndef jnf_OVERRIDE
  #define jnf h_jnf
#endif
#ifndef jnl_OVERRIDE
  #define jnl h_jnl
#endif
#ifndef jrand48_OVERRIDE
  #define jrand48 h_jrand48
#endif
#ifndef jrand48_r_OVERRIDE
  #define jrand48_r h_jrand48_r
#endif
#ifndef kill_OVERRIDE
  #define kill h_kill
#endif
#ifndef killpg_OVERRIDE
  #define killpg h_killpg
#endif
#ifndef l64a_OVERRIDE
  #define l64a h_l64a
#endif
#ifndef labs_OVERRIDE
  #define labs h_labs
#endif
#ifndef lcong48_OVERRIDE
  #define lcong48 h_lcong48
#endif
#ifndef lcong48_r_OVERRIDE
  #define lcong48_r h_lcong48_r
#endif
#ifndef ldexp_OVERRIDE
  #define ldexp h_ldexp
#endif
#ifndef ldexpf_OVERRIDE
  #define ldexpf h_ldexpf
#endif
#ifndef ldexpl_OVERRIDE
  #define ldexpl h_ldexpl
#endif
#ifndef ldiv_OVERRIDE
  #define ldiv h_ldiv
#endif
#ifndef lfind_OVERRIDE
  #define lfind h_lfind
#endif
#ifndef lgamma_OVERRIDE
  #define lgamma h_lgamma
#endif
#ifndef lgamma_r_OVERRIDE
  #define lgamma_r h_lgamma_r
#endif
#ifndef lgammaf_OVERRIDE
  #define lgammaf h_lgammaf
#endif
#ifndef lgammaf_r_OVERRIDE
  #define lgammaf_r h_lgammaf_r
#endif
#ifndef lgammal_OVERRIDE
  #define lgammal h_lgammal
#endif
#ifndef lgammal_r_OVERRIDE
  #define lgammal_r h_lgammal_r
#endif
#ifndef link_OVERRIDE
  #define link h_link
#endif
#ifndef linkat_OVERRIDE
  #define linkat h_linkat
#endif
#ifndef lio_listio_OVERRIDE
  #define lio_listio h_lio_listio
#endif
#ifndef lio_listio64_OVERRIDE
  #define lio_listio64 h_lio_listio64
#endif
#ifndef listen_OVERRIDE
  #define listen h_listen
#endif
#ifndef llabs_OVERRIDE
  #define llabs h_llabs
#endif
#ifndef lldiv_OVERRIDE
  #define lldiv h_lldiv
#endif
#ifndef llogb_OVERRIDE
  #define llogb h_llogb
#endif
#ifndef llogbf_OVERRIDE
  #define llogbf h_llogbf
#endif
#ifndef llogbl_OVERRIDE
  #define llogbl h_llogbl
#endif
#ifndef llrint_OVERRIDE
  #define llrint h_llrint
#endif
#ifndef llrintf_OVERRIDE
  #define llrintf h_llrintf
#endif
#ifndef llrintl_OVERRIDE
  #define llrintl h_llrintl
#endif
#ifndef llround_OVERRIDE
  #define llround h_llround
#endif
#ifndef llroundf_OVERRIDE
  #define llroundf h_llroundf
#endif
#ifndef llroundl_OVERRIDE
  #define llroundl h_llroundl
#endif
#ifndef localeconv_OVERRIDE
  #define localeconv h_localeconv
#endif
#ifndef localtime_OVERRIDE
  #define localtime h_localtime
#endif
#ifndef localtime_r_OVERRIDE
  #define localtime_r h_localtime_r
#endif
#ifndef log_OVERRIDE
  #define log h_log
#endif
#ifndef log10_OVERRIDE
  #define log10 h_log10
#endif
#ifndef log10f_OVERRIDE
  #define log10f h_log10f
#endif
#ifndef log10l_OVERRIDE
  #define log10l h_log10l
#endif
#ifndef log1p_OVERRIDE
  #define log1p h_log1p
#endif
#ifndef log1pf_OVERRIDE
  #define log1pf h_log1pf
#endif
#ifndef log1pl_OVERRIDE
  #define log1pl h_log1pl
#endif
#ifndef log2_OVERRIDE
  #define log2 h_log2
#endif
#ifndef log2f_OVERRIDE
  #define log2f h_log2f
#endif
#ifndef log2l_OVERRIDE
  #define log2l h_log2l
#endif
#ifndef logb_OVERRIDE
  #define logb h_logb
#endif
#ifndef logbf_OVERRIDE
  #define logbf h_logbf
#endif
#ifndef logbl_OVERRIDE
  #define logbl h_logbl
#endif
#ifndef logf_OVERRIDE
  #define logf h_logf
#endif
#ifndef login_OVERRIDE
  #define login h_login
#endif
#ifndef login_tty_OVERRIDE
  #define login_tty h_login_tty
#endif
#ifndef logl_OVERRIDE
  #define logl h_logl
#endif
#ifndef logout_OVERRIDE
  #define logout h_logout
#endif
#ifndef logwtmp_OVERRIDE
  #define logwtmp h_logwtmp
#endif
#ifndef longjmp_OVERRIDE
  #define longjmp h_longjmp
#endif
#ifndef lrand48_OVERRIDE
  #define lrand48 h_lrand48
#endif
#ifndef lrand48_r_OVERRIDE
  #define lrand48_r h_lrand48_r
#endif
#ifndef lrint_OVERRIDE
  #define lrint h_lrint
#endif
#ifndef lrintf_OVERRIDE
  #define lrintf h_lrintf
#endif
#ifndef lrintl_OVERRIDE
  #define lrintl h_lrintl
#endif
#ifndef lround_OVERRIDE
  #define lround h_lround
#endif
#ifndef lroundf_OVERRIDE
  #define lroundf h_lroundf
#endif
#ifndef lroundl_OVERRIDE
  #define lroundl h_lroundl
#endif
#ifndef lsearch_OVERRIDE
  #define lsearch h_lsearch
#endif
#ifndef lseek_OVERRIDE
  #define lseek h_lseek
#endif
#ifndef lseek64_OVERRIDE
  #define lseek64 h_lseek64
#endif
#ifndef lstat_OVERRIDE
  #define lstat h_lstat
#endif
#ifndef lstat64_OVERRIDE
  #define lstat64 h_lstat64
#endif
#ifndef lutimes_OVERRIDE
  #define lutimes h_lutimes
#endif
#ifndef madvise_OVERRIDE
  #define madvise h_madvise
#endif
#ifndef maillinfo_OVERRIDE
  #define maillinfo h_mallinfo
#endif
#ifndef makecontext_OVERRIDE
  #define makecontext h_makecontext
#endif
#ifndef mallopt_OVERRIDE
  #define mallopt h_mallopt
#endif
#ifndef mblen_OVERRIDE
  #define mblen h_mblen
#endif
#ifndef mbrlen_OVERRIDE
  #define mbrlen h_mbrlen
#endif
#ifndef mbrtowc_OVERRIDE
  #define mbrtowc h_mbrtowc
#endif
#ifndef mbsinit_OVERRIDE
  #define mbsinit h_mbsinit
#endif
#ifndef mbsnrtowcs_OVERRIDE
  #define mbsnrtowcs h_mbsnrtowcs
#endif
#ifndef mbsrtowcs_OVERRIDE
  #define mbsrtowcs h_mbsrtowcs
#endif
#ifndef mbstowcs_OVERRIDE
  #define mbstowcs h_mbstowcs
#endif
#ifndef mbtowc_OVERRIDE
  #define mbtowc h_mbtowc
#endif
#ifndef mcheck_OVERRIDE
  #define mcheck h_mcheck
#endif
#ifndef memalign_OVERRIDE
  #define memalign h_memalign
#endif
#ifndef memccpy_OVERRIDE
  #define memccpy h_memccpy
#endif
#ifndef memchr_OVERRIDE
  #define memchr h_memchr
#endif
#ifndef memcmp_OVERRIDE
  #define memcmp h_memcmp
#endif
#ifndef memcpy_OVERRIDE
  #define memcpy h_memcpy
#endif
#ifndef memfd_create_OVERRIDE
  #define memfd_create h_memfd_create
#endif
#ifndef memfrob_OVERRIDE
  #define memfrob h_memfrob
#endif
#ifndef memmem_OVERRIDE
  #define memmem h_memmem
#endif
#ifndef memmove_OVERRIDE
  #define memmove h_memmove
#endif
#ifndef mempcpy_OVERRIDE
  #define mempcpy h_mempcpy
#endif
#ifndef memrchr_OVERRIDE
  #define memrchr h_memrchr
#endif
#ifndef memset_OVERRIDE
  #define memset h_memset
#endif
#ifndef mkdir_OVERRIDE
  #define mkdir h_mkdir
#endif
#ifndef mkdtemp_OVERRIDE
  #define mkdtemp h_mkdtemp
#endif
#ifndef mkfifo_OVERRIDE
  #define mkfifo h_mkfifo
#endif
#ifndef mknod_OVERRIDE
  #define mknod h_mknod
#endif
#ifndef mkstemp_OVERRIDE
  #define mkstemp h_mkstemp
#endif
#ifndef mktemp_OVERRIDE
  #define mktemp h_mktemp
#endif
#ifndef mktime_OVERRIDE
  #define mktime h_mktime
#endif
#ifndef mlock_OVERRIDE
  #define mlock h_mlock
#endif
#ifndef mlock2_OVERRIDE
  #define mlock2 h_mlock2
#endif
#ifndef mlockall_OVERRIDE
  #define mlockall h_mlockall
#endif
#ifndef mmap_OVERRIDE
  #define mmap h_mmap
#endif
#ifndef mmap64_OVERRIDE
  #define mmap64 h_mmap64
#endif
#ifndef modf_OVERRIDE
  #define modf h_modf
#endif
#ifndef modff_OVERRIDE
  #define modff h_modff
#endif
#ifndef modfl_OVERRIDE
  #define modfl h_modfl
#endif
#ifndef mount_OVERRIDE
  #define mount h_mount
#endif
#ifndef mprobe_OVERRIDE
  #define mprobe h_mprobe
#endif
#ifndef mprotect_OVERRIDE
  #define mprotect h_mprotect
#endif
#ifndef mrand48_OVERRIDE
  #define mrand48 h_mrand48
#endif
#ifndef mrand48_r_OVERRIDE
  #define mrand48_r h_mrand48_r
#endif
#ifndef mremap_OVERRIDE
  #define mremap h_mremap
#endif
#ifndef msync_OVERRIDE
  #define msync h_msync
#endif
#ifndef mtrace_OVERRIDE
  #define mtrace h_mtrace
#endif
#ifndef munlock_OVERRIDE
  #define munlock h_munlock
#endif
#ifndef munlockall_OVERRIDE
  #define munlockall h_munlockall
#endif
#ifndef munmap_OVERRIDE
  #define munmap h_munmap
#endif
#ifndef muntrace_OVERRIDE
  #define muntrace h_muntrace
#endif
#ifndef nan_OVERRIDE
  #define nan h_nan
#endif
#ifndef nanf_OVERRIDE
  #define nanf h_nanf
#endif
#ifndef nanl_OVERRIDE
  #define nanl h_nanl
#endif
#ifndef nanosleep_OVERRIDE
  #define nanosleep h_nanosleep
#endif
#ifndef nearbyint_OVERRIDE
  #define nearbyint h_nearbyint
#endif
#ifndef nearbyintf_OVERRIDE
  #define nearbyintf h_nearbyintf
#endif
#ifndef nearbyintl_OVERRIDE
  #define nearbyintl h_nearbyintl
#endif
#ifndef nextafter_OVERRIDE
  #define nextafter h_nextafter
#endif
#ifndef nextafterf_OVERRIDE
  #define nextafterf h_nextafterf
#endif
#ifndef nextafterl_OVERRIDE
  #define nextafterl h_nextafterl
#endif
#ifndef nextdown_OVERRIDE
  #define nextdown h_nextdown
#endif
#ifndef nextdownf_OVERRIDE
  #define nextdownf h_nextdownf
#endif
#ifndef nextdownl_OVERRIDE
  #define nextdownl h_nextdownl
#endif
#ifndef nexttoward_OVERRIDE
  #define nexttoward h_nexttoward
#endif
#ifndef nexttowardf_OVERRIDE
  #define nexttowardf h_nexttowardf
#endif
#ifndef nexttowardl_OVERRIDE
  #define nexttowardl h_nexttowardl
#endif
#ifndef nextup_OVERRIDE
  #define nextup h_nextup
#endif
#ifndef nextupf_OVERRIDE
  #define nextupf h_nextupf
#endif
#ifndef nextupl_OVERRIDE
  #define nextupl h_nextupl
#endif
// #define nftw h_nftw
// #define nftw64 h_nftw64
#ifndef ngettext_OVERRIDE
  #define ngettext h_ngettext
#endif
#ifndef nice_OVERRIDE
  #define nice h_nice
#endif
#ifndef nl_langinfo_OVERRIDE
  #define nl_langinfo h_nl_langinfo
#endif
#ifndef nrand48_OVERRIDE
  #define nrand48 h_nrand48
#endif
#ifndef nrand48_r_OVERRIDE
  #define nrand48_r h_nrand48_r
#endif
#ifndef ntohl_OVERRIDE
  #define ntohl h_ntohl
#endif
#ifndef ntohs_OVERRIDE
  #define ntohs h_ntohs
#endif
#ifndef ntp_adjtime_OVERRIDE
  #define ntp_adjtime h_ntp_adjtime
#endif
#ifndef ntp_gettime_OVERRIDE
  #define ntp_gettime h_ntp_gettime
#endif
#ifndef obstack_1grow_OVERRIDE
  #define obstack_1grow h_obstack_1grow
#endif
#ifndef obstack_1grow_fast_OVERRIDE
  #define obstack_1grow_fast h_obstack_1grow_fast
#endif
#ifndef obstack_alloc_OVERRIDE
  #define obstack_alloc h_obstack_alloc
#endif
#ifndef obstack_base_OVERRIDE
  #define obstack_base h_obstack_base
#endif
#ifndef obstack_blank_OVERRIDE
  #define obstack_blank h_obstack_blank
#endif
#ifndef obstack_blank_fast_OVERRIDE
  #define obstack_blank_fast h_obstack_blank_fast
#endif
#ifndef obstack_copy_OVERRIDE
  #define obstack_copy h_obstack_copy
#endif
#ifndef obstack_copy0_OVERRIDE
  #define obstack_copy0 h_obstack_copy0
#endif
#ifndef obstack_finish_OVERRIDE
  #define obstack_finish h_obstack_finish
#endif
#ifndef obstack_free_OVERRIDE
  #define obstack_free h_obstack_free
#endif
#ifndef obstack_grow_OVERRIDE
  #define obstack_grow h_obstack_grow
#endif
#ifndef obstack_grow0_OVERRIDE
  #define obstack_grow0 h_obstack_grow0
#endif
#ifndef obstack_init_OVERRIDE
  #define obstack_init h_obstack_init
#endif
#ifndef obstack_int_grow_OVERRIDE
  #define obstack_int_grow h_obstack_int_grow
#endif
#ifndef obstack_int_grow_fast_OVERRIDE
  #define obstack_int_grow_fast h_obstack_int_grow_fast
#endif
#ifndef obstack_next_free_OVERRIDE
  #define obstack_next_free h_obstack_next_free
#endif
#ifndef obstack_object_size_OVERRIDE
  #define obstack_object_size h_obstack_object_size
#endif
#ifndef obstack_ptr_grow_OVERRIDE
  #define obstack_ptr_grow h_obstack_ptr_grow
#endif
#ifndef obstack_ptr_grow_fast_OVERRIDE
  #define obstack_ptr_grow_fast h_obstack_ptr_grow_fast
#endif
#ifndef obstack_room_OVERRIDE
  #define obstack_room h_obstack_room
#endif
#ifndef on_exit_OVERRIDE
  #define on_exit h_on_exit
#endif
#ifndef open_OVERRIDE
  #define open h_open
#endif
#ifndef open_memstream_OVERRIDE
  #define open_memstream h_open_memstream
#endif
#ifndef opendir_OVERRIDE
  #define opendir h_opendir
#endif
#ifndef openlog_OVERRIDE
  #define openlog h_openlog
#endif
#ifndef openpty_OVERRIDE
  #define openpty h_openpty
#endif
#ifndef parse_printf_format_OVERRIDE
  #define parse_printf_format h_parse_printf_format
#endif
#ifndef pathconf_OVERRIDE
  #define pathconf h_pathconf
#endif
#ifndef pause_OVERRIDE
  #define pause h_pause
#endif
#ifndef pclose_OVERRIDE
  #define pclose h_pclose
#endif
#ifndef perror_OVERRIDE
  #define perror h_perror
#endif
#ifndef pipe_OVERRIDE
  #define pipe h_pipe
#endif
#ifndef pkey_alloc_OVERRIDE
  #define pkey_alloc h_pkey_alloc
#endif
#ifndef pkey_free_OVERRIDE
  #define pkey_free h_pkey_free
#endif
#ifndef pkey_get_OVERRIDE
  #define pkey_get h_pkey_get
#endif
#ifndef pkey_mprotect_OVERRIDE
  #define pkey_mprotect h_pkey_mprotect
#endif
#ifndef pkey_set_OVERRIDE
  #define pkey_set h_pkey_set
#endif
#ifndef popen_OVERRIDE
  #define popen h_popen
#endif
#ifndef posix_fallocate_OVERRIDE
  #define posix_fallocate h_posix_fallocate
#endif
#ifndef posix_fallocate64_OVERRIDE
  #define posix_fallocate64 h_posix_fallocate64
#endif
#ifndef posix_memalign_OVERRIDE
  #define posix_memalign h_posix_memalign
#endif
#ifndef pow_OVERRIDE
  #define pow h_pow
#endif
#ifndef powf_OVERRIDE
  #define powf h_powf
#endif
#ifndef powl_OVERRIDE
  #define powl h_powl
#endif
#ifndef pread_OVERRIDE
  #define pread h_pread
#endif
#ifndef pread64_OVERRIDE
  #define pread64 h_pread64
#endif
#ifndef preadv_OVERRIDE
  #define preadv h_preadv
#endif
#ifndef preadv2_OVERRIDE
  #define preadv2 h_preadv2
#endif
#ifndef preadv64_OVERRIDE
  #define preadv64 h_preadv64
#endif
// #define preadv64v2 h_preadv64v2
#ifndef printf_OVERRIDE
  #define printf h_printf
#endif
#ifndef psignal_OVERRIDE
  #define psignal h_psignal
#endif
#ifndef pthread_attr_getsigmask_np_OVERRIDE
  #define pthread_attr_getsigmask_np h_pthread_attr_getsigmask_np
#endif
#ifndef pthread_attr_setsigmask_np_OVERRIDE
  #define pthread_attr_setsigmask_np h_pthread_attr_setsigmask_np
#endif
#ifndef pthread_cond_clockwait_OVERRIDE
  #define pthread_cond_clockwait h_pthread_cond_clockwait
#endif
#ifndef pthread_getattr_default_np_OVERRIDE
  #define pthread_getattr_default_np h_pthread_getattr_default_np
#endif
#ifndef pthread_key_create_OVERRIDE
  #define pthread_key_create h_pthread_key_create
#endif
#ifndef pthread_key_delete_OVERRIDE
  #define pthread_key_delete h_pthread_key_delete
#endif
#ifndef pthread_rwlock_clockrdlock_OVERRIDE
  #define pthread_rwlock_clockrdlock h_pthread_rwlock_clockrdlock
#endif
#ifndef pthread_rwlock_clockwrlock_OVERRIDE
  #define pthread_rwlock_clockwrlock h_pthread_rwlock_clockwrlock
#endif
#ifndef pthread_setattr_default_np_OVERRIDE
  #define pthread_setattr_default_np h_pthread_setattr_default_np
#endif
#ifndef pthread_setspecific_OVERRIDE
  #define pthread_setspecific h_pthread_setspecific
#endif
#ifndef ptsname_OVERRIDE
  #define ptsname h_ptsname
#endif
#ifndef ptsname_r_OVERRIDE
  #define ptsname_r h_ptsname_r
#endif
// #define putc h_putc
#ifndef putc_unlocked_OVERRIDE
  #define putc_unlocked h_putc_unlocked
#endif
#ifndef putchar_OVERRIDE
  #define putchar h_putchar
#endif
#ifndef putchar_unlocked_OVERRIDE
  #define putchar_unlocked h_putchar_unlocked
#endif
#ifndef putenv_OVERRIDE
  #define putenv h_putenv
#endif
#ifndef putpwent_OVERRIDE
  #define putpwent h_putpwent
#endif
#ifndef puts_OVERRIDE
  #define puts h_puts
#endif
#ifndef pututline_OVERRIDE
  #define pututline h_pututline
#endif
#ifndef pututxline_OVERRIDE
  #define pututxline h_pututxline
#endif
#ifndef putw_OVERRIDE
  #define putw h_putw
#endif
#ifndef putwc_OVERRIDE
  #define putwc h_putwc
#endif
#ifndef putwc_unlocked_OVERRIDE
  #define putwc_unlocked h_putwc_unlocked
#endif
#ifndef putwchar_OVERRIDE
  #define putwchar h_putwchar
#endif
#ifndef putwchar_unlocked_OVERRIDE
  #define putwchar_unlocked h_putwchar_unlocked
#endif
#ifndef pwrite_OVERRIDE
  #define pwrite h_pwrite
#endif
#ifndef pwrite64_OVERRIDE
  #define pwrite64 h_pwrite64
#endif
#ifndef pwritev_OVERRIDE
  #define pwritev h_pwritev
#endif
#ifndef pwritev2_OVERRIDE
  #define pwritev2 h_pwritev2
#endif
#ifndef pwritev64_OVERRIDE
  #define pwritev64 h_pwritev64
#endif
// #define pwritev64v2 h_pwritev64v2
#ifndef qecvt_OVERRIDE
  #define qecvt h_qecvt
#endif
#ifndef qecvt_r_OVERRIDE
  #define qecvt_r h_qecvt_r
#endif
#ifndef qfcvt_OVERRIDE
  #define qfcvt h_qfcvt
#endif
#ifndef qfcvt_r_OVERRIDE
  #define qfcvt_r h_qfcvt_r
#endif
#ifndef qgcvt_OVERRIDE
  #define qgcvt h_qgcvt
#endif
#ifndef qsort_OVERRIDE
  #define qsort h_qsort
#endif
#ifndef raise_OVERRIDE
  #define raise h_raise
#endif
#ifndef rand_OVERRIDE
  #define rand h_rand
#endif
#ifndef rand_r_OVERRIDE
  #define rand_r h_rand_r
#endif
#ifndef random_OVERRIDE
  #define random h_random
#endif
#ifndef random_r_OVERRIDE
  #define random_r h_random_r
#endif
#ifndef rawmemchr_OVERRIDE
  #define rawmemchr h_rawmemchr
#endif
#ifndef read_OVERRIDE
  #define read h_read
#endif
#ifndef readdir_OVERRIDE
  #define readdir h_readdir
#endif
#ifndef readdir_r_OVERRIDE
  #define readdir_r h_readdir_r
#endif
#ifndef readdir64_OVERRIDE
  #define readdir64 h_readdir64
#endif
#ifndef readdir64_r_OVERRIDE
  #define readdir64_r h_readdir64_r
#endif
#ifndef readlink_OVERRIDE
  #define readlink h_readlink
#endif
#ifndef readv_OVERRIDE
  #define readv h_readv
#endif
#ifndef realloc_OVERRIDE
  #define realloc h_realloc
#endif
#ifndef reallocarray_OVERRIDE
  #define reallocarray h_reallocarray
#endif
#ifndef realpath_OVERRIDE
  #define realpath h_realpath
#endif
#ifndef recv_OVERRIDE
  #define recv h_recv
#endif
#ifndef recvfrom_OVERRIDE
  #define recvfrom h_recvfrom
#endif
#ifndef regcomp_OVERRIDE
  #define regcomp h_regcomp
#endif
#ifndef regerror_OVERRIDE
  #define regerror h_regerror
#endif
#ifndef regexec_OVERRIDE
  #define regexec h_regexec
#endif
#ifndef regfree_OVERRIDE
  #define regfree h_regfree
#endif
#ifndef remainder_OVERRIDE
  #define remainder h_remainder
#endif
#ifndef remainderf_OVERRIDE
  #define remainderf h_remainderf
#endif
#ifndef remainderl_OVERRIDE
  #define remainderl h_remainderl
#endif
#ifndef remove_OVERRIDE
  #define remove h_remove
#endif
#ifndef rename_OVERRIDE
  #define rename h_rename
#endif
#ifndef rewind_OVERRIDE
  #define rewind h_rewind
#endif
#ifndef rewinddir_OVERRIDE
  #define rewinddir h_rewinddir
#endif
#ifndef rindex_OVERRIDE
  #define rindex h_rindex
#endif
#ifndef rint_OVERRIDE
  #define rint h_rint
#endif
#ifndef rintf_OVERRIDE
  #define rintf h_rintf
#endif
#ifndef rintl_OVERRIDE
  #define rintl h_rintl
#endif
#ifndef rmdir_OVERRIDE
  #define rmdir h_rmdir
#endif
#ifndef round_OVERRIDE
  #define round h_round
#endif
#ifndef roundeven_OVERRIDE
  #define roundeven h_roundeven
#endif
#ifndef roundevenf_OVERRIDE
  #define roundevenf h_roundevenf
#endif
#ifndef roundevenl_OVERRIDE
  #define roundevenl h_roundevenl
#endif
#ifndef roundf_OVERRIDE
  #define roundf h_roundf
#endif
#ifndef roundl_OVERRIDE
  #define roundl h_roundl
#endif
#ifndef rpmatch_OVERRIDE
  #define rpmatch h_rpmatch
#endif
#ifndef scalb_OVERRIDE
  #define scalb h_scalb
#endif
#ifndef scalbf_OVERRIDE
  #define scalbf h_scalbf
#endif
#ifndef scalbl_OVERRIDE
  #define scalbl h_scalbl
#endif
#ifndef scalbln_OVERRIDE
  #define scalbln h_scalbln
#endif
#ifndef scalblnf_OVERRIDE
  #define scalblnf h_scalblnf
#endif
#ifndef scalblnl_OVERRIDE
  #define scalblnl h_scalblnl
#endif
#ifndef scalbn_OVERRIDE
  #define scalbn h_scalbn
#endif
#ifndef scalbnf_OVERRIDE
  #define scalbnf h_scalbnf
#endif
#ifndef scalbnl_OVERRIDE
  #define scalbnl h_scalbnl
#endif
#ifndef scandir_OVERRIDE
  #define scandir h_scandir
#endif
#ifndef scandir64_OVERRIDE
  #define scandir64 h_scandir64
#endif
#ifndef scanf_OVERRIDE
  #define scanf h_scanf
#endif
#ifndef sched_get_priority_max_OVERRIDE
  #define sched_get_priority_max h_sched_get_priority_max
#endif
#ifndef sched_get_priority_min_OVERRIDE
  #define sched_get_priority_min h_sched_get_priority_min
#endif
#ifndef sched_getaffinity_OVERRIDE
  #define sched_getaffinity h_sched_getaffinity
#endif
#ifndef sched_getparam_OVERRIDE
  #define sched_getparam h_sched_getparam
#endif
#ifndef sched_getscheduler_OVERRIDE
  #define sched_getscheduler h_sched_getscheduler
#endif
#ifndef sched_rr_get_interval_OVERRIDE
  #define sched_rr_get_interval h_sched_rr_get_interval
#endif
#ifndef sched_setaffinity_OVERRIDE
  #define sched_setaffinity h_sched_setaffinity
#endif
#ifndef sched_setparam_OVERRIDE
  #define sched_setparam h_sched_setparam
#endif
#ifndef sched_setscheduler_OVERRIDE
  #define sched_setscheduler h_sched_setscheduler
#endif
#ifndef sched_yield_OVERRIDE
  #define sched_yield h_sched_yield
#endif
#ifndef secure_getenv_OVERRIDE
  #define secure_getenv h_secure_getenv
#endif
#ifndef seed48_OVERRIDE
  #define seed48 h_seed48
#endif
#ifndef seed48_r_OVERRIDE
  #define seed48_r h_seed48_r
#endif
#ifndef seekdir_OVERRIDE
  #define seekdir h_seekdir
#endif
#ifndef select_OVERRIDE
  #define select h_select
#endif
#ifndef sem_clockwait_OVERRIDE
  #define sem_clockwait h_sem_clockwait
#endif
#ifndef sem_close_OVERRIDE
  #define sem_close h_sem_close
#endif
#ifndef sem_destroy_OVERRIDE
  #define sem_destroy h_sem_destroy
#endif
#ifndef sem_getvalue_OVERRIDE
  #define sem_getvalue h_sem_getvalue
#endif
#ifndef sem_init_OVERRIDE
  #define sem_init h_sem_init
#endif
// #define sem_open h_sem_open
#ifndef sem_post_OVERRIDE
  #define sem_post h_sem_post
#endif
#ifndef sem_timedwait_OVERRIDE
  #define sem_timedwait h_sem_timedwait
#endif
#ifndef sem_trywait_OVERRIDE
  #define sem_trywait h_sem_trywait
#endif
#ifndef sem_unlink_OVERRIDE
  #define sem_unlink h_sem_unlink
#endif
#ifndef sem_wait_OVERRIDE
  #define sem_wait h_sem_wait
#endif
#ifndef semctl_OVERRIDE
  #define semctl h_semctl
#endif
#ifndef semget_OVERRIDE
  #define semget h_semget
#endif
#ifndef semop_OVERRIDE
  #define semop h_semop
#endif
#ifndef semtimedop_OVERRIDE
  #define semtimedop h_semtimedop
#endif
#ifndef send_OVERRIDE
  #define send h_send
#endif
#ifndef setbuf_OVERRIDE
  #define setbuf h_setbuf
#endif
#ifndef setbuffer_OVERRIDE
  #define setbuffer h_setbuffer
#endif
#ifndef setcontext_OVERRIDE
  #define setcontext h_setcontext
#endif
#ifndef setdomainname_OVERRIDE
  #define setdomainname h_setdomainname
#endif
#ifndef setegid_OVERRIDE
  #define setegid h_setegid
#endif
#ifndef setenv_OVERRIDE
  #define setenv h_setenv
#endif
#ifndef seteuid_OVERRIDE
  #define seteuid h_seteuid
#endif
#ifndef setfsent_OVERRIDE
  #define setfsent h_setfsent
#endif
#ifndef setgid_OVERRIDE
  #define setgid h_setgid
#endif
#ifndef setgrent_OVERRIDE
  #define setgrent h_setgrent
#endif
#ifndef setgroups_OVERRIDE
  #define setgroups h_setgroups
#endif
#ifndef sethostent_OVERRIDE
  #define sethostent h_sethostent
#endif
#ifndef sethostid_OVERRIDE
  #define sethostid h_sethostid
#endif
#ifndef sethostname_OVERRIDE
  #define sethostname h_sethostname
#endif
#ifndef setlinebuf_OVERRIDE
  #define setlinebuf h_setlinebuf
#endif
#ifndef setlocale_OVERRIDE
  #define setlocale h_setlocale
#endif
#ifndef setlogmask_OVERRIDE
  #define setlogmask h_setlogmask
#endif
#ifndef setmntent_OVERRIDE
  #define setmntent h_setmntent
#endif
#ifndef setnetent_OVERRIDE
  #define setnetent h_setnetent
#endif
#ifndef setnetgrent_OVERRIDE
  #define setnetgrent h_setnetgrent
#endif
#ifndef setpayload_OVERRIDE
  #define setpayload h_setpayload
#endif
#ifndef setpayloadf_OVERRIDE
  #define setpayloadf h_setpayloadf
#endif
#ifndef setpayloadl_OVERRIDE
  #define setpayloadl h_setpayloadl
#endif
#ifndef setpayloadsig_OVERRIDE
  #define setpayloadsig h_setpayloadsig
#endif
#ifndef setpayloadsigf_OVERRIDE
  #define setpayloadsigf h_setpayloadsigf
#endif
#ifndef setpayloadsigl_OVERRIDE
  #define setpayloadsigl h_setpayloadsigl
#endif
#ifndef setpgid_OVERRIDE
  #define setpgid h_setpgid
#endif
#ifndef setprotoent_OVERRIDE
  #define setprotoent h_setprotoent
#endif
#ifndef setpwent_OVERRIDE
  #define setpwent h_setpwent
#endif
#ifndef setregid_OVERRIDE
  #define setregid h_setregid
#endif
#ifndef setreuid_OVERRIDE
  #define setreuid h_setreuid
#endif
#ifndef setservent_OVERRIDE
  #define setservent h_setservent
#endif
#ifndef setsid_OVERRIDE
  #define setsid h_setsid
#endif
#ifndef setsockopt_OVERRIDE
  #define setsockopt h_setsockopt
#endif
#ifndef setstate_OVERRIDE
  #define setstate h_setstate
#endif
#ifndef setstate_r_OVERRIDE
  #define setstate_r h_setstate_r
#endif
#ifndef setuid_OVERRIDE
  #define setuid h_setuid
#endif
#ifndef setutent_OVERRIDE
  #define setutent h_setutent
#endif
#ifndef setutxent_OVERRIDE
  #define setutxent h_setutxent
#endif
#ifndef setvbuf_OVERRIDE
  #define setvbuf h_setvbuf
#endif
#ifndef shm_open_OVERRIDE
  #define shm_open h_shm_open
#endif
#ifndef shm_unlink_OVERRIDE
  #define shm_unlink h_shm_unlink
#endif
#ifndef shutdown_OVERRIDE
  #define shutdown h_shutdown
#endif
#ifndef sigabbrev_np_OVERRIDE
  #define sigabbrev_np h_sigabbrev_np
#endif
// #define sigaction h_sigaction
#ifndef sigaddset_OVERRIDE
  #define sigaddset h_sigaddset
#endif
#ifndef sigaltstack_OVERRIDE
  #define sigaltstack h_sigaltstack
#endif
#ifndef sigblock_OVERRIDE
  #define sigblock h_sigblock
#endif
#ifndef sigdelset_OVERRIDE
  #define sigdelset h_sigdelset
#endif
#ifndef sigdescr_np_OVERRIDE
  #define sigdescr_np h_sigdescr_np
#endif
#ifndef sigemptyset_OVERRIDE
  #define sigemptyset h_sigemptyset
#endif
#ifndef sigfillset_OVERRIDE
  #define sigfillset h_sigfillset
#endif
#ifndef siginterrupt_OVERRIDE
  #define siginterrupt h_siginterrupt
#endif
#ifndef sigismember_OVERRIDE
  #define sigismember h_sigismember
#endif
#ifndef siglongjmp_OVERRIDE
  #define siglongjmp h_siglongjmp
#endif
#ifndef signal_OVERRIDE
  #define signal h_signal
#endif
#ifndef significand_OVERRIDE
  #define significand h_significand
#endif
#ifndef significandf_OVERRIDE
  #define significandf h_significandf
#endif
#ifndef significandl_OVERRIDE
  #define significandl h_significandl
#endif
#ifndef sigpause_OVERRIDE
  #define sigpause h_sigpause
#endif
#ifndef sigpending_OVERRIDE
  #define sigpending h_sigpending
#endif
#ifndef sigprocmask_OVERRIDE
  #define sigprocmask h_sigprocmask
#endif
// #define sigsetjmp h_sigsetjmp
#ifndef sigsetmask_OVERRIDE
  #define sigsetmask h_sigsetmask
#endif
// #define sigstack h_sigstack
#ifndef sigsuspend_OVERRIDE
  #define sigsuspend h_sigsuspend
#endif
#ifndef sin_OVERRIDE
  #define sin h_sin
#endif
#ifndef sincos_OVERRIDE
  #define sincos h_sincos
#endif
#ifndef sincosf_OVERRIDE
  #define sincosf h_sincosf
#endif
#ifndef sincosl_OVERRIDE
  #define sincosl h_sincosl
#endif
#ifndef sinf_OVERRIDE
  #define sinf h_sinf
#endif
#ifndef sinh_OVERRIDE
  #define sinh h_sinh
#endif
#ifndef sinhf_OVERRIDE
  #define sinhf h_sinhf
#endif
#ifndef sinhl_OVERRIDE
  #define sinhl h_sinhl
#endif
#ifndef sinl_OVERRIDE
  #define sinl h_sinl
#endif
#ifndef sleep_OVERRIDE
  #define sleep h_sleep
#endif
#ifndef snprintf_OVERRIDE
  #define snprintf h_snprintf
#endif
#ifndef socket_OVERRIDE
  #define socket h_socket
#endif
#ifndef socketpair_OVERRIDE
  #define socketpair h_socketpair
#endif
#ifndef sprintf_OVERRIDE
  #define sprintf h_sprintf
#endif
#ifndef sqrt_OVERRIDE
  #define sqrt h_sqrt
#endif
#ifndef sqrtf_OVERRIDE
  #define sqrtf h_sqrtf
#endif
#ifndef sqrtl_OVERRIDE
  #define sqrtl h_sqrtl
#endif
#ifndef srand_OVERRIDE
  #define srand h_srand
#endif
#ifndef srand48_OVERRIDE
  #define srand48 h_srand48
#endif
#ifndef srand48_r_OVERRIDE
  #define srand48_r h_srand48_r
#endif
#ifndef srandom_OVERRIDE
  #define srandom h_srandom
#endif
#ifndef srandom_r_OVERRIDE
  #define srandom_r h_srandom_r
#endif
#ifndef sscanf_OVERRIDE
  #define sscanf h_sscanf
#endif
#ifndef ssignal_OVERRIDE
  #define ssignal h_ssignal
#endif
// #define stat h_stat
// #define stat64 h_stat64
#ifndef stime_OVERRIDE
  #define stime h_stime
#endif
#ifndef stpcpy_OVERRIDE
  #define stpcpy h_stpcpy
#endif
#ifndef stpncpy_OVERRIDE
  #define stpncpy h_stpncpy
#endif
#ifndef strcasecmp_OVERRIDE
  #define strcasecmp h_strcasecmp
#endif
#ifndef strcasestr_OVERRIDE
  #define strcasestr h_strcasestr
#endif
#ifndef strcat_OVERRIDE
  #define strcat h_strcat
#endif
#ifndef strchr_OVERRIDE
  #define strchr h_strchr
#endif
#ifndef strchrnul_OVERRIDE
  #define strchrnul h_strchrnul
#endif
#ifndef strcmp_OVERRIDE
  #define strcmp h_strcmp
#endif
#ifndef strcoll_OVERRIDE
  #define strcoll h_strcoll
#endif
#ifndef strcpy_OVERRIDE
  #define strcpy h_strcpy
#endif
#ifndef strcspn_OVERRIDE
  #define strcspn h_strcspn
#endif
#ifndef strdup_OVERRIDE
  #define strdup h_strdup
#endif
#ifndef strerror_OVERRIDE
  #define strerror h_strerror
#endif
#ifndef strerror_r_OVERRIDE
  #define strerror_r h_strerror_r
#endif
#ifndef strerrordesc_np_OVERRIDE
  #define strerrordesc_np h_strerrordesc_np
#endif
#ifndef strerrorname_np_OVERRIDE
  #define strerrorname_np h_strerrorname_np
#endif
#ifndef strfmon_OVERRIDE
  #define strfmon h_strfmon
#endif
#ifndef strfromd_OVERRIDE
  #define strfromd h_strfromd
#endif
#ifndef strfromf_OVERRIDE
  #define strfromf h_strfromf
#endif
#ifndef strfroml_OVERRIDE
  #define strfroml h_strfroml
#endif
#ifndef strfry_OVERRIDE
  #define strfry h_strfry
#endif
#ifndef strftime_OVERRIDE
  #define strftime h_strftime
#endif
#ifndef strlen_OVERRIDE
  #define strlen h_strlen
#endif
#ifndef strncasecmp_OVERRIDE
  #define strncasecmp h_strncasecmp
#endif
#ifndef strncat_OVERRIDE
  #define strncat h_strncat
#endif
#ifndef strncmp_OVERRIDE
  #define strncmp h_strncmp
#endif
#ifndef strncpy_OVERRIDE
  #define strncpy h_strncpy
#endif
#ifndef strndup_OVERRIDE
  #define strndup h_strndup
#endif
#ifndef strnlen_OVERRIDE
  #define strnlen h_strnlen
#endif
#ifndef strpbrk_OVERRIDE
  #define strpbrk h_strpbrk
#endif
#ifndef strptime_OVERRIDE
  #define strptime h_strptime
#endif
#ifndef strrchr_OVERRIDE
  #define strrchr h_strrchr
#endif
#ifndef strsep_OVERRIDE
  #define strsep h_strsep
#endif
#ifndef strsignal_OVERRIDE
  #define strsignal h_strsignal
#endif
#ifndef strspn_OVERRIDE
  #define strspn h_strspn
#endif
#ifndef strstr_OVERRIDE
  #define strstr h_strstr
#endif
#ifndef strtod_OVERRIDE
  #define strtod h_strtod
#endif
#ifndef strtof_OVERRIDE
  #define strtof h_strtof
#endif
#ifndef strtoimax_OVERRIDE
  #define strtoimax h_strtoimax
#endif
#ifndef strtok_OVERRIDE
  #define strtok h_strtok
#endif
#ifndef strtok_r_OVERRIDE
  #define strtok_r h_strtok_r
#endif
#ifndef strtol_OVERRIDE
  #define strtol h_strtol
#endif
#ifndef strtold_OVERRIDE
  #define strtold h_strtold
#endif
#ifndef strtoll_OVERRIDE
  #define strtoll h_strtoll
#endif
#ifndef strtoq_OVERRIDE
  #define strtoq h_strtoq
#endif
#ifndef strtoul_OVERRIDE
  #define strtoul h_strtoul
#endif
#ifndef strtoull_OVERRIDE
  #define strtoull h_strtoull
#endif
#ifndef strtoumax_OVERRIDE
  #define strtoumax h_strtoumax
#endif
#ifndef strtouq_OVERRIDE
  #define strtouq h_strtouq
#endif
#ifndef strverscmp_OVERRIDE
  #define strverscmp h_strverscmp
#endif
#ifndef strxfrm_OVERRIDE
  #define strxfrm h_strxfrm
#endif
#ifndef swapcontext_OVERRIDE
  #define swapcontext h_swapcontext
#endif
#ifndef swprintf_OVERRIDE
  #define swprintf h_swprintf
#endif
#ifndef swscanf_OVERRIDE
  #define swscanf h_swscanf
#endif
#ifndef symlink_OVERRIDE
  #define symlink h_symlink
#endif
#ifndef sync_OVERRIDE
  #define sync h_sync
#endif
#ifndef syscall_OVERRIDE
  #define syscall h_syscall
#endif
#ifndef sysconf_OVERRIDE
  #define sysconf h_sysconf
#endif
#ifndef syslog_OVERRIDE
  #define syslog h_syslog
#endif
#ifndef system_OVERRIDE
  #define system h_system
#endif
#ifndef sysv_signal_OVERRIDE
  #define sysv_signal h_sysv_signal
#endif
#ifndef tan_OVERRIDE
  #define tan h_tan
#endif
#ifndef tanf_OVERRIDE
  #define tanf h_tanf
#endif
#ifndef tanh_OVERRIDE
  #define tanh h_tanh
#endif
#ifndef tanhf_OVERRIDE
  #define tanhf h_tanhf
#endif
#ifndef tanhl_OVERRIDE
  #define tanhl h_tanhl
#endif
#ifndef tanl_OVERRIDE
  #define tanl h_tanl
#endif
#ifndef tcdrain_OVERRIDE
  #define tcdrain h_tcdrain
#endif
#ifndef tcflow_OVERRIDE
  #define tcflow h_tcflow
#endif
#ifndef tcflush_OVERRIDE
  #define tcflush h_tcflush
#endif
#ifndef tcgetattr_OVERRIDE
  #define tcgetattr h_tcgetattr
#endif
#ifndef tcgetpgrp_OVERRIDE
  #define tcgetpgrp h_tcgetpgrp
#endif
#ifndef tcgetsid_OVERRIDE
  #define tcgetsid h_tcgetsid
#endif
#ifndef tcsendbreak_OVERRIDE
  #define tcsendbreak h_tcsendbreak
#endif
#ifndef tcsetattr_OVERRIDE
  #define tcsetattr h_tcsetattr
#endif
#ifndef tcsetpgrp_OVERRIDE
  #define tcsetpgrp h_tcsetpgrp
#endif
#ifndef tdelete_OVERRIDE
  #define tdelete h_tdelete
#endif
// #define tdestroy h_tdestroy
#ifndef telldir_OVERRIDE
  #define telldir h_telldir
#endif
#ifndef tempnam_OVERRIDE
  #define tempnam h_tempnam
#endif
#ifndef textdomain_OVERRIDE
  #define textdomain h_textdomain
#endif
#ifndef tfind_OVERRIDE
  #define tfind h_tfind
#endif
#ifndef tgamma_OVERRIDE
  #define tgamma h_tgamma
#endif
#ifndef tgammaf_OVERRIDE
  #define tgammaf h_tgammaf
#endif
#ifndef tgammal_OVERRIDE
  #define tgammal h_tgammal
#endif
#ifndef tgkill_OVERRIDE
  #define tgkill h_tgkill
#endif
#ifndef time_OVERRIDE
  #define time h_time
#endif
#ifndef timegm_OVERRIDE
  #define timegm h_timegm
#endif
#ifndef timelocal_OVERRIDE
  #define timelocal h_timelocal
#endif
#ifndef times_OVERRIDE
  #define times h_times
#endif
#ifndef tmpfile_OVERRIDE
  #define tmpfile h_tmpfile
#endif
#ifndef tmpfile64_OVERRIDE
  #define tmpfile64 h_tmpfile64
#endif
#ifndef tmpnam_OVERRIDE
  #define tmpnam h_tmpnam
#endif
#ifndef tmpnam_r_OVERRIDE
  #define tmpnam_r h_tmpnam_r
#endif
#ifndef tolower_OVERRIDE
  #define tolower h_tolower
#endif
#ifndef toupper_OVERRIDE
  #define toupper h_toupper
#endif
#ifndef towctrans_OVERRIDE
  #define towctrans h_towctrans
#endif
#ifndef towlower_OVERRIDE
  #define towlower h_towlower
#endif
#ifndef towupper_OVERRIDE
  #define towupper h_towupper
#endif
#ifndef trunc_OVERRIDE
  #define trunc h_trunc
#endif
#ifndef truncate_OVERRIDE
  #define truncate h_truncate
#endif
#ifndef truncate64_OVERRIDE
  #define truncate64 h_truncate64
#endif
#ifndef truncf_OVERRIDE
  #define truncf h_truncf
#endif
#ifndef truncl_OVERRIDE
  #define truncl h_truncl
#endif
#ifndef tsearch_OVERRIDE
  #define tsearch h_tsearch
#endif
#ifndef ttyname_OVERRIDE
  #define ttyname h_ttyname
#endif
#ifndef ttyname_r_OVERRIDE
  #define ttyname_r h_ttyname_r
#endif
#ifndef twalk_OVERRIDE
  #define twalk h_twalk
#endif
#ifndef twalk_r_OVERRIDE
  #define twalk_r h_twalk_r
#endif
#ifndef tzset_OVERRIDE
  #define tzset h_tzset
#endif
#ifndef ufromfp_OVERRIDE
  #define ufromfp h_ufromfp
#endif
#ifndef ufromfpf_OVERRIDE
  #define ufromfpf h_ufromfpf
#endif
#ifndef ufromfpl_OVERRIDE
  #define ufromfpl h_ufromfpl
#endif
#ifndef ufromfpx_OVERRIDE
  #define ufromfpx h_ufromfpx
#endif
#ifndef ufromfpxf_OVERRIDE
  #define ufromfpxf h_ufromfpxf
#endif
#ifndef ufromfpxl_OVERRIDE
  #define ufromfpxl h_ufromfpxl
#endif
#ifndef ulimit_OVERRIDE
  #define ulimit h_ulimit
#endif
#ifndef umask_OVERRIDE
  #define umask h_umask
#endif
#ifndef umount_OVERRIDE
  #define umount h_umount
#endif
#ifndef umount2_OVERRIDE
  #define umount2 h_umount2
#endif
#ifndef uname_OVERRIDE
  #define uname h_uname
#endif
#ifndef ungetc_OVERRIDE
  #define ungetc h_ungetc
#endif
#ifndef ungetwc_OVERRIDE
  #define ungetwc h_ungetwc
#endif
#ifndef unlink_OVERRIDE
  #define unlink h_unlink
#endif
#ifndef unlockpt_OVERRIDE
  #define unlockpt h_unlockpt
#endif
#ifndef unsetenv_OVERRIDE
  #define unsetenv h_unsetenv
#endif
#ifndef updwtmp_OVERRIDE
  #define updwtmp h_updwtmp
#endif
#ifndef utime_OVERRIDE
  #define utime h_utime
#endif
#ifndef utimes_OVERRIDE
  #define utimes h_utimes
#endif
#ifndef utmpname_OVERRIDE
  #define utmpname h_utmpname
#endif
#ifndef utmpxname_OVERRIDE
  #define utmpxname h_utmpxname
#endif
#ifndef vprintf_OVERRIDE
  #define vprintf h_vprintf
#endif
#ifndef valloc_OVERRIDE
  #define valloc h_valloc
#endif
#ifndef versionsort_OVERRIDE
  #define versionsort h_versionsort
#endif
#ifndef versionsort64_OVERRIDE
  #define versionsort64 h_versionsort64
#endif
#ifndef vfork_OVERRIDE
  #define vfork h_vfork
#endif
#ifndef vlimit_OVERRIDE
  #define vlimit h_vlimit
#endif
#ifndef wait_OVERRIDE
  #define wait h_wait
#endif
#ifndef wait3_OVERRIDE
  #define wait3 h_wait3
#endif
#ifndef wait4_OVERRIDE
  #define wait4 h_wait4
#endif

#ifndef waitpid_OVERRIDE
  // #define fork h_fork
  #define waitpid h_waitpid
#endif


#ifndef warn_OVERRIDE
  #define warn h_warn
#endif
#ifndef warnx_OVERRIDE
  #define warnx h_warnx
#endif
#ifndef wcpcpy_OVERRIDE
  #define wcpcpy h_wcpcpy
#endif
#ifndef wcpncpy_OVERRIDE
  #define wcpncpy h_wcpncpy
#endif
#ifndef wcrtomb_OVERRIDE
  #define wcrtomb h_wcrtomb
#endif
#ifndef wcscasecmp_OVERRIDE
  #define wcscasecmp h_wcscasecmp
#endif
#ifndef wcscat_OVERRIDE
  #define wcscat h_wcscat
#endif
#ifndef wcschr_OVERRIDE
  #define wcschr h_wcschr
#endif
#ifndef wcschrnul_OVERRIDE
  #define wcschrnul h_wcschrnul
#endif
#ifndef wcscmp_OVERRIDE
  #define wcscmp h_wcscmp
#endif
#ifndef wcscoll_OVERRIDE
  #define wcscoll h_wcscoll
#endif
#ifndef wcscpy_OVERRIDE
  #define wcscpy h_wcscpy
#endif
#ifndef wcscspn_OVERRIDE
  #define wcscspn h_wcscspn
#endif
#ifndef wcsdup_OVERRIDE
  #define wcsdup h_wcsdup
#endif
#ifndef wcsftime_OVERRIDE
  #define wcsftime h_wcsftime
#endif
#ifndef wcslen_OVERRIDE
  #define wcslen h_wcslen
#endif
#ifndef wcsncasecmp_OVERRIDE
  #define wcsncasecmp h_wcsncasecmp
#endif
#ifndef wcsncat_OVERRIDE
  #define wcsncat h_wcsncat
#endif
#ifndef wcsncmp_OVERRIDE
  #define wcsncmp h_wcsncmp
#endif
#ifndef wcsncpy_OVERRIDE
  #define wcsncpy h_wcsncpy
#endif
#ifndef wcsnlen_OVERRIDE
  #define wcsnlen h_wcsnlen
#endif
#ifndef wcsnrtombs_OVERRIDE
  #define wcsnrtombs h_wcsnrtombs
#endif
#ifndef wcspbrk_OVERRIDE
  #define wcspbrk h_wcspbrk
#endif
#ifndef wcsrchr_OVERRIDE
  #define wcsrchr h_wcsrchr
#endif
#ifndef wcsrtombs_OVERRIDE
  #define wcsrtombs h_wcsrtombs
#endif
#ifndef wcsspn_OVERRIDE
  #define wcsspn h_wcsspn
#endif
#ifndef wcsstr_OVERRIDE
  #define wcsstr h_wcsstr
#endif
#ifndef wcstod_OVERRIDE
  #define wcstod h_wcstod
#endif
#ifndef wcstof_OVERRIDE
  #define wcstof h_wcstof
#endif
#ifndef wcstoimax_OVERRIDE
  #define wcstoimax h_wcstoimax
#endif
#ifndef wcstok_OVERRIDE
  #define wcstok h_wcstok
#endif
#ifndef wcstol_OVERRIDE
  #define wcstol h_wcstol
#endif
#ifndef wcstold_OVERRIDE
  #define wcstold h_wcstold
#endif
#ifndef wcstoll_OVERRIDE
  #define wcstoll h_wcstoll
#endif
#ifndef wcstombs_OVERRIDE
  #define wcstombs h_wcstombs
#endif
#ifndef wcstoq_OVERRIDE
  #define wcstoq h_wcstoq
#endif
#ifndef wcstoul_OVERRIDE
  #define wcstoul h_wcstoul
#endif
#ifndef wcstoull_OVERRIDE
  #define wcstoull h_wcstoull
#endif
#ifndef wcstoumax_OVERRIDE
  #define wcstoumax h_wcstoumax
#endif
#ifndef wcstouq_OVERRIDE
  #define wcstouq h_wcstouq
#endif
#ifndef wcswcs_OVERRIDE
  #define wcswcs h_wcswcs
#endif
#ifndef wcsxfrm_OVERRIDE
  #define wcsxfrm h_wcsxfrm
#endif
#ifndef wctob_OVERRIDE
  #define wctob h_wctob
#endif
#ifndef wctomb_OVERRIDE
  #define wctomb h_wctomb
#endif
#ifndef wctrans_OVERRIDE
  #define wctrans h_wctrans
#endif
#ifndef wctype_OVERRIDE
  #define wctype h_wctype
#endif
#ifndef wmemchr_OVERRIDE
  #define wmemchr h_wmemchr
#endif
#ifndef wmemcmp_OVERRIDE
  #define wmemcmp h_wmemcmp
#endif
#ifndef wmemcpy_OVERRIDE
  #define wmemcpy h_wmemcpy
#endif
#ifndef wmemmove_OVERRIDE
  #define wmemmove h_wmemmove
#endif
#ifndef wmempcpy_OVERRIDE
  #define wmempcpy h_wmempcpy
#endif
#ifndef wmemset_OVERRIDE
  #define wmemset h_wmemset
#endif
#ifndef wordexp_OVERRIDE
  #define wordexp h_wordexp
#endif
#ifndef wordfree_OVERRIDE
  #define wordfree h_wordfree
#endif
#ifndef wprintf_OVERRIDE
  #define wprintf h_wprintf
#endif
#ifndef write_OVERRIDE
  #define write h_write
#endif
#ifndef writev_OVERRIDE
  #define writev h_writev
#endif
#ifndef wscanf_OVERRIDE
  #define wscanf h_wscanf
#endif
#ifndef y0_OVERRIDE
  #define y0 h_y0
#endif
#ifndef y0f_OVERRIDE
  #define y0f h_y0f
#endif
#ifndef y0l_OVERRIDE
  #define y0l h_y0l
#endif
#ifndef y1_OVERRIDE
  #define y1 h_y1
#endif
#ifndef y1f_OVERRIDE
  #define y1f h_y1f
#endif
#ifndef y1l_OVERRIDE
  #define y1l h_y1l
#endif
#ifndef yn_OVERRIDE
  #define yn h_yn
#endif
#ifndef ynf_OVERRIDE
  #define ynf h_ynf
#endif
#ifndef ynl_OVERRIDE
  #define ynl h_ynl
#endif


/* Type representing floating-point control modes.  */
// typedef struct
//   {
//     unsigned short int __control_word;
//     unsigned short int __glibc_reserved;
//     unsigned int __mxcsr;
//   }
//femode_t;

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
int h_open (const char *filename, int flags, mode_t mode);
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
int h_vprintf (const char *template, va_list ap);
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


#include "openssl_sha.h"


#ifndef SHA256_Init_OVERRIDE
    #define SHA256_Init h_SHA256_Init
#endif
#ifndef SHA256_Update_OVERRIDE
    #define SHA256_Update h_SHA256_Update
#endif
#ifndef SHA256_Final_OVERRIDE
    #define SHA256_Final h_SHA256_Final
#endif

int h_SHA256_Init(SHA256_CTX *c);
int h_SHA256_Update(SHA256_CTX *c, const void *data, size_t len);
int h_SHA256_Final(unsigned char *md, SHA256_CTX *c);

#endif