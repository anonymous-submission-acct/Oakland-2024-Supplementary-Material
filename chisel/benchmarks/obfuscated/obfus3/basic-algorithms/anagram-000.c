typedef void *__builtin_va_list;
union __anonunion_pthread_barrierattr_t_951761806;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_mutexattr_t_488594144;
struct __pthread_internal_list;
struct random_data;
struct __pthread_internal_slist;
union __anonunion_pthread_rwlockattr_t_145707745;
struct timeval;
union __anonunion____missing_field_name_390231020;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___wseq32_961093918;
struct __anonstruct_div_t_773697287;
struct __pthread_rwlock_arch_t;
struct __anonstruct_fd_set_356711149;
struct __pthread_mutex_s;
struct drand48_data;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_rwlock_t_656928968;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct_ldiv_t_790849867;
union pthread_attr_t;
struct __anonstruct_lldiv_t_103911545;
struct timespec;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct___fsid_t_109580352;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct___g1_start32_961093919;
struct __pthread_cond_s;
union __anonunion____missing_field_name_894610310;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
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
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_894610310 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
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
typedef unsigned long __ino64_t;
typedef int __key_t;
typedef __key_t key_t;
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_390231020 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
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
struct __pthread_cond_s {
  union __anonunion____missing_field_name_390231020 __annonCompField1;
  union __anonunion____missing_field_name_894610310 __annonCompField2;
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
unsigned long _2_entropy = 1947492037888858626UL;
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
typedef __int8_t __int_least8_t;
typedef __clock_t clock_t;
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
int OBF_FUNC(char *a, char *b);
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
  char *a;
  char *b;
  int flag;
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
    if (argc < 3) {
      return (1);
    }
    a = *(argv + 1);
    b = *(argv + 2);
    flag = OBF_FUNC(a, b);
    if (flag == 1) {
      printf("\"%s\" and \"%s\" are anagrams.\n", a, b);
    } else {
      printf("\"%s\" and \"%s\" are not anagrams.\n", a, b);
    }
    return (0);
  }
}
int OBF_FUNC(char *a, char *b) {
  int first[26];
  unsigned int tmp;
  int second[26];
  unsigned int tmp___0;
  int c;
  int __RANDVAR__42874659787741263580__;
  int __RANDVAR__37231576769284655242__;
  int __RANDVAR__37973103139010862141__;
  int __RANDVAR__9195746026943953870__;
  int __RANDVAR__46971864413750225194__;
  int __RANDVAR__86631726644693965575__;
  int __RANDVAR__40873333859204662796__;
  int __RANDVAR__23270323450824939379__;
  int __RANDVAR__35788028822471523552__;
  int __RANDVAR__95449148561983248147__;
  int __RANDVAR__10388711256618745751__;
  int __RANDVAR__27490945570669445203__;
  int __RANDVAR__77158113985339721150__;
  int __RANDVAR__25756731650732440152__;
  int __RANDVAR__58848033365706681351__;
  int __RANDVAR__67275785082115139151__;
  int __RANDVAR__5756533745554911283__;
  int __RANDVAR__74658660522718134145__;
  int __RANDVAR__90349384210679245530__;
  int __RANDVAR__17873664692169122623__;
  int __RANDVAR__73258496907176849920__;
  int __RANDVAR__7225927577453478326__;
  int __RANDVAR__30518176093239977552__;
  int __RANDVAR__96424922967334607859__;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p33;
  int i34;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p35;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p39;
  int i40;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p41;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p39 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p39->next = p39;
      p39->prev = p39;
      _3_OBF_FUNC_2_opaque_list_1 = p39;
      i40 = 0;
      while (i40 < 4) {
        p41 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p41->data = i40 * (((_2_entropy + 10) + 1UL) + ((-_2_entropy - 1UL) | (-10 - 1UL)));
        p41->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p41->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p41;
        _3_OBF_FUNC_2_opaque_list_1->next = p41;
        i40++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p33 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p33->next = p33;
      p33->prev = p33;
      _3_OBF_FUNC_1_opaque_list_1 = p33;
      i34 = 0;
      while (i34 < 2) {
        p35 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p35->data = i34 * ((_2_entropy ^ 6) - ((~_2_entropy & 6) << 1UL));
        p35->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p35->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p35;
        _3_OBF_FUNC_1_opaque_list_1->next = p35;
        i34++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 236UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 386:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 171UL;
        } else {
          _1_OBF_FUNC_next = 415UL;
        }
        break;
      case 1113:
        __RANDVAR__10388711256618745751__ = 0;
        _1_OBF_FUNC_next = 448UL;
        break;
      case 1460:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 215UL;
        } else {
          _1_OBF_FUNC_next = 1353UL;
        }
        break;
      case 588:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 744UL;
        } else {
          _1_OBF_FUNC_next = 766UL;
        }
        break;
      case 80:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1430UL;
        } else {
          _1_OBF_FUNC_next = 1153UL;
        }
        break;
      case 302:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1015UL;
        } else {
          _1_OBF_FUNC_next = 1053UL;
        }
        break;
      case 1317:;
        return (0);
        break;
      case 988:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 617UL;
        break;
      case 188:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 957UL;
        } else {
          _1_OBF_FUNC_next = 1437UL;
        }
        break;
      case 1241:;
        if (__RANDVAR__77158113985339721150__ == 0) {
          _1_OBF_FUNC_next = 899UL;
        } else {
          _1_OBF_FUNC_next = 1329UL;
        }
        break;
      case 1190:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 102UL;
        } else {
          _1_OBF_FUNC_next = 769UL;
        }
        break;
      case 488:
        c++;
        _1_OBF_FUNC_next = 991UL;
        break;
      case 913:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1098UL;
        } else {
          _1_OBF_FUNC_next = 347UL;
        }
        break;
      case 102:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 782UL;
        break;
      case 1072:;
        if (c < 26) {
          _1_OBF_FUNC_next = 886UL;
        } else {
          _1_OBF_FUNC_next = 1518UL;
        }
        break;
      case 654:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 662UL;
        break;
      case 834:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1004UL;
        break;
      case 439:
        c++;
        _1_OBF_FUNC_next = 1090UL;
        break;
      case 559:
        c++;
        _1_OBF_FUNC_next = 565UL;
        break;
      case 744:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 355UL;
        break;
      case 585:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 258UL;
        } else {
          _1_OBF_FUNC_next = 387UL;
        }
        break;
      case 465:
        c++;
        _1_OBF_FUNC_next = 918UL;
        break;
      case 746:
        c++;
        _1_OBF_FUNC_next = 503UL;
        break;
      case 1344:
        c++;
        _1_OBF_FUNC_next = 528UL;
        break;
      case 1091:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 366UL;
        } else {
          _1_OBF_FUNC_next = 1042UL;
        }
        break;
      case 425:;
        return (0);
        break;
      case 780:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 836UL;
        } else {
          _1_OBF_FUNC_next = 261UL;
        }
        break;
      case 1206:
        c++;
        _1_OBF_FUNC_next = 95UL;
        break;
      case 1323:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1408UL;
        } else {
          _1_OBF_FUNC_next = 532UL;
        }
        break;
      case 1238:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1424UL;
        } else {
          _1_OBF_FUNC_next = 556UL;
        }
        break;
      case 1529:
        c++;
        _1_OBF_FUNC_next = 263UL;
        break;
      case 1585:
        c++;
        _1_OBF_FUNC_next = 217UL;
        break;
      case 1395:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 734UL;
        } else {
          _1_OBF_FUNC_next = 464UL;
        }
        break;
      case 1465:;
        if (tmp___0 >= 26U) {
          _1_OBF_FUNC_next = 1070UL;
        } else {
          _1_OBF_FUNC_next = 937UL;
        }
        break;
      case 385:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 745UL;
        } else {
          _1_OBF_FUNC_next = 353UL;
        }
        break;
      case 1077:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 642UL;
        break;
      case 160:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1339UL;
        } else {
          _1_OBF_FUNC_next = 1121UL;
        }
        break;
      case 235:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 463UL;
        } else {
          _1_OBF_FUNC_next = 1522UL;
        }
        break;
      case 246:
        c++;
        _1_OBF_FUNC_next = 508UL;
        break;
      case 1377:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 954UL;
        break;
      case 1396:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 644UL;
        break;
      case 1554:;
        return (0);
        break;
      case 305:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 354UL;
        } else {
          _1_OBF_FUNC_next = 1473UL;
        }
        break;
      case 622:;
        return (0);
        break;
      case 756:
        c++;
        _1_OBF_FUNC_next = 637UL;
        break;
      case 791:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1140UL;
        } else {
          _1_OBF_FUNC_next = 298UL;
        }
        break;
      case 403:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 206UL;
        break;
      case 691:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1377UL;
        } else {
          _1_OBF_FUNC_next = 77UL;
        }
        break;
      case 77:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 703UL;
        } else {
          _1_OBF_FUNC_next = 1353UL;
        }
        break;
      case 1511:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1212UL;
        break;
      case 1215:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1021UL;
        } else {
          _1_OBF_FUNC_next = 1073UL;
        }
        break;
      case 1550:;
        return (0);
        break;
      case 242:
        c++;
        _1_OBF_FUNC_next = 1093UL;
        break;
      case 159:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 640UL;
        break;
      case 1309:;
        if (__RANDVAR__58848033365706681351__ == 0) {
          _1_OBF_FUNC_next = 915UL;
        } else {
          _1_OBF_FUNC_next = 167UL;
        }
        break;
      case 3:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 719UL;
        } else {
          _1_OBF_FUNC_next = 1452UL;
        }
        break;
      case 781:;
        return (0);
        break;
      case 21:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 99UL;
        break;
      case 521:
        c++;
        _1_OBF_FUNC_next = 393UL;
        break;
      case 1271:
        __RANDVAR__9195746026943953870__ = 0;
        _1_OBF_FUNC_next = 132UL;
        break;
      case 1338:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 586UL;
        } else {
          _1_OBF_FUNC_next = 846UL;
        }
        break;
      case 1119:
        c++;
        _1_OBF_FUNC_next = 1358UL;
        break;
      case 1227:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 903UL;
        } else {
          _1_OBF_FUNC_next = 222UL;
        }
        break;
      case 237:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 43UL;
        } else {
          _1_OBF_FUNC_next = 1283UL;
        }
        break;
      case 767:;
        if (c < 26) {
          _1_OBF_FUNC_next = 363UL;
        } else {
          _1_OBF_FUNC_next = 1209UL;
        }
        break;
      case 1349:;
        if (c < 26) {
          _1_OBF_FUNC_next = 969UL;
        } else {
          _1_OBF_FUNC_next = 540UL;
        }
        break;
      case 563:
        c++;
        _1_OBF_FUNC_next = 323UL;
        break;
      case 1388:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 519UL;
        } else {
          _1_OBF_FUNC_next = 1389UL;
        }
        break;
      case 1497:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1444UL;
        } else {
          _1_OBF_FUNC_next = 460UL;
        }
        break;
      case 619:;
        if (c < 26) {
          _1_OBF_FUNC_next = 995UL;
        } else {
          _1_OBF_FUNC_next = 158UL;
        }
        break;
      case 923:
        c++;
        _1_OBF_FUNC_next = 892UL;
        break;
      case 279:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1217UL;
        } else {
          _1_OBF_FUNC_next = 1530UL;
        }
        break;
      case 776:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 90UL;
        } else {
          _1_OBF_FUNC_next = 1220UL;
        }
        break;
      case 176:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 718UL;
        } else {
          _1_OBF_FUNC_next = 1032UL;
        }
        break;
      case 186:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 966UL;
        break;
      case 668:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1352UL;
        break;
      case 1289:
        c++;
        _1_OBF_FUNC_next = 509UL;
        break;
      case 1586:
        c++;
        _1_OBF_FUNC_next = 1283UL;
        break;
      case 211:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 433:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 413UL;
        } else {
          _1_OBF_FUNC_next = 810UL;
        }
        break;
      case 634:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1383UL;
        } else {
          _1_OBF_FUNC_next = 289UL;
        }
        break;
      case 1175:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1426UL;
        } else {
          _1_OBF_FUNC_next = 1005UL;
        }
        break;
      case 1546:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1102UL;
        } else {
          _1_OBF_FUNC_next = 1382UL;
        }
        break;
      case 326:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1564UL;
        } else {
          _1_OBF_FUNC_next = 1484UL;
        }
        break;
      case 392:
        c++;
        _1_OBF_FUNC_next = 817UL;
        break;
      case 430:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1130UL;
        break;
      case 627:;
        return (0);
        break;
      case 17:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1025UL;
        } else {
          _1_OBF_FUNC_next = 350UL;
        }
        break;
      case 391:
        c++;
        _1_OBF_FUNC_next = 683UL;
        break;
      case 686:;
        if (c < 26) {
          _1_OBF_FUNC_next = 875UL;
        } else {
          _1_OBF_FUNC_next = 92UL;
        }
        break;
      case 640:
        c++;
        _1_OBF_FUNC_next = 878UL;
        break;
      case 1110:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1111UL;
        } else {
          _1_OBF_FUNC_next = 1072UL;
        }
        break;
      case 226:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 123UL;
        } else {
          _1_OBF_FUNC_next = 917UL;
        }
        break;
      case 313:;
        if (c < 26) {
          _1_OBF_FUNC_next = 700UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 758:;
        return (0);
        break;
      case 889:;
        return (0);
        break;
      case 1474:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 737UL;
        } else {
          _1_OBF_FUNC_next = 712UL;
        }
        break;
      case 295:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 843UL;
        break;
      case 930:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 746UL;
        break;
      case 1468:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1534UL;
        } else {
          _1_OBF_FUNC_next = 987UL;
        }
        break;
      case 1541:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1475UL;
        break;
      case 1340:
        c++;
        _1_OBF_FUNC_next = 739UL;
        break;
      case 1539:;
        return (0);
        break;
      case 787:
        c++;
        _1_OBF_FUNC_next = 92UL;
        break;
      case 1330:;
        return (0);
        break;
      case 1526:;
        return (0);
        break;
      case 550:;
        if (c < 26) {
          _1_OBF_FUNC_next = 682UL;
        } else {
          _1_OBF_FUNC_next = 1154UL;
        }
        break;
      case 1200:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1501UL;
        } else {
          _1_OBF_FUNC_next = 1155UL;
        }
        break;
      case 404:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1101UL;
        } else {
          _1_OBF_FUNC_next = 188UL;
        }
        break;
      case 911:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 785UL;
        break;
      case 1197:;
        if (c < 26) {
          _1_OBF_FUNC_next = 724UL;
        } else {
          _1_OBF_FUNC_next = 951UL;
        }
        break;
      case 142:;
        if (c < 26) {
          _1_OBF_FUNC_next = 144UL;
        } else {
          _1_OBF_FUNC_next = 259UL;
        }
        break;
      case 416:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1396UL;
        } else {
          _1_OBF_FUNC_next = 868UL;
        }
        break;
      case 926:
        c++;
        _1_OBF_FUNC_next = 1379UL;
        break;
      case 262:;
        if (c < 26) {
          if (((((_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (_2_alwaysZero | ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) + (_2_alwaysZero & ~((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (~_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6)))) ^ ~0) + ((((_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (_2_alwaysZero | ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) + (_2_alwaysZero & ~((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (~_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6)))) | 0) + (((_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (_2_alwaysZero | ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) + (_2_alwaysZero & ~((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6))) * (~_2_alwaysZero & ((_2_entropy & 6) * (_2_entropy | 6) + (_2_entropy & ~6) * (~_2_entropy & 6)))) | 0))) + 1UL) {
          } else {
            _1_OBF_FUNC_next = 343UL;
          }
        } else {
          _1_OBF_FUNC_next = 619UL;
        }
        break;
      case 27:
        c++;
        _1_OBF_FUNC_next = 1521UL;
        break;
      case 645:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1150UL;
        } else {
          _1_OBF_FUNC_next = 979UL;
        }
        break;
      case 755:
        second[0] = 0;
        _1_OBF_FUNC_next = 182UL;
        break;
      case 334:
        c++;
        _1_OBF_FUNC_next = 1390UL;
        break;
      case 212:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 756UL;
        break;
      case 395:;
        return (0);
        break;
      case 460:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1540UL;
        } else {
          _1_OBF_FUNC_next = 851UL;
        }
        break;
      case 1518:;
        if (c < 26) {
          _1_OBF_FUNC_next = 435UL;
        } else {
          _1_OBF_FUNC_next = 1192UL;
        }
        break;
      case 1334:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1466UL;
        } else {
          _1_OBF_FUNC_next = 1234UL;
        }
        break;
      case 364:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 86UL;
        } else {
          _1_OBF_FUNC_next = 1096UL;
        }
        break;
      case 251:
        __RANDVAR__67275785082115139151__ = 1;
        _1_OBF_FUNC_next = 1533UL;
        break;
      case 432:
        c++;
        _1_OBF_FUNC_next = 121UL;
        break;
      case 562:;
        return (0);
        break;
      case 359:
        c++;
        _1_OBF_FUNC_next = 849UL;
        break;
      case 946:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1062UL;
        } else {
          _1_OBF_FUNC_next = 1270UL;
        }
        break;
      case 987:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1186UL;
        } else {
          _1_OBF_FUNC_next = 879UL;
        }
        break;
      case 1090:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 54UL;
        } else {
          _1_OBF_FUNC_next = 293UL;
        }
        break;
      case 222:
        c++;
        _1_OBF_FUNC_next = 951UL;
        break;
      case 580:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1524UL;
        break;
      case 617:
        c++;
        _1_OBF_FUNC_next = 557UL;
        break;
      case 1230:;
        return (0);
        break;
      case 441:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1095UL;
        } else {
          _1_OBF_FUNC_next = 572UL;
        }
        break;
      case 482:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 537UL;
        break;
      case 829:;
        return (0);
        break;
      case 892:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 877UL;
        } else {
          _1_OBF_FUNC_next = 1303UL;
        }
        break;
      case 1226:
        c++;
        _1_OBF_FUNC_next = 48UL;
        break;
      case 1312:
        c++;
        _1_OBF_FUNC_next = 1134UL;
        break;
      case 943:
        __RANDVAR__95449148561983248147__ = 0;
        _1_OBF_FUNC_next = 623UL;
        break;
      case 5:
        c++;
        _1_OBF_FUNC_next = 987UL;
        break;
      case 596:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 814UL;
        } else {
          _1_OBF_FUNC_next = 1093UL;
        }
        break;
      case 365:
        c++;
        _1_OBF_FUNC_next = 1255UL;
        break;
      case 933:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 335UL;
        } else {
          _1_OBF_FUNC_next = 1076UL;
        }
        break;
      case 1282:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1299UL;
        } else {
          _1_OBF_FUNC_next = 739UL;
        }
        break;
      case 1579:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 243UL;
        } else {
          _1_OBF_FUNC_next = 1506UL;
        }
        break;
      case 993:
        c++;
        _1_OBF_FUNC_next = 1347UL;
        break;
      case 33:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 470UL;
        } else {
          _1_OBF_FUNC_next = 588UL;
        }
        break;
      case 564:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 757UL;
        } else {
          _1_OBF_FUNC_next = 437UL;
        }
        break;
      case 673:
        c++;
        _1_OBF_FUNC_next = 1202UL;
        break;
      case 1085:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1567UL;
        } else {
          _1_OBF_FUNC_next = 1290UL;
        }
        break;
      case 1506:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 386UL;
        } else {
          _1_OBF_FUNC_next = 868UL;
        }
        break;
      case 175:
        c++;
        _1_OBF_FUNC_next = 262UL;
        break;
      case 1292:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1026UL;
        break;
      case 1390:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1425UL;
        } else {
          _1_OBF_FUNC_next = 1030UL;
        }
        break;
      case 651:;
        if (c < 26) {
          _1_OBF_FUNC_next = 314UL;
        } else {
          _1_OBF_FUNC_next = 708UL;
        }
        break;
      case 92:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1089UL;
        } else {
          _1_OBF_FUNC_next = 494UL;
        }
        break;
      case 790:;
        return (0);
        break;
      case 1512:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 659UL;
        } else {
          _1_OBF_FUNC_next = 1033UL;
        }
        break;
      case 10:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 853UL;
        break;
      case 916:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 67UL;
        break;
      case 224:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 89UL;
        break;
      case 846:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1479UL;
        } else {
          _1_OBF_FUNC_next = 1073UL;
        }
        break;
      case 1082:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 816UL;
        } else {
          _1_OBF_FUNC_next = 1417UL;
        }
        break;
      case 1313:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 873UL;
        } else {
          _1_OBF_FUNC_next = 531UL;
        }
        break;
      case 1533:;
        if (__RANDVAR__67275785082115139151__ == 0) {
          _1_OBF_FUNC_next = 749UL;
        } else {
          _1_OBF_FUNC_next = 478UL;
        }
        break;
      case 417:;
        return (0);
        break;
      case 804:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 666UL;
        } else {
          _1_OBF_FUNC_next = 200UL;
        }
        break;
      case 1476:
        __RANDVAR__46971864413750225194__ = 1;
        _1_OBF_FUNC_next = 1064UL;
        break;
      case 1523:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 390UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 153:
        c++;
        _1_OBF_FUNC_next = 564UL;
        break;
      case 727:;
        if (__RANDVAR__17873664692169122623__ == 0) {
          _1_OBF_FUNC_next = 1454UL;
        } else {
          _1_OBF_FUNC_next = 120UL;
        }
        break;
      case 1198:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 434UL;
        } else {
          _1_OBF_FUNC_next = 217UL;
        }
        break;
      case 1150:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1105UL;
        } else {
          _1_OBF_FUNC_next = 333UL;
        }
        break;
      case 1209:;
        if (c < 26) {
          _1_OBF_FUNC_next = 248UL;
        } else {
          _1_OBF_FUNC_next = 328UL;
        }
        break;
      case 1380:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1461UL;
        } else {
          _1_OBF_FUNC_next = 766UL;
        }
        break;
      case 605:;
        return (0);
        break;
      case 671:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 332UL;
        break;
      case 968:
        c++;
        _1_OBF_FUNC_next = 939UL;
        break;
      case 948:
        c++;
        _1_OBF_FUNC_next = 1506UL;
        break;
      case 826:
        c++;
        _1_OBF_FUNC_next = 683UL;
        break;
      case 126:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1471UL;
        } else {
          _1_OBF_FUNC_next = 1278UL;
        }
        break;
      case 689:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1031UL;
        break;
      case 1157:;
        if (__RANDVAR__90349384210679245530__ == 0) {
          _1_OBF_FUNC_next = 1069UL;
        } else {
          _1_OBF_FUNC_next = 750UL;
        }
        break;
      case 315:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1124UL;
        break;
      case 807:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 426UL;
        } else {
          _1_OBF_FUNC_next = 1347UL;
        }
        break;
      case 294:;
        return (0);
        break;
      case 492:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 930UL;
        } else {
          _1_OBF_FUNC_next = 503UL;
        }
        break;
      case 877:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1516UL;
        break;
      case 1229:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1328UL;
        } else {
          _1_OBF_FUNC_next = 462UL;
        }
        break;
      case 108:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1489UL;
        } else {
          _1_OBF_FUNC_next = 48UL;
        }
        break;
      case 310:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1324UL;
        break;
      case 1224:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 838UL;
        break;
      case 1551:
        c++;
        _1_OBF_FUNC_next = 1195UL;
        break;
      case 623:;
        if (__RANDVAR__95449148561983248147__ == 0) {
          _1_OBF_FUNC_next = 111UL;
        } else {
          _1_OBF_FUNC_next = 125UL;
        }
        break;
      case 1059:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1258UL;
        break;
      case 565:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 212UL;
        } else {
          _1_OBF_FUNC_next = 637UL;
        }
        break;
      case 894:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 1491UL;
        break;
      case 1242:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1252UL;
        } else {
          _1_OBF_FUNC_next = 1543UL;
        }
        break;
      case 185:
        c++;
        _1_OBF_FUNC_next = 1528UL;
        break;
      case 707:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 294UL;
        } else {
          _1_OBF_FUNC_next = 1088UL;
        }
        break;
      case 883:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 713UL;
        } else {
          _1_OBF_FUNC_next = 517UL;
        }
        break;
      case 1350:
        c++;
        _1_OBF_FUNC_next = 1411UL;
        break;
      case 1174:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 139UL;
        } else {
          _1_OBF_FUNC_next = 1028UL;
        }
        break;
      case 111:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 776UL;
        } else {
          _1_OBF_FUNC_next = 785UL;
        }
        break;
      case 950:;
        return (0);
        break;
      case 1482:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1047UL;
        } else {
          _1_OBF_FUNC_next = 618UL;
        }
        break;
      case 551:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 722UL;
        break;
      case 729:
        c++;
        _1_OBF_FUNC_next = 223UL;
        break;
      case 82:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 6UL;
        break;
      case 487:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 558UL;
        } else {
          _1_OBF_FUNC_next = 1203UL;
        }
        break;
      case 728:
        c++;
        _1_OBF_FUNC_next = 1121UL;
        break;
      case 920:;
        if (c < 26) {
          _1_OBF_FUNC_next = 614UL;
        } else {
          _1_OBF_FUNC_next = 852UL;
        }
        break;
      case 1074:;
        return (0);
        break;
      case 1339:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 728UL;
        break;
      case 1483:
        c = 0;
        _1_OBF_FUNC_next = 1298UL;
        break;
      case 578:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 38UL;
        } else {
          _1_OBF_FUNC_next = 1307UL;
        }
        break;
      case 1123:
        c++;
        _1_OBF_FUNC_next = 514UL;
        break;
      case 1311:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1279UL;
        } else {
          _1_OBF_FUNC_next = 683UL;
        }
        break;
      case 534:
        c++;
        _1_OBF_FUNC_next = 1085UL;
        break;
      case 977:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1123UL;
        break;
      case 270:;
        return (0);
        break;
      case 857:;
        return (0);
        break;
      case 810:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 367UL;
        } else {
          _1_OBF_FUNC_next = 512UL;
        }
        break;
      case 31:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 680UL;
        } else {
          _1_OBF_FUNC_next = 729UL;
        }
        break;
      case 554:;
        return (0);
        break;
      case 893:
        c++;
        _1_OBF_FUNC_next = 532UL;
        break;
      case 12:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 699UL;
        } else {
          _1_OBF_FUNC_next = 738UL;
        }
        break;
      case 209:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 417UL;
        } else {
          _1_OBF_FUNC_next = 423UL;
        }
        break;
      case 366:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1168UL;
        break;
      case 1431:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 213UL;
        } else {
          _1_OBF_FUNC_next = 1474UL;
        }
        break;
      case 1434:;
        if (c < 26) {
          _1_OBF_FUNC_next = 688UL;
        } else {
          _1_OBF_FUNC_next = 1197UL;
        }
        break;
      case 1106:
        c++;
        _1_OBF_FUNC_next = 293UL;
        break;
      case 835:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1177UL;
        break;
      case 1177:
        c++;
        _1_OBF_FUNC_next = 1171UL;
        break;
      case 1064:;
        if (__RANDVAR__46971864413750225194__ == 0) {
          _1_OBF_FUNC_next = 237UL;
        } else {
          _1_OBF_FUNC_next = 1293UL;
        }
        break;
      case 556:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1063UL;
        } else {
          _1_OBF_FUNC_next = 681UL;
        }
        break;
      case 642:
        c++;
        _1_OBF_FUNC_next = 187UL;
        break;
      case 1264:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 669UL;
        } else {
          _1_OBF_FUNC_next = 1561UL;
        }
        break;
      case 285:;
        return (0);
        break;
      case 958:;
        return (0);
        break;
      case 1026:
        c++;
        _1_OBF_FUNC_next = 778UL;
        break;
      case 1462:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 492UL;
        } else {
          _1_OBF_FUNC_next = 597UL;
        }
        break;
      case 1577:
        c++;
        _1_OBF_FUNC_next = 489UL;
        break;
      case 399:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1263UL;
        } else {
          _1_OBF_FUNC_next = 87UL;
        }
        break;
      case 1534:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1451UL;
        } else {
          _1_OBF_FUNC_next = 5UL;
        }
        break;
      case 1283:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 126UL;
        } else {
          _1_OBF_FUNC_next = 369UL;
        }
        break;
      case 1332:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1067UL;
        break;
      case 1544:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 856UL;
        } else {
          _1_OBF_FUNC_next = 368UL;
        }
        break;
      case 94:
        c++;
        _1_OBF_FUNC_next = 852UL;
        break;
      case 109:;
        if (__RANDVAR__37973103139010862141__ == 0) {
          _1_OBF_FUNC_next = 1591UL;
        } else {
          _1_OBF_FUNC_next = 747UL;
        }
        break;
      case 1153:;
        if (c < 26) {
          _1_OBF_FUNC_next = 692UL;
        } else {
          _1_OBF_FUNC_next = 401UL;
        }
        break;
      case 1442:;
        if (c < 26) {
          _1_OBF_FUNC_next = 142UL;
        } else {
          _1_OBF_FUNC_next = 635UL;
        }
        break;
      case 543:
        c++;
        _1_OBF_FUNC_next = 774UL;
        break;
      case 610:
        c++;
        _1_OBF_FUNC_next = 353UL;
        break;
      case 922:
        c++;
        _1_OBF_FUNC_next = 1032UL;
        break;
      case 1142:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 710UL;
        } else {
          _1_OBF_FUNC_next = 210UL;
        }
        break;
      case 1430:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 179UL;
        } else {
          _1_OBF_FUNC_next = 717UL;
        }
        break;
      case 1496:
        __RANDVAR__95449148561983248147__ = 1;
        _1_OBF_FUNC_next = 623UL;
        break;
      case 902:
        c++;
        _1_OBF_FUNC_next = 1211UL;
        break;
      case 421:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 18UL;
        } else {
          _1_OBF_FUNC_next = 1579UL;
        }
        break;
      case 257:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1145UL;
        } else {
          _1_OBF_FUNC_next = 860UL;
        }
        break;
      case 899:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1272UL;
        } else {
          _1_OBF_FUNC_next = 596UL;
        }
        break;
      case 529:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1114UL;
        } else {
          _1_OBF_FUNC_next = 581UL;
        }
        break;
      case 1490:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 49UL;
        } else {
          _1_OBF_FUNC_next = 1568UL;
        }
        break;
      case 932:;
        if (c < 26) {
          _1_OBF_FUNC_next = 527UL;
        } else {
          _1_OBF_FUNC_next = 799UL;
        }
        break;
      case 1173:;
        return (0);
        break;
      case 1421:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 536UL;
        } else {
          _1_OBF_FUNC_next = 908UL;
        }
        break;
      case 1076:
        c++;
        _1_OBF_FUNC_next = 658UL;
        break;
      case 11:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 348UL;
        } else {
          _1_OBF_FUNC_next = 508UL;
        }
        break;
      case 485:
        c++;
        _1_OBF_FUNC_next = 428UL;
        break;
      case 535:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 439UL;
        break;
      case 1199:;
        return (0);
        break;
      case 1184:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1044UL;
        break;
      case 375:;
        return (0);
        break;
      case 1187:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1273UL;
        break;
      case 390:;
        return (0);
        break;
      case 1485:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 292UL;
        break;
      case 1016:
        c++;
        _1_OBF_FUNC_next = 597UL;
        break;
      case 821:;
        if (c < 26) {
          _1_OBF_FUNC_next = 764UL;
        } else {
          _1_OBF_FUNC_next = 148UL;
        }
        break;
      case 249:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 733UL;
        break;
      case 1013:;
        if (c < 26) {
          _1_OBF_FUNC_next = 257UL;
        } else {
          _1_OBF_FUNC_next = 994UL;
        }
        break;
      case 824:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 1056:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1251UL;
        } else {
          _1_OBF_FUNC_next = 1119UL;
        }
        break;
      case 1333:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1519UL;
        } else {
          _1_OBF_FUNC_next = 1155UL;
        }
        break;
      case 1171:
        __RANDVAR__86631726644693965575__ = 0;
        _1_OBF_FUNC_next = 832UL;
        break;
      case 210:
        c++;
        _1_OBF_FUNC_next = 648UL;
        break;
      case 685:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 326UL;
        } else {
          _1_OBF_FUNC_next = 1057UL;
        }
        break;
      case 738:
        c++;
        _1_OBF_FUNC_next = 1438UL;
        break;
      case 339:;
        return (0);
        break;
      case 345:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1322UL;
        } else {
          _1_OBF_FUNC_next = 887UL;
        }
        break;
      case 827:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1502UL;
        } else {
          _1_OBF_FUNC_next = 991UL;
        }
        break;
      case 1509:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1294UL;
        break;
      case 321:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 667:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 625UL;
        } else {
          _1_OBF_FUNC_next = 1311UL;
        }
        break;
      case 762:;
        return (0);
        break;
      case 1211:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 255UL;
        } else {
          _1_OBF_FUNC_next = 1437UL;
        }
        break;
      case 196:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 784UL;
        } else {
          _1_OBF_FUNC_next = 690UL;
        }
        break;
      case 681:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1544UL;
        } else {
          _1_OBF_FUNC_next = 831UL;
        }
        break;
      case 1423:;
        return (0);
        break;
      case 308:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1009UL;
        } else {
          _1_OBF_FUNC_next = 1584UL;
        }
        break;
      case 592:
        c++;
        _1_OBF_FUNC_next = 807UL;
        break;
      case 116:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1160UL;
        } else {
          _1_OBF_FUNC_next = 1081UL;
        }
        break;
      case 945:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 185UL;
        break;
      case 1192:;
        if (c < 26) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 618UL;
        }
        break;
      case 348:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 246UL;
        break;
      case 384:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 1057UL;
        break;
      case 38:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 486UL;
        break;
      case 1127:;
        return (0);
        break;
      case 907:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 998UL;
        break;
      case 940:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1182UL;
        break;
      case 522:;
        return (0);
        break;
      case 178:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1478UL;
        break;
      case 1400:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1227UL;
        } else {
          _1_OBF_FUNC_next = 951UL;
        }
        break;
      case 75:
        c++;
        _1_OBF_FUNC_next = 1005UL;
        break;
      case 635:
        __RANDVAR__17873664692169122623__ = 1;
        _1_OBF_FUNC_next = 727UL;
        break;
      case 1164:
        c++;
        _1_OBF_FUNC_next = 691UL;
        break;
      case 362:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1127UL;
        } else {
          _1_OBF_FUNC_next = 1036UL;
        }
        break;
      case 558:;
        return (0);
        break;
      case 921:
        c++;
        _1_OBF_FUNC_next = 1209UL;
        break;
      case 800:;
        return (0);
        break;
      case 1007:
        c++;
        _1_OBF_FUNC_next = 137UL;
        break;
      case 1371:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1221UL;
        break;
      case 139:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 281UL;
        break;
      case 147:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1306UL;
        break;
      case 867:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 288UL;
        break;
      case 1005:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 539UL;
        } else {
          _1_OBF_FUNC_next = 1038UL;
        }
        break;
      case 1160:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1052UL;
        break;
      case 1257:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 902UL;
        break;
      case 53:
        c++;
        _1_OBF_FUNC_next = 830UL;
        break;
      case 372:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 760UL;
        } else {
          _1_OBF_FUNC_next = 883UL;
        }
        break;
      case 859:
        c++;
        _1_OBF_FUNC_next = 1437UL;
        break;
      case 752:
        __RANDVAR__37231576769284655242__ = 1;
        _1_OBF_FUNC_next = 837UL;
        break;
      case 1248:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 242UL;
        break;
      case 73:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 265UL;
        } else {
          _1_OBF_FUNC_next = 1413UL;
        }
        break;
      case 851:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 381UL;
        } else {
          _1_OBF_FUNC_next = 885UL;
        }
        break;
      case 765:
        c++;
        _1_OBF_FUNC_next = 847UL;
        break;
      case 896:;
        return (0);
        break;
      case 1337:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1572UL;
        break;
      case 1417:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1410UL;
        } else {
          _1_OBF_FUNC_next = 865UL;
        }
        break;
      case 842:
        c++;
        _1_OBF_FUNC_next = 1530UL;
        break;
      case 1138:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 186UL;
        } else {
          _1_OBF_FUNC_next = 406UL;
        }
        break;
      case 1053:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1398UL;
        } else {
          _1_OBF_FUNC_next = 1198UL;
        }
        break;
      case 1151:
        c++;
        _1_OBF_FUNC_next = 1579UL;
        break;
      case 1484:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 866UL;
        } else {
          _1_OBF_FUNC_next = 105UL;
        }
        break;
      case 1048:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 891UL;
        } else {
          _1_OBF_FUNC_next = 1380UL;
        }
        break;
      case 461:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1403UL;
        } else {
          _1_OBF_FUNC_next = 961UL;
        }
        break;
      case 1559:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 238UL;
        break;
      case 647:
        c++;
        _1_OBF_FUNC_next = 1389UL;
        break;
      case 283:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 792UL;
        break;
      case 95:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1131UL;
        } else {
          _1_OBF_FUNC_next = 1543UL;
        }
        break;
      case 149:;
        return (0);
        break;
      case 874:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 834UL;
        } else {
          _1_OBF_FUNC_next = 68UL;
        }
        break;
      case 1201:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1350UL;
        break;
      case 1424:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 25UL;
        } else {
          _1_OBF_FUNC_next = 247UL;
        }
        break;
      case 42:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 598UL;
        } else {
          _1_OBF_FUNC_next = 489UL;
        }
        break;
      case 253:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 295UL;
        } else {
          _1_OBF_FUNC_next = 577UL;
        }
        break;
      case 1542:
        c++;
        _1_OBF_FUNC_next = 273UL;
        break;
      case 1375:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1404UL;
        break;
      case 766:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 9UL;
        } else {
          _1_OBF_FUNC_next = 405UL;
        }
        break;
      case 229:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 684UL;
        break;
      case 662:
        c++;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 1415:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 32UL;
        } else {
          _1_OBF_FUNC_next = 1542UL;
        }
        break;
      case 928:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1553UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 570:
        c++;
        _1_OBF_FUNC_next = 594UL;
        break;
      case 784:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 352UL;
        break;
      case 1268:;
        return (0);
        break;
      case 1273:
        c++;
        _1_OBF_FUNC_next = 1464UL;
        break;
      case 239:;
        if (c < 26) {
          _1_OBF_FUNC_next = 240UL;
        } else {
          _1_OBF_FUNC_next = 550UL;
        }
        break;
      case 318:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 98UL;
        break;
      case 823:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 940UL;
        } else {
          _1_OBF_FUNC_next = 1271UL;
        }
        break;
      case 50:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1034UL;
        } else {
          _1_OBF_FUNC_next = 1458UL;
        }
        break;
      case 806:
        c++;
        _1_OBF_FUNC_next = 218UL;
        break;
      case 104:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 910UL;
        break;
      case 496:
        c++;
        _1_OBF_FUNC_next = 1215UL;
        break;
      case 512:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 607UL;
        } else {
          _1_OBF_FUNC_next = 982UL;
        }
        break;
      case 568:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 542UL;
        } else {
          _1_OBF_FUNC_next = 512UL;
        }
        break;
      case 1561:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 970UL;
        } else {
          _1_OBF_FUNC_next = 404UL;
        }
        break;
      case 1068:
        c++;
        _1_OBF_FUNC_next = 887UL;
        break;
      case 797:
        c++;
        _1_OBF_FUNC_next = 1126UL;
        break;
      case 1218:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 796UL;
        break;
      case 1358:;
        if (c < 26) {
          _1_OBF_FUNC_next = 274UL;
        } else {
          _1_OBF_FUNC_next = 974UL;
        }
        break;
      case 749:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1061UL;
        } else {
          _1_OBF_FUNC_next = 0UL;
        }
        break;
      case 863:
        c++;
        _1_OBF_FUNC_next = 427UL;
        break;
      case 1545:;
        return (0);
        break;
      case 103:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 702UL;
        } else {
          _1_OBF_FUNC_next = 765UL;
        }
        break;
      case 453:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1086UL;
        break;
      case 862:;
        if (c < 26) {
          _1_OBF_FUNC_next = 362UL;
        } else {
          _1_OBF_FUNC_next = 1147UL;
        }
        break;
      case 378:;
        if (c < 26) {
          _1_OBF_FUNC_next = 913UL;
        } else {
          _1_OBF_FUNC_next = 197UL;
        }
        break;
      case 444:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 154UL;
        } else {
          _1_OBF_FUNC_next = 155UL;
        }
        break;
      case 900:
        c++;
        _1_OBF_FUNC_next = 936UL;
        break;
      case 733:
        c++;
        _1_OBF_FUNC_next = 980UL;
        break;
      case 1406:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 767UL;
        } else {
          _1_OBF_FUNC_next = 36UL;
        }
        break;
      case 1255:;
        if (c < 26) {
          _1_OBF_FUNC_next = 593UL;
        } else {
          _1_OBF_FUNC_next = 1384UL;
        }
        break;
      case 1397:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 201UL;
        break;
      case 1481:;
        if (c < 26) {
          _1_OBF_FUNC_next = 652UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 1376:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 465UL;
        break;
      case 984:
        __RANDVAR__74658660522718134145__ = 0;
        _1_OBF_FUNC_next = 516UL;
        break;
      case 180:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 897UL;
        break;
      case 1381:
        c++;
        _1_OBF_FUNC_next = 1460UL;
        break;
      case 400:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 170UL;
        break;
      case 1125:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 60UL;
        } else {
          _1_OBF_FUNC_next = 1041UL;
        }
        break;
      case 523:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 654UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 690:
        __RANDVAR__27490945570669445203__ = 0;
        _1_OBF_FUNC_next = 620UL;
        break;
      case 141:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 628UL;
        } else {
          _1_OBF_FUNC_next = 983UL;
        }
        break;
      case 774:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 357UL;
        } else {
          _1_OBF_FUNC_next = 1081UL;
        }
        break;
      case 8:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 169UL;
        } else {
          _1_OBF_FUNC_next = 1246UL;
        }
        break;
      case 204:
        c++;
        _1_OBF_FUNC_next = 47UL;
        break;
      case 502:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1515UL;
        } else {
          _1_OBF_FUNC_next = 1048UL;
        }
        break;
      case 1097:
        c++;
        _1_OBF_FUNC_next = 298UL;
        break;
      case 335:;
        return (0);
        break;
      case 560:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 58UL;
        } else {
          _1_OBF_FUNC_next = 369UL;
        }
        break;
      case 1343:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1510UL;
        } else {
          _1_OBF_FUNC_next = 978UL;
        }
        break;
      case 195:
        c++;
        _1_OBF_FUNC_next = 538UL;
        break;
      case 553:
        c++;
        _1_OBF_FUNC_next = 325UL;
        break;
      case 124:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1291UL;
        } else {
          _1_OBF_FUNC_next = 1281UL;
        }
        break;
      case 474:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 597UL;
        }
        break;
      case 814:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1318UL;
        } else {
          _1_OBF_FUNC_next = 427UL;
        }
        break;
      case 803:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 296UL;
        } else {
          _1_OBF_FUNC_next = 683UL;
        }
        break;
      case 757:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 825UL;
        break;
      case 1581:;
        return (0);
        break;
      case 1205:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1194UL;
        } else {
          _1_OBF_FUNC_next = 980UL;
        }
        break;
      case 613:
        tmp___0++;
        _1_OBF_FUNC_next = 1465UL;
        break;
      case 332:
        c++;
        _1_OBF_FUNC_next = 1342UL;
        break;
      case 1258:
        c++;
        _1_OBF_FUNC_next = 931UL;
        break;
      case 1263:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1284UL;
        break;
      case 1553:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1176UL;
        } else {
          _1_OBF_FUNC_next = 1414UL;
        }
        break;
      case 1453:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1248UL;
        } else {
          _1_OBF_FUNC_next = 1093UL;
        }
        break;
      case 419:;
        return (0);
        break;
      case 753:;
        return (0);
        break;
      case 843:
        c++;
        _1_OBF_FUNC_next = 577UL;
        break;
      case 1035:
        c++;
        _1_OBF_FUNC_next = 1574UL;
        break;
      case 717:
        c++;
        _1_OBF_FUNC_next = 1153UL;
        break;
      case 981:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1049UL;
        } else {
          _1_OBF_FUNC_next = 953UL;
        }
        break;
      case 1131:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1125UL;
        } else {
          _1_OBF_FUNC_next = 1148UL;
        }
        break;
      case 1411:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 411UL;
        } else {
          _1_OBF_FUNC_next = 1079UL;
        }
        break;
      case 323:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1419UL;
        } else {
          _1_OBF_FUNC_next = 1333UL;
        }
        break;
      case 644:
        c++;
        _1_OBF_FUNC_next = 868UL;
        break;
      case 1233:
        c++;
        _1_OBF_FUNC_next = 1549UL;
        break;
      case 1591:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 279UL;
        }
        break;
      case 122:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1314UL;
        } else {
          _1_OBF_FUNC_next = 33UL;
        }
        break;
      case 306:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 608UL;
        } else {
          _1_OBF_FUNC_next = 667UL;
        }
        break;
      case 382:;
        if (__RANDVAR__30518176093239977552__ == 0) {
          _1_OBF_FUNC_next = 309UL;
        } else {
          _1_OBF_FUNC_next = 224UL;
        }
        break;
      case 638:
        c++;
        _1_OBF_FUNC_next = 694UL;
        break;
      case 1154:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1253UL;
        } else {
          _1_OBF_FUNC_next = 735UL;
        }
        break;
      case 100:
        c++;
        _1_OBF_FUNC_next = 196UL;
        break;
      case 1477:
        __RANDVAR__37231576769284655242__ = 0;
        _1_OBF_FUNC_next = 837UL;
        break;
      case 412:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 225UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 1143:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 942UL;
        } else {
          _1_OBF_FUNC_next = 1514UL;
        }
        break;
      case 1422:
        c++;
        _1_OBF_FUNC_next = 1048UL;
        break;
      case 658:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1523UL;
        } else {
          _1_OBF_FUNC_next = 830UL;
        }
        break;
      case 307:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1059UL;
        } else {
          _1_OBF_FUNC_next = 931UL;
        }
        break;
      case 463:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1436UL;
        break;
      case 513:
        c++;
        _1_OBF_FUNC_next = 188UL;
        break;
      case 793:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 896UL;
        } else {
          _1_OBF_FUNC_next = 1312UL;
        }
        break;
      case 980:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1395UL;
        } else {
          _1_OBF_FUNC_next = 1183UL;
        }
        break;
      case 192:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1520UL;
        } else {
          _1_OBF_FUNC_next = 511UL;
        }
        break;
      case 1478:
        c++;
        _1_OBF_FUNC_next = 421UL;
        break;
      case 259:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1238UL;
        } else {
          _1_OBF_FUNC_next = 831UL;
        }
        break;
      case 271:
        c++;
        _1_OBF_FUNC_next = 401UL;
        break;
      case 561:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 491UL;
        } else {
          _1_OBF_FUNC_next = 1563UL;
        }
        break;
      case 320:
        c++;
        _1_OBF_FUNC_next = 1458UL;
        break;
      case 1277:;
        return (0);
        break;
      case 143:
        c++;
        _1_OBF_FUNC_next = 1073UL;
        break;
      case 1070:
        c = 0;
        _1_OBF_FUNC_next = 1336UL;
        break;
      case 1185:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 783UL;
        break;
      case 1261:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1569UL;
        } else {
          _1_OBF_FUNC_next = 27UL;
        }
        break;
      case 19:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1107UL;
        } else {
          _1_OBF_FUNC_next = 1551UL;
        }
        break;
      case 32:;
        return (0);
        break;
      case 172:
        c++;
        _1_OBF_FUNC_next = 158UL;
        break;
      case 228:;
        return (0);
        break;
      case 545:;
        if (c < 26) {
          _1_OBF_FUNC_next = 933UL;
        } else {
          _1_OBF_FUNC_next = 658UL;
        }
        break;
      case 503:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1179UL;
        } else {
          _1_OBF_FUNC_next = 474UL;
        }
        break;
      case 514:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1449UL;
        } else {
          _1_OBF_FUNC_next = 361UL;
        }
        break;
      case 838:
        c++;
        _1_OBF_FUNC_next = 30UL;
        break;
      case 60:;
        return (0);
        break;
      case 1502:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 655UL;
        } else {
          _1_OBF_FUNC_next = 564UL;
        }
        break;
      case 1115:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1043UL;
        break;
      case 759:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1432UL;
        } else {
          _1_OBF_FUNC_next = 1071UL;
        }
        break;
      case 144:;
        if (c < 26) {
          _1_OBF_FUNC_next = 629UL;
        } else {
          _1_OBF_FUNC_next = 1202UL;
        }
        break;
      case 706:
        c++;
        _1_OBF_FUNC_next = 107UL;
        break;
      case 1043:
        c++;
        _1_OBF_FUNC_next = 1413UL;
        break;
      case 1075:
        c++;
        _1_OBF_FUNC_next = 572UL;
        break;
      case 1459:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1087UL;
        } else {
          _1_OBF_FUNC_next = 116UL;
        }
        break;
      case 629:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1296UL;
        } else {
          _1_OBF_FUNC_next = 673UL;
        }
        break;
      case 702:;
        return (0);
        break;
      case 741:
        c++;
        _1_OBF_FUNC_next = 502UL;
        break;
      case 1450:;
        return (0);
        break;
      case 1470:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1334UL;
        } else {
          _1_OBF_FUNC_next = 780UL;
        }
        break;
      case 1186:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1045UL;
        } else {
          _1_OBF_FUNC_next = 1427UL;
        }
        break;
      case 1565:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1550UL;
        } else {
          _1_OBF_FUNC_next = 1499UL;
        }
        break;
      case 171:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 506UL;
        break;
      case 34:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1485UL;
        } else {
          _1_OBF_FUNC_next = 1092UL;
        }
        break;
      case 1285:
        c++;
        _1_OBF_FUNC_next = 1495UL;
        break;
      case 1445:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1185UL;
        } else {
          _1_OBF_FUNC_next = 1143UL;
        }
        break;
      case 1235:
        c++;
        _1_OBF_FUNC_next = 130UL;
        break;
      case 1265:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 907UL;
        } else {
          _1_OBF_FUNC_next = 874UL;
        }
        break;
      case 127:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1156UL;
        } else {
          _1_OBF_FUNC_next = 820UL;
        }
        break;
      case 614:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 450UL;
        } else {
          _1_OBF_FUNC_next = 94UL;
        }
        break;
      case 748:
        c++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 855:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 881UL;
        break;
      case 1276:;
        return (0);
        break;
      case 1296:;
        return (0);
        break;
      case 1286:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 677UL;
        break;
      case 1136:
        c++;
        _1_OBF_FUNC_next = 1078UL;
        break;
      case 1364:
        c++;
        _1_OBF_FUNC_next = 1244UL;
        break;
      case 1463:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1441UL;
        break;
      case 298:;
        if (c < 26) {
          _1_OBF_FUNC_next = 530UL;
        } else {
          _1_OBF_FUNC_next = 584UL;
        }
        break;
      case 576:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 824UL;
        } else {
          _1_OBF_FUNC_next = 1215UL;
        }
        break;
      case 1589:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 695UL;
        break;
      case 998:
        c++;
        _1_OBF_FUNC_next = 874UL;
        break;
      case 903:;
        return (0);
        break;
      case 1291:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1558UL;
        break;
      case 325:;
        if (c < 26) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 1391UL;
        }
        break;
      case 379:;
        if (__RANDVAR__40873333859204662796__ == 0) {
          _1_OBF_FUNC_next = 198UL;
        } else {
          _1_OBF_FUNC_next = 676UL;
        }
        break;
      case 1552:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 495UL;
        break;
      case 440:;
        if (c < 26) {
          _1_OBF_FUNC_next = 487UL;
        } else {
          _1_OBF_FUNC_next = 83UL;
        }
        break;
      case 974:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1490UL;
        } else {
          _1_OBF_FUNC_next = 1154UL;
        }
        break;
      case 184:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 302UL;
        } else {
          _1_OBF_FUNC_next = 1083UL;
        }
        break;
      case 976:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1330UL;
        } else {
          _1_OBF_FUNC_next = 882UL;
        }
        break;
      case 1505:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1587UL;
        } else {
          _1_OBF_FUNC_next = 1205UL;
        }
        break;
      case 72:
        __RANDVAR__46971864413750225194__ = 0;
        _1_OBF_FUNC_next = 1064UL;
        break;
      case 261:
        __RANDVAR__23270323450824939379__ = 1;
        _1_OBF_FUNC_next = 795UL;
        break;
      case 93:
        c++;
        _1_OBF_FUNC_next = 4UL;
        break;
      case 970:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1590UL;
        break;
      case 1108:;
        return (0);
        break;
      case 1403:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 78UL;
        break;
      case 832:;
        if (__RANDVAR__86631726644693965575__ == 0) {
          _1_OBF_FUNC_next = 1229UL;
        } else {
          _1_OBF_FUNC_next = 547UL;
        }
        break;
      case 1407:;
        return (0);
        break;
      case 254:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 97UL;
        } else {
          _1_OBF_FUNC_next = 685UL;
        }
        break;
      case 817:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1509UL;
        } else {
          _1_OBF_FUNC_next = 1081UL;
        }
        break;
      case 1047:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 228UL;
        } else {
          _1_OBF_FUNC_next = 1373UL;
        }
        break;
      case 1520:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 504UL;
        break;
      case 989:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1321UL;
        break;
      case 207:
        c++;
        _1_OBF_FUNC_next = 1353UL;
        break;
      case 456:
        c++;
        _1_OBF_FUNC_next = 1205UL;
        break;
      case 7:;
        if (c < 26) {
          _1_OBF_FUNC_next = 443UL;
        } else {
          _1_OBF_FUNC_next = 1134UL;
        }
        break;
      case 1448:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 345UL;
        } else {
          _1_OBF_FUNC_next = 1470UL;
        }
        break;
      case 655:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 153UL;
        break;
      case 20:
        c++;
        _1_OBF_FUNC_next = 1556UL;
        break;
      case 1405:
        __RANDVAR__27490945570669445203__ = 1;
        _1_OBF_FUNC_next = 620UL;
        break;
      case 409:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1024UL;
        } else {
          _1_OBF_FUNC_next = 1260UL;
        }
        break;
      case 625:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 611UL;
        break;
      case 1435:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1129UL;
        } else {
          _1_OBF_FUNC_next = 1462UL;
        }
        break;
      case 1009:;
        return (0);
        break;
      case 1412:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 285UL;
        } else {
          _1_OBF_FUNC_next = 431UL;
        }
        break;
      case 166:
        c++;
        _1_OBF_FUNC_next = 1138UL;
        break;
      case 376:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 173UL;
        } else {
          _1_OBF_FUNC_next = 502UL;
        }
        break;
      case 1225:;
        if (__RANDVAR__25756731650732440152__ == 0) {
          _1_OBF_FUNC_next = 1161UL;
        } else {
          _1_OBF_FUNC_next = 396UL;
        }
        break;
      case 1347:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1115UL;
        } else {
          _1_OBF_FUNC_next = 1413UL;
        }
        break;
      case 1438:;
        if (c < 26) {
          _1_OBF_FUNC_next = 895UL;
        } else {
          _1_OBF_FUNC_next = 1442UL;
        }
        break;
      case 479:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 563UL;
        break;
      case 653:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 245UL;
        } else {
          _1_OBF_FUNC_next = 467UL;
        }
        break;
      case 1004:
        c++;
        _1_OBF_FUNC_next = 68UL;
        break;
      case 1236:
        c++;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 1426:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 75UL;
        break;
      case 1521:;
        if (c < 26) {
          _1_OBF_FUNC_next = 308UL;
        } else {
          _1_OBF_FUNC_next = 1116UL;
        }
        break;
      case 49:;
        return (0);
        break;
      case 908:
        c++;
        _1_OBF_FUNC_next = 1204UL;
        break;
      case 1362:;
        return (0);
        break;
      case 1203:
        c++;
        _1_OBF_FUNC_next = 83UL;
        break;
      case 1571:;
        if (c < 26) {
          _1_OBF_FUNC_next = 174UL;
        } else {
          _1_OBF_FUNC_next = 130UL;
        }
        break;
      case 62:
        c++;
        _1_OBF_FUNC_next = 385UL;
        break;
      case 106:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 104UL;
        } else {
          _1_OBF_FUNC_next = 1027UL;
        }
        break;
      case 1055:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1429UL;
        } else {
          _1_OBF_FUNC_next = 1346UL;
        }
        break;
      case 266:
        c++;
        _1_OBF_FUNC_next = 160UL;
        break;
      case 688:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1508UL;
        } else {
          _1_OBF_FUNC_next = 651UL;
        }
        break;
      case 1116:;
        if (c < 26) {
          _1_OBF_FUNC_next = 645UL;
        } else {
          _1_OBF_FUNC_next = 325UL;
        }
        break;
      case 1010:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 151UL;
        } else {
          _1_OBF_FUNC_next = 175UL;
        }
        break;
      case 1560:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 510UL;
        break;
      case 493:;
        if (c < 26) {
          _1_OBF_FUNC_next = 600UL;
        } else {
          _1_OBF_FUNC_next = 528UL;
        }
        break;
      case 56:;
        if (c < 26) {
          _1_OBF_FUNC_next = 997UL;
        } else {
          _1_OBF_FUNC_next = 939UL;
        }
        break;
      case 914:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 425UL;
        } else {
          _1_OBF_FUNC_next = 900UL;
        }
        break;
      case 1161:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1264UL;
        } else {
          _1_OBF_FUNC_next = 188UL;
        }
        break;
      case 1580:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1575UL;
        } else {
          _1_OBF_FUNC_next = 1529UL;
        }
        break;
      case 422:;
        return (0);
        break;
      case 443:;
        if (c < 26) {
          _1_OBF_FUNC_next = 209UL;
        } else {
          _1_OBF_FUNC_next = 438UL;
        }
        break;
      case 732:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 195UL;
        break;
      case 967:
        c++;
        _1_OBF_FUNC_next = 105UL;
        break;
      case 1094:;
        if (c < 26) {
          _1_OBF_FUNC_next = 112UL;
        } else {
          _1_OBF_FUNC_next = 409UL;
        }
        break;
      case 1299:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1407UL;
        } else {
          _1_OBF_FUNC_next = 1340UL;
        }
        break;
      case 772:
        c++;
        _1_OBF_FUNC_next = 1517UL;
        break;
      case 1352:
        c++;
        _1_OBF_FUNC_next = 235UL;
        break;
      case 919:;
        return (0);
        break;
      case 840:
        __RANDVAR__10388711256618745751__ = 1;
        _1_OBF_FUNC_next = 448UL;
        break;
      case 1366:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1527UL;
        break;
      case 849:;
        if (c < 26) {
          _1_OBF_FUNC_next = 19UL;
        } else {
          _1_OBF_FUNC_next = 1195UL;
        }
        break;
      case 1536:;
        if (c < 26) {
          _1_OBF_FUNC_next = 740UL;
        } else {
          _1_OBF_FUNC_next = 1255UL;
        }
        break;
      case 201:
        c++;
        _1_OBF_FUNC_next = 216UL;
        break;
      case 574:
        c++;
        _1_OBF_FUNC_next = 462UL;
        break;
      case 346:
        __RANDVAR__58848033365706681351__ = 1;
        _1_OBF_FUNC_next = 1309UL;
        break;
      case 1335:
        c++;
        _1_OBF_FUNC_next = 70UL;
        break;
      case 1306:
        c++;
        _1_OBF_FUNC_next = 1367UL;
        break;
      case 288:
        c++;
        _1_OBF_FUNC_next = 595UL;
        break;
      case 828:;
        if (c < 26) {
          _1_OBF_FUNC_next = 999UL;
        } else {
          _1_OBF_FUNC_next = 721UL;
        }
        break;
      case 844:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 190UL;
        } else {
          _1_OBF_FUNC_next = 980UL;
        }
        break;
      case 956:
        __RANDVAR__40873333859204662796__ = 0;
        _1_OBF_FUNC_next = 379UL;
        break;
      case 1139:
        tmp++;
        _1_OBF_FUNC_next = 812UL;
        break;
      case 1573:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1008UL;
        break;
      case 761:;
        if (c < 26) {
          _1_OBF_FUNC_next = 29UL;
        } else {
          _1_OBF_FUNC_next = 791UL;
        }
        break;
      case 45:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1488UL;
        break;
      case 78:
        c++;
        _1_OBF_FUNC_next = 961UL;
        break;
      case 1014:
        c++;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 616:
        c++;
        _1_OBF_FUNC_next = 1472UL;
        break;
      case 966:
        c++;
        _1_OBF_FUNC_next = 406UL;
        break;
      case 23:
        c++;
        _1_OBF_FUNC_next = 665UL;
        break;
      case 1024:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1277UL;
        } else {
          _1_OBF_FUNC_next = 1172UL;
        }
        break;
      case 1432:;
        return (0);
        break;
      case 696:
        c++;
        _1_OBF_FUNC_next = 1174UL;
        break;
      case 1148:;
        if (c < 26) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 1242UL;
        }
        break;
      case 337:
        c++;
        _1_OBF_FUNC_next = 1200UL;
        break;
      case 1305:
        c++;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 351:
        c++;
        _1_OBF_FUNC_next = 259UL;
        break;
      case 1159:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 220UL;
        } else {
          _1_OBF_FUNC_next = 372UL;
        }
        break;
      case 1303:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 283UL;
        } else {
          _1_OBF_FUNC_next = 596UL;
        }
        break;
      case 393:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 194UL;
        } else {
          _1_OBF_FUNC_next = 1530UL;
        }
        break;
      case 1389:
        __RANDVAR__25756731650732440152__ = 0;
        _1_OBF_FUNC_next = 1225UL;
        break;
      case 197:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1261UL;
        } else {
          _1_OBF_FUNC_next = 1521UL;
        }
        break;
      case 1568:
        c++;
        _1_OBF_FUNC_next = 1154UL;
        break;
      case 526:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1249UL;
        } else {
          _1_OBF_FUNC_next = 101UL;
        }
        break;
      case 566:;
        if (c < 26) {
          _1_OBF_FUNC_next = 226UL;
        } else {
          _1_OBF_FUNC_next = 1517UL;
        }
        break;
      case 839:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1418UL;
        break;
      case 1567:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 515UL;
        }
        break;
      case 747:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 1083UL;
        break;
      case 794:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 13UL;
        } else {
          _1_OBF_FUNC_next = 844UL;
        }
        break;
      case 1011:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 696UL;
        break;
      case 1262:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1302UL;
        } else {
          _1_OBF_FUNC_next = 1311UL;
        }
        break;
      case 202:
        c++;
        _1_OBF_FUNC_next = 1413UL;
        break;
      case 1135:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1331UL;
        break;
      case 1527:
        c++;
        _1_OBF_FUNC_next = 1117UL;
        break;
      case 9:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1082UL;
        } else {
          _1_OBF_FUNC_next = 679UL;
        }
        break;
      case 1021:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 466UL;
        break;
      case 1499:
        c++;
        _1_OBF_FUNC_next = 493UL;
        break;
      case 719:;
        return (0);
        break;
      case 220:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 371UL;
        break;
      case 888:
        c++;
        _1_OBF_FUNC_next = 1094UL;
        break;
      case 312:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1393UL;
        } else {
          _1_OBF_FUNC_next = 1260UL;
        }
        break;
      case 1341:
        c++;
        _1_OBF_FUNC_next = 507UL;
        break;
      case 347:
        c++;
        _1_OBF_FUNC_next = 197UL;
        break;
      case 735:
        __RANDVAR__7225927577453478326__ = 1;
        _1_OBF_FUNC_next = 632UL;
        break;
      case 1183:
        __RANDVAR__40873333859204662796__ = 1;
        _1_OBF_FUNC_next = 379UL;
        break;
      case 146:
        c++;
        _1_OBF_FUNC_next = 742UL;
        break;
      case 852:;
        if (c < 26) {
          _1_OBF_FUNC_next = 168UL;
        } else {
          _1_OBF_FUNC_next = 316UL;
        }
        break;
      case 1386:
        c++;
        _1_OBF_FUNC_next = 678UL;
        break;
      case 500:
        c++;
        _1_OBF_FUNC_next = 953UL;
        break;
      case 938:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 922UL;
        break;
      case 1508:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 660UL;
        } else {
          _1_OBF_FUNC_next = 165UL;
        }
        break;
      case 316:;
        if (c < 26) {
          _1_OBF_FUNC_next = 442UL;
        } else {
          _1_OBF_FUNC_next = 1517UL;
        }
        break;
      case 1081:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 356UL;
        } else {
          _1_OBF_FUNC_next = 1405UL;
        }
        break;
      case 1239:
        first[tmp] = 0;
        _1_OBF_FUNC_next = 1139UL;
        break;
      case 304:;
        if (c < 26) {
          _1_OBF_FUNC_next = 809UL;
        } else {
          _1_OBF_FUNC_next = 1571UL;
        }
        break;
      case 582:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1166UL;
        break;
      case 322:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 934UL;
        } else {
          _1_OBF_FUNC_next = 1469UL;
        }
        break;
      case 1342:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 147UL;
        } else {
          _1_OBF_FUNC_next = 1367UL;
        }
        break;
      case 1034:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 320UL;
        break;
      case 773:
        c++;
        _1_OBF_FUNC_next = 1079UL;
        break;
      case 856:;
        return (0);
        break;
      case 1195:;
        if (c < 26) {
          _1_OBF_FUNC_next = 548UL;
        } else {
          _1_OBF_FUNC_next = 1442UL;
        }
        break;
      case 55:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1386UL;
        break;
      case 1066:;
        return (0);
        break;
      case 1429:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 798UL;
        break;
      case 990:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 397UL;
        } else {
          _1_OBF_FUNC_next = 641UL;
        }
        break;
      case 657:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 64UL;
        } else {
          _1_OBF_FUNC_next = 754UL;
        }
        break;
      case 1399:
        c++;
        _1_OBF_FUNC_next = 289UL;
        break;
      case 59:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 797UL;
        break;
      case 165:
        c++;
        _1_OBF_FUNC_next = 651UL;
        break;
      case 445:
        c++;
        _1_OBF_FUNC_next = 584UL;
        break;
      case 466:
        c++;
        _1_OBF_FUNC_next = 1073UL;
        break;
      case 698:
        c++;
        _1_OBF_FUNC_next = 0UL;
        break;
      case 809:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1222UL;
        } else {
          _1_OBF_FUNC_next = 1250UL;
        }
        break;
      case 223:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1507UL;
        } else {
          _1_OBF_FUNC_next = 259UL;
        }
        break;
      case 401:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1415UL;
        } else {
          _1_OBF_FUNC_next = 273UL;
        }
        break;
      case 609:
        c++;
        _1_OBF_FUNC_next = 1278UL;
        break;
      case 438:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1315UL;
        } else {
          _1_OBF_FUNC_next = 51UL;
        }
        break;
      case 934:;
        return (0);
        break;
      case 300:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1274UL;
        } else {
          _1_OBF_FUNC_next = 334UL;
        }
        break;
      case 151:;
        return (0);
        break;
      case 158:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1219UL;
        } else {
          _1_OBF_FUNC_next = 572UL;
        }
        break;
      case 1295:
        c++;
        _1_OBF_FUNC_next = 467UL;
        break;
      case 575:
        c++;
        _1_OBF_FUNC_next = 980UL;
        break;
      case 697:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1233UL;
        break;
      case 1455:;
        if (c < 26) {
          _1_OBF_FUNC_next = 103UL;
        } else {
          _1_OBF_FUNC_next = 847UL;
        }
        break;
      case 138:
        c++;
        _1_OBF_FUNC_next = 1484UL;
        break;
      case 584:;
        if (c < 26) {
          _1_OBF_FUNC_next = 932UL;
        } else {
          _1_OBF_FUNC_next = 1254UL;
        }
        break;
      case 1232:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1007UL;
        break;
      case 58:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 788UL;
        break;
      case 170:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 364UL;
        } else {
          _1_OBF_FUNC_next = 549UL;
        }
        break;
      case 1244:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1512UL;
        } else {
          _1_OBF_FUNC_next = 1255UL;
        }
        break;
      case 1370:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 521UL;
        break;
      case 255:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 859UL;
        break;
      case 48:;
        if (c < 26) {
          _1_OBF_FUNC_next = 634UL;
        } else {
          _1_OBF_FUNC_next = 847UL;
        }
        break;
      case 963:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1104UL;
        break;
      case 1517:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1360UL;
        } else {
          _1_OBF_FUNC_next = 819UL;
        }
        break;
      case 1100:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1080UL;
        } else {
          _1_OBF_FUNC_next = 1505UL;
        }
        break;
      case 536:;
        return (0);
        break;
      case 1570:
        c++;
        _1_OBF_FUNC_next = 1498UL;
        break;
      case 173:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 741UL;
        break;
      case 442:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1074UL;
        } else {
          _1_OBF_FUNC_next = 772UL;
        }
        break;
      case 1222:;
        return (0);
        break;
      case 1237:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1144UL;
        break;
      case 260:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1326UL;
        break;
      case 820:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1184UL;
        } else {
          _1_OBF_FUNC_next = 1388UL;
        }
        break;
      case 586:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 69UL;
        break;
      case 1189:
        c++;
        _1_OBF_FUNC_next = 494UL;
        break;
      case 1439:
        c++;
        _1_OBF_FUNC_next = 1072UL;
        break;
      case 282:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 923UL;
        break;
      case 408:;
        return (0);
        break;
      case 516:;
        if (__RANDVAR__74658660522718134145__ == 0) {
          _1_OBF_FUNC_next = 2UL;
        } else {
          _1_OBF_FUNC_next = 731UL;
        }
        break;
      case 1134:;
        if (c < 26) {
          _1_OBF_FUNC_next = 378UL;
        } else {
          _1_OBF_FUNC_next = 1116UL;
        }
        break;
      case 1325:
        c++;
        _1_OBF_FUNC_next = 1270UL;
        break;
      case 873:;
        return (0);
        break;
      case 1069:;
        if (c < 26) {
          _1_OBF_FUNC_next = 761UL;
        } else {
          _1_OBF_FUNC_next = 584UL;
        }
        break;
      case 1126:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 55UL;
        } else {
          _1_OBF_FUNC_next = 678UL;
        }
        break;
      case 567:;
        return (0);
        break;
      case 969:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 395UL;
        } else {
          _1_OBF_FUNC_next = 624UL;
        }
        break;
      case 680:;
        return (0);
        break;
      case 979:;
        if (c < 26) {
          _1_OBF_FUNC_next = 452UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 265:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1240UL;
        } else {
          _1_OBF_FUNC_next = 807UL;
        }
        break;
      case 687:
        c++;
        _1_OBF_FUNC_next = 441UL;
        break;
      case 716:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 454UL;
        } else {
          _1_OBF_FUNC_next = 1141UL;
        }
        break;
      case 641:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 621UL;
        } else {
          _1_OBF_FUNC_next = 1462UL;
        }
        break;
      case 1516:
        c++;
        _1_OBF_FUNC_next = 1303UL;
        break;
      case 198:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1394UL;
        } else {
          _1_OBF_FUNC_next = 898UL;
        }
        break;
      case 290:;
        if (c < 26) {
          _1_OBF_FUNC_next = 828UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 742:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 730UL;
        } else {
          _1_OBF_FUNC_next = 1113UL;
        }
        break;
      case 1564:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 138UL;
        break;
      case 597:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 117UL;
        } else {
          _1_OBF_FUNC_next = 1413UL;
        }
        break;
      case 1111:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 889UL;
        } else {
          _1_OBF_FUNC_next = 1439UL;
        }
        break;
      case 1451:;
        return (0);
        break;
      case 983:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 526UL;
        } else {
          _1_OBF_FUNC_next = 846UL;
        }
        break;
      case 1316:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 313UL;
        } else {
          _1_OBF_FUNC_next = 89UL;
        }
        break;
      case 1058:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 534UL;
        break;
      case 1152:
        c++;
        _1_OBF_FUNC_next = 946UL;
        break;
      case 1168:
        c++;
        _1_OBF_FUNC_next = 1042UL;
        break;
      case 1310:
        c++;
        _1_OBF_FUNC_next = 803UL;
        break;
      case 35:
        c++;
        _1_OBF_FUNC_next = 1353UL;
        break;
      case 603:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1547UL;
        break;
      case 664:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 1081UL;
        }
        break;
      case 1196:
        c++;
        _1_OBF_FUNC_next = 674UL;
        break;
      case 451:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1065UL;
        break;
      case 43:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 180UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 1443:
        c++;
        _1_OBF_FUNC_next = 955UL;
        break;
      case 182:
        tmp___0 = 1U;
        _1_OBF_FUNC_next = 1465UL;
        break;
      case 427:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 927UL;
        } else {
          _1_OBF_FUNC_next = 1453UL;
        }
        break;
      case 1269:
        c++;
        _1_OBF_FUNC_next = 599UL;
        break;
      case 964:;
        if (__RANDVAR__73258496907176849920__ == 0) {
          _1_OBF_FUNC_next = 290UL;
        } else {
          _1_OBF_FUNC_next = 1266UL;
        }
        break;
      case 778:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 45UL;
        } else {
          _1_OBF_FUNC_next = 136UL;
        }
        break;
      case 1052:
        c++;
        _1_OBF_FUNC_next = 1081UL;
        break;
      case 1112:;
        if (c < 26) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 1379UL;
        }
        break;
      case 354:;
        return (0);
        break;
      case 557:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 916UL;
        } else {
          _1_OBF_FUNC_next = 307UL;
        }
        break;
      case 1124:
        c++;
        _1_OBF_FUNC_next = 119UL;
        break;
      case 1491:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 675UL;
        } else {
          _1_OBF_FUNC_next = 1057UL;
        }
        break;
      case 1062:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1325UL;
        break;
      case 1117:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 573UL;
        } else {
          _1_OBF_FUNC_next = 276UL;
        }
        break;
      case 219:
        c++;
        _1_OBF_FUNC_next = 1038UL;
        break;
      case 777:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1142UL;
        } else {
          _1_OBF_FUNC_next = 648UL;
        }
        break;
      case 272:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 790UL;
        } else {
          _1_OBF_FUNC_next = 1555UL;
        }
        break;
      case 624:
        c++;
        _1_OBF_FUNC_next = 540UL;
        break;
      case 799:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1421UL;
        } else {
          _1_OBF_FUNC_next = 1204UL;
        }
        break;
      case 145:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 34UL;
        } else {
          _1_OBF_FUNC_next = 1448UL;
        }
        break;
      case 789:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 697UL;
        } else {
          _1_OBF_FUNC_next = 1549UL;
        }
        break;
      case 604:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1381UL;
        break;
      case 1057:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 1099UL;
        } else {
          _1_OBF_FUNC_next = 752UL;
        }
        break;
      case 1315:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 829UL;
        } else {
          _1_OBF_FUNC_next = 1014UL;
        }
        break;
      case 1466:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1084UL;
        break;
      case 15:
        c++;
        _1_OBF_FUNC_next = 1459UL;
        break;
      case 1503:
        c++;
        _1_OBF_FUNC_next = 581UL;
        break;
      case 1532:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 551UL;
        } else {
          _1_OBF_FUNC_next = 981UL;
        }
        break;
      case 1054:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1538UL;
        } else {
          _1_OBF_FUNC_next = 358UL;
        }
        break;
      case 121:;
        if (c < 26) {
          _1_OBF_FUNC_next = 88UL;
        } else {
          _1_OBF_FUNC_next = 325UL;
        }
        break;
      case 740:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 800UL;
        } else {
          _1_OBF_FUNC_next = 365UL;
        }
        break;
      case 548:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1256UL;
        } else {
          _1_OBF_FUNC_next = 429UL;
        }
        break;
      case 152:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 650UL;
        } else {
          _1_OBF_FUNC_next = 385UL;
        }
        break;
      case 205:
        c++;
        _1_OBF_FUNC_next = 1470UL;
        break;
      case 918:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1050UL;
        } else {
          _1_OBF_FUNC_next = 1470UL;
        }
        break;
      case 1452:
        c++;
        _1_OBF_FUNC_next = 1242UL;
        break;
      case 429:
        c++;
        _1_OBF_FUNC_next = 1442UL;
        break;
      case 1487:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 178UL;
        } else {
          _1_OBF_FUNC_next = 421UL;
        }
        break;
      case 437:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 929UL;
        } else {
          _1_OBF_FUNC_next = 991UL;
        }
        break;
      case 579:;
        if (c < 26) {
          _1_OBF_FUNC_next = 808UL;
        } else {
          _1_OBF_FUNC_next = 849UL;
        }
        break;
      case 1121:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1559UL;
        } else {
          _1_OBF_FUNC_next = 1188UL;
        }
        break;
      case 1464:
        __RANDVAR__23270323450824939379__ = 0;
        _1_OBF_FUNC_next = 795UL;
        break;
      case 54:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1106UL;
        break;
      case 1107:;
        return (0);
        break;
      case 140:;
        if (c < 26) {
          _1_OBF_FUNC_next = 841UL;
        } else {
          _1_OBF_FUNC_next = 693UL;
        }
        break;
      case 581:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 453UL;
        } else {
          _1_OBF_FUNC_next = 293UL;
        }
        break;
      case 628:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 63UL;
        } else {
          _1_OBF_FUNC_next = 694UL;
        }
        break;
      case 449:
        c++;
        _1_OBF_FUNC_next = 42UL;
        break;
      case 720:;
        return (0);
        break;
      case 995:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 663UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 1028:
        __RANDVAR__77158113985339721150__ = 0;
        _1_OBF_FUNC_next = 1241UL;
        break;
      case 1556:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 451UL;
        } else {
          _1_OBF_FUNC_next = 1448UL;
        }
        break;
      case 16:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 906UL;
        break;
      case 953:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 458UL;
        } else {
          _1_OBF_FUNC_next = 774UL;
        }
        break;
      case 954:
        c++;
        _1_OBF_FUNC_next = 77UL;
        break;
      case 1584:
        c++;
        _1_OBF_FUNC_next = 1116UL;
        break;
      case 131:
        c++;
        _1_OBF_FUNC_next = 1518UL;
        break;
      case 68:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1385UL;
        } else {
          _1_OBF_FUNC_next = 664UL;
        }
        break;
      case 1393:;
        if (c < 26) {
          _1_OBF_FUNC_next = 975UL;
        } else {
          _1_OBF_FUNC_next = 1094UL;
        }
        break;
      case 1360:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1356UL;
        } else {
          _1_OBF_FUNC_next = 48UL;
        }
        break;
      case 85:
        c++;
        _1_OBF_FUNC_next = 1017UL;
        break;
      case 808:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 522UL;
        } else {
          _1_OBF_FUNC_next = 359UL;
        }
        break;
      case 1247:
        c++;
        _1_OBF_FUNC_next = 1155UL;
        break;
      case 1194:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1541UL;
        } else {
          _1_OBF_FUNC_next = 794UL;
        }
        break;
      case 1270:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1103UL;
        } else {
          _1_OBF_FUNC_next = 956UL;
        }
        break;
      case 105:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1187UL;
        } else {
          _1_OBF_FUNC_next = 1464UL;
        }
        break;
      case 519:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 647UL;
        break;
      case 871:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1371UL;
        } else {
          _1_OBF_FUNC_next = 91UL;
        }
        break;
      case 1535:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 672UL;
        } else {
          _1_OBF_FUNC_next = 1566UL;
        }
        break;
      case 1297:
        c++;
        _1_OBF_FUNC_next = 1193UL;
        break;
      case 1519:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1420UL;
        } else {
          _1_OBF_FUNC_next = 4UL;
        }
        break;
      case 247:
        c++;
        _1_OBF_FUNC_next = 556UL;
        break;
      case 377:
        c++;
        _1_OBF_FUNC_next = 641UL;
        break;
      case 650:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 62UL;
        break;
      case 1319:;
        return (0);
        break;
      case 880:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 449UL;
        break;
      case 1025:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 781UL;
        } else {
          _1_OBF_FUNC_next = 252UL;
        }
        break;
      case 63:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 638UL;
        break;
      case 357:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1000UL;
        } else {
          _1_OBF_FUNC_next = 1459UL;
        }
        break;
      case 764:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 389UL;
        } else {
          _1_OBF_FUNC_next = 811UL;
        }
        break;
      case 297:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1289UL;
        break;
      case 812:;
        if (tmp >= 26U) {
          _1_OBF_FUNC_next = 755UL;
        } else {
          _1_OBF_FUNC_next = 1239UL;
        }
        break;
      case 1510:;
        return (0);
        break;
      case 1524:
        c++;
        _1_OBF_FUNC_next = 780UL;
        break;
      case 555:
        c++;
        _1_OBF_FUNC_next = 116UL;
        break;
      case 786:
        c++;
        _1_OBF_FUNC_next = 1442UL;
        break;
      case 1120:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 419UL;
        } else {
          _1_OBF_FUNC_next = 1196UL;
        }
        break;
      case 569:;
        return (0);
        break;
      case 999:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 562UL;
        } else {
          _1_OBF_FUNC_next = 1409UL;
        }
        break;
      case 1454:;
        if (c < 26) {
          _1_OBF_FUNC_next = 986UL;
        } else {
          _1_OBF_FUNC_next = 350UL;
        }
        break;
      case 944:
        c++;
        _1_OBF_FUNC_next = 1462UL;
        break;
      case 962:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 633UL;
        break;
      case 434:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1585UL;
        break;
      case 710:;
        return (0);
        break;
      case 1027:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 535UL;
        } else {
          _1_OBF_FUNC_next = 1090UL;
        }
        break;
      case 199:;
        return (0);
        break;
      case 264:;
        if (c < 26) {
          _1_OBF_FUNC_next = 322UL;
        } else {
          _1_OBF_FUNC_next = 1118UL;
        }
        break;
      case 1419:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 241UL;
        break;
      case 328:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1580UL;
        } else {
          _1_OBF_FUNC_next = 263UL;
        }
        break;
      case 792:
        c++;
        _1_OBF_FUNC_next = 596UL;
        break;
      case 1063:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 720UL;
        } else {
          _1_OBF_FUNC_next = 1301UL;
        }
        break;
      case 754:
        c++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 1020:
        c++;
        _1_OBF_FUNC_next = 1417UL;
        break;
      case 1427:
        c++;
        _1_OBF_FUNC_next = 879UL;
        break;
      case 353:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 945UL;
        } else {
          _1_OBF_FUNC_next = 1528UL;
        }
        break;
      case 499:
        c++;
        _1_OBF_FUNC_next = 1220UL;
        break;
      case 1314:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 187:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 725UL;
        } else {
          _1_OBF_FUNC_next = 602UL;
        }
        break;
      case 381:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 912UL;
        break;
      case 587:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 751UL;
        break;
      case 1378:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 958UL;
        } else {
          _1_OBF_FUNC_next = 1335UL;
        }
        break;
      case 511:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1245UL;
        } else {
          _1_OBF_FUNC_next = 817UL;
        }
        break;
      case 389:;
        return (0);
        break;
      case 1130:
        c++;
        _1_OBF_FUNC_next = 1100UL;
        break;
      case 157:
        c++;
        _1_OBF_FUNC_next = 1030UL;
        break;
      case 289:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1343UL;
        } else {
          _1_OBF_FUNC_next = 1455UL;
        }
        break;
      case 1414:
        c++;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 1555:
        c++;
        _1_OBF_FUNC_next = 1481UL;
        break;
      case 730:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 870UL;
        break;
      case 1044:
        c++;
        _1_OBF_FUNC_next = 1388UL;
        break;
      case 1300:;
        return (0);
        break;
      case 1213:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 191UL;
        } else {
          _1_OBF_FUNC_next = 489UL;
        }
        break;
      case 1223:
        c++;
        _1_OBF_FUNC_next = 407UL;
        break;
      case 1575:;
        return (0);
        break;
      case 982:
        __RANDVAR__77158113985339721150__ = 1;
        _1_OBF_FUNC_next = 1241UL;
        break;
      case 1563:
        __RANDVAR__74658660522718134145__ = 1;
        _1_OBF_FUNC_next = 516UL;
        break;
      case 241:
        c++;
        _1_OBF_FUNC_next = 1333UL;
        break;
      case 330:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1589UL;
        } else {
          _1_OBF_FUNC_next = 40UL;
        }
        break;
      case 1302:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 589UL;
        } else {
          _1_OBF_FUNC_next = 306UL;
        }
        break;
      case 169:;
        return (0);
        break;
      case 480:
        c++;
        _1_OBF_FUNC_next = 705UL;
        break;
      case 317:
        c++;
        _1_OBF_FUNC_next = 1112UL;
        break;
      case 22:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1369UL;
        } else {
          _1_OBF_FUNC_next = 1017UL;
        }
        break;
      case 215:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1243UL;
        } else {
          _1_OBF_FUNC_next = 691UL;
        }
        break;
      case 286:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1285UL;
        break;
      case 355:
        c++;
        _1_OBF_FUNC_next = 766UL;
        break;
      case 813:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1586UL;
        break;
      case 1049:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 500UL;
        break;
      case 1114:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1503UL;
        break;
      case 458:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 543UL;
        break;
      case 1041:
        c++;
        _1_OBF_FUNC_next = 1148UL;
        break;
      case 1003:;
        if (c < 26) {
          _1_OBF_FUNC_next = 777UL;
        } else {
          _1_OBF_FUNC_next = 739UL;
        }
        break;
      case 1582:
        __RANDVAR__96424922967334607859__ = 0;
        _1_OBF_FUNC_next = 161UL;
        break;
      case 65:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 319UL;
        } else {
          _1_OBF_FUNC_next = 594UL;
        }
        break;
      case 280:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 587UL;
        } else {
          _1_OBF_FUNC_next = 275UL;
        }
        break;
      case 600:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 338UL;
        } else {
          _1_OBF_FUNC_next = 1344UL;
        }
        break;
      case 1144:
        c++;
        _1_OBF_FUNC_next = 1262UL;
        break;
      case 44:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1370UL;
        } else {
          _1_OBF_FUNC_next = 393UL;
        }
        break;
      case 837:;
        if (__RANDVAR__37231576769284655242__ == 0) {
          _1_OBF_FUNC_next = 184UL;
        } else {
          _1_OBF_FUNC_next = 1483UL;
        }
        break;
      case 1281:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 249UL;
        } else {
          _1_OBF_FUNC_next = 980UL;
        }
        break;
      case 120:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 36UL;
        break;
      case 816:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1020UL;
        break;
      case 845:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 571UL;
        break;
      case 906:
        c++;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 1089:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 244UL;
        } else {
          _1_OBF_FUNC_next = 1189UL;
        }
        break;
      case 539:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 219UL;
        break;
      case 64:;
        return (0);
        break;
      case 1479:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1525UL;
        } else {
          _1_OBF_FUNC_next = 576UL;
        }
        break;
      case 292:
        c++;
        _1_OBF_FUNC_next = 1092UL;
        break;
      case 593:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1060UL;
        } else {
          _1_OBF_FUNC_next = 158UL;
        }
        break;
      case 276:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 689UL;
        } else {
          _1_OBF_FUNC_next = 766UL;
        }
        break;
      case 986:;
        if (c < 26) {
          _1_OBF_FUNC_next = 341UL;
        } else {
          _1_OBF_FUNC_next = 1498UL;
        }
        break;
      case 841:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 762UL;
        } else {
          _1_OBF_FUNC_next = 71UL;
        }
        break;
      case 1355:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1040UL;
        break;
      case 885:
        __RANDVAR__58848033365706681351__ = 0;
        _1_OBF_FUNC_next = 1309UL;
        break;
      case 1140:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1317UL;
        } else {
          _1_OBF_FUNC_next = 1097UL;
        }
        break;
      case 1494:
        c++;
        _1_OBF_FUNC_next = 560UL;
        break;
      case 540:;
        if (c < 26) {
          _1_OBF_FUNC_next = 759UL;
        } else {
          _1_OBF_FUNC_next = 1536UL;
        }
        break;
      case 853:
        c++;
        _1_OBF_FUNC_next = 525UL;
        break;
      case 1369:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 85UL;
        break;
      case 1528:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1532UL;
        } else {
          _1_OBF_FUNC_next = 774UL;
        }
        break;
      case 1038:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 962UL;
        } else {
          _1_OBF_FUNC_next = 1345UL;
        }
        break;
      case 1163:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1375UL;
        } else {
          _1_OBF_FUNC_next = 1486UL;
        }
        break;
      case 1543:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1349UL;
        } else {
          _1_OBF_FUNC_next = 1255UL;
        }
        break;
      case 387:
        c++;
        _1_OBF_FUNC_next = 566UL;
        break;
      case 1274:;
        return (0);
        break;
      case 1290:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 461UL;
        } else {
          _1_OBF_FUNC_next = 1353UL;
        }
        break;
      case 398:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1467UL;
        } else {
          _1_OBF_FUNC_next = 1262UL;
        }
        break;
      case 878:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 82UL;
        } else {
          _1_OBF_FUNC_next = 983UL;
        }
        break;
      case 1382:
        c++;
        _1_OBF_FUNC_next = 239UL;
        break;
      case 1367:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 303UL;
        } else {
          _1_OBF_FUNC_next = 0UL;
        }
        break;
      case 721:;
        if (c < 26) {
          _1_OBF_FUNC_next = 272UL;
        } else {
          _1_OBF_FUNC_next = 1481UL;
        }
        break;
      case 637:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1337UL;
        } else {
          _1_OBF_FUNC_next = 517UL;
        }
        break;
      case 1489:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1554UL;
        } else {
          _1_OBF_FUNC_next = 1226UL;
        }
        break;
      case 1590:
        c++;
        _1_OBF_FUNC_next = 404UL;
        break;
      case 577:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 218UL;
        }
        break;
      case 868:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1433UL;
        } else {
          _1_OBF_FUNC_next = 251UL;
        }
        break;
      case 371:
        c++;
        _1_OBF_FUNC_next = 372UL;
        break;
      case 939:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1412UL;
        } else {
          _1_OBF_FUNC_next = 670UL;
        }
        break;
      case 1118:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1546UL;
        } else {
          _1_OBF_FUNC_next = 239UL;
        }
        break;
      case 52:;
        return (0);
        break;
      case 491:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 304UL;
        } else {
          _1_OBF_FUNC_next = 1316UL;
        }
        break;
      case 785:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 871UL;
        } else {
          _1_OBF_FUNC_next = 170UL;
        }
        break;
      case 1408:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 869UL;
        } else {
          _1_OBF_FUNC_next = 893UL;
        }
        break;
      case 333:
        c++;
        _1_OBF_FUNC_next = 979UL;
        break;
      case 703:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 207UL;
        break;
      case 1178:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 578UL;
        } else {
          _1_OBF_FUNC_next = 358UL;
        }
        break;
      case 626:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 232UL;
        break;
      case 30:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1511UL;
        } else {
          _1_OBF_FUNC_next = 327UL;
        }
        break;
      case 1093:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 864UL;
        } else {
          _1_OBF_FUNC_next = 512UL;
        }
        break;
      case 1433:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 544UL;
        } else {
          _1_OBF_FUNC_next = 931UL;
        }
        break;
      case 1441:
        c++;
        _1_OBF_FUNC_next = 868UL;
        break;
      case 206:
        c++;
        _1_OBF_FUNC_next = 789UL;
        break;
      case 446:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1565UL;
        } else {
          _1_OBF_FUNC_next = 493UL;
        }
        break;
      case 783:
        c++;
        _1_OBF_FUNC_next = 1143UL;
        break;
      case 937:
        second[tmp___0] = 0;
        _1_OBF_FUNC_next = 613UL;
        break;
      case 1098:;
        return (0);
        break;
      case 1240:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 592UL;
        break;
      case 1284:
        c++;
        _1_OBF_FUNC_next = 87UL;
        break;
      case 89:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 1167UL;
        } else {
          _1_OBF_FUNC_next = 561UL;
        }
        break;
      case 695:
        c++;
        _1_OBF_FUNC_next = 40UL;
        break;
      case 291:
        c++;
        _1_OBF_FUNC_next = 602UL;
        break;
      case 1061:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 671UL;
        } else {
          _1_OBF_FUNC_next = 1342UL;
        }
        break;
      case 79:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1058UL;
        } else {
          _1_OBF_FUNC_next = 1085UL;
        }
        break;
      case 217:
        __RANDVAR__37973103139010862141__ = 0;
        _1_OBF_FUNC_next = 109UL;
        break;
      case 470:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1181UL;
        break;
      case 833:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 890UL;
        } else {
          _1_OBF_FUNC_next = 279UL;
        }
        break;
      case 866:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 967UL;
        break;
      case 1548:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 561UL;
        break;
      case 573:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 469UL;
        break;
      case 666:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1401UL;
        break;
      case 715:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 706UL;
        break;
      case 1322:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1068UL;
        break;
      case 699:;
        return (0);
        break;
      case 1416:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1066UL;
        } else {
          _1_OBF_FUNC_next = 1269UL;
        }
        break;
      case 590:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1537UL;
        } else {
          _1_OBF_FUNC_next = 501UL;
        }
        break;
      case 665:;
        if (c < 26) {
          _1_OBF_FUNC_next = 113UL;
        } else {
          _1_OBF_FUNC_next = 418UL;
        }
        break;
      case 1547:
        c++;
        _1_OBF_FUNC_next = 712UL;
        break;
      case 476:
        c++;
        _1_OBF_FUNC_next = 865UL;
        break;
      case 303:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 698UL;
        break;
      case 712:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 444UL;
        } else {
          _1_OBF_FUNC_next = 512UL;
        }
        break;
      case 1065:
        c++;
        _1_OBF_FUNC_next = 1448UL;
        break;
      case 81:;
        if (c < 26) {
          _1_OBF_FUNC_next = 704UL;
        } else {
          _1_OBF_FUNC_next = 1379UL;
        }
        break;
      case 356:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 152UL;
        } else {
          _1_OBF_FUNC_next = 1528UL;
        }
        break;
      case 672:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 631UL;
        break;
      case 273:
        __RANDVAR__73258496907176849920__ = 0;
        _1_OBF_FUNC_next = 964UL;
        break;
      case 70:
        __RANDVAR__90349384210679245530__ = 0;
        _1_OBF_FUNC_next = 1157UL;
        break;
      case 1029:;
        return (0);
        break;
      case 898:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1348UL;
        } else {
          _1_OBF_FUNC_next = 1079UL;
        }
        break;
      case 509:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1201UL;
        } else {
          _1_OBF_FUNC_next = 1411UL;
        }
        break;
      case 24:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1035UL;
        break;
      case 1087:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 555UL;
        break;
      case 1374:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 211UL;
        } else {
          _1_OBF_FUNC_next = 1138UL;
        }
        break;
      case 167:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 1287UL;
        break;
      case 407:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1019UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 798:
        c++;
        _1_OBF_FUNC_next = 1346UL;
        break;
      case 1172:
        c++;
        _1_OBF_FUNC_next = 1260UL;
        break;
      case 415:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1218UL;
        } else {
          _1_OBF_FUNC_next = 416UL;
        }
        break;
      case 507:;
        if (c < 26) {
          _1_OBF_FUNC_next = 976UL;
        } else {
          _1_OBF_FUNC_next = 1400UL;
        }
        break;
      case 245:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1295UL;
        break;
      case 750:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 1406UL;
        break;
      case 830:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1313UL;
        } else {
          _1_OBF_FUNC_next = 1387UL;
        }
        break;
      case 917:
        c++;
        _1_OBF_FUNC_next = 1517UL;
        break;
      case 1272:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 282UL;
        } else {
          _1_OBF_FUNC_next = 892UL;
        }
        break;
      case 57:
        c++;
        _1_OBF_FUNC_next = 446UL;
        break;
      case 156:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1297UL;
        break;
      case 975:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1526UL;
        } else {
          _1_OBF_FUNC_next = 888UL;
        }
        break;
      case 669:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 646UL;
        break;
      case 1326:
        c++;
        _1_OBF_FUNC_next = 679UL;
        break;
      case 1001:
        c++;
        _1_OBF_FUNC_next = 460UL;
        break;
      case 420:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 485UL;
        break;
      case 1418:
        c++;
        _1_OBF_FUNC_next = 464UL;
        break;
      case 344:
        __RANDVAR__96424922967334607859__ = 1;
        _1_OBF_FUNC_next = 161UL;
        break;
      case 552:
        c++;
        _1_OBF_FUNC_next = 851UL;
        break;
      case 518:
        c++;
        _1_OBF_FUNC_next = 820UL;
        break;
      case 1500:
        tmp = 1U;
        _1_OBF_FUNC_next = 812UL;
        break;
      case 517:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1178UL;
        } else {
          _1_OBF_FUNC_next = 840UL;
        }
        break;
      case 1361:
        c++;
        _1_OBF_FUNC_next = 1282UL;
        break;
      case 1501:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1247UL;
        break;
      case 971:
        c++;
        _1_OBF_FUNC_next = 1053UL;
        break;
      case 725:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 291UL;
        break;
      case 997:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1029UL;
        } else {
          _1_OBF_FUNC_next = 968UL;
        }
        break;
      case 331:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1210UL;
        } else {
          _1_OBF_FUNC_next = 407UL;
        }
        break;
      case 965:
        c++;
        _1_OBF_FUNC_next = 974UL;
        break;
      case 693:;
        if (c < 26) {
          _1_OBF_FUNC_next = 301UL;
        } else {
          _1_OBF_FUNC_next = 1482UL;
        }
        break;
      case 1384:
        __RANDVAR__30518176093239977552__ = 1;
        _1_OBF_FUNC_next = 382UL;
        break;
      case 887:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1376UL;
        } else {
          _1_OBF_FUNC_next = 918UL;
        }
        break;
      case 40:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1267UL;
        } else {
          _1_OBF_FUNC_next = 803UL;
        }
        break;
      case 599:
        __RANDVAR__7225927577453478326__ = 0;
        _1_OBF_FUNC_next = 632UL;
        break;
      case 67:
        c++;
        _1_OBF_FUNC_next = 307UL;
        break;
      case 1099:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 96UL;
        } else {
          _1_OBF_FUNC_next = 254UL;
        }
        break;
      case 110:
        c++;
        _1_OBF_FUNC_next = 33UL;
        break;
      case 779:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1152UL;
        break;
      case 994:;
        if (c < 26) {
          _1_OBF_FUNC_next = 707UL;
        } else {
          _1_OBF_FUNC_next = 394UL;
        }
        break;
      case 314:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1108UL;
        } else {
          _1_OBF_FUNC_next = 661UL;
        }
        break;
      case 931:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1487UL;
        } else {
          _1_OBF_FUNC_next = 1506UL;
        }
        break;
      case 1012:
        __RANDVAR__25756731650732440152__ = 1;
        _1_OBF_FUNC_next = 1225UL;
        break;
      case 6:
        c++;
        _1_OBF_FUNC_next = 983UL;
        break;
      case 155:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1355UL;
        } else {
          _1_OBF_FUNC_next = 568UL;
        }
        break;
      case 483:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 605UL;
        } else {
          _1_OBF_FUNC_next = 973UL;
        }
        break;
      case 1030:
        __RANDVAR__30518176093239977552__ = 0;
        _1_OBF_FUNC_next = 382UL;
        break;
      case 530:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 270UL;
        } else {
          _1_OBF_FUNC_next = 445UL;
        }
        break;
      case 1307:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 947UL;
        } else {
          _1_OBF_FUNC_next = 1054UL;
        }
        break;
      case 675:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1292UL;
        } else {
          _1_OBF_FUNC_next = 778UL;
        }
        break;
      case 1071:
        c++;
        _1_OBF_FUNC_next = 1536UL;
        break;
      case 1522:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1135UL;
        } else {
          _1_OBF_FUNC_next = 898UL;
        }
        break;
      case 1022:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 227UL;
        } else {
          _1_OBF_FUNC_next = 1361UL;
        }
        break;
      case 1019:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1305UL;
        break;
      case 1202:;
        if (c < 26) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 223UL;
        }
        break;
      case 1444:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1001UL;
        break;
      case 256:
        c++;
        _1_OBF_FUNC_next = 1474UL;
        break;
      case 374:
        c++;
        _1_OBF_FUNC_next = 529UL;
        break;
      case 495:
        c++;
        _1_OBF_FUNC_next = 780UL;
        break;
      case 505:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 743UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 1280:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 202UL;
        break;
      case 74:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 374UL;
        break;
      case 123:;
        return (0);
        break;
      case 1088:
        c++;
        _1_OBF_FUNC_next = 394UL;
        break;
      case 1357:
        c++;
        _1_OBF_FUNC_next = 619UL;
        break;
      case 1472:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 880UL;
        } else {
          _1_OBF_FUNC_next = 42UL;
        }
        break;
      case 724:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1259UL;
        } else {
          _1_OBF_FUNC_next = 507UL;
        }
        break;
      case 234:
        __RANDVAR__86631726644693965575__ = 1;
        _1_OBF_FUNC_next = 832UL;
        break;
      case 713:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1170UL;
        } else {
          _1_OBF_FUNC_next = 565UL;
        }
        break;
      case 293:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1583UL;
        } else {
          _1_OBF_FUNC_next = 1476UL;
        }
        break;
      case 1015:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 971UL;
        break;
      case 1158:;
        return (0);
        break;
      case 1308:
        c++;
        _1_OBF_FUNC_next = 664UL;
        break;
      case 1383:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1133UL;
        } else {
          _1_OBF_FUNC_next = 1399UL;
        }
        break;
      case 240:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1581UL;
        } else {
          _1_OBF_FUNC_next = 1023UL;
        }
        break;
      case 380:
        c++;
        _1_OBF_FUNC_next = 512UL;
        break;
      case 1256:;
        return (0);
        break;
      case 218:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 732UL;
        } else {
          _1_OBF_FUNC_next = 538UL;
        }
        break;
      case 802:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 992UL;
        } else {
          _1_OBF_FUNC_next = 480UL;
        }
        break;
      case 1294:
        c++;
        _1_OBF_FUNC_next = 1081UL;
        break;
      case 723:
        c++;
        _1_OBF_FUNC_next = 1543UL;
        break;
      case 1181:
        c++;
        _1_OBF_FUNC_next = 588UL;
        break;
      case 163:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 430UL;
        } else {
          _1_OBF_FUNC_next = 1100UL;
        }
        break;
      case 230:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1494UL;
        break;
      case 1155:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 106UL;
        } else {
          _1_OBF_FUNC_next = 293UL;
        }
        break;
      case 114:
        c++;
        _1_OBF_FUNC_next = 328UL;
        break;
      case 1217:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 473UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        break;
      case 1391:
        __RANDVAR__73258496907176849920__ = 1;
        _1_OBF_FUNC_next = 964UL;
        break;
      case 368:
        c++;
        _1_OBF_FUNC_next = 831UL;
        break;
      case 252:
        c++;
        _1_OBF_FUNC_next = 350UL;
        break;
      case 1356:;
        if (c < 26) {
          _1_OBF_FUNC_next = 305UL;
        } else {
          _1_OBF_FUNC_next = 928UL;
        }
        break;
      case 1428:
        c++;
        _1_OBF_FUNC_next = 1453UL;
        break;
      case 547:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 254UL;
        break;
      case 782:
        c++;
        _1_OBF_FUNC_next = 769UL;
        break;
      case 1060:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1010UL;
        } else {
          _1_OBF_FUNC_next = 262UL;
        }
        break;
      case 1180:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 627UL;
        } else {
          _1_OBF_FUNC_next = 1456UL;
        }
        break;
      case 1372:
        c++;
        _1_OBF_FUNC_next = 312UL;
        break;
      case 1373:
        c++;
        _1_OBF_FUNC_next = 618UL;
        break;
      case 1558:
        c++;
        _1_OBF_FUNC_next = 1281UL;
        break;
      case 1413:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1435UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 660:;
        return (0);
        break;
      case 538:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 330UL;
        } else {
          _1_OBF_FUNC_next = 683UL;
        }
        break;
      case 1145:;
        return (0);
        break;
      case 533:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 626UL;
        } else {
          _1_OBF_FUNC_next = 612UL;
        }
        break;
      case 631:
        c++;
        _1_OBF_FUNC_next = 1566UL;
        break;
      case 1293:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 1057UL;
        break;
      case 1461:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1366UL;
        } else {
          _1_OBF_FUNC_next = 1117UL;
        }
        break;
      case 324:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 616UL;
        break;
      case 736:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 321UL;
        } else {
          _1_OBF_FUNC_next = 1353UL;
        }
        break;
      case 447:;
        return (0);
        break;
      case 677:
        c++;
        _1_OBF_FUNC_next = 433UL;
        break;
      case 66:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1016UL;
        break;
      case 363:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1268UL;
        } else {
          _1_OBF_FUNC_next = 921UL;
        }
        break;
      case 1456:
        c++;
        _1_OBF_FUNC_next = 1197UL;
        break;
      case 340:
        c++;
        _1_OBF_FUNC_next = 279UL;
        break;
      case 745:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 811:
        c++;
        _1_OBF_FUNC_next = 148UL;
        break;
      case 1080:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 643UL;
        break;
      case 1486:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 420UL;
        } else {
          _1_OBF_FUNC_next = 428UL;
        }
        break;
      case 1471:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 609UL;
        break;
      case 678:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1280UL;
        } else {
          _1_OBF_FUNC_next = 1413UL;
        }
        break;
      case 795:;
        if (__RANDVAR__23270323450824939379__ == 0) {
          _1_OBF_FUNC_next = 145UL;
        } else {
          _1_OBF_FUNC_next = 384UL;
        }
        break;
      case 865:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 260UL;
        } else {
          _1_OBF_FUNC_next = 679UL;
        }
        break;
      case 1345:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 361UL;
        }
        break;
      case 1207:;
        return (0);
        break;
      case 1328:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1224UL;
        } else {
          _1_OBF_FUNC_next = 30UL;
        }
        break;
      case 464:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 163UL;
        } else {
          _1_OBF_FUNC_next = 1205UL;
        }
        break;
      case 589:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 714UL;
        break;
      case 737:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 403UL;
        } else {
          _1_OBF_FUNC_next = 789UL;
        }
        break;
      case 949:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 963UL;
        } else {
          _1_OBF_FUNC_next = 1159UL;
        }
        break;
      case 18:
        (second[(int)*(b + c) - 97])++;
        {
          if ((((_2_alwaysZero & ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) * (_2_alwaysZero | ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) + (_2_alwaysZero & ~((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) * (~_2_alwaysZero & ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1)))) | 1) + (((_2_alwaysZero & ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) * (_2_alwaysZero | ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) + (_2_alwaysZero & ~((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1))) * (~_2_alwaysZero & ((_2_entropy & 1) * (_2_entropy | 1) + (_2_entropy & ~1) * (~_2_entropy & 1)))) & 1)) {
            _1_OBF_FUNC_next = 1151UL;
          } else {
          }
        }
        break;
      case 1425:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 753UL;
        } else {
          _1_OBF_FUNC_next = 157UL;
        }
        break;
      case 301:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1173UL;
        } else {
          _1_OBF_FUNC_next = 287UL;
        }
        break;
      case 905:
        c++;
        _1_OBF_FUNC_next = 361UL;
        break;
      case 452:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 52UL;
        } else {
          _1_OBF_FUNC_next = 432UL;
        }
        break;
      case 1122:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 74UL;
        } else {
          _1_OBF_FUNC_next = 529UL;
        }
        break;
      case 532:;
        if (c < 26) {
          _1_OBF_FUNC_next = 299UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 537:
        c++;
        _1_OBF_FUNC_next = 823UL;
        break;
      case 1254:;
        if (c < 26) {
          _1_OBF_FUNC_next = 920UL;
        } else {
          _1_OBF_FUNC_next = 1517UL;
        }
        break;
      case 4:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 996UL;
        } else {
          _1_OBF_FUNC_next = 1200UL;
        }
        break;
      case 726:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 258:;
        return (0);
        break;
      case 897:
        c++;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 1249:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 181UL;
        break;
      case 189:
        c++;
        _1_OBF_FUNC_next = 1154UL;
        break;
      case 694:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 159UL;
        } else {
          _1_OBF_FUNC_next = 878UL;
        }
        break;
      case 942:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1578UL;
        break;
      case 1208:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 768UL;
        break;
      case 1079:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 523UL;
        } else {
          _1_OBF_FUNC_next = 980UL;
        }
        break;
      case 508:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 156UL;
        } else {
          _1_OBF_FUNC_next = 1193UL;
        }
        break;
      case 544:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 988UL;
        } else {
          _1_OBF_FUNC_next = 557UL;
        }
        break;
      case 477:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 763UL;
        break;
      case 1031:
        c++;
        _1_OBF_FUNC_next = 766UL;
        break;
      case 1234:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 715UL;
        } else {
          _1_OBF_FUNC_next = 107UL;
        }
        break;
      case 1549:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 603UL;
        } else {
          _1_OBF_FUNC_next = 712UL;
        }
        break;
      case 478:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 549UL;
        break;
      case 1318:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 863UL;
        break;
      case 743:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 266UL;
        break;
      case 879:;
        if (c < 26) {
          _1_OBF_FUNC_next = 383UL;
        } else {
          _1_OBF_FUNC_next = 1154UL;
        }
        break;
      case 929:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 488UL;
        break;
      case 275:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 479UL;
        } else {
          _1_OBF_FUNC_next = 323UL;
        }
        break;
      case 1179:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1149UL;
        break;
      case 428:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1463UL;
        } else {
          _1_OBF_FUNC_next = 868UL;
        }
        break;
      case 1278:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 230UL;
        } else {
          _1_OBF_FUNC_next = 560UL;
        }
        break;
      case 1298:
        __RANDVAR__35788028822471523552__ = 0;
        _1_OBF_FUNC_next = 943UL;
        break;
      case 528:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1468UL;
        } else {
          _1_OBF_FUNC_next = 1154UL;
        }
        break;
      case 768:
        c++;
        _1_OBF_FUNC_next = 177UL;
        break;
      case 1023:
        c++;
        _1_OBF_FUNC_next = 550UL;
        break;
      case 216:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 904UL;
        } else {
          _1_OBF_FUNC_next = 1078UL;
        }
        break;
      case 682:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1056UL;
        } else {
          _1_OBF_FUNC_next = 1358UL;
        }
        break;
      case 168:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 76UL;
        } else {
          _1_OBF_FUNC_next = 1006UL;
        }
        break;
      case 520:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 199UL;
        } else {
          _1_OBF_FUNC_next = 1364UL;
        }
        break;
      case 1032:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 253UL;
        } else {
          _1_OBF_FUNC_next = 538UL;
        }
        break;
      case 489:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 949UL;
        } else {
          _1_OBF_FUNC_next = 883UL;
        }
        break;
      case 1538:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 269UL;
        break;
      case 1101:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 513UL;
        break;
      case 1182:
        c++;
        _1_OBF_FUNC_next = 1271UL;
        break;
      case 426:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 993UL;
        break;
      case 431:
        c++;
        _1_OBF_FUNC_next = 670UL;
        break;
      case 475:
        c++;
        _1_OBF_FUNC_next = 325UL;
        break;
      case 831:;
        if (c < 26) {
          _1_OBF_FUNC_next = 579UL;
        } else {
          _1_OBF_FUNC_next = 1442UL;
        }
        break;
      case 1436:
        c++;
        _1_OBF_FUNC_next = 1522UL;
        break;
      case 1488:
        c++;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 731:;
        return (1);
        break;
      case 1167:;
        if (c < 26) {
          _1_OBF_FUNC_next = 61UL;
        } else {
          _1_OBF_FUNC_next = 665UL;
        }
        break;
      case 504:
        c++;
        _1_OBF_FUNC_next = 511UL;
        break;
      case 1084:
        c++;
        _1_OBF_FUNC_next = 1234UL;
        break;
      case 1129:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1560UL;
        } else {
          _1_OBF_FUNC_next = 990UL;
        }
        break;
      case 1446:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 826UL;
        break;
      case 1588:
        c++;
        _1_OBF_FUNC_next = 1054UL;
        break;
      case 1133:;
        return (0);
        break;
      case 1267:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1310UL;
        break;
      case 882:
        c++;
        _1_OBF_FUNC_next = 1400UL;
        break;
      case 860:
        c++;
        _1_OBF_FUNC_next = 994UL;
        break;
      case 1467:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1208UL;
        } else {
          _1_OBF_FUNC_next = 177UL;
        }
        break;
      case 656:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 1497UL;
        } else {
          _1_OBF_FUNC_next = 1287UL;
        }
        break;
      case 947:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1588UL;
        break;
      case 1252:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1230UL;
        } else {
          _1_OBF_FUNC_next = 723UL;
        }
        break;
      case 343:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 950UL;
        } else {
          _1_OBF_FUNC_next = 1357UL;
        }
        break;
      case 608:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 129UL;
        break;
      case 1073:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 141UL;
        } else {
          _1_OBF_FUNC_next = 1012UL;
        }
        break;
      case 1469:
        c++;
        _1_OBF_FUNC_next = 1118UL;
        break;
      case 448:;
        if (__RANDVAR__10388711256618745751__ == 0) {
          _1_OBF_FUNC_next = 1213UL;
        } else {
          _1_OBF_FUNC_next = 911UL;
        }
        break;
      case 541:
        c++;
        _1_OBF_FUNC_next = 1198UL;
        break;
      case 1212:
        c++;
        _1_OBF_FUNC_next = 327UL;
        break;
      case 506:
        c++;
        _1_OBF_FUNC_next = 415UL;
        break;
      case 602:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 839UL;
        } else {
          _1_OBF_FUNC_next = 464UL;
        }
        break;
      case 996:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 337UL;
        break;
      case 1228:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1237UL;
        } else {
          _1_OBF_FUNC_next = 1262UL;
        }
        break;
      case 36:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 80UL;
        } else {
          _1_OBF_FUNC_next = 561UL;
        }
        break;
      case 213:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 256UL;
        break;
      case 684:
        c++;
        _1_OBF_FUNC_next = 1190UL;
        break;
      case 1449:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 905UL;
        break;
      case 1475:
        c++;
        _1_OBF_FUNC_next = 794UL;
        break;
      case 181:
        c++;
        _1_OBF_FUNC_next = 101UL;
        break;
      case 876:;
        if (c < 26) {
          _1_OBF_FUNC_next = 914UL;
        } else {
          _1_OBF_FUNC_next = 936UL;
        }
        break;
      case 1216:
        c++;
        _1_OBF_FUNC_next = 409UL;
        break;
      case 402:;
        return (0);
        break;
      case 26:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1109UL;
        break;
      case 1002:;
        return (0);
        break;
      case 1354:
        c++;
        _1_OBF_FUNC_next = 155UL;
        break;
      case 861:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 10UL;
        } else {
          _1_OBF_FUNC_next = 525UL;
        }
        break;
      case 1033:
        c++;
        _1_OBF_FUNC_next = 1255UL;
        break;
      case 296:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 391UL;
        break;
      case 435:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 924UL;
        } else {
          _1_OBF_FUNC_next = 436UL;
        }
        break;
      case 1387:;
        if (c < 26) {
          _1_OBF_FUNC_next = 264UL;
        } else {
          _1_OBF_FUNC_next = 550UL;
        }
        break;
      case 225:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 204UL;
        break;
      case 875:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 822UL;
        } else {
          _1_OBF_FUNC_next = 787UL;
        }
        break;
      case 135:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 806UL;
        break;
      case 850:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1443UL;
        break;
      case 955:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1332UL;
        } else {
          _1_OBF_FUNC_next = 1431UL;
        }
        break;
      case 1379:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1434UL;
        } else {
          _1_OBF_FUNC_next = 344UL;
        }
        break;
      case 1587:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 456UL;
        break;
      case 1385:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1308UL;
        break;
      case 881:
        c++;
        _1_OBF_FUNC_next = 1338UL;
        break;
      case 1260:;
        if (c < 26) {
          _1_OBF_FUNC_next = 440UL;
        } else {
          _1_OBF_FUNC_next = 325UL;
        }
        break;
      case 1437:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 11UL;
        } else {
          _1_OBF_FUNC_next = 1073UL;
        }
        break;
      case 125:
        c = 0;
        _1_OBF_FUNC_next = 1137UL;
        break;
      case 515:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 315UL;
        } else {
          _1_OBF_FUNC_next = 119UL;
        }
        break;
      case 676:
        __RANDVAR__42874659787741263580__ = 1;
        _1_OBF_FUNC_next = 685UL;
        break;
      case 973:
        c++;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 1042:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 482UL;
        } else {
          _1_OBF_FUNC_next = 823UL;
        }
        break;
      case 1095:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 857UL;
        } else {
          _1_OBF_FUNC_next = 1075UL;
        }
        break;
      case 542:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 872UL;
        break;
      case 1514:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 604UL;
        } else {
          _1_OBF_FUNC_next = 1460UL;
        }
        break;
      case 227:;
        return (0);
        break;
      case 454:;
        return (0);
        break;
      case 1266:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 561UL;
        break;
      case 1394:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 668UL;
        } else {
          _1_OBF_FUNC_next = 235UL;
        }
        break;
      case 606:;
        if (c < 26) {
          _1_OBF_FUNC_next = 802UL;
        } else {
          _1_OBF_FUNC_next = 705UL;
        }
        break;
      case 935:
        c++;
        _1_OBF_FUNC_next = 1228UL;
        break;
      case 1219:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1120UL;
        } else {
          _1_OBF_FUNC_next = 674UL;
        }
        break;
      case 1402:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 850UL;
        } else {
          _1_OBF_FUNC_next = 955UL;
        }
        break;
      case 269:
        c++;
        _1_OBF_FUNC_next = 358UL;
        break;
      case 1156:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 518UL;
        break;
      case 117:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 1126UL;
        }
        break;
      case 1092:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 726UL;
        } else {
          _1_OBF_FUNC_next = 1556UL;
        }
        break;
      case 525:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 286UL;
        } else {
          _1_OBF_FUNC_next = 1495UL;
        }
        break;
      case 546:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 567UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 150:;
        if (c < 26) {
          _1_OBF_FUNC_next = 300UL;
        } else {
          _1_OBF_FUNC_next = 1390UL;
        }
        break;
      case 912:
        c++;
        _1_OBF_FUNC_next = 885UL;
        break;
      case 244:;
        return (0);
        break;
      case 607:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1402UL;
        } else {
          _1_OBF_FUNC_next = 1474UL;
        }
        break;
      case 161:;
        if (__RANDVAR__96424922967334607859__ == 0) {
          _1_OBF_FUNC_next = 1447UL;
        } else {
          _1_OBF_FUNC_next = 1548UL;
        }
        break;
      case 405:
        __RANDVAR__37973103139010862141__ = 1;
        _1_OBF_FUNC_next = 109UL;
        break;
      case 1447:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1110UL;
        } else {
          _1_OBF_FUNC_next = 1192UL;
        }
        break;
      case 137:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1552UL;
        } else {
          _1_OBF_FUNC_next = 780UL;
        }
        break;
      case 1530:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 122UL;
        } else {
          _1_OBF_FUNC_next = 766UL;
        }
        break;
      case 243:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 948UL;
        break;
      case 194:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 842UL;
        break;
      case 319:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 570UL;
        break;
      case 87:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 867UL;
        } else {
          _1_OBF_FUNC_next = 595UL;
        }
        break;
      case 683:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 398UL;
        } else {
          _1_OBF_FUNC_next = 770UL;
        }
        break;
      case 751:
        c++;
        _1_OBF_FUNC_next = 275UL;
        break;
      case 1109:
        c++;
        _1_OBF_FUNC_next = 1055UL;
        break;
      case 1243:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1164UL;
        break;
      case 183:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1359UL;
        } else {
          _1_OBF_FUNC_next = 325UL;
        }
        break;
      case 1086:
        c++;
        _1_OBF_FUNC_next = 293UL;
        break;
      case 1246:
        c++;
        _1_OBF_FUNC_next = 1379UL;
        break;
      case 1336:
        __RANDVAR__42874659787741263580__ = 0;
        _1_OBF_FUNC_next = 1477UL;
        break;
      case 274:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 339UL;
        } else {
          _1_OBF_FUNC_next = 965UL;
        }
        break;
      case 418:;
        if (c < 26) {
          _1_OBF_FUNC_next = 410UL;
        } else {
          _1_OBF_FUNC_next = 1582UL;
        }
        break;
      case 1165:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 331UL;
        } else {
          _1_OBF_FUNC_next = 1085UL;
        }
        break;
      case 281:
        c++;
        _1_OBF_FUNC_next = 1028UL;
        break;
      case 705:;
        if (c < 26) {
          _1_OBF_FUNC_next = 960UL;
        } else {
          _1_OBF_FUNC_next = 1112UL;
        }
        break;
      case 413:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1304UL;
        break;
      case 708:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1180UL;
        } else {
          _1_OBF_FUNC_next = 1197UL;
        }
        break;
      case 788:
        c++;
        _1_OBF_FUNC_next = 369UL;
        break;
      case 700:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 447UL;
        } else {
          _1_OBF_FUNC_next = 775UL;
        }
        break;
      case 890:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 340UL;
        break;
      case 1572:
        c++;
        _1_OBF_FUNC_next = 517UL;
        break;
      case 148:;
        if (c < 26) {
          _1_OBF_FUNC_next = 12UL;
        } else {
          _1_OBF_FUNC_next = 1438UL;
        }
        break;
      case 1096:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1011UL;
        } else {
          _1_OBF_FUNC_next = 1174UL;
        }
        break;
      case 1250:
        c++;
        _1_OBF_FUNC_next = 1571UL;
        break;
      case 1473:
        c++;
        _1_OBF_FUNC_next = 928UL;
        break;
      case 1220:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1592UL;
        } else {
          _1_OBF_FUNC_next = 742UL;
        }
        break;
      case 1050:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 205UL;
        break;
      case 423:
        c++;
        _1_OBF_FUNC_next = 438UL;
        break;
      case 1188:
        __RANDVAR__67275785082115139151__ = 0;
        _1_OBF_FUNC_next = 1533UL;
        break;
      case 1507:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 758UL;
        } else {
          _1_OBF_FUNC_next = 351UL;
        }
        break;
      case 1006:
        c++;
        _1_OBF_FUNC_next = 316UL;
        break;
      case 1304:
        c++;
        _1_OBF_FUNC_next = 810UL;
        break;
      case 394:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1378UL;
        } else {
          _1_OBF_FUNC_next = 70UL;
        }
        break;
      case 1193:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1162UL;
        } else {
          _1_OBF_FUNC_next = 1073UL;
        }
        break;
      case 119:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 845UL;
        } else {
          _1_OBF_FUNC_next = 1290UL;
        }
        break;
      case 338:;
        return (0);
        break;
      case 1346:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1163UL;
        } else {
          _1_OBF_FUNC_next = 868UL;
        }
        break;
      case 233:;
        if (c < 26) {
          _1_OBF_FUNC_next = 546UL;
        } else {
          _1_OBF_FUNC_next = 446UL;
        }
        break;
      case 1440:
        c++;
        _1_OBF_FUNC_next = 576UL;
        break;
      case 924:;
        return (0);
        break;
      case 309:;
        if (c < 26) {
          _1_OBF_FUNC_next = 686UL;
        } else {
          _1_OBF_FUNC_next = 95UL;
        }
        break;
      case 0:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1535UL;
        } else {
          _1_OBF_FUNC_next = 1346UL;
        }
        break;
      case 571:
        c++;
        _1_OBF_FUNC_next = 1290UL;
        break;
      case 763:
        c++;
        _1_OBF_FUNC_next = 833UL;
        break;
      case 361:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 804UL;
        } else {
          _1_OBF_FUNC_next = 780UL;
        }
        break;
      case 633:
        c++;
        _1_OBF_FUNC_next = 1345UL;
        break;
      case 661:
        c++;
        _1_OBF_FUNC_next = 708UL;
        break;
      case 136:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1327UL;
        } else {
          _1_OBF_FUNC_next = 72UL;
        }
        break;
      case 1204:;
        if (c < 26) {
          _1_OBF_FUNC_next = 590UL;
        } else {
          _1_OBF_FUNC_next = 1254UL;
        }
        break;
      case 1331:
        c++;
        _1_OBF_FUNC_next = 898UL;
        break;
      case 819:
        __RANDVAR__90349384210679245530__ = 1;
        _1_OBF_FUNC_next = 1157UL;
        break;
      case 1495:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1573UL;
        } else {
          _1_OBF_FUNC_next = 517UL;
        }
        break;
      case 1574:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1257UL;
        } else {
          _1_OBF_FUNC_next = 1211UL;
        }
        break;
      case 1147:;
        if (c < 26) {
          _1_OBF_FUNC_next = 585UL;
        } else {
          _1_OBF_FUNC_next = 566UL;
        }
        break;
      case 1404:
        c++;
        _1_OBF_FUNC_next = 1486UL;
        break;
      case 1525:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1440UL;
        break;
      case 88:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1002UL;
        } else {
          _1_OBF_FUNC_next = 553UL;
        }
        break;
      case 501:
        c++;
        _1_OBF_FUNC_next = 1254UL;
        break;
      case 174:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1450UL;
        } else {
          _1_OBF_FUNC_next = 1235UL;
        }
        break;
      case 367:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 380UL;
        break;
      case 179:;
        return (0);
        break;
      case 886:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1300UL;
        } else {
          _1_OBF_FUNC_next = 131UL;
        }
        break;
      case 1176:;
        return (0);
        break;
      case 329:
        c++;
        _1_OBF_FUNC_next = 1096UL;
        break;
      case 350:;
        if (c < 26) {
          _1_OBF_FUNC_next = 267UL;
        } else {
          _1_OBF_FUNC_next = 670UL;
        }
        break;
      case 692:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1539UL;
        } else {
          _1_OBF_FUNC_next = 271UL;
        }
        break;
      case 352:
        c++;
        _1_OBF_FUNC_next = 690UL;
        break;
      case 129:
        c++;
        _1_OBF_FUNC_next = 667UL;
        break;
      case 397:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 377UL;
        break;
      case 358:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 164UL;
        } else {
          _1_OBF_FUNC_next = 595UL;
        }
        break;
      case 130:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1416UL;
        } else {
          _1_OBF_FUNC_next = 599UL;
        }
        break;
      case 25:;
        return (0);
        break;
      case 910:
        c++;
        _1_OBF_FUNC_next = 1027UL;
        break;
      case 1583:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 280UL;
        } else {
          _1_OBF_FUNC_next = 1333UL;
        }
        break;
      case 369:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1122UL;
        } else {
          _1_OBF_FUNC_next = 293UL;
        }
        break;
      case 200:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1232UL;
        } else {
          _1_OBF_FUNC_next = 137UL;
        }
        break;
      case 632:;
        if (__RANDVAR__7225927577453478326__ == 0) {
          _1_OBF_FUNC_next = 1003UL;
        } else {
          _1_OBF_FUNC_next = 115UL;
        }
        break;
      case 436:
        c++;
        _1_OBF_FUNC_next = 1192UL;
        break;
      case 1279:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 1190UL;
        }
        break;
      case 1592:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 869:;
        return (0);
        break;
      case 1458:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 813UL;
        } else {
          _1_OBF_FUNC_next = 1283UL;
        }
        break;
      case 760:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 37UL;
        break;
      case 978:
        c++;
        _1_OBF_FUNC_next = 1455UL;
        break;
      case 133:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 574UL;
        break;
      case 864:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1286UL;
        } else {
          _1_OBF_FUNC_next = 433UL;
        }
        break;
      case 796:
        c++;
        _1_OBF_FUNC_next = 416UL;
        break;
      case 825:
        c++;
        _1_OBF_FUNC_next = 437UL;
        break;
      case 618:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1323UL;
        } else {
          _1_OBF_FUNC_next = 1379UL;
        }
        break;
      case 1259:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 919UL;
        } else {
          _1_OBF_FUNC_next = 1341UL;
        }
        break;
      case 1287:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 505UL;
        } else {
          _1_OBF_FUNC_next = 549UL;
        }
        break;
      case 704:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 149UL;
        } else {
          _1_OBF_FUNC_next = 926UL;
        }
        break;
      case 951:;
        if (c < 26) {
          _1_OBF_FUNC_next = 606UL;
        } else {
          _1_OBF_FUNC_next = 1379UL;
        }
        break;
      case 991:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1265UL;
        } else {
          _1_OBF_FUNC_next = 664UL;
        }
        break;
      case 164:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 318UL;
        } else {
          _1_OBF_FUNC_next = 399UL;
        }
        break;
      case 341:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 422UL;
        } else {
          _1_OBF_FUNC_next = 1570UL;
        }
        break;
      case 718:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 310UL;
        } else {
          _1_OBF_FUNC_next = 653UL;
        }
        break;
      case 101:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 855UL;
        } else {
          _1_OBF_FUNC_next = 1338UL;
        }
        break;
      case 69:
        c++;
        _1_OBF_FUNC_next = 846UL;
        break;
      case 1251:;
        return (0);
        break;
      case 674:;
        if (c < 26) {
          _1_OBF_FUNC_next = 336UL;
        } else {
          _1_OBF_FUNC_next = 441UL;
        }
        break;
      case 203:;
        return (0);
        break;
      case 96:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 582UL;
        } else {
          _1_OBF_FUNC_next = 412UL;
        }
        break;
      case 396:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 656UL;
        break;
      case 870:
        c++;
        _1_OBF_FUNC_next = 1113UL;
        break;
      case 848:
        c++;
        _1_OBF_FUNC_next = 418UL;
        break;
      case 1301:
        c++;
        _1_OBF_FUNC_next = 681UL;
        break;
      case 1045:;
        return (0);
        break;
      case 118:
        c++;
        _1_OBF_FUNC_next = 791UL;
        break;
      case 236:
        first[0] = 0;
        _1_OBF_FUNC_next = 1500UL;
        break;
      case 411:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 773UL;
        break;
      case 572:;
        if (c < 26) {
          _1_OBF_FUNC_next = 876UL;
        } else {
          _1_OBF_FUNC_next = 1255UL;
        }
        break;
      case 646:
        c++;
        _1_OBF_FUNC_next = 1561UL;
        break;
      case 1578:
        c++;
        _1_OBF_FUNC_next = 1514UL;
        break;
      case 952:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 100UL;
        break;
      case 1036:
        c++;
        _1_OBF_FUNC_next = 1147UL;
        break;
      case 190:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 575UL;
        break;
      case 1008:
        c++;
        _1_OBF_FUNC_next = 517UL;
        break;
      case 1327:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 601UL;
        break;
      case 76:;
        return (0);
        break;
      case 1321:
        c++;
        _1_OBF_FUNC_next = 73UL;
        break;
      case 858:
        c++;
        _1_OBF_FUNC_next = 1380UL;
        break;
      case 1537:;
        return (0);
        break;
      case 663:;
        return (0);
        break;
      case 847:;
        if (c < 26) {
          _1_OBF_FUNC_next = 862UL;
        } else {
          _1_OBF_FUNC_next = 1517UL;
        }
        break;
      case 1324:
        c++;
        _1_OBF_FUNC_next = 653UL;
        break;
      case 1398:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 541UL;
        break;
      case 299:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1362UL;
        } else {
          _1_OBF_FUNC_next = 748UL;
        }
        break;
      case 1040:
        c++;
        _1_OBF_FUNC_next = 568UL;
        break;
      case 98:
        c++;
        _1_OBF_FUNC_next = 399UL;
        break;
      case 214:
        c++;
        _1_OBF_FUNC_next = 799UL;
        break;
      case 630:
        c++;
        _1_OBF_FUNC_next = 844UL;
        break;
      case 769:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1446UL;
        } else {
          _1_OBF_FUNC_next = 683UL;
        }
        break;
      case 1515:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1422UL;
        break;
      case 450:;
        return (0);
        break;
      case 13:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 630UL;
        break;
      case 734:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1077UL;
        } else {
          _1_OBF_FUNC_next = 187UL;
        }
        break;
      case 51:;
        if (c < 26) {
          _1_OBF_FUNC_next = 793UL;
        } else {
          _1_OBF_FUNC_next = 1134UL;
        }
        break;
      case 107:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 580UL;
        } else {
          _1_OBF_FUNC_next = 780UL;
        }
        break;
      case 1401:
        c++;
        _1_OBF_FUNC_next = 200UL;
        break;
      case 1531:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 656UL;
        }
        break;
      case 473:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 1236UL;
        break;
      case 1253:;
        if (c < 26) {
          _1_OBF_FUNC_next = 545UL;
        } else {
          _1_OBF_FUNC_next = 1387UL;
        }
        break;
      case 612:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1397UL;
        } else {
          _1_OBF_FUNC_next = 216UL;
        }
        break;
      case 836:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1175UL;
        } else {
          _1_OBF_FUNC_next = 1345UL;
        }
        break;
      case 1104:
        c++;
        _1_OBF_FUNC_next = 1159UL;
        break;
      case 611:
        c++;
        _1_OBF_FUNC_next = 1311UL;
        break;
      case 904:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1136UL;
        break;
      case 648:;
        if (c < 26) {
          _1_OBF_FUNC_next = 1022UL;
        } else {
          _1_OBF_FUNC_next = 1282UL;
        }
        break;
      case 1245:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 392UL;
        break;
      case 90:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 499UL;
        break;
      case 601:
        c++;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 822:;
        return (0);
        break;
      case 598:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1577UL;
        break;
      case 1137:
        __RANDVAR__5756533745554911283__ = 0;
        _1_OBF_FUNC_next = 984UL;
        break;
      case 1231:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 935UL;
        break;
      case 1409:
        c++;
        _1_OBF_FUNC_next = 721UL;
        break;
      case 132:;
        if (__RANDVAR__9195746026943953870__ == 0) {
          _1_OBF_FUNC_next = 176UL;
        } else {
          _1_OBF_FUNC_next = 894UL;
        }
        break;
      case 193:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1319UL;
        } else {
          _1_OBF_FUNC_next = 1206UL;
        }
        break;
      case 527:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 408UL;
        } else {
          _1_OBF_FUNC_next = 214UL;
        }
        break;
      case 659:;
        return (0);
        break;
      case 960:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 203UL;
        } else {
          _1_OBF_FUNC_next = 317UL;
        }
        break;
      case 992:;
        return (0);
        break;
      case 1149:
        c++;
        _1_OBF_FUNC_next = 474UL;
        break;
      case 1083:;
        if (__RANDVAR__42874659787741263580__ == 0) {
          _1_OBF_FUNC_next = 1091UL;
        } else {
          _1_OBF_FUNC_next = 1491UL;
        }
        break;
      case 670:;
        if (c < 26) {
          _1_OBF_FUNC_next = 821UL;
        } else {
          _1_OBF_FUNC_next = 1442UL;
        }
        break;
      case 915:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 533UL;
        } else {
          _1_OBF_FUNC_next = 1078UL;
        }
        break;
      case 383:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1545UL;
        } else {
          _1_OBF_FUNC_next = 189UL;
        }
        break;
      case 1221:
        c++;
        _1_OBF_FUNC_next = 91UL;
        break;
      case 410:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 554UL;
        } else {
          _1_OBF_FUNC_next = 472UL;
        }
        break;
      case 467:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 938UL;
        } else {
          _1_OBF_FUNC_next = 1032UL;
        }
        break;
      case 679:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 376UL;
        } else {
          _1_OBF_FUNC_next = 1380UL;
        }
        break;
      case 549:;
        if (__RANDVAR__35788028822471523552__ == 0) {
          _1_OBF_FUNC_next = 1531UL;
        } else {
          _1_OBF_FUNC_next = 1496UL;
        }
        break;
      case 1017:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 977UL;
        } else {
          _1_OBF_FUNC_next = 514UL;
        }
        break;
      case 154:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1354UL;
        break;
      case 1162:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 406:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 989UL;
        } else {
          _1_OBF_FUNC_next = 73UL;
        }
        break;
      case 61:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1199UL;
        } else {
          _1_OBF_FUNC_next = 23UL;
        }
        break;
      case 472:
        c++;
        _1_OBF_FUNC_next = 1582UL;
        break;
      case 595:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 861UL;
        } else {
          _1_OBF_FUNC_next = 517UL;
        }
        break;
      case 770:
        __RANDVAR__9195746026943953870__ = 1;
        _1_OBF_FUNC_next = 132UL;
        break;
      case 1498:;
        if (c < 26) {
          _1_OBF_FUNC_next = 483UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 1000:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 15UL;
        break;
      case 113:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 375UL;
        } else {
          _1_OBF_FUNC_next = 848UL;
        }
        break;
      case 531:
        c++;
        _1_OBF_FUNC_next = 1387UL;
        break;
      case 1141:
        c++;
        _1_OBF_FUNC_next = 183UL;
        break;
      case 1170:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 559UL;
        break;
      case 1420:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 93UL;
        break;
      case 709:
        c++;
        _1_OBF_FUNC_next = 956UL;
        break;
      case 1329:
        __RANDVAR__35788028822471523552__ = 1;
        _1_OBF_FUNC_next = 549UL;
        break;
      case 112:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 569UL;
        } else {
          _1_OBF_FUNC_next = 1216UL;
        }
        break;
      case 267:;
        if (c < 26) {
          _1_OBF_FUNC_next = 657UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 494:;
        if (c < 26) {
          _1_OBF_FUNC_next = 193UL;
        } else {
          _1_OBF_FUNC_next = 95UL;
        }
        break;
      case 1166:
        c++;
        _1_OBF_FUNC_next = 412UL;
        break;
      case 71:
        c++;
        _1_OBF_FUNC_next = 693UL;
        break;
      case 462:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1374UL;
        } else {
          _1_OBF_FUNC_next = 73UL;
        }
        break;
      case 775:
        c++;
        _1_OBF_FUNC_next = 150UL;
        break;
      case 1410:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 476UL;
        break;
      case 191:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 324UL;
        } else {
          _1_OBF_FUNC_next = 1472UL;
        }
        break;
      case 722:
        c++;
        _1_OBF_FUNC_next = 981UL;
        break;
      case 1102:;
        return (0);
        break;
      case 47:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 835UL;
        } else {
          _1_OBF_FUNC_next = 1171UL;
        }
        break;
      case 961:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 736UL;
        }
        break;
      case 1105:;
        return (0);
        break;
      case 1078:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1445UL;
        } else {
          _1_OBF_FUNC_next = 1460UL;
        }
        break;
      case 91:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 952UL;
        } else {
          _1_OBF_FUNC_next = 196UL;
        }
        break;
      case 97:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 779UL;
        } else {
          _1_OBF_FUNC_next = 946UL;
        }
        break;
      case 739:;
        if (c < 26) {
          _1_OBF_FUNC_next = 233UL;
        } else {
          _1_OBF_FUNC_next = 528UL;
        }
        break;
      case 510:
        c++;
        _1_OBF_FUNC_next = 990UL;
        break;
      case 594:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 477UL;
        } else {
          _1_OBF_FUNC_next = 833UL;
        }
        break;
      case 99:
        c++;
        _1_OBF_FUNC_next = 736UL;
        break;
      case 37:
        c++;
        _1_OBF_FUNC_next = 883UL;
        break;
      case 652:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1158UL;
        } else {
          _1_OBF_FUNC_next = 1372UL;
        }
        break;
      case 872:
        c++;
        _1_OBF_FUNC_next = 512UL;
        break;
      case 248:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 402UL;
        } else {
          _1_OBF_FUNC_next = 114UL;
        }
        break;
      case 327:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 133UL;
        } else {
          _1_OBF_FUNC_next = 462UL;
        }
        break;
      case 1103:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 709UL;
        break;
      case 1348:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 297UL;
        } else {
          _1_OBF_FUNC_next = 509UL;
        }
        break;
      case 486:
        c++;
        _1_OBF_FUNC_next = 1307UL;
        break;
      case 643:
        c++;
        _1_OBF_FUNC_next = 1505UL;
        break;
      case 895:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 622UL;
        } else {
          _1_OBF_FUNC_next = 786UL;
        }
        break;
      case 957:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 24UL;
        } else {
          _1_OBF_FUNC_next = 1574UL;
        }
        break;
      case 232:
        c++;
        _1_OBF_FUNC_next = 612UL;
        break;
      case 927:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1428UL;
        break;
      case 1210:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 1223UL;
        break;
      case 115:
        __RANDVAR__5756533745554911283__ = 1;
        _1_OBF_FUNC_next = 1316UL;
        break;
      case 714:
        c++;
        _1_OBF_FUNC_next = 306UL;
        break;
      case 936:;
        if (c < 26) {
          _1_OBF_FUNC_next = 520UL;
        } else {
          _1_OBF_FUNC_next = 1244UL;
        }
        break;
      case 287:
        c++;
        _1_OBF_FUNC_next = 1482UL;
        break;
      case 469:
        c++;
        _1_OBF_FUNC_next = 276UL;
        break;
      case 891:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 858UL;
        break;
      case 177:;
        if ((int)*(a + c) != 0) {
          _1_OBF_FUNC_next = 1231UL;
        } else {
          _1_OBF_FUNC_next = 1228UL;
        }
        break;
      case 1353:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 1165UL;
        } else {
          _1_OBF_FUNC_next = 346UL;
        }
        break;
      case 83:;
        if (c < 26) {
          _1_OBF_FUNC_next = 716UL;
        } else {
          _1_OBF_FUNC_next = 183UL;
        }
        break;
      case 263:
        __RANDVAR__17873664692169122623__ = 0;
        _1_OBF_FUNC_next = 727UL;
        break;
      case 336:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1207UL;
        } else {
          _1_OBF_FUNC_next = 687UL;
        }
        break;
      case 238:
        c++;
        _1_OBF_FUNC_next = 1188UL;
        break;
      case 621:
        (first[(int)*(a + c) - 97])++;
        _1_OBF_FUNC_next = 944UL;
        break;
      case 1540:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 552UL;
        break;
      case 29:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1423UL;
        } else {
          _1_OBF_FUNC_next = 118UL;
        }
        break;
      case 1067:
        c++;
        _1_OBF_FUNC_next = 1431UL;
        break;
      case 1359:;
        if (first[c] != second[c]) {
          _1_OBF_FUNC_next = 1276UL;
        } else {
          _1_OBF_FUNC_next = 475UL;
        }
        break;
      case 86:
        (second[(int)*(b + c) - 97])++;
        _1_OBF_FUNC_next = 329UL;
        break;
      case 1566:;
        if ((int)*(b + c) != 0) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 1055UL;
        }
        break;
      case 2:;
        if (__RANDVAR__5756533745554911283__ == 0) {
          _1_OBF_FUNC_next = 1013UL;
        } else {
          _1_OBF_FUNC_next = 1406UL;
        }
        break;
      case 620:;
        if (__RANDVAR__27490945570669445203__ == 0) {
          _1_OBF_FUNC_next = 827UL;
        } else {
          _1_OBF_FUNC_next = 400UL;
        }
        break;
      case 1569:;
        return (0);
        break;
      }
    }
  }
}
// variants: loop-unroll, loop-unroll, block-fission
// expanded variants: loop-unroll, loop-unroll, block-fission:default
