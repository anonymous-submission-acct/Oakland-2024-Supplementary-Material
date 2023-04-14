typedef void *__builtin_va_list;
struct __anonstruct___fsid_t_109580352;
union pthread_attr_t;
struct __pthread_cond_s;
struct __anonstruct___wseq32_961093918;
struct drand48_data;
struct timespec;
struct __anonstruct_ldiv_t_790849867;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_mutex_s;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_mutex_t_335460617;
struct timeval;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_internal_list;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_rwlock_t_656928968;
struct __pthread_rwlock_arch_t;
union __anonunion____missing_field_name_837858127;
union __anonunion____missing_field_name_418050178;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_internal_slist;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct___sigset_t_973126068;
struct random_data;
union __anonunion_pthread_mutexattr_t_488594144;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
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
typedef long __off64_t;
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
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
extern int(strlen)();
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
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(char *str, unsigned int len);
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
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
unsigned int OBF_FUNC(char *str, unsigned int len) {
  unsigned int hash;
  unsigned int x;
  unsigned int i;
  int __RANDVAR__89834882284470555227__;
  int __RANDVAR__54531357663109365035__;
  int __RANDVAR__89842877436650187377__;
  int __RANDVAR__76213830140551252547__;
  int __RANDVAR__46526641394458149770__;
  int __RANDVAR__15161953246789069116__;
  int __RANDVAR__81368048788769820726__;
  int __RANDVAR__19259446640812071193__;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 992UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 589:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 466UL; }
        break;
      case 1087:;
        if (i < len) {
          { _1_OBF_FUNC_next = 422UL; }
        } else {
          { _1_OBF_FUNC_next = 699UL; }
        }
        break;
      case 85:
        hash &= ~x;
        { _1_OBF_FUNC_next = 87UL; }
        break;
      case 449:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 203UL; }
        break;
      case 765:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 306:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 891UL; }
        } else {
          { _1_OBF_FUNC_next = 96UL; }
        }
        break;
      case 880:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 920UL; }
        } else {
          { _1_OBF_FUNC_next = 612UL; }
        }
        break;
      case 67:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 762UL; }
        break;
      case 963:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 119UL; }
        break;
      case 195:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 163UL; }
        break;
      case 1018:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 804UL; }
        } else {
          { _1_OBF_FUNC_next = 418UL; }
        }
        break;
      case 1091:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 544UL; }
        break;
      case 410:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 135UL; }
        } else {
          { _1_OBF_FUNC_next = 1103UL; }
        }
        break;
      case 398:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 591UL; }
        break;
      case 947:;
        if (i < len) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 459UL; }
        }
        break;
      case 1008:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 470UL; }
        } else {
          { _1_OBF_FUNC_next = 906UL; }
        }
        break;
      case 110:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 168UL; }
        break;
      case 187:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 223UL; }
        break;
      case 903:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 952UL; }
        } else {
          { _1_OBF_FUNC_next = 788UL; }
        }
        break;
      case 922:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 931UL; }
        } else {
          { _1_OBF_FUNC_next = 811UL; }
        }
        break;
      case 44:
        i++;
        { _1_OBF_FUNC_next = 141UL; }
        break;
      case 254:
        i++;
        { _1_OBF_FUNC_next = 260UL; }
        break;
      case 285:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 435UL; }
        break;
      case 838:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 627UL; }
        break;
      case 323:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1068UL; }
        break;
      case 255:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1051UL; }
        break;
      case 571:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 963UL; }
        break;
      case 576:
        i++;
        { _1_OBF_FUNC_next = 1080UL; }
        break;
      case 431:;
        if (i < len) {
          { _1_OBF_FUNC_next = 956UL; }
        } else {
          { _1_OBF_FUNC_next = 191UL; }
        }
        break;
      case 655:;
        if (i < len) {
          { _1_OBF_FUNC_next = 156UL; }
        } else {
          { _1_OBF_FUNC_next = 670UL; }
        }
        break;
      case 1095:;
        if (i < len) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 695UL; }
        }
        break;
      case 869:;
        if (__RANDVAR__46526641394458149770__ == 0) {
          { _1_OBF_FUNC_next = 1098UL; }
        } else {
          { _1_OBF_FUNC_next = 733UL; }
        }
        break;
      case 941:;
        if (i < len) {
          { _1_OBF_FUNC_next = 264UL; }
        } else {
          { _1_OBF_FUNC_next = 294UL; }
        }
        break;
      case 1031:;
        if (i < len) {
          { _1_OBF_FUNC_next = 550UL; }
        } else {
          { _1_OBF_FUNC_next = 659UL; }
        }
        break;
      case 596:;
        if (i < len) {
          { _1_OBF_FUNC_next = 526UL; }
        } else {
          { _1_OBF_FUNC_next = 188UL; }
        }
        break;
      case 402:
        i++;
        { _1_OBF_FUNC_next = 439UL; }
        break;
      case 275:;
        if (i < len) {
          { _1_OBF_FUNC_next = 16UL; }
        } else {
          { _1_OBF_FUNC_next = 676UL; }
        }
        break;
      case 45:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 452UL; }
        break;
      case 272:
        i++;
        { _1_OBF_FUNC_next = 268UL; }
        break;
      case 873:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 964UL; }
        } else {
          { _1_OBF_FUNC_next = 11UL; }
        }
        break;
      case 152:;
        if (i < len) {
          { _1_OBF_FUNC_next = 872UL; }
        } else {
          { _1_OBF_FUNC_next = 317UL; }
        }
        break;
      case 421:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 401UL; }
        break;
      case 292:
        hash &= ~x;
        { _1_OBF_FUNC_next = 396UL; }
        break;
      case 956:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 789UL; }
        break;
      case 928:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 968UL; }
        } else {
          { _1_OBF_FUNC_next = 230UL; }
        }
        break;
      case 699:;
        if (i < len) {
          { _1_OBF_FUNC_next = 28UL; }
        } else {
          { _1_OBF_FUNC_next = 717UL; }
        }
        break;
      case 390:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 433UL; }
        break;
      case 1037:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 224UL; }
        break;
      case 926:;
        if (i < len) {
          { _1_OBF_FUNC_next = 290UL; }
        } else {
          { _1_OBF_FUNC_next = 954UL; }
        }
        break;
      case 1057:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 866:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 598UL; }
        break;
      case 38:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 895UL; }
        break;
      case 940:
        i++;
        { _1_OBF_FUNC_next = 1034UL; }
        break;
      case 844:
        i++;
        { _1_OBF_FUNC_next = 1095UL; }
        break;
      case 280:
        str++;
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 37:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 424UL; }
        break;
      case 21:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 332UL; }
        } else {
          { _1_OBF_FUNC_next = 161UL; }
        }
        break;
      case 635:
        hash &= ~x;
        { _1_OBF_FUNC_next = 408UL; }
        break;
      case 504:;
        if (i < len) {
          { _1_OBF_FUNC_next = 74UL; }
        } else {
          { _1_OBF_FUNC_next = 1046UL; }
        }
        break;
      case 872:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 1052:
        str++;
        { _1_OBF_FUNC_next = 980UL; }
        break;
      case 153:
        i++;
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 664:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 128UL; }
        break;
      case 687:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 57UL; }
        } else {
          { _1_OBF_FUNC_next = 103UL; }
        }
        break;
      case 161:
        hash &= ~x;
        { _1_OBF_FUNC_next = 327UL; }
        break;
      case 681:;
        if (i < len) {
          { _1_OBF_FUNC_next = 208UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 403:
        __RANDVAR__54531357663109365035__ = 1;
        { _1_OBF_FUNC_next = 167UL; }
        break;
      case 83:
        str++;
        { _1_OBF_FUNC_next = 720UL; }
        break;
      case 425:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 724:
        i++;
        { _1_OBF_FUNC_next = 498UL; }
        break;
      case 737:;
        if (i < len) {
          { _1_OBF_FUNC_next = 710UL; }
        } else {
          { _1_OBF_FUNC_next = 286UL; }
        }
        break;
      case 198:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 791:
        str++;
        { _1_OBF_FUNC_next = 734UL; }
        break;
      case 710:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 893UL; }
        break;
      case 397:
        i++;
        { _1_OBF_FUNC_next = 1093UL; }
        break;
      case 1073:
        i++;
        { _1_OBF_FUNC_next = 941UL; }
        break;
      case 965:
        i++;
        { _1_OBF_FUNC_next = 670UL; }
        break;
      case 348:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 390UL; }
        } else {
          { _1_OBF_FUNC_next = 433UL; }
        }
        break;
      case 510:
        hash &= ~x;
        { _1_OBF_FUNC_next = 464UL; }
        break;
      case 208:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 732UL; }
        break;
      case 338:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1028UL; }
        break;
      case 560:
        str++;
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 704:
        str++;
        { _1_OBF_FUNC_next = 417UL; }
        break;
      case 992:
        hash = 0U;
        { _1_OBF_FUNC_next = 460UL; }
        break;
      case 207:
        str++;
        { _1_OBF_FUNC_next = 605UL; }
        break;
      case 457:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 125UL; }
        } else {
          { _1_OBF_FUNC_next = 493UL; }
        }
        break;
      case 383:;
        if (i < len) {
          { _1_OBF_FUNC_next = 863UL; }
        } else {
          { _1_OBF_FUNC_next = 596UL; }
        }
        break;
      case 517:
        str++;
        { _1_OBF_FUNC_next = 471UL; }
        break;
      case 336:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 738UL; }
        break;
      case 993:
        str++;
        { _1_OBF_FUNC_next = 813UL; }
        break;
      case 2:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 828UL; }
        break;
      case 19:
        hash &= ~x;
        { _1_OBF_FUNC_next = 794UL; }
        break;
      case 714:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1045UL; }
        break;
      case 473:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 928UL; }
        break;
      case 225:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 884UL; }
        break;
      case 48:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 505UL; }
        break;
      case 1064:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1020UL; }
        break;
      case 3:;
        if (i < len) {
          { _1_OBF_FUNC_next = 707UL; }
        } else {
          { _1_OBF_FUNC_next = 152UL; }
        }
        break;
      case 1092:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1033UL; }
        break;
      case 343:
        i++;
        { _1_OBF_FUNC_next = 621UL; }
        break;
      case 860:;
        if (i < len) {
          { _1_OBF_FUNC_next = 351UL; }
        } else {
          { _1_OBF_FUNC_next = 279UL; }
        }
        break;
      case 686:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 293UL; }
        break;
      case 789:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 281UL; }
        break;
      case 210:
        str++;
        { _1_OBF_FUNC_next = 745UL; }
        break;
      case 93:
        str++;
        { _1_OBF_FUNC_next = 95UL; }
        break;
      case 770:;
        if (i < len) {
          { _1_OBF_FUNC_next = 854UL; }
        } else {
          { _1_OBF_FUNC_next = 188UL; }
        }
        break;
      case 779:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 991UL; }
        break;
      case 1024:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 377UL; }
        } else {
          { _1_OBF_FUNC_next = 706UL; }
        }
        break;
      case 662:
        i++;
        { _1_OBF_FUNC_next = 1017UL; }
        break;
      case 598:
        hash &= ~x;
        { _1_OBF_FUNC_next = 572UL; }
        break;
      case 1027:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 951UL; }
        break;
      case 1001:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 542UL; }
        break;
      case 98:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 412UL; }
        break;
      case 378:
        hash &= ~x;
        { _1_OBF_FUNC_next = 261UL; }
        break;
      case 689:
        __RANDVAR__19259446640812071193__ = 1;
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 159:
        i++;
        { _1_OBF_FUNC_next = 385UL; }
        break;
      case 841:
        str++;
        { _1_OBF_FUNC_next = 144UL; }
        break;
      case 619:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 715UL; }
        break;
      case 660:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1064UL; }
        break;
      case 824:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 746UL; }
        break;
      case 995:
        hash &= ~x;
        { _1_OBF_FUNC_next = 451UL; }
        break;
      case 951:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 693UL; }
        } else {
          { _1_OBF_FUNC_next = 1099UL; }
        }
        break;
      case 627:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1102UL; }
        } else {
          { _1_OBF_FUNC_next = 66UL; }
        }
        break;
      case 100:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 175:
        str++;
        { _1_OBF_FUNC_next = 427UL; }
        break;
      case 645:;
        if (i < len) {
          { _1_OBF_FUNC_next = 820UL; }
        } else {
          { _1_OBF_FUNC_next = 1097UL; }
        }
        break;
      case 392:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 636UL; }
        break;
      case 625:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1113UL; }
        break;
      case 1009:
        hash &= ~x;
        { _1_OBF_FUNC_next = 175UL; }
        break;
      case 983:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 165UL; }
        } else {
          { _1_OBF_FUNC_next = 338UL; }
        }
        break;
      case 721:
        i++;
        { _1_OBF_FUNC_next = 494UL; }
        break;
      case 806:
        hash &= ~x;
        { _1_OBF_FUNC_next = 438UL; }
        break;
      case 1066:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1077UL; }
        break;
      case 31:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 527UL; }
        break;
      case 276:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 319:
        str++;
        { _1_OBF_FUNC_next = 254UL; }
        break;
      case 946:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 155:;
        if (i < len) {
          { _1_OBF_FUNC_next = 220UL; }
        } else {
          { _1_OBF_FUNC_next = 947UL; }
        }
        break;
      case 906:
        hash &= ~x;
        { _1_OBF_FUNC_next = 713UL; }
        break;
      case 471:
        i++;
        { _1_OBF_FUNC_next = 663UL; }
        break;
      case 164:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 457UL; }
        break;
      case 798:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 461UL; }
        break;
      case 266:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 545UL; }
        break;
      case 244:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 520UL; }
        break;
      case 191:
        __RANDVAR__81368048788769820726__ = 0;
        { _1_OBF_FUNC_next = 77UL; }
        break;
      case 206:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 110UL; }
        break;
      case 809:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 154UL; }
        break;
      case 558:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 648UL; }
        } else {
          { _1_OBF_FUNC_next = 783UL; }
        }
        break;
      case 904:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 309UL; }
        } else {
          { _1_OBF_FUNC_next = 592UL; }
        }
        break;
      case 489:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 635UL; }
        break;
      case 957:
        hash &= ~x;
        { _1_OBF_FUNC_next = 117UL; }
        break;
      case 878:
        hash &= ~x;
        { _1_OBF_FUNC_next = 569UL; }
        break;
      case 459:;
        if (i < len) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 366UL; }
        }
        break;
      case 281:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1002UL; }
        } else {
          { _1_OBF_FUNC_next = 136UL; }
        }
        break;
      case 158:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 437UL; }
        break;
      case 241:
        str++;
        { _1_OBF_FUNC_next = 116UL; }
        break;
      case 455:
        str++;
        { _1_OBF_FUNC_next = 331UL; }
        break;
      case 33:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 570UL; }
        break;
      case 150:;
        if (i < len) {
          { _1_OBF_FUNC_next = 701UL; }
        } else {
          { _1_OBF_FUNC_next = 795UL; }
        }
        break;
      case 807:
        str++;
        { _1_OBF_FUNC_next = 729UL; }
        break;
      case 1058:
        str++;
        { _1_OBF_FUNC_next = 882UL; }
        break;
      case 535:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 808UL; }
        } else {
          { _1_OBF_FUNC_next = 126UL; }
        }
        break;
      case 675:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 476UL; }
        break;
      case 140:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 838UL; }
        break;
      case 446:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 913UL; }
        break;
      case 492:;
        if (i < len) {
          { _1_OBF_FUNC_next = 265UL; }
        } else {
          { _1_OBF_FUNC_next = 774UL; }
        }
        break;
      case 0:
        i++;
        { _1_OBF_FUNC_next = 444UL; }
        break;
      case 95:
        i++;
        { _1_OBF_FUNC_next = 356UL; }
        break;
      case 601:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 328UL; }
        } else {
          { _1_OBF_FUNC_next = 403UL; }
        }
        break;
      case 546:
        hash &= ~x;
        { _1_OBF_FUNC_next = 902UL; }
        break;
      case 1026:
        i++;
        { _1_OBF_FUNC_next = 528UL; }
        break;
      case 615:;
        if (i < len) {
          { _1_OBF_FUNC_next = 773UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 802:
        str++;
        { _1_OBF_FUNC_next = 1026UL; }
        break;
      case 50:
        hash &= ~x;
        { _1_OBF_FUNC_next = 345UL; }
        break;
      case 447:;
        if (i < len) {
          { _1_OBF_FUNC_next = 502UL; }
        } else {
          { _1_OBF_FUNC_next = 356UL; }
        }
        break;
      case 663:;
        if (i < len) {
          { _1_OBF_FUNC_next = 946UL; }
        } else {
          { _1_OBF_FUNC_next = 308UL; }
        }
        break;
      case 1039:;
        if (i < len) {
          { _1_OBF_FUNC_next = 61UL; }
        } else {
          { _1_OBF_FUNC_next = 499UL; }
        }
        break;
      case 436:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1023UL; }
        } else {
          { _1_OBF_FUNC_next = 284UL; }
        }
        break;
      case 127:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 858UL; }
        break;
      case 470:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 906UL; }
        break;
      case 814:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1035UL; }
        break;
      case 267:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 666UL; }
        break;
      case 1065:
        i++;
        { _1_OBF_FUNC_next = 540UL; }
        break;
      case 356:
        __RANDVAR__15161953246789069116__ = 0;
        { _1_OBF_FUNC_next = 842UL; }
        break;
      case 905:
        hash &= ~x;
        { _1_OBF_FUNC_next = 667UL; }
        break;
      case 743:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 364UL; }
        break;
      case 513:;
        if (i < len) {
          { _1_OBF_FUNC_next = 923UL; }
        } else {
          { _1_OBF_FUNC_next = 296UL; }
        }
        break;
      case 939:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 932UL; }
        break;
      case 925:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 752UL; }
        break;
      case 10:
        str++;
        { _1_OBF_FUNC_next = 304UL; }
        break;
      case 803:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 601UL; }
        break;
      case 287:;
        if (i < len) {
          { _1_OBF_FUNC_next = 456UL; }
        } else {
          { _1_OBF_FUNC_next = 631UL; }
        }
        break;
      case 202:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 454UL; }
        break;
      case 294:;
        if (i < len) {
          { _1_OBF_FUNC_next = 518UL; }
        } else {
          { _1_OBF_FUNC_next = 188UL; }
        }
        break;
      case 295:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1111UL; }
        break;
      case 523:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 509UL; }
        break;
      case 1015:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 630UL; }
        } else {
          { _1_OBF_FUNC_next = 255UL; }
        }
        break;
      case 652:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 685UL; }
        break;
      case 1070:;
        if (i < len) {
          { _1_OBF_FUNC_next = 35UL; }
        } else {
          { _1_OBF_FUNC_next = 770UL; }
        }
        break;
      case 184:
        str++;
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 297:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 722UL; }
        break;
      case 708:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 756UL; }
        break;
      case 801:
        hash &= ~x;
        { _1_OBF_FUNC_next = 936UL; }
        break;
      case 537:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 443UL; }
        break;
      case 835:;
        if (i < len) {
          { _1_OBF_FUNC_next = 15UL; }
        } else {
          { _1_OBF_FUNC_next = 459UL; }
        }
        break;
      case 745:
        i++;
        { _1_OBF_FUNC_next = 279UL; }
        break;
      case 524:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 552UL; }
        break;
      case 1089:
        i++;
        { _1_OBF_FUNC_next = 659UL; }
        break;
      case 243:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1027UL; }
        break;
      case 223:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 139UL; }
        break;
      case 1079:
        hash &= ~x;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 566:
        i++;
        { _1_OBF_FUNC_next = 491UL; }
        break;
      case 86:;
        if (i < len) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 318UL; }
        }
        break;
      case 1:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 263UL; }
        break;
      case 434:
        str++;
        { _1_OBF_FUNC_next = 458UL; }
        break;
      case 178:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 880UL; }
        break;
      case 1103:
        hash &= ~x;
        { _1_OBF_FUNC_next = 841UL; }
        break;
      case 569:
        str++;
        { _1_OBF_FUNC_next = 662UL; }
        break;
      case 514:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 330UL; }
        }
        break;
      case 209:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 861UL; }
        break;
      case 476:
        hash &= ~x;
        { _1_OBF_FUNC_next = 182UL; }
        break;
      case 868:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 817UL; }
        break;
      case 330:
        hash &= ~x;
        { _1_OBF_FUNC_next = 916UL; }
        break;
      case 967:;
        if (i < len) {
          { _1_OBF_FUNC_next = 323UL; }
        } else {
          { _1_OBF_FUNC_next = 494UL; }
        }
        break;
      case 971:
        i++;
        { _1_OBF_FUNC_next = 294UL; }
        break;
      case 585:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1085UL; }
        break;
      case 1093:;
        if (i < len) {
          { _1_OBF_FUNC_next = 609UL; }
        } else {
          { _1_OBF_FUNC_next = 60UL; }
        }
        break;
      case 609:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 525UL; }
        break;
      case 680:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1107UL; }
        break;
      case 639:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1100UL; }
        break;
      case 304:
        i++;
        { _1_OBF_FUNC_next = 837UL; }
        break;
      case 39:
        hash &= ~x;
        { _1_OBF_FUNC_next = 796UL; }
        break;
      case 972:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 149:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 218UL; }
        break;
      case 962:
        i++;
        { _1_OBF_FUNC_next = 191UL; }
        break;
      case 540:;
        if (i < len) {
          { _1_OBF_FUNC_next = 283UL; }
        } else {
          { _1_OBF_FUNC_next = 1030UL; }
        }
        break;
      case 975:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 149UL; }
        break;
      case 1086:
        str++;
        { _1_OBF_FUNC_next = 827UL; }
        break;
      case 407:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 237UL; }
        break;
      case 578:;
        if (i < len) {
          { _1_OBF_FUNC_next = 780UL; }
        } else {
          { _1_OBF_FUNC_next = 604UL; }
        }
        break;
      case 196:
        hash &= ~x;
        { _1_OBF_FUNC_next = 874UL; }
        break;
      case 478:;
        if (i < len) {
          { _1_OBF_FUNC_next = 767UL; }
        } else {
          { _1_OBF_FUNC_next = 432UL; }
        }
        break;
      case 719:
        str++;
        { _1_OBF_FUNC_next = 205UL; }
        break;
      case 959:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 503:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 486UL; }
        } else {
          { _1_OBF_FUNC_next = 259UL; }
        }
        break;
      case 804:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 418UL; }
        break;
      case 896:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 641UL; }
        } else {
          { _1_OBF_FUNC_next = 593UL; }
        }
        break;
      case 240:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 558UL; }
        break;
      case 536:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1060UL; }
        break;
      case 870:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 257UL; }
        break;
      case 1116:
        hash &= ~x;
        { _1_OBF_FUNC_next = 320UL; }
        break;
      case 1032:
        str++;
        { _1_OBF_FUNC_next = 950UL; }
        break;
      case 1107:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 656UL; }
        } else {
          { _1_OBF_FUNC_next = 611UL; }
        }
        break;
      case 830:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 181UL; }
        break;
      case 694:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 376:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 419UL; }
        break;
      case 692:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 249UL; }
        break;
      case 557:
        hash &= ~x;
        { _1_OBF_FUNC_next = 512UL; }
        break;
      case 235:
        hash &= ~x;
        { _1_OBF_FUNC_next = 226UL; }
        break;
      case 1110:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 179UL; }
        break;
      case 1097:;
        if (i < len) {
          { _1_OBF_FUNC_next = 997UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 211:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 73UL; }
        } else {
          { _1_OBF_FUNC_next = 995UL; }
        }
        break;
      case 890:;
        if (i < len) {
          { _1_OBF_FUNC_next = 640UL; }
        } else {
          { _1_OBF_FUNC_next = 366UL; }
        }
        break;
      case 145:
        i++;
        { _1_OBF_FUNC_next = 1050UL; }
        break;
      case 167:;
        if (__RANDVAR__54531357663109365035__ == 0) {
          { _1_OBF_FUNC_next = 409UL; }
        } else {
          { _1_OBF_FUNC_next = 303UL; }
        }
        break;
      case 938:;
        if (i < len) {
          { _1_OBF_FUNC_next = 989UL; }
        } else {
          { _1_OBF_FUNC_next = 1031UL; }
        }
        break;
      case 106:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 313UL; }
        break;
      case 157:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 54:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 671UL; }
        break;
      case 432:;
        if (i < len) {
          { _1_OBF_FUNC_next = 679UL; }
        } else {
          { _1_OBF_FUNC_next = 14UL; }
        }
        break;
      case 810:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 620UL; }
        break;
      case 1072:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 391UL; }
        break;
      case 1038:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 195UL; }
        break;
      case 166:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 340UL; }
        } else {
          { _1_OBF_FUNC_next = 1076UL; }
        }
        break;
      case 586:;
        if (i < len) {
          { _1_OBF_FUNC_next = 376UL; }
        } else {
          { _1_OBF_FUNC_next = 1031UL; }
        }
        break;
      case 696:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 871UL; }
        } else {
          { _1_OBF_FUNC_next = 650UL; }
        }
        break;
      case 115:;
        if (i < len) {
          { _1_OBF_FUNC_next = 258UL; }
        } else {
          { _1_OBF_FUNC_next = 296UL; }
        }
        break;
      case 610:
        hash &= ~x;
        { _1_OBF_FUNC_next = 993UL; }
        break;
      case 833:;
        if (i < len) {
          { _1_OBF_FUNC_next = 369UL; }
        } else {
          { _1_OBF_FUNC_next = 967UL; }
        }
        break;
      case 1075:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 497UL; }
        break;
      case 282:
        str++;
        { _1_OBF_FUNC_next = 556UL; }
        break;
      case 250:
        str++;
        { _1_OBF_FUNC_next = 918UL; }
        break;
      case 927:;
        if (i < len) {
          { _1_OBF_FUNC_next = 655UL; }
        } else {
          { _1_OBF_FUNC_next = 548UL; }
        }
        break;
      case 396:
        str++;
        { _1_OBF_FUNC_next = 728UL; }
        break;
      case 842:;
        if (__RANDVAR__15161953246789069116__ == 0) {
          { _1_OBF_FUNC_next = 190UL; }
        } else {
          { _1_OBF_FUNC_next = 851UL; }
        }
        break;
      case 631:
        __RANDVAR__81368048788769820726__ = 1;
        { _1_OBF_FUNC_next = 77UL; }
        break;
      case 395:
        hash &= ~x;
        { _1_OBF_FUNC_next = 227UL; }
        break;
      case 646:;
        if (i < len) {
          { _1_OBF_FUNC_next = 335UL; }
        } else {
          { _1_OBF_FUNC_next = 615UL; }
        }
        break;
      case 924:
        str++;
        { _1_OBF_FUNC_next = 1021UL; }
        break;
      case 633:
        i++;
        { _1_OBF_FUNC_next = 296UL; }
        break;
      case 199:
        hash &= ~x;
        { _1_OBF_FUNC_next = 314UL; }
        break;
      case 11:
        hash &= ~x;
        { _1_OBF_FUNC_next = 751UL; }
        break;
      case 448:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 341UL; }
        } else {
          { _1_OBF_FUNC_next = 121UL; }
        }
        break;
      case 130:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1052UL; }
        break;
      case 1042:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 899UL; }
        break;
      case 126:
        hash &= ~x;
        { _1_OBF_FUNC_next = 560UL; }
        break;
      case 1043:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 111UL; }
        break;
      case 626:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 329UL; }
        } else {
          { _1_OBF_FUNC_next = 92UL; }
        }
        break;
      case 260:;
        if (i < len) {
          { _1_OBF_FUNC_next = 127UL; }
        } else {
          { _1_OBF_FUNC_next = 439UL; }
        }
        break;
      case 477:
        i++;
        { _1_OBF_FUNC_next = 1019UL; }
        break;
      case 668:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 939UL; }
        } else {
          { _1_OBF_FUNC_next = 932UL; }
        }
        break;
      case 529:
        i++;
        { _1_OBF_FUNC_next = 676UL; }
        break;
      case 739:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 786UL; }
        break;
      case 942:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 649UL; }
        break;
      case 813:
        i++;
        { _1_OBF_FUNC_next = 373UL; }
        break;
      case 321:
        i++;
        { _1_OBF_FUNC_next = 1031UL; }
        break;
      case 735:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 201UL; }
        break;
      case 413:
        i++;
        { _1_OBF_FUNC_next = 860UL; }
        break;
      case 259:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1006UL; }
        break;
      case 418:
        hash &= ~x;
        { _1_OBF_FUNC_next = 307UL; }
        break;
      case 372:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 246UL; }
        break;
      case 349:;
        if (i < len) {
          { _1_OBF_FUNC_next = 585UL; }
        } else {
          { _1_OBF_FUNC_next = 781UL; }
        }
        break;
      case 850:;
        if (i < len) {
          { _1_OBF_FUNC_next = 743UL; }
        } else {
          { _1_OBF_FUNC_next = 1095UL; }
        }
        break;
      case 593:
        hash &= ~x;
        { _1_OBF_FUNC_next = 822UL; }
        break;
      case 976:;
        if (__RANDVAR__89842877436650187377__ == 0) {
          { _1_OBF_FUNC_next = 938UL; }
        } else {
          { _1_OBF_FUNC_next = 619UL; }
        }
        break;
      case 1090:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 570UL; }
        }
        break;
      case 693:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1099UL; }
        break;
      case 551:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 124UL; }
        break;
      case 600:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 672UL; }
        break;
      case 179:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 285UL; }
        } else {
          { _1_OBF_FUNC_next = 435UL; }
        }
        break;
      case 961:;
        if (i < len) {
          { _1_OBF_FUNC_next = 407UL; }
        } else {
          { _1_OBF_FUNC_next = 51UL; }
        }
        break;
      case 214:;
        if (i < len) {
          { _1_OBF_FUNC_next = 975UL; }
        } else {
          { _1_OBF_FUNC_next = 411UL; }
        }
        break;
      case 590:
        i++;
        { _1_OBF_FUNC_next = 389UL; }
        break;
      case 289:;
        if (i < len) {
          { _1_OBF_FUNC_next = 739UL; }
        } else {
          { _1_OBF_FUNC_next = 1019UL; }
        }
        break;
      case 915:
        i++;
        { _1_OBF_FUNC_next = 383UL; }
        break;
      case 89:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 691UL; }
        } else {
          { _1_OBF_FUNC_next = 114UL; }
        }
        break;
      case 522:
        hash &= ~x;
        { _1_OBF_FUNC_next = 807UL; }
        break;
      case 299:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 766UL; }
        break;
      case 665:
        i++;
        { _1_OBF_FUNC_next = 829UL; }
        break;
      case 156:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 973UL; }
        break;
      case 863:;
        if (i < len) {
          { _1_OBF_FUNC_next = 81UL; }
        } else {
          { _1_OBF_FUNC_next = 578UL; }
        }
        break;
      case 932:
        hash &= ~x;
        { _1_OBF_FUNC_next = 747UL; }
        break;
      case 188:;
        if (i < len) {
          { _1_OBF_FUNC_next = 13UL; }
        } else {
          { _1_OBF_FUNC_next = 305UL; }
        }
        break;
      case 406:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 132UL; }
        break;
      case 950:
        i++;
        { _1_OBF_FUNC_next = 60UL; }
        break;
      case 990:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 266UL; }
        } else {
          { _1_OBF_FUNC_next = 545UL; }
        }
        break;
      case 572:
        str++;
        { _1_OBF_FUNC_next = 628UL; }
        break;
      case 30:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 830UL; }
        } else {
          { _1_OBF_FUNC_next = 181UL; }
        }
        break;
      case 424:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 601UL; }
        }
        break;
      case 549:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 352UL; }
        break;
      case 171:
        hash &= ~x;
        { _1_OBF_FUNC_next = 350UL; }
        break;
      case 1050:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1042UL; }
        } else {
          { _1_OBF_FUNC_next = 260UL; }
        }
        break;
      case 634:
        i++;
        { _1_OBF_FUNC_next = 947UL; }
        break;
      case 442:
        i++;
        { _1_OBF_FUNC_next = 380UL; }
        break;
      case 688:
        hash &= ~x;
        { _1_OBF_FUNC_next = 374UL; }
        break;
      case 618:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1088UL; }
        } else {
          { _1_OBF_FUNC_next = 1012UL; }
        }
        break;
      case 66:
        hash &= ~x;
        { _1_OBF_FUNC_next = 91UL; }
        break;
      case 818:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1049UL; }
        } else {
          { _1_OBF_FUNC_next = 1040UL; }
        }
        break;
      case 795:
        __RANDVAR__46526641394458149770__ = 1;
        { _1_OBF_FUNC_next = 869UL; }
        break;
      case 99:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 599UL; }
        } else {
          { _1_OBF_FUNC_next = 354UL; }
        }
        break;
      case 1100:
        str++;
        { _1_OBF_FUNC_next = 359UL; }
        break;
      case 118:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 306UL; }
        break;
      case 452:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 677UL; }
        } else {
          { _1_OBF_FUNC_next = 587UL; }
        }
        break;
      case 414:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1059UL; }
        break;
      case 1010:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 602:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 274UL; }
        break;
      case 14:;
        if (i < len) {
          { _1_OBF_FUNC_next = 832UL; }
        } else {
          { _1_OBF_FUNC_next = 776UL; }
        }
        break;
      case 811:
        hash &= ~x;
        { _1_OBF_FUNC_next = 855UL; }
        break;
      case 695:;
        if (i < len) {
          { _1_OBF_FUNC_next = 334UL; }
        } else {
          { _1_OBF_FUNC_next = 528UL; }
        }
        break;
      case 788:
        hash &= ~x;
        { _1_OBF_FUNC_next = 567UL; }
        break;
      case 875:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1110UL; }
        break;
      case 290:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 310UL; }
        break;
      case 790:
        str++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 333:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 183UL; }
        } else {
          { _1_OBF_FUNC_next = 50UL; }
        }
        break;
      case 550:;
        if (i < len) {
          { _1_OBF_FUNC_next = 749UL; }
        } else {
          { _1_OBF_FUNC_next = 563UL; }
        }
        break;
      case 212:
        i++;
        { _1_OBF_FUNC_next = 699UL; }
        break;
      case 200:
        hash &= ~x;
        { _1_OBF_FUNC_next = 93UL; }
        break;
      case 345:
        str++;
        { _1_OBF_FUNC_next = 529UL; }
        break;
      case 103:
        hash &= ~x;
        { _1_OBF_FUNC_next = 819UL; }
        break;
      case 465:
        hash &= ~x;
        { _1_OBF_FUNC_next = 790UL; }
        break;
      case 229:
        i++;
        { _1_OBF_FUNC_next = 645UL; }
        break;
      case 727:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 549UL; }
        break;
      case 493:
        hash &= ~x;
        { _1_OBF_FUNC_next = 981UL; }
        break;
      case 454:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1008UL; }
        break;
      case 438:
        str++;
        { _1_OBF_FUNC_next = 137UL; }
        break;
      case 561:;
        if (i < len) {
          { _1_OBF_FUNC_next = 642UL; }
        } else {
          { _1_OBF_FUNC_next = 1097UL; }
        }
        break;
      case 1061:
        str++;
        { _1_OBF_FUNC_next = 159UL; }
        break;
      case 52:
        hash &= ~x;
        { _1_OBF_FUNC_next = 353UL; }
        break;
      case 775:
        str++;
        { _1_OBF_FUNC_next = 413UL; }
        break;
      case 781:;
        if (i < len) {
          { _1_OBF_FUNC_next = 228UL; }
        } else {
          { _1_OBF_FUNC_next = 150UL; }
        }
        break;
      case 475:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 694UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 604:;
        if (i < len) {
          { _1_OBF_FUNC_next = 48UL; }
        } else {
          { _1_OBF_FUNC_next = 596UL; }
        }
        break;
      case 1071:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1072UL; }
        } else {
          { _1_OBF_FUNC_next = 391UL; }
        }
        break;
      case 579:;
        if (i < len) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 659UL; }
        }
        break;
      case 895:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 990UL; }
        break;
      case 584:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1037UL; }
        break;
      case 263:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 382UL; }
        } else {
          { _1_OBF_FUNC_next = 690UL; }
        }
        break;
      case 1014:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 688UL; }
        break;
      case 612:
        hash &= ~x;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 715:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 289UL; }
        } else {
          { _1_OBF_FUNC_next = 531UL; }
        }
        break;
      case 722:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 607UL; }
        break;
      case 119:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1092UL; }
        } else {
          { _1_OBF_FUNC_next = 1033UL; }
        }
        break;
      case 216:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 613UL; }
        } else {
          { _1_OBF_FUNC_next = 1009UL; }
        }
        break;
      case 843:;
        if (i < len) {
          { _1_OBF_FUNC_next = 295UL; }
        } else {
          { _1_OBF_FUNC_next = 498UL; }
        }
        break;
      case 232:
        i++;
        { _1_OBF_FUNC_next = 432UL; }
        break;
      case 411:
        __RANDVAR__76213830140551252547__ = 0;
        { _1_OBF_FUNC_next = 193UL; }
        break;
      case 1051:
        str++;
        { _1_OBF_FUNC_next = 402UL; }
        break;
      case 487:
        str++;
        { _1_OBF_FUNC_next = 769UL; }
        break;
      case 322:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1056UL; }
        break;
      case 344:
        hash &= ~x;
        { _1_OBF_FUNC_next = 241UL; }
        break;
      case 828:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 848UL; }
        break;
      case 220:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 698UL; }
        break;
      case 162:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1014UL; }
        } else {
          { _1_OBF_FUNC_next = 688UL; }
        }
        break;
      case 314:
        str++;
        { _1_OBF_FUNC_next = 1089UL; }
        break;
      case 464:
        str++;
        { _1_OBF_FUNC_next = 651UL; }
        break;
      case 42:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 61:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 849UL; }
        break;
      case 548:;
        if (i < len) {
          { _1_OBF_FUNC_next = 850UL; }
        } else {
          { _1_OBF_FUNC_next = 528UL; }
        }
        break;
      case 509:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 363UL; }
        break;
      case 690:
        hash &= ~x;
        { _1_OBF_FUNC_next = 647UL; }
        break;
      case 498:;
        if (i < len) {
          { _1_OBF_FUNC_next = 120UL; }
        } else {
          { _1_OBF_FUNC_next = 385UL; }
        }
        break;
      case 501:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 668UL; }
        break;
      case 400:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 692UL; }
        } else {
          { _1_OBF_FUNC_next = 249UL; }
        }
        break;
      case 568:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 508UL; }
        break;
      case 748:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 883UL; }
        break;
      case 834:
        hash &= ~x;
        { _1_OBF_FUNC_next = 146UL; }
        break;
      case 1047:
        str++;
        { _1_OBF_FUNC_next = 315UL; }
        break;
      case 507:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 806UL; }
        break;
      case 148:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 535UL; }
        break;
      case 1062:;
        if (i < len) {
          { _1_OBF_FUNC_next = 536UL; }
        } else {
          { _1_OBF_FUNC_next = 784UL; }
        }
        break;
      case 16:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 799UL; }
        break;
      case 908:;
        if (i < len) {
          { _1_OBF_FUNC_next = 949UL; }
        } else {
          { _1_OBF_FUNC_next = 380UL; }
        }
        break;
      case 782:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 826UL; }
        break;
      case 552:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 410UL; }
        break;
      case 799:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 333UL; }
        break;
      case 1048:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 302UL; }
        break;
      case 170:
        str++;
        { _1_OBF_FUNC_next = 342UL; }
        break;
      case 570:
        hash &= ~x;
        { _1_OBF_FUNC_next = 515UL; }
        break;
      case 419:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 983UL; }
        break;
      case 564:
        i++;
        { _1_OBF_FUNC_next = 579UL; }
        break;
      case 231:
        str++;
        { _1_OBF_FUNC_next = 638UL; }
        break;
      case 534:
        str++;
        { _1_OBF_FUNC_next = 977UL; }
        break;
      case 616:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1086UL; }
        break;
      case 453:
        str++;
        { _1_OBF_FUNC_next = 1104UL; }
        break;
      case 401:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 405UL; }
        } else {
          { _1_OBF_FUNC_next = 344UL; }
        }
        break;
      case 305:
        __RANDVAR__15161953246789069116__ = 1;
        { _1_OBF_FUNC_next = 842UL; }
        break;
      case 984:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 451:
        str++;
        { _1_OBF_FUNC_next = 153UL; }
        break;
      case 1011:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 429UL; }
        break;
      case 848:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 375UL; }
        } else {
          { _1_OBF_FUNC_next = 199UL; }
        }
        break;
      case 70:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 506UL; }
        } else {
          { _1_OBF_FUNC_next = 160UL; }
        }
        break;
      case 701:;
        if (i < len) {
          { _1_OBF_FUNC_next = 483UL; }
        } else {
          { _1_OBF_FUNC_next = 308UL; }
        }
        break;
      case 641:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 593UL; }
        break;
      case 384:
        hash &= ~x;
        { _1_OBF_FUNC_next = 726UL; }
        break;
      case 182:
        str++;
        { _1_OBF_FUNC_next = 430UL; }
        break;
      case 408:
        str++;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 51:;
        if (i < len) {
          { _1_OBF_FUNC_next = 523UL; }
        } else {
          { _1_OBF_FUNC_next = 837UL; }
        }
        break;
      case 313:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 400UL; }
        break;
      case 60:;
        if (i < len) {
          { _1_OBF_FUNC_next = 727UL; }
        } else {
          { _1_OBF_FUNC_next = 115UL; }
        }
        break;
      case 547:
        hash &= ~x;
        { _1_OBF_FUNC_next = 914UL; }
        break;
      case 960:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1044UL; }
        break;
      case 373:;
        if (i < len) {
          { _1_OBF_FUNC_next = 495UL; }
        } else {
          { _1_OBF_FUNC_next = 513UL; }
        }
        break;
      case 508:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 873UL; }
        break;
      case 702:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 957UL; }
        break;
      case 837:;
        if (i < len) {
          { _1_OBF_FUNC_next = 423UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 521:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1069UL; }
        } else {
          { _1_OBF_FUNC_next = 663UL; }
        }
        break;
      case 726:
        str++;
        { _1_OBF_FUNC_next = 673UL; }
        break;
      case 718:
        i++;
        { _1_OBF_FUNC_next = 287UL; }
        break;
      case 591:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 271UL; }
        } else {
          { _1_OBF_FUNC_next = 768UL; }
        }
        break;
      case 605:
        i++;
        { _1_OBF_FUNC_next = 615UL; }
        break;
      case 189:
        str++;
        { _1_OBF_FUNC_next = 133UL; }
        break;
      case 186:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 801UL; }
        break;
      case 1036:
        str++;
        { _1_OBF_FUNC_next = 633UL; }
        break;
      case 108:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 510UL; }
        break;
      case 955:
        __RANDVAR__19259446640812071193__ = 0;
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 107:
        __RANDVAR__89842877436650187377__ = 1;
        { _1_OBF_FUNC_next = 976UL; }
        break;
      case 480:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 867UL; }
        break;
      case 1016:
        i++;
        { _1_OBF_FUNC_next = 1012UL; }
        break;
      case 1030:;
        if (i < len) {
          { _1_OBF_FUNC_next = 835UL; }
        } else {
          { _1_OBF_FUNC_next = 689UL; }
        }
        break;
      case 190:;
        if (i < len) {
          { _1_OBF_FUNC_next = 47UL; }
        } else {
          { _1_OBF_FUNC_next = 383UL; }
        }
        break;
      case 365:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 657UL; }
        break;
      case 1085:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 793UL; }
        break;
      case 136:
        hash &= ~x;
        { _1_OBF_FUNC_next = 856UL; }
        break;
      case 723:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 660UL; }
        } else {
          { _1_OBF_FUNC_next = 1064UL; }
        }
        break;
      case 346:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 197UL; }
        } else {
          { _1_OBF_FUNC_next = 171UL; }
        }
        break;
      case 43:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 480UL; }
        } else {
          { _1_OBF_FUNC_next = 867UL; }
        }
        break;
      case 368:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1090UL; }
        break;
      case 659:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1000UL; }
        } else {
          { _1_OBF_FUNC_next = 528UL; }
        }
        break;
      case 22:;
        if (i < len) {
          { _1_OBF_FUNC_next = 393UL; }
        } else {
          { _1_OBF_FUNC_next = 492UL; }
        }
        break;
      case 20:
        hash &= ~x;
        { _1_OBF_FUNC_next = 434UL; }
        break;
      case 757:
        i++;
        { _1_OBF_FUNC_next = 349UL; }
        break;
      case 1029:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 547UL; }
        break;
      case 644:;
        if (i < len) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 296UL; }
        }
        break;
      case 771:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 879UL; }
        break;
      case 34:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 675UL; }
        } else {
          { _1_OBF_FUNC_next = 476UL; }
        }
        break;
      case 1020:
        str++;
        { _1_OBF_FUNC_next = 1073UL; }
        break;
      case 738:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 562UL; }
        } else {
          { _1_OBF_FUNC_next = 639UL; }
        }
        break;
      case 354:
        hash &= ~x;
        { _1_OBF_FUNC_next = 700UL; }
        break;
      case 531:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 478UL; }
        } else {
          { _1_OBF_FUNC_next = 601UL; }
        }
        break;
      case 340:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1076UL; }
        break;
      case 1088:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 735UL; }
        break;
      case 886:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 824UL; }
        } else {
          { _1_OBF_FUNC_next = 746UL; }
        }
        break;
      case 192:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 878UL; }
        break;
      case 233:;
        if (i < len) {
          { _1_OBF_FUNC_next = 46UL; }
        } else {
          { _1_OBF_FUNC_next = 439UL; }
        }
        break;
      case 1035:
        str++;
        { _1_OBF_FUNC_next = 654UL; }
        break;
      case 341:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 121UL; }
        break;
      case 369:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 501UL; }
        break;
      case 861:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 866UL; }
        } else {
          { _1_OBF_FUNC_next = 598UL; }
        }
        break;
      case 997:;
        if (i < len) {
          { _1_OBF_FUNC_next = 187UL; }
        } else {
          { _1_OBF_FUNC_next = 646UL; }
        }
        break;
      case 1002:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 136UL; }
        break;
      case 581:
        i++;
        { _1_OBF_FUNC_next = 717UL; }
        break;
      case 853:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 151UL; }
        }
        break;
      case 563:;
        if (i < len) {
          { _1_OBF_FUNC_next = 571UL; }
        } else {
          { _1_OBF_FUNC_next = 579UL; }
        }
        break;
      case 805:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 252UL; }
        break;
      case 953:;
        if (i < len) {
          { _1_OBF_FUNC_next = 217UL; }
        } else {
          { _1_OBF_FUNC_next = 115UL; }
        }
        break;
      case 173:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 608UL; }
        } else {
          { _1_OBF_FUNC_next = 921UL; }
        }
        break;
      case 74:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 686UL; }
        break;
      case 262:
        i++;
        { _1_OBF_FUNC_next = 646UL; }
        break;
      case 846:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 209UL; }
        break;
      case 808:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 377:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 706UL; }
        break;
      case 205:
        i++;
        { _1_OBF_FUNC_next = 695UL; }
        break;
      case 296:;
        if (i < len) {
          { _1_OBF_FUNC_next = 970UL; }
        } else {
          { _1_OBF_FUNC_next = 741UL; }
        }
        break;
      case 246:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 903UL; }
        break;
      case 32:;
        if (i < len) {
          { _1_OBF_FUNC_next = 930UL; }
        } else {
          { _1_OBF_FUNC_next = 373UL; }
        }
        break;
      case 1115:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 876UL; }
        break;
      case 197:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 171UL; }
        break;
      case 440:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 350:
        str++;
        { _1_OBF_FUNC_next = 219UL; }
        break;
      case 141:;
        if (i < len) {
          { _1_OBF_FUNC_next = 539UL; }
        } else {
          { _1_OBF_FUNC_next = 431UL; }
        }
        break;
      case 919:
        i++;
        { _1_OBF_FUNC_next = 833UL; }
        break;
      case 114:
        hash &= ~x;
        { _1_OBF_FUNC_next = 479UL; }
        break;
      case 466:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 765UL; }
        } else {
          { _1_OBF_FUNC_next = 20UL; }
        }
        break;
      case 308:;
        if (i < len) {
          { _1_OBF_FUNC_next = 681UL; }
        } else {
          { _1_OBF_FUNC_next = 781UL; }
        }
        break;
      case 874:
        str++;
        { _1_OBF_FUNC_next = 764UL; }
        break;
      case 251:;
        if (i < len) {
          { _1_OBF_FUNC_next = 864UL; }
        } else {
          { _1_OBF_FUNC_next = 961UL; }
        }
        break;
      case 733:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 601UL; }
        break;
      case 747:
        str++;
        { _1_OBF_FUNC_next = 594UL; }
        break;
      case 293:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 805UL; }
        } else {
          { _1_OBF_FUNC_next = 252UL; }
        }
        break;
      case 876:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1018UL; }
        break;
      case 80:
        hash &= ~x;
        { _1_OBF_FUNC_next = 105UL; }
        break;
      case 977:
        i++;
        { _1_OBF_FUNC_next = 784UL; }
        break;
      case 902:
        str++;
        { _1_OBF_FUNC_next = 278UL; }
        break;
      case 678:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 267UL; }
        } else {
          { _1_OBF_FUNC_next = 666UL; }
        }
        break;
      case 288:
        i++;
        { _1_OBF_FUNC_next = 155UL; }
        break;
      case 495:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 589UL; }
        break;
      case 897:
        i++;
        { _1_OBF_FUNC_next = 954UL; }
        break;
      case 165:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 338UL; }
        break;
      case 221:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 355UL; }
        } else {
          { _1_OBF_FUNC_next = 378UL; }
        }
        break;
      case 762:
        hash &= ~x;
        { _1_OBF_FUNC_next = 253UL; }
        break;
      case 320:
        str++;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 565:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 468UL; }
        break;
      case 622:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 172UL; }
        break;
      case 820:;
        if (i < len) {
          { _1_OBF_FUNC_next = 960UL; }
        } else {
          { _1_OBF_FUNC_next = 812UL; }
        }
        break;
      case 1033:
        hash &= ~x;
        { _1_OBF_FUNC_next = 705UL; }
        break;
      case 780:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 325UL; }
        break;
      case 706:
        hash &= ~x;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 526:;
        if (i < len) {
          { _1_OBF_FUNC_next = 123UL; }
        } else {
          { _1_OBF_FUNC_next = 1070UL; }
        }
        break;
      case 1109:
        i++;
        { _1_OBF_FUNC_next = 312UL; }
        break;
      case 700:
        str++;
        { _1_OBF_FUNC_next = 229UL; }
        break;
      case 88:
        str++;
        { _1_OBF_FUNC_next = 343UL; }
        break;
      case 180:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 730UL; }
        break;
      case 122:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 658UL; }
        break;
      case 261:
        str++;
        { _1_OBF_FUNC_next = 397UL; }
        break;
      case 620:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 744UL; }
        break;
      case 28:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 859UL; }
        break;
      case 670:;
        if (i < len) {
          { _1_OBF_FUNC_next = 823UL; }
        } else {
          { _1_OBF_FUNC_next = 829UL; }
        }
        break;
      case 12:
        str++;
        { _1_OBF_FUNC_next = 533UL; }
        break;
      case 882:
        i++;
        { _1_OBF_FUNC_next = 953UL; }
        break;
      case 712:
        i++;
        { _1_OBF_FUNC_next = 275UL; }
        break;
      case 822:
        str++;
        { _1_OBF_FUNC_next = 379UL; }
        break;
      case 382:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 690UL; }
        break;
      case 685:
        hash &= ~x;
        { _1_OBF_FUNC_next = 250UL; }
        break;
      case 219:
        i++;
        { _1_OBF_FUNC_next = 499UL; }
        break;
      case 117:
        str++;
        { _1_OBF_FUNC_next = 138UL; }
        break;
      case 511:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 809UL; }
        } else {
          { _1_OBF_FUNC_next = 154UL; }
        }
        break;
      case 58:
        str++;
        { _1_OBF_FUNC_next = 750UL; }
        break;
      case 987:
        str++;
        { _1_OBF_FUNC_next = 581UL; }
        break;
      case 553:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 522UL; }
        break;
      case 1077:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 573UL; }
        } else {
          { _1_OBF_FUNC_next = 463UL; }
        }
        break;
      case 380:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1074UL; }
        } else {
          { _1_OBF_FUNC_next = 385UL; }
        }
        break;
      case 930:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 387UL; }
        break;
      case 142:
        str++;
        { _1_OBF_FUNC_next = 576UL; }
        break;
      case 228:;
        if (i < len) {
          { _1_OBF_FUNC_next = 810UL; }
        } else {
          { _1_OBF_FUNC_next = 312UL; }
        }
        break;
      case 857:
        str++;
        { _1_OBF_FUNC_next = 566UL; }
        break;
      case 17:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 395UL; }
        break;
      case 1006:
        str++;
        { _1_OBF_FUNC_next = 215UL; }
        break;
      case 900:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 113UL; }
        break;
      case 13:;
        if (i < len) {
          { _1_OBF_FUNC_next = 504UL; }
        } else {
          { _1_OBF_FUNC_next = 954UL; }
        }
        break;
      case 500:;
        if (i < len) {
          { _1_OBF_FUNC_next = 69UL; }
        } else {
          { _1_OBF_FUNC_next = 540UL; }
        }
        break;
      case 484:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 178UL; }
        break;
      case 112:
        hash &= ~x;
        { _1_OBF_FUNC_next = 231UL; }
        break;
      case 36:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 449UL; }
        } else {
          { _1_OBF_FUNC_next = 203UL; }
        }
        break;
      case 317:;
        if (i < len) {
          { _1_OBF_FUNC_next = 372UL; }
        } else {
          { _1_OBF_FUNC_next = 955UL; }
        }
        break;
      case 912:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 489UL; }
        } else {
          { _1_OBF_FUNC_next = 635UL; }
        }
        break;
      case 49:
        i++;
        { _1_OBF_FUNC_next = 431UL; }
        break;
      case 328:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 147UL; }
        } else {
          { _1_OBF_FUNC_next = 761UL; }
        }
        break;
      case 948:;
        if (i < len) {
          { _1_OBF_FUNC_next = 982UL; }
        } else {
          { _1_OBF_FUNC_next = 491UL; }
        }
        break;
      case 445:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 475UL; }
        break;
      case 120:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 623UL; }
        break;
      case 847:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 211UL; }
        break;
      case 279:
        __RANDVAR__89842877436650187377__ = 0;
        { _1_OBF_FUNC_next = 976UL; }
        break;
      case 4:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 507UL; }
        } else {
          { _1_OBF_FUNC_next = 806UL; }
        }
        break;
      case 362:
        i++;
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 92:
        hash &= ~x;
        { _1_OBF_FUNC_next = 534UL; }
        break;
      case 1044:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 683UL; }
        break;
      case 7:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 937UL; }
        } else {
          { _1_OBF_FUNC_next = 616UL; }
        }
        break;
      case 952:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 788UL; }
        break;
      case 359:
        i++;
        { _1_OBF_FUNC_next = 318UL; }
        break;
      case 123:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 543UL; }
        break;
      case 784:;
        if (i < len) {
          { _1_OBF_FUNC_next = 446UL; }
        } else {
          { _1_OBF_FUNC_next = 1096UL; }
        }
        break;
      case 391:
        hash &= ~x;
        { _1_OBF_FUNC_next = 404UL; }
        break;
      case 541:
        i++;
        { _1_OBF_FUNC_next = 644UL; }
        break;
      case 656:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 611UL; }
        break;
      case 654:
        i++;
        { _1_OBF_FUNC_next = 604UL; }
        break;
      case 624:;
        if (i < len) {
          { _1_OBF_FUNC_next = 62UL; }
        } else {
          { _1_OBF_FUNC_next = 150UL; }
        }
        break;
      case 1056:
        str++;
        { _1_OBF_FUNC_next = 590UL; }
        break;
      case 1106:
        str++;
        { _1_OBF_FUNC_next = 516UL; }
        break;
      case 732:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 388UL; }
        break;
      case 426:
        str++;
        { _1_OBF_FUNC_next = 897UL; }
        break;
      case 671:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 839UL; }
        break;
      case 416:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 236UL; }
        } else {
          { _1_OBF_FUNC_next = 200UL; }
        }
        break;
      case 898:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 472UL; }
        break;
      case 146:
        str++;
        { _1_OBF_FUNC_next = 915UL; }
        break;
      case 242:;
        if (i < len) {
          { _1_OBF_FUNC_next = 972UL; }
        } else {
          { _1_OBF_FUNC_next = 621UL; }
        }
        break;
      case 777:
        i++;
        { _1_OBF_FUNC_next = 961UL; }
        break;
      case 632:
        str++;
        { _1_OBF_FUNC_next = 831UL; }
        break;
      case 630:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 255UL; }
        break;
      case 102:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 900UL; }
        } else {
          { _1_OBF_FUNC_next = 113UL; }
        }
        break;
      case 181:
        hash &= ~x;
        { _1_OBF_FUNC_next = 791UL; }
        break;
      case 137:
        i++;
        { _1_OBF_FUNC_next = 926UL; }
        break;
      case 352:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 911UL; }
        } else {
          { _1_OBF_FUNC_next = 235UL; }
        }
        break;
      case 954:;
        if (i < len) {
          { _1_OBF_FUNC_next = 737UL; }
        } else {
          { _1_OBF_FUNC_next = 294UL; }
        }
        break;
      case 752:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1105UL; }
        break;
      case 163:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 381UL; }
        } else {
          { _1_OBF_FUNC_next = 465UL; }
        }
        break;
      case 855:
        str++;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 877:
        i++;
        { _1_OBF_FUNC_next = 490UL; }
        break;
      case 583:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1041UL; }
        } else {
          { _1_OBF_FUNC_next = 85UL; }
        }
        break;
      case 653:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 985UL; }
        } else {
          { _1_OBF_FUNC_next = 814UL; }
        }
        break;
      case 840:;
        if (i < len) {
          { _1_OBF_FUNC_next = 888UL; }
        } else {
          { _1_OBF_FUNC_next = 268UL; }
        }
        break;
      case 800:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 792UL; }
        } else {
          { _1_OBF_FUNC_next = 1079UL; }
        }
        break;
      case 405:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 344UL; }
        break;
      case 79:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 89UL; }
        break;
      case 309:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 592UL; }
        break;
      case 257:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 511UL; }
        break;
      case 772:;
        if (i < len) {
          { _1_OBF_FUNC_next = 840UL; }
        } else {
          { _1_OBF_FUNC_next = 953UL; }
        }
        break;
      case 985:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 814UL; }
        break;
      case 539:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 148UL; }
        break;
      case 740:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 559UL; }
        break;
      case 744:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1029UL; }
        } else {
          { _1_OBF_FUNC_next = 547UL; }
        }
        break;
      case 884:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 979UL; }
        break;
      case 613:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1009UL; }
        break;
      case 587:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1112UL; }
        break;
      case 749:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 299UL; }
        break;
      case 854:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 473UL; }
        break;
      case 864:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 276UL; }
        break;
      case 556:
        i++;
        { _1_OBF_FUNC_next = 563UL; }
        break;
      case 269:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 600UL; }
        break;
      case 774:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1082UL; }
        } else {
          { _1_OBF_FUNC_next = 1030UL; }
        }
        break;
      case 582:
        str++;
        { _1_OBF_FUNC_next = 588UL; }
        break;
      case 910:
        i++;
        { _1_OBF_FUNC_next = 890UL; }
        break;
      case 59:;
        if (i < len) {
          { _1_OBF_FUNC_next = 898UL; }
        } else {
          { _1_OBF_FUNC_next = 141UL; }
        }
        break;
      case 1046:;
        if (i < len) {
          { _1_OBF_FUNC_next = 959UL; }
        } else {
          { _1_OBF_FUNC_next = 926UL; }
        }
        break;
      case 981:
        str++;
        { _1_OBF_FUNC_next = 665UL; }
        break;
      case 794:
        str++;
        { _1_OBF_FUNC_next = 477UL; }
        break;
      case 253:
        str++;
        { _1_OBF_FUNC_next = 256UL; }
        break;
      case 5:
        i++;
        { _1_OBF_FUNC_next = 500UL; }
        break;
      case 129:;
        if (__RANDVAR__19259446640812071193__ == 0) {
          { _1_OBF_FUNC_next = 109UL; }
        } else {
          { _1_OBF_FUNC_next = 803UL; }
        }
        break;
      case 366:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1022UL; }
        } else {
          { _1_OBF_FUNC_next = 1030UL; }
        }
        break;
      case 1025:;
        if (i < len) {
          { _1_OBF_FUNC_next = 868UL; }
        } else {
          { _1_OBF_FUNC_next = 927UL; }
        }
        break;
      case 160:
        hash &= ~x;
        { _1_OBF_FUNC_next = 517UL; }
        break;
      case 1041:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 1096:;
        if (i < len) {
          { _1_OBF_FUNC_next = 565UL; }
        } else {
          { _1_OBF_FUNC_next = 367UL; }
        }
        break;
      case 324:;
        if (i < len) {
          { _1_OBF_FUNC_next = 986UL; }
        } else {
          { _1_OBF_FUNC_next = 357UL; }
        }
        break;
      case 53:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 768:
        hash &= ~x;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 672:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 425UL; }
        } else {
          { _1_OBF_FUNC_next = 27UL; }
        }
        break;
      case 9:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 336UL; }
        break;
      case 559:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 99UL; }
        break;
      case 608:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 921UL; }
        break;
      case 404:
        str++;
        { _1_OBF_FUNC_next = 844UL; }
        break;
      case 648:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 783UL; }
        break;
      case 361:;
        if (i < len) {
          { _1_OBF_FUNC_next = 484UL; }
        } else {
          { _1_OBF_FUNC_next = 469UL; }
        }
        break;
      case 505:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1007UL; }
        break;
      case 986:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 577UL; }
        break;
      case 766:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 862UL; }
        } else {
          { _1_OBF_FUNC_next = 736UL; }
        }
        break;
      case 143:
        i++;
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 364:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1071UL; }
        break;
      case 1083:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 925UL; }
        } else {
          { _1_OBF_FUNC_next = 752UL; }
        }
        break;
      case 482:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 847UL; }
        break;
      case 215:
        i++;
        { _1_OBF_FUNC_next = 296UL; }
        break;
      case 746:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1047UL; }
        break;
      case 443:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 703UL; }
        } else {
          { _1_OBF_FUNC_next = 130UL; }
        }
        break;
      case 858:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1015UL; }
        break;
      case 730:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 166UL; }
        break;
      case 433:
        hash &= ~x;
        { _1_OBF_FUNC_next = 56UL; }
        break;
      case 640:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1055UL; }
        break;
      case 512:
        str++;
        { _1_OBF_FUNC_next = 940UL; }
        break;
      case 358:
        str++;
        { _1_OBF_FUNC_next = 262UL; }
        break;
      case 532:
        i++;
        { _1_OBF_FUNC_next = 548UL; }
        break;
      case 945:;
        if (i < len) {
          { _1_OBF_FUNC_next = 748UL; }
        } else {
          { _1_OBF_FUNC_next = 389UL; }
        }
        break;
      case 677:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 587UL; }
        break;
      case 755:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 629UL; }
        break;
      case 527:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 723UL; }
        break;
      case 821:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 384UL; }
        break;
      case 467:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 546UL; }
        break;
      case 711:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 622UL; }
        } else {
          { _1_OBF_FUNC_next = 172UL; }
        }
        break;
      case 819:
        str++;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 144:
        i++;
        { _1_OBF_FUNC_next = 1025UL; }
        break;
      case 935:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1003UL; }
        break;
      case 829:;
        if (i < len) {
          { _1_OBF_FUNC_next = 202UL; }
        } else {
          { _1_OBF_FUNC_next = 548UL; }
        }
        break;
      case 999:
        hash &= ~x;
        { _1_OBF_FUNC_next = 582UL; }
        break;
      case 315:
        i++;
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 871:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 650UL; }
        break;
      case 643:
        i++;
        { _1_OBF_FUNC_next = 1046UL; }
        break;
      case 1034:;
        if (i < len) {
          { _1_OBF_FUNC_next = 180UL; }
        } else {
          { _1_OBF_FUNC_next = 953UL; }
        }
        break;
      case 201:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 551UL; }
        } else {
          { _1_OBF_FUNC_next = 124UL; }
        }
        break;
      case 278:
        i++;
        { _1_OBF_FUNC_next = 366UL; }
        break;
      case 77:;
        if (__RANDVAR__81368048788769820726__ == 0) {
          { _1_OBF_FUNC_next = 233UL; }
        } else {
          { _1_OBF_FUNC_next = 37UL; }
        }
        break;
      case 542:
        hash &= ~x;
        { _1_OBF_FUNC_next = 358UL; }
        break;
      case 859:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 97UL; }
        break;
      case 342:
        i++;
        { _1_OBF_FUNC_next = 1030UL; }
        break;
      case 621:;
        if (i < len) {
          { _1_OBF_FUNC_next = 782UL; }
        } else {
          { _1_OBF_FUNC_next = 490UL; }
        }
        break;
      case 483:;
        if (i < len) {
          { _1_OBF_FUNC_next = 584UL; }
        } else {
          { _1_OBF_FUNC_next = 521UL; }
        }
        break;
      case 230:
        hash &= ~x;
        { _1_OBF_FUNC_next = 933UL; }
        break;
      case 168:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 852UL; }
        } else {
          { _1_OBF_FUNC_next = 834UL; }
        }
        break;
      case 347:
        str++;
        { _1_OBF_FUNC_next = 757UL; }
        break;
      case 812:;
        if (i < len) {
          { _1_OBF_FUNC_next = 243UL; }
        } else {
          { _1_OBF_FUNC_next = 561UL; }
        }
        break;
      case 68:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 1017:;
        if (i < len) {
          { _1_OBF_FUNC_next = 740UL; }
        } else {
          { _1_OBF_FUNC_next = 645UL; }
        }
        break;
      case 676:;
        if (i < len) {
          { _1_OBF_FUNC_next = 870UL; }
        } else {
          { _1_OBF_FUNC_next = 528UL; }
        }
        break;
      case 783:
        hash &= ~x;
        { _1_OBF_FUNC_next = 487UL; }
        break;
      case 371:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 322UL; }
        break;
      case 852:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 834UL; }
        break;
      case 769:
        i++;
        { _1_OBF_FUNC_next = 150UL; }
        break;
      case 105:
        str++;
        { _1_OBF_FUNC_next = 370UL; }
        break;
      case 988:
        i++;
        { _1_OBF_FUNC_next = 1030UL; }
        break;
      case 441:
        str++;
        { _1_OBF_FUNC_next = 965UL; }
        break;
      case 761:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 59UL; }
        } else {
          { _1_OBF_FUNC_next = 424UL; }
        }
        break;
      case 666:
        hash &= ~x;
        { _1_OBF_FUNC_next = 704UL; }
        break;
      case 375:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 199UL; }
        break;
      case 360:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 90UL; }
        break;
      case 97:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1043UL; }
        } else {
          { _1_OBF_FUNC_next = 111UL; }
        }
        break;
      case 399:
        str++;
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 472:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 922UL; }
        break;
      case 758:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 697UL; }
        break;
      case 982:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1066UL; }
        break;
      case 497:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 1003:
        hash &= ~x;
        { _1_OBF_FUNC_next = 311UL; }
        break;
      case 728:
        i++;
        { _1_OBF_FUNC_next = 781UL; }
        break;
      case 617:
        i++;
        { _1_OBF_FUNC_next = 115UL; }
        break;
      case 461:
        hash &= ~x;
        { _1_OBF_FUNC_next = 802UL; }
        break;
      case 650:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1036UL; }
        break;
      case 353:
        str++;
        { _1_OBF_FUNC_next = 709UL; }
        break;
      case 845:
        i++;
        { _1_OBF_FUNC_next = 298UL; }
        break;
      case 1076:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1058UL; }
        break;
      case 139:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1001UL; }
        } else {
          { _1_OBF_FUNC_next = 542UL; }
        }
        break;
      case 252:
        hash &= ~x;
        { _1_OBF_FUNC_next = 887UL; }
        break;
      case 81:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 392UL; }
        break;
      case 575:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 934UL; }
        break;
      case 792:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1079UL; }
        break;
      case 637:
        hash &= ~x;
        { _1_OBF_FUNC_next = 82UL; }
        break;
      case 124:
        hash &= ~x;
        { _1_OBF_FUNC_next = 865UL; }
        break;
      case 385:;
        if (i < len) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 1030UL; }
        }
        break;
      case 26:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 714UL; }
        break;
      case 759:
        str++;
        { _1_OBF_FUNC_next = 777UL; }
        break;
      case 933:
        str++;
        { _1_OBF_FUNC_next = 176UL; }
        break;
      case 764:
        i++;
        { _1_OBF_FUNC_next = 361UL; }
        break;
      case 577:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 684UL; }
        break;
      case 435:
        hash &= ~x;
        { _1_OBF_FUNC_next = 742UL; }
        break;
      case 734:
        i++;
        { _1_OBF_FUNC_next = 286UL; }
        break;
      case 1068:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 725UL; }
        break;
      case 456:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1039UL; }
        } else {
          { _1_OBF_FUNC_next = 645UL; }
        }
        break;
      case 412:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 904UL; }
        break;
      case 437:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 326UL; }
        } else {
          { _1_OBF_FUNC_next = 637UL; }
        }
        break;
      case 973:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 853UL; }
        break;
      case 934:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 886UL; }
        break;
      case 851:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 761UL; }
        break;
      case 923:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1004UL; }
        break;
      case 27:
        hash &= ~x;
        { _1_OBF_FUNC_next = 347UL; }
        break;
      case 901:
        i++;
        { _1_OBF_FUNC_next = 317UL; }
        break;
      case 862:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 736UL; }
        break;
      case 274:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 192UL; }
        } else {
          { _1_OBF_FUNC_next = 878UL; }
        }
        break;
      case 71:
        i++;
        { _1_OBF_FUNC_next = 561UL; }
        break;
      case 427:
        i++;
        { _1_OBF_FUNC_next = 1096UL; }
        break;
      case 479:
        str++;
        { _1_OBF_FUNC_next = 143UL; }
        break;
      case 393:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 892UL; }
        break;
      case 816:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 198UL; }
        break;
      case 887:
        str++;
        { _1_OBF_FUNC_next = 643UL; }
        break;
      case 611:
        hash &= ~x;
        { _1_OBF_FUNC_next = 453UL; }
        break;
      case 607:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 821UL; }
        } else {
          { _1_OBF_FUNC_next = 384UL; }
        }
        break;
      case 931:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 811UL; }
        break;
      case 273:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 543:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1024UL; }
        break;
      case 374:
        str++;
        { _1_OBF_FUNC_next = 988UL; }
        break;
      case 460:
        x = 0U;
        { _1_OBF_FUNC_next = 1101UL; }
        break;
      case 1012:;
        if (i < len) {
          { _1_OBF_FUNC_next = 524UL; }
        } else {
          { _1_OBF_FUNC_next = 1025UL; }
        }
        break;
      case 825:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 892:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 678UL; }
        break;
      case 236:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 200UL; }
        break;
      case 75:
        __RANDVAR__89834882284470555227__ = 0;
        { _1_OBF_FUNC_next = 488UL; }
        break;
      case 1022:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1038UL; }
        } else {
          { _1_OBF_FUNC_next = 500UL; }
        }
        break;
      case 1074:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1075UL; }
        } else {
          { _1_OBF_FUNC_next = 843UL; }
        }
        break;
      case 46:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1057UL; }
        } else {
          { _1_OBF_FUNC_next = 1050UL; }
        }
        break;
      case 1019:;
        if (i < len) {
          { _1_OBF_FUNC_next = 575UL; }
        } else {
          { _1_OBF_FUNC_next = 214UL; }
        }
        break;
      case 485:
        hash &= ~x;
        { _1_OBF_FUNC_next = 207UL; }
        break;
      case 836:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 958:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 291UL; }
        } else {
          { _1_OBF_FUNC_next = 610UL; }
        }
        break;
      case 172:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1061UL; }
        break;
      case 978:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 104UL; }
        break;
      case 907:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 112UL; }
        break;
      case 894:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 661UL; }
        break;
      case 76:
        str++;
        { _1_OBF_FUNC_next = 222UL; }
        break;
      case 72:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 301UL; }
        break;
      case 248:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 360UL; }
        } else {
          { _1_OBF_FUNC_next = 90UL; }
        }
        break;
      case 496:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 196UL; }
        break;
      case 1069:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 247UL; }
        break;
      case 329:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 92UL; }
        break;
      case 856:
        str++;
        { _1_OBF_FUNC_next = 962UL; }
        break;
      case 697:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 652UL; }
        } else {
          { _1_OBF_FUNC_next = 685UL; }
        }
        break;
      case 490:;
        if (i < len) {
          { _1_OBF_FUNC_next = 816UL; }
        } else {
          { _1_OBF_FUNC_next = 150UL; }
        }
        break;
      case 428:;
        if (i < len) {
          { _1_OBF_FUNC_next = 269UL; }
        } else {
          { _1_OBF_FUNC_next = 349UL; }
        }
        break;
      case 1112:
        str++;
        { _1_OBF_FUNC_next = 541UL; }
        break;
      case 1104:
        i++;
        { _1_OBF_FUNC_next = 776UL; }
        break;
      case 970:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1062UL; }
        } else {
          { _1_OBF_FUNC_next = 367UL; }
        }
        break;
      case 1060:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 626UL; }
        break;
      case 463:
        hash &= ~x;
        { _1_OBF_FUNC_next = 857UL; }
        break;
      case 929:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 56:
        str++;
        { _1_OBF_FUNC_next = 724UL; }
        break;
      case 916:
        str++;
        { _1_OBF_FUNC_next = 877UL; }
        break;
      case 193:;
        if (__RANDVAR__76213830140551252547__ == 0) {
          { _1_OBF_FUNC_next = 772UL; }
        } else {
          { _1_OBF_FUNC_next = 760UL; }
        }
        break;
      case 913:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 216UL; }
        break;
      case 883:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 614UL; }
        break;
      case 57:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 174:;
        if (i < len) {
          { _1_OBF_FUNC_next = 244UL; }
        } else {
          { _1_OBF_FUNC_next = 1080UL; }
        }
        break;
      case 776:
        __RANDVAR__46526641394458149770__ = 0;
        { _1_OBF_FUNC_next = 869UL; }
        break;
      case 787:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 702UL; }
        } else {
          { _1_OBF_FUNC_next = 957UL; }
        }
        break;
      case 183:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 203:
        hash &= ~x;
        { _1_OBF_FUNC_next = 759UL; }
        break;
      case 698:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1083UL; }
        break;
      case 388:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 978UL; }
        } else {
          { _1_OBF_FUNC_next = 104UL; }
        }
        break;
      case 268:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1048UL; }
        } else {
          { _1_OBF_FUNC_next = 1034UL; }
        }
        break;
      case 754:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 787UL; }
        break;
      case 379:
        i++;
        { _1_OBF_FUNC_next = 324UL; }
        break;
      case 357:;
        if (i < len) {
          { _1_OBF_FUNC_next = 206UL; }
        } else {
          { _1_OBF_FUNC_next = 383UL; }
        }
        break;
      case 827:
        i++;
        { _1_OBF_FUNC_next = 134UL; }
        break;
      case 756:
        hash &= ~x;
        { _1_OBF_FUNC_next = 88UL; }
        break;
      case 415:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 84UL; }
        break;
      case 968:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 230UL; }
        break;
      case 462:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 485UL; }
        break;
      case 1108:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 815UL; }
        break;
      case 291:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 610UL; }
        break;
      case 430:
        i++;
        { _1_OBF_FUNC_next = 843UL; }
        break;
      case 310:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 436UL; }
        break;
      case 538:;
        if (i < len) {
          { _1_OBF_FUNC_next = 618UL; }
        } else {
          { _1_OBF_FUNC_next = 927UL; }
        }
        break;
      case 1113:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 998UL; }
        } else {
          { _1_OBF_FUNC_next = 905UL; }
        }
        break;
      case 494:;
        if (i < len) {
          { _1_OBF_FUNC_next = 242UL; }
        } else {
          { _1_OBF_FUNC_next = 150UL; }
        }
        break;
      case 1080:;
        if (i < len) {
          { _1_OBF_FUNC_next = 984UL; }
        } else {
          { _1_OBF_FUNC_next = 298UL; }
        }
        break;
      case 705:
        str++;
        { _1_OBF_FUNC_next = 564UL; }
        break;
      case 545:
        hash &= ~x;
        { _1_OBF_FUNC_next = 131UL; }
        break;
      case 949:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 642:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 894UL; }
        break;
      case 224:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 108UL; }
        } else {
          { _1_OBF_FUNC_next = 510UL; }
        }
        break;
      case 741:
        __RANDVAR__76213830140551252547__ = 1;
        { _1_OBF_FUNC_next = 193UL; }
        break;
      case 271:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 768UL; }
        break;
      case 592:
        hash &= ~x;
        { _1_OBF_FUNC_next = 775UL; }
        break;
      case 889:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 754UL; }
        break;
      case 389:;
        if (i < len) {
          { _1_OBF_FUNC_next = 225UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 73:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 995UL; }
        break;
      case 502:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 273UL; }
        break;
      case 217:;
        if (i < len) {
          { _1_OBF_FUNC_next = 974UL; }
        } else {
          { _1_OBF_FUNC_next = 1093UL; }
        }
        break;
      case 683:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 67UL; }
        } else {
          { _1_OBF_FUNC_next = 762UL; }
        }
        break;
      case 458:
        i++;
        { _1_OBF_FUNC_next = 513UL; }
        break;
      case 351:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 440UL; }
        break;
      case 24:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 151UL; }
        break;
      case 518:;
        if (i < len) {
          { _1_OBF_FUNC_next = 755UL; }
        } else {
          { _1_OBF_FUNC_next = 361UL; }
        }
        break;
      case 657:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 406UL; }
        } else {
          { _1_OBF_FUNC_next = 132UL; }
        }
        break;
      case 355:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 378UL; }
        break;
      case 867:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1005UL; }
        break;
      case 265:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 421UL; }
        break;
      case 623:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 711UL; }
        break;
      case 614:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 371UL; }
        } else {
          { _1_OBF_FUNC_next = 322UL; }
        }
        break;
      case 25:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 330UL; }
        break;
      case 339:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 999UL; }
        break;
      case 638:
        i++;
        { _1_OBF_FUNC_next = 287UL; }
        break;
      case 918:
        i++;
        { _1_OBF_FUNC_next = 770UL; }
        break;
      case 519:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 929UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 256:
        i++;
        { _1_OBF_FUNC_next = 812UL; }
        break;
      case 750:
        i++;
        { _1_OBF_FUNC_next = 469UL; }
        break;
      case 301:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1108UL; }
        } else {
          { _1_OBF_FUNC_next = 815UL; }
        }
        break;
      case 720:
        i++;
        { _1_OBF_FUNC_next = 528UL; }
        break;
      case 151:
        hash &= ~x;
        { _1_OBF_FUNC_next = 441UL; }
        break;
      case 8:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 398UL; }
        break;
      case 286:;
        if (i < len) {
          { _1_OBF_FUNC_next = 31UL; }
        } else {
          { _1_OBF_FUNC_next = 941UL; }
        }
        break;
      case 249:
        hash &= ~x;
        { _1_OBF_FUNC_next = 682UL; }
        break;
      case 888:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1053UL; }
        break;
      case 703:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 130UL; }
        break;
      case 980:
        i++;
        { _1_OBF_FUNC_next = 152UL; }
        break;
      case 258:;
        if (i < len) {
          { _1_OBF_FUNC_next = 568UL; }
        } else {
          { _1_OBF_FUNC_next = 1067UL; }
        }
        break;
      case 109:;
        if (i < len) {
          { _1_OBF_FUNC_next = 948UL; }
        } else {
          { _1_OBF_FUNC_next = 380UL; }
        }
        break;
      case 682:
        str++;
        { _1_OBF_FUNC_next = 288UL; }
        break;
      case 386:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 467UL; }
        } else {
          { _1_OBF_FUNC_next = 546UL; }
        }
        break;
      case 63:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 339UL; }
        } else {
          { _1_OBF_FUNC_next = 999UL; }
        }
        break;
      case 474:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 942UL; }
        } else {
          { _1_OBF_FUNC_next = 649UL; }
        }
        break;
      case 785:
        i++;
        { _1_OBF_FUNC_next = 586UL; }
        break;
      case 40:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1115UL; }
        } else {
          { _1_OBF_FUNC_next = 586UL; }
        }
        break;
      case 1063:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 292UL; }
        break;
      case 691:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 91:
        str++;
        { _1_OBF_FUNC_next = 712UL; }
        break;
      case 1028:
        str++;
        { _1_OBF_FUNC_next = 321UL; }
        break;
      case 1053:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 818UL; }
        break;
      case 599:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 354UL; }
        break;
      case 204:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 423:;
        if (i < len) {
          { _1_OBF_FUNC_next = 875UL; }
        } else {
          { _1_OBF_FUNC_next = 945UL; }
        }
        break;
      case 1102:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 66UL; }
        break;
      case 651:
        i++;
        { _1_OBF_FUNC_next = 521UL; }
        break;
      case 920:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 612UL; }
        break;
      case 1004:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 503UL; }
        break;
      case 515:
        str++;
        { _1_OBF_FUNC_next = 212UL; }
        break;
      case 1082:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 606UL; }
        break;
      case 247:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 751:
        str++;
        { _1_OBF_FUNC_next = 1114UL; }
        break;
      case 47:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1081UL; }
        } else {
          { _1_OBF_FUNC_next = 324UL; }
        }
        break;
      case 469:;
        if (i < len) {
          { _1_OBF_FUNC_next = 889UL; }
        } else {
          { _1_OBF_FUNC_next = 188UL; }
        }
        break;
      case 628:
        i++;
        { _1_OBF_FUNC_next = 447UL; }
        break;
      case 128:
        hash &= ~x;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 147:;
        if (i < len) {
          { _1_OBF_FUNC_next = 337UL; }
        } else {
          { _1_OBF_FUNC_next = 1094UL; }
        }
        break;
      case 786:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 519UL; }
        break;
      case 674:;
        if (i < len) {
          { _1_OBF_FUNC_next = 204UL; }
        } else {
          { _1_OBF_FUNC_next = 134UL; }
        }
        break;
      case 753:
        i++;
        { _1_OBF_FUNC_next = 955UL; }
        break;
      case 226:
        str++;
        { _1_OBF_FUNC_next = 617UL; }
        break;
      case 832:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 680UL; }
        break;
      case 121:
        hash &= ~x;
        { _1_OBF_FUNC_next = 924UL; }
        break;
      case 264:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 157UL; }
        break;
      case 307:
        str++;
        { _1_OBF_FUNC_next = 785UL; }
        break;
      case 1049:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1040UL; }
        break;
      case 222:
        i++;
        { _1_OBF_FUNC_next = 316UL; }
        break;
      case 331:
        i++;
        { _1_OBF_FUNC_next = 428UL; }
        break;
      case 580:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 277UL; }
        break;
      case 1040:
        hash &= ~x;
        { _1_OBF_FUNC_next = 280UL; }
        break;
      case 1105:
        str++;
        { _1_OBF_FUNC_next = 634UL; }
        break;
      case 826:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 514UL; }
        break;
      case 544:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 907UL; }
        } else {
          { _1_OBF_FUNC_next = 112UL; }
        }
        break;
      case 302:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 1084UL; }
        break;
      case 943:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 221UL; }
        break;
      case 138:
        i++;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 763:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 462UL; }
        } else {
          { _1_OBF_FUNC_next = 485UL; }
        }
        break;
      case 793:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1063UL; }
        } else {
          { _1_OBF_FUNC_next = 292UL; }
        }
        break;
      case 29:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 798UL; }
        } else {
          { _1_OBF_FUNC_next = 461UL; }
        }
        break;
      case 991:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 771UL; }
        } else {
          { _1_OBF_FUNC_next = 879UL; }
        }
        break;
      case 387:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 958UL; }
        break;
      case 64:
        i++;
        { _1_OBF_FUNC_next = 945UL; }
        break;
      case 533:
        i++;
        { _1_OBF_FUNC_next = 624UL; }
        break;
      case 1055:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 386UL; }
        break;
      case 55:
        i++;
        { _1_OBF_FUNC_next = 1094UL; }
        break;
      case 422:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 368UL; }
        break;
      case 96:
        hash &= ~x;
        { _1_OBF_FUNC_next = 65UL; }
        break;
      case 312:;
        if (i < len) {
          { _1_OBF_FUNC_next = 8UL; }
        } else {
          { _1_OBF_FUNC_next = 624UL; }
        }
        break;
      case 488:
        __RANDVAR__54531357663109365035__ = 0;
        { _1_OBF_FUNC_next = 167UL; }
        break;
      case 370:
        i++;
        { _1_OBF_FUNC_next = 357UL; }
        break;
      case 444:;
        if (i < len) {
          { _1_OBF_FUNC_next = 414UL; }
        } else {
          { _1_OBF_FUNC_next = 296UL; }
        }
        break;
      case 742:
        str++;
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 629:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 169UL; }
        break;
      case 658:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 708UL; }
        } else {
          { _1_OBF_FUNC_next = 756UL; }
        }
        break;
      case 111:
        hash &= ~x;
        { _1_OBF_FUNC_next = 987UL; }
        break;
      case 555:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 557UL; }
        break;
      case 879:
        hash &= ~x;
        { _1_OBF_FUNC_next = 170UL; }
        break;
      case 684:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 420UL; }
        } else {
          { _1_OBF_FUNC_next = 80UL; }
        }
        break;
      case 104:
        hash &= ~x;
        { _1_OBF_FUNC_next = 455UL; }
        break;
      case 849:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 346UL; }
        break;
      case 893:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 899:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 474UL; }
        break;
      case 237:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 530UL; }
        break;
      case 277:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 912UL; }
        break;
      case 1045:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 17UL; }
        } else {
          { _1_OBF_FUNC_next = 395UL; }
        }
        break;
      case 1021:
        i++;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 797:
        i++;
        { _1_OBF_FUNC_next = 1097UL; }
        break;
      case 667:
        str++;
        { _1_OBF_FUNC_next = 910UL; }
        break;
      case 176:
        i++;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 134:;
        if (i < len) {
          { _1_OBF_FUNC_next = 98UL; }
        } else {
          { _1_OBF_FUNC_next = 860UL; }
        }
        break;
      case 823:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 164UL; }
        break;
      case 334:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 836UL; }
        break;
      case 817:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 248UL; }
        break;
      case 332:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 161UL; }
        break;
      case 1059:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 696UL; }
        break;
      case 673:
        i++;
        { _1_OBF_FUNC_next = 908UL; }
        break;
      case 82:
        str++;
        { _1_OBF_FUNC_next = 901UL; }
        break;
      case 921:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1032UL; }
        break;
      case 767:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 445UL; }
        break;
      case 679:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 969UL; }
        break;
      case 998:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 905UL; }
        break;
      case 909:
        i++;
        { _1_OBF_FUNC_next = 459UL; }
        break;
      case 725:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 186UL; }
        } else {
          { _1_OBF_FUNC_next = 801UL; }
        }
        break;
      case 796:
        str++;
        { _1_OBF_FUNC_next = 232UL; }
        break;
      case 606:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 162UL; }
        break;
      case 1101:
        i = 0U;
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 135:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1103UL; }
        break;
      case 311:
        str++;
        { _1_OBF_FUNC_next = 362UL; }
        break;
      case 649:
        hash &= ~x;
        { _1_OBF_FUNC_next = 319UL; }
        break;
      case 1084:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 555UL; }
        } else {
          { _1_OBF_FUNC_next = 557UL; }
        }
        break;
      case 647:
        str++;
        { _1_OBF_FUNC_next = 845UL; }
        break;
      case 969:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 448UL; }
        break;
      case 594:
        i++;
        { _1_OBF_FUNC_next = 967UL; }
        break;
      case 335:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 481UL; }
        break;
      case 588:
        i++;
        { _1_OBF_FUNC_next = 150UL; }
        break;
      case 937:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 616UL; }
        break;
      case 717:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1010UL; }
        } else {
          { _1_OBF_FUNC_next = 316UL; }
        }
        break;
      case 914:
        str++;
        { _1_OBF_FUNC_next = 1109UL; }
        break;
      case 974:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 943UL; }
        break;
      case 69:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 989:;
        if (i < len) {
          { _1_OBF_FUNC_next = 482UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      case 381:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 465UL; }
        break;
      case 520:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 800UL; }
        break;
      case 713:
        str++;
        { _1_OBF_FUNC_next = 532UL; }
        break;
      case 891:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 35:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 758UL; }
        break;
      case 23:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 687UL; }
        break;
      case 554:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 602UL; }
        break;
      case 420:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 80UL; }
        break;
      case 979:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 100UL; }
        } else {
          { _1_OBF_FUNC_next = 18UL; }
        }
        break;
      case 499:;
        if (i < len) {
          { _1_OBF_FUNC_next = 554UL; }
        } else {
          { _1_OBF_FUNC_next = 1017UL; }
        }
        break;
      case 729:
        i++;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 283:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 779UL; }
        break;
      case 337:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 365UL; }
        break;
      case 530:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 935UL; }
        } else {
          { _1_OBF_FUNC_next = 1003UL; }
        }
        break;
      case 966:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 1116UL; }
        break;
      case 709:
        i++;
        { _1_OBF_FUNC_next = 596UL; }
        break;
      case 417:
        i++;
        { _1_OBF_FUNC_next = 492UL; }
        break;
      case 964:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 363:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 664UL; }
        } else {
          { _1_OBF_FUNC_next = 128UL; }
        }
        break;
      case 325:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 653UL; }
        break;
      case 116:
        i++;
        { _1_OBF_FUNC_next = 774UL; }
        break;
      case 911:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 235UL; }
        break;
      case 516:
        i++;
        { _1_OBF_FUNC_next = 927UL; }
        break;
      case 409:;
        if (__RANDVAR__89834882284470555227__ == 0) {
          { _1_OBF_FUNC_next = 674UL; }
        } else {
          { _1_OBF_FUNC_next = 715UL; }
        }
        break;
      case 227:
        str++;
        { _1_OBF_FUNC_next = 919UL; }
        break;
      case 1067:;
        if (i < len) {
          { _1_OBF_FUNC_next = 580UL; }
        } else {
          { _1_OBF_FUNC_next = 444UL; }
        }
        break;
      case 90:
        hash &= ~x;
        { _1_OBF_FUNC_next = 1106UL; }
        break;
      case 131:
        str++;
        { _1_OBF_FUNC_next = 909UL; }
        break;
      case 865:
        str++;
        { _1_OBF_FUNC_next = 1016UL; }
        break;
      case 636:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 553UL; }
        } else {
          { _1_OBF_FUNC_next = 522UL; }
        }
        break;
      case 481:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 763UL; }
        break;
      case 936:
        str++;
        { _1_OBF_FUNC_next = 721UL; }
        break;
      case 1081:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 239UL; }
        break;
      case 661:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 966UL; }
        } else {
          { _1_OBF_FUNC_next = 1116UL; }
        }
        break;
      case 303:;
        return (hash);
        break;
      case 327:
        str++;
        { _1_OBF_FUNC_next = 442UL; }
        break;
      case 18:
        hash &= ~x;
        { _1_OBF_FUNC_next = 185UL; }
        break;
      case 185:
        str++;
        { _1_OBF_FUNC_next = 718UL; }
        break;
      case 284:
        hash &= ~x;
        { _1_OBF_FUNC_next = 426UL; }
        break;
      case 1114:
        i++;
        { _1_OBF_FUNC_next = 1067UL; }
        break;
      case 506:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 160UL; }
        break;
      case 562:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 639UL; }
        break;
      case 133:
        i++;
        { _1_OBF_FUNC_next = 1070UL; }
        break;
      case 468:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 583UL; }
        break;
      case 525:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 173UL; }
        break;
      case 367:;
        if (i < len) {
          { _1_OBF_FUNC_next = 174UL; }
        } else {
          { _1_OBF_FUNC_next = 644UL; }
        }
        break;
      case 439:;
        if (i < len) {
          { _1_OBF_FUNC_next = 251UL; }
        } else {
          { _1_OBF_FUNC_next = 837UL; }
        }
        break;
      case 125:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 493UL; }
        break;
      case 1098:;
        if (i < len) {
          { _1_OBF_FUNC_next = 1087UL; }
        } else {
          { _1_OBF_FUNC_next = 316UL; }
        }
        break;
      case 78:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 625UL; }
        break;
      case 300:
        i++;
        { _1_OBF_FUNC_next = 367UL; }
        break;
      case 839:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 415UL; }
        } else {
          { _1_OBF_FUNC_next = 84UL; }
        }
        break;
      case 567:
        str++;
        { _1_OBF_FUNC_next = 753UL; }
        break;
      case 326:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 637UL; }
        break;
      case 1023:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 284UL; }
        break;
      case 169:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 496UL; }
        } else {
          { _1_OBF_FUNC_next = 196UL; }
        }
        break;
      case 1005:
        str++;
        { _1_OBF_FUNC_next = 971UL; }
        break;
      case 1111:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 348UL; }
        break;
      case 1099:
        hash &= ~x;
        { _1_OBF_FUNC_next = 399UL; }
        break;
      case 773:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 1091UL; }
        break;
      case 815:
        hash &= ~x;
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 316:;
        if (i < len) {
          { _1_OBF_FUNC_next = 944UL; }
        } else {
          { _1_OBF_FUNC_next = 494UL; }
        }
        break;
      case 486:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 259UL; }
        break;
      case 831:
        i++;
        { _1_OBF_FUNC_next = 411UL; }
        break;
      case 154:
        hash &= ~x;
        { _1_OBF_FUNC_next = 83UL; }
        break;
      case 1007:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 177UL; }
        } else {
          { _1_OBF_FUNC_next = 52UL; }
        }
        break;
      case 944:;
        if (i < len) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 833UL; }
        }
        break;
      case 62:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 240UL; }
        break;
      case 65:
        str++;
        { _1_OBF_FUNC_next = 1065UL; }
        break;
      case 113:
        hash &= ~x;
        { _1_OBF_FUNC_next = 210UL; }
        break;
      case 87:
        str++;
        { _1_OBF_FUNC_next = 300UL; }
        break;
      case 218:;
        if (x != 0U) {
          { _1_OBF_FUNC_next = 1011UL; }
        } else {
          { _1_OBF_FUNC_next = 429UL; }
        }
        break;
      case 1000:;
        if (i < len) {
          { _1_OBF_FUNC_next = 140UL; }
        } else {
          { _1_OBF_FUNC_next = 275UL; }
        }
        break;
      case 573:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 463UL; }
        break;
      case 707:
        hash = (hash << 4) + (unsigned int)*str;
        { _1_OBF_FUNC_next = 537UL; }
        break;
      case 760:
        __RANDVAR__89834882284470555227__ = 1;
        { _1_OBF_FUNC_next = 531UL; }
        break;
      case 298:;
        if (i < len) {
          { _1_OBF_FUNC_next = 825UL; }
        } else {
          { _1_OBF_FUNC_next = 644UL; }
        }
        break;
      case 318:;
        if (i < len) {
          { _1_OBF_FUNC_next = 78UL; }
        } else {
          { _1_OBF_FUNC_next = 890UL; }
        }
        break;
      case 239:
        x = (unsigned int)((long)hash & 4026531840L);
        { _1_OBF_FUNC_next = 896UL; }
        break;
      case 528:;
        if (i < len) {
          { _1_OBF_FUNC_next = 538UL; }
        } else {
          { _1_OBF_FUNC_next = 107UL; }
        }
        break;
      case 491:;
        if (i < len) {
          { _1_OBF_FUNC_next = 297UL; }
        } else {
          { _1_OBF_FUNC_next = 908UL; }
        }
        break;
      case 736:
        hash &= ~x;
        { _1_OBF_FUNC_next = 282UL; }
        break;
      case 15:;
        if (i < len) {
          { _1_OBF_FUNC_next = 106UL; }
        } else {
          { _1_OBF_FUNC_next = 155UL; }
        }
        break;
      case 1094:;
        if (i < len) {
          { _1_OBF_FUNC_next = 846UL; }
        } else {
          { _1_OBF_FUNC_next = 447UL; }
        }
        break;
      case 84:
        hash &= ~x;
        { _1_OBF_FUNC_next = 719UL; }
        break;
      case 429:
        hash &= ~x;
        { _1_OBF_FUNC_next = 632UL; }
        break;
      case 177:
        hash ^= x >> 24;
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 132:
        hash &= ~x;
        { _1_OBF_FUNC_next = 184UL; }
        break;
      }
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned char *str;
  unsigned int hash;
  int tmp;
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
    str = (unsigned char *)*(argv + 1);
    tmp = strlen(str);
    tmp___0 = OBF_FUNC((char *)str, (unsigned int)tmp);
    hash = tmp___0;
    if (hash == 184139465U) {
      printf("You win!\n");
    }
    return (0);
  }
}
// variants: loop-unroll, loop-unroll, flatten
// expanded variants: loop-unroll, loop-unroll, flatten:switch
