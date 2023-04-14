typedef void *__builtin_va_list;
struct timespec;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct_div_t_773697287;
struct __anonstruct___wseq32_961093918;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct___g1_start32_961093919;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion____missing_field_name_837858127;
struct __pthread_mutex_s;
struct drand48_data;
union __anonunion____missing_field_name_418050178;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_internal_slist;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_cond_s;
struct __anonstruct_ldiv_t_790849867;
union pthread_attr_t;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_cond_t_951761805;
struct timeval;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct___sigset_t_973126068;
enum __anonenum_idtype_t_558242672;
struct random_data;
struct __pthread_internal_list;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_condattr_t_488594145;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
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
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __off64_t;
typedef long __fd_mask;
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_418050178 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
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
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
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
unsigned long _2_entropy = 45678158161051707UL;
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
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
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
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
int OBF_FUNC(int *a, int n, int m);
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
int OBF_FUNC(int *a, int n, int m) {
  int i;
  int c;
  int __RANDVAR__3424910529807060278__;
  int __RANDVAR__99057547102220503724__;
  int __RANDVAR__93662654887312631749__;
  int __RANDVAR__93970396236216596393__;
  int __RANDVAR__93248906514117630783__;
  int __RANDVAR__27534498876447058180__;
  int __RANDVAR__65499804114190523989__;
  int __RANDVAR__10939329643986704370__;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p15;
  int i16;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p17;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p21;
  int i22;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p23;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p21 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p21->next = p21;
      p21->prev = p21;
      _3_OBF_FUNC_2_opaque_list_1 = p21;
      i22 = 0;
      while (i22 < 4) {
        p23 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p23->data = i22 * ((_2_entropy ^ 8) - ((~_2_entropy & 8) + (~_2_entropy & 8)));
        p23->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p23->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p23;
        _3_OBF_FUNC_2_opaque_list_1->next = p23;
        i22++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p15 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p15->next = p15;
      p15->prev = p15;
      _3_OBF_FUNC_1_opaque_list_1 = p15;
      i16 = 0;
      while (i16 < 2) {
        p17 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p17->data = i16 * ((_2_entropy & 9) * (_2_entropy | 9) + (_2_entropy & ~9) * (~_2_entropy & 9));
        p17->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p17->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p17;
        _3_OBF_FUNC_1_opaque_list_1->next = p17;
        i16++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 260UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 386:
        __RANDVAR__93662654887312631749__ = 0;
        _1_OBF_FUNC_next = 455UL;
        break;
      case 182:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 618UL;
        } else {
          _1_OBF_FUNC_next = 218UL;
        }
        break;
      case 427:;
        if (i < n) {
          _1_OBF_FUNC_next = 310UL;
        } else {
          _1_OBF_FUNC_next = 633UL;
        }
        break;
      case 588:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 461UL;
        } else {
          _1_OBF_FUNC_next = 117UL;
        }
        break;
      case 80:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 600UL;
        } else {
          _1_OBF_FUNC_next = 18UL;
        }
        break;
      case 302:;
        if (i < n) {
          _1_OBF_FUNC_next = 525UL;
        } else {
          _1_OBF_FUNC_next = 377UL;
        }
        break;
      case 354:
        __RANDVAR__99057547102220503724__ = 1;
        _1_OBF_FUNC_next = 401UL;
        break;
      case 188:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 662UL;
        } else {
          _1_OBF_FUNC_next = 296UL;
        }
        break;
      case 219:
        i++;
        _1_OBF_FUNC_next = 596UL;
        break;
      case 459:
        i++;
        _1_OBF_FUNC_next = 528UL;
        break;
      case 102:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 450UL;
        } else {
          _1_OBF_FUNC_next = 305UL;
        }
        break;
      case 624:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 158UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 145:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 439:
        __RANDVAR__99057547102220503724__ = 0;
        _1_OBF_FUNC_next = 401UL;
        break;
      case 559:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 604:;
        if (i < n) {
          _1_OBF_FUNC_next = 675UL;
        } else {
          _1_OBF_FUNC_next = 479UL;
        }
        break;
      case 585:;
        if (i < n) {
          _1_OBF_FUNC_next = 615UL;
        } else {
          _1_OBF_FUNC_next = 222UL;
        }
        break;
      case 639:;
        {
          if ((((_2_alwaysZero & ((_2_entropy | 8) - (_2_entropy & 8))) * (_2_alwaysZero | ((_2_entropy | 8) - (_2_entropy & 8))) + (_2_alwaysZero & ~((_2_entropy | 8) - (_2_entropy & 8))) * (~_2_alwaysZero & ((_2_entropy | 8) - (_2_entropy & 8)))) - ~0) - 1UL) {
          } else if (*(a + i) == m) {
            _1_OBF_FUNC_next = 462UL;
          } else {
            _1_OBF_FUNC_next = 388UL;
          }
        }
        break;
      case 121:;
        if (i < n) {
          _1_OBF_FUNC_next = 735UL;
        } else {
          _1_OBF_FUNC_next = 422UL;
        }
        break;
      case 425:
        i++;
        _1_OBF_FUNC_next = 589UL;
        break;
      case 740:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 152:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 205:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 593UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 385:;
        if (i < n) {
          _1_OBF_FUNC_next = 283UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 160:;
        if (i < n) {
          _1_OBF_FUNC_next = 541UL;
        } else {
          _1_OBF_FUNC_next = 316UL;
        }
        break;
      case 235:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 246:
        i++;
        _1_OBF_FUNC_next = 222UL;
        break;
      case 429:
        i++;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 437:;
        if (i < n) {
          _1_OBF_FUNC_next = 233UL;
        } else {
          _1_OBF_FUNC_next = 335UL;
        }
        break;
      case 54:
        i++;
        _1_OBF_FUNC_next = 492UL;
        break;
      case 305:
        i++;
        _1_OBF_FUNC_next = 603UL;
        break;
      case 622:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 140:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 567UL;
        } else {
          _1_OBF_FUNC_next = 69UL;
        }
        break;
      case 403:
        i++;
        _1_OBF_FUNC_next = 585UL;
        break;
      case 581:
        i++;
        _1_OBF_FUNC_next = 682UL;
        break;
      case 691:;
        if (i < n) {
          _1_OBF_FUNC_next = 453UL;
        } else {
          _1_OBF_FUNC_next = 570UL;
        }
        break;
      case 77:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 292UL;
        } else {
          _1_OBF_FUNC_next = 416UL;
        }
        break;
      case 242:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 390UL;
        } else {
          _1_OBF_FUNC_next = 519UL;
        }
        break;
      case 720:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 700UL;
        } else {
          _1_OBF_FUNC_next = 703UL;
        }
        break;
      case 159:
        i++;
        _1_OBF_FUNC_next = 356UL;
        break;
      case 16:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 21:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 484:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 261UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 521:;
        if (i < n) {
          _1_OBF_FUNC_next = 466UL;
        } else {
          _1_OBF_FUNC_next = 236UL;
        }
        break;
      case 131:;
        if (i < n) {
          _1_OBF_FUNC_next = 190UL;
        } else {
          _1_OBF_FUNC_next = 302UL;
        }
        break;
      case 231:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 601UL;
        } else {
          _1_OBF_FUNC_next = 728UL;
        }
        break;
      case 68:;
        if (i < n) {
          _1_OBF_FUNC_next = 164UL;
        } else {
          _1_OBF_FUNC_next = 25UL;
        }
        break;
      case 237:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 85:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 105:
        i++;
        _1_OBF_FUNC_next = 386UL;
        break;
      case 519:
        i++;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 247:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 433UL;
        }
        break;
      case 377:;
        if (i < n) {
          _1_OBF_FUNC_next = 163UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 650:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 638UL;
        } else {
          _1_OBF_FUNC_next = 507UL;
        }
        break;
      case 63:
        i++;
        _1_OBF_FUNC_next = 604UL;
        break;
      case 176:
        i++;
        _1_OBF_FUNC_next = 302UL;
        break;
      case 186:
        i++;
        _1_OBF_FUNC_next = 441UL;
        break;
      case 357:
        i++;
        _1_OBF_FUNC_next = 254UL;
        break;
      case 297:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 543UL;
        break;
      case 668:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 615:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 395UL;
        } else {
          _1_OBF_FUNC_next = 246UL;
        }
        break;
      case 211:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 48UL;
        } else {
          _1_OBF_FUNC_next = 640UL;
        }
        break;
      case 433:
        i++;
        _1_OBF_FUNC_next = 121UL;
        break;
      case 634:;
        if (i < n) {
          _1_OBF_FUNC_next = 445UL;
        } else {
          _1_OBF_FUNC_next = 421UL;
        }
        break;
      case 326:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 78UL;
        } else {
          _1_OBF_FUNC_next = 185UL;
        }
        break;
      case 392:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 577UL;
        } else {
          _1_OBF_FUNC_next = 436UL;
        }
        break;
      case 430:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 263UL;
        } else {
          _1_OBF_FUNC_next = 583UL;
        }
        break;
      case 627:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 264UL;
        } else {
          _1_OBF_FUNC_next = 463UL;
        }
        break;
      case 17:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 23UL;
        } else {
          _1_OBF_FUNC_next = 711UL;
        }
        break;
      case 391:
        i++;
        _1_OBF_FUNC_next = 594UL;
        break;
      case 349:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 103UL;
        } else {
          _1_OBF_FUNC_next = 590UL;
        }
        break;
      case 434:;
        if (i < n) {
          _1_OBF_FUNC_next = 526UL;
        } else {
          _1_OBF_FUNC_next = 2UL;
        }
        break;
      case 640:
        i++;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 710:;
        if (i < n) {
          _1_OBF_FUNC_next = 558UL;
        } else {
          _1_OBF_FUNC_next = 356UL;
        }
        break;
      case 226:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 313:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 199:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 721UL;
        } else {
          _1_OBF_FUNC_next = 120UL;
        }
        break;
      case 264:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 295:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 605UL;
        }
        break;
      case 328:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 545UL;
        } else {
          _1_OBF_FUNC_next = 358UL;
        }
        break;
      case 353:
        i++;
        _1_OBF_FUNC_next = 521UL;
        break;
      case 187:;
        if (i < n) {
          _1_OBF_FUNC_next = 328UL;
        } else {
          _1_OBF_FUNC_next = 209UL;
        }
        break;
      case 381:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 408UL;
        } else {
          _1_OBF_FUNC_next = 1UL;
        }
        break;
      case 550:
        i++;
        _1_OBF_FUNC_next = 198UL;
        break;
      case 587:
        i++;
        _1_OBF_FUNC_next = 273UL;
        break;
      case 404:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 142:;
        if (i < n) {
          _1_OBF_FUNC_next = 77UL;
        } else {
          _1_OBF_FUNC_next = 584UL;
        }
        break;
      case 416:
        i++;
        _1_OBF_FUNC_next = 584UL;
        break;
      case 511:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 262:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 389:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 270UL;
        } else {
          _1_OBF_FUNC_next = 454UL;
        }
        break;
      case 27:
        __RANDVAR__93970396236216596393__ = 1;
        _1_OBF_FUNC_next = 469UL;
        break;
      case 645:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 381UL;
        break;
      case 334:;
        if (i < n) {
          _1_OBF_FUNC_next = 191UL;
        } else {
          _1_OBF_FUNC_next = 594UL;
        }
        break;
      case 212:;
        return (c);
        break;
      case 395:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 490:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 152UL;
        } else {
          _1_OBF_FUNC_next = 375UL;
        }
        break;
      case 730:;
        if (i < n) {
          _1_OBF_FUNC_next = 392UL;
        } else {
          _1_OBF_FUNC_next = 187UL;
        }
        break;
      case 364:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 241:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 308UL;
        } else {
          _1_OBF_FUNC_next = 606UL;
        }
        break;
      case 432:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 169:
        i++;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 480:;
        if (i < n) {
          _1_OBF_FUNC_next = 493UL;
        } else {
          _1_OBF_FUNC_next = 722UL;
        }
        break;
      case 562:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 359:;
        if (i < n) {
          _1_OBF_FUNC_next = 258UL;
        } else {
          _1_OBF_FUNC_next = 602UL;
        }
        break;
      case 317:
        i++;
        _1_OBF_FUNC_next = 376UL;
        break;
      case 22:;
        if (i < n) {
          _1_OBF_FUNC_next = 211UL;
        } else {
          _1_OBF_FUNC_next = 165UL;
        }
        break;
      case 215:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 195UL;
        } else {
          _1_OBF_FUNC_next = 425UL;
        }
        break;
      case 222:;
        if (i < n) {
          _1_OBF_FUNC_next = 52UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 286:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 378UL;
        } else {
          _1_OBF_FUNC_next = 351UL;
        }
        break;
      case 355:;
        if (i < n) {
          _1_OBF_FUNC_next = 19UL;
        } else {
          _1_OBF_FUNC_next = 673UL;
        }
        break;
      case 617:;
        if (i < n) {
          _1_OBF_FUNC_next = 188UL;
        } else {
          _1_OBF_FUNC_next = 598UL;
        }
        break;
      case 458:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 441:;
        if (i < n) {
          _1_OBF_FUNC_next = 624UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 482:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 679UL;
        } else {
          _1_OBF_FUNC_next = 357UL;
        }
        break;
      case 65:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 280:;
        if (i < n) {
          _1_OBF_FUNC_next = 99UL;
        } else {
          _1_OBF_FUNC_next = 198UL;
        }
        break;
      case 600:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 44:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 5:
        i++;
        _1_OBF_FUNC_next = 7UL;
        break;
      case 120:
        i++;
        _1_OBF_FUNC_next = 148UL;
        break;
      case 596:;
        if (i < n) {
          _1_OBF_FUNC_next = 215UL;
        } else {
          _1_OBF_FUNC_next = 589UL;
        }
        break;
      case 162:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 539:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 404UL;
        } else {
          _1_OBF_FUNC_next = 505UL;
        }
        break;
      case 64:
        i++;
        _1_OBF_FUNC_next = 575UL;
        break;
      case 564:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 673:
        __RANDVAR__93970396236216596393__ = 0;
        _1_OBF_FUNC_next = 469UL;
        break;
      case 292:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 175:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 593:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 651:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 224:;
        if (i < n) {
          _1_OBF_FUNC_next = 383UL;
        } else {
          _1_OBF_FUNC_next = 244UL;
        }
        break;
      case 540:;
        if (i < n) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 727:
        i++;
        _1_OBF_FUNC_next = 142UL;
        break;
      case 39:;
        if (i < n) {
          _1_OBF_FUNC_next = 637UL;
        } else {
          _1_OBF_FUNC_next = 337UL;
        }
        break;
      case 387:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 510UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 398:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 651UL;
        } else {
          _1_OBF_FUNC_next = 632UL;
        }
        break;
      case 605:
        i++;
        _1_OBF_FUNC_next = 710UL;
        break;
      case 671:
        i++;
        _1_OBF_FUNC_next = 2UL;
        break;
      case 498:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 583:
        i++;
        _1_OBF_FUNC_next = 509UL;
        break;
      case 721:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 689:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 235UL;
        } else {
          _1_OBF_FUNC_next = 512UL;
        }
        break;
      case 591:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 343UL;
        } else {
          _1_OBF_FUNC_next = 61UL;
        }
        break;
      case 315:
        i++;
        _1_OBF_FUNC_next = 602UL;
        break;
      case 637:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 128UL;
        } else {
          _1_OBF_FUNC_next = 256UL;
        }
        break;
      case 294:
        i++;
        _1_OBF_FUNC_next = 479UL;
        break;
      case 492:;
        if (i < n) {
          _1_OBF_FUNC_next = 539UL;
        } else {
          _1_OBF_FUNC_next = 629UL;
        }
        break;
      case 577:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 108:;
        if (i < n) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 596UL;
        }
        break;
      case 310:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 693UL;
        } else {
          _1_OBF_FUNC_next = 586UL;
        }
        break;
      case 52:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 364UL;
        } else {
          _1_OBF_FUNC_next = 397UL;
        }
        break;
      case 491:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 29UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 333:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 703:
        i++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 250:
        i++;
        _1_OBF_FUNC_next = 150UL;
        break;
      case 30:;
        if (i < n) {
          _1_OBF_FUNC_next = 698UL;
        } else {
          _1_OBF_FUNC_next = 608UL;
        }
        break;
      case 185:
        i++;
        _1_OBF_FUNC_next = 96UL;
        break;
      case 707:
        i++;
        _1_OBF_FUNC_next = 674UL;
        break;
      case 206:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 104UL;
        } else {
          _1_OBF_FUNC_next = 105UL;
        }
        break;
      case 446:;
        if (i < n) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 528UL;
        }
        break;
      case 14:
        i++;
        _1_OBF_FUNC_next = 673UL;
        break;
      case 111:;
        if (i < n) {
          _1_OBF_FUNC_next = 599UL;
        } else {
          _1_OBF_FUNC_next = 603UL;
        }
        break;
      case 277:
        i++;
        _1_OBF_FUNC_next = 642UL;
        break;
      case 729:
        i++;
        _1_OBF_FUNC_next = 722UL;
        break;
      case 82:;
        if (__RANDVAR__65499804114190523989__ == 0) {
          _1_OBF_FUNC_next = 434UL;
        } else {
          _1_OBF_FUNC_next = 645UL;
        }
        break;
      case 728:
        i++;
        _1_OBF_FUNC_next = 348UL;
        break;
      case 578:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 89:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 226UL;
        } else {
          _1_OBF_FUNC_next = 248UL;
        }
        break;
      case 291:;
        if (i < n) {
          _1_OBF_FUNC_next = 692UL;
        } else {
          _1_OBF_FUNC_next = 441UL;
        }
        break;
      case 79:;
        if (i < n) {
          _1_OBF_FUNC_next = 634UL;
        } else {
          _1_OBF_FUNC_next = 722UL;
        }
        break;
      case 217:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 298UL;
        } else {
          _1_OBF_FUNC_next = 653UL;
        }
        break;
      case 470:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 290UL;
        } else {
          _1_OBF_FUNC_next = 671UL;
        }
        break;
      case 534:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 270:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 573:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 47UL;
        } else {
          _1_OBF_FUNC_next = 43UL;
        }
        break;
      case 31:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 85UL;
        } else {
          _1_OBF_FUNC_next = 581UL;
        }
        break;
      case 554:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 145UL;
        } else {
          _1_OBF_FUNC_next = 267UL;
        }
        break;
      case 12:;
        if (i < n) {
          _1_OBF_FUNC_next = 247UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 666:
        i++;
        _1_OBF_FUNC_next = 725UL;
        break;
      case 715:
        i++;
        _1_OBF_FUNC_next = 376UL;
        break;
      case 209:;
        if (i < n) {
          _1_OBF_FUNC_next = 73UL;
        } else {
          _1_OBF_FUNC_next = 224UL;
        }
        break;
      case 699:;
        if (__RANDVAR__93248906514117630783__ == 0) {
          _1_OBF_FUNC_next = 451UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 366:;
        if (i < n) {
          _1_OBF_FUNC_next = 518UL;
        } else {
          _1_OBF_FUNC_next = 613UL;
        }
        break;
      case 590:
        i++;
        _1_OBF_FUNC_next = 32UL;
        break;
      case 665:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 556:
        i++;
        _1_OBF_FUNC_next = 224UL;
        break;
      case 642:;
        if (i < n) {
          _1_OBF_FUNC_next = 201UL;
        } else {
          _1_OBF_FUNC_next = 608UL;
        }
        break;
      case 476:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 303:
        i++;
        _1_OBF_FUNC_next = 320UL;
        break;
      case 712:;
        if (i < n) {
          _1_OBF_FUNC_next = 182UL;
        } else {
          _1_OBF_FUNC_next = 676UL;
        }
        break;
      case 81:;
        if (i < n) {
          _1_OBF_FUNC_next = 691UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 128:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 356:;
        if (i < n) {
          _1_OBF_FUNC_next = 617UL;
        } else {
          _1_OBF_FUNC_next = 376UL;
        }
        break;
      case 285:
        i++;
        _1_OBF_FUNC_next = 331UL;
        break;
      case 672:
        i++;
        _1_OBF_FUNC_next = 422UL;
        break;
      case 273:;
        if (i < n) {
          _1_OBF_FUNC_next = 205UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 70:;
        if (i < n) {
          _1_OBF_FUNC_next = 275UL;
        } else {
          _1_OBF_FUNC_next = 112UL;
        }
        break;
      case 509:
        __RANDVAR__65499804114190523989__ = 0;
        _1_OBF_FUNC_next = 82UL;
        break;
      case 24:
        i++;
        _1_OBF_FUNC_next = 160UL;
        break;
      case 167:;
        if (i < n) {
          _1_OBF_FUNC_next = 420UL;
        } else {
          _1_OBF_FUNC_next = 379UL;
        }
        break;
      case 507:
        i++;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 543:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 552UL;
        } else {
          _1_OBF_FUNC_next = 381UL;
        }
        break;
      case 610:
        __RANDVAR__27534498876447058180__ = 1;
        _1_OBF_FUNC_next = 210UL;
        break;
      case 57:
        i++;
        _1_OBF_FUNC_next = 274UL;
        break;
      case 156:;
        if (i < n) {
          _1_OBF_FUNC_next = 650UL;
        } else {
          _1_OBF_FUNC_next = 136UL;
        }
        break;
      case 421:;
        if (i < n) {
          _1_OBF_FUNC_next = 389UL;
        } else {
          _1_OBF_FUNC_next = 480UL;
        }
        break;
      case 257:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 622UL;
        } else {
          _1_OBF_FUNC_next = 429UL;
        }
        break;
      case 529:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 669:
        printf("The number is not in the list\n");
        _1_OBF_FUNC_next = 212UL;
        break;
      case 485:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 133UL;
        } else {
          _1_OBF_FUNC_next = 141UL;
        }
        break;
      case 535:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 420:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 697UL;
        } else {
          _1_OBF_FUNC_next = 227UL;
        }
        break;
      case 344:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 552:;
        if (i < n) {
          _1_OBF_FUNC_next = 716UL;
        } else {
          _1_OBF_FUNC_next = 709UL;
        }
        break;
      case 518:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 361UL;
        }
        break;
      case 375:
        i++;
        _1_OBF_FUNC_next = 571UL;
        break;
      case 517:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 390:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 725:;
        if (i < n) {
          _1_OBF_FUNC_next = 102UL;
        } else {
          _1_OBF_FUNC_next = 603UL;
        }
        break;
      case 331:;
        if (i < n) {
          _1_OBF_FUNC_next = 286UL;
        } else {
          _1_OBF_FUNC_next = 649UL;
        }
        break;
      case 693:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 388:
        i++;
        _1_OBF_FUNC_next = 255UL;
        break;
      case 40:;
        if (i < n) {
          _1_OBF_FUNC_next = 318UL;
        } else {
          _1_OBF_FUNC_next = 674UL;
        }
        break;
      case 210:;
        if (__RANDVAR__27534498876447058180__ == 0) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 297UL;
        }
        break;
      case 599:;
        if (i < n) {
          _1_OBF_FUNC_next = 560UL;
        } else {
          _1_OBF_FUNC_next = 135UL;
        }
        break;
      case 685:
        i++;
        _1_OBF_FUNC_next = 25UL;
        break;
      case 110:;
        if (i < n) {
          _1_OBF_FUNC_next = 689UL;
        } else {
          _1_OBF_FUNC_next = 131UL;
        }
        break;
      case 321:
        i++;
        _1_OBF_FUNC_next = 342UL;
        break;
      case 667:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 405UL;
        } else {
          _1_OBF_FUNC_next = 321UL;
        }
        break;
      case 196:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 314:;
        if (i < n) {
          _1_OBF_FUNC_next = 667UL;
        } else {
          _1_OBF_FUNC_next = 342UL;
        }
        break;
      case 155:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 504UL;
        } else {
          _1_OBF_FUNC_next = 549UL;
        }
        break;
      case 308:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 483:
        i++;
        _1_OBF_FUNC_next = 299UL;
        break;
      case 592:;
        if (i < n) {
          _1_OBF_FUNC_next = 206UL;
        } else {
          _1_OBF_FUNC_next = 386UL;
        }
        break;
      case 342:;
        if (i < n) {
          _1_OBF_FUNC_next = 257UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 348:;
        if (i < n) {
          _1_OBF_FUNC_next = 431UL;
        } else {
          _1_OBF_FUNC_next = 629UL;
        }
        break;
      case 384:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 400UL;
        } else {
          _1_OBF_FUNC_next = 63UL;
        }
        break;
      case 675:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 564UL;
        } else {
          _1_OBF_FUNC_next = 294UL;
        }
        break;
      case 256:
        i++;
        _1_OBF_FUNC_next = 337UL;
        break;
      case 374:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 647UL;
        } else {
          _1_OBF_FUNC_next = 5UL;
        }
        break;
      case 522:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 495:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 505:
        i++;
        _1_OBF_FUNC_next = 629UL;
        break;
      case 74:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 178:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 107UL;
        } else {
          _1_OBF_FUNC_next = 346UL;
        }
        break;
      case 75:;
        if (i < n) {
          _1_OBF_FUNC_next = 253UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 635:
        printf("The number is found\n");
        _1_OBF_FUNC_next = 212UL;
        break;
      case 362:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 498UL;
        } else {
          _1_OBF_FUNC_next = 648UL;
        }
        break;
      case 558:;
        if (i < n) {
          _1_OBF_FUNC_next = 200UL;
        } else {
          _1_OBF_FUNC_next = 340UL;
        }
        break;
      case 147:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 668UL;
        } else {
          _1_OBF_FUNC_next = 369UL;
        }
        break;
      case 724:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 234:;
        if (i < n) {
          _1_OBF_FUNC_next = 474UL;
        } else {
          _1_OBF_FUNC_next = 355UL;
        }
        break;
      case 713:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 471UL;
        } else {
          _1_OBF_FUNC_next = 87UL;
        }
        break;
      case 649:;
        if (i < n) {
          _1_OBF_FUNC_next = 636UL;
        } else {
          _1_OBF_FUNC_next = 376UL;
        }
        break;
      case 53:;
        if (i < n) {
          _1_OBF_FUNC_next = 232UL;
        } else {
          _1_OBF_FUNC_next = 438UL;
        }
        break;
      case 380:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 218:
        i++;
        _1_OBF_FUNC_next = 676UL;
        break;
      case 73:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 197UL;
        } else {
          _1_OBF_FUNC_next = 556UL;
        }
        break;
      case 163:;
        if (i < n) {
          _1_OBF_FUNC_next = 573UL;
        } else {
          _1_OBF_FUNC_next = 314UL;
        }
        break;
      case 230:;
        if (i < n) {
          _1_OBF_FUNC_next = 393UL;
        } else {
          _1_OBF_FUNC_next = 356UL;
        }
        break;
      case 114:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 426UL;
        } else {
          _1_OBF_FUNC_next = 501UL;
        }
        break;
      case 461:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 547:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 740UL;
        } else {
          _1_OBF_FUNC_next = 587UL;
        }
        break;
      case 647:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 283:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 435UL;
        } else {
          _1_OBF_FUNC_next = 250UL;
        }
        break;
      case 660:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 414UL;
        } else {
          _1_OBF_FUNC_next = 353UL;
        }
        break;
      case 95:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 538:
        i++;
        _1_OBF_FUNC_next = 421UL;
        break;
      case 636:;
        if (i < n) {
          _1_OBF_FUNC_next = 374UL;
        } else {
          _1_OBF_FUNC_next = 7UL;
        }
        break;
      case 253:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 74UL;
        } else {
          _1_OBF_FUNC_next = 98UL;
        }
        break;
      case 533:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 170UL;
        } else {
          _1_OBF_FUNC_next = 154UL;
        }
        break;
      case 631:;
        if (i < n) {
          _1_OBF_FUNC_next = 238UL;
        } else {
          _1_OBF_FUNC_next = 422UL;
        }
        break;
      case 324:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 313UL;
        } else {
          _1_OBF_FUNC_next = 688UL;
        }
        break;
      case 736:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 229:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 447:;
        if (i < n) {
          _1_OBF_FUNC_next = 216UL;
        } else {
          _1_OBF_FUNC_next = 198UL;
        }
        break;
      case 677:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 678UL;
        } else {
          _1_OBF_FUNC_next = 715UL;
        }
        break;
      case 66:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 476UL;
        } else {
          _1_OBF_FUNC_next = 352UL;
        }
        break;
      case 340:;
        if (i < n) {
          _1_OBF_FUNC_next = 485UL;
        } else {
          _1_OBF_FUNC_next = 230UL;
        }
        break;
      case 662:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 570:;
        if (i < n) {
          _1_OBF_FUNC_next = 181UL;
        } else {
          _1_OBF_FUNC_next = 299UL;
        }
        break;
      case 678:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 318:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 707UL;
        }
        break;
      case 464:;
        if (i < n) {
          _1_OBF_FUNC_next = 180UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 589:;
        if (i < n) {
          _1_OBF_FUNC_next = 446UL;
        } else {
          _1_OBF_FUNC_next = 25UL;
        }
        break;
      case 18:
        i++;
        _1_OBF_FUNC_next = 39UL;
        break;
      case 50:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 104:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 496:
        __RANDVAR__10939329643986704370__ = 1;
        _1_OBF_FUNC_next = 544UL;
        break;
      case 512:
        i++;
        _1_OBF_FUNC_next = 131UL;
        break;
      case 568:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 452:
        i++;
        _1_OBF_FUNC_next = 236UL;
        break;
      case 4:;
        if (i < n) {
          _1_OBF_FUNC_next = 387UL;
        } else {
          _1_OBF_FUNC_next = 592UL;
        }
        break;
      case 258:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 309UL;
        } else {
          _1_OBF_FUNC_next = 315UL;
        }
        break;
      case 103:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 189:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 453:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 118UL;
        } else {
          _1_OBF_FUNC_next = 440UL;
        }
        break;
      case 694:;
        if (i < n) {
          _1_OBF_FUNC_next = 484UL;
        } else {
          _1_OBF_FUNC_next = 575UL;
        }
        break;
      case 378:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 508:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 544:;
        if (__RANDVAR__10939329643986704370__ == 0) {
          _1_OBF_FUNC_next = 468UL;
        } else {
          _1_OBF_FUNC_next = 175UL;
        }
        break;
      case 733:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 477:
        __RANDVAR__93662654887312631749__ = 1;
        _1_OBF_FUNC_next = 455UL;
        break;
      case 180:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 727UL;
        }
        break;
      case 275:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 684UL;
        }
        break;
      case 400:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 428:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 523:
        i++;
        _1_OBF_FUNC_next = 36UL;
        break;
      case 528:;
        if (i < n) {
          _1_OBF_FUNC_next = 307UL;
        } else {
          _1_OBF_FUNC_next = 68UL;
        }
        break;
      case 690:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 333UL;
        } else {
          _1_OBF_FUNC_next = 403UL;
        }
        break;
      case 141:
        i++;
        _1_OBF_FUNC_next = 230UL;
        break;
      case 216:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 458UL;
        } else {
          _1_OBF_FUNC_next = 550UL;
        }
        break;
      case 414:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 682:;
        if (i < n) {
          _1_OBF_FUNC_next = 46UL;
        } else {
          _1_OBF_FUNC_next = 704UL;
        }
        break;
      case 168:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 44UL;
        } else if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
        } else {
          _1_OBF_FUNC_next = 54UL;
        }
        break;
      case 520:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 489:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 8:;
        if (i < n) {
          _1_OBF_FUNC_next = 690UL;
        } else {
          _1_OBF_FUNC_next = 585UL;
        }
        break;
      case 204:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 335:;
        if (i < n) {
          _1_OBF_FUNC_next = 554UL;
        } else {
          _1_OBF_FUNC_next = 91UL;
        }
        break;
      case 426:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 560:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 204UL;
        } else {
          _1_OBF_FUNC_next = 137UL;
        }
        break;
      case 431:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 508UL;
        } else {
          _1_OBF_FUNC_next = 643UL;
        }
        break;
      case 195:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 504:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 124:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 370:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 733UL;
        } else {
          _1_OBF_FUNC_next = 130UL;
        }
        break;
      case 474:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 467UL;
        } else {
          _1_OBF_FUNC_next = 174UL;
        }
        break;
      case 1:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 35UL;
        } else {
          _1_OBF_FUNC_next = 354UL;
        }
        break;
      case 656:;
        if (i < n) {
          _1_OBF_FUNC_next = 83UL;
        } else {
          _1_OBF_FUNC_next = 589UL;
        }
        break;
      case 613:;
        if (i < n) {
          _1_OBF_FUNC_next = 168UL;
        } else {
          _1_OBF_FUNC_next = 492UL;
        }
        break;
      case 332:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 343:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 608:;
        if (i < n) {
          _1_OBF_FUNC_next = 464UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 541:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 196UL;
        } else {
          _1_OBF_FUNC_next = 228UL;
        }
        break;
      case 602:;
        if (i < n) {
          _1_OBF_FUNC_next = 576UL;
        } else {
          _1_OBF_FUNC_next = 331UL;
        }
        break;
      case 36:;
        if (i < n) {
          _1_OBF_FUNC_next = 533UL;
        } else {
          _1_OBF_FUNC_next = 661UL;
        }
        break;
      case 644:
        i++;
        _1_OBF_FUNC_next = 540UL;
        break;
      case 684:
        i++;
        _1_OBF_FUNC_next = 112UL;
        break;
      case 122:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 511UL;
        } else {
          _1_OBF_FUNC_next = 171UL;
        }
        break;
      case 181:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 568UL;
        } else {
          _1_OBF_FUNC_next = 483UL;
        }
        break;
      case 306:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 638:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 100:;
        if (i < n) {
          _1_OBF_FUNC_next = 470UL;
        } else {
          _1_OBF_FUNC_next = 2UL;
        }
        break;
      case 402:
        __RANDVAR__93248906514117630783__ = 1;
        _1_OBF_FUNC_next = 699UL;
        break;
      case 412:
        c = 1;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 296:
        i++;
        _1_OBF_FUNC_next = 598UL;
        break;
      case 435:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 135:;
        if (i < n) {
          _1_OBF_FUNC_next = 409UL;
        } else {
          _1_OBF_FUNC_next = 725UL;
        }
        break;
      case 307:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 535UL;
        } else {
          _1_OBF_FUNC_next = 194UL;
        }
        break;
      case 463:
        i++;
        _1_OBF_FUNC_next = 683UL;
        break;
      case 192:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 271:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 561:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 320:;
        if (i < n) {
          _1_OBF_FUNC_next = 241UL;
        } else {
          _1_OBF_FUNC_next = 447UL;
        }
        break;
      case 515:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 711UL;
        break;
      case 676:
        __RANDVAR__27534498876447058180__ = 0;
        _1_OBF_FUNC_next = 210UL;
        break;
      case 542:;
        if (i < n) {
          _1_OBF_FUNC_next = 178UL;
        } else {
          _1_OBF_FUNC_next = 336UL;
        }
        break;
      case 19:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 428UL;
        } else {
          _1_OBF_FUNC_next = 14UL;
        }
        break;
      case 32:;
        if (i < n) {
          _1_OBF_FUNC_next = 217UL;
        } else {
          _1_OBF_FUNC_next = 40UL;
        }
        break;
      case 227:
        i++;
        _1_OBF_FUNC_next = 379UL;
        break;
      case 172:
        i++;
        _1_OBF_FUNC_next = 608UL;
        break;
      case 228:
        i++;
        _1_OBF_FUNC_next = 316UL;
        break;
      case 454:
        i++;
        _1_OBF_FUNC_next = 480UL;
        break;
      case 545:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 606:
        i++;
        _1_OBF_FUNC_next = 447UL;
        break;
      case 269:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 718UL;
        } else {
          _1_OBF_FUNC_next = 277UL;
        }
        break;
      case 117:
        i++;
        _1_OBF_FUNC_next = 524UL;
        break;
      case 208:;
        if (c == 0) {
          _1_OBF_FUNC_next = 669UL;
        } else {
          _1_OBF_FUNC_next = 635UL;
        }
        break;
      case 525:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 561UL;
        } else {
          _1_OBF_FUNC_next = 574UL;
        }
        break;
      case 60:
        i++;
        _1_OBF_FUNC_next = 712UL;
        break;
      case 150:;
        if (i < n) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 542UL;
        }
        break;
      case 244:;
        if (i < n) {
          _1_OBF_FUNC_next = 427UL;
        } else {
          _1_OBF_FUNC_next = 422UL;
        }
        break;
      case 161:;
        if (i < n) {
          _1_OBF_FUNC_next = 89UL;
        } else {
          _1_OBF_FUNC_next = 706UL;
        }
        break;
      case 405:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 706:;
        if (i < n) {
          _1_OBF_FUNC_next = 491UL;
        } else {
          _1_OBF_FUNC_next = 443UL;
        }
        break;
      case 137:
        i++;
        _1_OBF_FUNC_next = 135UL;
        break;
      case 243:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 665UL;
        } else {
          _1_OBF_FUNC_next = 486UL;
        }
        break;
      case 194:
        i++;
        _1_OBF_FUNC_next = 68UL;
        break;
      case 629:;
        if (i < n) {
          _1_OBF_FUNC_next = 30UL;
        } else {
          _1_OBF_FUNC_next = 27UL;
        }
        break;
      case 702:
        i++;
        _1_OBF_FUNC_next = 266UL;
        break;
      case 319:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 562UL;
        } else {
          _1_OBF_FUNC_next = 28UL;
        }
        break;
      case 87:
        i++;
        _1_OBF_FUNC_next = 701UL;
        break;
      case 683:;
        if (i < n) {
          _1_OBF_FUNC_next = 531UL;
        } else {
          _1_OBF_FUNC_next = 376UL;
        }
        break;
      case 84:;
        if (i < n) {
          _1_OBF_FUNC_next = 597UL;
        } else {
          _1_OBF_FUNC_next = 712UL;
        }
        break;
      case 183:;
        if (i < n) {
          _1_OBF_FUNC_next = 281UL;
        } else {
          _1_OBF_FUNC_next = 540UL;
        }
        break;
      case 171:
        i++;
        _1_OBF_FUNC_next = 13UL;
        break;
      case 34:
        i++;
        _1_OBF_FUNC_next = 443UL;
        break;
      case 274:;
        if (i < n) {
          _1_OBF_FUNC_next = 656UL;
        } else {
          _1_OBF_FUNC_next = 166UL;
        }
        break;
      case 418:
        i = 0;
        _1_OBF_FUNC_next = 90UL;
        break;
      case 281:;
        if (i < n) {
          _1_OBF_FUNC_next = 394UL;
        } else {
          _1_OBF_FUNC_next = 70UL;
        }
        break;
      case 127:;
        if (i < n) {
          _1_OBF_FUNC_next = 203UL;
        } else {
          _1_OBF_FUNC_next = 443UL;
        }
        break;
      case 614:
        i++;
        _1_OBF_FUNC_next = 631UL;
        break;
      case 705:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 413:
        i++;
        _1_OBF_FUNC_next = 340UL;
        break;
      case 298:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 576:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 559UL;
        } else {
          _1_OBF_FUNC_next = 285UL;
        }
        break;
      case 700:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 28:
        i++;
        _1_OBF_FUNC_next = 287UL;
        break;
      case 148:;
        if (i < n) {
          _1_OBF_FUNC_next = 547UL;
        } else {
          _1_OBF_FUNC_next = 273UL;
        }
        break;
      case 379:;
        if (i < n) {
          _1_OBF_FUNC_next = 713UL;
        } else {
          _1_OBF_FUNC_next = 701UL;
        }
        break;
      case 440:
        i++;
        _1_OBF_FUNC_next = 570UL;
        break;
      case 261:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 394:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 489UL;
        } else {
          _1_OBF_FUNC_next = 322UL;
        }
        break;
      case 93:
        i++;
        _1_OBF_FUNC_next = 704UL;
        break;
      case 119:
        i++;
        _1_OBF_FUNC_next = 582UL;
        break;
      case 701:;
        if (i < n) {
          _1_OBF_FUNC_next = 295UL;
        } else {
          _1_OBF_FUNC_next = 710UL;
        }
        break;
      case 233:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 271UL;
        } else {
          _1_OBF_FUNC_next = 663UL;
        }
        break;
      case 309:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 0:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 571:;
        if (i < n) {
          _1_OBF_FUNC_next = 430UL;
        } else {
          _1_OBF_FUNC_next = 509UL;
        }
        break;
      case 361:
        i++;
        _1_OBF_FUNC_next = 613UL;
        break;
      case 633:;
        if (i < n) {
          _1_OBF_FUNC_next = 122UL;
        } else {
          _1_OBF_FUNC_next = 13UL;
        }
        break;
      case 661:
        __RANDVAR__10939329643986704370__ = 0;
        _1_OBF_FUNC_next = 544UL;
        break;
      case 136:;
        if (i < n) {
          _1_OBF_FUNC_next = 360UL;
        } else {
          _1_OBF_FUNC_next = 350UL;
        }
        break;
      case 254:;
        if (i < n) {
          _1_OBF_FUNC_next = 269UL;
        } else {
          _1_OBF_FUNC_next = 642UL;
        }
        break;
      case 456:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 50UL;
        } else {
          _1_OBF_FUNC_next = 621UL;
        }
        break;
      case 7:;
        if (i < n) {
          _1_OBF_FUNC_next = 627UL;
        } else {
          _1_OBF_FUNC_next = 683UL;
        }
        break;
      case 88:
        i++;
        _1_OBF_FUNC_next = 709UL;
        break;
      case 501:
        i++;
        _1_OBF_FUNC_next = 244UL;
        break;
      case 174:
        i++;
        _1_OBF_FUNC_next = 355UL;
        break;
      case 367:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 500UL;
        } else {
          _1_OBF_FUNC_next = 1UL;
        }
        break;
      case 179:;
        if (i < n) {
          _1_OBF_FUNC_next = 223UL;
        } else {
          _1_OBF_FUNC_next = 36UL;
        }
        break;
      case 350:;
        if (i < n) {
          _1_OBF_FUNC_next = 591UL;
        } else {
          _1_OBF_FUNC_next = 438UL;
        }
        break;
      case 692:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 237UL;
        } else {
          _1_OBF_FUNC_next = 186UL;
        }
        break;
      case 352:
        i++;
        _1_OBF_FUNC_next = 542UL;
        break;
      case 409:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 534UL;
        } else {
          _1_OBF_FUNC_next = 666UL;
        }
        break;
      case 625:;
        if (i < n) {
          _1_OBF_FUNC_next = 660UL;
        } else {
          _1_OBF_FUNC_next = 521UL;
        }
        break;
      case 129:
        i++;
        _1_OBF_FUNC_next = 274UL;
        break;
      case 397:
        i++;
        _1_OBF_FUNC_next = 53UL;
        break;
      case 166:
        __RANDVAR__65499804114190523989__ = 1;
        _1_OBF_FUNC_next = 82UL;
        break;
      case 358:
        i++;
        _1_OBF_FUNC_next = 209UL;
        break;
      case 376:;
        if (i < n) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 477UL;
        }
        break;
      case 130:
        i++;
        _1_OBF_FUNC_next = 12UL;
        break;
      case 25:;
        if (i < n) {
          _1_OBF_FUNC_next = 625UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 479:;
        if (i < n) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 653:
        i++;
        _1_OBF_FUNC_next = 40UL;
        break;
      case 49:;
        if (i < n) {
          _1_OBF_FUNC_next = 280UL;
        } else {
          _1_OBF_FUNC_next = 402UL;
        }
        break;
      case 369:
        i++;
        _1_OBF_FUNC_next = 71UL;
        break;
      case 200:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 724UL;
        } else {
          _1_OBF_FUNC_next = 413UL;
        }
        break;
      case 632:
        i++;
        _1_OBF_FUNC_next = 100UL;
        break;
      case 436:
        i++;
        _1_OBF_FUNC_next = 187UL;
        break;
      case 62:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 572UL;
        } else {
          _1_OBF_FUNC_next = 219UL;
        }
        break;
      case 106:
        i++;
        _1_OBF_FUNC_next = 350UL;
        break;
      case 266:;
        if (i < n) {
          _1_OBF_FUNC_next = 243UL;
        } else {
          _1_OBF_FUNC_next = 438UL;
        }
        break;
      case 688:
        i++;
        _1_OBF_FUNC_next = 566UL;
        break;
      case 133:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 493:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 344UL;
        } else {
          _1_OBF_FUNC_next = 729UL;
        }
        break;
      case 618:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 56:;
        if (i < n) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 629UL;
        }
        break;
      case 422:;
        if (i < n) {
          _1_OBF_FUNC_next = 138UL;
        } else {
          _1_OBF_FUNC_next = 496UL;
        }
        break;
      case 443:;
        if (i < n) {
          _1_OBF_FUNC_next = 359UL;
        } else {
          _1_OBF_FUNC_next = 649UL;
        }
        break;
      case 704:;
        if (i < n) {
          _1_OBF_FUNC_next = 114UL;
        } else {
          _1_OBF_FUNC_next = 244UL;
        }
        break;
      case 164:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 520UL;
        } else {
          _1_OBF_FUNC_next = 685UL;
        }
        break;
      case 732:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 718:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 101:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 9UL;
        } else {
          _1_OBF_FUNC_next = 303UL;
        }
        break;
      case 69:
        i++;
        _1_OBF_FUNC_next = 84UL;
        break;
      case 201:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 574:
        i++;
        _1_OBF_FUNC_next = 377UL;
        break;
      case 346:
        i++;
        _1_OBF_FUNC_next = 336UL;
        break;
      case 674:;
        if (i < n) {
          _1_OBF_FUNC_next = 110UL;
        } else {
          _1_OBF_FUNC_next = 377UL;
        }
        break;
      case 203:;
        if (i < n) {
          _1_OBF_FUNC_next = 456UL;
        } else {
          _1_OBF_FUNC_next = 161UL;
        }
        break;
      case 96:;
        if (i < n) {
          _1_OBF_FUNC_next = 156UL;
        } else {
          _1_OBF_FUNC_next = 438UL;
        }
        break;
      case 288:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 732UL;
        } else {
          _1_OBF_FUNC_next = 169UL;
        }
        break;
      case 78:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 118:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 236:;
        if (i < n) {
          _1_OBF_FUNC_next = 516UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 23:;
        if (i < n) {
          _1_OBF_FUNC_next = 177UL;
        } else {
          _1_OBF_FUNC_next = 4UL;
        }
        break;
      case 572:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 337:;
        if (i < n) {
          _1_OBF_FUNC_next = 324UL;
        } else {
          _1_OBF_FUNC_next = 566UL;
        }
        break;
      case 351:
        i++;
        _1_OBF_FUNC_next = 649UL;
        break;
      case 190:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 173UL;
        } else {
          _1_OBF_FUNC_next = 176UL;
        }
        break;
      case 393:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 41UL;
        } else {
          _1_OBF_FUNC_next = 159UL;
        }
        break;
      case 197:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 663:
        i++;
        _1_OBF_FUNC_next = 335UL;
        break;
      case 360:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 106UL;
        }
        break;
      case 526:;
        if (i < n) {
          _1_OBF_FUNC_next = 319UL;
        } else {
          _1_OBF_FUNC_next = 287UL;
        }
        break;
      case 566:;
        if (i < n) {
          _1_OBF_FUNC_next = 366UL;
        } else {
          _1_OBF_FUNC_next = 629UL;
        }
        break;
      case 299:;
        if (i < n) {
          _1_OBF_FUNC_next = 242UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 98:
        i++;
        _1_OBF_FUNC_next = 234UL;
        break;
      case 630:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 736UL;
        } else {
          _1_OBF_FUNC_next = 614UL;
        }
        break;
      case 711:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 75UL;
        } else {
          _1_OBF_FUNC_next = 367UL;
        }
        break;
      case 202:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 282UL;
        } else {
          _1_OBF_FUNC_next = 119UL;
        }
        break;
      case 9:
        c = 1;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 450:
        c = 1;
        _1_OBF_FUNC_next = 536UL;
        break;
      case 13:;
        if (i < n) {
          _1_OBF_FUNC_next = 362UL;
        } else {
          _1_OBF_FUNC_next = 422UL;
        }
        break;
      case 734:
        c = 1;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 107:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 312:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 735:;
        if (i < n) {
          _1_OBF_FUNC_next = 588UL;
        } else {
          _1_OBF_FUNC_next = 524UL;
        }
        break;
      case 146:
        i++;
        _1_OBF_FUNC_next = 592UL;
        break;
      case 500:;
        if (i < n) {
          _1_OBF_FUNC_next = 155UL;
        } else {
          _1_OBF_FUNC_next = 437UL;
        }
        break;
      case 316:;
        if (i < n) {
          _1_OBF_FUNC_next = 694UL;
        } else {
          _1_OBF_FUNC_next = 121UL;
        }
        break;
      case 582:;
        if (i < n) {
          _1_OBF_FUNC_next = 326UL;
        } else {
          _1_OBF_FUNC_next = 96UL;
        }
        break;
      case 648:
        i++;
        _1_OBF_FUNC_next = 422UL;
        break;
      case 90:
        __RANDVAR__3424910529807060278__ = 0;
        _1_OBF_FUNC_next = 439UL;
        break;
      case 322:
        i++;
        _1_OBF_FUNC_next = 70UL;
        break;
      case 601:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 598:;
        if (i < n) {
          _1_OBF_FUNC_next = 639UL;
        } else {
          _1_OBF_FUNC_next = 255UL;
        }
        break;
      case 527:;
        if (i < n) {
          _1_OBF_FUNC_next = 199UL;
        } else {
          _1_OBF_FUNC_next = 148UL;
        }
        break;
      case 659:;
        if (i < n) {
          _1_OBF_FUNC_next = 349UL;
        } else {
          _1_OBF_FUNC_next = 32UL;
        }
        break;
      case 59:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 380UL;
        } else {
          _1_OBF_FUNC_next = 278UL;
        }
        break;
      case 165:;
        if (i < n) {
          _1_OBF_FUNC_next = 231UL;
        } else {
          _1_OBF_FUNC_next = 348UL;
        }
        break;
      case 445:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 306UL;
        } else {
          _1_OBF_FUNC_next = 538UL;
        }
        break;
      case 466:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 522UL;
        } else {
          _1_OBF_FUNC_next = 452UL;
        }
        break;
      case 698:;
        if (i < n) {
          _1_OBF_FUNC_next = 482UL;
        } else {
          _1_OBF_FUNC_next = 254UL;
        }
        break;
      case 223:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 95UL;
        } else {
          _1_OBF_FUNC_next = 523UL;
        }
        break;
      case 401:;
        if (__RANDVAR__99057547102220503724__ == 0) {
          _1_OBF_FUNC_next = 17UL;
        } else {
          _1_OBF_FUNC_next = 208UL;
        }
        break;
      case 670:
        i++;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 383:;
        if (i < n) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 682UL;
        }
        break;
      case 438:;
        if (i < n) {
          _1_OBF_FUNC_next = 79UL;
        } else {
          _1_OBF_FUNC_next = 610UL;
        }
        break;
      case 467:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 679:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 300:;
        if (i < n) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 84UL;
        }
        break;
      case 549:
        i++;
        _1_OBF_FUNC_next = 437UL;
        break;
      case 154:
        i++;
        _1_OBF_FUNC_next = 661UL;
        break;
      case 406:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 332UL;
        } else {
          _1_OBF_FUNC_next = 644UL;
        }
        break;
      case 61:
        i++;
        _1_OBF_FUNC_next = 438UL;
        break;
      case 158:
        c = 1;
        _1_OBF_FUNC_next = 175UL;
        break;
      case 472:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 529UL;
        } else {
          _1_OBF_FUNC_next = 670UL;
        }
        break;
      case 575:;
        if (i < n) {
          _1_OBF_FUNC_next = 370UL;
        } else {
          _1_OBF_FUNC_next = 12UL;
        }
        break;
      case 697:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 138:;
        if (i < n) {
          _1_OBF_FUNC_next = 730UL;
        } else {
          _1_OBF_FUNC_next = 224UL;
        }
        break;
      case 471:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 278:
        i++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 531:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 312UL;
        } else {
          _1_OBF_FUNC_next = 317UL;
        }
        break;
      case 584:;
        if (i < n) {
          _1_OBF_FUNC_next = 720UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 170:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 709:;
        if (i < n) {
          _1_OBF_FUNC_next = 490UL;
        } else {
          _1_OBF_FUNC_next = 571UL;
        }
        break;
      case 112:;
        if (i < n) {
          _1_OBF_FUNC_next = 406UL;
        } else {
          _1_OBF_FUNC_next = 540UL;
        }
        break;
      case 255:;
        if (i < n) {
          _1_OBF_FUNC_next = 677UL;
        } else {
          _1_OBF_FUNC_next = 376UL;
        }
        break;
      case 468:;
        if (i < n) {
          _1_OBF_FUNC_next = 291UL;
        } else {
          _1_OBF_FUNC_next = 316UL;
        }
        break;
      case 267:
        i++;
        _1_OBF_FUNC_next = 91UL;
        break;
      case 48:
        c = 1;
        _1_OBF_FUNC_next = 27UL;
        break;
      case 71:;
        if (i < n) {
          _1_OBF_FUNC_next = 652UL;
        } else {
          _1_OBF_FUNC_next = 266UL;
        }
        break;
      case 462:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 536:
        __RANDVAR__3424910529807060278__ = 1;
        _1_OBF_FUNC_next = 367UL;
        break;
      case 524:;
        if (i < n) {
          _1_OBF_FUNC_next = 630UL;
        } else {
          _1_OBF_FUNC_next = 631UL;
        }
        break;
      case 173:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 260:
        c = 0;
        _1_OBF_FUNC_next = 418UL;
        break;
      case 455:;
        if (__RANDVAR__93662654887312631749__ == 0) {
          _1_OBF_FUNC_next = 86UL;
        } else {
          _1_OBF_FUNC_next = 515UL;
        }
        break;
      case 586:
        i++;
        _1_OBF_FUNC_next = 633UL;
        break;
      case 191:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 578UL;
        } else {
          _1_OBF_FUNC_next = 391UL;
        }
        break;
      case 311:;
        if (i < n) {
          _1_OBF_FUNC_next = 80UL;
        } else {
          _1_OBF_FUNC_next = 39UL;
        }
        break;
      case 722:;
        if (i < n) {
          _1_OBF_FUNC_next = 334UL;
        } else {
          _1_OBF_FUNC_next = 96UL;
        }
        break;
      case 47:
        c = 1;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 91:
        __RANDVAR__93248906514117630783__ = 0;
        _1_OBF_FUNC_next = 699UL;
        break;
      case 282:
        c = 1;
        _1_OBF_FUNC_next = 610UL;
        break;
      case 408:;
        if (i < n) {
          _1_OBF_FUNC_next = 472UL;
        } else {
          _1_OBF_FUNC_next = 179UL;
        }
        break;
      case 516:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 680UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 510:
        c = 1;
        _1_OBF_FUNC_next = 208UL;
        break;
      case 594:;
        if (i < n) {
          _1_OBF_FUNC_next = 202UL;
        } else {
          _1_OBF_FUNC_next = 582UL;
        }
        break;
      case 99:;
        if (i < n) {
          _1_OBF_FUNC_next = 101UL;
        } else {
          _1_OBF_FUNC_next = 320UL;
        }
        break;
      case 37:
        i++;
        _1_OBF_FUNC_next = 4UL;
        break;
      case 567:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 652:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 412UL;
        } else {
          _1_OBF_FUNC_next = 702UL;
        }
        break;
      case 680:
        c = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 248:
        i++;
        _1_OBF_FUNC_next = 706UL;
        break;
      case 41:
        c = 1;
        _1_OBF_FUNC_next = 515UL;
        break;
      case 716:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 495UL;
        } else {
          _1_OBF_FUNC_next = 88UL;
        }
        break;
      case 486:
        i++;
        _1_OBF_FUNC_next = 438UL;
        break;
      case 643:
        i++;
        _1_OBF_FUNC_next = 629UL;
        break;
      case 198:;
        if (i < n) {
          _1_OBF_FUNC_next = 714UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 232:;
        if (i < n) {
          _1_OBF_FUNC_next = 147UL;
        } else {
          _1_OBF_FUNC_next = 71UL;
        }
        break;
      case 115:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 432UL;
        } else {
          _1_OBF_FUNC_next = 459UL;
        }
        break;
      case 290:
        c = 1;
        _1_OBF_FUNC_next = 645UL;
        break;
      case 714:;
        if (i < n) {
          _1_OBF_FUNC_next = 384UL;
        } else {
          _1_OBF_FUNC_next = 604UL;
        }
        break;
      case 597:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 262UL;
        } else {
          _1_OBF_FUNC_next = 60UL;
        }
        break;
      case 287:;
        if (i < n) {
          _1_OBF_FUNC_next = 398UL;
        } else {
          _1_OBF_FUNC_next = 100UL;
        }
        break;
      case 469:;
        if (__RANDVAR__93970396236216596393__ == 0) {
          _1_OBF_FUNC_next = 111UL;
        } else {
          _1_OBF_FUNC_next = 536UL;
        }
        break;
      case 46:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 734UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 177:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 705UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 83:;
        if (i < n) {
          _1_OBF_FUNC_next = 288UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 35:;
        if (__RANDVAR__3424910529807060278__ == 0) {
          _1_OBF_FUNC_next = 300UL;
        } else {
          _1_OBF_FUNC_next = 543UL;
        }
        break;
      case 263:
        c = 1;
        _1_OBF_FUNC_next = 354UL;
        break;
      case 336:;
        if (i < n) {
          _1_OBF_FUNC_next = 527UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 603:;
        if (i < n) {
          _1_OBF_FUNC_next = 311UL;
        } else {
          _1_OBF_FUNC_next = 566UL;
        }
        break;
      case 238:;
        if (*(a + i) == m) {
          _1_OBF_FUNC_next = 517UL;
        } else {
          _1_OBF_FUNC_next = 672UL;
        }
        break;
      case 621:
        i++;
        _1_OBF_FUNC_next = 161UL;
        break;
      case 29:
        c = 1;
        _1_OBF_FUNC_next = 477UL;
        break;
      case 451:;
        if (i < n) {
          _1_OBF_FUNC_next = 659UL;
        } else {
          _1_OBF_FUNC_next = 674UL;
        }
        break;
      case 43:
        i++;
        _1_OBF_FUNC_next = 314UL;
        break;
      case 86:;
        if (i < n) {
          _1_OBF_FUNC_next = 167UL;
        } else {
          _1_OBF_FUNC_next = 710UL;
        }
        break;
      case 2:;
        if (i < n) {
          _1_OBF_FUNC_next = 385UL;
        } else {
          _1_OBF_FUNC_next = 336UL;
        }
        break;
      }
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int a[10];
  int i;
  int m;
  int c;
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
    if (argc < 12) {
      return (1);
    }
    c = 0;
    i = 1;
    while (i < argc - 1) {
      a[i - 1] = (int)*(*(argv + i) + 0);
      i++;
    }
    m = (int)*(*(argv + (argc - 1)) + 0);
    tmp = OBF_FUNC(a, argc - 1, m);
    return (tmp);
  }
}
// variants: loop-unroll, loop-unroll, block-fission
// expanded variants: loop-unroll, loop-unroll, block-fission:default
