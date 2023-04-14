typedef void *__builtin_va_list;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_rwlockattr_t_145707745;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct_ldiv_t_790849867;
union __anonunion____missing_field_name_868236017;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_internal_slist;
struct random_data;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion____missing_field_name_124538119;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___g1_start32_961093919;
struct __anonstruct___wseq32_961093918;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __pthread_internal_list;
struct timeval;
struct drand48_data;
struct __anonstruct_fd_set_356711149;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct_lldiv_t_103911545;
union pthread_attr_t;
enum __anonenum_idtype_t_558242672;
struct __pthread_mutex_s;
struct __pthread_cond_s;
struct timespec;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_mutex_t_335460617;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_1 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern long(a64l)(char const *__s);
typedef __uint64_t u_int64_t;
extern void(abort)(void);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
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
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
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
typedef __int16_t __int_least16_t;
typedef __loff_t loff_t;
extern int(abs)(int __x);
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern void(srand)(unsigned int __seed);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
typedef unsigned long __rlim64_t;
typedef __int32_t __int_least32_t;
typedef long __blkcnt64_t;
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
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
extern int(atexit)(void (*__func)(void));
typedef __u_quad_t u_quad_t;
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_StructureType;
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_868236017 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
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
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern char *(mkdtemp)(char *__template);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
extern double(atof)(char const *__nptr);
typedef __sigset_t sigset_t;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_124538119 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_868236017 __annonCompField1;
  union __anonunion____missing_field_name_124538119 __annonCompField2;
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
typedef unsigned int __socklen_t;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
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
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_1 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
unsigned long _2_entropy = 211964836272449929UL;
typedef __uint64_t __uint_least64_t;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __int64_t __int_least64_t;
typedef __suseconds_t suseconds_t;
typedef __int8_t int8_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
void partition(int *arr, int low, int high);
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
typedef unsigned long __fsfilcnt64_t;
extern int(mblen)(char const *__s, size_t __n);
unsigned long _2_alwaysZero = 0;
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef __fsid_t fsid_t;
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
typedef __uint32_t __uint_least32_t;
extern int(rpmatch)(char const *__response);
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef long __intmax_t;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
void OBF_FUNC(int *arr, int low, int mid, int high);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
typedef long __fsword_t;
extern void(quick_exit)(int __status);
typedef __uint8_t u_int8_t;
typedef __u_short u_short;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
extern void(srandom)(unsigned int __seed);
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
typedef unsigned short ushort;
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int main(int argc, char **argv, char **_formal_envp) {
  int merge[10];
  int i;
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
    if (argc < 11) {
      return (1);
    }
    i = 1;
    while (i < argc) {
      merge[i - 1] = (int)*(*(argv + i) + 0);
      i++;
    }
    partition(merge, 0, argc - 1);
    printf("After merge sorting elements are: ");
    i = 0;
    while (i < argc - 1) {
      printf("%d ", merge[i]);
      i++;
    }
    return (0);
  }
}
void OBF_FUNC(int *arr, int low, int mid, int high) {
  int __RANDVAR__89678782067096980928__;
  int i;
  int m;
  int k;
  int l;
  int temp[50];
  int __RANDVAR__54914665528997966263__;
  int __RANDVAR__5169227141550593527__;
  int __RANDVAR__94925783497953165633__;
  int __RANDVAR__5126661176362711180__;
  int __RANDVAR__23309556352370878457__;
  int __RANDVAR__99794141606431064193__;
  int __RANDVAR__3202825435422192874__;
  int __RANDVAR__328100731344449346__;
  int __RANDVAR__11685802207379587137__;
  int __RANDVAR__358208460737263557__;
  int __RANDVAR__88506793493739248869__;
  int __RANDVAR__5126661176362711180_____0;
  int __RANDVAR__23309556352370878457_____0;
  int __RANDVAR__99794141606431064193_____0;
  int __RANDVAR__3202825435422192874_____0;
  int __RANDVAR__328100731344449346_____0;
  int __RANDVAR__11685802207379587137_____0;
  int __RANDVAR__358208460737263557_____0;
  int __RANDVAR__88506793493739248869_____0;
  int __RANDVAR__5126661176362711180_____1;
  int __RANDVAR__23309556352370878457_____1;
  int __RANDVAR__99794141606431064193_____1;
  int __RANDVAR__3202825435422192874_____1;
  int __RANDVAR__328100731344449346_____1;
  int __RANDVAR__11685802207379587137_____1;
  int __RANDVAR__358208460737263557_____1;
  int __RANDVAR__88506793493739248869_____1;
  int __RANDVAR__5126661176362711180_____2;
  int __RANDVAR__23309556352370878457_____2;
  int __RANDVAR__99794141606431064193_____2;
  int __RANDVAR__3202825435422192874_____2;
  int __RANDVAR__328100731344449346_____2;
  int __RANDVAR__11685802207379587137_____2;
  int __RANDVAR__358208460737263557_____2;
  int __RANDVAR__88506793493739248869_____2;
  int __RANDVAR__5126661176362711180_____3;
  int __RANDVAR__23309556352370878457_____3;
  int __RANDVAR__99794141606431064193_____3;
  int __RANDVAR__3202825435422192874_____3;
  int __RANDVAR__328100731344449346_____3;
  int __RANDVAR__11685802207379587137_____3;
  int __RANDVAR__358208460737263557_____3;
  int __RANDVAR__88506793493739248869_____3;
  int __RANDVAR__5126661176362711180_____4;
  int __RANDVAR__23309556352370878457_____4;
  int __RANDVAR__99794141606431064193_____4;
  int __RANDVAR__3202825435422192874_____4;
  int __RANDVAR__328100731344449346_____4;
  int __RANDVAR__11685802207379587137_____4;
  int __RANDVAR__358208460737263557_____4;
  int __RANDVAR__88506793493739248869_____4;
  int __RANDVAR__99085224383117373259__;
  int __RANDVAR__17639463298891173250__;
  int __RANDVAR__59273179398705919442__;
  int __RANDVAR__33026398424492960705__;
  int __RANDVAR__56985873232760792956__;
  int __RANDVAR__8707086783912817515__;
  int __RANDVAR__8707086783912817515_____0;
  int __RANDVAR__8707086783912817515_____1;
  int __RANDVAR__8707086783912817515_____2;
  int __RANDVAR__8707086783912817515_____3;
  int __RANDVAR__8707086783912817515_____4;
  int __RANDVAR__46419702897697311721__;
  int __RANDVAR__98396114551868796724__;
  int __RANDVAR__78771215408798790389__;
  int __RANDVAR__57585198453820852246__;
  int __RANDVAR__98396114551868796724_____0;
  int __RANDVAR__78771215408798790389_____0;
  int __RANDVAR__57585198453820852246_____0;
  int __RANDVAR__98396114551868796724_____1;
  int __RANDVAR__78771215408798790389_____1;
  int __RANDVAR__57585198453820852246_____1;
  int __RANDVAR__98396114551868796724_____2;
  int __RANDVAR__78771215408798790389_____2;
  int __RANDVAR__57585198453820852246_____2;
  int __RANDVAR__98396114551868796724_____3;
  int __RANDVAR__78771215408798790389_____3;
  int __RANDVAR__57585198453820852246_____3;
  int __RANDVAR__98396114551868796724_____4;
  int __RANDVAR__78771215408798790389_____4;
  int __RANDVAR__57585198453820852246_____4;
  int __RANDVAR__93495518340998466425__;
  int __RANDVAR__41961020579523180111__;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p95;
  int i96;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p97;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p101;
  int i102;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p103;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p101 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p101->next = p101;
      p101->prev = p101;
      _3_OBF_FUNC_2_opaque_list_1 = p101;
      i102 = 0;
      while (i102 < 2) {
        p103 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p103->data = i102 * ((_2_entropy | 4) + (_2_entropy & 4));
        p103->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p103->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p103;
        _3_OBF_FUNC_2_opaque_list_1->next = p103;
        i102++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p95 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p95->next = p95;
      p95->prev = p95;
      _3_OBF_FUNC_1_opaque_list_1 = p95;
      i96 = 0;
      while (i96 < 2) {
        p97 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p97->data = i96 * ((_2_entropy & ~9) - (~_2_entropy & 9));
        p97->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p97->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p97;
        _3_OBF_FUNC_1_opaque_list_1->next = p97;
        i96++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 174UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 239:
        __RANDVAR__11685802207379587137_____1 = 998;
        _1_OBF_FUNC_next = 14UL;
        break;
      case 182:
        __RANDVAR__5169227141550593527__ = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 280UL;
        break;
      case 318:
        __RANDVAR__3202825435422192874_____2 = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 18:
        __RANDVAR__11685802207379587137_____4 = 998;
        _1_OBF_FUNC_next = 323UL;
        break;
      case 50:
        __RANDVAR__5169227141550593527__ -= 554;
        _1_OBF_FUNC_next = 80UL;
        break;
      case 80:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 76UL;
        break;
      case 301:
        __RANDVAR__93495518340998466425__ = low;
        _1_OBF_FUNC_next = 328UL;
        break;
      case 104:
        k++;
        _1_OBF_FUNC_next = 33UL;
        break;
      case 302:
        l = low;
        _1_OBF_FUNC_next = 42UL;
        break;
      case 188:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 186UL;
        break;
      case 4:
        __RANDVAR__78771215408798790389_____4 = 468;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 219:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 181UL;
        }
        break;
      case 258:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 199UL;
        break;
      case 103:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 204UL;
        } else {
          _1_OBF_FUNC_next = 59UL;
        }
        break;
      case 189:
        __RANDVAR__8707086783912817515_____2 = 13;
        _1_OBF_FUNC_next = 130UL;
        break;
      case 102:
        k++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 272:
        __RANDVAR__11685802207379587137__ = 998;
        _1_OBF_FUNC_next = 34UL;
        break;
      case 145:
        __RANDVAR__98396114551868796724_____0++;
        _1_OBF_FUNC_next = 256UL;
        break;
      case 15:
        k++;
        _1_OBF_FUNC_next = 60UL;
        break;
      case 221:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 275UL;
        break;
      case 180:
        __RANDVAR__33026398424492960705__ = 566;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 275:
        low -= 598;
        _1_OBF_FUNC_next = 194UL;
        break;
      case 121:;
        if (mid < high) {
          _1_OBF_FUNC_next = 55UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        break;
      case 141:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 249UL;
        break;
      case 216:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 157UL;
        break;
      case 168:
        __RANDVAR__11685802207379587137_____0 = 998;
        _1_OBF_FUNC_next = 113UL;
        break;
      case 152:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 277UL;
        break;
      case 8:
        k = l;
        _1_OBF_FUNC_next = 74UL;
        break;
      case 160:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 204:
        __RANDVAR__358208460737263557_____3 = 946;
        _1_OBF_FUNC_next = 125UL;
        break;
      case 235:
        __RANDVAR__59273179398705919442__ = __RANDVAR__89678782067096980928__;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 246:
        __RANDVAR__78771215408798790389_____2 = 468;
        _1_OBF_FUNC_next = 324UL;
        break;
      case 195:;
        if (756 - __RANDVAR__5126661176362711180__ < 387) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 237UL;
        }
        break;
      case 54:;
        if (k <= high) {
          _1_OBF_FUNC_next = 73UL;
        } else {
          _1_OBF_FUNC_next = 190UL;
        }
        break;
      case 305:
        m++;
        _1_OBF_FUNC_next = 298UL;
        break;
      case 124:
        __RANDVAR__3202825435422192874_____1 = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 222UL;
        break;
      case 140:;
        if (m <= high) {
          _1_OBF_FUNC_next = 273UL;
        } else {
          _1_OBF_FUNC_next = 267UL;
        }
        break;
      case 1:
        __RANDVAR__328100731344449346_____2 = 494;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 77:
        __RANDVAR__99794141606431064193_____1 = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 222UL;
        break;
      case 242:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 78UL;
        break;
      case 159:
        __RANDVAR__5169227141550593527__ -= 554;
        _1_OBF_FUNC_next = 68UL;
        break;
      case 3:
        __RANDVAR__78771215408798790389__ = 468;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 16:
        __RANDVAR__23309556352370878457_____1 = mid;
        _1_OBF_FUNC_next = 88UL;
        break;
      case 21:
        __RANDVAR__8707086783912817515_____0 = 13;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 36:;
        if (__RANDVAR__41961020579523180111__ == 0) {
          _1_OBF_FUNC_next = 54UL;
        } else {
          _1_OBF_FUNC_next = 193UL;
        }
        break;
      case 131:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 223UL;
        break;
      case 231:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 119UL;
        } else {
          _1_OBF_FUNC_next = 105UL;
        }
        break;
      case 68:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 28UL;
        break;
      case 213:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 101UL;
        break;
      case 323:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 27UL;
        } else {
          _1_OBF_FUNC_next = 39UL;
        }
        break;
      case 181:
        __RANDVAR__5169227141550593527__ -= 554;
        _1_OBF_FUNC_next = 117UL;
        break;
      case 237:
        __RANDVAR__328100731344449346__ = 494;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 306:
        k++;
        _1_OBF_FUNC_next = 234UL;
        break;
      case 85:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 240UL;
        } else {
          _1_OBF_FUNC_next = 229UL;
        }
        break;
      case 100:
        __RANDVAR__328100731344449346_____3 = 494;
        _1_OBF_FUNC_next = 46UL;
        break;
      case 26:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 296UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 105:
        __RANDVAR__5126661176362711180_____4 = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 178UL;
        break;
      case 296:;
        if (m <= high) {
          _1_OBF_FUNC_next = 166UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 225:
        __RANDVAR__88506793493739248869_____1 = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 236UL;
        break;
      case 247:
        __RANDVAR__99794141606431064193_____0 = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 321UL;
        break;
      case 135:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 264UL;
        }
        break;
      case 63:
        low -= 598;
        _1_OBF_FUNC_next = 214UL;
        break;
      case 279:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 247UL;
        } else {
          _1_OBF_FUNC_next = 147UL;
        }
        break;
      case 307:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 109UL;
        break;
      case 176:
        __RANDVAR__94925783497953165633__ = 0;
        _1_OBF_FUNC_next = 259UL;
        break;
      case 186:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 243UL;
        break;
      case 297:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 146UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 192:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 22UL;
        break;
      case 211:;
        if (756 - __RANDVAR__5126661176362711180_____0 < 387) {
          _1_OBF_FUNC_next = 224UL;
        } else {
          _1_OBF_FUNC_next = 154UL;
        }
        break;
      case 259:;
        if (__RANDVAR__94925783497953165633__ == 0) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 38UL;
        }
        break;
      case 271:
        i++;
        _1_OBF_FUNC_next = 303UL;
        break;
      case 125:
        i++;
        _1_OBF_FUNC_next = 84UL;
        break;
      case 320:
        k++;
        _1_OBF_FUNC_next = 190UL;
        break;
      case 143:
        k = m;
        _1_OBF_FUNC_next = 40UL;
        break;
      case 19:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 32:
        __RANDVAR__8707086783912817515_____4 = 13;
        _1_OBF_FUNC_next = 28UL;
        break;
      case 227:
        k++;
        _1_OBF_FUNC_next = 60UL;
        break;
      case 17:
        i++;
        _1_OBF_FUNC_next = 151UL;
        break;
      case 172:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 85UL;
        break;
      case 228:;
        if (__RANDVAR__46419702897697311721__ == 0) {
          _1_OBF_FUNC_next = 163UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 226:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 121UL;
        break;
      case 313:
        __RANDVAR__5126661176362711180__ = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 195UL;
        break;
      case 199:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 32UL;
        } else {
          _1_OBF_FUNC_next = 159UL;
        }
        break;
      case 264:
        __RANDVAR__5126661176362711180_____0 = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 211UL;
        break;
      case 269:
        __RANDVAR__8707086783912817515_____1 = 13;
        _1_OBF_FUNC_next = 215UL;
        break;
      case 295:
        __RANDVAR__78771215408798790389_____1 = 468;
        _1_OBF_FUNC_next = 277UL;
        break;
      case 117:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 130UL;
        break;
      case 208:;
        if (k <= high) {
          _1_OBF_FUNC_next = 242UL;
        } else {
          _1_OBF_FUNC_next = 43UL;
        }
        break;
      case 328:
        __RANDVAR__41961020579523180111__ = 0;
        _1_OBF_FUNC_next = 36UL;
        break;
      case 60:;
        if (k <= high) {
          _1_OBF_FUNC_next = 133UL;
        } else {
          _1_OBF_FUNC_next = 202UL;
        }
        break;
      case 150:
        __RANDVAR__23309556352370878457_____2 = mid;
        _1_OBF_FUNC_next = 245UL;
        break;
      case 187:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 45UL;
        } else {
          _1_OBF_FUNC_next = 285UL;
        }
        break;
      case 244:;
        if (k <= high) {
          _1_OBF_FUNC_next = 25UL;
        } else {
          _1_OBF_FUNC_next = 207UL;
        }
        break;
      case 161:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 10UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 142:
        __RANDVAR__3202825435422192874__ = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 144:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 269UL;
        } else {
          _1_OBF_FUNC_next = 107UL;
        }
        break;
      case 137:
        l++;
        _1_OBF_FUNC_next = 298UL;
        break;
      case 262:
        __RANDVAR__23309556352370878457_____4 = mid;
        _1_OBF_FUNC_next = 96UL;
        break;
      case 27:
        __RANDVAR__358208460737263557_____4 = 946;
        _1_OBF_FUNC_next = 271UL;
        break;
      case 243:
        k++;
        _1_OBF_FUNC_next = 111UL;
        break;
      case 157:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 86UL;
        }
        break;
      case 194:
        low += 598;
        _1_OBF_FUNC_next = 164UL;
        break;
      case 289:
        m++;
        _1_OBF_FUNC_next = 155UL;
        break;
      case 212:
        m++;
        _1_OBF_FUNC_next = 168UL;
        break;
      case 319:
        __RANDVAR__98396114551868796724__++;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 87:;
        if (m <= high) {
          _1_OBF_FUNC_next = 114UL;
        } else {
          _1_OBF_FUNC_next = 84UL;
        }
        break;
      case 84:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 171UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 183:
        __RANDVAR__23309556352370878457__ = mid;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 171:;
        if (m <= high) {
          _1_OBF_FUNC_next = 231UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 34:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 132UL;
        } else {
          _1_OBF_FUNC_next = 270UL;
        }
        break;
      case 274:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 139UL;
        } else {
          _1_OBF_FUNC_next = 206UL;
        }
        break;
      case 251:
        k++;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 169:
        __RANDVAR__5126661176362711180_____2 = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 123UL;
        break;
      case 281:
        __RANDVAR__98396114551868796724_____1++;
        _1_OBF_FUNC_next = 277UL;
        break;
      case 127:;
        if (m <= high) {
          _1_OBF_FUNC_next = 203UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 317:
        k++;
        _1_OBF_FUNC_next = 153UL;
        break;
      case 22:;
        if (mid < high) {
          _1_OBF_FUNC_next = 290UL;
        } else {
          _1_OBF_FUNC_next = 246UL;
        }
        break;
      case 215:
        i++;
        _1_OBF_FUNC_next = 283UL;
        break;
      case 222:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 20UL;
        break;
      case 286:;
        if (k <= high) {
          _1_OBF_FUNC_next = 172UL;
        } else {
          _1_OBF_FUNC_next = 111UL;
        }
        break;
      case 298:
        __RANDVAR__11685802207379587137_____3 = 998;
        _1_OBF_FUNC_next = 103UL;
        break;
      case 28:
        i++;
        _1_OBF_FUNC_next = 29UL;
        break;
      case 148:;
        if (mid < high) {
          _1_OBF_FUNC_next = 161UL;
        } else {
          _1_OBF_FUNC_next = 327UL;
        }
        break;
      case 280:
        m = mid + 1;
        _1_OBF_FUNC_next = 176UL;
        break;
      case 325:
        __RANDVAR__5126661176362711180_____1 = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 248UL;
        break;
      case 44:
        __RANDVAR__78771215408798790389_____0 = 468;
        _1_OBF_FUNC_next = 256UL;
        break;
      case 5:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 260UL;
        break;
      case 120:
        __RANDVAR__17639463298891173250__ = (__RANDVAR__89678782067096980928__ * mid) * (__RANDVAR__54914665528997966263__ * 162);
        _1_OBF_FUNC_next = 265UL;
        break;
      case 184:
        i++;
        _1_OBF_FUNC_next = 185UL;
        break;
      case 162:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 134UL;
        break;
      case 72:
        __RANDVAR__88506793493739248869_____0 = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 184UL;
        break;
      case 261:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 112UL;
        } else {
          _1_OBF_FUNC_next = 319UL;
        }
        break;
      case 33:;
        if (k <= high) {
          _1_OBF_FUNC_next = 138UL;
        } else {
          _1_OBF_FUNC_next = 60UL;
        }
        break;
      case 64:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 292:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 232UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 93:
        k = low;
        _1_OBF_FUNC_next = 301UL;
        break;
      case 119:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 266UL;
        break;
      case 175:
        __RANDVAR__23309556352370878457_____3 = mid;
        _1_OBF_FUNC_next = 314UL;
        break;
      case 276:
        high += 827;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 233:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 118UL;
        break;
      case 92:
        __RANDVAR__98396114551868796724_____2++;
        _1_OBF_FUNC_next = 324UL;
        break;
      case 309:
        k++;
        _1_OBF_FUNC_next = 70UL;
        break;
      case 10:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 19UL;
        break;
      case 0:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 51UL;
        break;
      case 224:
        __RANDVAR__23309556352370878457_____0 = mid;
        _1_OBF_FUNC_next = 279UL;
        break;
      case 136:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 129UL;
        break;
      case 254:
        __RANDVAR__5126661176362711180_____3 = mid + (__RANDVAR__89678782067096980928__ - 722);
        _1_OBF_FUNC_next = 197UL;
        break;
      case 153:;
        if (k <= high) {
          _1_OBF_FUNC_next = 5UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 39:
        __RANDVAR__88506793493739248869_____4 = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 271UL;
        break;
      case 207:;
        if (k <= high) {
          _1_OBF_FUNC_next = 12UL;
        } else {
          _1_OBF_FUNC_next = 153UL;
        }
        break;
      case 7:
        high -= 827;
        _1_OBF_FUNC_next = 276UL;
        break;
      case 88:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 77UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 174:
        __RANDVAR__89678782067096980928__ = 268488240;
        _1_OBF_FUNC_next = 177UL;
        break;
      case 126:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 288UL;
        break;
      case 179:
        __RANDVAR__99794141606431064193_____2 = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 136UL;
        break;
      case 20:
        low -= 598;
        _1_OBF_FUNC_next = 196UL;
        break;
      case 315:
        low += 598;
        _1_OBF_FUNC_next = 305UL;
        break;
      case 294:
        __RANDVAR__358208460737263557_____0 = 946;
        _1_OBF_FUNC_next = 184UL;
        break;
      case 129:
        low -= 598;
        _1_OBF_FUNC_next = 31UL;
        break;
      case 108:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 90UL;
        break;
      case 166:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 13UL;
        } else {
          _1_OBF_FUNC_next = 313UL;
        }
        break;
      case 130:
        i++;
        _1_OBF_FUNC_next = 131UL;
        break;
      case 310:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 141UL;
        } else {
          _1_OBF_FUNC_next = 169UL;
        }
        break;
      case 25:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 91UL;
        break;
      case 49:
        i++;
        _1_OBF_FUNC_next = 47UL;
        break;
      case 52:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 106UL;
        break;
      case 30:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 217UL;
        } else {
          _1_OBF_FUNC_next = 281UL;
        }
        break;
      case 62:;
        if (l > mid) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 8UL;
        }
        break;
      case 185:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 106:;
        if (mid < high) {
          _1_OBF_FUNC_next = 261UL;
        } else {
          _1_OBF_FUNC_next = 3UL;
        }
        break;
      case 206:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 61UL;
        } else {
          _1_OBF_FUNC_next = 299UL;
        }
        break;
      case 14:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 128UL;
        } else {
          _1_OBF_FUNC_next = 225UL;
        }
        break;
      case 111:;
        if (k <= high) {
          _1_OBF_FUNC_next = 216UL;
        } else {
          _1_OBF_FUNC_next = 33UL;
        }
        break;
      case 266:
        l++;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 277:
        i++;
        _1_OBF_FUNC_next = 83UL;
        break;
      case 82:
        m++;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 133:;
        if (k <= high) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 208UL;
        }
        break;
      case 89:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 15UL;
        break;
      case 56:;
        if (k <= high) {
          _1_OBF_FUNC_next = 244UL;
        } else {
          _1_OBF_FUNC_next = 95UL;
        }
        break;
      case 79:
        i++;
        _1_OBF_FUNC_next = 149UL;
        break;
      case 217:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 152UL;
        break;
      case 270:
        __RANDVAR__88506793493739248869__ = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 167UL;
        break;
      case 164:
        m++;
        _1_OBF_FUNC_next = 272UL;
        break;
      case 31:
        low += 598;
        _1_OBF_FUNC_next = 289UL;
        break;
      case 12:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 317UL;
        break;
      case 101:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 173UL;
        break;
      case 209:;
        if (mid < high) {
          _1_OBF_FUNC_next = 287UL;
        } else {
          _1_OBF_FUNC_next = 4UL;
        }
        break;
      case 201:
        low -= 598;
        _1_OBF_FUNC_next = 315UL;
        break;
      case 203:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 233UL;
        } else {
          _1_OBF_FUNC_next = 325UL;
        }
        break;
      case 96:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 268UL;
        } else {
          _1_OBF_FUNC_next = 257UL;
        }
        break;
      case 288:
        k++;
        _1_OBF_FUNC_next = 253UL;
        break;
      case 45:
        __RANDVAR__358208460737263557_____2 = 946;
        _1_OBF_FUNC_next = 23UL;
        break;
      case 78:;
        if (__RANDVAR__89678782067096980928__ < 502) {
          _1_OBF_FUNC_next = 304UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 118:
        l++;
        _1_OBF_FUNC_next = 239UL;
        break;
      case 303:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 267UL;
        }
        break;
      case 81:
        __RANDVAR__57585198453820852246_____2 = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 128:
        __RANDVAR__358208460737263557_____1 = 946;
        _1_OBF_FUNC_next = 236UL;
        break;
      case 236:
        i++;
        _1_OBF_FUNC_next = 303UL;
        break;
      case 23:
        i++;
        _1_OBF_FUNC_next = 2UL;
        break;
      case 285:
        __RANDVAR__88506793493739248869_____2 = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 23UL;
        break;
      case 273:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 48UL;
        } else {
          _1_OBF_FUNC_next = 2UL;
        }
        break;
      case 70:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 206UL;
        }
        break;
      case 134:;
        if (mid < high) {
          _1_OBF_FUNC_next = 30UL;
        } else {
          _1_OBF_FUNC_next = 295UL;
        }
        break;
      case 24:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 9UL;
        break;
      case 94:
        __RANDVAR__89678782067096980928__ -= 524;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 109:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 190:;
        if (k <= high) {
          _1_OBF_FUNC_next = 126UL;
        } else {
          _1_OBF_FUNC_next = 253UL;
        }
        break;
      case 167:
        i++;
        _1_OBF_FUNC_next = 11UL;
        break;
      case 76:
        i++;
        _1_OBF_FUNC_next = 213UL;
        break;
      case 197:;
        if (756 - __RANDVAR__5126661176362711180_____3 < 387) {
          _1_OBF_FUNC_next = 175UL;
        } else {
          _1_OBF_FUNC_next = 100UL;
        }
        break;
      case 245:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 179UL;
        } else {
          _1_OBF_FUNC_next = 318UL;
        }
        break;
      case 57:
        __RANDVAR__54914665528997966263__ += 154;
        _1_OBF_FUNC_next = 116UL;
        break;
      case 156:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 311UL;
        break;
      case 257:
        __RANDVAR__3202825435422192874_____4 = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 299:
        __RANDVAR__46419702897697311721__ = 1;
        _1_OBF_FUNC_next = 228UL;
        break;
      case 98:
        __RANDVAR__3202825435422192874_____3 = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 46UL;
        break;
      case 214:
        low += 598;
        _1_OBF_FUNC_next = 212UL;
        break;
      case 11:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 220UL;
        } else {
          _1_OBF_FUNC_next = 185UL;
        }
        break;
      case 202:
        __RANDVAR__56985873232760792956__ = 1;
        _1_OBF_FUNC_next = 316UL;
        break;
      case 9:
        low -= 598;
        _1_OBF_FUNC_next = 278UL;
        break;
      case 13:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 312UL;
        break;
      case 220:;
        if (m <= high) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 185UL;
        }
        break;
      case 51:
        l++;
        _1_OBF_FUNC_next = 168UL;
        break;
      case 107:
        __RANDVAR__5169227141550593527__ -= 554;
        if ((((_2_alwaysZero & (((_2_entropy + 4) + 1UL) + ((-_2_entropy - 1UL) | (-4 - 1UL)))) * (_2_alwaysZero | (((_2_entropy + 4) + 1UL) + ((-_2_entropy - 1UL) | (-4 - 1UL)))) + (_2_alwaysZero & ~(((_2_entropy + 4) + 1UL) + ((-_2_entropy - 1UL) | (-4 - 1UL)))) * (~_2_alwaysZero & (((_2_entropy + 4) + 1UL) + ((-_2_entropy - 1UL) | (-4 - 1UL))))) - ~0) - 1UL) {
        } else {
          _1_OBF_FUNC_next = 58UL;
        }
        break;
      case 312:
        l++;
        _1_OBF_FUNC_next = 272UL;
        break;
      case 146:
        __RANDVAR__99794141606431064193__ = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 221UL;
        break;
      case 249:
        l++;
        _1_OBF_FUNC_next = 155UL;
        {
          if (_3_OBF_FUNC_2_opaque_ptr_1 == _3_OBF_FUNC_2_opaque_ptr_2) {
            break;
          } else {
          }
        }
      case 316:;
        if (__RANDVAR__56985873232760792956__ == 0) {
          _1_OBF_FUNC_next = 286UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 304:
        __RANDVAR__8707086783912817515_____3 = 13;
        _1_OBF_FUNC_next = 76UL;
        break;
      case 90:
        i++;
        _1_OBF_FUNC_next = 188UL;
        break;
      case 322:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 227UL;
        break;
      case 268:
        __RANDVAR__99794141606431064193_____4 = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 24UL;
        break;
      case 40:
        __RANDVAR__56985873232760792956__ = 0;
        _1_OBF_FUNC_next = 316UL;
        break;
      case 67:
        __RANDVAR__99794141606431064193_____3 = 423 + (__RANDVAR__89678782067096980928__ - 192);
        _1_OBF_FUNC_next = 46UL;
        break;
      case 55:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 156UL;
        } else {
          _1_OBF_FUNC_next = 145UL;
        }
        break;
      case 132:
        __RANDVAR__358208460737263557__ = 946;
        _1_OBF_FUNC_next = 167UL;
        break;
      case 110:
        __RANDVAR__54914665528997966263__ = (20 - __RANDVAR__54914665528997966263__) + (856 - __RANDVAR__89678782067096980928__);
        _1_OBF_FUNC_next = 302UL;
        break;
      case 193:;
        return;
        break;
      case 59:
        __RANDVAR__88506793493739248869_____3 = 194711 + (438 - mid);
        _1_OBF_FUNC_next = 125UL;
        break;
      case 165:
        i++;
        _1_OBF_FUNC_next = 230UL;
        break;
      case 321:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 63UL;
        break;
      case 196:
        low += 598;
        _1_OBF_FUNC_next = 218UL;
        break;
      case 223:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 251UL;
        break;
      case 314:;
        if (__RANDVAR__54914665528997966263__ < 666) {
          _1_OBF_FUNC_next = 67UL;
        } else {
          _1_OBF_FUNC_next = 98UL;
        }
        break;
      case 6:
        __RANDVAR__328100731344449346_____4 = 494;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 155:
        __RANDVAR__11685802207379587137_____2 = 998;
        _1_OBF_FUNC_next = 187UL;
        break;
      case 116:
        __RANDVAR__54914665528997966263__ -= 154;
        _1_OBF_FUNC_next = 62UL;
        break;
      case 154:
        __RANDVAR__328100731344449346_____0 = 494;
        _1_OBF_FUNC_next = 321UL;
        break;
      case 151:
        __RANDVAR__57585198453820852246__ = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 306UL;
        break;
      case 38:;
        if (high < 36) {
          _1_OBF_FUNC_next = 97UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 61:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 292UL;
        }
        break;
      case 158:
        k++;
        _1_OBF_FUNC_next = 206UL;
        break;
      case 113:;
        if (__RANDVAR__54914665528997966263__ < high) {
          _1_OBF_FUNC_next = 294UL;
        } else {
          _1_OBF_FUNC_next = 72UL;
        }
        break;
      case 138:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 144UL;
        break;
      case 256:
        i++;
        _1_OBF_FUNC_next = 191UL;
        break;
      case 278:
        low += 598;
        _1_OBF_FUNC_next = 82UL;
        break;
      case 58:
        __RANDVAR__5169227141550593527__ += 554;
        _1_OBF_FUNC_next = 215UL;
        break;
      case 74:
        __RANDVAR__46419702897697311721__ = 0;
        _1_OBF_FUNC_next = 228UL;
        break;
      case 112:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 160UL;
        break;
      case 178:;
        if (756 - __RANDVAR__5126661176362711180_____4 < 387) {
          _1_OBF_FUNC_next = 262UL;
        } else {
          _1_OBF_FUNC_next = 6UL;
        }
        break;
      case 75:
        k++;
        _1_OBF_FUNC_next = 206UL;
        break;
      case 123:;
        if (756 - __RANDVAR__5126661176362711180_____2 < 387) {
          _1_OBF_FUNC_next = 150UL;
        } else {
          _1_OBF_FUNC_next = 1UL;
        }
        break;
      case 267:
        __RANDVAR__94925783497953165633__ = 1;
        _1_OBF_FUNC_next = 259UL;
        break;
      case 48:;
        if (m <= high) {
          _1_OBF_FUNC_next = 310UL;
        } else {
          _1_OBF_FUNC_next = 2UL;
        }
        break;
      case 139:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 209UL;
        break;
      case 147:
        __RANDVAR__3202825435422192874_____0 = __RANDVAR__54914665528997966263__;
        _1_OBF_FUNC_next = 321UL;
        break;
      case 71:
        k++;
        _1_OBF_FUNC_next = 274UL;
        break;
      case 234:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 226UL;
        } else {
          _1_OBF_FUNC_next = 70UL;
        }
        break;
      case 173:
        k++;
        _1_OBF_FUNC_next = 43UL;
        break;
      case 293:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 102UL;
        break;
      case 260:
        k++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 53:
        __RANDVAR__98396114551868796724_____4++;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 240:
        __RANDVAR__8707086783912817515__ = 13;
        _1_OBF_FUNC_next = 90UL;
        break;
      case 191:
        __RANDVAR__57585198453820852246_____0 = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 309UL;
        break;
      case 218:
        m++;
        _1_OBF_FUNC_next = 239UL;
        break;
      case 311:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 256UL;
        break;
      case 47:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 198UL;
        break;
      case 73:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 320UL;
        break;
      case 91:
        k++;
        _1_OBF_FUNC_next = 207UL;
        break;
      case 282:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 137UL;
        break;
      case 97:
        __RANDVAR__99085224383117373259__ = 443;
        _1_OBF_FUNC_next = 62UL;
        break;
      case 163:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 52UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 230:
        __RANDVAR__57585198453820852246_____3 = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 71UL;
        break;
      case 99:
        __RANDVAR__54914665528997966263__ += 715;
        _1_OBF_FUNC_next = 324UL;
        break;
      case 114:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 282UL;
        } else {
          _1_OBF_FUNC_next = 254UL;
        }
        break;
      case 37:
        __RANDVAR__98396114551868796724_____3++;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 252:
        __RANDVAR__54914665528997966263__ -= 715;
        _1_OBF_FUNC_next = 99UL;
        break;
      case 265:;
        if (low < 16) {
          _1_OBF_FUNC_next = 235UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 248:;
        if (756 - __RANDVAR__5126661176362711180_____1 < 387) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 238UL;
        }
        break;
      case 327:
        __RANDVAR__78771215408798790389_____3 = 468;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 41:
        k++;
        _1_OBF_FUNC_next = 292UL;
        break;
      case 283:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 322UL;
        break;
      case 95:
        __RANDVAR__41961020579523180111__ = 1;
        _1_OBF_FUNC_next = 36UL;
        break;
      case 149:
        __RANDVAR__57585198453820852246_____4 = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 158UL;
        break;
      case 198:
        __RANDVAR__5169227141550593527__ += 461;
        _1_OBF_FUNC_next = 104UL;
        break;
      case 232:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 148UL;
        break;
      case 115:;
        if (__RANDVAR__5169227141550593527__ * 798 - (mid + high) < high) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 120UL;
        }
        break;
      case 290:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 252UL;
        } else {
          _1_OBF_FUNC_next = 92UL;
        }
        break;
      case 42:
        i = low;
        _1_OBF_FUNC_next = 182UL;
        break;
      case 253:;
        if (k <= high) {
          _1_OBF_FUNC_next = 293UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 287:;
        if (low < low - 900) {
          _1_OBF_FUNC_next = 307UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 324:
        i++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 229:
        __RANDVAR__5169227141550593527__ -= 554;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 46:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 201UL;
        break;
      case 177:
        __RANDVAR__89678782067096980928__ += 524;
        _1_OBF_FUNC_next = 94UL;
        break;
      case 66:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 219UL;
        break;
      case 83:
        __RANDVAR__57585198453820852246_____1 = __RANDVAR__89678782067096980928__ * __RANDVAR__5169227141550593527__ + low;
        _1_OBF_FUNC_next = 75UL;
        break;
      case 238:
        __RANDVAR__328100731344449346_____1 = 494;
        _1_OBF_FUNC_next = 222UL;
        break;
      case 29:
        __RANDVAR__5169227141550593527__ -= 461;
        _1_OBF_FUNC_next = 89UL;
        break;
      case 43:;
        if (k <= high) {
          _1_OBF_FUNC_next = 258UL;
        } else {
          _1_OBF_FUNC_next = 60UL;
        }
        break;
      case 86:
        __RANDVAR__5169227141550593527__ -= 554;
        _1_OBF_FUNC_next = 64UL;
        break;
      case 2:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 87UL;
        } else {
          _1_OBF_FUNC_next = 84UL;
        }
        break;
      }
    }
  }
}
void partition(int *arr, int low, int high) {
  int mid;
  {
    if (low < high) {
      mid = (low + high) / 2;
      partition(arr, low, mid);
      partition(arr, mid + 1, high);
      OBF_FUNC(arr, low, mid, high);
    }
    return;
  }
}
// variants: irrelevant-code, loop-unroll, block-fission
// expanded variants: irrelevant-code, loop-unroll, block-fission:default
