typedef void *__builtin_va_list;
struct __pthread_mutex_s;
struct __anonstruct___g1_start32_961093919;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
enum __anonenum_idtype_t_558242672;
union pthread_attr_t;
struct __pthread_cond_s;
struct __anonstruct_lldiv_t_103911545;
union __anonunion____missing_field_name_837858127;
struct __anonstruct___sigset_t_973126068;
struct timespec;
struct drand48_data;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __anonstruct_ldiv_t_790849867;
struct __pthread_internal_slist;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_barrierattr_t_951761806;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___wseq32_961093918;
struct __anonstruct_fd_set_356711149;
struct random_data;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct___fsid_t_109580352;
struct timeval;
union __anonunion_pthread_mutex_t_335460617;
struct __pthread_internal_list;
struct __pthread_rwlock_arch_t;
union __anonunion____missing_field_name_418050178;
union __anonunion_pthread_barrier_t_145707746;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned long __u_quad_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
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
typedef unsigned int pthread_key_t;
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __loff_t loff_t;
typedef __int16_t __int_least16_t;
typedef __int32_t int32_t;
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_418050178 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
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
char **_global_argv;
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_837858127 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_418050178 __annonCompField1;
  union __anonunion____missing_field_name_837858127 __annonCompField2;
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
unsigned long _2_entropy = 6637598745245058688UL;
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
typedef __int8_t __int_least8_t;
typedef __clock_t clock_t;
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
void OBF_FUNC(int n);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
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
  char hexadecimalNumber[100];
  int i;
  int j;
  int temp;
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
  int tmp___47;
  int tmp___48;
  int tmp___49;
  int tmp___50;
  int tmp___51;
  int tmp___52;
  int tmp___53;
  int tmp___54;
  int tmp___55;
  int tmp___56;
  int tmp___57;
  int tmp___58;
  int tmp___59;
  int tmp___60;
  int tmp___61;
  int tmp___62;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p73;
  int i74;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p75;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p79;
  int i80;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p81;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p79 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p79->next = p79;
      p79->prev = p79;
      _3_OBF_FUNC_2_opaque_list_1 = p79;
      i80 = 0;
      while (i80 < 3) {
        p81 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p81->data = i80 * ((_2_entropy & 8) * (_2_entropy | 8) + (_2_entropy & ~8) * (~_2_entropy & 8));
        p81->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p81->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p81;
        _3_OBF_FUNC_2_opaque_list_1->next = p81;
        i80++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p73 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p73->next = p73;
      p73->prev = p73;
      _3_OBF_FUNC_1_opaque_list_1 = p73;
      i74 = 0;
      while (i74 < 2) {
        p75 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p75->data = i74 * (((_2_entropy | 9) << 1UL) - (_2_entropy ^ 9));
        p75->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p75->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p75;
        _3_OBF_FUNC_1_opaque_list_1->next = p75;
        i74++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 228UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 386:;
        if (j > 0) {
          _1_OBF_FUNC_next = 37UL;
        } else {
          _1_OBF_FUNC_next = 136UL;
        }
        break;
      case 182:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 143UL;
        } else {
          _1_OBF_FUNC_next = 212UL;
        }
        break;
      case 18:;
        if (j > 0) {
          _1_OBF_FUNC_next = 113UL;
        } else {
          _1_OBF_FUNC_next = 73UL;
        }
        break;
      case 50:;
        if (tmp___51 % 10 >= 5) {
          _1_OBF_FUNC_next = 297UL;
        } else {
          _1_OBF_FUNC_next = 380UL;
        }
        break;
      case 80:
        j--;
        _1_OBF_FUNC_next = 200UL;
        break;
      case 104:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 98UL;
        break;
      case 302:
        tmp___26 = i;
        _1_OBF_FUNC_next = 135UL;
        break;
      case 354:
        quotient /= 16L;
        _1_OBF_FUNC_next = 7UL;
        break;
      case 4:
        tmp___15 = i;
        _1_OBF_FUNC_next = 5UL;
        break;
      case 219:
        tmp___54 = rand();
        _1_OBF_FUNC_next = 325UL;
        break;
      case 258:
        j--;
        _1_OBF_FUNC_next = 333UL;
        break;
      case 103:;
        if (tmp___42 % 10 >= 5) {
          _1_OBF_FUNC_next = 136UL;
        } else {
          _1_OBF_FUNC_next = 46UL;
        }
        break;
      case 189:
        tmp___19 = rand();
        _1_OBF_FUNC_next = 64UL;
        break;
      case 102:
        temp += 48;
        _1_OBF_FUNC_next = 159UL;
        break;
      case 272:;
        if (tmp___57 % 10 >= 5) {
          _1_OBF_FUNC_next = 333UL;
        } else {
          _1_OBF_FUNC_next = 151UL;
        }
        break;
      case 378:;
        if (tmp___21 % 10 >= 5) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 389UL;
        }
        break;
      case 15:;
        if (tmp___46 % 10 >= 5) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 156UL;
        }
        break;
      case 221:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 337UL;
        } else {
          _1_OBF_FUNC_next = 10UL;
        }
        break;
      case 180:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 375UL;
        break;
      case 275:
        hexadecimalNumber[tmp___4] = (char)temp;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 400:;
        if (j > 0) {
          _1_OBF_FUNC_next = 265UL;
        } else {
          _1_OBF_FUNC_next = 386UL;
        }
        break;
      case 121:
        temp += 55;
        _1_OBF_FUNC_next = 153UL;
        break;
      case 141:;
        if (j > 0) {
          _1_OBF_FUNC_next = 71UL;
        } else {
          _1_OBF_FUNC_next = 59UL;
        }
        break;
      case 216:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 182UL;
        break;
      case 168:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 258UL;
        break;
      case 205:
        hexadecimalNumber[tmp___23] = (char)temp;
        _1_OBF_FUNC_next = 316UL;
        break;
      case 385:
        j = i - 1;
        _1_OBF_FUNC_next = 400UL;
        break;
      case 8:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 109UL;
        } else {
          _1_OBF_FUNC_next = 52UL;
        }
        break;
      case 160:
        tmp___51 = rand();
        _1_OBF_FUNC_next = 50UL;
        break;
      case 204:
        tmp___13 = rand();
        _1_OBF_FUNC_next = 226UL;
        break;
      case 335:
        tmp___25 = rand();
        _1_OBF_FUNC_next = 243UL;
        break;
      case 195:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 342UL;
        } else {
          _1_OBF_FUNC_next = 362UL;
        }
        break;
      case 305:
        hexadecimalNumber[tmp___29] = (char)temp;
        _1_OBF_FUNC_next = 112UL;
        break;
      case 124:
        tmp___55 = rand();
        _1_OBF_FUNC_next = 147UL;
        break;
      case 140:
        tmp___36 = rand();
        _1_OBF_FUNC_next = 267UL;
        break;
      case 403:;
        if (tmp___40 % 10 >= 5) {
          _1_OBF_FUNC_next = 386UL;
        } else {
          _1_OBF_FUNC_next = 91UL;
        }
        break;
      case 1:;
        if (tmp___50 % 10 >= 5) {
          _1_OBF_FUNC_next = 297UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 77:;
        if (tmp___17 % 10 >= 5) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 191UL;
        }
        break;
      case 242:;
        if (tmp___34 % 10 >= 5) {
          _1_OBF_FUNC_next = 209UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 332:;
        if (tmp___49 % 10 >= 5) {
          _1_OBF_FUNC_next = 108UL;
        } else {
          _1_OBF_FUNC_next = 157UL;
        }
        break;
      case 343:
        tmp___1 = i;
        _1_OBF_FUNC_next = 68UL;
        break;
      case 159:
        tmp___35 = i;
        _1_OBF_FUNC_next = 194UL;
        break;
      case 3:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 62UL;
        break;
      case 16:
        i++;
        _1_OBF_FUNC_next = 374UL;
        break;
      case 21:
        hexadecimalNumber[tmp___33] = (char)temp;
        _1_OBF_FUNC_next = 163UL;
        break;
      case 131:
        j--;
        _1_OBF_FUNC_next = 141UL;
        break;
      case 231:;
        if (tmp___30 % 10 >= 5) {
          _1_OBF_FUNC_next = 221UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 68:
        i++;
        _1_OBF_FUNC_next = 87UL;
        break;
      case 213:
        quotient /= 16L;
        _1_OBF_FUNC_next = 303UL;
        break;
      case 323:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 111UL;
        } else {
          _1_OBF_FUNC_next = 7UL;
        }
        break;
      case 122:
        tmp___57 = rand();
        _1_OBF_FUNC_next = 272UL;
        break;
      case 181:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 350UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 85:
        hexadecimalNumber[tmp___15] = (char)temp;
        _1_OBF_FUNC_next = 348UL;
        break;
      case 100:;
        if (tmp___39 % 10 >= 5) {
          _1_OBF_FUNC_next = 386UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 402:
        quotient /= 16L;
        _1_OBF_FUNC_next = 57UL;
        break;
      case 26:
        tmp___16 = rand();
        _1_OBF_FUNC_next = 251UL;
        break;
      case 225:
        hexadecimalNumber[tmp___9] = (char)temp;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 377:
        tmp___62 = rand();
        _1_OBF_FUNC_next = 144UL;
        break;
      case 135:
        i++;
        _1_OBF_FUNC_next = 154UL;
        break;
      case 63:
        temp += 48;
        _1_OBF_FUNC_next = 343UL;
        break;
      case 279:;
        if (tmp___58 % 10 >= 5) {
          _1_OBF_FUNC_next = 333UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 176:
        quotient /= 16L;
        _1_OBF_FUNC_next = 209UL;
        break;
      case 297:;
        if (j > 0) {
          _1_OBF_FUNC_next = 190UL;
        } else {
          _1_OBF_FUNC_next = 141UL;
        }
        break;
      case 192:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 107UL;
        }
        break;
      case 211:
        temp += 55;
        _1_OBF_FUNC_next = 368UL;
        break;
      case 320:
        temp += 48;
        _1_OBF_FUNC_next = 115UL;
        break;
      case 143:
        temp += 48;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 326:
        j--;
        _1_OBF_FUNC_next = 59UL;
        break;
      case 392:
        tmp___14 = rand();
        _1_OBF_FUNC_next = 220UL;
        break;
      case 19:
        tmp___50 = rand();
        _1_OBF_FUNC_next = 1UL;
        break;
      case 227:
        tmp___11 = rand();
        _1_OBF_FUNC_next = 6UL;
        break;
      case 172:
        i++;
        _1_OBF_FUNC_next = 21UL;
        break;
      case 228:
        i = 1;
        _1_OBF_FUNC_next = 207UL;
        break;
      case 349:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 94UL;
        break;
      case 226:;
        if (tmp___13 % 10 >= 5) {
          _1_OBF_FUNC_next = 196UL;
        } else {
          _1_OBF_FUNC_next = 392UL;
        }
        break;
      case 313:
        temp += 48;
        _1_OBF_FUNC_next = 233UL;
        break;
      case 264:;
        if (tmp___59 % 10 >= 5) {
          _1_OBF_FUNC_next = 336UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
          break;
        } else {
        }
      case 269:
        j--;
        _1_OBF_FUNC_next = 401UL;
        break;
      case 295:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 99UL;
        break;
      case 117:
        j--;
        _1_OBF_FUNC_next = 386UL;
        break;
      case 208:
        tmp___28 = rand();
        _1_OBF_FUNC_next = 2UL;
        break;
      case 328:
        tmp___24 = rand();
        _1_OBF_FUNC_next = 381UL;
        break;
      case 187:
        quotient /= 16L;
        _1_OBF_FUNC_next = 284UL;
        break;
      case 244:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 88UL;
        break;
      case 161:;
        if (tmp___48 % 10 >= 5) {
          _1_OBF_FUNC_next = 108UL;
        } else {
          _1_OBF_FUNC_next = 110UL;
        }
        break;
      case 381:;
        if (tmp___24 % 10 >= 5) {
          _1_OBF_FUNC_next = 197UL;
        } else {
          _1_OBF_FUNC_next = 335UL;
        }
        break;
      case 142:
        j--;
        _1_OBF_FUNC_next = 183UL;
        break;
      case 144:;
        if (tmp___62 % 10 >= 5) {
          _1_OBF_FUNC_next = 18UL;
        } else {
          _1_OBF_FUNC_next = 38UL;
        }
        break;
      case 262:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 127UL;
        break;
      case 389:
        tmp___22 = rand();
        _1_OBF_FUNC_next = 53UL;
        break;
      case 27:;
        if (tmp___43 % 10 >= 5) {
          _1_OBF_FUNC_next = 331UL;
        } else {
          _1_OBF_FUNC_next = 369UL;
        }
        break;
      case 243:;
        if (tmp___25 % 10 >= 5) {
          _1_OBF_FUNC_next = 197UL;
        } else {
          _1_OBF_FUNC_next = 266UL;
        }
        break;
      case 157:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 142UL;
        break;
      case 194:
        i++;
        _1_OBF_FUNC_next = 215UL;
        break;
      case 334:
        tmp___9 = i;
        _1_OBF_FUNC_next = 217UL;
        break;
      case 212:
        temp += 55;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 319:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 227UL;
        }
        break;
      case 395:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 280UL;
        } else {
          _1_OBF_FUNC_next = 12UL;
        }
        break;
      case 87:
        hexadecimalNumber[tmp___1] = (char)temp;
        _1_OBF_FUNC_next = 30UL;
        break;
      case 183:;
        if (j > 0) {
          _1_OBF_FUNC_next = 90UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 171:
        tmp___30 = rand();
        _1_OBF_FUNC_next = 231UL;
        break;
      case 34:
        temp += 55;
        _1_OBF_FUNC_next = 334UL;
        break;
      case 274:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 76UL;
        break;
      case 364:;
        if (tmp___61 % 10 >= 5) {
          _1_OBF_FUNC_next = 285UL;
        } else {
          _1_OBF_FUNC_next = 347UL;
        }
        break;
      case 251:;
        if (tmp___16 % 10 >= 5) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 356UL;
        }
        break;
      case 281:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 57UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 127:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 294UL;
        } else {
          _1_OBF_FUNC_next = 291UL;
        }
        break;
      case 317:
        i++;
        _1_OBF_FUNC_next = 351UL;
        break;
      case 215:
        hexadecimalNumber[tmp___35] = (char)temp;
        _1_OBF_FUNC_next = 164UL;
        break;
      case 355:;
        if (tmp___6 % 10 >= 5) {
          {
            if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
              _1_OBF_FUNC_next = 7UL;
            } else {
            }
          }
        } else {
          _1_OBF_FUNC_next = 216UL;
        }
        break;
      case 65:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 204UL;
        } else {
          _1_OBF_FUNC_next = 196UL;
        }
        break;
      case 280:
        temp += 48;
        _1_OBF_FUNC_next = 214UL;
        break;
      case 325:;
        if (tmp___54 % 10 >= 5) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 341UL;
        }
        break;
      case 44:
        quotient /= 16L;
        _1_OBF_FUNC_next = 192UL;
        break;
      case 5:
        i++;
        _1_OBF_FUNC_next = 85UL;
        break;
      case 120:
        hexadecimalNumber[tmp___18] = (char)temp;
        _1_OBF_FUNC_next = 134UL;
        break;
      case 162:
        temp += 48;
        _1_OBF_FUNC_next = 334UL;
        break;
      case 33:
        temp += 48;
        _1_OBF_FUNC_next = 158UL;
        break;
      case 64:;
        if (tmp___19 % 10 >= 5) {
          _1_OBF_FUNC_next = 107UL;
        } else {
          _1_OBF_FUNC_next = 101UL;
        }
        break;
      case 292:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 396UL;
        } else {
          _1_OBF_FUNC_next = 211UL;
        }
        break;
      case 93:
        temp += 55;
        _1_OBF_FUNC_next = 302UL;
        break;
      case 276:
        i++;
        _1_OBF_FUNC_next = 177UL;
        break;
      case 233:
        tmp___29 = i;
        _1_OBF_FUNC_next = 290UL;
        break;
      case 10:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 89UL;
        } else {
          _1_OBF_FUNC_next = 209UL;
        }
        break;
      case 0:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 328UL;
        } else {
          _1_OBF_FUNC_next = 197UL;
        }
        break;
      case 361:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 47UL;
        break;
      case 136:;
        if (j > 0) {
          _1_OBF_FUNC_next = 56UL;
        } else {
          _1_OBF_FUNC_next = 331UL;
        }
        break;
      case 254:
        temp += 55;
        _1_OBF_FUNC_next = 115UL;
        break;
      case 153:
        tmp___18 = i;
        _1_OBF_FUNC_next = 223UL;
        break;
      case 39:
        temp += 55;
        _1_OBF_FUNC_next = 159UL;
        break;
      case 207:
        quotient = (long)n;
        _1_OBF_FUNC_next = 181UL;
        break;
      case 387:
        tmp___45 = rand();
        _1_OBF_FUNC_next = 260UL;
        break;
      case 7:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 138UL;
        } else {
          _1_OBF_FUNC_next = 284UL;
        }
        break;
      case 88:;
        if (tmp___2 % 10 >= 5) {
          _1_OBF_FUNC_next = 323UL;
        } else {
          _1_OBF_FUNC_next = 75UL;
        }
        break;
      case 398:
        i++;
        _1_OBF_FUNC_next = 275UL;
        break;
      case 179:
        tmp___4 = i;
        _1_OBF_FUNC_next = 398UL;
        break;
      case 350:
        tmp = rand();
        _1_OBF_FUNC_next = 281UL;
        break;
      case 20:
        temp += 48;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 315:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 8UL;
        break;
      case 294:
        temp += 48;
        _1_OBF_FUNC_next = 4UL;
        break;
      case 352:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 63UL;
        } else {
          _1_OBF_FUNC_next = 397UL;
        }
        break;
      case 129:
        tmp___40 = rand();
        _1_OBF_FUNC_next = 403UL;
        break;
      case 397:
        temp += 55;
        _1_OBF_FUNC_next = 343UL;
        break;
      case 108:;
        if (j > 0) {
          _1_OBF_FUNC_next = 19UL;
        } else {
          _1_OBF_FUNC_next = 297UL;
        }
        break;
      case 166:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 25UL;
        }
        break;
      case 130:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 256UL;
        break;
      case 371:;
        if (tmp___56 % 10 >= 5) {
          _1_OBF_FUNC_next = 200UL;
        } else {
          _1_OBF_FUNC_next = 345UL;
        }
        break;
      case 25:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 355UL;
        break;
      case 52:
        temp += 55;
        _1_OBF_FUNC_next = 299UL;
        break;
      case 369:
        tmp___44 = rand();
        _1_OBF_FUNC_next = 257UL;
        break;
      case 200:;
        if (j > 0) {
          _1_OBF_FUNC_next = 122UL;
        } else {
          _1_OBF_FUNC_next = 333UL;
        }
        break;
      case 333:;
        if (j > 0) {
          _1_OBF_FUNC_next = 51UL;
        } else {
          _1_OBF_FUNC_next = 336UL;
        }
        break;
      case 30:
        quotient /= 16L;
        _1_OBF_FUNC_next = 181UL;
        break;
      case 62:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 78UL;
        } else {
          _1_OBF_FUNC_next = 155UL;
        }
        break;
      case 185:
        tmp___21 = rand();
        _1_OBF_FUNC_next = 378UL;
        break;
      case 284:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 304UL;
        } else {
          _1_OBF_FUNC_next = 65UL;
        }
        break;
      case 206:
        tmp___46 = rand();
        _1_OBF_FUNC_next = 15UL;
        break;
      case 14:;
        if (tmp___60 % 10 >= 5) {
          _1_OBF_FUNC_next = 232UL;
        } else {
          _1_OBF_FUNC_next = 314UL;
        }
        break;
      case 111:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 166UL;
        break;
      case 266:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 324UL;
        break;
      case 277:
        j--;
        _1_OBF_FUNC_next = 336UL;
        break;
      case 89:
        tmp___34 = rand();
        _1_OBF_FUNC_next = 242UL;
        break;
      case 291:
        temp += 55;
        _1_OBF_FUNC_next = 4UL;
        break;
      case 56:
        tmp___43 = rand();
        _1_OBF_FUNC_next = 27UL;
        break;
      case 217:
        i++;
        _1_OBF_FUNC_next = 225UL;
        break;
      case 270:;
        if (tmp___47 % 10 >= 5) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 300UL;
        }
        break;
      case 164:
        quotient /= 16L;
        _1_OBF_FUNC_next = 10UL;
        break;
      case 341:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 131UL;
        break;
      case 12:
        temp += 55;
        _1_OBF_FUNC_next = 214UL;
        break;
      case 101:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 395UL;
        break;
      case 209:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 399UL;
        }
        break;
      case 69:
        tmp___60 = rand();
        _1_OBF_FUNC_next = 14UL;
        break;
      case 201:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 146UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 366:
        tmp___27 = rand();
        _1_OBF_FUNC_next = 48UL;
        break;
      case 203:
        tmp___61 = rand();
        _1_OBF_FUNC_next = 364UL;
        break;
      case 396:
        temp += 48;
        _1_OBF_FUNC_next = 368UL;
        break;
      case 45:
        hexadecimalNumber[tmp___31] = (char)temp;
        _1_OBF_FUNC_next = 213UL;
        break;
      case 78:
        temp += 48;
        _1_OBF_FUNC_next = 116UL;
        break;
      case 303:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 171UL;
        } else {
          _1_OBF_FUNC_next = 221UL;
        }
        break;
      case 81:
        tmp___7 = i;
        _1_OBF_FUNC_next = 273UL;
        break;
      case 356:
        tmp___17 = rand();
        _1_OBF_FUNC_next = 77UL;
        break;
      case 285:;
        if (j > 0) {
          _1_OBF_FUNC_next = 377UL;
        } else {
          _1_OBF_FUNC_next = 18UL;
        }
        break;
      case 273:
        i++;
        _1_OBF_FUNC_next = 238UL;
        break;
      case 134:
        quotient /= 16L;
        _1_OBF_FUNC_next = 196UL;
        break;
      case 337:
        tmp___32 = rand();
        _1_OBF_FUNC_next = 9UL;
        break;
      case 399:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 123UL;
        }
        break;
      case 24:
        j--;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 351:
        hexadecimalNumber[tmp___38] = (char)temp;
        _1_OBF_FUNC_next = 263UL;
        break;
      case 94:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 33UL;
        } else {
          _1_OBF_FUNC_next = 249UL;
        }
        break;
      case 109:
        temp += 48;
        _1_OBF_FUNC_next = 299UL;
        break;
      case 190:
        tmp___52 = rand();
        _1_OBF_FUNC_next = 344UL;
        break;
      case 167:
        j--;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 393:
        hexadecimalNumber[tmp___20] = (char)temp;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 76:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 57UL;
        } else {
          _1_OBF_FUNC_next = 67UL;
        }
        break;
      case 197:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 366UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 245:
        quotient /= 16L;
        _1_OBF_FUNC_next = 323UL;
        break;
      case 57:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 244UL;
        } else {
          _1_OBF_FUNC_next = 323UL;
        }
        break;
      case 156:
        tmp___47 = rand();
        _1_OBF_FUNC_next = 270UL;
        break;
      case 257:;
        if (tmp___44 % 10 >= 5) {
          _1_OBF_FUNC_next = 331UL;
        } else {
          _1_OBF_FUNC_next = 283UL;
        }
        break;
      case 299:
        tmp___12 = i;
        _1_OBF_FUNC_next = 16UL;
        break;
      case 98:
        j--;
        _1_OBF_FUNC_next = 331UL;
        break;
      case 214:
        tmp___20 = i;
        _1_OBF_FUNC_next = 29UL;
        break;
      case 202:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 195UL;
        break;
      case 9:;
        if (tmp___32 % 10 >= 5) {
          _1_OBF_FUNC_next = 10UL;
        } else {
          _1_OBF_FUNC_next = 349UL;
        }
        break;
      case 13:
        temp += 48;
        _1_OBF_FUNC_next = 302UL;
        break;
      case 220:;
        if (tmp___14 % 10 >= 5) {
          _1_OBF_FUNC_next = 196UL;
        } else {
          _1_OBF_FUNC_next = 262UL;
        }
        break;
      case 344:;
        if (tmp___52 % 10 >= 5) {
          _1_OBF_FUNC_next = 141UL;
        } else {
          _1_OBF_FUNC_next = 361UL;
        }
        break;
      case 51:
        tmp___59 = rand();
        _1_OBF_FUNC_next = 264UL;
        break;
      case 107:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 185UL;
        } else {
          _1_OBF_FUNC_next = 0UL;
        }
        break;
      case 312:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 229UL;
        break;
      case 347:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 149UL;
        break;
      case 375:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 102UL;
        } else {
          _1_OBF_FUNC_next = 39UL;
        }
        break;
      case 146:
        temp += 48;
        _1_OBF_FUNC_next = 153UL;
        break;
      case 390:
        j--;
        _1_OBF_FUNC_next = 400UL;
        break;
      case 249:
        temp += 55;
        _1_OBF_FUNC_next = 158UL;
        break;
      case 316:
        quotient /= 16L;
        _1_OBF_FUNC_next = 107UL;
        break;
      case 304:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 319UL;
        break;
      case 90:
        tmp___48 = rand();
        _1_OBF_FUNC_next = 161UL;
        break;
      case 322:;
        if (tmp___41 % 10 >= 5) {
          _1_OBF_FUNC_next = 136UL;
        } else {
          _1_OBF_FUNC_next = 268UL;
        }
        break;
      case 331:;
        if (j > 0) {
          _1_OBF_FUNC_next = 387UL;
        } else {
          _1_OBF_FUNC_next = 401UL;
        }
        break;
      case 268:
        tmp___42 = rand();
        _1_OBF_FUNC_next = 103UL;
        break;
      case 388:
        j--;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 67:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 352UL;
        break;
      case 132:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 80UL;
        break;
      case 110:
        tmp___49 = rand();
        _1_OBF_FUNC_next = 332UL;
        break;
      case 193:
        temp += 55;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 339:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 345:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 326UL;
        break;
      case 59:;
        if (j > 0) {
          _1_OBF_FUNC_next = 124UL;
        } else {
          _1_OBF_FUNC_next = 200UL;
        }
        break;
      case 196:;
        if (quotient != 0L) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 192UL;
        }
        break;
      case 223:
        i++;
        _1_OBF_FUNC_next = 120UL;
        break;
      case 314:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 277UL;
        break;
      case 401:;
        if (j > 0) {
          _1_OBF_FUNC_next = 206UL;
        } else {
          _1_OBF_FUNC_next = 183UL;
        }
        break;
      case 6:;
        if (tmp___11 % 10 >= 5) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 315UL;
        }
        break;
      case 155:
        temp += 55;
        _1_OBF_FUNC_next = 116UL;
        break;
      case 308:
        temp += 55;
        _1_OBF_FUNC_next = 233UL;
        break;
      case 116:
        tmp___38 = i;
        _1_OBF_FUNC_next = 317UL;
        break;
      case 300:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 269UL;
        break;
      case 154:
        hexadecimalNumber[tmp___26] = (char)temp;
        _1_OBF_FUNC_next = 95UL;
        break;
      case 151:
        tmp___58 = rand();
        _1_OBF_FUNC_next = 279UL;
        break;
      case 342:
        temp += 48;
        _1_OBF_FUNC_next = 311UL;
        break;
      case 348:
        quotient /= 16L;
        _1_OBF_FUNC_next = 65UL;
        break;
      case 38:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 293UL;
        break;
      case 158:
        tmp___33 = i;
        _1_OBF_FUNC_next = 172UL;
        break;
      case 113:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 388UL;
        break;
      case 138:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 42UL;
        break;
      case 256:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 313UL;
        } else {
          _1_OBF_FUNC_next = 308UL;
        }
        break;
      case 374:
        hexadecimalNumber[tmp___12] = (char)temp;
        _1_OBF_FUNC_next = 187UL;
        break;
      case 112:
        quotient /= 16L;
        _1_OBF_FUNC_next = 197UL;
        break;
      case 75:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 83UL;
        break;
      case 123:
        printf("Equivalent hexadecimal value of decimal number %d: \n", n);
        _1_OBF_FUNC_next = 385UL;
        break;
      case 267:;
        if (tmp___36 % 10 >= 5) {
          _1_OBF_FUNC_next = 399UL;
        } else {
          _1_OBF_FUNC_next = 295UL;
        }
        break;
      case 48:;
        if (tmp___27 % 10 >= 5) {
          _1_OBF_FUNC_next = 303UL;
        } else {
          _1_OBF_FUNC_next = 208UL;
        }
        break;
      case 362:
        temp += 55;
        _1_OBF_FUNC_next = 311UL;
        break;
      case 139:
        i++;
        _1_OBF_FUNC_next = 45UL;
        break;
      case 147:;
        if (tmp___55 % 10 >= 5) {
          _1_OBF_FUNC_next = 200UL;
        } else {
          _1_OBF_FUNC_next = 340UL;
        }
        break;
      case 71:
        tmp___53 = rand();
        _1_OBF_FUNC_next = 43UL;
        break;
      case 234:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 292UL;
        break;
      case 293:
        j--;
        _1_OBF_FUNC_next = 285UL;
        break;
      case 260:;
        if (tmp___45 % 10 >= 5) {
          _1_OBF_FUNC_next = 401UL;
        } else {
          _1_OBF_FUNC_next = 104UL;
        }
        break;
      case 53:;
        if (tmp___22 % 10 >= 5) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 202UL;
        }
        break;
      case 380:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 24UL;
        break;
      case 191:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 201UL;
        break;
      case 311:
        tmp___23 = i;
        _1_OBF_FUNC_next = 252UL;
        break;
      case 47:
        j--;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 73:;
        return;
        break;
      case 91:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 390UL;
        break;
      case 163:
        quotient /= 16L;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 230:
        temp = (int)(quotient % 16L);
        _1_OBF_FUNC_next = 339UL;
        break;
      case 99:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 320UL;
        } else {
          _1_OBF_FUNC_next = 254UL;
        }
        break;
      case 37:
        tmp___41 = rand();
        _1_OBF_FUNC_next = 322UL;
        break;
      case 368:
        tmp___31 = i;
        _1_OBF_FUNC_next = 139UL;
        break;
      case 252:
        i++;
        _1_OBF_FUNC_next = 205UL;
        break;
      case 265:
        tmp___39 = rand();
        _1_OBF_FUNC_next = 100UL;
        break;
      case 283:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 167UL;
        break;
      case 95:
        quotient /= 16L;
        _1_OBF_FUNC_next = 0UL;
        break;
      case 149:
        j--;
        _1_OBF_FUNC_next = 232UL;
        break;
      case 232:;
        if (j > 0) {
          _1_OBF_FUNC_next = 203UL;
        } else {
          _1_OBF_FUNC_next = 285UL;
        }
        break;
      case 115:
        tmp___37 = i;
        _1_OBF_FUNC_next = 276UL;
        break;
      case 290:
        i++;
        _1_OBF_FUNC_next = 305UL;
        break;
      case 42:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 284UL;
        } else {
          _1_OBF_FUNC_next = 230UL;
        }
        break;
      case 324:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 13UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 229:;
        if (temp < 10) {
          _1_OBF_FUNC_next = 20UL;
        } else {
          _1_OBF_FUNC_next = 193UL;
        }
        break;
      case 46:
        printf("%c", (int)hexadecimalNumber[j]);
        _1_OBF_FUNC_next = 117UL;
        break;
      case 177:
        hexadecimalNumber[tmp___37] = (char)temp;
        _1_OBF_FUNC_next = 176UL;
        break;
      case 83:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 323UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 340:
        tmp___56 = rand();
        _1_OBF_FUNC_next = 371UL;
        break;
      case 263:
        quotient /= 16L;
        _1_OBF_FUNC_next = 399UL;
        break;
      case 336:;
        if (j > 0) {
          _1_OBF_FUNC_next = 69UL;
        } else {
          _1_OBF_FUNC_next = 232UL;
        }
        break;
      case 238:
        hexadecimalNumber[tmp___7] = (char)temp;
        _1_OBF_FUNC_next = 245UL;
        break;
      case 29:
        i++;
        _1_OBF_FUNC_next = 393UL;
        break;
      case 43:;
        if (tmp___53 % 10 >= 5) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 219UL;
        }
        break;
      case 2:;
        if (tmp___28 % 10 >= 5) {
          _1_OBF_FUNC_next = 303UL;
        } else {
          _1_OBF_FUNC_next = 130UL;
        }
        break;
      }
    }
  }
}
// variants: loop-fission, loop-fission, block-fission
// expanded variants: loop-fission, loop-fission, block-fission:default
