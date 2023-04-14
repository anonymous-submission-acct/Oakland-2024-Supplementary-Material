typedef void *__builtin_va_list;
struct __pthread_internal_list;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_rwlock_t_656928968;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_mutexattr_t_488594144;
struct timeval;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_cond_t_951761805;
union __anonunion____missing_field_name_608131649;
struct __anonstruct_lldiv_t_103911545;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_mutex_t_335460617;
struct __pthread_cond_s;
struct __anonstruct___fsid_t_109580352;
union pthread_attr_t;
struct timespec;
struct __anonstruct___g1_start32_961093919;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
struct __pthread_internal_slist;
union __anonunion____missing_field_name_269558201;
struct __anonstruct_div_t_773697287;
struct __pthread_mutex_s;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct_ldiv_t_790849867;
struct drand48_data;
struct random_data;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_rwlock_arch_t;
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
unsigned long _1_entropy = 8147260096768029501UL;
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
typedef long __off64_t;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern int(at_quick_exit)(void (*__func)(void));
extern double(strtod)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
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
extern int(abs)(int __x);
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_608131649 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
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
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
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
union __anonunion____missing_field_name_269558201 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_608131649 __annonCompField1;
  union __anonunion____missing_field_name_269558201 __annonCompField2;
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
void OBF_FUNC(int x);
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
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
void OBF_FUNC(int x) {
  int c;
  int n;
  int __RANDVAR__39921589014014502718__;
  int __RANDVAR__82045735087292133445__;
  int tmp;
  int tmp___0;
  int tmp___1;
  int __RANDVAR__5409437644648275508__;
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
  int __RANDVAR__74660540961264548428__;
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
  int __RANDVAR__66250510434549413865__;
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
  int __RANDVAR__95088908413024838438__;
  int tmp___65;
  int tmp___66;
  int tmp___67;
  int tmp___68;
  int tmp___69;
  int tmp___70;
  int tmp___71;
  int tmp___72;
  int tmp___73;
  int tmp___74;
  int tmp___75;
  int tmp___76;
  int tmp___77;
  int tmp___78;
  int tmp___79;
  int tmp___80;
  int tmp___81;
  int tmp___82;
  int tmp___83;
  int tmp___84;
  int tmp___85;
  int __RANDVAR__29765070709337543425__;
  int tmp___86;
  int tmp___87;
  int tmp___88;
  int tmp___89;
  int tmp___90;
  int tmp___91;
  int tmp___92;
  int tmp___93;
  int tmp___94;
  int tmp___95;
  int tmp___96;
  int tmp___97;
  int tmp___98;
  int tmp___99;
  int tmp___100;
  int tmp___101;
  int tmp___102;
  int tmp___103;
  int tmp___104;
  int tmp___105;
  int tmp___106;
  int __RANDVAR__82611553465020885398__;
  int tmp___107;
  int tmp___108;
  int tmp___109;
  int tmp___110;
  int tmp___111;
  int tmp___112;
  int tmp___113;
  int tmp___114;
  int tmp___115;
  int tmp___116;
  int tmp___117;
  int tmp___118;
  int tmp___119;
  int tmp___120;
  int tmp___121;
  int tmp___122;
  int tmp___123;
  int tmp___124;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p138;
  int i139;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p140;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p144;
  int i145;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p146;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p144 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p144->next = p144;
      p144->prev = p144;
      _2_OBF_FUNC_2_opaque_list_1 = p144;
      i145 = 0;
      while (i145 < 3) {
        p146 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p146->data = i145 * ((_1_entropy ^ 5) + ((_1_entropy & 5) + (_1_entropy & 5)));
        p146->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p146->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p146;
        _2_OBF_FUNC_2_opaque_list_1->next = p146;
        i145++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p138 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p138->next = p138;
      p138->prev = p138;
      _2_OBF_FUNC_1_opaque_list_1 = p138;
      i139 = 0;
      while (i139 < 3) {
        p140 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p140->data = i139 * ((_1_entropy & ~3) + 3);
        p140->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p140->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p140;
        _2_OBF_FUNC_1_opaque_list_1->next = p140;
        i139++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    printf("%d random numbers in [1,100]\n", x);
    c = 1;
    __RANDVAR__39921589014014502718__ = 0;
    __RANDVAR__82045735087292133445__ = 0;
    while (__RANDVAR__82045735087292133445__ == 0) {
      if (__RANDVAR__39921589014014502718__ == 0) {
        if (c <= x) {
          tmp = rand();
          n = tmp % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___0 = rand();
          n = tmp___0 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___1 = rand();
          n = tmp___1 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        __RANDVAR__5409437644648275508__ = 0;
        while (__RANDVAR__5409437644648275508__ == 0) {
          if (c <= x) {
            if (c <= x) {
              tmp___2 = rand();
              n = tmp___2 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___3 = rand();
              n = tmp___3 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            {
              if (_2_OBF_FUNC_1_opaque_ptr_1 != _2_OBF_FUNC_1_opaque_ptr_2) {
                {
                  while ((c <= x) > tmp___33) {
                    tmp___4 = rand();
                    n = tmp___14;
                    printf("%d\n" + -1, n | 5);
                    c = 6;
                  }
                }
              } else if (c <= x) {
                tmp___4 = rand();
                n = tmp___4 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___5 = rand();
              n = tmp___5 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___6 = rand();
              n = tmp___6 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___7 = rand();
              n = tmp___7 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___8 = rand();
              n = tmp___8 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___9 = rand();
              n = tmp___9 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___10 = rand();
              n = tmp___10 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          while (c <= x) {
            if (c <= x) {
              if (c <= x) {
                tmp___11 = rand();
                n = tmp___11 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___12 = rand();
                n = tmp___12 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___13 = rand();
                n = tmp___13 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___14 = rand();
                n = tmp___14 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___15 = rand();
                n = tmp___15 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___16 = rand();
                n = tmp___16 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___17 = rand();
                n = tmp___17 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___18 = rand();
                n = tmp___18 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___19 = rand();
                n = tmp___19 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
          }
          __RANDVAR__5409437644648275508__ = 1;
        }
        __RANDVAR__39921589014014502718__ = 1;
      }
      if (__RANDVAR__39921589014014502718__ == 0) {
        if (c <= x) {
          tmp___20 = rand();
          n = tmp___20 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___21 = rand();
          n = tmp___21 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___22 = rand();
          n = tmp___22 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        __RANDVAR__74660540961264548428__ = 0;
        while (__RANDVAR__74660540961264548428__ == 0) {
          if (c <= x) {
            if (c <= x) {
              tmp___23 = rand();
              n = tmp___23 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___24 = rand();
              n = tmp___24 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___25 = rand();
              n = tmp___25 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___26 = rand();
              n = tmp___26 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___27 = rand();
              n = tmp___27 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___28 = rand();
              n = tmp___28 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___29 = rand();
              n = tmp___29 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___30 = rand();
              n = tmp___30 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___31 = rand();
              n = tmp___31 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          while (c <= x) {
            if (c <= x) {
              if (c <= x) {
                tmp___32 = rand();
                n = tmp___32 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___33 = rand();
                n = tmp___33 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___34 = rand();
                n = tmp___34 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___35 = rand();
                n = tmp___35 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___36 = rand();
                n = tmp___36 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___37 = rand();
                n = tmp___37 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___38 = rand();
                n = tmp___38 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___39 = rand();
                n = tmp___39 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___40 = rand();
                n = tmp___40 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
          }
          __RANDVAR__74660540961264548428__ = 1;
        }
        __RANDVAR__39921589014014502718__ = 1;
      }
      if (__RANDVAR__39921589014014502718__ == 0) {
        if (c <= x) {
          tmp___41 = rand();
          n = tmp___41 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___42 = rand();
          n = tmp___42 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        if (c <= x) {
          tmp___43 = rand();
          n = tmp___43 % 100 + 1;
          printf("%d\n", n);
          c++;
        }
        __RANDVAR__66250510434549413865__ = 0;
        while (__RANDVAR__66250510434549413865__ == 0) {
          if (c <= x) {
            if (c <= x) {
              tmp___44 = rand();
              n = tmp___44 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___45 = rand();
              n = tmp___45 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___46 = rand();
              n = tmp___46 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___47 = rand();
              n = tmp___47 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___48 = rand();
              n = tmp___48 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___49 = rand();
              n = tmp___49 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          if (c <= x) {
            if (c <= x) {
              tmp___50 = rand();
              n = tmp___50 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___51 = rand();
              n = tmp___51 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
            if (c <= x) {
              tmp___52 = rand();
              n = tmp___52 % 100 + 1;
              printf("%d\n", n);
              c++;
            }
          }
          while (c <= x) {
            if (c <= x) {
              if (c <= x) {
                tmp___53 = rand();
                n = tmp___53 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___54 = rand();
                n = tmp___54 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___55 = rand();
                n = tmp___55 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___56 = rand();
                n = tmp___56 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___57 = rand();
                n = tmp___57 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___58 = rand();
                n = tmp___58 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___59 = rand();
                n = tmp___59 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___60 = rand();
                n = tmp___60 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___61 = rand();
                n = tmp___61 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
          }
          __RANDVAR__66250510434549413865__ = 1;
        }
        __RANDVAR__39921589014014502718__ = 1;
      }
      while (__RANDVAR__39921589014014502718__ == 0) {
        if (__RANDVAR__39921589014014502718__ == 0) {
          if (c <= x) {
            tmp___62 = rand();
            n = tmp___62 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___63 = rand();
            n = tmp___63 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___64 = rand();
            n = tmp___64 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          __RANDVAR__95088908413024838438__ = 0;
          while (__RANDVAR__95088908413024838438__ == 0) {
            if (c <= x) {
              if (c <= x) {
                tmp___65 = rand();
                n = tmp___65 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___66 = rand();
                n = tmp___66 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___67 = rand();
                n = tmp___67 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___68 = rand();
                n = tmp___68 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___69 = rand();
                n = tmp___69 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___70 = rand();
                n = tmp___70 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___71 = rand();
                n = tmp___71 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___72 = rand();
                n = tmp___72 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___73 = rand();
                n = tmp___73 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            while (c <= x) {
              if (c <= x) {
                if (c <= x) {
                  tmp___74 = rand();
                  n = tmp___74 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___75 = rand();
                  n = tmp___75 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___76 = rand();
                  n = tmp___76 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___77 = rand();
                  n = tmp___77 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___78 = rand();
                  n = tmp___78 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___79 = rand();
                  n = tmp___79 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___80 = rand();
                  n = tmp___80 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___81 = rand();
                  n = tmp___81 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___82 = rand();
                  n = tmp___82 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
            }
            __RANDVAR__95088908413024838438__ = 1;
          }
          __RANDVAR__39921589014014502718__ = 1;
        }
        if (__RANDVAR__39921589014014502718__ == 0) {
          if (c <= x) {
            tmp___83 = rand();
            n = tmp___83 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___84 = rand();
            n = tmp___84 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___85 = rand();
            n = tmp___85 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          __RANDVAR__29765070709337543425__ = 0;
          while (__RANDVAR__29765070709337543425__ == 0) {
            if (c <= x) {
              if (c <= x) {
                tmp___86 = rand();
                n = tmp___86 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___87 = rand();
                n = tmp___87 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___88 = rand();
                n = tmp___88 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___89 = rand();
                n = tmp___89 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___90 = rand();
                n = tmp___90 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___91 = rand();
                n = tmp___91 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___92 = rand();
                n = tmp___92 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___93 = rand();
                n = tmp___93 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___94 = rand();
                n = tmp___94 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            while (1) {
              if (!(c <= x)) {
                if (_2_OBF_FUNC_1_opaque_ptr_1 != _2_OBF_FUNC_1_opaque_ptr_2) {
                  return;
                } else {
                  break;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___95 = rand();
                  n = tmp___95 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___96 = rand();
                  n = tmp___96 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___97 = rand();
                  n = tmp___97 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___98 = rand();
                  n = tmp___98 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___99 = rand();
                  n = tmp___99 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___100 = rand();
                  n = tmp___100 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___101 = rand();
                  n = tmp___101 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___102 = rand();
                  n = tmp___102 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___103 = rand();
                  n = tmp___103 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
            }
            __RANDVAR__29765070709337543425__ = 1;
          }
          __RANDVAR__39921589014014502718__ = 1;
        }
        if (__RANDVAR__39921589014014502718__ == 0) {
          if (c <= x) {
            tmp___104 = rand();
            n = tmp___104 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___105 = rand();
            n = tmp___105 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          if (c <= x) {
            tmp___106 = rand();
            n = tmp___106 % 100 + 1;
            printf("%d\n", n);
            c++;
          }
          __RANDVAR__82611553465020885398__ = 0;
          while (__RANDVAR__82611553465020885398__ == 0) {
            if (c <= x) {
              if (c <= x) {
                tmp___107 = rand();
                n = tmp___107 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___108 = rand();
                n = tmp___108 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___109 = rand();
                n = tmp___109 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___110 = rand();
                n = tmp___110 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___111 = rand();
                n = tmp___111 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___112 = rand();
                n = tmp___112 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            if (c <= x) {
              if (c <= x) {
                tmp___113 = rand();
                n = tmp___113 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___114 = rand();
                n = tmp___114 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
              if (c <= x) {
                tmp___115 = rand();
                n = tmp___115 % 100 + 1;
                printf("%d\n", n);
                c++;
              }
            }
            while (c <= x) {
              if (c <= x) {
                if (c <= x) {
                  tmp___116 = rand();
                  n = tmp___116 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___117 = rand();
                  n = tmp___117 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___118 = rand();
                  n = tmp___118 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___119 = rand();
                  n = tmp___119 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___120 = rand();
                  n = tmp___120 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___121 = rand();
                  n = tmp___121 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
              if (c <= x) {
                if (c <= x) {
                  tmp___122 = rand();
                  n = tmp___122 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___123 = rand();
                  n = tmp___123 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
                if (c <= x) {
                  tmp___124 = rand();
                  n = tmp___124 % 100 + 1;
                  printf("%d\n", n);
                  c++;
                }
              }
            }
            __RANDVAR__82611553465020885398__ = 1;
          }
          __RANDVAR__39921589014014502718__ = 1;
        }
      }
      __RANDVAR__82045735087292133445__ = 1;
    }
    return;
  }
}
// variants: loop-unroll, loop-unroll, deadcode
// expanded variants: loop-unroll, loop-unroll, deadcode:bug
