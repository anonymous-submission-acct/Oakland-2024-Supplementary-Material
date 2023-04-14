typedef void *__builtin_va_list;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion_pthread_cond_t_951761805;
struct random_data;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct_div_t_773697287;
struct __pthread_internal_slist;
struct __pthread_internal_list;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct___sigset_t_973126068;
union pthread_attr_t;
struct __pthread_cond_s;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_rwlock_t_656928968;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_mutexattr_t_488594144;
struct timeval;
struct drand48_data;
struct __anonstruct___fsid_t_109580352;
union __anonunion_pthread_barrier_t_145707746;
struct timespec;
union __anonunion____missing_field_name_714479366;
struct __anonstruct_fd_set_356711149;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_rwlockattr_t_145707745;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___g1_start32_961093919;
union __anonunion____missing_field_name_340787781;
struct __pthread_mutex_s;
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_1;
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
extern int(mkstemp)(char *__template);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern long(a64l)(char const *__s);
typedef unsigned long __uint64_t;
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
typedef int volatile pthread_spinlock_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
struct __anonstruct_ldiv_t_790849867 {
  long quot;
  long rem;
};
extern int(rand_r)(unsigned int *__seed);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_2;
typedef __mode_t mode_t;
typedef void *__timer_t;
typedef int wchar_t;
extern size_t(wcstombs)(char *__s, wchar_t const *__pwcs, size_t __n);
typedef unsigned long ulong;
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
extern long(atol)(char const *__nptr);
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
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
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
extern int(abs)(int __x);
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
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
extern int(atexit)(void (*__func)(void));
typedef __u_quad_t u_quad_t;
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_StructureType;
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
typedef unsigned int __uint32_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern char *(mkdtemp)(char *__template);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
extern double(atof)(char const *__nptr);
typedef __u_char u_char;
typedef __sigset_t sigset_t;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_340787781 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
union __anonunion____missing_field_name_714479366 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_340787781 __annonCompField1;
  union __anonunion____missing_field_name_714479366 __annonCompField2;
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
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
typedef union pthread_attr_t pthread_attr_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
};
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
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_1;
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
unsigned long _2_entropy;
typedef __uint64_t __uint_least64_t;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
typedef __suseconds_t suseconds_t;
typedef __int64_t __int_least64_t;
typedef __int8_t int8_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
typedef unsigned long __fsfilcnt64_t;
extern int(mblen)(char const *__s, size_t __n);
unsigned long _2_alwaysZero;
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2;
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
extern int printf();
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
};
extern long(lrand48)(void);
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __int8_t __int_least8_t;
typedef __clock_t clock_t;
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
void OBF_FUNC(int n);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2;
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
typedef long __fsword_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
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
  int tmp;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _3_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__3_OBF_FUNC_1_opaque_ptr_2_i$nit; }
        _3_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__3_OBF_FUNC_1_opaque_ptr_2_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__3_OBF_FUNC_1_opaque_list_2_i$nit; }
        _3_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__3_OBF_FUNC_1_opaque_list_2_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__3_OBF_FUNC_2_opaque_list_1_i$nit; }
        _3_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__3_OBF_FUNC_2_opaque_list_1_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__3_OBF_FUNC_2_opaque_list_2_i$nit; }
        _3_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__3_OBF_FUNC_2_opaque_list_2_i$nit:;
        }
        {
          { goto _2_alwaysZero_i$nit_INLINE__2_alwaysZero_i$nit; }
        _2_alwaysZero_i$nit_INLINE__2_alwaysZero_i$nit:;
        }
        {
          {
            _2_entropy = 8991059541400981876UL;
            goto _2_entropy_i$nit_INLINE__2_entropy_i$nit;
          }
        _2_entropy_i$nit_INLINE__2_entropy_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__3_OBF_FUNC_1_opaque_ptr_1_i$nit; }
        _3_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__3_OBF_FUNC_1_opaque_ptr_1_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__3_OBF_FUNC_2_opaque_ptr_2_i$nit; }
        _3_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__3_OBF_FUNC_2_opaque_ptr_2_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__3_OBF_FUNC_1_opaque_list_1_i$nit; }
        _3_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__3_OBF_FUNC_1_opaque_list_1_i$nit:;
        }
        {
          { goto _3_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__3_OBF_FUNC_2_opaque_ptr_1_i$nit; }
        _3_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__3_OBF_FUNC_2_opaque_ptr_1_i$nit:;
        }
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
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
  int octalNumber[100];
  int i;
  int j;
  long remainder;
  long quotient;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p18;
  int i19;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p20;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p24;
  int i25;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p26;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  void *tmp___9;
  void *tmp___10;
  void *tmp___11;
  void *tmp___12;
  unsigned long _1_OBF_FUNC_next___0;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      tmp___9 = malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p24 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)tmp___9;
      p24->next = p24;
      p24->prev = p24;
      _3_OBF_FUNC_2_opaque_list_1 = p24;
      i25 = 0;
      while (i25 < 2) {
        tmp___10 = malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p26 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)tmp___10;
        p26->data = (int)((unsigned long)i25 * ((_2_entropy & 3UL) * (_2_entropy | 3UL) + (_2_entropy & 0xfffffffffffffffcUL) * (~_2_entropy & 3UL)));
        p26->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p26->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p26;
        _3_OBF_FUNC_2_opaque_list_1->next = p26;
        i25++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      tmp___11 = malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p18 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)tmp___11;
      p18->next = p18;
      p18->prev = p18;
      _3_OBF_FUNC_1_opaque_list_1 = p18;
      i19 = 0;
      while (i19 < 2) {
        tmp___12 = malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p20 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)tmp___12;
        p20->data = (int)((unsigned long)i19 * ((_2_entropy & 1UL) * (_2_entropy | 1UL) + (_2_entropy & 0xfffffffffffffffeUL) * (~_2_entropy & 1UL)));
        p20->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p20->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p20;
        _3_OBF_FUNC_1_opaque_list_1->next = p20;
        i19++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    { _1_OBF_FUNC_next___0 = 94UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 49:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 33:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 120UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 101UL; }
        }
        break;
      case 52:
        j = i - 1;
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 88:
        j--;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 106:;
        if (quotient != 0L) {
          { _1_OBF_FUNC_next___0 = 41UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 54UL; }
        }
        break;
      case 127:
        _1_OBF_FUNC_next = 47UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 116:
        j--;
        { _1_OBF_FUNC_next___0 = 171UL; }
        break;
      case 13:
        printf("%d", octalNumber[j]);
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 3:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 102:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 81:
        i = 1;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 100:
        tmp___3 = rand();
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 62:;
        if (quotient != 0L) {
          { _1_OBF_FUNC_next___0 = 1UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 142UL; }
        }
        break;
      case 26:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 164:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 74:
        octalNumber[tmp___4] = (int)(quotient % 8L);
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 113:
        tmp___0 = i;
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 173:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 55:
        i++;
        { _1_OBF_FUNC_next___0 = 125UL; }
        break;
      case 136:
        i++;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 43:
        tmp___1 = rand();
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 59:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 154:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 125:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 179:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 170:
        quotient /= 8L;
        { _1_OBF_FUNC_next___0 = 133UL; }
        break;
      case 64:
        printf("%d", octalNumber[j]);
        { _1_OBF_FUNC_next___0 = 148UL; }
        break;
      case 103:;
        if (j > 0) {
          { _1_OBF_FUNC_next___0 = 162UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 163UL; }
        }
        break;
      case 69:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 166:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 161:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 141:
        tmp___2 = i;
        { _1_OBF_FUNC_next___0 = 44UL; }
        break;
      case 24:;
        if (j > 0) {
          { _1_OBF_FUNC_next___0 = 164UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 153UL; }
        }
        break;
      case 4:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 133:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 162:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 108:;
        {
          _1_OBF_FUNC_next___0 = 50UL;
        }
        break;
      case 77:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 131:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 91:;
        {
          _1_OBF_FUNC_next___0 = 82UL;
        }
        break;
      case 117:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 171:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 47:;
        if (j > 0) {
          { _1_OBF_FUNC_next___0 = 5UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 149UL; }
        }
        break;
      case 167:;
        if (quotient != 0L) {
          { _1_OBF_FUNC_next___0 = 29UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 128UL; }
        }
        break;
      case 29:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 27:
        _1_OBF_FUNC_next = 56UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 67:
        tmp = rand();
        { _1_OBF_FUNC_next___0 = 175UL; }
        break;
      case 93:;
        {
          _1_OBF_FUNC_next___0 = 156UL;
        }
        break;
      case 130:;
        {
          _1_OBF_FUNC_next___0 = 152UL;
        }
        break;
      case 5:
        _1_OBF_FUNC_next = 49UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 160:
        octalNumber[tmp___2] = (int)(quotient % 8L);
        { _1_OBF_FUNC_next___0 = 161UL; }
        break;
      case 129:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 98:
        quotient /= 8L;
        { _1_OBF_FUNC_next___0 = 168UL; }
        break;
      case 150:
        j--;
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 94:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 97:
        _1_OBF_FUNC_next = 47UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 115:
        printf("Equivalent octal value of decimal number %d: \n", n);
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 176:
        octalNumber[tmp___5] = (int)(quotient % 8L);
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 142:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 44:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 31:;
        {
          _1_OBF_FUNC_next___0 = 62UL;
        }
        break;
      case 147:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 85:;
        return;
        break;
      case 28:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 20:
        quotient /= 8L;
        { _1_OBF_FUNC_next___0 = 166UL; }
        break;
      case 163:
        _1_OBF_FUNC_next = 70UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 177:;
        {
          _1_OBF_FUNC_next___0 = 106UL;
        }
        break;
      case 0:;
        switch (_1_OBF_FUNC_next) {
        case 18UL: {
          _1_OBF_FUNC_next___0 = 88UL;
        } break;
        case 50UL: {
          _1_OBF_FUNC_next___0 = 11UL;
        } break;
        case 25UL: {
          _1_OBF_FUNC_next___0 = 141UL;
        } break;
        case 49UL: {
          _1_OBF_FUNC_next___0 = 95UL;
        } break;
        case 52UL: {
          _1_OBF_FUNC_next___0 = 177UL;
        } break;
        case 30UL: {
          _1_OBF_FUNC_next___0 = 55UL;
        } break;
        case 14UL: {
          _1_OBF_FUNC_next___0 = 176UL;
        } break;
        case 15UL: {
          _1_OBF_FUNC_next___0 = 56UL;
        } break;
        case 56UL: {
          _1_OBF_FUNC_next___0 = 38UL;
        } break;
        case 31UL: {
          _1_OBF_FUNC_next___0 = 35UL;
        } break;
        case 45UL: {
          _1_OBF_FUNC_next___0 = 144UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 20UL;
        } break;
        case 70UL: {
          _1_OBF_FUNC_next___0 = 104UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 145UL;
        } break;
        case 16UL: {
          _1_OBF_FUNC_next___0 = 150UL;
        } break;
        case 24UL: {
          _1_OBF_FUNC_next___0 = 170UL;
        } break;
        case 21UL: {
          _1_OBF_FUNC_next___0 = 100UL;
        } break;
        case 36UL: {
          _1_OBF_FUNC_next___0 = 12UL;
        } break;
        case 57UL: {
          _1_OBF_FUNC_next___0 = 91UL;
        } break;
        case 68UL: {
          _1_OBF_FUNC_next___0 = 31UL;
        } break;
        case 26UL: {
          _1_OBF_FUNC_next___0 = 92UL;
        } break;
        case 11UL: {
          _1_OBF_FUNC_next___0 = 81UL;
        } break;
        case 13UL: {
          _1_OBF_FUNC_next___0 = 74UL;
        } break;
        case 19UL: {
          _1_OBF_FUNC_next___0 = 70UL;
        } break;
        case 32UL: {
          _1_OBF_FUNC_next___0 = 52UL;
        } break;
        case 67UL: {
          _1_OBF_FUNC_next___0 = 75UL;
        } break;
        case 59UL: {
          _1_OBF_FUNC_next___0 = 93UL;
        } break;
        case 6UL: {
          _1_OBF_FUNC_next___0 = 146UL;
        } break;
        case 38UL: {
          _1_OBF_FUNC_next___0 = 64UL;
        } break;
        case 61UL: {
          _1_OBF_FUNC_next___0 = 130UL;
        } break;
        case 58UL: {
          _1_OBF_FUNC_next___0 = 17UL;
        } break;
        case 34UL: {
          _1_OBF_FUNC_next___0 = 116UL;
        } break;
        case 48UL: {
          _1_OBF_FUNC_next___0 = 43UL;
        } break;
        case 28UL: {
          _1_OBF_FUNC_next___0 = 6UL;
        } break;
        case 53UL: {
          _1_OBF_FUNC_next___0 = 84UL;
        } break;
        case 65UL: {
          _1_OBF_FUNC_next___0 = 108UL;
        } break;
        case 47UL: {
          _1_OBF_FUNC_next___0 = 123UL;
        } break;
        case 44UL: {
          _1_OBF_FUNC_next___0 = 18UL;
        } break;
        case 37UL: {
          _1_OBF_FUNC_next___0 = 115UL;
        } break;
        case 64UL: {
          _1_OBF_FUNC_next___0 = 13UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 98UL;
        } break;
        case 42UL: {
          _1_OBF_FUNC_next___0 = 136UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 34UL;
        } break;
        case 46UL: {
          _1_OBF_FUNC_next___0 = 160UL;
        } break;
        case 39UL: {
          _1_OBF_FUNC_next___0 = 112UL;
        } break;
        case 35UL: {
          _1_OBF_FUNC_next___0 = 67UL;
        } break;
        case 29UL: {
          _1_OBF_FUNC_next___0 = 113UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 165UL;
        } break;
        case 20UL: {
          _1_OBF_FUNC_next___0 = 124UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 0UL;
        } break;
        }
        break;
      case 12:
        printf("%d", octalNumber[j]);
        { _1_OBF_FUNC_next___0 = 137UL; }
        break;
      case 82:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 3UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 140UL; }
        }
        break;
      case 148:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 101:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 23:
        _1_OBF_FUNC_next = 53UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 174:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 96:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 118UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 14UL; }
        }
        break;
      case 168:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 109:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 137:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 124:;
        {
          _1_OBF_FUNC_next___0 = 96UL;
        }
        break;
      case 46:
        _1_OBF_FUNC_next = 59UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 128:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 58:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 19:
        _1_OBF_FUNC_next = 52UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 11:;
        {
          _1_OBF_FUNC_next___0 = 126UL;
        }
        break;
      case 41:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 123:;
        {
          _1_OBF_FUNC_next___0 = 103UL;
        }
        break;
      case 50:;
        if (j > 0) {
          { _1_OBF_FUNC_next___0 = 174UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 26UL; }
        }
        break;
      case 119:
        _1_OBF_FUNC_next = 52UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 165:
        i++;
        { _1_OBF_FUNC_next___0 = 114UL; }
        break;
      case 83:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 154UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 179UL; }
        }
        break;
      case 149:
        _1_OBF_FUNC_next = 47UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 17:
        octalNumber[tmp___0] = (int)(quotient % 8L);
        { _1_OBF_FUNC_next___0 = 173UL; }
        break;
      case 144:
        j--;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 75:;
        {
          _1_OBF_FUNC_next___0 = 167UL;
        }
        break;
      case 60:
        _1_OBF_FUNC_next = 64UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 1:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = 24UL;
        }
        break;
      case 37:
        _1_OBF_FUNC_next = 28UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 118:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 56:
        tmp___5 = i;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 14:
        _1_OBF_FUNC_next = 38UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 151:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 126:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 131UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 105UL; }
        }
        break;
      case 38:
        quotient /= 8L;
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 92:
        quotient = (long)n;
        { _1_OBF_FUNC_next___0 = 151UL; }
        break;
      case 156:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 97UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 60UL; }
        }
        break;
      case 145:;
        {
          _1_OBF_FUNC_next___0 = 47UL;
        }
        break;
      case 18:
        tmp___6 = rand();
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 70:
        tmp___7 = rand();
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 114:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 35:
        i++;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 105:
        _1_OBF_FUNC_next = 39UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 112:
        tmp___4 = i;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 95:
        tmp___8 = rand();
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 84:;
        {
          _1_OBF_FUNC_next___0 = 33UL;
        }
        break;
      case 153:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 90:;
        if (((((_2_alwaysZero & ((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) * (_2_alwaysZero | ((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) + (_2_alwaysZero & ~((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) * (~_2_alwaysZero & ((_2_entropy + 0xfffffffffffffff6UL) + 1UL))) | 1UL) << 1UL) - (((_2_alwaysZero & ((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) * (_2_alwaysZero | ((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) + (_2_alwaysZero & ~((_2_entropy + 0xfffffffffffffff6UL) + 1UL)) * (~_2_alwaysZero & ((_2_entropy + 0xfffffffffffffff6UL) + 1UL))) ^ 1UL)) {
          { _1_OBF_FUNC_next___0 = 46UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 0UL; }
        }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = 83UL;
        }
        break;
      case 54:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 175:
        _1_OBF_FUNC_next = 57UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 120:
        _1_OBF_FUNC_next = 52UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 39:;
        if (((((_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (_2_alwaysZero | ((_2_entropy | 7UL) - (_2_entropy & 7UL))) + (_2_alwaysZero & ~((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (~_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL)))) | 1UL) + (((_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (_2_alwaysZero | ((_2_entropy | 7UL) - (_2_entropy & 7UL))) + (_2_alwaysZero & ~((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (~_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL)))) | 1UL)) - (((_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (_2_alwaysZero | ((_2_entropy | 7UL) - (_2_entropy & 7UL))) + (_2_alwaysZero & ~((_2_entropy | 7UL) - (_2_entropy & 7UL))) * (~_2_alwaysZero & ((_2_entropy | 7UL) - (_2_entropy & 7UL)))) ^ 1UL)) {
          { _1_OBF_FUNC_next___0 = 28UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 0UL; }
        }
        break;
      case 76:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 152:;
        if (quotient != 0L) {
          { _1_OBF_FUNC_next___0 = 147UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 119UL; }
        }
        break;
      case 134:
        _1_OBF_FUNC_next = 58UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 140:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 146:
        printf("%d", octalNumber[j]);
        { _1_OBF_FUNC_next___0 = 129UL; }
        break;
      case 80:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 104:;
        {
          _1_OBF_FUNC_next___0 = 85UL;
        }
        break;
      }
    }
  }
}
// variants: loop-fission, block-fission, flatten
// expanded variants: loop-fission, block-fission:default, flatten:switch
