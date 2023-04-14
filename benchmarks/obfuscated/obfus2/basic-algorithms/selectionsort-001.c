typedef void *__builtin_va_list;
struct timeval;
struct __pthread_internal_list;
struct __anonstruct___g1_start32_972253866;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_internal_slist;
struct __pthread_mutex_s;
union __anonunion____missing_field_name_168944669;
struct __pthread_rwlock_arch_t;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_rwlock_t_656928968;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct_fd_set_356711149;
union __anonunion____missing_field_name_972253865;
struct __pthread_cond_s;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct_lldiv_t_103911545;
enum __anonenum_idtype_t_558242672;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct___sigset_t_973126068;
union pthread_attr_t;
struct random_data;
struct timespec;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct___fsid_t_109580352;
struct drand48_data;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __anonstruct_ldiv_t_790849867;
union __anonunion_pthread_mutex_t_335460617;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
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
typedef __int16_t __int_least16_t;
typedef __loff_t loff_t;
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
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
extern double(atof)(char const *__nptr);
typedef __sigset_t sigset_t;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
struct __anonstruct___g1_start32_972253866 {
  unsigned int __low;
  unsigned int __high;
};
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_168944669 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
union __anonunion____missing_field_name_972253865 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_972253866 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_168944669 __annonCompField1;
  union __anonunion____missing_field_name_972253865 __annonCompField2;
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
unsigned long _2_entropy = 7105285205985534642UL;
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
void OBF_FUNC(int *a, int n);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
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
void OBF_FUNC(int *a, int n) {
  int i;
  int temp;
  int __RANDVAR__52265458048924869110__;
  int j;
  int __RANDVAR__91500438964866598333__;
  int j___0;
  int __RANDVAR__68736589903881212520__;
  int j___1;
  int __RANDVAR__15775215465222440431__;
  int j___2;
  int __RANDVAR__3255784825063002397__;
  int j___3;
  int __RANDVAR__98152455849188263932__;
  int j___4;
  int __RANDVAR__26228579571138011181__;
  int __RANDVAR__63823334648886528536__;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p20;
  int i21;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p22;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p26;
  int i27;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p28;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p26 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p26->next = p26;
      p26->prev = p26;
      _3_OBF_FUNC_2_opaque_list_1 = p26;
      i27 = 0;
      while (i27 < 2) {
        p28 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p28->data = i27 * (((_2_entropy + 1) + 1UL) + ((-_2_entropy - 1UL) | (-1 - 1UL)));
        p28->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p28->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p28;
        _3_OBF_FUNC_2_opaque_list_1->next = p28;
        i27++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p20 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p20->next = p20;
      p20->prev = p20;
      _3_OBF_FUNC_1_opaque_list_1 = p20;
      i21 = 0;
      while (i21 < 3) {
        p22 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p22->data = i21 * ((_2_entropy & ~5) + 5);
        p22->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p22->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p22;
        _3_OBF_FUNC_1_opaque_list_1->next = p22;
        i21++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 178UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 239:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 92UL;
        } else {
          _1_OBF_FUNC_next = 311UL;
        }
        break;
      case 182:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 219UL;
        break;
      case 318:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 296UL;
        } else {
          _1_OBF_FUNC_next = 304UL;
        }
        break;
      case 18:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 50:
        j___2 = i + 1;
        _1_OBF_FUNC_next = 125UL;
        break;
      case 104:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 302:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 139UL;
        break;
      case 188:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 246UL;
        } else {
          _1_OBF_FUNC_next = 48UL;
        }
        break;
      case 4:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 275UL;
        break;
      case 219:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 57UL;
        break;
      case 258:
        i++;
        _1_OBF_FUNC_next = 34UL;
        break;
      case 103:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 97UL;
        break;
      case 189:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 151UL;
        } else {
          _1_OBF_FUNC_next = 203UL;
        }
        break;
      case 272:;
        if (j < n) {
          _1_OBF_FUNC_next = 215UL;
        } else {
          _1_OBF_FUNC_next = 261UL;
        }
        break;
      case 145:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 241UL;
        break;
      case 15:
        temp = *(a + i);
        _1_OBF_FUNC_next = 26UL;
        break;
      case 221:;
        {
          if (((((_2_alwaysZero & (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) * (_2_alwaysZero | (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) + (_2_alwaysZero & ~(((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) * (~_2_alwaysZero & (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL))) ^ ~1) + ((((_2_alwaysZero & (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) * (_2_alwaysZero | (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) + (_2_alwaysZero & ~(((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL)) * (~_2_alwaysZero & (((_2_entropy ^ ~3) + ((_2_entropy | 3) + (_2_entropy | 3))) + 1UL))) | 1) << 1UL)) + 1UL) {
            if (__RANDVAR__26228579571138011181__ == 0) {
              _1_OBF_FUNC_next = 292UL;
            } else {
              _1_OBF_FUNC_next = 307UL;
            }
          } else {
          }
        }
        break;
      case 180:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 84UL;
        break;
      case 275:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 227UL;
        break;
      case 121:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 187UL;
        break;
      case 141:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 32UL;
        break;
      case 216:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 168:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 118UL;
        } else {
          _1_OBF_FUNC_next = 190UL;
        }
        if (_3_OBF_FUNC_2_opaque_ptr_1 == _3_OBF_FUNC_2_opaque_ptr_2) {
          break;
        } else {
        }
      case 152:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 1UL;
        break;
      case 205:
        temp = *(a + i);
        _1_OBF_FUNC_next = 285UL;
        break;
      case 8:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 161UL;
        } else {
          _1_OBF_FUNC_next = 57UL;
        }
        break;
      case 204:
        __RANDVAR__98152455849188263932__ = 1;
        _1_OBF_FUNC_next = 148UL;
        break;
      case 235:
        temp = *(a + i);
        _1_OBF_FUNC_next = 86UL;
        break;
      case 246:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 208UL;
        } else {
          _1_OBF_FUNC_next = 22UL;
        }
        break;
      case 195:
        __RANDVAR__98152455849188263932__ = 0;
        _1_OBF_FUNC_next = 148UL;
        break;
      case 54:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 218UL;
        break;
      case 305:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 181UL;
        } else {
          _1_OBF_FUNC_next = 166UL;
        }
        break;
      case 124:
        j___0++;
        _1_OBF_FUNC_next = 250UL;
        break;
      case 140:
        temp = *(a + i);
        _1_OBF_FUNC_next = 233UL;
        break;
      case 1:
        i++;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 77:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 141UL;
        break;
      case 242:;
        if (i < n) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 110UL;
        }
        break;
      case 159:;
        if (i < n) {
          _1_OBF_FUNC_next = 247UL;
        } else {
          _1_OBF_FUNC_next = 95UL;
        }
        break;
      case 16:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 74UL;
        } else {
          _1_OBF_FUNC_next = 230UL;
        }
        break;
      case 21:
        j___0 = i + 1;
        _1_OBF_FUNC_next = 36UL;
        break;
      case 36:
        __RANDVAR__68736589903881212520__ = 0;
        _1_OBF_FUNC_next = 29UL;
        break;
      case 131:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 130UL;
        } else {
          _1_OBF_FUNC_next = 226UL;
        }
        break;
      case 231:;
        if (i < n) {
          _1_OBF_FUNC_next = 50UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 68:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 293UL;
        break;
      case 213:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 216UL;
        break;
      case 122:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 248UL;
        }
        break;
      case 181:
        temp = *(a + i);
        _1_OBF_FUNC_next = 45UL;
        break;
      case 237:
        j___4++;
        _1_OBF_FUNC_next = 259UL;
        break;
      case 306:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 179UL;
        break;
      case 85:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 78UL;
        } else {
          _1_OBF_FUNC_next = 284UL;
        }
        break;
      case 100:
        __RANDVAR__63823334648886528536__ = 0;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 26:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 54UL;
        break;
      case 296:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 109UL;
        } else {
          _1_OBF_FUNC_next = 162UL;
        }
        break;
      case 225:;
        if (__RANDVAR__15775215465222440431__ == 0) {
          _1_OBF_FUNC_next = 295UL;
        } else {
          _1_OBF_FUNC_next = 287UL;
        }
        break;
      case 247:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 308UL;
        break;
      case 135:
        temp = *(a + i);
        _1_OBF_FUNC_next = 271UL;
        break;
      case 63:
        j___1 = i + 1;
        _1_OBF_FUNC_next = 269UL;
        break;
      case 279:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 198UL;
        break;
      case 307:
        i++;
        _1_OBF_FUNC_next = 314UL;
        break;
      case 176:
        temp = *(a + i);
        _1_OBF_FUNC_next = 68UL;
        break;
      case 186:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 192:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 39UL;
        break;
      case 211:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 286UL;
        break;
      case 259:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 42UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 271:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 117UL;
        break;
      case 125:
        __RANDVAR__3255784825063002397__ = 0;
        _1_OBF_FUNC_next = 278UL;
        break;
      case 320:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 180UL;
        break;
      case 143:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 22UL;
        break;
      case 32:
        j___2++;
        _1_OBF_FUNC_next = 318UL;
        break;
      case 227:
        j___3++;
        _1_OBF_FUNC_next = 284UL;
        break;
      case 17:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 224UL;
        } else {
          _1_OBF_FUNC_next = 32UL;
        }
        break;
      case 172:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 154UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 228:
        i++;
        _1_OBF_FUNC_next = 11UL;
        break;
      case 226:
        j___2++;
        _1_OBF_FUNC_next = 189UL;
        break;
      case 199:
        __RANDVAR__15775215465222440431__ = 1;
        _1_OBF_FUNC_next = 225UL;
        break;
      case 264:
        j___1++;
        _1_OBF_FUNC_next = 172UL;
        break;
      case 269:
        __RANDVAR__15775215465222440431__ = 0;
        _1_OBF_FUNC_next = 225UL;
        break;
      case 295:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 69UL;
        }
        break;
      case 117:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 232UL;
        break;
      case 208:
        temp = *(a + i);
        _1_OBF_FUNC_next = 113UL;
        break;
      case 150:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 112UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 187:
        j++;
        _1_OBF_FUNC_next = 61UL;
        break;
      case 161:
        temp = *(a + i);
        _1_OBF_FUNC_next = 182UL;
        break;
      case 142:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 129UL;
        break;
      case 144:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 67UL;
        break;
      case 137:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 170UL;
        } else {
          _1_OBF_FUNC_next = 40UL;
        }
        break;
      case 262:;
        if (__RANDVAR__52265458048924869110__ == 0) {
          _1_OBF_FUNC_next = 12UL;
        } else {
          _1_OBF_FUNC_next = 96UL;
        }
        break;
      case 27:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 5UL;
        } else {
          _1_OBF_FUNC_next = 84UL;
        }
        break;
      case 243:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 140UL;
        } else {
          _1_OBF_FUNC_next = 264UL;
        }
        break;
      case 157:
        __RANDVAR__26228579571138011181__ = 1;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 289:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 131UL;
        } else {
          _1_OBF_FUNC_next = 189UL;
        }
        break;
      case 212:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 169UL;
        break;
      case 319:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 235UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 87:
        temp = *(a + i);
        _1_OBF_FUNC_next = 192UL;
        break;
      case 84:
        j___4++;
        _1_OBF_FUNC_next = 106UL;
        break;
      case 183:
        temp = *(a + i);
        _1_OBF_FUNC_next = 175UL;
        break;
      case 171:
        j___0++;
        _1_OBF_FUNC_next = 311UL;
        break;
      case 34:;
        if (i < n) {
          _1_OBF_FUNC_next = 120UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 274:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 238UL;
        } else {
          _1_OBF_FUNC_next = 185UL;
        }
        break;
      case 241:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 40UL;
        break;
      case 169:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 162UL;
        break;
      case 281:
        __RANDVAR__91500438964866598333__ = 0;
        _1_OBF_FUNC_next = 245UL;
        break;
      case 127:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 108UL;
        break;
      case 317:
        temp = *(a + i);
        _1_OBF_FUNC_next = 164UL;
        break;
      case 22:
        j___1++;
        _1_OBF_FUNC_next = 48UL;
        break;
      case 215:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 87UL;
        } else {
          _1_OBF_FUNC_next = 13UL;
        }
        break;
      case 222:;
        if (j < n) {
          _1_OBF_FUNC_next = 165UL;
        } else {
          _1_OBF_FUNC_next = 177UL;
        }
        break;
      case 286:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 171UL;
        break;
      case 298:
        i = 0;
        _1_OBF_FUNC_next = 100UL;
        break;
      case 28:
        __RANDVAR__63823334648886528536__ = 1;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 148:;
        if (__RANDVAR__98152455849188263932__ == 0) {
          _1_OBF_FUNC_next = 202UL;
        } else {
          _1_OBF_FUNC_next = 228UL;
        }
        break;
      case 65:
        temp = *(a + i);
        _1_OBF_FUNC_next = 193UL;
        break;
      case 280:
        i++;
        _1_OBF_FUNC_next = 83UL;
        break;
      case 44:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 58UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 5:
        temp = *(a + i);
        _1_OBF_FUNC_next = 320UL;
        break;
      case 120:
        j___3 = i + 1;
        _1_OBF_FUNC_next = 195UL;
        break;
      case 184:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 220UL;
        break;
      case 162:
        j___2++;
        _1_OBF_FUNC_next = 304UL;
        break;
      case 72:
        j++;
        _1_OBF_FUNC_next = 177UL;
        break;
      case 261:;
        if (j < n) {
          _1_OBF_FUNC_next = 173UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 33:
        temp = *(a + i);
        _1_OBF_FUNC_next = 240UL;
        break;
      case 64:
        __RANDVAR__52265458048924869110__ = 1;
        _1_OBF_FUNC_next = 262UL;
        break;
      case 292:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 128UL;
        } else {
          _1_OBF_FUNC_next = 259UL;
        }
        break;
      case 93:;
        if (j < n) {
          _1_OBF_FUNC_next = 2UL;
        } else {
          _1_OBF_FUNC_next = 61UL;
        }
        break;
      case 119:
        j___4 = i + 1;
        _1_OBF_FUNC_next = 210UL;
        break;
      case 175:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 186UL;
        break;
      case 276:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 27UL;
        } else {
          _1_OBF_FUNC_next = 106UL;
        }
        break;
      case 233:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 94UL;
        break;
      case 92:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 291UL;
        } else {
          _1_OBF_FUNC_next = 171UL;
        }
        break;
      case 309:
        temp = *(a + i);
        _1_OBF_FUNC_next = 273UL;
        break;
      case 10:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 305UL;
        } else {
          _1_OBF_FUNC_next = 289UL;
        }
        break;
      case 0:
        temp = *(a + i);
        _1_OBF_FUNC_next = 279UL;
        break;
      case 224:
        temp = *(a + i);
        _1_OBF_FUNC_next = 77UL;
        break;
      case 136:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 315UL;
        } else {
          _1_OBF_FUNC_next = 149UL;
        }
        break;
      case 254:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 183UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 153:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 250UL;
        }
        break;
      case 39:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 13UL;
        break;
      case 7:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 265UL;
        break;
      case 88:;
        if (i < n) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 294UL;
        }
        break;
      case 174:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 299UL;
        } else {
          _1_OBF_FUNC_next = 239UL;
        }
        break;
      case 126:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 137UL;
        } else {
          _1_OBF_FUNC_next = 276UL;
        }
        break;
      case 179:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 190UL;
        break;
      case 20:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 277UL;
        break;
      case 315:
        temp = *(a + i);
        _1_OBF_FUNC_next = 200UL;
        break;
      case 294:;
        if (i < n) {
          _1_OBF_FUNC_next = 63UL;
        } else {
          _1_OBF_FUNC_next = 314UL;
        }
        break;
      case 129:
        j___4++;
        _1_OBF_FUNC_next = 150UL;
        break;
      case 108:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 226UL;
        break;
      case 166:
        j___2++;
        _1_OBF_FUNC_next = 289UL;
        break;
      case 130:
        temp = *(a + i);
        _1_OBF_FUNC_next = 127UL;
        break;
      case 310:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 267UL;
        break;
      case 25:
        printf("\n");
        _1_OBF_FUNC_next = 316UL;
        break;
      case 49:
        j___1++;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 52:
        j++;
        _1_OBF_FUNC_next = 93UL;
        break;
      case 200:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 236UL;
        break;
      case 250:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 197UL;
        } else {
          _1_OBF_FUNC_next = 56UL;
        }
        break;
      case 30:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 288UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 62:
        temp = *(a + i);
        _1_OBF_FUNC_next = 144UL;
        break;
      case 185:
        j___4++;
        _1_OBF_FUNC_next = 312UL;
        break;
      case 284:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 167UL;
        } else {
          _1_OBF_FUNC_next = 204UL;
        }
        break;
      case 106:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 274UL;
        } else {
          _1_OBF_FUNC_next = 312UL;
        }
        break;
      case 206:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 268UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 14:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 266:
        temp = *(a + i);
        _1_OBF_FUNC_next = 91UL;
        break;
      case 277:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 230UL;
        break;
      case 82:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 185UL;
        break;
      case 133:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 89:
        *(a + j___0) = temp;
        _1_OBF_FUNC_next = 300UL;
        break;
      case 291:
        temp = *(a + i);
        _1_OBF_FUNC_next = 211UL;
        break;
      case 56:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 223UL;
        } else {
          _1_OBF_FUNC_next = 311UL;
        }
        break;
      case 79:
        j++;
        _1_OBF_FUNC_next = 222UL;
        break;
      case 217:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 319UL;
        } else {
          _1_OBF_FUNC_next = 85UL;
        }
        break;
      case 270:
        j___2++;
        _1_OBF_FUNC_next = 189UL;
        break;
      case 164:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 89UL;
        break;
      case 31:
        j++;
        _1_OBF_FUNC_next = 61UL;
        break;
      case 12:;
        if (i < n) {
          _1_OBF_FUNC_next = 116UL;
        } else {
          _1_OBF_FUNC_next = 88UL;
        }
        break;
      case 101:;
        if (i < n) {
          _1_OBF_FUNC_next = 191UL;
        } else {
          _1_OBF_FUNC_next = 51UL;
        }
        break;
      case 209:
        j___1++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 69:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 243UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 203:
        __RANDVAR__3255784825063002397__ = 1;
        _1_OBF_FUNC_next = 278UL;
        break;
      case 96:
        printf("After sorting is: ");
        _1_OBF_FUNC_next = 298UL;
        break;
      case 288:
        temp = *(a + i);
        _1_OBF_FUNC_next = 155UL;
        break;
      case 45:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 18UL;
        break;
      case 78:;
        if (*(a + i) > *(a + j___3)) {
          _1_OBF_FUNC_next = 114UL;
        } else {
          _1_OBF_FUNC_next = 227UL;
        }
        break;
      case 118:
        temp = *(a + i);
        _1_OBF_FUNC_next = 306UL;
        break;
      case 303:
        temp = *(a + i);
        _1_OBF_FUNC_next = 163UL;
        break;
      case 81:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 188UL;
        } else {
          _1_OBF_FUNC_next = 199UL;
        }
        break;
      case 128:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 237UL;
        }
        break;
      case 236:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 149UL;
        break;
      case 23:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 75UL;
        break;
      case 285:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 14UL;
        break;
      case 273:
        *(a + i) = *(a + j___0);
        _1_OBF_FUNC_next = 310UL;
        break;
      case 24:
        j___3++;
        _1_OBF_FUNC_next = 85UL;
        break;
      case 94:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 264UL;
        break;
      case 109:
        temp = *(a + i);
        _1_OBF_FUNC_next = 212UL;
        break;
      case 190:
        j___3++;
        _1_OBF_FUNC_next = 217UL;
        break;
      case 167:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 168UL;
        } else {
          _1_OBF_FUNC_next = 217UL;
        }
        break;
      case 76:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 6UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 197:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 317UL;
        } else {
          _1_OBF_FUNC_next = 300UL;
        }
        break;
      case 245:;
        if (__RANDVAR__91500438964866598333__ == 0) {
          _1_OBF_FUNC_next = 272UL;
        } else {
          _1_OBF_FUNC_next = 158UL;
        }
        break;
      case 57:
        j___1++;
        _1_OBF_FUNC_next = 69UL;
        break;
      case 257:
        temp = *(a + i);
        _1_OBF_FUNC_next = 23UL;
        break;
      case 299:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 309UL;
        } else {
          _1_OBF_FUNC_next = 267UL;
        }
        break;
      case 11:;
        if (i < n) {
          _1_OBF_FUNC_next = 119UL;
        } else {
          _1_OBF_FUNC_next = 314UL;
        }
        break;
      case 202:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 122UL;
        } else {
          _1_OBF_FUNC_next = 196UL;
        }
        break;
      case 13:
        j++;
        _1_OBF_FUNC_next = 261UL;
        break;
      case 220:
        *(a + j___2) = temp;
        _1_OBF_FUNC_next = 270UL;
        break;
      case 51:;
        if (i < n) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 83UL;
        }
        break;
      case 312:;
        if (j___4 < n) {
          _1_OBF_FUNC_next = 126UL;
        } else {
          _1_OBF_FUNC_next = 157UL;
        }
        break;
      case 146:
        j___2++;
        _1_OBF_FUNC_next = 10UL;
        break;
      case 249:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 209UL;
        break;
      case 316:;
        return;
        break;
      case 304:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 283UL;
        } else {
          _1_OBF_FUNC_next = 189UL;
        }
        break;
      case 268:
        temp = *(a + i);
        _1_OBF_FUNC_next = 302UL;
        break;
      case 40:
        j___4++;
        _1_OBF_FUNC_next = 276UL;
        break;
      case 210:
        __RANDVAR__26228579571138011181__ = 0;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 67:
        *(a + j___4) = temp;
        _1_OBF_FUNC_next = 237UL;
        break;
      case 55:
        temp = *(a + i);
        _1_OBF_FUNC_next = 103UL;
        break;
      case 132:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 136UL;
        } else {
          _1_OBF_FUNC_next = 284UL;
        }
        break;
      case 110:;
        if (i < n) {
          _1_OBF_FUNC_next = 159UL;
        } else {
          _1_OBF_FUNC_next = 28UL;
        }
        break;
      case 193:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 260UL;
        break;
      case 165:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 176UL;
        } else {
          _1_OBF_FUNC_next = 72UL;
        }
        break;
      case 196:;
        if (j___3 < n) {
          _1_OBF_FUNC_next = 206UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 223:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 15UL;
        } else {
          _1_OBF_FUNC_next = 218UL;
        }
        break;
      case 314:;
        if (i < n) {
          _1_OBF_FUNC_next = 231UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 6:
        temp = *(a + i);
        _1_OBF_FUNC_next = 213UL;
        break;
      case 155:
        *(a + i) = *(a + j___2);
        _1_OBF_FUNC_next = 104UL;
        break;
      case 308:
        i++;
        _1_OBF_FUNC_next = 95UL;
        break;
      case 116:
        j = i + 1;
        _1_OBF_FUNC_next = 281UL;
        break;
      case 300:
        j___0++;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 154:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 257UL;
        } else {
          _1_OBF_FUNC_next = 46UL;
        }
        break;
      case 151:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 30UL;
        } else {
          _1_OBF_FUNC_next = 10UL;
        }
        break;
      case 38:
        __RANDVAR__68736589903881212520__ = 1;
        _1_OBF_FUNC_next = 29UL;
        break;
      case 61:;
        if (j < n) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 53UL;
        }
        break;
      case 158:
        i++;
        _1_OBF_FUNC_next = 88UL;
        break;
      case 113:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 143UL;
        break;
      case 138:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 82UL;
        break;
      case 256:
        temp = *(a + i);
        _1_OBF_FUNC_next = 184UL;
        break;
      case 278:;
        if (__RANDVAR__3255784825063002397__ == 0) {
          _1_OBF_FUNC_next = 99UL;
        } else {
          _1_OBF_FUNC_next = 258UL;
        }
        break;
      case 58:;
        if (*(a + i) > *(a + j___1)) {
          _1_OBF_FUNC_next = 33UL;
        } else {
          _1_OBF_FUNC_next = 209UL;
        }
        break;
      case 170:
        temp = *(a + i);
        _1_OBF_FUNC_next = 145UL;
        break;
      case 74:
        temp = *(a + i);
        _1_OBF_FUNC_next = 20UL;
        break;
      case 112:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 232UL;
        }
        break;
      case 178:
        i = 0;
        _1_OBF_FUNC_next = 43UL;
        break;
      case 75:
        *(a + j___1) = temp;
        _1_OBF_FUNC_next = 46UL;
        break;
      case 267:
        j___0++;
        _1_OBF_FUNC_next = 239UL;
        break;
      case 48:;
        if (j___1 < n) {
          _1_OBF_FUNC_next = 76UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        break;
      case 139:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 234UL;
        break;
      case 147:
        i++;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 71:
        i++;
        _1_OBF_FUNC_next = 242UL;
        break;
      case 234:
        j___3++;
        _1_OBF_FUNC_next = 132UL;
        break;
      case 173:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 52UL;
        }
        break;
      case 293:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 260:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 52UL;
        break;
      case 53:
        __RANDVAR__91500438964866598333__ = 1;
        _1_OBF_FUNC_next = 245UL;
        break;
      case 240:
        *(a + i) = *(a + j___1);
        _1_OBF_FUNC_next = 249UL;
        break;
      case 191:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 147UL;
        break;
      case 218:
        j___0++;
        _1_OBF_FUNC_next = 311UL;
        break;
      case 311:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 153UL;
        } else {
          _1_OBF_FUNC_next = 38UL;
        }
        break;
      case 47:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 55UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 91:
        *(a + i) = *(a + j);
        _1_OBF_FUNC_next = 121UL;
        break;
      case 282:;
        if (j___0 < n) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 174UL;
        }
        break;
      case 97:
        *(a + j) = temp;
        _1_OBF_FUNC_next = 31UL;
        break;
      case 163:
        *(a + i) = *(a + j___4);
        _1_OBF_FUNC_next = 142UL;
        break;
      case 230:
        j___0++;
        _1_OBF_FUNC_next = 174UL;
        break;
      case 99:;
        if (j___2 < n) {
          _1_OBF_FUNC_next = 17UL;
        } else {
          _1_OBF_FUNC_next = 318UL;
        }
        break;
      case 114:
        temp = *(a + i);
        _1_OBF_FUNC_next = 4UL;
        break;
      case 37:
        i++;
        _1_OBF_FUNC_next = 294UL;
        break;
      case 265:
        i++;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 248:
        j___3++;
        _1_OBF_FUNC_next = 196UL;
        break;
      case 41:;
        if (__RANDVAR__63823334648886528536__ == 0) {
          _1_OBF_FUNC_next = 101UL;
        } else {
          _1_OBF_FUNC_next = 25UL;
        }
        break;
      case 283:;
        if (*(a + i) > *(a + j___2)) {
          _1_OBF_FUNC_next = 256UL;
        } else {
          _1_OBF_FUNC_next = 270UL;
        }
        break;
      case 95:;
        if (i < n) {
          _1_OBF_FUNC_next = 253UL;
        } else {
          _1_OBF_FUNC_next = 242UL;
        }
        break;
      case 149:
        j___3++;
        _1_OBF_FUNC_next = 284UL;
        break;
      case 198:
        *(a + j___3) = temp;
        _1_OBF_FUNC_next = 248UL;
        break;
      case 232:
        j___4++;
        _1_OBF_FUNC_next = 312UL;
        break;
      case 115:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 280UL;
        break;
      case 42:;
        if (*(a + i) > *(a + j___4)) {
          _1_OBF_FUNC_next = 303UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 253:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 71UL;
        break;
      case 287:
        i++;
        _1_OBF_FUNC_next = 314UL;
        break;
      case 229:;
        if (*(a + i) > *(a + j___0)) {
          _1_OBF_FUNC_next = 205UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 46:
        j___1++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 177:;
        if (j < n) {
          _1_OBF_FUNC_next = 47UL;
        } else {
          _1_OBF_FUNC_next = 61UL;
        }
        break;
      case 66:;
        if (j < n) {
          _1_OBF_FUNC_next = 254UL;
        } else {
          _1_OBF_FUNC_next = 222UL;
        }
        break;
      case 83:;
        if (i < n) {
          _1_OBF_FUNC_next = 152UL;
        } else {
          _1_OBF_FUNC_next = 110UL;
        }
        break;
      case 238:
        temp = *(a + i);
        _1_OBF_FUNC_next = 138UL;
        break;
      case 29:;
        if (__RANDVAR__68736589903881212520__ == 0) {
          _1_OBF_FUNC_next = 282UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 43:
        __RANDVAR__52265458048924869110__ = 0;
        _1_OBF_FUNC_next = 262UL;
        break;
      case 86:
        *(a + i) = *(a + j___3);
        _1_OBF_FUNC_next = 133UL;
        break;
      case 2:;
        if (*(a + i) > *(a + j)) {
          _1_OBF_FUNC_next = 266UL;
        } else {
          _1_OBF_FUNC_next = 187UL;
        }
        break;
      }
    }
  }
}
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
    a[0] = 10;
    a[1] = 9;
    a[2] = 7;
    a[3] = 101;
    a[4] = 23;
    a[5] = 44;
    a[6] = 12;
    a[7] = 78;
    a[8] = 34;
    a[9] = 23;
    OBF_FUNC(a, 10);
    return (0);
  }
}
// variants: loop-unroll, block-fission
// expanded variants: loop-unroll, block-fission:default
