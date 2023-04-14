typedef void *__builtin_va_list;
union __anonunion____missing_field_name_905257456;
struct __anonstruct___wseq32_961093918;
enum __anonenum_idtype_t_558242672;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct_lldiv_t_103911545;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___g1_start32_961093919;
struct timeval;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_barrierattr_t_951761806;
union pthread_attr_t;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_internal_list;
struct __pthread_cond_s;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion____missing_field_name_790136668;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_rwlock_t_656928968;
struct random_data;
struct __pthread_mutex_s;
struct __anonstruct_fd_set_356711149;
struct __pthread_internal_slist;
struct timespec;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct_ldiv_t_790849867;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct drand48_data;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
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
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __off64_t;
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
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
typedef unsigned long ulong;
extern long(atol)(char const *__nptr);
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
typedef __fd_mask fd_mask;
extern size_t(mbstowcs)(wchar_t *__pwcs, char const *__s, size_t __n);
extern void *(malloc)(size_t __size);
extern int(mkstemps)(char *__template, int __suffixlen);
extern int(seed48_r)(unsigned short *__seed16v, struct drand48_data *__buffer);
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
typedef __clockid_t clockid_t;
typedef unsigned int pthread_key_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __int16_t __int_least16_t;
typedef __loff_t loff_t;
typedef __int32_t int32_t;
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
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef unsigned int __useconds_t;
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
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
static __uint32_t __uint32_identity(__uint32_t __x);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
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
typedef struct __anonstruct_div_t_773697287 div_t;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr, int __base);
unsigned long _2_entropy = 3521088156046118821UL;
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
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef __gid_t gid_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef long __intmax_t;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
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
void OBF_FUNC(int *a, int n);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
  int a[10];
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
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;
    a[6] = 7;
    a[7] = 8;
    a[8] = 9;
    a[9] = 10;
    OBF_FUNC(a, 10);
    return (0);
  }
}
void OBF_FUNC(int *a, int n) {
  int big;
  int small;
  int i;
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
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  int tmp___33;
  int tmp___34;
  int tmp___35;
  int tmp___36;
  int tmp___37;
  int tmp___38;
  int tmp___39;
  int tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
  int tmp___44;
  int tmp___45;
  int tmp___46;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p55;
  int i56;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p57;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p61;
  int i62;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p63;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p61 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p61->next = p61;
      p61->prev = p61;
      _3_OBF_FUNC_2_opaque_list_1 = p61;
      i62 = 0;
      while (i62 < 4) {
        p63 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p63->data = i62 * (((_2_entropy | 7) + (_2_entropy | 7)) - (_2_entropy ^ 7));
        p63->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p63->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p63;
        _3_OBF_FUNC_2_opaque_list_1->next = p63;
        i62++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p55 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p55->next = p55;
      p55->prev = p55;
      _3_OBF_FUNC_1_opaque_list_1 = p55;
      i56 = 0;
      while (i56 < 4) {
        p57 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p57->data = i56 * ((_2_entropy | 4) - (_2_entropy & 4));
        p57->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p57->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p57;
        _3_OBF_FUNC_1_opaque_list_1->next = p57;
        i56++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 291UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 318:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 297UL;
        } else {
          _1_OBF_FUNC_next = 83UL;
        }
        break;
      case 18:
        small = *(a + i);
        _1_OBF_FUNC_next = 201UL;
        break;
      case 80:
        tmp___27 = rand();
        _1_OBF_FUNC_next = 304UL;
        break;
      case 301:
        i++;
        _1_OBF_FUNC_next = 160UL;
        break;
      case 104:
        tmp___32 = rand();
        _1_OBF_FUNC_next = 136UL;
        break;
      case 302:;
        if (i < n) {
          _1_OBF_FUNC_next = 130UL;
        } else {
          _1_OBF_FUNC_next = 305UL;
        }
        break;
      case 258:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 198UL;
        } else {
          _1_OBF_FUNC_next = 327UL;
        }
        break;
      case 103:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 18UL;
        } else {
          _1_OBF_FUNC_next = 201UL;
        }
        break;
      case 189:;
        if (i < n) {
          _1_OBF_FUNC_next = 277UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
          break;
        } else {
        }
      case 102:;
        if (tmp___25 % 10 >= 5) {
          _1_OBF_FUNC_next = 341UL;
        } else {
          _1_OBF_FUNC_next = 285UL;
        }
        break;
      case 272:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 131UL;
        } else {
          _1_OBF_FUNC_next = 289UL;
        }
        break;
      case 15:
        small = *(a + i);
        _1_OBF_FUNC_next = 215UL;
        break;
      case 221:;
        if (tmp___31 % 10 >= 5) {
          _1_OBF_FUNC_next = 177UL;
        } else {
          _1_OBF_FUNC_next = 91UL;
        }
        break;
      case 180:;
        if (tmp___15 % 10 >= 5) {
          _1_OBF_FUNC_next = 225UL;
        } else {
          _1_OBF_FUNC_next = 185UL;
        }
        break;
      case 275:;
        if (i < n) {
          _1_OBF_FUNC_next = 195UL;
        } else {
          _1_OBF_FUNC_next = 205UL;
        }
        break;
      case 121:;
        if (tmp___4 % 10 >= 5) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 73UL;
        }
        break;
      case 216:;
        if (tmp___24 % 10 >= 5) {
          _1_OBF_FUNC_next = 56UL;
        } else {
          _1_OBF_FUNC_next = 21UL;
        }
        break;
      case 168:
        i++;
        _1_OBF_FUNC_next = 238UL;
        break;
      case 152:
        small = *(a + i);
        _1_OBF_FUNC_next = 314UL;
        break;
      case 205:;
        if (i < n) {
          _1_OBF_FUNC_next = 43UL;
        } else {
          _1_OBF_FUNC_next = 212UL;
        }
        break;
      case 8:;
        if (tmp___6 % 10 >= 5) {
          _1_OBF_FUNC_next = 238UL;
        } else {
          _1_OBF_FUNC_next = 46UL;
        }
        break;
      case 160:;
        if (i < n) {
          _1_OBF_FUNC_next = 110UL;
        } else {
          _1_OBF_FUNC_next = 319UL;
        }
        break;
      case 246:;
        if (tmp___23 % 10 >= 5) {
          _1_OBF_FUNC_next = 56UL;
        } else {
          _1_OBF_FUNC_next = 267UL;
        }
        break;
      case 195:
        tmp___20 = rand();
        _1_OBF_FUNC_next = 48UL;
        break;
      case 305:;
        if (i < n) {
          _1_OBF_FUNC_next = 92UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 124:;
        if (i < n) {
          _1_OBF_FUNC_next = 72UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 1:
        small = *(a + i);
        _1_OBF_FUNC_next = 143UL;
        break;
      case 77:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 153UL;
        } else {
          _1_OBF_FUNC_next = 68UL;
        }
        break;
      case 242:
        tmp___18 = rand();
        _1_OBF_FUNC_next = 169UL;
        break;
      case 3:;
        if (i < n) {
          _1_OBF_FUNC_next = 116UL;
        } else {
          _1_OBF_FUNC_next = 275UL;
        }
        break;
      case 21:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 338UL;
        } else {
          _1_OBF_FUNC_next = 328UL;
        }
        break;
      case 36:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 139UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 131:
        small = *(a + i);
        _1_OBF_FUNC_next = 289UL;
        break;
      case 68:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 74UL;
        break;
      case 213:;
        if (tmp___38 % 10 >= 5) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 272UL;
        }
        break;
      case 323:
        tmp___14 = rand();
        _1_OBF_FUNC_next = 329UL;
        break;
      case 122:;
        if (i < n) {
          _1_OBF_FUNC_next = 170UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 181:
        i++;
        _1_OBF_FUNC_next = 275UL;
        break;
      case 306:;
        if (i < n) {
          _1_OBF_FUNC_next = 123UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 85:;
        if (tmp___29 % 10 >= 5) {
          _1_OBF_FUNC_next = 298UL;
        } else {
          _1_OBF_FUNC_next = 25UL;
        }
        break;
      case 100:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 236UL;
        break;
      case 105:
        i++;
        _1_OBF_FUNC_next = 66UL;
        break;
      case 296:
        small = *(a + i);
        _1_OBF_FUNC_next = 81UL;
        break;
      case 225:;
        if (i < n) {
          _1_OBF_FUNC_next = 14UL;
        } else {
          _1_OBF_FUNC_next = 3UL;
        }
        break;
      case 135:
        tmp___25 = rand();
        _1_OBF_FUNC_next = 102UL;
        break;
      case 63:
        tmp___35 = rand();
        _1_OBF_FUNC_next = 95UL;
        break;
      case 279:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 265UL;
        } else {
          _1_OBF_FUNC_next = 45UL;
        }
        break;
      case 176:
        i++;
        _1_OBF_FUNC_next = 6UL;
        break;
      case 297:
        big = *(a + i);
        _1_OBF_FUNC_next = 83UL;
        break;
      case 211:
        tmp___41 = rand();
        _1_OBF_FUNC_next = 132UL;
        break;
      case 259:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 300UL;
        break;
      case 125:
        small = *(a + i);
        _1_OBF_FUNC_next = 105UL;
        break;
      case 320:;
        if (i < n) {
          _1_OBF_FUNC_next = 36UL;
        } else {
          _1_OBF_FUNC_next = 179UL;
        }
        break;
      case 143:
        i++;
        _1_OBF_FUNC_next = 189UL;
        break;
      case 19:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 1UL;
        } else {
          _1_OBF_FUNC_next = 143UL;
        }
        break;
      case 32:
        i++;
        _1_OBF_FUNC_next = 31UL;
        break;
      case 227:
        small = *(a + i);
        _1_OBF_FUNC_next = 90UL;
        break;
      case 172:
        i++;
        _1_OBF_FUNC_next = 53UL;
        break;
      case 264:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 8UL;
        break;
      case 295:
        small = *(a + i);
        _1_OBF_FUNC_next = 340UL;
        break;
      case 117:;
        if (tmp___42 % 10 >= 5) {
          _1_OBF_FUNC_next = 302UL;
        } else {
          _1_OBF_FUNC_next = 279UL;
        }
        break;
      case 208:
        tmp = rand();
        _1_OBF_FUNC_next = 77UL;
        break;
      case 328:
        i++;
        _1_OBF_FUNC_next = 122UL;
        break;
      case 187:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 65UL;
        break;
      case 244:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 337UL;
        } else {
          _1_OBF_FUNC_next = 181UL;
        }
        break;
      case 144:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 202UL;
        break;
      case 194:
        big = *(a + i);
        _1_OBF_FUNC_next = 286UL;
        break;
      case 289:
        i++;
        _1_OBF_FUNC_next = 306UL;
        break;
      case 212:;
        if (i < n) {
          _1_OBF_FUNC_next = 315UL;
        } else {
          _1_OBF_FUNC_next = 320UL;
        }
        break;
      case 319:
        printf("Smallest element: %d\n", small);
        _1_OBF_FUNC_next = 294UL;
        break;
      case 87:
        small = *(a + i);
        _1_OBF_FUNC_next = 112UL;
        break;
      case 183:;
        if (i < n) {
          _1_OBF_FUNC_next = 94UL;
        } else {
          _1_OBF_FUNC_next = 290UL;
        }
        break;
      case 171:;
        if (tmp___37 % 10 >= 5) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 40UL;
        }
        break;
      case 34:;
        if (tmp___28 % 10 >= 5) {
          _1_OBF_FUNC_next = 41UL;
        } else {
          _1_OBF_FUNC_next = 71UL;
        }
        break;
      case 251:;
        if (tmp___33 % 10 >= 5) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 156UL;
        }
        break;
      case 169:;
        if (tmp___18 % 10 >= 5) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 311UL;
        }
        break;
      case 281:
        big = *(a + i);
        _1_OBF_FUNC_next = 207UL;
        break;
      case 127:
        tmp___30 = rand();
        _1_OBF_FUNC_next = 276UL;
        break;
      case 215:
        i++;
        _1_OBF_FUNC_next = 302UL;
        break;
      case 286:
        i++;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 298:;
        if (i < n) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 177UL;
        }
        break;
      case 65:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 24UL;
        } else {
          _1_OBF_FUNC_next = 113UL;
        }
        break;
      case 325:
        tmp___36 = rand();
        _1_OBF_FUNC_next = 75UL;
        break;
      case 44:;
        if (i < n) {
          _1_OBF_FUNC_next = 325UL;
        } else {
          _1_OBF_FUNC_next = 306UL;
        }
        break;
      case 5:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 310UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        break;
      case 184:
        i++;
        _1_OBF_FUNC_next = 153UL;
        break;
      case 162:
        tmp___12 = rand();
        _1_OBF_FUNC_next = 57UL;
        break;
      case 72:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 256UL;
        break;
      case 261:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 193UL;
        } else {
          _1_OBF_FUNC_next = 20UL;
        }
        break;
      case 33:
        tmp___11 = rand();
        _1_OBF_FUNC_next = 164UL;
        break;
      case 292:
        i++;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 93:;
        if (i < n) {
          _1_OBF_FUNC_next = 126UL;
        } else {
          _1_OBF_FUNC_next = 66UL;
        }
        break;
      case 119:
        tmp___29 = rand();
        _1_OBF_FUNC_next = 85UL;
        break;
      case 175:;
        if (tmp___44 % 10 >= 5) {
          _1_OBF_FUNC_next = 93UL;
        } else {
          _1_OBF_FUNC_next = 118UL;
        }
        break;
      case 338:
        small = *(a + i);
        _1_OBF_FUNC_next = 328UL;
        break;
      case 276:;
        if (tmp___30 % 10 >= 5) {
          _1_OBF_FUNC_next = 177UL;
        } else {
          _1_OBF_FUNC_next = 331UL;
        }
        break;
      case 233:
        i++;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 92:
        tmp___44 = rand();
        _1_OBF_FUNC_next = 175UL;
        break;
      case 10:;
        if (tmp___22 % 10 >= 5) {
          _1_OBF_FUNC_next = 320UL;
        } else {
          _1_OBF_FUNC_next = 78UL;
        }
        break;
      case 224:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 87UL;
        } else {
          _1_OBF_FUNC_next = 112UL;
        }
        break;
      case 136:;
        if (tmp___32 % 10 >= 5) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 342UL;
        }
        break;
      case 153:;
        if (i < n) {
          _1_OBF_FUNC_next = 270UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 207:
        i++;
        _1_OBF_FUNC_next = 290UL;
        break;
      case 88:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 336UL;
        } else {
          _1_OBF_FUNC_next = 233UL;
        }
        break;
      case 174:
        i++;
        _1_OBF_FUNC_next = 183UL;
        break;
      case 126:
        tmp___45 = rand();
        _1_OBF_FUNC_next = 333UL;
        break;
      case 179:
        printf("Largest element: %d\n", big);
        _1_OBF_FUNC_next = 287UL;
        break;
      case 329:;
        if (tmp___14 % 10 >= 5) {
          _1_OBF_FUNC_next = 290UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 20:
        i++;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 315:
        tmp___22 = rand();
        _1_OBF_FUNC_next = 10UL;
        break;
      case 294:;
        return;
        break;
      case 129:;
        if (tmp___39 % 10 >= 5) {
          _1_OBF_FUNC_next = 107UL;
        } else {
          _1_OBF_FUNC_next = 288UL;
        }
        break;
      case 130:
        tmp___43 = rand();
        _1_OBF_FUNC_next = 282UL;
        break;
      case 310:
        big = *(a + i);
        _1_OBF_FUNC_next = 168UL;
        break;
      case 25:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 152UL;
        } else {
          _1_OBF_FUNC_next = 314UL;
        }
        break;
      case 49:;
        if (tmp___34 % 10 >= 5) {
          _1_OBF_FUNC_next = 44UL;
        } else {
          _1_OBF_FUNC_next = 63UL;
        }
        break;
      case 52:
        i++;
        _1_OBF_FUNC_next = 225UL;
        break;
      case 200:;
        if (tmp___13 % 10 >= 5) {
          _1_OBF_FUNC_next = 290UL;
        } else {
          _1_OBF_FUNC_next = 323UL;
        }
        break;
      case 333:;
        if (tmp___45 % 10 >= 5) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 103UL;
        }
        break;
      case 250:;
        if (tmp___7 % 10 >= 5) {
          _1_OBF_FUNC_next = 238UL;
        } else {
          _1_OBF_FUNC_next = 58UL;
        }
        break;
      case 62:
        small = *(a + i);
        _1_OBF_FUNC_next = 301UL;
        break;
      case 185:
        tmp___16 = rand();
        _1_OBF_FUNC_next = 273UL;
        break;
      case 284:;
        if (tmp___21 % 10 >= 5) {
          _1_OBF_FUNC_next = 212UL;
        } else {
          _1_OBF_FUNC_next = 318UL;
        }
        break;
      case 106:
        big = *(a + i);
        _1_OBF_FUNC_next = 134UL;
        break;
      case 206:
        big = *(a + i);
        _1_OBF_FUNC_next = 308UL;
        break;
      case 14:
        tmp___17 = rand();
        _1_OBF_FUNC_next = 82UL;
        break;
      case 266:
        big = *(a + i);
        _1_OBF_FUNC_next = 32UL;
        break;
      case 277:
        tmp___34 = rand();
        _1_OBF_FUNC_next = 49UL;
        break;
      case 82:;
        if (tmp___17 % 10 >= 5) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 242UL;
        }
        break;
      case 291:
        big = *(a + 0);
        _1_OBF_FUNC_next = 240UL;
        break;
      case 56:;
        if (i < n) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 341UL;
        }
        break;
      case 79:
        i++;
        _1_OBF_FUNC_next = 177UL;
        break;
      case 270:
        tmp___1 = rand();
        _1_OBF_FUNC_next = 38UL;
        break;
      case 164:;
        if (tmp___11 % 10 >= 5) {
          _1_OBF_FUNC_next = 165UL;
        } else {
          _1_OBF_FUNC_next = 128UL;
        }
        break;
      case 341:;
        if (i < n) {
          _1_OBF_FUNC_next = 80UL;
        } else {
          _1_OBF_FUNC_next = 41UL;
        }
        break;
      case 31:;
        if (i < n) {
          _1_OBF_FUNC_next = 100UL;
        } else {
          _1_OBF_FUNC_next = 6UL;
        }
        break;
      case 12:
        i = 1;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 201:
        i++;
        _1_OBF_FUNC_next = 93UL;
        break;
      case 288:
        tmp___40 = rand();
        _1_OBF_FUNC_next = 316UL;
        break;
      case 45:
        i++;
        _1_OBF_FUNC_next = 107UL;
        break;
      case 78:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 206UL;
        } else {
          _1_OBF_FUNC_next = 308UL;
        }
        break;
      case 118:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 296UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 81:
        i++;
        _1_OBF_FUNC_next = 305UL;
        break;
      case 128:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 106UL;
        } else {
          _1_OBF_FUNC_next = 134UL;
        }
        break;
      case 236:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 6UL;
        } else {
          _1_OBF_FUNC_next = 255UL;
        }
        break;
      case 285:
        tmp___26 = rand();
        _1_OBF_FUNC_next = 339UL;
        break;
      case 273:;
        if (tmp___16 % 10 >= 5) {
          _1_OBF_FUNC_next = 225UL;
        } else {
          _1_OBF_FUNC_next = 257UL;
        }
        break;
      case 134:
        i++;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 337:
        big = *(a + i);
        _1_OBF_FUNC_next = 181UL;
        break;
      case 24:;
        if (i < n) {
          _1_OBF_FUNC_next = 259UL;
        } else {
          _1_OBF_FUNC_next = 165UL;
        }
        break;
      case 94:
        tmp___13 = rand();
        _1_OBF_FUNC_next = 200UL;
        break;
      case 109:
        tmp___39 = rand();
        _1_OBF_FUNC_next = 129UL;
        break;
      case 76:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 163UL;
        } else {
          _1_OBF_FUNC_next = 292UL;
        }
        break;
      case 245:;
        if (tmp___9 % 10 >= 5) {
          _1_OBF_FUNC_next = 24UL;
        } else {
          _1_OBF_FUNC_next = 5UL;
        }
        break;
      case 57:;
        if (tmp___12 % 10 >= 5) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 88UL;
        }
        break;
      case 156:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 257:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 281UL;
        } else {
          _1_OBF_FUNC_next = 207UL;
        }
        break;
      case 299:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 37UL;
        } else {
          _1_OBF_FUNC_next = 184UL;
        }
        break;
      case 11:
        tmp___28 = rand();
        _1_OBF_FUNC_next = 34UL;
        break;
      case 202:;
        if (tmp___2 % 10 >= 5) {
          _1_OBF_FUNC_next = 124UL;
        } else {
          _1_OBF_FUNC_next = 299UL;
        }
        break;
      case 51:;
        if (i < n) {
          _1_OBF_FUNC_next = 208UL;
        } else {
          _1_OBF_FUNC_next = 153UL;
        }
        break;
      case 107:;
        if (i < n) {
          _1_OBF_FUNC_next = 211UL;
        } else {
          _1_OBF_FUNC_next = 302UL;
        }
        break;
      case 312:
        i++;
        _1_OBF_FUNC_next = 320UL;
        break;
      case 146:
        tmp___4 = rand();
        _1_OBF_FUNC_next = 121UL;
        break;
      case 249:
        tmp___42 = rand();
        _1_OBF_FUNC_next = 117UL;
        break;
      case 316:;
        if (tmp___40 % 10 >= 5) {
          _1_OBF_FUNC_next = 107UL;
        } else {
          _1_OBF_FUNC_next = 293UL;
        }
        break;
      case 304:;
        if (tmp___27 % 10 >= 5) {
          _1_OBF_FUNC_next = 41UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 90:
        i++;
        _1_OBF_FUNC_next = 341UL;
        break;
      case 331:
        tmp___31 = rand();
        _1_OBF_FUNC_next = 221UL;
        break;
      case 40:
        tmp___38 = rand();
        _1_OBF_FUNC_next = 213UL;
        break;
      case 55:
        small = *(a + i);
        _1_OBF_FUNC_next = 172UL;
        break;
      case 132:;
        if (tmp___41 % 10 >= 5) {
          _1_OBF_FUNC_next = 302UL;
        } else {
          _1_OBF_FUNC_next = 249UL;
        }
        break;
      case 110:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 301UL;
        }
        break;
      case 193:
        big = *(a + i);
        _1_OBF_FUNC_next = 20UL;
        break;
      case 339:;
        if (tmp___26 % 10 >= 5) {
          _1_OBF_FUNC_next = 341UL;
        } else {
          _1_OBF_FUNC_next = 224UL;
        }
        break;
      case 59:
        big = *(a + i);
        _1_OBF_FUNC_next = 176UL;
        break;
      case 165:;
        if (i < n) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 183UL;
        }
        break;
      case 314:
        i++;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 6:;
        if (i < n) {
          _1_OBF_FUNC_next = 264UL;
        } else {
          _1_OBF_FUNC_next = 238UL;
        }
        break;
      case 308:
        i++;
        _1_OBF_FUNC_next = 212UL;
        break;
      case 116:
        tmp___19 = rand();
        _1_OBF_FUNC_next = 218UL;
        break;
      case 300:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 165UL;
        } else {
          _1_OBF_FUNC_next = 33UL;
        }
        break;
      case 342:
        tmp___33 = rand();
        _1_OBF_FUNC_next = 251UL;
        break;
      case 38:;
        if (tmp___1 % 10 >= 5) {
          _1_OBF_FUNC_next = 124UL;
        } else {
          _1_OBF_FUNC_next = 144UL;
        }
        break;
      case 61:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 15UL;
        } else {
          _1_OBF_FUNC_next = 215UL;
        }
        break;
      case 113:
        tmp___9 = rand();
        _1_OBF_FUNC_next = 245UL;
        break;
      case 256:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 278:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 125UL;
        } else {
          _1_OBF_FUNC_next = 105UL;
        }
        break;
      case 58:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 176UL;
        }
        break;
      case 170:
        tmp___23 = rand();
        _1_OBF_FUNC_next = 246UL;
        break;
      case 74:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 153UL;
        } else {
          _1_OBF_FUNC_next = 261UL;
        }
        break;
      case 112:
        i++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 255:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 266UL;
        } else {
          _1_OBF_FUNC_next = 32UL;
        }
        break;
      case 75:;
        if (tmp___36 % 10 >= 5) {
          _1_OBF_FUNC_next = 306UL;
        } else {
          _1_OBF_FUNC_next = 76UL;
        }
        break;
      case 123:
        tmp___37 = rand();
        _1_OBF_FUNC_next = 171UL;
        break;
      case 267:
        tmp___24 = rand();
        _1_OBF_FUNC_next = 216UL;
        break;
      case 48:;
        if (tmp___20 % 10 >= 5) {
          _1_OBF_FUNC_next = 205UL;
        } else {
          _1_OBF_FUNC_next = 244UL;
        }
        break;
      case 139:
        big = *(a + i);
        _1_OBF_FUNC_next = 312UL;
        break;
      case 147:
        big = *(a + i);
        _1_OBF_FUNC_next = 174UL;
        break;
      case 71:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 227UL;
        } else {
          _1_OBF_FUNC_next = 90UL;
        }
        break;
      case 293:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 55UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 260:
        tmp___15 = rand();
        _1_OBF_FUNC_next = 180UL;
        break;
      case 53:;
        {
          if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
            if (i < n) {
              _1_OBF_FUNC_next = 109UL;
            } else {
              _1_OBF_FUNC_next = 107UL;
            }
          } else {
          }
        }
        break;
      case 240:
        small = *(a + 0);
        _1_OBF_FUNC_next = 12UL;
        break;
      case 218:;
        if (tmp___19 % 10 >= 5) {
          _1_OBF_FUNC_next = 275UL;
        } else {
          _1_OBF_FUNC_next = 258UL;
        }
        break;
      case 311:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 42UL;
        } else {
          _1_OBF_FUNC_next = 52UL;
        }
        break;
      case 47:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 147UL;
        } else {
          _1_OBF_FUNC_next = 174UL;
        }
        break;
      case 73:;
        if (big < *(a + i)) {
          _1_OBF_FUNC_next = 194UL;
        } else {
          _1_OBF_FUNC_next = 286UL;
        }
        break;
      case 91:;
        if (small > *(a + i)) {
          _1_OBF_FUNC_next = 295UL;
        } else {
          _1_OBF_FUNC_next = 340UL;
        }
        break;
      case 282:;
        if (tmp___43 % 10 >= 5) {
          _1_OBF_FUNC_next = 305UL;
        } else {
          _1_OBF_FUNC_next = 61UL;
        }
        break;
      case 163:
        small = *(a + i);
        _1_OBF_FUNC_next = 292UL;
        break;
      case 37:
        big = *(a + i);
        _1_OBF_FUNC_next = 184UL;
        break;
      case 265:
        small = *(a + i);
        _1_OBF_FUNC_next = 45UL;
        break;
      case 327:
        i++;
        _1_OBF_FUNC_next = 3UL;
        break;
      case 41:;
        if (i < n) {
          _1_OBF_FUNC_next = 119UL;
        } else {
          _1_OBF_FUNC_next = 298UL;
        }
        break;
      case 95:;
        if (tmp___35 % 10 >= 5) {
          _1_OBF_FUNC_next = 44UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 198:
        big = *(a + i);
        _1_OBF_FUNC_next = 327UL;
        break;
      case 290:;
        if (i < n) {
          _1_OBF_FUNC_next = 260UL;
        } else {
          _1_OBF_FUNC_next = 225UL;
        }
        break;
      case 42:
        big = *(a + i);
        _1_OBF_FUNC_next = 52UL;
        break;
      case 287:
        i = 1;
        _1_OBF_FUNC_next = 122UL;
        break;
      case 229:
        small = *(a + i);
        _1_OBF_FUNC_next = 79UL;
        break;
      case 46:
        tmp___7 = rand();
        _1_OBF_FUNC_next = 250UL;
        break;
      case 177:;
        if (i < n) {
          _1_OBF_FUNC_next = 104UL;
        } else {
          _1_OBF_FUNC_next = 189UL;
        }
        break;
      case 66:;
        if (i < n) {
          _1_OBF_FUNC_next = 2UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 83:
        i++;
        _1_OBF_FUNC_next = 205UL;
        break;
      case 340:
        i++;
        _1_OBF_FUNC_next = 298UL;
        break;
      case 336:
        big = *(a + i);
        _1_OBF_FUNC_next = 233UL;
        break;
      case 238:;
        if (i < n) {
          _1_OBF_FUNC_next = 187UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 29:;
        if (tmp___46 % 10 >= 5) {
          _1_OBF_FUNC_next = 160UL;
        } else {
          _1_OBF_FUNC_next = 278UL;
        }
        break;
      case 43:
        tmp___21 = rand();
        _1_OBF_FUNC_next = 284UL;
        break;
      case 2:
        tmp___46 = rand();
        _1_OBF_FUNC_next = 29UL;
        break;
      }
    }
  }
}
// variants: loop-fission, loop-fission, block-fission
// expanded variants: loop-fission, loop-fission, block-fission:default
