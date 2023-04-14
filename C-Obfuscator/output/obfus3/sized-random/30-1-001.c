typedef void *__builtin_va_list;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion____missing_field_name_254733131;
union __anonunion____missing_field_name_921806627;
struct __pthread_internal_slist;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_barrierattr_t_951761806;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_mutex_t_335460617;
enum __anonenum_idtype_t_558242672;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_rwlock_t_656928968;
union pthread_attr_t;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_rwlockattr_t_145707745;
struct timeval;
struct random_data;
struct __pthread_rwlock_arch_t;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
struct timespec;
struct drand48_data;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct_div_t_773697287;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __pthread_internal_list;
struct __anonstruct_ldiv_t_790849867;
struct __pthread_mutex_s;
struct __anonstruct_lldiv_t_103911545;
struct __anonstruct___fsid_t_109580352;
struct __pthread_cond_s;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct___wseq32_961093918;
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
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
unsigned long _1_entropy;
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
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1;
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_2;
typedef __mode_t mode_t;
typedef void *__timer_t;
typedef int wchar_t;
extern size_t(wcstombs)(char *__s, wchar_t const *__pwcs, size_t __n);
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
typedef unsigned long ulong;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_1;
typedef int __int32_t;
typedef __off64_t __loff_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_2;
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
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
extern void *(realloc)(void *__ptr, size_t __size);
typedef signed char __int8_t;
extern int(clearenv)(void);
typedef __clockid_t clockid_t;
typedef unsigned int pthread_key_t;
extern double(erand48)(unsigned short *__xsubi);
unsigned long _1_alwaysZero;
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
typedef unsigned int __uint32_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern char *(mkdtemp)(char *__template);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
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
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
typedef union pthread_attr_t pthread_attr_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
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
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_2;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_1;
extern long double(strtold)(char const *__nptr, char **__endptr);
typedef int __pid_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_1;
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
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
};
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
typedef __int64_t __int_least64_t;
typedef __suseconds_t suseconds_t;
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
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
extern void *(calloc)(size_t __nmemb, size_t __size);
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
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
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(unsigned int input);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2;
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
};
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_4;
  unsigned int _induction7_6_2;
  unsigned int _index6_1;
  unsigned int _induction9_8_2;
  unsigned int _index8_5;
  unsigned int _induction11_10_2;
  unsigned int _index10_2;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned int _induction17_16_2;
  unsigned int _index16_2;
  unsigned int _induction19_18_2;
  unsigned int _index18_0;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p23;
  int i24;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p25;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p29;
  int i30;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p31;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  void *tmp___2;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p40;
  int i41;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p42;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p46;
  int i47;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p48;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  void *tmp___3;
  void *tmp___4;
  void *tmp___5;
  void *tmp___6;
  unsigned long _1_OBF_FUNC_next___0;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      tmp = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p29 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp;
      p29->next = p29;
      p29->prev = p29;
      _2_OBF_FUNC_2_opaque_list_1 = p29;
      i30 = 0;
      while (i30 < 4) {
        tmp___0 = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p31 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp___0;
        p31->data = (int)((unsigned long)i30 * ((_1_entropy | 3UL) - (_1_entropy & 3UL)));
        p31->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p31->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p31;
        _2_OBF_FUNC_2_opaque_list_1->next = p31;
        i30++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      tmp___1 = malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p23 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___1;
      p23->next = p23;
      p23->prev = p23;
      _2_OBF_FUNC_1_opaque_list_1 = p23;
      i24 = 0;
      while (i24 < 2) {
        tmp___2 = malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p25 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___2;
        p25->data = (int)((unsigned long)i24 * ((_1_entropy | 7UL) - (_1_entropy & 7UL)));
        p25->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p25->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p25;
        _2_OBF_FUNC_1_opaque_list_1->next = p25;
        i24++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_2->next;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      tmp___3 = malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p46 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)tmp___3;
      p46->next = p46;
      p46->prev = p46;
      _3_OBF_FUNC_2_opaque_list_1 = p46;
      i47 = 0;
      while (i47 < 2) {
        tmp___4 = malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p48 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)tmp___4;
        p48->data = (int)((unsigned long)i47 * ((_2_entropy & 7UL) * (_2_entropy | 7UL) + (_2_entropy & 0xfffffffffffffff8UL) * (~_2_entropy & 7UL)));
        p48->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p48->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p48;
        _3_OBF_FUNC_2_opaque_list_1->next = p48;
        i47++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      tmp___5 = malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p40 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)tmp___5;
      p40->next = p40;
      p40->prev = p40;
      _3_OBF_FUNC_1_opaque_list_1 = p40;
      i41 = 0;
      while (i41 < 3) {
        tmp___6 = malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p42 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)tmp___6;
        p42->data = (int)((unsigned long)i41 * ((_2_entropy & 6UL) * (_2_entropy | 6UL) + (_2_entropy & 0xfffffffffffffff9UL) * (~_2_entropy & 6UL)));
        p42->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p42->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p42;
        _3_OBF_FUNC_1_opaque_list_1->next = p42;
        i41++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    { _1_OBF_FUNC_next___0 = 242UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 153:;
        {
          _1_OBF_FUNC_next___0 = 248UL;
        }
        break;
      case 204:
        _1_OBF_FUNC_next = 72UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 210:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 179:
        _index0_9 = 0U;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 134:
        _induction15_14_2 = 0U;
        { _1_OBF_FUNC_next___0 = 181UL; }
        break;
      case 175:
        _index12_0 = 0U;
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 43:;
        if ((unsigned long)_index12_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 178UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 78UL; }
        }
        break;
      case 188:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 197UL; }
        break;
      case 107:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 63:
        _1_OBF_FUNC_next = 72UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 32:;
        if ((unsigned long)_2_OBF_FUNC_1_opaque_ptr_1 == (unsigned long)_2_OBF_FUNC_1_opaque_ptr_2) {
          { _1_OBF_FUNC_next___0 = 137UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 177UL; }
        }
        break;
      case 38:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 206UL; }
        break;
      case 202:;
        {
          _1_OBF_FUNC_next___0 = 87UL;
        }
        break;
      case 197:
        _1_OBF_FUNC_next = 33UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 48:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 66:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 262:
        localStaticState[0UL] = input + 1899324652U;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 200:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 114UL; }
        break;
      case 69:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 177:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 152:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 146:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 10:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 249UL; }
        break;
      case 166:
        _index6_1++;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 7:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 246UL; }
        break;
      case 42:
        _1_OBF_FUNC_next = 90UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 243:;
        switch (_1_OBF_FUNC_next) {
        case 18UL: {
          _1_OBF_FUNC_next___0 = 109UL;
        } break;
        case 80UL: {
          _1_OBF_FUNC_next___0 = 169UL;
        } break;
        case 25UL: {
          _1_OBF_FUNC_next___0 = 125UL;
        } break;
        case 30UL: {
          _1_OBF_FUNC_next___0 = 68UL;
        } break;
        case 62UL: {
          _1_OBF_FUNC_next___0 = 237UL;
        } break;
        case 15UL: {
          _1_OBF_FUNC_next___0 = 189UL;
        } break;
        case 82UL: {
          _1_OBF_FUNC_next___0 = 183UL;
        } break;
        case 56UL: {
          _1_OBF_FUNC_next___0 = 5UL;
        } break;
        case 79UL: {
          _1_OBF_FUNC_next___0 = 79UL;
        } break;
        case 31UL: {
          _1_OBF_FUNC_next___0 = 214UL;
        } break;
        case 12UL: {
          _1_OBF_FUNC_next___0 = 19UL;
        } break;
        case 69UL: {
          _1_OBF_FUNC_next___0 = 27UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 61UL;
        } break;
        case 45UL: {
          _1_OBF_FUNC_next___0 = 200UL;
        } break;
        case 78UL: {
          _1_OBF_FUNC_next___0 = 192UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 179UL;
        } break;
        case 81UL: {
          _1_OBF_FUNC_next___0 = 36UL;
        } break;
        case 23UL: {
          _1_OBF_FUNC_next___0 = 194UL;
        } break;
        case 77UL: {
          _1_OBF_FUNC_next___0 = 153UL;
        } break;
        case 70UL: {
          _1_OBF_FUNC_next___0 = 96UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 40UL;
        } break;
        case 16UL: {
          _1_OBF_FUNC_next___0 = 155UL;
        } break;
        case 24UL: {
          _1_OBF_FUNC_next___0 = 233UL;
        } break;
        case 94UL: {
          _1_OBF_FUNC_next___0 = 98UL;
        } break;
        case 36UL: {
          _1_OBF_FUNC_next___0 = 173UL;
        } break;
        case 57UL: {
          _1_OBF_FUNC_next___0 = 111UL;
        } break;
        case 68UL: {
          _1_OBF_FUNC_next___0 = 52UL;
        } break;
        case 85UL: {
          _1_OBF_FUNC_next___0 = 1UL;
        } break;
        case 11UL: {
          _1_OBF_FUNC_next___0 = 6UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 190UL;
        } break;
        case 13UL: {
          _1_OBF_FUNC_next___0 = 62UL;
        } break;
        case 63UL: {
          _1_OBF_FUNC_next___0 = 134UL;
        } break;
        case 51UL: {
          _1_OBF_FUNC_next___0 = 136UL;
        } break;
        case 19UL: {
          _1_OBF_FUNC_next___0 = 8UL;
        } break;
        case 17UL: {
          _1_OBF_FUNC_next___0 = 164UL;
        } break;
        case 90UL: {
          _1_OBF_FUNC_next___0 = 38UL;
        } break;
        case 67UL: {
          _1_OBF_FUNC_next___0 = 167UL;
        } break;
        case 55UL: {
          _1_OBF_FUNC_next___0 = 232UL;
        } break;
        case 60UL: {
          _1_OBF_FUNC_next___0 = 10UL;
        } break;
        case 59UL: {
          _1_OBF_FUNC_next___0 = 255UL;
        } break;
        case 6UL: {
          _1_OBF_FUNC_next___0 = 17UL;
        } break;
        case 61UL: {
          _1_OBF_FUNC_next___0 = 202UL;
        } break;
        case 87UL: {
          _1_OBF_FUNC_next___0 = 66UL;
        } break;
        case 84UL: {
          _1_OBF_FUNC_next___0 = 92UL;
        } break;
        case 34UL: {
          _1_OBF_FUNC_next___0 = 60UL;
        } break;
        case 75UL: {
          _1_OBF_FUNC_next___0 = 76UL;
        } break;
        case 48UL: {
          _1_OBF_FUNC_next___0 = 165UL;
        } break;
        case 71UL: {
          _1_OBF_FUNC_next___0 = 166UL;
        } break;
        case 22UL: {
          _1_OBF_FUNC_next___0 = 54UL;
        } break;
        case 65UL: {
          _1_OBF_FUNC_next___0 = 20UL;
        } break;
        case 47UL: {
          _1_OBF_FUNC_next___0 = 24UL;
        } break;
        case 73UL: {
          _1_OBF_FUNC_next___0 = 244UL;
        } break;
        case 44UL: {
          _1_OBF_FUNC_next___0 = 256UL;
        } break;
        case 5UL: {
          _1_OBF_FUNC_next___0 = 215UL;
        } break;
        case 91UL: {
          _1_OBF_FUNC_next___0 = 260UL;
        } break;
        case 72UL: {
          _1_OBF_FUNC_next___0 = 138UL;
        } break;
        case 33UL: {
          _1_OBF_FUNC_next___0 = 187UL;
        } break;
        case 37UL: {
          _1_OBF_FUNC_next___0 = 223UL;
        } break;
        case 64UL: {
          _1_OBF_FUNC_next___0 = 262UL;
        } break;
        case 93UL: {
          _1_OBF_FUNC_next___0 = 55UL;
        } break;
        case 41UL: {
          _1_OBF_FUNC_next___0 = 12UL;
        } break;
        case 95UL: {
          _1_OBF_FUNC_next___0 = 9UL;
        } break;
        case 92UL: {
          _1_OBF_FUNC_next___0 = 132UL;
        } break;
        case 42UL: {
          _1_OBF_FUNC_next___0 = 158UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 226UL;
        } break;
        case 46UL: {
          _1_OBF_FUNC_next___0 = 175UL;
        } break;
        case 83UL: {
          _1_OBF_FUNC_next___0 = 188UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 45UL;
        } break;
        case 88UL: {
          _1_OBF_FUNC_next___0 = 7UL;
        } break;
        case 43UL: {
          _1_OBF_FUNC_next___0 = 39UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 30UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 243UL;
        } break;
        }
        break;
      case 149:;
        if ((unsigned long)_index16_2 < 2UL) {
          { _1_OBF_FUNC_next___0 = 56UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 69UL; }
        }
        break;
      case 96:
        _index6_1 = 0U;
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 8:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next___0 = 196UL; }
        break;
      case 230:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 251:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 74:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 116:;
        if ((unsigned long)_index18_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 245UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 84UL; }
        }
        break;
      case 6:
        localStaticState[1UL] = input * 678486140U;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 65:;
        if ((unsigned long)_3_OBF_FUNC_1_opaque_ptr_1 != (unsigned long)_3_OBF_FUNC_1_opaque_ptr_2) {
          { _1_OBF_FUNC_next___0 = 243UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 211UL; }
        }
        break;
      case 184:;
        switch ((unsigned long)((int)(localStaticState[1UL] * localStaticState[0UL])) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 101UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 163UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 107UL;
        } break;
        }
        break;
      case 125:;
        {
          _1_OBF_FUNC_next___0 = 95UL;
        }
        break;
      case 232:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 20:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction19_18_2] + localStaticState[_induction17_16_2];
        { _1_OBF_FUNC_next___0 = 204UL; }
        break;
      case 75:;
        if ((unsigned long)_index4_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 31UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 218UL; }
        }
        break;
      case 35:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 172:
        _1_OBF_FUNC_next = 94UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 9:;
        {
          _1_OBF_FUNC_next___0 = 149UL;
        }
        break;
      case 14:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 72UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 213UL; }
        }
        break;
      case 94:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 60:;
        {
          _1_OBF_FUNC_next___0 = 261UL;
        }
        break;
      case 252:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 68:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 109:
        _index8_5 = (unsigned int)((unsigned long)_index8_5 + 2UL);
        { _1_OBF_FUNC_next___0 = 198UL; }
        break;
      case 51:
        _1_OBF_FUNC_next = 55UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 214:;
        {
          _1_OBF_FUNC_next___0 = 116UL;
        }
        break;
      case 84:
        _1_OBF_FUNC_next = 82UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 250:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 92:;
        {
          _1_OBF_FUNC_next___0 = 2UL;
        }
        break;
      case 248:;
        if ((unsigned long)_index0_9 < 9UL) {
          { _1_OBF_FUNC_next___0 = 100UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 142UL; }
        }
        break;
      case 223:
        localStaticState[_induction19_18_2] = localStaticState[_induction17_16_2] - localStaticState[(unsigned long)_induction19_18_2 % 2UL];
        { _1_OBF_FUNC_next___0 = 251UL; }
        break;
      case 174:
        _1_OBF_FUNC_next = 90UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 97:
        _1_OBF_FUNC_next = 73UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 211:
        _1_OBF_FUNC_next = 84UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 181:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 119:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 158:
        _index10_2++;
        { _1_OBF_FUNC_next___0 = 147UL; }
        break;
      case 117:
        _1_OBF_FUNC_next = 57UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 106:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 61:;
        {
          _1_OBF_FUNC_next___0 = 145UL;
        }
        break;
      case 192:
        localStaticState[(unsigned long)_index0_9 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 113:
        _1_OBF_FUNC_next = 80UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 76:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 199UL; }
        break;
      case 218:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 226:;
        {
          _1_OBF_FUNC_next___0 = 43UL;
        }
        break;
      case 126:
        _1_OBF_FUNC_next = 60UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 203:;
        switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL])) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 35UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 252UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 211UL;
        } break;
        }
        break;
      case 101:
        _1_OBF_FUNC_next = 79UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 67:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 173:
        _induction17_16_2 = 0U;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 143:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 165:
        localStaticState[(unsigned long)_induction7_6_2 % 2UL] = localStaticState[_index6_1] * localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 126UL; }
        break;
      case 245:
        _1_OBF_FUNC_next = 69UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 259:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 2756298657U);
        break;
      case 87:;
        if ((unsigned long)_index14_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 11UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 230UL; }
        }
        break;
      case 17:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next___0 = 146UL; }
        break;
      case 142:
        _1_OBF_FUNC_next = 51UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 144:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 145:;
        if ((unsigned long)_index10_2 < 2UL) {
          { _1_OBF_FUNC_next___0 = 127UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 106UL; }
        }
        break;
      case 242:
        _1_OBF_FUNC_next = 64UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 55:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 97UL; }
        break;
      case 4:
        _1_OBF_FUNC_next = 81UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 39:
        localStaticState[1UL] *= localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 162UL; }
        break;
      case 137:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 198:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 256:;
        {
          _1_OBF_FUNC_next___0 = 259UL;
        }
        break;
      case 225:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 207:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 56:
        _1_OBF_FUNC_next = 92UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 112:
        _1_OBF_FUNC_next = 41UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 168:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 229:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 255:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[_induction5_4_2];
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      case 114:
        _1_OBF_FUNC_next = 56UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 26:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next___0 = 51UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 143UL; }
        }
        break;
      case 98:
        _index18_0 = (unsigned int)((unsigned long)_index18_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 229UL; }
        break;
      case 157:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 138:
        _induction19_18_2 = (unsigned int)(((unsigned long)_induction19_18_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 172UL; }
        break;
      case 1:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next___0 = 207UL; }
        break;
      case 19:;
        {
          _1_OBF_FUNC_next___0 = 217UL;
        }
        break;
      case 196:
        _1_OBF_FUNC_next = 70UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 62:
        _index16_2 = (unsigned int)((unsigned long)_index16_2 + 2UL);
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 79:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next___0 = 210UL; }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = 203UL;
        }
        break;
      case 227:
        _1_OBF_FUNC_next = 77UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 189:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 30:
        _index4_4 = 0U;
        { _1_OBF_FUNC_next___0 = 152UL; }
        break;
      case 89:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 86:
        _1_OBF_FUNC_next = 87UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 122:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 93:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 132:
        _induction19_18_2 = 0U;
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 187:
        _index14_0 = (unsigned int)((unsigned long)_index14_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 122UL; }
        break;
      case 140:
        _1_OBF_FUNC_next = 62UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 163:
        _1_OBF_FUNC_next = 91UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 238:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 29:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next___0 = 93UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 63UL; }
        }
        break;
      case 72:
        _1_OBF_FUNC_next = 78UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 155:
        _index8_5 = 0U;
        { _1_OBF_FUNC_next___0 = 135UL; }
        break;
      case 190:
        _index18_0 = 0U;
        { _1_OBF_FUNC_next___0 = 195UL; }
        break;
      case 45:
        _index10_2 = 0U;
        { _1_OBF_FUNC_next___0 = 205UL; }
        break;
      case 261:;
        if ((unsigned long)_index8_5 < 5UL) {
          { _1_OBF_FUNC_next___0 = 67UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 225UL; }
        }
        break;
      case 100:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 178:
        _1_OBF_FUNC_next = 63UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 186:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 183:
        _induction17_16_2 = (unsigned int)(((unsigned long)_induction17_16_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 247UL; }
        break;
      case 246:
        _1_OBF_FUNC_next = 47UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 170:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 110:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 235:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 95:;
        if (!((localStaticState[1UL] >> 1U) & 1U)) {
          { _1_OBF_FUNC_next___0 = 113UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 25UL; }
        }
        break;
      case 217:;
        if ((((_1_alwaysZero & ((_1_entropy & 0xfffffffffffffff9UL) + 6UL)) * (_1_alwaysZero | ((_1_entropy & 0xfffffffffffffff9UL) + 6UL)) + (_1_alwaysZero & ~((_1_entropy & 0xfffffffffffffff9UL) + 6UL)) * (~_1_alwaysZero & ((_1_entropy & 0xfffffffffffffff9UL) + 6UL))) - 0xffffffffffffffffUL) - 1UL) {
          { _1_OBF_FUNC_next___0 = 103UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 168UL; }
        }
        break;
      case 40:;
        {
          _1_OBF_FUNC_next___0 = 75UL;
        }
        break;
      case 80:
        _1_OBF_FUNC_next = 77UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 24:
        _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
        { _1_OBF_FUNC_next___0 = 227UL; }
        break;
      case 111:
        _index16_2 = 0U;
        { _1_OBF_FUNC_next___0 = 253UL; }
        break;
      case 11:
        _1_OBF_FUNC_next = 83UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 247:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 220:
        _1_OBF_FUNC_next = 73UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 164:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 213:
        _1_OBF_FUNC_next = 88UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 208:;
        if ((unsigned long)_3_OBF_FUNC_1_opaque_ptr_1 != (unsigned long)_3_OBF_FUNC_1_opaque_ptr_2) {
          { _1_OBF_FUNC_next___0 = 243UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 165UL; }
        }
        break;
      case 249:
        _1_OBF_FUNC_next = 71UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 135:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 18:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 206:
        _1_OBF_FUNC_next = 43UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 91:;
        if ((unsigned long)_index6_1 < 1UL) {
          { _1_OBF_FUNC_next___0 = 250UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 157UL; }
        }
        break;
      case 78:
        _1_OBF_FUNC_next = 75UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 205:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 199:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 208UL; }
        break;
      case 25:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 253:
        _1_OBF_FUNC_next = 95UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 233:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 238UL; }
        break;
      case 136:;
        {
          _1_OBF_FUNC_next___0 = 184UL;
        }
        break;
      case 31:
        _1_OBF_FUNC_next = 59UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 5:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 186UL; }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = 29UL;
        }
        break;
      case 54:;
        {
          _1_OBF_FUNC_next___0 = 26UL;
        }
        break;
      case 2:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next___0 = 235UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 174UL; }
        }
        break;
      case 167:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 64UL; }
        break;
      case 260:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 170UL; }
        break;
      case 147:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 237:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 220UL; }
        break;
      case 215:;
        {
          _1_OBF_FUNC_next___0 = 91UL;
        }
        break;
      case 162:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 102:
        _1_OBF_FUNC_next = 93UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 169:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 244:;
        {
          _1_OBF_FUNC_next___0 = 14UL;
        }
        break;
      case 127:
        _1_OBF_FUNC_next = 85UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 64:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 52:;
        {
          _1_OBF_FUNC_next___0 = 32UL;
        }
        break;
      case 195:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 103:
        _1_OBF_FUNC_next = 77UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 194:
        _index14_0 = 0U;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 36:
        _index4_4 = (unsigned int)((unsigned long)_index4_4 + 2UL);
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 59:
        _1_OBF_FUNC_next = 95UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 115:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
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
  int _BARRIER_0___0;
  int _BARRIER_0___1;
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
            _2_entropy = 6732936661778117336UL;
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
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___1; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___1:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___1; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___1:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___1; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___1:;
        }
        goto megaInit_INLINE_megaInit___1;
      }
    megaInit_INLINE_megaInit___1:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___1 = 1;
    goto _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit;
  _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit:;
    goto _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit;
  _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit:;
    goto _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit;
  _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit:;
    goto _2_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_2_i$nit;
  _2_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_2_i$nit:;
    goto _1_alwaysZero_i$nit_INLINE__1_alwaysZero_i$nit;
  _1_alwaysZero_i$nit_INLINE__1_alwaysZero_i$nit:;
    goto _2_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_2_i$nit;
  _2_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_2_i$nit:;
    goto _2_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_1_i$nit;
  _2_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_1_i$nit:;
    goto _2_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_1_i$nit;
  _2_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_1_i$nit:;
    goto _2_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_2_i$nit;
  _2_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_2_i$nit:
    _1_entropy = 2604670866186231676UL;
    goto _1_entropy_i$nit_INLINE__1_entropy_i$nit;
  _1_entropy_i$nit_INLINE__1_entropy_i$nit:;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit___0;
  _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit___0;
  _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit___0;
  _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
    goto megaInit_INLINE_megaInit___0;
  megaInit_INLINE_megaInit___0:
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
    tmp = strtol((char const *)((char const *)*(argv + 1)), (char **)((char **)0L), 10);
    a = (unsigned int)tmp;
    tmp___0 = OBF_FUNC(a);
    return ((int)tmp___0);
  }
}
// variants: deadcode, block-fission, flatten
// expanded variants: deadcode:True, block-fission:default, flatten:switch
