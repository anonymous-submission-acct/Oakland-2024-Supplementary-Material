typedef void *__builtin_va_list;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___wseq32_961093918;
union __anonunion____missing_field_name_790136668;
union pthread_attr_t;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct_fd_set_356711149;
struct _1_OBF_FUNC_argStruct;
struct __pthread_internal_slist;
struct timespec;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct___g1_start32_961093919;
struct __pthread_internal_list;
struct __pthread_cond_s;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __anonstruct_div_t_773697287;
struct __anonstruct_ldiv_t_790849867;
union __anonunion____missing_field_name_905257456;
struct timeval;
struct drand48_data;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_lldiv_t_103911545;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_condattr_t_488594145;
struct random_data;
struct __pthread_mutex_s;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
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
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
typedef unsigned long __uint64_t;
static __uint64_t __uint64_identity(__uint64_t __x);
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(mkstemp)(char *__template);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __off64_t;
void OBF_FUNC_FLATTEN_SPLIT_29(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(at_quick_exit)(void (*__func)(void));
extern double(strtod)(char const *__nptr, char **__endptr);
typedef int __clockid_t;
typedef unsigned int __gid_t;
typedef int __sig_atomic_t;
void OBF_FUNC_FLATTEN_SPLIT_23(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __ino64_t;
typedef int __key_t;
typedef __key_t key_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
extern int(unsetenv)(char const *__name);
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __fsblkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef int volatile pthread_spinlock_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
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
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
extern char *(l64a)(long __n);
typedef int __int32_t;
typedef __off64_t __loff_t;
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
extern int(strlen)();
typedef unsigned int __uint32_t;
static __uint32_t __bswap_32(__uint32_t __bsx);
static __uint16_t __uint16_identity(__uint16_t __x);
typedef unsigned char __u_char;
void OBF_FUNC_FLATTEN_SPLIT_32(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __anonstruct_fd_set_356711149 {
  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
};
struct _1_OBF_FUNC_argStruct {
  unsigned int b;
  unsigned int a;
  unsigned int hash;
  unsigned int i;
  int __RANDVAR__46675642206898535457__;
  char **str;
  unsigned int *len;
  unsigned int _1_OBF_FUNC_return;
  unsigned long _1_OBF_FUNC_next;
};
typedef unsigned int __id_t;
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
extern void *(realloc)(void *__ptr, size_t __size);
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef signed char __int8_t;
extern int(clearenv)(void);
void OBF_FUNC_FLATTEN_SPLIT_30(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __clockid_t clockid_t;
typedef unsigned int pthread_key_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
void OBF_FUNC_FLATTEN_SPLIT_20(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __loff_t loff_t;
typedef __int32_t int32_t;
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
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
extern int(atexit)(void (*__func)(void));
void OBF_FUNC_FLATTEN_SPLIT_25(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __u_quad_t u_quad_t;
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
void OBF_FUNC_FLATTEN_SPLIT_26(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int system(char const *__command);
union pthread_attr_t {
  char __size[56];
  long __align;
};
void OBF_FUNC_FLATTEN_SPLIT_38(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_790136668 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
union __anonunion____missing_field_name_905257456 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_905257456 __annonCompField1;
  union __anonunion____missing_field_name_790136668 __annonCompField2;
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
void OBF_FUNC_FLATTEN_SPLIT_21(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
static __uint32_t __uint32_identity(__uint32_t __x);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
void OBF_FUNC_FLATTEN_SPLIT_28(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_37(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_31(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __timer_t timer_t;
extern char *(setstate)(char *__statebuf);
void OBF_FUNC_FLATTEN_SPLIT_35(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
union __anonunion_pthread_rwlock_t_656928968 {
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long __align;
};
void OBF_FUNC_FLATTEN_SPLIT_33(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern long double(strtold)(char const *__nptr, char **__endptr);
typedef int __pid_t;
typedef struct __anonstruct_div_t_773697287 div_t;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
void OBF_FUNC_FLATTEN_SPLIT_27(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr, int __base);
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
void OBF_FUNC_FLATTEN_SPLIT_22(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __suseconds_t suseconds_t;
typedef __int64_t __int_least64_t;
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
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_36(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(printf)();
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(char *str, unsigned int len);
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
typedef long __fsword_t;
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
extern void(quick_exit)(int __status);
typedef __uint8_t u_int8_t;
typedef __u_short u_short;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern void(srandom)(unsigned int __seed);
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
void OBF_FUNC_FLATTEN_SPLIT_34(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern double(drand48)(void);
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(atoi)(char const *__nptr);
void OBF_FUNC_FLATTEN_SPLIT_24(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
void OBF_FUNC_FLATTEN_SPLIT_25(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab27:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 20UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab12:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab33:
    _1_OBF_FUNC_arg->i = 0U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_22(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab30:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 29UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_27(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab26:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_23(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab17:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 34UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 32UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    _1_OBF_FUNC_arg->__RANDVAR__46675642206898535457__ = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 24UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_29(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab28:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 10UL; }
    return;
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned char *str;
  unsigned int hash;
  int tmp;
  unsigned int tmp___0;
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
    str = (unsigned char *)*(argv + 1);
    tmp = strlen(str);
    tmp___0 = OBF_FUNC((char *)str, (unsigned int)tmp);
    hash = tmp___0;
    if (hash == 1294241610U) {
      printf("You win!\n");
    }
    return (0);
  }
}
void OBF_FUNC_FLATTEN_SPLIT_38(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab35:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab34:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 40UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab20:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_28(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab23:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab39:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 16UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab7:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 39UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 26UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab36:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 26UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab32:
    _1_OBF_FUNC_arg->__RANDVAR__46675642206898535457__ = 1;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 24UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_37(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab42:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = _1_OBF_FUNC_arg->hash;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 43UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_33(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab37:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_26(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab3:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 27UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_34(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab16:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 35UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_20(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab11:
    _1_OBF_FUNC_arg->hash = 0U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 33UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab25:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 14UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab5:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 14UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_30(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab41:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 25UL; }
    return;
  }
}
unsigned int OBF_FUNC(char *str, unsigned int len) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[43])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg) = {&OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_11, &OBF_FUNC_FLATTEN_SPLIT_36, &OBF_FUNC_FLATTEN_SPLIT_26, &OBF_FUNC_FLATTEN_SPLIT_13, &OBF_FUNC_FLATTEN_SPLIT_5, &OBF_FUNC_FLATTEN_SPLIT_31, &OBF_FUNC_FLATTEN_SPLIT_10, &OBF_FUNC_FLATTEN_SPLIT_35, &OBF_FUNC_FLATTEN_SPLIT_12, &OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_20, &OBF_FUNC_FLATTEN_SPLIT_14, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_24, &OBF_FUNC_FLATTEN_SPLIT_4, &OBF_FUNC_FLATTEN_SPLIT_34, &OBF_FUNC_FLATTEN_SPLIT_23, &OBF_FUNC_FLATTEN_SPLIT_0, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_2, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_19, &OBF_FUNC_FLATTEN_SPLIT_28, &OBF_FUNC_FLATTEN_SPLIT_7, &OBF_FUNC_FLATTEN_SPLIT_16, &OBF_FUNC_FLATTEN_SPLIT_27, &OBF_FUNC_FLATTEN_SPLIT_25, &OBF_FUNC_FLATTEN_SPLIT_29, &OBF_FUNC_FLATTEN_SPLIT_21, &OBF_FUNC_FLATTEN_SPLIT_22, &OBF_FUNC_FLATTEN_SPLIT_32, &OBF_FUNC_FLATTEN_SPLIT_6, &OBF_FUNC_FLATTEN_SPLIT_15, &OBF_FUNC_FLATTEN_SPLIT_1, &OBF_FUNC_FLATTEN_SPLIT_38, &OBF_FUNC_FLATTEN_SPLIT_8, &OBF_FUNC_FLATTEN_SPLIT_33, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_17, &OBF_FUNC_FLATTEN_SPLIT_3, &OBF_FUNC_FLATTEN_SPLIT_30, &OBF_FUNC_FLATTEN_SPLIT_37};
  {
    { _1_OBF_FUNC_arg._1_OBF_FUNC_next = 31UL; }
    _1_OBF_FUNC_arg.str = &str;
    _1_OBF_FUNC_arg.len = &len;
    while (1) {
      if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 42) {
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
      } else {
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next - 0]))(&_1_OBF_FUNC_arg);
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab10:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_21(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab29:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab15:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 41UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_32(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab31:
    _1_OBF_FUNC_arg->b = 378551U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 22UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_35(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab18:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 36UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab40:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_31(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:
    _1_OBF_FUNC_arg->hash = _1_OBF_FUNC_arg->hash * _1_OBF_FUNC_arg->a + (unsigned int)*(*(_1_OBF_FUNC_arg->str));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 15UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 23UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab24:;
    if (_1_OBF_FUNC_arg->__RANDVAR__46675642206898535457__ == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 18UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 42UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:
    _1_OBF_FUNC_arg->a *= _1_OBF_FUNC_arg->b;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 37UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_36(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    (*(_1_OBF_FUNC_arg->str))++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 12UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_24(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab14:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->len)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 28UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab22:
    _1_OBF_FUNC_arg->a = 63689U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL; }
    return;
  }
}
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:call
