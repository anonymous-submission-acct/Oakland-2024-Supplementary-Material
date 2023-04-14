typedef void *__builtin_va_list;
union pthread_attr_t;
enum __anonenum_idtype_t_558242672;
struct timespec;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct___g1_start32_961093919;
struct random_data;
struct __pthread_rwlock_arch_t;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_mutex_t_335460617;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion____missing_field_name_921806627;
struct __anonstruct_ldiv_t_790849867;
union __anonunion_pthread_cond_t_951761805;
struct timeval;
struct __pthread_mutex_s;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_mutexattr_t_488594144;
struct __pthread_internal_slist;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct___fsid_t_109580352;
union __anonunion____missing_field_name_254733131;
struct __pthread_internal_list;
struct __anonstruct___wseq32_961093918;
struct drand48_data;
struct __pthread_cond_s;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
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
unsigned long _1_entropy = 7871044212092820866UL;
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
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __fd_mask;
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern int(at_quick_exit)(void (*__func)(void));
extern double(strtod)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
};
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
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
unsigned long _1_alwaysZero = 0;
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __loff_t loff_t;
typedef __int16_t __int_least16_t;
typedef __int32_t int32_t;
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
extern int(abs)(int __x);
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
extern int(atexit)(void (*__func)(void));
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
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
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
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
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
extern double(atof)(char const *__nptr);
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
typedef __u_char u_char;
typedef __sigset_t sigset_t;
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
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
typedef unsigned int __socklen_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
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
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
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
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_4;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[59];
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p15;
  int i16;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p17;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p21;
  int i22;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p23;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p21 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p21->next = p21;
      p21->prev = p21;
      _2_OBF_FUNC_2_opaque_list_1 = p21;
      i22 = 0;
      while (i22 < 4) {
        p23 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p23->data = i22 * (((_1_entropy - 10) - ((_1_entropy | ~10) << 1UL)) - 2UL);
        p23->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p23->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p23;
        _2_OBF_FUNC_2_opaque_list_1->next = p23;
        i22++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p15 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p15->next = p15;
      p15->prev = p15;
      _2_OBF_FUNC_1_opaque_list_1 = p15;
      i16 = 0;
      while (i16 < 4) {
        p17 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p17->data = i16 * ((_1_entropy & 7) * (_1_entropy | 7) + (_1_entropy & ~7) * (~_1_entropy & 7));
        p17->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p17->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p17;
        _2_OBF_FUNC_1_opaque_list_1->next = p17;
        i16++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_jumpTab[0] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[1] = &&_1_OBF_FUNC_lab1;
    _1_OBF_FUNC_jumpTab[2] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[3] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[4] = &&_1_OBF_FUNC_lab4;
    _1_OBF_FUNC_jumpTab[5] = &&_1_OBF_FUNC_lab5;
    _1_OBF_FUNC_jumpTab[6] = &&_1_OBF_FUNC_lab6;
    _1_OBF_FUNC_jumpTab[7] = &&_1_OBF_FUNC_lab7;
    _1_OBF_FUNC_jumpTab[8] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[9] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[10] = &&_1_OBF_FUNC_lab10;
    _1_OBF_FUNC_jumpTab[11] = &&_1_OBF_FUNC_lab11;
    _1_OBF_FUNC_jumpTab[12] = &&_1_OBF_FUNC_lab12;
    _1_OBF_FUNC_jumpTab[13] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[14] = &&_1_OBF_FUNC_lab14;
    _1_OBF_FUNC_jumpTab[15] = &&_1_OBF_FUNC_lab15;
    _1_OBF_FUNC_jumpTab[16] = &&_1_OBF_FUNC_lab16;
    _1_OBF_FUNC_jumpTab[17] = &&_1_OBF_FUNC_lab17;
    _1_OBF_FUNC_jumpTab[18] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[19] = &&_1_OBF_FUNC_lab19;
    _1_OBF_FUNC_jumpTab[20] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[21] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[22] = &&_1_OBF_FUNC_lab22;
    _1_OBF_FUNC_jumpTab[23] = &&_1_OBF_FUNC_lab23;
    _1_OBF_FUNC_jumpTab[24] = &&_1_OBF_FUNC_lab24;
    _1_OBF_FUNC_jumpTab[25] = &&_1_OBF_FUNC_lab25;
    _1_OBF_FUNC_jumpTab[26] = &&_1_OBF_FUNC_lab26;
    _1_OBF_FUNC_jumpTab[27] = &&_1_OBF_FUNC_lab27;
    _1_OBF_FUNC_jumpTab[28] = &&_1_OBF_FUNC_lab28;
    _1_OBF_FUNC_jumpTab[29] = &&_1_OBF_FUNC_lab29;
    _1_OBF_FUNC_jumpTab[30] = &&_1_OBF_FUNC_lab30;
    _1_OBF_FUNC_jumpTab[31] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[32] = &&_1_OBF_FUNC_lab32;
    _1_OBF_FUNC_jumpTab[33] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[34] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[35] = &&_1_OBF_FUNC_lab35;
    _1_OBF_FUNC_jumpTab[36] = &&_1_OBF_FUNC_lab36;
    _1_OBF_FUNC_jumpTab[37] = &&_1_OBF_FUNC_lab37;
    _1_OBF_FUNC_jumpTab[38] = &&_1_OBF_FUNC_lab38;
    _1_OBF_FUNC_jumpTab[39] = &&_1_OBF_FUNC_lab39;
    _1_OBF_FUNC_jumpTab[40] = &&_1_OBF_FUNC_lab40;
    _1_OBF_FUNC_jumpTab[41] = &&_1_OBF_FUNC_lab41;
    _1_OBF_FUNC_jumpTab[42] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[43] = &&_1_OBF_FUNC_lab43;
    _1_OBF_FUNC_jumpTab[44] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[45] = &&_1_OBF_FUNC_lab45;
    _1_OBF_FUNC_jumpTab[46] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[47] = &&_1_OBF_FUNC_lab47;
    _1_OBF_FUNC_jumpTab[48] = &&_1_OBF_FUNC_lab48;
    _1_OBF_FUNC_jumpTab[49] = &&_1_OBF_FUNC_lab49;
    _1_OBF_FUNC_jumpTab[50] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[51] = &&_1_OBF_FUNC_lab51;
    _1_OBF_FUNC_jumpTab[52] = &&_1_OBF_FUNC_lab52;
    _1_OBF_FUNC_jumpTab[53] = &&_1_OBF_FUNC_lab53;
    _1_OBF_FUNC_jumpTab[54] = &&_1_OBF_FUNC_lab54;
    _1_OBF_FUNC_jumpTab[55] = &&_1_OBF_FUNC_lab55;
    _1_OBF_FUNC_jumpTab[56] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[57] = &&_1_OBF_FUNC_lab57;
    _1_OBF_FUNC_jumpTab[58] = &&_1_OBF_FUNC_lab58;
    _1_OBF_FUNC_next = 1UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab24:;
    return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) + 3406079186L));
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab54:
    _index6_0 = 0U;
    _1_OBF_FUNC_next = 12UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab29:
    _index2_2++;
    _1_OBF_FUNC_next = 32UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab35:
    _induction3_2_2 = 0U;
    _1_OBF_FUNC_next = 55UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab47:
    localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[_induction1_0_2];
    _1_OBF_FUNC_next = 43UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab23:
    _index8_0++;
    _1_OBF_FUNC_next = 5UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab57:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      _1_OBF_FUNC_next = 40UL;
    } else {
      _1_OBF_FUNC_next = 24UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab26:
    localStaticState[0UL] += localStaticState[1UL];
    _1_OBF_FUNC_next = 25UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab41:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    _1_OBF_FUNC_next = 15UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    {
      if (_2_OBF_FUNC_1_opaque_ptr_1 == _2_OBF_FUNC_1_opaque_ptr_2) {
      } else {
        _induction7_6_2 = OBF_FUNC(_index2_2);
      }
    _1_OBF_FUNC_lab1:
      localStaticState[0UL] = input + 1318528608U;
      _1_OBF_FUNC_next = 4UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab49:;
    if ((unsigned long)_index0_4 < 4UL) {
      _1_OBF_FUNC_next = 47UL;
    } else {
      _1_OBF_FUNC_next = 24UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab40:
    _induction1_0_2 = 0U;
    _1_OBF_FUNC_next = 0UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab14:
    localStaticState[_induction7_6_2] = localStaticState[_induction9_8_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    _1_OBF_FUNC_next = 10UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab5:;
    if ((unsigned long)_index8_0 < 0UL) {
      _1_OBF_FUNC_next = 14UL;
    } else {
      _1_OBF_FUNC_next = 41UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab45:
    localStaticState[0UL] = localStaticState[1UL] - localStaticState[0UL];
    _1_OBF_FUNC_next = 25UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab15:
    _index6_0++;
    _1_OBF_FUNC_next = 12UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab48:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    _1_OBF_FUNC_next = 29UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab55:
    _index2_2 = 0U;
    _1_OBF_FUNC_next = 32UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab37:;
    if ((unsigned long)_index4_4 < 4UL) {
      _1_OBF_FUNC_next = 39UL;
    } else {
      _1_OBF_FUNC_next = 30UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab11:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      if (_2_OBF_FUNC_1_opaque_ptr_1 != _2_OBF_FUNC_1_opaque_ptr_2) {
        _index6_0 = OBF_FUNC(_index4_4);
      } else {
      }
      _1_OBF_FUNC_next = 57UL;
    } else {
      _1_OBF_FUNC_next = 51UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab30:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      _1_OBF_FUNC_next = 27UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    case 1UL:
      _1_OBF_FUNC_next = 26UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    default:
      _1_OBF_FUNC_next = 45UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab6:
    _index0_4++;
    _1_OBF_FUNC_next = 49UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab25:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      _1_OBF_FUNC_next = 58UL;
    } else {
      _1_OBF_FUNC_next = 24UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab39:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction5_4_2] + localStaticState[1UL];
    _1_OBF_FUNC_next = 36UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab32:;
    if ((unsigned long)_index2_2 < 2UL) {
      _1_OBF_FUNC_next = 53UL;
    } else {
      _1_OBF_FUNC_next = 30UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab16:
    _index4_4 = 0U;
    _1_OBF_FUNC_next = 37UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab10:
    _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
    _1_OBF_FUNC_next = 23UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab22:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    _1_OBF_FUNC_next = 38UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab53:
    localStaticState[_induction3_2_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[_induction3_2_2];
    _1_OBF_FUNC_next = 48UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab17:
    localStaticState[1UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    _1_OBF_FUNC_next = 25UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab38:
    _index4_4 = (unsigned int)((unsigned long)_index4_4 + 2UL);
    _1_OBF_FUNC_next = 37UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab43:
    localStaticState[1UL] *= localStaticState[1UL];
    _1_OBF_FUNC_next = 28UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab19:
    _index8_0 = 0U;
    _1_OBF_FUNC_next = 5UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab4:
    localStaticState[1UL] = input * localStaticState[0UL] + 493730495U;
    _1_OBF_FUNC_next = 11UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab36:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[_induction5_4_2];
    _1_OBF_FUNC_next = 22UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab0:
    _index0_4 = 0U;
    _1_OBF_FUNC_next = 49UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab52:
    _induction5_4_2 = 0U;
    _1_OBF_FUNC_next = 16UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab27:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      _1_OBF_FUNC_next = 17UL;
    } else {
      _1_OBF_FUNC_next = 25UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab28:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    _1_OBF_FUNC_next = 6UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab51:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL:
      _1_OBF_FUNC_next = 30UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    case 1UL:
      _1_OBF_FUNC_next = 35UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    default:
      _1_OBF_FUNC_next = 52UL;
      goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab7:
    _induction9_8_2 = 0U;
    _1_OBF_FUNC_next = 19UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab12:;
    if ((unsigned long)_index6_0 < 0UL) {
      _1_OBF_FUNC_next = 7UL;
    } else {
      _1_OBF_FUNC_next = 24UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab58:
    _induction7_6_2 = 0U;
    _1_OBF_FUNC_next = 54UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  long tmp;
  unsigned int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
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
    tmp = strtol((char const *)((char const *)*(argv + 1)), (char **)((char **)0L), 10);
    a = (unsigned int)tmp;
    tmp___0 = OBF_FUNC(a);
    return ((int)tmp___0);
  }
}
// variants: flatten, deadcode
// expanded variants: flatten:indirect-goto, deadcode:call
