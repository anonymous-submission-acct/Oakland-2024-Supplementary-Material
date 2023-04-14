typedef void *__builtin_va_list;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_mutex_t_335460617;
struct timespec;
struct __pthread_internal_slist;
union __anonunion____missing_field_name_982438550;
union __anonunion____missing_field_name_242884089;
struct __anonstruct___sigset_t_973126068;
struct __pthread_mutex_s;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_cond_s;
struct random_data;
struct __pthread_rwlock_arch_t;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct_div_t_773697287;
struct __anonstruct___fsid_t_109580352;
union pthread_attr_t;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_rwlock_t_656928968;
struct drand48_data;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_barrierattr_t_951761806;
struct timeval;
struct __pthread_internal_list;
struct __anonstruct___g1_start32_982438551;
struct __anonstruct_fd_set_356711149;
struct __anonstruct_lldiv_t_103911545;
struct __anonstruct___wseq32_961093918;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
typedef long __blksize_t;
typedef __blksize_t blksize_t;
typedef int __daddr_t;
typedef __daddr_t daddr_t;
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
extern void(lcong48)(unsigned short *__param);
typedef unsigned long __fsfilcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef long __quad_t;
typedef long __syscall_slong_t;
typedef long __time_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
int _global_argc;
typedef unsigned long __uint64_t;
static __uint64_t __uint64_identity(__uint64_t __x);
extern int(mkstemp)(char *__template);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern long(a64l)(char const *__s);
typedef __uint64_t u_int64_t;
extern void(abort)(void);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __fd_mask;
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern int(at_quick_exit)(void (*__func)(void));
extern double(strtod)(char const *__nptr, char **__endptr);
typedef int __clockid_t;
typedef unsigned int __gid_t;
typedef int __sig_atomic_t;
typedef int __key_t;
typedef __key_t key_t;
typedef unsigned long __ino64_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
extern int(unsetenv)(char const *__name);
typedef unsigned long __fsblkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
typedef int volatile pthread_spinlock_t;
struct __anonstruct_ldiv_t_790849867 {
  long quot;
  long rem;
};
extern int(rand_r)(unsigned int *__seed);
typedef __mode_t mode_t;
typedef void *__timer_t;
typedef int wchar_t;
extern size_t(wcstombs)(char *__s, wchar_t const *__pwcs, size_t __n);
typedef unsigned long ulong;
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
extern long(atol)(char const *__nptr);
typedef __fd_mask fd_mask;
extern size_t(mbstowcs)(wchar_t *__pwcs, char const *__s, size_t __n);
extern void *(malloc)(size_t __size);
extern int(seed48_r)(unsigned short *__seed16v, struct drand48_data *__buffer);
extern int(mkstemps)(char *__template, int __suffixlen);
struct __anonstruct___sigset_t_973126068 {
  unsigned long __val[1024UL / (8UL * sizeof(unsigned long))];
};
extern long long(atoll)(char const *__nptr);
typedef int register_t;
extern int(qecvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern char *(realpath)(char const *__name, char *__resolved);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
extern char *(l64a)(long __n);
typedef int __int32_t;
typedef __off64_t __loff_t;
struct drand48_data {
  unsigned short __x[3];
  unsigned short __old_x[3];
  unsigned short __c;
  unsigned short __init;
  unsigned long long __a;
};
typedef struct __anonstruct_lldiv_t_103911545 lldiv_t;
typedef unsigned long __dev_t;
typedef __dev_t dev_t;
extern char *(getenv)(char const *__name);
typedef unsigned int uint;
typedef unsigned int __uint32_t;
static __uint32_t __bswap_32(__uint32_t __bsx);
static __uint16_t __uint16_identity(__uint16_t __x);
typedef unsigned char __u_char;
struct __anonstruct_fd_set_356711149 {
  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
};
typedef unsigned int __id_t;
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
typedef short __int16_t;
typedef __int16_t int16_t;
extern void *(realloc)(void *__ptr, size_t __size);
typedef signed char __int8_t;
extern int(clearenv)(void);
typedef unsigned int pthread_key_t;
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __int32_t int32_t;
typedef __loff_t loff_t;
typedef __int16_t __int_least16_t;
extern int(abs)(int __x);
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern void(srand)(unsigned int __seed);
typedef unsigned long __rlim64_t;
typedef __int32_t __int_least32_t;
struct __pthread_internal_list {
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
union __anonunion_pthread_mutex_t_335460617 {
  struct __pthread_mutex_s __data;
  char __size[40];
  long __align;
};
typedef long __blkcnt64_t;
extern int(atexit)(void (*__func)(void));
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
typedef __u_quad_t u_quad_t;
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
union pthread_attr_t {
  char __size[56];
  long __align;
};
extern float(strtof)(char const *__nptr, char **__endptr);
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
extern double(atof)(char const *__nptr);
typedef __sigset_t sigset_t;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
struct __anonstruct___g1_start32_982438551 {
  unsigned int __low;
  unsigned int __high;
};
char **_global_argv;
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_242884089 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
union __anonunion____missing_field_name_982438550 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_982438551 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_242884089 __annonCompField1;
  union __anonunion____missing_field_name_982438550 __annonCompField2;
  unsigned int __g_refs[2];
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
union __anonunion_pthread_cond_t_951761805 {
  struct __pthread_cond_s __data;
  char __size[48];
  long long __align;
};
static __uint32_t __uint32_identity(__uint32_t __x);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
typedef unsigned int __socklen_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
static __uint16_t __bswap_16(__uint16_t __bsx);
typedef union pthread_attr_t pthread_attr_t;
extern int(putenv)(char *__string);
struct random_data {
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
typedef unsigned long __rlim_t;
typedef unsigned long __uintmax_t;
extern void *(reallocarray)(void *__ptr, size_t __nmemb, size_t __size);
extern int(getsubopt)(char **__optionp, char *const *__tokens, char **__valuep);
extern unsigned short *(seed48)(unsigned short *__seed16v);
extern int(qfcvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef union __anonunion_pthread_mutex_t_335460617 pthread_mutex_t;
typedef long __clock_t;
struct __pthread_rwlock_arch_t {
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long __pad2;
  unsigned int __flags;
};
typedef union __anonunion_pthread_barrierattr_t_951761806 pthread_barrierattr_t;
typedef __timer_t timer_t;
extern char *(setstate)(char *__statebuf);
union __anonunion_pthread_rwlock_t_656928968 {
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long __align;
};
extern long double(strtold)(char const *__nptr, char **__endptr);
typedef int __pid_t;
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
typedef struct __anonstruct_div_t_773697287 div_t;
extern div_t(div)(int __numer, int __denom);
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr, int __base);
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __int64_t __int_least64_t;
typedef __suseconds_t suseconds_t;
typedef __int8_t int8_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
typedef unsigned long __fsfilcnt64_t;
extern int(mblen)(char const *__s, size_t __n);
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef __fsid_t fsid_t;
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
typedef __uint32_t __uint_least32_t;
extern int(rpmatch)(char const *__response);
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef __gid_t gid_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
typedef long __intmax_t;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
typedef unsigned long __u_long;
typedef __u_long u_long;
extern void *(calloc)(size_t __nmemb, size_t __size);
extern int(printf)();
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
extern long(lrand48)(void);
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __int8_t __int_least8_t;
typedef __clock_t clock_t;
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
void OBF_FUNC(int n);
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef long __fsword_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
extern void(quick_exit)(int __status);
typedef __u_short u_short;
typedef __uint8_t u_int8_t;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
extern void(srandom)(unsigned int __seed);
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int _BARRIER_0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit; }
        _global_envp_i$nit_INLINE__global_envp_i$nit:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit; }
        _global_argv_i$nit_INLINE__global_argv_i$nit:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit; }
        _global_argc_i$nit_INLINE__global_argc_i$nit:;
        }
        goto megaInit_INLINE_megaInit;
      }
    megaInit_INLINE_megaInit:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0 = 1;
    tmp = atoi((char const *)*(argv + 1));
    OBF_FUNC(tmp);
    return (0);
  }
}
void OBF_FUNC(int n) {
  int __RANDVAR__39743139232992100208__;
  int binaryNumber[100];
  int i;
  int __RANDVAR__28106876217536065383__;
  int j;
  int __RANDVAR__99254390282696255021__;
  long quotient;
  int __RANDVAR__22016335698269916547__;
  long decimal;
  int __RANDVAR__13537820146958631845__;
  int __RANDVAR__62726086403789773440__;
  int tmp;
  int __RANDVAR__8788184977437738728__;
  int __RANDVAR__43344883229269004017__;
  int __RANDVAR__49674409106103282502__;
  int __RANDVAR__71034801555536747864__;
  int __RANDVAR__83662693170526541179__;
  int __RANDVAR__97224410901483773702__;
  int __RANDVAR__76996405264703952775__;
  int __RANDVAR__67292069997143901905__;
  int tmp___0;
  int __RANDVAR__65319938451792242557__;
  int __RANDVAR__2312316741875543084__;
  int __RANDVAR__5216018679659671048__;
  int tmp___1;
  int __RANDVAR__56840513699006781575__;
  int __RANDVAR__46153841298893753531__;
  int __RANDVAR__33686580110020263796__;
  int __RANDVAR__75417025102397281826__;
  int __RANDVAR__53454175931409854185__;
  int __RANDVAR__86225897939797554118__;
  int __RANDVAR__60579731335097185740__;
  int tmp___2;
  int __RANDVAR__12524984542887848581__;
  int __RANDVAR__54946248536565672531__;
  int tmp___3;
  int __RANDVAR__92937321949968116818__;
  int tmp___4;
  int __RANDVAR__77097384296122544421__;
  int __RANDVAR__29464976691974685382__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[144] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143};
  {
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab54:
    j--;
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab90:;
    if (j > 0) {
      goto _1_OBF_FUNC_lab85;
    } else {
      goto _1_OBF_FUNC_lab77;
    }
  _1_OBF_FUNC_lab65:;
    if (quotient != 0L) {
      goto _1_OBF_FUNC_lab106;
    } else {
      goto _1_OBF_FUNC_lab103;
    }
  _1_OBF_FUNC_lab32:
    i++;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab137:
    __RANDVAR__22016335698269916547__ += 520;
    goto _1_OBF_FUNC_lab134;
  _1_OBF_FUNC_lab33:
    j--;
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab38:
    __RANDVAR__13537820146958631845__ -= 387;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab111:
    __RANDVAR__13537820146958631845__ += 525;
    goto _1_OBF_FUNC_lab66;
  _1_OBF_FUNC_lab110:
    __RANDVAR__8788184977437738728__ = 894 * __RANDVAR__99254390282696255021__ - 698 * __RANDVAR__99254390282696255021__;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab127:
    __RANDVAR__13537820146958631845__ -= 704;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab0:
    i = 1;
    goto _1_OBF_FUNC_lab126;
  _1_OBF_FUNC_lab85:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab72:;
    if (__RANDVAR__53454175931409854185__ - __RANDVAR__22016335698269916547__ < __RANDVAR__22016335698269916547__) {
      goto _1_OBF_FUNC_lab135;
    } else {
      goto _1_OBF_FUNC_lab127;
    }
  _1_OBF_FUNC_lab108:
    __RANDVAR__28106876217536065383__ = n;
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab39:
    i++;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab89:
    n += 403;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab52:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab98;
    }
  _1_OBF_FUNC_lab75:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab90;
    } else {
      goto _1_OBF_FUNC_lab128;
    }
  _1_OBF_FUNC_lab135:;
    if (__RANDVAR__13537820146958631845__ < __RANDVAR__53454175931409854185__) {
      goto _1_OBF_FUNC_lab92;
    } else {
      goto _1_OBF_FUNC_lab60;
    }
  _1_OBF_FUNC_lab81:
    __RANDVAR__43344883229269004017__++;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab142:;
    if (quotient != 0L) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab64;
    }
  _1_OBF_FUNC_lab71:
    __RANDVAR__2312316741875543084__ = __RANDVAR__65319938451792242557__;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab96:
    __RANDVAR__39743139232992100208__ = 66;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab35:
    __RANDVAR__99254390282696255021__++;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab113:
    tmp = rand();
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab120:
    j--;
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab116:;
    if (__RANDVAR__49674409106103282502__ < __RANDVAR__99254390282696255021__) {
      goto _1_OBF_FUNC_lab141;
    } else {
      goto _1_OBF_FUNC_lab15;
    }
  _1_OBF_FUNC_lab23:
    binaryNumber[i] = (int)(quotient % 2L);
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab130:;
    if (j > 0) {
      goto _1_OBF_FUNC_lab97;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab106:
    binaryNumber[i] = (int)(quotient % 2L);
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab24:
    __RANDVAR__13537820146958631845__ += 704;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab102:
    __RANDVAR__13537820146958631845__ = __RANDVAR__99254390282696255021__ - __RANDVAR__22016335698269916547__;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab83:
    j = i - 1;
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab58:
    __RANDVAR__22016335698269916547__ -= 52;
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab59:
    __RANDVAR__54946248536565672531__ = 249 + __RANDVAR__13537820146958631845__;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab125:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab77;
    } else {
      goto _1_OBF_FUNC_lab50;
    }
  _1_OBF_FUNC_lab15:
    __RANDVAR__83662693170526541179__ = n;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab10:
    n += 303;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab69:
    printf("%d", binaryNumber[j]);
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab66:
    i++;
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab140:;
    if (__RANDVAR__62726086403789773440__ - -222 < __RANDVAR__99254390282696255021__) {
      goto _1_OBF_FUNC_lab107;
    } else {
      goto _1_OBF_FUNC_lab55;
    }
  _1_OBF_FUNC_lab22:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab16:
    __RANDVAR__83662693170526541179__ += 326;
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab95:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab139:
    n -= 814;
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab21:
    __RANDVAR__75417025102397281826__ -= 97;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab94:
    __RANDVAR__13537820146958631845__ -= 525;
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab25:
    __RANDVAR__77097384296122544421__ = __RANDVAR__99254390282696255021__ + __RANDVAR__77097384296122544421__;
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab97:;
    if (__RANDVAR__13537820146958631845__ < n) {
      goto _1_OBF_FUNC_lab131;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab134:
    __RANDVAR__22016335698269916547__ -= 520;
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab13:;
    if (__RANDVAR__49674409106103282502__ * __RANDVAR__49674409106103282502__ - (__RANDVAR__83662693170526541179__ + 234) < 115) {
      goto _1_OBF_FUNC_lab16;
    } else {
      goto _1_OBF_FUNC_lab117;
    }
  _1_OBF_FUNC_lab88:
    i++;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab12:
    __RANDVAR__49674409106103282502__ = (__RANDVAR__49674409106103282502__ - __RANDVAR__99254390282696255021__) * (182 * __RANDVAR__62726086403789773440__);
    goto _1_OBF_FUNC_lab86;
  _1_OBF_FUNC_lab48:;
    if (__RANDVAR__22016335698269916547__ < 630) {
      goto _1_OBF_FUNC_lab59;
    } else {
      goto _1_OBF_FUNC_lab30;
    }
  _1_OBF_FUNC_lab7:
    __RANDVAR__13537820146958631845__ -= 140;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab64:
    __RANDVAR__65319938451792242557__ = 500;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab20:;
    return;
  _1_OBF_FUNC_lab143:;
    if (quotient != 0L) {
      goto _1_OBF_FUNC_lab118;
    } else {
      goto _1_OBF_FUNC_lab65;
    }
  _1_OBF_FUNC_lab109:;
    if (n < 897067) {
      goto _1_OBF_FUNC_lab137;
    }
  _1_OBF_FUNC_lab122:
    __RANDVAR__67292069997143901905__ = 888;
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab126:;
    if (n < 515 * n + n) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab119:
    __RANDVAR__29464976691974685382__ = __RANDVAR__99254390282696255021__;
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab27:
    __RANDVAR__60579731335097185740__ = 722;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab14:;
    if (quotient != 0L) {
      goto _1_OBF_FUNC_lab84;
    } else {
      goto _1_OBF_FUNC_lab142;
    }
  _1_OBF_FUNC_lab18:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab45;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab129:
    __RANDVAR__99254390282696255021__ += 464;
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab101:
    __RANDVAR__99254390282696255021__ += 525;
    goto _1_OBF_FUNC_lab80;
  _1_OBF_FUNC_lab49:
    j--;
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab73:
    binaryNumber[i] = (int)(quotient % 2L);
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab68:;
    if (__RANDVAR__22016335698269916547__ < __RANDVAR__99254390282696255021__) {
      goto _1_OBF_FUNC_lab41;
    } else {
      goto _1_OBF_FUNC_lab123;
    }
  _1_OBF_FUNC_lab1:
    __RANDVAR__13537820146958631845__ += 387;
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab115:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab65;
    } else {
      goto _1_OBF_FUNC_lab87;
    }
  _1_OBF_FUNC_lab55:;
    if (__RANDVAR__22016335698269916547__ - 955 < 384) {
      goto _1_OBF_FUNC_lab129;
    } else {
      goto _1_OBF_FUNC_lab58;
    }
  _1_OBF_FUNC_lab8:
    n += 747;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab103:
    printf("Equivalent binary value of decimal number %d: \n", decimal);
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab99:
    printf("%d", binaryNumber[j]);
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab87:
    __RANDVAR__56840513699006781575__ = __RANDVAR__22016335698269916547__;
    goto _1_OBF_FUNC_lab68;
  _1_OBF_FUNC_lab98:
    binaryNumber[i] = (int)(quotient % 2L);
    goto _1_OBF_FUNC_lab104;
  _1_OBF_FUNC_lab2:
    printf("%d", binaryNumber[j]);
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab107:;
    if (__RANDVAR__22016335698269916547__ < (n - n) * (__RANDVAR__22016335698269916547__ * 109)) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab81;
    }
  _1_OBF_FUNC_lab53:
    __RANDVAR__75417025102397281826__ = 16392820;
    goto _1_OBF_FUNC_lab57;
  _1_OBF_FUNC_lab57:
    quotient /= 2L;
    goto _1_OBF_FUNC_lab105;
  _1_OBF_FUNC_lab105:
    __RANDVAR__75417025102397281826__ += 97;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab47:
    __RANDVAR__83662693170526541179__ -= 326;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab123:
    __RANDVAR__33686580110020263796__ = 3864 - n;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab77:;
    if (j > 0) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab136:
    __RANDVAR__62726086403789773440__ += 315;
    goto _1_OBF_FUNC_lab62;
  _1_OBF_FUNC_lab124:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab141:
    __RANDVAR__71034801555536747864__ = __RANDVAR__62726086403789773440__;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab86:
    quotient /= 2L;
    goto _1_OBF_FUNC_lab116;
  _1_OBF_FUNC_lab5:
    __RANDVAR__99254390282696255021__ += 304;
    goto _1_OBF_FUNC_lab124;
  _1_OBF_FUNC_lab50:
    __RANDVAR__92937321949968116818__ = 835;
    goto _1_OBF_FUNC_lab82;
  _1_OBF_FUNC_lab132:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab52;
  _1_OBF_FUNC_lab4:
    __RANDVAR__76996405264703952775__ = 598;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab26:
    decimal = (long)n;
    goto _1_OBF_FUNC_lab79;
  _1_OBF_FUNC_lab84:
    __RANDVAR__62726086403789773440__ = 865 + (510 + n);
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab82:
    printf("%d", binaryNumber[j]);
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab117:;
    if (n < 340) {
      goto _1_OBF_FUNC_lab74;
    } else {
      goto _1_OBF_FUNC_lab136;
    }
  _1_OBF_FUNC_lab45:;
    if (j > 0) {
      goto _1_OBF_FUNC_lab101;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab43:
    n += 814;
    goto _1_OBF_FUNC_lab139;
  _1_OBF_FUNC_lab92:
    __RANDVAR__86225897939797554118__ = __RANDVAR__99254390282696255021__;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab44:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab142;
    } else {
      goto _1_OBF_FUNC_lab140;
    }
  _1_OBF_FUNC_lab28:
    n -= 303;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab104:
    quotient /= 2L;
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab41:
    __RANDVAR__13537820146958631845__ += 140;
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab46:;
    if (__RANDVAR__99254390282696255021__ < __RANDVAR__22016335698269916547__) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab119;
    }
  _1_OBF_FUNC_lab131:
    __RANDVAR__53454175931409854185__ = __RANDVAR__13537820146958631845__;
    goto _1_OBF_FUNC_lab72;
  _1_OBF_FUNC_lab11:
    quotient /= 2L;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab30:
    n -= 403;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab93:
    __RANDVAR__22016335698269916547__ = 474;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab118:
    __RANDVAR__99254390282696255021__ -= 304;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab3:;
    if (n < 25) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab96;
    }
  _1_OBF_FUNC_lab51:
    __RANDVAR__99254390282696255021__ -= 464;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab62:
    __RANDVAR__62726086403789773440__ -= 315;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab70:
    __RANDVAR__22016335698269916547__ += 52;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab128:
    __RANDVAR__12524984542887848581__ = __RANDVAR__22016335698269916547__;
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab79:
    quotient = decimal;
    goto _1_OBF_FUNC_lab102;
  _1_OBF_FUNC_lab80:
    __RANDVAR__99254390282696255021__ -= 525;
    goto _1_OBF_FUNC_lab99;
  _1_OBF_FUNC_lab60:
    n -= 747;
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab91:
    __RANDVAR__5216018679659671048__ = 636;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab67:;
    if ((__RANDVAR__65319938451792242557__ + 431) - (n + __RANDVAR__22016335698269916547__) < 615) {
      goto _1_OBF_FUNC_lab71;
    } else {
      goto _1_OBF_FUNC_lab91;
    }
  _1_OBF_FUNC_lab74:
    __RANDVAR__97224410901483773702__ = 437;
    goto _1_OBF_FUNC_lab32;
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:goto
