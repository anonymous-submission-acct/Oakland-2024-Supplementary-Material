typedef void *__builtin_va_list;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_mutex_t_335460617;
struct drand48_data;
struct __pthread_rwlock_arch_t;
union __anonunion____missing_field_name_868236017;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct_div_t_773697287;
struct __anonstruct___sigset_t_973126068;
union __anonunion____missing_field_name_124538119;
union __anonunion_pthread_mutexattr_t_488594144;
struct __pthread_mutex_s;
struct __anonstruct___wseq32_961093918;
struct timespec;
union pthread_attr_t;
union __anonunion_pthread_rwlock_t_656928968;
struct __pthread_internal_slist;
struct __anonstruct___fsid_t_109580352;
union __anonunion_pthread_cond_t_951761805;
struct __pthread_internal_list;
struct __anonstruct_ldiv_t_790849867;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct random_data;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_cond_s;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_rwlockattr_t_145707745;
struct timeval;
struct __anonstruct_fd_set_356711149;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion_pthread_barrierattr_t_951761806;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
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
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __fd_mask;
typedef long __off64_t;
typedef long __blkcnt_t;
extern int(at_quick_exit)(void (*__func)(void));
extern int(setenv)(char const *__name, char const *__value, int __replace);
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
typedef __clockid_t clockid_t;
typedef unsigned int pthread_key_t;
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
extern void(srand)(unsigned int __seed);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
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
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
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
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
typedef unsigned int __socklen_t;
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
unsigned long _2_entropy = 3304548999878078102UL;
typedef __uint64_t __uint_least64_t;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __suseconds_t suseconds_t;
typedef __int64_t __int_least64_t;
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
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef __gid_t gid_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
int *OBF_FUNC(int *arr, int low, int mid, int high);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
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
int *OBF_FUNC(int *arr, int low, int mid, int high) {
  int i;
  int m;
  int k;
  int l;
  int temp[50];
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
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p23;
  int i24;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p25;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p29;
  int i30;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p31;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p29 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p29->next = p29;
      p29->prev = p29;
      _3_OBF_FUNC_2_opaque_list_1 = p29;
      i30 = 0;
      while (i30 < 2) {
        p31 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p31->data = i30 * ((_2_entropy & ~4) + 4);
        p31->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p31->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p31;
        _3_OBF_FUNC_2_opaque_list_1->next = p31;
        i30++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p23 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p23->next = p23;
      p23->prev = p23;
      _3_OBF_FUNC_1_opaque_list_1 = p23;
      i24 = 0;
      while (i24 < 2) {
        p25 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p25->data = i24 * (((_2_entropy | 3) + (_2_entropy | 3)) - (_2_entropy ^ 3));
        p25->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p25->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p25;
        _3_OBF_FUNC_1_opaque_list_1->next = p25;
        i24++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 75UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 50:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 0UL;
        break;
      case 108:
        k = l;
        _1_OBF_FUNC_next = 151UL;
        break;
      case 104:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 76UL;
        } else {
          _1_OBF_FUNC_next = 7UL;
        }
        break;
      case 130:;
        if (tmp___6 % 10 >= 5) {
          _1_OBF_FUNC_next = 24UL;
        } else {
          _1_OBF_FUNC_next = 138UL;
        }
        break;
      case 25:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 105UL;
        } else {
          _1_OBF_FUNC_next = 16UL;
        }
        break;
      case 49:;
        if (m <= high) {
          _1_OBF_FUNC_next = 57UL;
        } else {
          _1_OBF_FUNC_next = 5UL;
        }
        break;
      case 4:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 99UL;
        break;
      case 30:;
        if (tmp___9 % 10 >= 5) {
          _1_OBF_FUNC_next = 34UL;
        } else {
          _1_OBF_FUNC_next = 147UL;
        }
        break;
      case 62:;
        if (m <= high) {
          _1_OBF_FUNC_next = 153UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 102:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 29UL;
        break;
      case 106:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 145UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 14:
        k++;
        _1_OBF_FUNC_next = 105UL;
        break;
      case 145:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 98UL;
        break;
      case 133:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 43UL;
        } else {
          _1_OBF_FUNC_next = 107UL;
        }
        break;
      case 89:;
        if (k <= high) {
          _1_OBF_FUNC_next = 97UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 79:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 94UL;
        break;
      case 31:
        tmp___4 = rand();
        _1_OBF_FUNC_next = 48UL;
        break;
      case 121:;
        if (k <= high) {
          _1_OBF_FUNC_next = 79UL;
        } else {
          _1_OBF_FUNC_next = 137UL;
        }
        break;
      case 69:;
        return (arr);
        break;
      case 152:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 88UL;
        } else {
          _1_OBF_FUNC_next = 134UL;
        }
        break;
      case 96:
        l++;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 54:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 26UL;
        break;
      case 124:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 90UL;
        break;
      case 118:
        i++;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 81:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 154UL;
        break;
      case 128:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 152UL;
        break;
      case 134:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 139UL;
        break;
      case 16:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 13UL;
        break;
      case 24:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 71UL;
        } else {
          _1_OBF_FUNC_next = 87UL;
        }
        break;
      case 21:
        i++;
        _1_OBF_FUNC_next = 104UL;
        break;
      case 94:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 137UL;
        } else {
          _1_OBF_FUNC_next = 135UL;
        }
        break;
      case 76:;
        if (m <= high) {
          _1_OBF_FUNC_next = 17UL;
        } else {
          _1_OBF_FUNC_next = 7UL;
        }
        break;
      case 131:
        i++;
        _1_OBF_FUNC_next = 5UL;
        break;
      case 57:
        tmp___1 = rand();
        _1_OBF_FUNC_next = 59UL;
        break;
      case 68:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 102UL;
        }
        break;
      case 122:;
        if (tmp___7 % 10 >= 5) {
          _1_OBF_FUNC_next = 87UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 85:
        i++;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 100:
        i++;
        _1_OBF_FUNC_next = 86UL;
        break;
      case 26:
        i++;
        _1_OBF_FUNC_next = 155UL;
        break;
      case 98:
        l++;
        _1_OBF_FUNC_next = 37UL;
        break;
      case 105:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 60UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 11:
        m++;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 9:;
        {
          if (_3_OBF_FUNC_1_opaque_ptr_1 != _3_OBF_FUNC_1_opaque_ptr_2) {
          } else if (tmp___2 % 10 >= 5) {
            _1_OBF_FUNC_next = 121UL;
          } else {
            _1_OBF_FUNC_next = 63UL;
          }
        }
        break;
      case 135:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 100UL;
        break;
      case 13:
        i++;
        _1_OBF_FUNC_next = 38UL;
        break;
      case 63:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 85UL;
        break;
      case 107:
        temp[i] = *(arr + m);
        _1_OBF_FUNC_next = 11UL;
        break;
      case 146:
        k++;
        _1_OBF_FUNC_next = 87UL;
        break;
      case 17:
        tmp = rand();
        _1_OBF_FUNC_next = 144UL;
        break;
      case 90:
        i++;
        _1_OBF_FUNC_next = 10UL;
        break;
      case 40:
        k = m;
        _1_OBF_FUNC_next = 89UL;
        break;
      case 55:;
        if (k <= high) {
          _1_OBF_FUNC_next = 35UL;
        } else {
          _1_OBF_FUNC_next = 149UL;
        }
        break;
      case 132:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 49UL;
        } else {
          _1_OBF_FUNC_next = 5UL;
        }
        break;
      case 110:
        k++;
        _1_OBF_FUNC_next = 89UL;
        break;
      case 60:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 130UL;
        break;
      case 150:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 65UL;
        break;
      case 59:;
        if (tmp___1 % 10 >= 5) {
          _1_OBF_FUNC_next = 5UL;
        } else {
          _1_OBF_FUNC_next = 133UL;
        }
        break;
      case 6:
        k++;
        _1_OBF_FUNC_next = 53UL;
        break;
      case 155:
        k++;
        _1_OBF_FUNC_next = 137UL;
        break;
      case 142:;
        if (l > mid) {
          _1_OBF_FUNC_next = 40UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 144:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 2UL;
        }
        break;
      case 137:;
        if (k <= high) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 55UL;
        }
        break;
      case 154:
        m++;
        _1_OBF_FUNC_next = 37UL;
        break;
      case 151:;
        if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
          if (k <= mid) {
            _1_OBF_FUNC_next = 28UL;
          } else {
            _1_OBF_FUNC_next = 105UL;
          }
        } else {
        }
        break;
      case 38:
        k++;
        _1_OBF_FUNC_next = 151UL;
        break;
      case 61:
        m = mid + 1;
        _1_OBF_FUNC_next = 104UL;
        break;
      case 87:;
        if (k <= mid) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 149UL;
        }
        break;
      case 138:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 33UL;
        break;
      case 58:;
        if (k <= high) {
          _1_OBF_FUNC_next = 128UL;
        } else {
          _1_OBF_FUNC_next = 88UL;
        }
        break;
      case 84:;
        if (m <= high) {
          _1_OBF_FUNC_next = 47UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 34:;
        if (k <= high) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 74:
        k++;
        _1_OBF_FUNC_next = 88UL;
        break;
      case 75:
        l = low;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 123:
        l++;
        _1_OBF_FUNC_next = 21UL;
        break;
      case 48:;
        if (tmp___4 % 10 >= 5) {
          _1_OBF_FUNC_next = 55UL;
        } else {
          _1_OBF_FUNC_next = 54UL;
        }
        break;
      case 127:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 118UL;
        break;
      case 139:
        k++;
        _1_OBF_FUNC_next = 58UL;
        break;
      case 147:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 74UL;
        break;
      case 71:
        tmp___7 = rand();
        _1_OBF_FUNC_next = 122UL;
        break;
      case 22:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 68UL;
        break;
      case 28:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 25UL;
        break;
      case 53:;
        if (k <= high) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 69UL;
        }
        break;
      case 65:
        l++;
        _1_OBF_FUNC_next = 131UL;
        break;
      case 47:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 150UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 5:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 84UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 91:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 123UL;
        break;
      case 97:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 9UL;
        break;
      case 72:
        i++;
        _1_OBF_FUNC_next = 132UL;
        break;
      case 99:
        m++;
        _1_OBF_FUNC_next = 21UL;
        break;
      case 33:
        i++;
        _1_OBF_FUNC_next = 14UL;
        break;
      case 37:
        i++;
        _1_OBF_FUNC_next = 7UL;
        break;
      case 64:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 132UL;
        } else {
          _1_OBF_FUNC_next = 106UL;
        }
        break;
      case 41:
        i = low;
        _1_OBF_FUNC_next = 61UL;
        break;
      case 149:
        k = low;
        _1_OBF_FUNC_next = 58UL;
        break;
      case 115:
        *(arr + k) = temp[k];
        _1_OBF_FUNC_next = 6UL;
        break;
      case 10:
        k++;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 42:
        i++;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 0:
        m++;
        _1_OBF_FUNC_next = 131UL;
        break;
      case 136:
        tmp___9 = rand();
        _1_OBF_FUNC_next = 30UL;
        break;
      case 153:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 64UL;
        break;
      case 7:;
        if (l <= mid) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 88:;
        if (k <= high) {
          _1_OBF_FUNC_next = 136UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 35:
        temp[i] = *(arr + k);
        _1_OBF_FUNC_next = 42UL;
        break;
      case 29:
        k++;
        _1_OBF_FUNC_next = 34UL;
        break;
      case 43:
        temp[i] = *(arr + l);
        _1_OBF_FUNC_next = 96UL;
        break;
      case 86:
        k++;
        _1_OBF_FUNC_next = 121UL;
        break;
      case 2:;
        if (*(arr + l) <= *(arr + m)) {
          _1_OBF_FUNC_next = 91UL;
        } else {
          _1_OBF_FUNC_next = 4UL;
        }
        break;
      case 20:
        k++;
        _1_OBF_FUNC_next = 55UL;
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
// variants: loop-fission, block-fission
// expanded variants: loop-fission, block-fission:default
