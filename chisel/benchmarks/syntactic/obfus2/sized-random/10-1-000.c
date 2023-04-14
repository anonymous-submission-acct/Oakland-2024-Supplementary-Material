typedef void *__builtin_va_list;
union __anonunion____missing_field_name_921806627;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __anonstruct___wseq32_961093918;
union __anonunion____missing_field_name_254733131;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_internal_slist;
struct drand48_data;
union pthread_attr_t;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
struct __pthread_cond_s;
union __anonunion_pthread_condattr_t_488594145;
struct __pthread_rwlock_arch_t;
struct __anonstruct___sigset_t_973126068;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __pthread_internal_list;
struct __anonstruct_div_t_773697287;
enum __anonenum_idtype_t_558242672;
struct timeval;
struct random_data;
struct __anonstruct_ldiv_t_790849867;
struct timespec;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_rwlock_t_656928968;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __pthread_mutex_s;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
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
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
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
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
typedef unsigned long ulong;
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
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_254733131 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
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
union __anonunion____missing_field_name_921806627 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_921806627 __annonCompField1;
  union __anonunion____missing_field_name_254733131 __annonCompField2;
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
unsigned long _2_entropy = 8640929569134643383UL;
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
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(unsigned int input);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_8;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
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
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p25;
  int i26;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p27;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p31;
  int i32;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p33;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p31 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p31->next = p31;
      p31->prev = p31;
      _3_OBF_FUNC_2_opaque_list_1 = p31;
      i32 = 0;
      while (i32 < 2) {
        p33 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p33->data = i32 * (((_2_entropy - 8) - ((_2_entropy | ~8) + (_2_entropy | ~8))) - 2UL);
        p33->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p33->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p33;
        _3_OBF_FUNC_2_opaque_list_1->next = p33;
        i32++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p25 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p25->next = p25;
      p25->prev = p25;
      _3_OBF_FUNC_1_opaque_list_1 = p25;
      i26 = 0;
      while (i26 < 2) {
        p27 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p27->data = i26 * (((_2_entropy ^ ~4) + ((_2_entropy | 4) << 1UL)) + 1UL);
        p27->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p27->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p27;
        _3_OBF_FUNC_1_opaque_list_1->next = p27;
        i26++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 109UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 18:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 120UL;
        break;
      case 129:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 91UL;
        break;
      case 50:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 111UL;
        break;
      case 80:
        _index4_0++;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 108:;
        if ((unsigned long)_index2_0 < 0UL) {
          _1_OBF_FUNC_next = 60UL;
        } else {
          _1_OBF_FUNC_next = 62UL;
        }
        break;
      case 104:
        _index2_0++;
        _1_OBF_FUNC_next = 144UL;
        break;
      case 130:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 25:
        tmp___7 = rand();
        _1_OBF_FUNC_next = 82UL;
        break;
      case 49:;
        {
          if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
            if ((unsigned long)_index4_0 < 0UL) {
              _1_OBF_FUNC_next = 25UL;
            } else {
              _1_OBF_FUNC_next = 22UL;
            }
          } else {
          }
        }
        break;
      case 30:
        _index4_0++;
        _1_OBF_FUNC_next = 96UL;
        break;
      case 62:;
        return ((localStaticState[0UL] - localStaticState[1UL]) + 495880835U);
        break;
      case 106:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 30UL;
        break;
      case 14:
        _index0_8 = (unsigned int)((unsigned long)_index0_8 + 2UL);
        _1_OBF_FUNC_next = 9UL;
        break;
      case 111:
        _index4_0++;
        _1_OBF_FUNC_next = 90UL;
        break;
      case 82:;
        if (tmp___7 % 10 >= 5) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 133:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 95UL;
        } else {
          _1_OBF_FUNC_next = 67UL;
        }
        break;
      case 89:
        tmp___12 = rand();
        _1_OBF_FUNC_next = 68UL;
        break;
      case 56:
        _index4_0++;
        _1_OBF_FUNC_next = 19UL;
        break;
      case 164:
        tmp___4 = rand();
        _1_OBF_FUNC_next = 167UL;
        break;
      case 31:
        _index2_0++;
        _1_OBF_FUNC_next = 112UL;
        break;
      case 121:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 100UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        break;
      case 141:;
        if (tmp___6 % 10 >= 5) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 74UL;
        }
        break;
      case 101:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 14UL;
        break;
      case 69:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 118UL;
        break;
      case 152:
        _index0_8 = (unsigned int)((unsigned long)_index0_8 + 2UL);
        _1_OBF_FUNC_next = 99UL;
        break;
      case 8:;
        if (tmp___1 % 10 >= 5) {
          _1_OBF_FUNC_next = 9UL;
        } else {
          _1_OBF_FUNC_next = 36UL;
        }
        break;
      case 160:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 96:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 125UL;
        } else {
          _1_OBF_FUNC_next = 97UL;
        }
        break;
      case 54:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 97UL;
        } else {
          _1_OBF_FUNC_next = 106UL;
        }
        break;
      case 78:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 61UL;
        break;
      case 118:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 99UL;
        } else {
          _1_OBF_FUNC_next = 33UL;
        }
        break;
      case 140:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 101UL;
        break;
      case 81:;
        if (!(localStaticState[0UL] & 1U)) {
          _1_OBF_FUNC_next = 32UL;
        } else {
          _1_OBF_FUNC_next = 101UL;
        }
        break;
      case 70:;
        if (tmp___9 % 10 >= 5) {
          _1_OBF_FUNC_next = 133UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 3:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 80UL;
        break;
      case 16:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 126UL;
        } else {
          _1_OBF_FUNC_next = 90UL;
        }
        break;
      case 94:
        tmp___1 = rand();
        _1_OBF_FUNC_next = 8UL;
        break;
      case 109:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 259792084UL) - 742538731UL);
        _1_OBF_FUNC_next = 29UL;
        break;
      case 167:;
        if (tmp___4 % 10 >= 5) {
          _1_OBF_FUNC_next = 121UL;
        } else {
          _1_OBF_FUNC_next = 155UL;
        }
        break;
      case 36:;
        if (!(localStaticState[0UL] & 1U)) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 57:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 89UL;
        } else if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
          _1_OBF_FUNC_next = 16UL;
        } else {
        }
        break;
      case 68:;
        if (tmp___12 % 10 >= 5) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 86UL;
        }
        break;
      case 156:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 44UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 85:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 158UL;
        break;
      case 100:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 156UL;
        break;
      case 26:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 37UL;
        break;
      case 98:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 108UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 105:;
        if (tmp___13 % 10 >= 5) {
          _1_OBF_FUNC_next = 90UL;
        } else {
          _1_OBF_FUNC_next = 139UL;
        }
        break;
      case 11:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 10UL;
        break;
      case 9:;
        if ((unsigned long)_index0_8 < 8UL) {
          _1_OBF_FUNC_next = 81UL;
        } else {
          _1_OBF_FUNC_next = 51UL;
        }
        break;
      case 135:
        _index0_8 = (unsigned int)((unsigned long)_index0_8 + 2UL);
        _1_OBF_FUNC_next = 116UL;
        break;
      case 13:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 117UL;
        break;
      case 63:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 98UL;
        break;
      case 176:
        _induction1_0_2 = 0U;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 51:
        _induction3_2_2 = 0U;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 146:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 135UL;
        break;
      case 125:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 54UL;
        break;
      case 143:
        _index2_0 = 0U;
        _1_OBF_FUNC_next = 112UL;
        break;
      case 19:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 169UL;
        } else {
          _1_OBF_FUNC_next = 133UL;
        }
        break;
      case 32:;
        if (!((localStaticState[0UL] >> 2U) & 1U)) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 101UL;
        }
        break;
      case 17:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 96UL;
        break;
      case 90:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 50UL;
        } else {
          _1_OBF_FUNC_next = 13UL;
        }
        break;
      case 172:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 38UL;
        break;
      case 40:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 71UL;
        break;
      case 67:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 104UL;
        break;
      case 117:
        _index2_0++;
        _1_OBF_FUNC_next = 115UL;
        break;
      case 60:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 78UL;
        break;
      case 150:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 130UL;
        break;
      case 165:;
        if (!(localStaticState[0UL] & 1U)) {
          _1_OBF_FUNC_next = 20UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 155:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 149UL;
        break;
      case 142:
        _index0_8 = (unsigned int)((unsigned long)_index0_8 + 2UL);
        _1_OBF_FUNC_next = 53UL;
        break;
      case 144:;
        if ((unsigned long)_index2_0 < 0UL) {
          _1_OBF_FUNC_next = 137UL;
        } else {
          _1_OBF_FUNC_next = 115UL;
        }
        break;
      case 116:;
        if ((unsigned long)_index0_8 < 8UL) {
          _1_OBF_FUNC_next = 151UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 137:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 141UL;
        break;
      case 151:
        tmp = rand();
        _1_OBF_FUNC_next = 114UL;
        break;
      case 157:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 31UL;
        break;
      case 38:;
        if (tmp___2 % 10 >= 5) {
          _1_OBF_FUNC_next = 144UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 61:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 173UL;
        } else {
          _1_OBF_FUNC_next = 18UL;
        }
        break;
      case 158:
        _index4_0++;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 113:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 46UL;
        break;
      case 74:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 39UL;
        break;
      case 112:;
        if ((unsigned long)_index2_0 < 0UL) {
          _1_OBF_FUNC_next = 172UL;
        } else {
          _1_OBF_FUNC_next = 144UL;
        }
        break;
      case 75:
        _index4_0++;
        _1_OBF_FUNC_next = 61UL;
        break;
      case 123:
        tmp___11 = rand();
        _1_OBF_FUNC_next = 42UL;
        break;
      case 169:
        tmp___9 = rand();
        _1_OBF_FUNC_next = 70UL;
        break;
      case 127:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 146UL;
        break;
      case 139:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 174UL;
        break;
      case 71:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 19UL;
        } else {
          _1_OBF_FUNC_next = 43UL;
        }
        break;
      case 22:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 40UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 173:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 75UL;
        break;
      case 53:;
        if ((unsigned long)_index0_8 < 8UL) {
          _1_OBF_FUNC_next = 69UL;
        } else {
          _1_OBF_FUNC_next = 99UL;
        }
        break;
      case 44:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 157UL;
        }
        break;
      case 91:
        _index4_0++;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 120:
        _index2_0++;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 97:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 164UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 162:;
        if (!((localStaticState[0UL] >> 2U) & 1U)) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 99:;
        if ((unsigned long)_index0_8 < 8UL) {
          _1_OBF_FUNC_next = 94UL;
        } else {
          _1_OBF_FUNC_next = 9UL;
        }
        break;
      case 114:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 165UL;
        }
        break;
      case 33:;
        if (!(localStaticState[0UL] & 1U)) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 46UL;
        }
        break;
      case 37:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 152UL;
        break;
      case 64:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 56UL;
        break;
      case 41:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 123UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 95:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 92UL;
        break;
      case 149:
        _index4_0++;
        _1_OBF_FUNC_next = 97UL;
        break;
      case 92:
        _index4_0++;
        _1_OBF_FUNC_next = 133UL;
        break;
      case 115:;
        if ((unsigned long)_index2_0 < 0UL) {
          _1_OBF_FUNC_next = 63UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 10:
        _index4_0++;
        _1_OBF_FUNC_next = 121UL;
        break;
      case 42:;
        if (tmp___11 % 10 >= 5) {
          _1_OBF_FUNC_next = 57UL;
        } else {
          _1_OBF_FUNC_next = 85UL;
        }
        break;
      case 0:;
        if (!((localStaticState[0UL] >> 2U) & 1U)) {
          _1_OBF_FUNC_next = 113UL;
        } else {
          _1_OBF_FUNC_next = 46UL;
        }
        break;
      case 46:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 142UL;
        break;
      case 39:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 66:
        _index4_0++;
        _1_OBF_FUNC_next = 57UL;
        break;
      case 7:
        _index4_0++;
        _1_OBF_FUNC_next = 22UL;
        break;
      case 35:
        _index0_8 = 0U;
        _1_OBF_FUNC_next = 116UL;
        break;
      case 174:
        _index4_0++;
        _1_OBF_FUNC_next = 16UL;
        break;
      case 29:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input - 879758814UL) * (unsigned long)((long)localStaticState[0UL] - 3428942624L));
        _1_OBF_FUNC_next = 176UL;
        break;
      case 126:
        tmp___13 = rand();
        _1_OBF_FUNC_next = 105UL;
        break;
      case 43:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 7UL;
        break;
      case 86:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 66UL;
        break;
      case 20:;
        if (!((localStaticState[0UL] >> 2U) & 1U)) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      }
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  long tmp;
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
    tmp = strtol((char const *)*(argv + 1), (char **)0L, 10);
    a = (unsigned int)tmp;
    tmp___0 = OBF_FUNC(a);
    return ((int)tmp___0);
  }
}
// variants: loop-fission, block-fission
// expanded variants: loop-fission, block-fission:default
