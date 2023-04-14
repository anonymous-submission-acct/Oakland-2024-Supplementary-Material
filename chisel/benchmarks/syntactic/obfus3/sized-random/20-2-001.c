typedef void *__builtin_va_list;
struct timespec;
struct __anonstruct_lldiv_t_103911545;
struct timeval;
struct __pthread_internal_slist;
union __anonunion_pthread_condattr_t_488594145;
struct __anonstruct___wseq32_961093918;
struct __anonstruct___g1_start32_961093919;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
union pthread_attr_t;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
union __anonunion____missing_field_name_921806627;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct_div_t_773697287;
struct __pthread_mutex_s;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_rwlock_arch_t;
struct random_data;
union __anonunion____missing_field_name_254733131;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct_ldiv_t_790849867;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct drand48_data;
struct __pthread_internal_list;
union __anonunion_pthread_mutex_t_335460617;
union __anonunion_pthread_rwlock_t_656928968;
enum __anonenum_idtype_t_558242672;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_cond_s;
union __anonunion_pthread_barrierattr_t_951761806;
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
unsigned long _1_entropy = 887241272050392953UL;
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
typedef long __off64_t;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
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
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
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
typedef __int32_t int32_t;
typedef __int16_t __int_least16_t;
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
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
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
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(unsigned int input);
typedef __pid_t pid_t;
typedef struct __pthread_internal_slist __pthread_slist_t;
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
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
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
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
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
  int tmp___63;
  int tmp___64;
  int tmp___65;
  int tmp___66;
  int tmp___67;
  int tmp___68;
  int tmp___69;
  int tmp___70;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p81;
  int i82;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p83;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p87;
  int i88;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p89;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p87 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p87->next = p87;
      p87->prev = p87;
      _2_OBF_FUNC_2_opaque_list_1 = p87;
      i88 = 0;
      while (i88 < 4) {
        p89 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p89->data = i88 * ((_1_entropy & 5) * (_1_entropy | 5) + (_1_entropy & ~5) * (~_1_entropy & 5));
        p89->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p89->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p89;
        _2_OBF_FUNC_2_opaque_list_1->next = p89;
        i88++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p81 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p81->next = p81;
      p81->prev = p81;
      _2_OBF_FUNC_1_opaque_list_1 = p81;
      i82 = 0;
      while (i82 < 2) {
        p83 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p83->data = i82 * ((_1_entropy | 5) - (_1_entropy & 5));
        p83->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p83->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p83;
        _2_OBF_FUNC_1_opaque_list_1->next = p83;
        i82++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_2->next;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 319896263UL) - 2520718148UL);
    localStaticState[1UL] = input - localStaticState[0UL];
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL])) % 4UL) {
    case 0UL:
      if ((localStaticState[0UL] >> 2U) & 1U) {
        if ((localStaticState[0UL] >> 2U) & 1U) {
          localStaticState[1UL] -= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
          localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        }
      }
      break;
    case 1UL:
      if (!((localStaticState[1UL] >> 4U) & 1U)) {
        _induction1_0_2 = 0U;
        _index0_1 = 0U;
        while ((unsigned long)_index0_1 < 1UL) {
          tmp = rand();
          if (tmp % 10 >= 5) {
            break;
          }
          tmp___0 = rand();
          if (tmp___0 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___1 = rand();
          if (tmp___1 % 10 >= 5) {
            break;
          }
          tmp___2 = rand();
          if (tmp___2 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          {
            if (_2_OBF_FUNC_2_opaque_ptr_1 == _2_OBF_FUNC_2_opaque_ptr_2) {
              tmp___3 = rand();
            } else {
            }
          }
          if (tmp___3 % 10 >= 5) {
            break;
          }
          tmp___4 = rand();
          if (tmp___4 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___5 = rand();
          if (tmp___5 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___6 = rand();
          if (tmp___6 % 10 >= 5) {
            break;
          }
          tmp___7 = rand();
          if (tmp___7 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___8 = rand();
          if (tmp___8 % 10 >= 5) {
            break;
          }
          tmp___9 = rand();
          if (tmp___9 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___10 = rand();
          if (tmp___10 % 10 >= 5) {
            break;
          }
          tmp___11 = rand();
          if (tmp___11 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___12 = rand();
          if (tmp___12 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___13 = rand();
          if (tmp___13 % 10 >= 5) {
            break;
          }
          tmp___14 = rand();
          if (tmp___14 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___15 = rand();
          if (tmp___15 % 10 >= 5) {
            break;
          }
          tmp___16 = rand();
          if (tmp___16 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___17 = rand();
          if (tmp___17 % 10 >= 5) {
            break;
          }
          tmp___18 = rand();
          if (tmp___18 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___19 = rand();
          if (tmp___19 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___20 = rand();
          if (tmp___20 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___21 = rand();
          if (tmp___21 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          tmp___22 = rand();
          if (tmp___22 % 10 >= 5) {
            break;
          }
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        while ((unsigned long)_index0_1 < 1UL) {
          _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
          _index0_1++;
        }
        if ((localStaticState[1UL] >> 1U) & 1U) {
          _induction3_2_2 = 0U;
          _index2_2 = 0U;
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___23 = rand();
            if (tmp___23 % 10 >= 5) {
              break;
            }
            tmp___24 = rand();
            if (tmp___24 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___25 = rand();
            if (tmp___25 % 10 >= 5) {
              break;
            }
            tmp___26 = rand();
            if (tmp___26 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___27 = rand();
            if (tmp___27 % 10 >= 5) {
              break;
            }
            tmp___28 = rand();
            if (tmp___28 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___29 = rand();
            if (tmp___29 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___30 = rand();
            if (tmp___30 % 10 >= 5) {
              break;
            }
            tmp___31 = rand();
            if (tmp___31 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___32 = rand();
            if (tmp___32 % 10 >= 5) {
              break;
            }
            tmp___33 = rand();
            if (tmp___33 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___34 = rand();
            if (tmp___34 % 10 >= 5) {
              if (_2_OBF_FUNC_2_opaque_ptr_1 == _2_OBF_FUNC_2_opaque_ptr_2) {
                break;
              } else {
              }
            }
            tmp___35 = rand();
            if (tmp___35 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___36 = rand();
            if (tmp___36 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___37 = rand();
            if (tmp___37 % 10 >= 5) {
              break;
            }
            tmp___38 = rand();
            if (tmp___38 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___39 = rand();
            if (tmp___39 % 10 >= 5) {
              break;
            }
            tmp___40 = rand();
            if (tmp___40 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___41 = rand();
            if (tmp___41 % 10 >= 5) {
              break;
            }
            tmp___42 = rand();
            if (tmp___42 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___43 = rand();
            if (tmp___43 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___44 = rand();
            if (tmp___44 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___45 = rand();
            if (tmp___45 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            tmp___46 = rand();
            if (tmp___46 % 10 >= 5) {
              break;
            }
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          while ((unsigned long)_index2_2 < 2UL) {
            _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
            _index2_2++;
          }
          localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        }
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL:
          _induction5_4_2 = 0U;
          _index4_3 = 0U;
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___47 = rand();
            if (tmp___47 % 10 >= 5) {
              break;
            }
            tmp___48 = rand();
            if (tmp___48 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___49 = rand();
            if (tmp___49 % 10 >= 5) {
              break;
            }
            tmp___50 = rand();
            if (tmp___50 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___51 = rand();
            if (tmp___51 % 10 >= 5) {
              break;
            }
            tmp___52 = rand();
            if (tmp___52 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___53 = rand();
            if (tmp___53 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___54 = rand();
            if (tmp___54 % 10 >= 5) {
              break;
            }
            tmp___55 = rand();
            if (tmp___55 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___56 = rand();
            if (tmp___56 % 10 >= 5) {
              break;
            }
            tmp___57 = rand();
            if (tmp___57 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___58 = rand();
            if (tmp___58 % 10 >= 5) {
              break;
            }
            tmp___59 = rand();
            if (tmp___59 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___60 = rand();
            if (tmp___60 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___61 = rand();
            if (tmp___61 % 10 >= 5) {
              break;
            }
            tmp___62 = rand();
            if (tmp___62 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___63 = rand();
            if (tmp___63 % 10 >= 5) {
              break;
            }
            tmp___64 = rand();
            if (tmp___64 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___65 = rand();
            if (tmp___65 % 10 >= 5) {
              break;
            }
            tmp___66 = rand();
            if (tmp___66 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___67 = rand();
            if (tmp___67 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___68 = rand();
            if (tmp___68 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___69 = rand();
            if (tmp___69 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            tmp___70 = rand();
            if (tmp___70 % 10 >= 5) {
              break;
            }
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          while ((unsigned long)_index4_3 < 3UL) {
            localStaticState[0UL] += localStaticState[_induction5_4_2];
            localStaticState[(unsigned long)_index4_3 % 2UL] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
            _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
            _index4_3++;
          }
          break;
        case 1UL:
          localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
          break;
        default:
          localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
          break;
        }
      }
      break;
    default:
      localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[1UL];
      break;
    }
    return ((localStaticState[0UL] + localStaticState[1UL]) + 1526626564U);
  }
}
// variants: loop-fission, loop-fission, deadcode
// expanded variants: loop-fission, loop-fission, deadcode:True
