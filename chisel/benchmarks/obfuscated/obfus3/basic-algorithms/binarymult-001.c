typedef void *__builtin_va_list;
struct __anonstruct___g1_start32_961093919;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion____missing_field_name_1053313772;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_internal_slist;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___wseq32_961093918;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct_ldiv_t_790849867;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __pthread_cond_s;
struct __pthread_internal_list;
union pthread_attr_t;
struct __pthread_mutex_s;
struct timespec;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_condattr_t_488594145;
struct random_data;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct_fd_set_356711149;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___fsid_t_109580352;
struct drand48_data;
union __anonunion_pthread_cond_t_951761805;
struct timeval;
struct __anonstruct_div_t_773697287;
union __anonunion____missing_field_name_825468013;
typedef unsigned int __mode_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
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
unsigned long _1_entropy = 8799470343233592087UL;
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
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_825468013 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
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
extern int(at_quick_exit)(void (*__func)(void));
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern double(strtod)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
  int data;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
};
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef int __clockid_t;
typedef unsigned int __gid_t;
typedef int __sig_atomic_t;
typedef unsigned long __ino64_t;
typedef int __key_t;
typedef __key_t key_t;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_1 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef int __int32_t;
typedef __off64_t __loff_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_2 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
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
unsigned long _1_alwaysZero = 0;
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __int16_t __int_least16_t;
typedef __int32_t int32_t;
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
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
typedef struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_StructureType;
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
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
extern double(atof)(char const *__nptr);
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
typedef __sigset_t sigset_t;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_1053313772 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_1053313772 __annonCompField1;
  union __anonunion____missing_field_name_825468013 __annonCompField2;
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
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_2 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_1 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern long double(strtold)(char const *__nptr, char **__endptr);
typedef int __pid_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_1 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __anonstruct_div_t_773697287 div_t;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
int binaryAddition(int binary1, int binary2);
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
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
long OBF_FUNC(long binary1, long binary2);
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
typedef long __fsword_t;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int binaryAddition(int binary1, int binary2) {
  int i;
  int remainder;
  int sum[20];
  int binarySum;
  {
    i = 0;
    remainder = 0;
    binarySum = 0;
    while (1) {
      if (!(binary1 != 0)) {
        if (!(binary2 != 0)) {
          break;
        }
      }
      sum[i] = ((binary1 % 10 + binary2 % 10) + remainder) % 2;
      remainder = ((binary1 % 10 + binary2 % 10) + remainder) / 2;
      binary1 /= 10;
      binary2 /= 10;
      i++;
    }
    if (remainder != 0) {
      sum[i] = remainder;
      i++;
    }
    i--;
    while (i >= 0) {
      binarySum = binarySum * 10 + sum[i];
      i--;
    }
    return (binarySum);
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  long binary1;
  long binary2;
  int tmp;
  int tmp___0;
  long tmp___1;
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
    binary1 = (long)tmp;
    tmp___0 = atoi((char const *)*(argv + 2));
    binary2 = (long)tmp___0;
    tmp___1 = OBF_FUNC(binary1, binary2);
    printf("%ld", tmp___1);
    return (0);
  }
}
long OBF_FUNC(long binary1, long binary2) {
  long multiply;
  int factor;
  int __RANDVAR__90088903078261095986__;
  int __RANDVAR__7063112447428760016__;
  int digit;
  int tmp;
  int digit___0;
  int tmp___0;
  int digit___1;
  int tmp___1;
  int __RANDVAR__56123965015720800090__;
  int digit___2;
  int tmp___2;
  int digit___3;
  int tmp___3;
  int digit___4;
  int tmp___4;
  int digit___5;
  int tmp___5;
  int digit___6;
  int tmp___6;
  int digit___7;
  int tmp___7;
  int digit___8;
  int tmp___8;
  int digit___9;
  int tmp___9;
  int digit___10;
  int tmp___10;
  int digit___11;
  int tmp___11;
  int digit___12;
  int tmp___12;
  int digit___13;
  int tmp___13;
  int digit___14;
  int tmp___14;
  int digit___15;
  int tmp___15;
  int digit___16;
  int tmp___16;
  int digit___17;
  int tmp___17;
  int digit___18;
  int tmp___18;
  int digit___19;
  int tmp___19;
  int digit___20;
  int tmp___20;
  int digit___21;
  int tmp___21;
  int digit___22;
  int tmp___22;
  int __RANDVAR__59518795449265191081__;
  int digit___23;
  int tmp___23;
  int digit___24;
  int tmp___24;
  int digit___25;
  int tmp___25;
  int digit___26;
  int tmp___26;
  int digit___27;
  int tmp___27;
  int digit___28;
  int tmp___28;
  int digit___29;
  int tmp___29;
  int digit___30;
  int tmp___30;
  int digit___31;
  int tmp___31;
  int digit___32;
  int tmp___32;
  int digit___33;
  int tmp___33;
  int digit___34;
  int tmp___34;
  int digit___35;
  int tmp___35;
  int digit___36;
  int tmp___36;
  int digit___37;
  int tmp___37;
  int digit___38;
  int tmp___38;
  int digit___39;
  int tmp___39;
  int digit___40;
  int tmp___40;
  int digit___41;
  int tmp___41;
  int digit___42;
  int tmp___42;
  int digit___43;
  int tmp___43;
  int __RANDVAR__72294987152194847965__;
  int digit___44;
  int tmp___44;
  int digit___45;
  int tmp___45;
  int digit___46;
  int tmp___46;
  int digit___47;
  int tmp___47;
  int digit___48;
  int tmp___48;
  int digit___49;
  int tmp___49;
  int digit___50;
  int tmp___50;
  int digit___51;
  int tmp___51;
  int digit___52;
  int tmp___52;
  int digit___53;
  int tmp___53;
  int digit___54;
  int tmp___54;
  int digit___55;
  int tmp___55;
  int digit___56;
  int tmp___56;
  int digit___57;
  int tmp___57;
  int digit___58;
  int tmp___58;
  int digit___59;
  int tmp___59;
  int digit___60;
  int tmp___60;
  int digit___61;
  int tmp___61;
  int digit___62;
  int tmp___62;
  int digit___63;
  int tmp___63;
  int digit___64;
  int tmp___64;
  int __RANDVAR__34073436616933931500__;
  int digit___65;
  int tmp___65;
  int digit___66;
  int tmp___66;
  int digit___67;
  int tmp___67;
  int digit___68;
  int tmp___68;
  int digit___69;
  int tmp___69;
  int digit___70;
  int tmp___70;
  int digit___71;
  int tmp___71;
  int digit___72;
  int tmp___72;
  int digit___73;
  int tmp___73;
  int digit___74;
  int tmp___74;
  int digit___75;
  int tmp___75;
  int digit___76;
  int tmp___76;
  int digit___77;
  int tmp___77;
  int digit___78;
  int tmp___78;
  int digit___79;
  int tmp___79;
  int digit___80;
  int tmp___80;
  int digit___81;
  int tmp___81;
  int digit___82;
  int tmp___82;
  int digit___83;
  int tmp___83;
  int digit___84;
  int tmp___84;
  int digit___85;
  int tmp___85;
  int __RANDVAR__99531437937801101977__;
  int digit___86;
  int tmp___86;
  int digit___87;
  int tmp___87;
  int digit___88;
  int tmp___88;
  int digit___89;
  int tmp___89;
  int digit___90;
  int tmp___90;
  int digit___91;
  int tmp___91;
  int digit___92;
  int tmp___92;
  int digit___93;
  int tmp___93;
  int digit___94;
  int tmp___94;
  int digit___95;
  int tmp___95;
  int digit___96;
  int tmp___96;
  int digit___97;
  int tmp___97;
  int digit___98;
  int tmp___98;
  int digit___99;
  int tmp___99;
  int digit___100;
  int tmp___100;
  int digit___101;
  int tmp___101;
  int digit___102;
  int tmp___102;
  int digit___103;
  int tmp___103;
  int digit___104;
  int tmp___104;
  int digit___105;
  int tmp___105;
  int digit___106;
  int tmp___106;
  int __RANDVAR__45725572893629907407__;
  int digit___107;
  int tmp___107;
  int digit___108;
  int tmp___108;
  int digit___109;
  int tmp___109;
  int digit___110;
  int tmp___110;
  int digit___111;
  int tmp___111;
  int digit___112;
  int tmp___112;
  int digit___113;
  int tmp___113;
  int digit___114;
  int tmp___114;
  int digit___115;
  int tmp___115;
  int digit___116;
  int tmp___116;
  int digit___117;
  int tmp___117;
  int digit___118;
  int tmp___118;
  int digit___119;
  int tmp___119;
  int digit___120;
  int tmp___120;
  int digit___121;
  int tmp___121;
  int digit___122;
  int tmp___122;
  int digit___123;
  int tmp___123;
  int digit___124;
  int tmp___124;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p265;
  int i266;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p267;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p271;
  int i272;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p273;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p271 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p271->next = p271;
      p271->prev = p271;
      _2_OBF_FUNC_2_opaque_list_1 = p271;
      i272 = 0;
      while (i272 < 2) {
        p273 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p273->data = i272 * ((_1_entropy & 10) * (_1_entropy | 10) + (_1_entropy & ~10) * (~_1_entropy & 10));
        p273->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p273->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p273;
        _2_OBF_FUNC_2_opaque_list_1->next = p273;
        i272++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_2->next;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p265 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p265->next = p265;
      p265->prev = p265;
      _2_OBF_FUNC_1_opaque_list_1 = p265;
      i266 = 0;
      while (i266 < 3) {
        p267 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p267->data = i266 * ((_1_entropy & ~7) + 7);
        p267->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p267->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p267;
        _2_OBF_FUNC_1_opaque_list_1->next = p267;
        i266++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_2->next;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    multiply = 0L;
    factor = 1;
    __RANDVAR__90088903078261095986__ = 0;
    __RANDVAR__7063112447428760016__ = 0;
    while (__RANDVAR__7063112447428760016__ == 0) {
      if (__RANDVAR__90088903078261095986__ == 0) {
        if (binary2 != 0L) {
          digit = (int)(binary2 % 10L);
          if (digit == 1) {
            binary1 *= (long)factor;
            tmp = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___0 = (int)(binary2 % 10L);
          if (digit___0 == 1) {
            binary1 *= (long)factor;
            tmp___0 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___0;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___1 = (int)(binary2 % 10L);
          if (digit___1 == 1) {
            binary1 *= (long)factor;
            tmp___1 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___1;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        __RANDVAR__56123965015720800090__ = 0;
        while (__RANDVAR__56123965015720800090__ == 0) {
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___2 = (int)(binary2 % 10L);
              if (digit___2 == 1) {
                binary1 *= (long)factor;
                tmp___2 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___2;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___3 = (int)(binary2 % 10L);
              if (digit___3 == 1) {
                binary1 *= (long)factor;
                tmp___3 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___3;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___4 = (int)(binary2 % 10L);
              if (digit___4 == 1) {
                binary1 *= (long)factor;
                tmp___4 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___4;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___5 = (int)(binary2 % 10L);
              if (digit___5 == 1) {
                binary1 *= (long)factor;
                tmp___5 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___5;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___6 = (int)(binary2 % 10L);
              if (digit___6 == 1) {
                binary1 *= (long)factor;
                tmp___6 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___6;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___7 = (int)(binary2 % 10L);
              if (digit___7 == 1) {
                binary1 *= (long)factor;
                tmp___7 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___7;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___8 = (int)(binary2 % 10L);
              if (digit___8 == 1) {
                binary1 *= (long)factor;
                tmp___8 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___8;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___9 = (int)(binary2 % 10L);
              if (digit___9 == 1) {
                binary1 *= (long)factor;
                tmp___9 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___9;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___10 = (int)(binary2 % 10L);
              if (digit___10 == 1) {
                binary1 *= (long)factor;
                tmp___10 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___10;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          while (binary2 != 0L) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___11 = (int)(binary2 % 10L);
                if (digit___11 == 1) {
                  binary1 *= (long)factor;
                  tmp___11 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___11;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___12 = (int)(binary2 % 10L);
                if (digit___12 == 1) {
                  binary1 *= (long)factor;
                  tmp___12 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___12;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___13 = (int)(binary2 % 10L);
                if (digit___13 == 1) {
                  binary1 *= (long)factor;
                  tmp___13 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___13;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___14 = (int)(binary2 % 10L);
                if (digit___14 == 1) {
                  binary1 *= (long)factor;
                  tmp___14 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___14;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___15 = (int)(binary2 % 10L);
                if (digit___15 == 1) {
                  binary1 *= (long)factor;
                  tmp___15 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___15;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___16 = (int)(binary2 % 10L);
                if (digit___16 == 1) {
                  binary1 *= (long)factor;
                  tmp___16 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___16;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___17 = (int)(binary2 % 10L);
                if (digit___17 == 1) {
                  binary1 *= (long)factor;
                  tmp___17 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___17;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___18 = (int)(binary2 % 10L);
                if (digit___18 == 1) {
                  binary1 *= (long)factor;
                  tmp___18 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___18;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___19 = (int)(binary2 % 10L);
                if (digit___19 == 1) {
                  binary1 *= (long)factor;
                  tmp___19 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___19;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
          }
          __RANDVAR__56123965015720800090__ = 1;
        }
        __RANDVAR__90088903078261095986__ = 1;
      }
      if (__RANDVAR__90088903078261095986__ == 0) {
        if (binary2 != 0L) {
          digit___20 = (int)(binary2 % 10L);
          if (digit___20 == 1) {
            binary1 *= (long)factor;
            tmp___20 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___20;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___21 = (int)(binary2 % 10L);
          if (digit___21 == 1) {
            binary1 *= (long)factor;
            tmp___21 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___21;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___22 = (int)(binary2 % 10L);
          if (digit___22 == 1) {
            binary1 *= (long)factor;
            tmp___22 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___22;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        __RANDVAR__59518795449265191081__ = 0;
        while (__RANDVAR__59518795449265191081__ == 0) {
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___23 = (int)(binary2 % 10L);
              if (digit___23 == 1) {
                binary1 *= (long)factor;
                tmp___23 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___23;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___24 = (int)(binary2 % 10L);
              if (digit___24 == 1) {
                binary1 *= (long)factor;
                tmp___24 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___24;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___25 = (int)(binary2 % 10L);
              if (digit___25 == 1) {
                binary1 *= (long)factor;
                tmp___25 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___25;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___26 = (int)(binary2 % 10L);
              if (digit___26 == 1) {
                binary1 *= (long)factor;
                tmp___26 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___26;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___27 = (int)(binary2 % 10L);
              if (digit___27 == 1) {
                binary1 *= (long)factor;
                tmp___27 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___27;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___28 = (int)(binary2 % 10L);
              if (digit___28 == 1) {
                binary1 *= (long)factor;
                tmp___28 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___28;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___29 = (int)(binary2 % 10L);
              if (digit___29 == 1) {
                binary1 *= (long)factor;
                tmp___29 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___29;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___30 = (int)(binary2 % 10L);
              if (digit___30 == 1) {
                binary1 *= (long)factor;
                tmp___30 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___30;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___31 = (int)(binary2 % 10L);
              if (digit___31 == 1) {
                binary1 *= (long)factor;
                tmp___31 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___31;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          while (binary2 != 0L) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___32 = (int)(binary2 % 10L);
                if (digit___32 == 1) {
                  binary1 *= (long)factor;
                  tmp___32 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___32;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___33 = (int)(binary2 % 10L);
                if (digit___33 == 1) {
                  binary1 *= (long)factor;
                  tmp___33 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___33;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___34 = (int)(binary2 % 10L);
                if (digit___34 == 1) {
                  binary1 *= (long)factor;
                  tmp___34 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___34;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___35 = (int)(binary2 % 10L);
                if (digit___35 == 1) {
                  binary1 *= (long)factor;
                  tmp___35 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___35;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___36 = (int)(binary2 % 10L);
                if (digit___36 == 1) {
                  binary1 *= (long)factor;
                  tmp___36 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___36;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___37 = (int)(binary2 % 10L);
                if (digit___37 == 1) {
                  binary1 *= (long)factor;
                  tmp___37 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___37;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___38 = (int)(binary2 % 10L);
                if (digit___38 == 1) {
                  binary1 *= (long)factor;
                  tmp___38 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___38;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___39 = (int)(binary2 % 10L);
                if (digit___39 == 1) {
                  binary1 *= (long)factor;
                  tmp___39 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___39;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___40 = (int)(binary2 % 10L);
                if (digit___40 == 1) {
                  binary1 *= (long)factor;
                  tmp___40 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___40;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
          }
          __RANDVAR__59518795449265191081__ = 1;
        }
        __RANDVAR__90088903078261095986__ = 1;
      }
      if (__RANDVAR__90088903078261095986__ == 0) {
        if (binary2 != 0L) {
          digit___41 = (int)(binary2 % 10L);
          if (digit___41 == 1) {
            binary1 *= (long)factor;
            tmp___41 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___41;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___42 = (int)(binary2 % 10L);
          if (digit___42 == 1) {
            binary1 *= (long)factor;
            tmp___42 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___42;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        if (binary2 != 0L) {
          digit___43 = (int)(binary2 % 10L);
          if (digit___43 == 1) {
            binary1 *= (long)factor;
            tmp___43 = binaryAddition((int)binary1, (int)multiply);
            multiply = (long)tmp___43;
          } else {
            binary1 *= (long)factor;
          }
          binary2 /= 10L;
          factor = 10;
        }
        __RANDVAR__72294987152194847965__ = 0;
        while (__RANDVAR__72294987152194847965__ == 0) {
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___44 = (int)(binary2 % 10L);
              if (digit___44 == 1) {
                binary1 *= (long)factor;
                tmp___44 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___44;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___45 = (int)(binary2 % 10L);
              if (digit___45 == 1) {
                binary1 *= (long)factor;
                tmp___45 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___45;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___46 = (int)(binary2 % 10L);
              if (digit___46 == 1) {
                binary1 *= (long)factor;
                tmp___46 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___46;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___47 = (int)(binary2 % 10L);
              if (digit___47 == 1) {
                binary1 *= (long)factor;
                tmp___47 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___47;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___48 = (int)(binary2 % 10L);
              if (digit___48 == 1) {
                binary1 *= (long)factor;
                tmp___48 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___48;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___49 = (int)(binary2 % 10L);
              if (digit___49 == 1) {
                binary1 *= (long)factor;
                tmp___49 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___49;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          if (binary2 != 0L) {
            if (binary2 != 0L) {
              digit___50 = (int)(binary2 % 10L);
              if (digit___50 == 1) {
                binary1 *= (long)factor;
                tmp___50 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___50;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___51 = (int)(binary2 % 10L);
              if (digit___51 == 1) {
                binary1 *= (long)factor;
                tmp___51 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___51;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
            if (binary2 != 0L) {
              digit___52 = (int)(binary2 % 10L);
              if (digit___52 == 1) {
                binary1 *= (long)factor;
                tmp___52 = binaryAddition((int)binary1, (int)multiply);
                multiply = (long)tmp___52;
              } else {
                binary1 *= (long)factor;
              }
              binary2 /= 10L;
              factor = 10;
            }
          }
          while (binary2 != 0L) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___53 = (int)(binary2 % 10L);
                if (digit___53 == 1) {
                  binary1 *= (long)factor;
                  tmp___53 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___53;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___54 = (int)(binary2 % 10L);
                if (digit___54 == 1) {
                  binary1 *= (long)factor;
                  tmp___54 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___54;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___55 = (int)(binary2 % 10L);
                if (digit___55 == 1) {
                  binary1 *= (long)factor;
                  tmp___55 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___55;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___56 = (int)(binary2 % 10L);
                if (digit___56 == 1) {
                  binary1 *= (long)factor;
                  tmp___56 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___56;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___57 = (int)(binary2 % 10L);
                if (digit___57 == 1) {
                  binary1 *= (long)factor;
                  tmp___57 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___57;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___58 = (int)(binary2 % 10L);
                if (digit___58 == 1) {
                  binary1 *= (long)factor;
                  tmp___58 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___58;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___59 = (int)(binary2 % 10L);
                if (digit___59 == 1) {
                  binary1 *= (long)factor;
                  tmp___59 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___59;
                } else if (_2_OBF_FUNC_2_opaque_ptr_1 != _2_OBF_FUNC_2_opaque_ptr_2) {
                  binary1 *= (long)factor;
                } else {
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___60 = (int)(binary2 % 10L);
                if (digit___60 == 1) {
                  binary1 *= (long)factor;
                  tmp___60 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___60;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___61 = (int)(binary2 % 10L);
                if (digit___61 == 1) {
                  binary1 *= (long)factor;
                  tmp___61 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___61;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
          }
          __RANDVAR__72294987152194847965__ = 1;
        }
        __RANDVAR__90088903078261095986__ = 1;
      }
      while (__RANDVAR__90088903078261095986__ == 0) {
        if (__RANDVAR__90088903078261095986__ == 0) {
          if (binary2 != 0L) {
            digit___62 = (int)(binary2 % 10L);
            if (digit___62 == 1) {
              binary1 *= (long)factor;
              tmp___62 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___62;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___63 = (int)(binary2 % 10L);
            if (digit___63 == 1) {
              binary1 *= (long)factor;
              tmp___63 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___63;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___64 = (int)(binary2 % 10L);
            if (digit___64 == 1) {
              binary1 *= (long)factor;
              tmp___64 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___64;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          __RANDVAR__34073436616933931500__ = 0;
          while (__RANDVAR__34073436616933931500__ == 0) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___65 = (int)(binary2 % 10L);
                if (digit___65 == 1) {
                  binary1 *= (long)factor;
                  tmp___65 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___65;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___66 = (int)(binary2 % 10L);
                if (digit___66 == 1) {
                  binary1 *= (long)factor;
                  tmp___66 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___66;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___67 = (int)(binary2 % 10L);
                if (digit___67 == 1) {
                  binary1 *= (long)factor;
                  tmp___67 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___67;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___68 = (int)(binary2 % 10L);
                if (digit___68 == 1) {
                  binary1 *= (long)factor;
                  tmp___68 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___68;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___69 = (int)(binary2 % 10L);
                if (digit___69 == 1) {
                  binary1 *= (long)factor;
                  tmp___69 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___69;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___70 = (int)(binary2 % 10L);
                if (digit___70 == 1) {
                  binary1 *= (long)factor;
                  tmp___70 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___70;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___71 = (int)(binary2 % 10L);
                if (digit___71 == 1) {
                  binary1 *= (long)factor;
                  tmp___71 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___71;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___72 = (int)(binary2 % 10L);
                if (digit___72 == 1) {
                  binary1 *= (long)factor;
                  tmp___72 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___72;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___73 = (int)(binary2 % 10L);
                if (digit___73 == 1) {
                  binary1 *= (long)factor;
                  tmp___73 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___73;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            while (binary2 != 0L) {
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___74 = (int)(binary2 % 10L);
                  if (digit___74 == 1) {
                    binary1 *= (long)factor;
                    tmp___74 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___74;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___75 = (int)(binary2 % 10L);
                  if (digit___75 == 1) {
                    binary1 *= (long)factor;
                    tmp___75 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___75;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___76 = (int)(binary2 % 10L);
                  if (digit___76 == 1) {
                    binary1 *= (long)factor;
                    tmp___76 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___76;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___77 = (int)(binary2 % 10L);
                  if (digit___77 == 1) {
                    binary1 *= (long)factor;
                    tmp___77 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___77;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___78 = (int)(binary2 % 10L);
                  if (digit___78 == 1) {
                    binary1 *= (long)factor;
                    tmp___78 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___78;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___79 = (int)(binary2 % 10L);
                  if (digit___79 == 1) {
                    binary1 *= (long)factor;
                    tmp___79 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___79;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___80 = (int)(binary2 % 10L);
                  if (digit___80 == 1) {
                    binary1 *= (long)factor;
                    tmp___80 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___80;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___81 = (int)(binary2 % 10L);
                  if (digit___81 == 1) {
                    binary1 *= (long)factor;
                    tmp___81 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___81;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___82 = (int)(binary2 % 10L);
                  if (digit___82 == 1) {
                    binary1 *= (long)factor;
                    tmp___82 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___82;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
            }
            __RANDVAR__34073436616933931500__ = 1;
          }
          __RANDVAR__90088903078261095986__ = 1;
        }
        if (__RANDVAR__90088903078261095986__ == 0) {
          if (binary2 != 0L) {
            digit___83 = (int)(binary2 % 10L);
            if (digit___83 == 1) {
              binary1 *= (long)factor;
              tmp___83 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___83;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___84 = (int)(binary2 % 10L);
            if (digit___84 == 1) {
              binary1 *= (long)factor;
              tmp___84 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___84;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___85 = (int)(binary2 % 10L);
            if (digit___85 == 1) {
              binary1 *= (long)factor;
              tmp___85 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___85;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          __RANDVAR__99531437937801101977__ = 0;
          while (__RANDVAR__99531437937801101977__ == 0) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___86 = (int)(binary2 % 10L);
                if (digit___86 == 1) {
                  binary1 *= (long)factor;
                  tmp___86 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___86;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___87 = (int)(binary2 % 10L);
                if (digit___87 == 1) {
                  binary1 *= (long)factor;
                  tmp___87 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___87;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___88 = (int)(binary2 % 10L);
                if (digit___88 == 1) {
                  binary1 *= (long)factor;
                  tmp___88 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___88;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___89 = (int)(binary2 % 10L);
                if (digit___89 == 1) {
                  binary1 *= (long)factor;
                  tmp___89 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___89;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___90 = (int)(binary2 % 10L);
                if (digit___90 == 1) {
                  binary1 *= (long)factor;
                  tmp___90 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___90;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___91 = (int)(binary2 % 10L);
                if (digit___91 == 1) {
                  binary1 *= (long)factor;
                  tmp___91 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___91;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___92 = (int)(binary2 % 10L);
                if (digit___92 == 1) {
                  binary1 *= (long)factor;
                  tmp___92 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___92;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___93 = (int)(binary2 % 10L);
                if (digit___93 == 1) {
                  binary1 *= (long)factor;
                  tmp___93 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___93;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___94 = (int)(binary2 % 10L);
                if (digit___94 == 1) {
                  binary1 *= (long)factor;
                  tmp___94 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___94;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            while (binary2 != 0L) {
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___95 = (int)(binary2 % 10L);
                  if (digit___95 == 1) {
                    binary1 *= (long)factor;
                    tmp___95 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___95;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___96 = (int)(binary2 % 10L);
                  if (digit___96 == 1) {
                    binary1 *= (long)factor;
                    tmp___96 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___96;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___97 = (int)(binary2 % 10L);
                  if (digit___97 == 1) {
                    binary1 *= (long)factor;
                    tmp___97 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___97;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___98 = (int)(binary2 % 10L);
                  if (digit___98 == 1) {
                    binary1 *= (long)factor;
                    tmp___98 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___98;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___99 = (int)(binary2 % 10L);
                  if (digit___99 == 1) {
                    binary1 *= (long)factor;
                    tmp___99 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___99;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___100 = (int)(binary2 % 10L);
                  if (digit___100 == 1) {
                    binary1 *= (long)factor;
                    tmp___100 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___100;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___101 = (int)(binary2 % 10L);
                  {
                    if (_2_OBF_FUNC_1_opaque_ptr_1 != _2_OBF_FUNC_1_opaque_ptr_2) {
                      if (digit___101 == 1) {
                        binary1 *= (long)factor;
                        tmp___101 = binaryAddition((int)binary1, (int)multiply);
                        multiply = (long)tmp___101;
                      } else {
                        binary1 *= (long)factor;
                      }
                    } else {
                    }
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___102 = (int)(binary2 % 10L);
                  if (digit___102 == 1) {
                    binary1 *= (long)factor;
                    tmp___102 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___102;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___103 = (int)(binary2 % 10L);
                  if (digit___103 == 1) {
                    binary1 *= (long)factor;
                    tmp___103 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___103;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
            }
            __RANDVAR__99531437937801101977__ = 1;
          }
          __RANDVAR__90088903078261095986__ = 1;
        }
        if (__RANDVAR__90088903078261095986__ == 0) {
          if (binary2 != 0L) {
            digit___104 = (int)(binary2 % 10L);
            if (digit___104 == 1) {
              binary1 *= (long)factor;
              tmp___104 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___104;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___105 = (int)(binary2 % 10L);
            if (digit___105 == 1) {
              binary1 *= (long)factor;
              tmp___105 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___105;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          if (binary2 != 0L) {
            digit___106 = (int)(binary2 % 10L);
            if (digit___106 == 1) {
              binary1 *= (long)factor;
              tmp___106 = binaryAddition((int)binary1, (int)multiply);
              multiply = (long)tmp___106;
            } else {
              binary1 *= (long)factor;
            }
            binary2 /= 10L;
            factor = 10;
          }
          __RANDVAR__45725572893629907407__ = 0;
          while (__RANDVAR__45725572893629907407__ == 0) {
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___107 = (int)(binary2 % 10L);
                if (digit___107 == 1) {
                  binary1 *= (long)factor;
                  tmp___107 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___107;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___108 = (int)(binary2 % 10L);
                if (digit___108 == 1) {
                  binary1 *= (long)factor;
                  tmp___108 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___108;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___109 = (int)(binary2 % 10L);
                if (digit___109 == 1) {
                  binary1 *= (long)factor;
                  tmp___109 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___109;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___110 = (int)(binary2 % 10L);
                if (digit___110 == 1) {
                  binary1 *= (long)factor;
                  tmp___110 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___110;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___111 = (int)(binary2 % 10L);
                if (digit___111 == 1) {
                  binary1 *= (long)factor;
                  tmp___111 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___111;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___112 = (int)(binary2 % 10L);
                if (digit___112 == 1) {
                  binary1 *= (long)factor;
                  tmp___112 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___112;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            if (binary2 != 0L) {
              if (binary2 != 0L) {
                digit___113 = (int)(binary2 % 10L);
                if (digit___113 == 1) {
                  binary1 *= (long)factor;
                  tmp___113 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___113;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___114 = (int)(binary2 % 10L);
                if (digit___114 == 1) {
                  binary1 *= (long)factor;
                  tmp___114 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___114;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
              if (binary2 != 0L) {
                digit___115 = (int)(binary2 % 10L);
                if (digit___115 == 1) {
                  binary1 *= (long)factor;
                  tmp___115 = binaryAddition((int)binary1, (int)multiply);
                  multiply = (long)tmp___115;
                } else {
                  binary1 *= (long)factor;
                }
                binary2 /= 10L;
                factor = 10;
              }
            }
            while (binary2 != 0L) {
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___116 = (int)(binary2 % 10L);
                  if (digit___116 == 1) {
                    binary1 *= (long)factor;
                    tmp___116 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___116;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___117 = (int)(binary2 % 10L);
                  if (digit___117 == 1) {
                    binary1 *= (long)factor;
                    tmp___117 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___117;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___118 = (int)(binary2 % 10L);
                  if (digit___118 == 1) {
                    binary1 *= (long)factor;
                    tmp___118 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___118;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___119 = (int)(binary2 % 10L);
                  if (digit___119 == 1) {
                    binary1 *= (long)factor;
                    tmp___119 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___119;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___120 = (int)(binary2 % 10L);
                  if (digit___120 == 1) {
                    binary1 *= (long)factor;
                    tmp___120 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___120;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___121 = (int)(binary2 % 10L);
                  if (digit___121 == 1) {
                    binary1 *= (long)factor;
                    tmp___121 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___121;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
              if (binary2 != 0L) {
                if (binary2 != 0L) {
                  digit___122 = (int)(binary2 % 10L);
                  if (digit___122 == 1) {
                    binary1 *= (long)factor;
                    tmp___122 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___122;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___123 = (int)(binary2 % 10L);
                  if (digit___123 == 1) {
                    binary1 *= (long)factor;
                    tmp___123 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___123;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
                if (binary2 != 0L) {
                  digit___124 = (int)(binary2 % 10L);
                  if (digit___124 == 1) {
                    binary1 *= (long)factor;
                    tmp___124 = binaryAddition((int)binary1, (int)multiply);
                    multiply = (long)tmp___124;
                  } else {
                    binary1 *= (long)factor;
                  }
                  binary2 /= 10L;
                  factor = 10;
                }
              }
            }
            __RANDVAR__45725572893629907407__ = 1;
          }
          __RANDVAR__90088903078261095986__ = 1;
        }
      }
      __RANDVAR__7063112447428760016__ = 1;
    }
    return (multiply);
  }
}
// variants: loop-unroll, loop-unroll, deadcode
// expanded variants: loop-unroll, loop-unroll, deadcode:True
