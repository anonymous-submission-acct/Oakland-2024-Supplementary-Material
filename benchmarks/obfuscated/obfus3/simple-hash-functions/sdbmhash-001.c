typedef void *__builtin_va_list;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion_pthread_mutex_t_335460617;
union __anonunion_pthread_barrierattr_t_951761806;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_internal_list;
struct timespec;
union __anonunion____missing_field_name_168944669;
struct __pthread_cond_s;
struct __pthread_mutex_s;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct_fd_set_356711149;
struct __anonstruct___sigset_t_973126068;
struct drand48_data;
union __anonunion_pthread_condattr_t_488594145;
struct random_data;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct___g1_start32_972253866;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_rwlock_t_656928968;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_rwlock_arch_t;
struct __pthread_internal_slist;
union __anonunion____missing_field_name_972253865;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_div_t_773697287;
struct timeval;
union pthread_attr_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
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
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern long(a64l)(char const *__s);
typedef unsigned long __uint64_t;
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
extern int strlen();
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
typedef unsigned int __uint32_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern char *(mkdtemp)(char *__template);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
extern double(atof)(char const *__nptr);
typedef __u_char u_char;
typedef __sigset_t sigset_t;
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
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
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
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef __gid_t gid_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
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
extern int printf();
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
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(char *str, unsigned int len);
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
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int main(int argc, char **argv, char **_formal_envp) {
  unsigned char *str;
  unsigned int hash;
  int tmp;
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
    str = (unsigned char *)*(argv + 1);
    tmp = strlen(str);
    tmp___0 = OBF_FUNC((char *)str, (unsigned int)tmp);
    hash = tmp___0;
    if (hash == 2312951406U) {
      printf("You win!\n");
    }
    return (0);
  }
}
unsigned int OBF_FUNC(char *str, unsigned int len) {
  unsigned int hash;
  unsigned int i;
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[36];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 47UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 69:
        _1_OBF_FUNC_jumpTab[9] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 21:
      _1_OBF_FUNC_lab23:;
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 61:
      _1_OBF_FUNC_lab25:;
        { _1_OBF_FUNC_next___0 = 100UL; }
        break;
      case 54:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 51:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 125UL; }
        break;
      case 114:
      _1_OBF_FUNC_lab17:
        str++;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 126:
        _1_OBF_FUNC_jumpTab[15] = (void *)38UL;
        { _1_OBF_FUNC_next___0 = 101UL; }
        break;
      case 103:
      _1_OBF_FUNC_lab0:
        hash = (((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 9:
      _1_OBF_FUNC_lab3:
        tmp___1 = rand();
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 71:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 40:
        _1_OBF_FUNC_jumpTab[10] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 28:;
        return (0U);
        break;
      case 20:
        _1_OBF_FUNC_jumpTab[34] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 60:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 111:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 107:
        _1_OBF_FUNC_jumpTab[21] = (void *)98UL;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 113:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 30:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 110:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 33:
      _1_OBF_FUNC_lab2:
        str++;
        { _1_OBF_FUNC_next___0 = 105UL; }
        break;
      case 62:
      _1_OBF_FUNC_lab22:;
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 15:
      _1_OBF_FUNC_lab29:;
        { _1_OBF_FUNC_next___0 = 66UL; }
        break;
      case 56:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 75:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 4:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 74:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 42:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 47:
        _1_OBF_FUNC_jumpTab[0] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 5:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 85:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 67:
        _1_OBF_FUNC_jumpTab[1] = (void *)72UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 16:
        _1_OBF_FUNC_next = 27UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 86:
      _1_OBF_FUNC_lab5:
        i++;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 73:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 39:
        _1_OBF_FUNC_jumpTab[2] = (void *)33UL;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 117:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 59:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 96:
      _1_OBF_FUNC_lab20:
        i++;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 24:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 37:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 18:
      _1_OBF_FUNC_lab35:;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 120:
        _1_OBF_FUNC_jumpTab[23] = (void *)21UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 72:
      _1_OBF_FUNC_lab1:
        str++;
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 121:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 118:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 55:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 26:
      _1_OBF_FUNC_lab26:
        tmp = rand();
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 77:
        _1_OBF_FUNC_jumpTab[3] = (void *)9UL;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 99:
      _1_OBF_FUNC_lab16:
        i++;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 14:
        _1_OBF_FUNC_jumpTab[27] = (void *)115UL;
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 64:
      _1_OBF_FUNC_lab14:;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 88:;
        if (i < len) {
          { _1_OBF_FUNC_next___0 = 16UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 49UL; }
        }
        break;
      case 1:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 98:
      _1_OBF_FUNC_lab21:;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 79:
        _1_OBF_FUNC_jumpTab[8] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 82:
        _1_OBF_FUNC_jumpTab[11] = (void *)10UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 81:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 89:
        _1_OBF_FUNC_jumpTab[5] = (void *)86UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 10:
      _1_OBF_FUNC_lab11:
        hash = (((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 12:
        _1_OBF_FUNC_jumpTab[26] = (void *)26UL;
        { _1_OBF_FUNC_next___0 = 14UL; }
        break;
      case 11:;
        if (i < len) {
          { _1_OBF_FUNC_next___0 = 5UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 55UL; }
        }
        break;
      case 63:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 93:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 124UL; }
        break;
      case 13:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 92:
      _1_OBF_FUNC_lab32:
        hash = 0U;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 97:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 100:;
        return (hash);
        break;
      case 41:
      _1_OBF_FUNC_lab4:
        str++;
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 0:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 25:
        _1_OBF_FUNC_jumpTab[24] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 8:
        _1_OBF_FUNC_jumpTab[31] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 116UL; }
        break;
      case 124:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 106:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 109:
      _1_OBF_FUNC_lab6:
        hash = (((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 119:;
        if (i < len) {
          { _1_OBF_FUNC_next___0 = 83UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 42UL; }
        }
        break;
      case 43:
        _1_OBF_FUNC_jumpTab[4] = (void *)41UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 48:
        _1_OBF_FUNC_jumpTab[28] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 65:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 115:
      _1_OBF_FUNC_lab27:
        hash = (((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 78:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 31:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 75UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 13UL; }
        }
        break;
      case 68:;
        if (i < len) {
          { _1_OBF_FUNC_next___0 = 118UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 4UL; }
        }
        break;
      case 57:
        _1_OBF_FUNC_jumpTab[25] = (void *)61UL;
        { _1_OBF_FUNC_next___0 = 12UL; }
        break;
      case 58:
        _1_OBF_FUNC_jumpTab[17] = (void *)114UL;
        { _1_OBF_FUNC_next___0 = 104UL; }
        break;
      case 32:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 2:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 80:
        _1_OBF_FUNC_jumpTab[29] = (void *)15UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 38:
      _1_OBF_FUNC_lab15:
        i = 0U;
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 44:
      _1_OBF_FUNC_lab13:
        i++;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 50:
        _1_OBF_FUNC_jumpTab[19] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 46:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 108:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 112:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 123:
        _1_OBF_FUNC_jumpTab[35] = (void *)18UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 125:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 94:
        _1_OBF_FUNC_jumpTab[13] = (void *)44UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 116:
        _1_OBF_FUNC_jumpTab[32] = (void *)92UL;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 101:
        _1_OBF_FUNC_jumpTab[16] = (void *)99UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 95:
        _1_OBF_FUNC_jumpTab[6] = (void *)109UL;
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 66:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 19UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 122UL; }
        }
        break;
      case 122:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 84:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 17:
      _1_OBF_FUNC_lab18:
        tmp___0 = rand();
        { _1_OBF_FUNC_next___0 = 93UL; }
        break;
      case 104:
        _1_OBF_FUNC_jumpTab[18] = (void *)17UL;
        { _1_OBF_FUNC_next___0 = 50UL; }
        break;
      case 102:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 49:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 35:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 91:
      _1_OBF_FUNC_lab30:;
        { _1_OBF_FUNC_next___0 = 68UL; }
        break;
      case 36:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab[12] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 70:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 97UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 35UL; }
        }
        break;
      case 53:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 84UL; }
        break;
      case 90:
        _1_OBF_FUNC_jumpTab[30] = (void *)91UL;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 87:
        _1_OBF_FUNC_jumpTab[33] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 45:
        _1_OBF_FUNC_jumpTab[22] = (void *)62UL;
        { _1_OBF_FUNC_next___0 = 120UL; }
        break;
      case 3:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 105:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 106UL; }
        break;
      case 19:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 23:
        _1_OBF_FUNC_jumpTab[20] = (void *)96UL;
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 76:
        _1_OBF_FUNC_jumpTab[7] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 79UL; }
        break;
      case 29:
        _1_OBF_FUNC_jumpTab[14] = (void *)64UL;
        { _1_OBF_FUNC_next___0 = 126UL; }
        break;
      case 83:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 127:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      }
    }
  }
}
// variants: loop-fission, flatten, flatten
// expanded variants: loop-fission, flatten:indirect-goto, flatten:switch
