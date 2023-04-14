typedef void *__builtin_va_list;
union __anonunion____missing_field_name_254733131;
union __anonunion_pthread_mutexattr_t_488594144;
struct drand48_data;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_cond_t_951761805;
struct __pthread_internal_slist;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion_pthread_rwlock_t_656928968;
struct timeval;
struct __anonstruct___g1_start32_961093919;
struct __pthread_mutex_s;
union __anonunion_pthread_rwlockattr_t_145707745;
struct random_data;
struct __anonstruct___fsid_t_109580352;
union __anonunion_pthread_mutex_t_335460617;
union pthread_attr_t;
struct __anonstruct___sigset_t_973126068;
union __anonunion____missing_field_name_921806627;
enum __anonenum_idtype_t_558242672;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct_div_t_773697287;
struct __pthread_cond_s;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_barrier_t_145707746;
union __anonunion_pthread_condattr_t_488594145;
struct timespec;
struct __anonstruct_fd_set_356711149;
struct __pthread_internal_list;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __mode_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
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
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
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
unsigned long _2_entropy = 6997801452406165762UL;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
typedef __uint64_t __uint_least64_t;
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
extern int(wctomb)(char *__s, wchar_t __wchar);
extern long(nrand48)(unsigned short *__xsubi);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(unsigned int input);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_1;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
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
  int tmp___125;
  int tmp___126;
  int tmp___127;
  int tmp___128;
  int tmp___129;
  int tmp___130;
  int tmp___131;
  int tmp___132;
  int tmp___133;
  int tmp___134;
  int tmp___135;
  int tmp___136;
  int tmp___137;
  int tmp___138;
  int tmp___139;
  int tmp___140;
  int tmp___141;
  int tmp___142;
  int tmp___143;
  int tmp___144;
  int tmp___145;
  int tmp___146;
  int tmp___147;
  int tmp___148;
  int tmp___149;
  int tmp___150;
  int tmp___151;
  int tmp___152;
  int tmp___153;
  int tmp___154;
  int tmp___155;
  int tmp___156;
  int tmp___157;
  int tmp___158;
  int tmp___159;
  int tmp___160;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p182;
  int i183;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p184;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p188;
  int i189;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p190;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p188 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p188->next = p188;
      p188->prev = p188;
      _3_OBF_FUNC_2_opaque_list_1 = p188;
      i189 = 0;
      while (i189 < 2) {
        p190 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p190->data = i189 * ((_2_entropy - ~2) - 1UL);
        p190->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p190->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p190;
        _3_OBF_FUNC_2_opaque_list_1->next = p190;
        i189++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p182 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p182->next = p182;
      p182->prev = p182;
      _3_OBF_FUNC_1_opaque_list_1 = p182;
      i183 = 0;
      while (i183 < 4) {
        p184 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p184->data = i183 * ((_2_entropy & 5) * (_2_entropy | 5) + (_2_entropy & ~5) * (~_2_entropy & 5));
        p184->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p184->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p184;
        _3_OBF_FUNC_1_opaque_list_1->next = p184;
        i183++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 1276UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 386:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1355UL;
        break;
      case 1392:
        _index14_0++;
        _1_OBF_FUNC_next = 1217UL;
        break;
      case 1460:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 330UL;
        break;
      case 588:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 2UL;
        break;
      case 80:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 1774:
        tmp___36 = rand();
        _1_OBF_FUNC_next = 788UL;
        break;
      case 302:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1422UL;
        break;
      case 1317:
        _index14_0++;
        _1_OBF_FUNC_next = 587UL;
        break;
      case 1457:
        tmp___147 = rand();
        _1_OBF_FUNC_next = 1713UL;
        break;
      case 188:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1423UL;
        break;
      case 1190:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 540UL;
        } else {
          _1_OBF_FUNC_next = 315UL;
        }
        break;
      case 488:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1453UL;
        break;
      case 1072:;
        if (tmp___148 % 10 >= 5) {
          _1_OBF_FUNC_next = 674UL;
        } else {
          _1_OBF_FUNC_next = 197UL;
        }
        break;
      case 654:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1358UL;
        } else {
          _1_OBF_FUNC_next = 1087UL;
        }
        break;
      case 834:;
        if (tmp___38 % 10 >= 5) {
          _1_OBF_FUNC_next = 1703UL;
        } else {
          _1_OBF_FUNC_next = 888UL;
        }
        break;
      case 439:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1060UL;
        break;
      case 559:
        _index14_0++;
        _1_OBF_FUNC_next = 13UL;
        break;
      case 1827:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1879UL;
        } else {
          _1_OBF_FUNC_next = 1795UL;
        }
        break;
      case 1715:
        tmp___109 = rand();
        _1_OBF_FUNC_next = 454UL;
        break;
      case 585:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 625UL;
        break;
      case 465:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 604UL;
        } else {
          _1_OBF_FUNC_next = 67UL;
        }
        break;
      case 1288:
        tmp___14 = rand();
        _1_OBF_FUNC_next = 277UL;
        break;
      case 1740:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 1625UL;
        break;
      case 1344:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 982UL;
        } else {
          _1_OBF_FUNC_next = 518UL;
        }
        break;
      case 1091:
        _index8_0 = 0U;
        _1_OBF_FUNC_next = 665UL;
        break;
      case 425:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1437UL;
        break;
      case 780:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 402UL;
        } else {
          _1_OBF_FUNC_next = 1544UL;
        }
        break;
      case 1206:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 819UL;
        break;
      case 1323:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 346UL;
        break;
      case 1238:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1302UL;
        break;
      case 1529:
        tmp___117 = rand();
        _1_OBF_FUNC_next = 1869UL;
        break;
      case 1585:;
        if (tmp___134 % 10 >= 5) {
          _1_OBF_FUNC_next = 310UL;
        } else {
          _1_OBF_FUNC_next = 1638UL;
        }
        break;
      case 1395:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 261UL;
        } else {
          _1_OBF_FUNC_next = 1938UL;
        }
        break;
      case 1465:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 666UL;
        } else {
          _1_OBF_FUNC_next = 1108UL;
        }
        break;
      case 1077:
        tmp___103 = rand();
        _1_OBF_FUNC_next = 376UL;
        break;
      case 160:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1023UL;
        break;
      case 235:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1002UL;
        } else {
          _1_OBF_FUNC_next = 774UL;
        }
        break;
      case 1967:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1593UL;
        } else {
          _1_OBF_FUNC_next = 411UL;
        }
        break;
      case 1018:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1517UL;
        break;
      case 1880:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 600UL;
        } else {
          _1_OBF_FUNC_next = 1343UL;
        }
        break;
      case 1396:
        tmp___129 = rand();
        _1_OBF_FUNC_next = 1196UL;
        break;
      case 1554:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1626UL;
        break;
      case 622:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1799UL;
        } else {
          _1_OBF_FUNC_next = 383UL;
        }
        break;
      case 403:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          _1_OBF_FUNC_next = 514UL;
        } else {
          _1_OBF_FUNC_next = 201UL;
        }
        break;
      case 691:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1580UL;
        break;
      case 1511:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1166UL;
        break;
      case 242:
        tmp___35 = rand();
        _1_OBF_FUNC_next = 1812UL;
        break;
      case 159:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1299UL;
        break;
      case 1655:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 490UL;
        break;
      case 3:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 559UL;
        break;
      case 781:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 54UL;
        } else {
          _1_OBF_FUNC_next = 840UL;
        }
        break;
      case 21:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1927UL;
        } else {
          _1_OBF_FUNC_next = 1562UL;
        }
        break;
      case 484:
        _index14_0++;
        _1_OBF_FUNC_next = 808UL;
        break;
      case 521:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1810UL;
        } else {
          _1_OBF_FUNC_next = 1849UL;
        }
        break;
      case 1271:
        tmp___96 = rand();
        _1_OBF_FUNC_next = 1318UL;
        break;
      case 1338:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 613UL;
        break;
      case 1119:;
        if (tmp___121 % 10 >= 5) {
          _1_OBF_FUNC_next = 383UL;
        } else {
          _1_OBF_FUNC_next = 643UL;
        }
        break;
      case 1227:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 92UL;
        break;
      case 237:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1425UL;
        break;
      case 767:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 384UL;
        break;
      case 1349:;
        if ((unsigned long)_index6_0 < 0UL) {
          _1_OBF_FUNC_next = 1288UL;
        } else {
          _1_OBF_FUNC_next = 1140UL;
        }
        break;
      case 1969:;
        if (tmp___60 % 10 >= 5) {
          _1_OBF_FUNC_next = 1087UL;
        } else {
          _1_OBF_FUNC_next = 51UL;
        }
        break;
      case 1984:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1980UL;
        break;
      case 1497:
        tmp___160 = rand();
        _1_OBF_FUNC_next = 406UL;
        break;
      case 1742:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1496UL;
        break;
      case 279:
        tmp___152 = rand();
        _1_OBF_FUNC_next = 1366UL;
        break;
      case 186:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1434UL;
        } else {
          _1_OBF_FUNC_next = 424UL;
        }
        break;
      case 1289:;
        if (tmp___32 % 10 >= 5) {
          _1_OBF_FUNC_next = 1426UL;
        } else {
          _1_OBF_FUNC_next = 722UL;
        }
        break;
      case 1586:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 258UL;
        break;
      case 1958:
        tmp___16 = rand();
        _1_OBF_FUNC_next = 652UL;
        break;
      case 211:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 138UL;
        break;
      case 433:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 1688UL;
        } else {
          _1_OBF_FUNC_next = 1681UL;
        }
        break;
      case 634:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 386UL;
        break;
      case 1175:;
        if (tmp___76 % 10 >= 5) {
          _1_OBF_FUNC_next = 1282UL;
        } else {
          _1_OBF_FUNC_next = 283UL;
        }
        break;
      case 1546:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1669UL;
        break;
      case 326:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          _1_OBF_FUNC_next = 949UL;
        } else {
          _1_OBF_FUNC_next = 219UL;
        }
        break;
      case 392:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 974UL;
        } else {
          _1_OBF_FUNC_next = 1625UL;
        }
        break;
      case 627:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1739UL;
        break;
      case 1646:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 242UL;
        } else {
          _1_OBF_FUNC_next = 1900UL;
        }
        break;
      case 17:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1852UL;
        break;
      case 391:;
        if (tmp___138 % 10 >= 5) {
          _1_OBF_FUNC_next = 1213UL;
        } else {
          _1_OBF_FUNC_next = 1686UL;
        }
        break;
      case 1612:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1475UL;
        break;
      case 313:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 649UL;
        break;
      case 889:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1056UL;
        break;
      case 1474:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 97UL;
        break;
      case 295:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1935UL;
        } else {
          _1_OBF_FUNC_next = 781UL;
        }
        break;
      case 930:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 487UL;
        break;
      case 1937:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1953UL;
        break;
      case 1340:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 172UL;
        break;
      case 1539:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1078UL;
        break;
      case 787:;
        if (tmp___131 % 10 >= 5) {
          _1_OBF_FUNC_next = 1894UL;
        } else {
          _1_OBF_FUNC_next = 853UL;
        }
        break;
      case 550:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1816UL;
        break;
      case 1132:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 703UL;
        } else {
          _1_OBF_FUNC_next = 459UL;
        }
        break;
      case 1200:;
        if (tmp___113 % 10 >= 5) {
          _1_OBF_FUNC_next = 1291UL;
        } else {
          _1_OBF_FUNC_next = 1483UL;
        }
        break;
      case 1197:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1490UL;
        break;
      case 1624:
        tmp___106 = rand();
        {
          if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
          } else {
            _1_OBF_FUNC_next = 410UL;
          }
        }
        break;
      case 142:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1460UL;
        break;
      case 416:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 279UL;
        } else {
          _1_OBF_FUNC_next = 1951UL;
        }
        break;
      case 926:
        tmp___75 = rand();
        _1_OBF_FUNC_next = 445UL;
        break;
      case 262:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 479UL;
        } else {
          _1_OBF_FUNC_next = 419UL;
        }
        break;
      case 27:;
        if (tmp___154 % 10 >= 5) {
          _1_OBF_FUNC_next = 965UL;
        } else {
          _1_OBF_FUNC_next = 366UL;
        }
        break;
      case 755:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1487UL;
        } else {
          _1_OBF_FUNC_next = 1183UL;
        }
        break;
      case 334:;
        if (tmp___144 % 10 >= 5) {
          _1_OBF_FUNC_next = 1354UL;
        } else {
          _1_OBF_FUNC_next = 825UL;
        }
        break;
      case 395:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 460:;
        if (tmp___82 % 10 >= 5) {
          _1_OBF_FUNC_next = 1165UL;
        } else {
          _1_OBF_FUNC_next = 497UL;
        }
        break;
      case 1933:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1636UL;
        break;
      case 1518:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 388UL;
        break;
      case 364:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 484UL;
        break;
      case 251:
        tmp___95 = rand();
        _1_OBF_FUNC_next = 0UL;
        break;
      case 432:
        tmp___130 = rand();
        _1_OBF_FUNC_next = 941UL;
        break;
      case 1800:
        _index14_0++;
        _1_OBF_FUNC_next = 1804UL;
        break;
      case 1977:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1170UL;
        break;
      case 359:
        _index14_0++;
        _1_OBF_FUNC_next = 1656UL;
        break;
      case 946:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1728UL;
        break;
      case 987:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1777UL;
        break;
      case 1782:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 874UL;
        break;
      case 1090:
        _index14_0++;
        _1_OBF_FUNC_next = 383UL;
        break;
      case 222:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 607UL;
        } else {
          _1_OBF_FUNC_next = 496UL;
        }
        break;
      case 1623:
        _index14_0++;
        _1_OBF_FUNC_next = 774UL;
        break;
      case 617:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 939UL;
        break;
      case 1888:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1147UL;
        break;
      case 829:
        _index14_0++;
        _1_OBF_FUNC_next = 1862UL;
        break;
      case 892:
        tmp___84 = rand();
        _1_OBF_FUNC_next = 1427UL;
        break;
      case 1226:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 966UL;
        } else {
          _1_OBF_FUNC_next = 1912UL;
        }
        break;
      case 1312:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1940UL;
        break;
      case 943:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 392UL;
        break;
      case 5:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 1316UL;
        break;
      case 596:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1779UL;
        } else {
          _1_OBF_FUNC_next = 452UL;
        }
        break;
      case 365:
        _index14_0++;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 933:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 872UL;
        break;
      case 1282:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 680UL;
        } else {
          _1_OBF_FUNC_next = 1870UL;
        }
        break;
      case 162:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 883UL;
        } else {
          _1_OBF_FUNC_next = 1913UL;
        }
        break;
      case 1645:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 743UL;
        break;
      case 33:
        tmp___82 = rand();
        _1_OBF_FUNC_next = 460UL;
        break;
      case 673:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1214UL;
        } else {
          _1_OBF_FUNC_next = 634UL;
        }
        break;
      case 1085:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1671UL;
        break;
      case 1506:;
        if (tmp___15 % 10 >= 5) {
          _1_OBF_FUNC_next = 633UL;
        } else {
          _1_OBF_FUNC_next = 475UL;
        }
        break;
      case 175:
        _index14_0++;
        _1_OBF_FUNC_next = 1845UL;
        break;
      case 1836:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 352UL;
        break;
      case 1390:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1564UL;
        break;
      case 1896:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 859UL;
        break;
      case 1904:
        _index14_0++;
        _1_OBF_FUNC_next = 688UL;
        break;
      case 92:
        _index14_0++;
        _1_OBF_FUNC_next = 214UL;
        break;
      case 10:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1458UL;
        break;
      case 916:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 32UL;
        } else {
          _1_OBF_FUNC_next = 1049UL;
        }
        break;
      case 1875:;
        if (tmp___104 % 10 >= 5) {
          _1_OBF_FUNC_next = 328UL;
        } else {
          _1_OBF_FUNC_next = 396UL;
        }
        break;
      case 1900:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 480UL;
        } else {
          _1_OBF_FUNC_next = 887UL;
        }
        break;
      case 846:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1027UL;
        } else {
          _1_OBF_FUNC_next = 371UL;
        }
        break;
      case 1313:
        _index14_0++;
        _1_OBF_FUNC_next = 127UL;
        break;
      case 1533:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 565UL;
        break;
      case 417:
        _index14_0++;
        _1_OBF_FUNC_next = 1500UL;
        break;
      case 1476:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 66UL;
        break;
      case 1523:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 815UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 153:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 1895UL;
        } else {
          _1_OBF_FUNC_next = 1880UL;
        }
        break;
      case 727:
        _index14_0++;
        _1_OBF_FUNC_next = 557UL;
        break;
      case 1198:
        tmp___91 = rand();
        _1_OBF_FUNC_next = 1855UL;
        break;
      case 1941:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1030UL;
        } else {
          _1_OBF_FUNC_next = 634UL;
        }
        break;
      case 1209:
        tmp___62 = rand();
        _1_OBF_FUNC_next = 1955UL;
        break;
      case 1380:;
        if (tmp___58 % 10 >= 5) {
          _1_OBF_FUNC_next = 186UL;
        } else {
          _1_OBF_FUNC_next = 1657UL;
        }
        break;
      case 605:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 230UL;
        break;
      case 671:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 889UL;
        } else {
          _1_OBF_FUNC_next = 1056UL;
        }
        break;
      case 968:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 87UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 21UL;
          break;
        default:
          _1_OBF_FUNC_next = 1783UL;
          break;
        }
        break;
      case 948:
        tmp___143 = rand();
        _1_OBF_FUNC_next = 1808UL;
        break;
      case 826:
        _index14_0++;
        _1_OBF_FUNC_next = 1522UL;
        break;
      case 1808:;
        if (tmp___143 % 10 >= 5) {
          _1_OBF_FUNC_next = 726UL;
        } else {
          _1_OBF_FUNC_next = 1376UL;
        }
        break;
      case 689:
        tmp___153 = rand();
        _1_OBF_FUNC_next = 733UL;
        break;
      case 591:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1852UL;
        break;
      case 1157:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 194UL;
        } else {
          _1_OBF_FUNC_next = 257UL;
        }
        break;
      case 1956:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1737UL;
        } else {
          _1_OBF_FUNC_next = 1932UL;
        }
        break;
      case 315:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1926UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 807:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 973UL;
        break;
      case 294:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1653UL;
        break;
      case 492:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 488UL;
        break;
      case 877:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 840UL;
        } else {
          _1_OBF_FUNC_next = 556UL;
        }
        break;
      case 1229:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1573UL;
        } else {
          _1_OBF_FUNC_next = 632UL;
        }
        break;
      case 108:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1602UL;
        break;
      case 1650:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1801UL;
        break;
      case 310:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1495UL;
        } else {
          _1_OBF_FUNC_next = 1213UL;
        }
        break;
      case 1224:;
        if (tmp___86 % 10 >= 5) {
          _1_OBF_FUNC_next = 1116UL;
        } else {
          _1_OBF_FUNC_next = 930UL;
        }
        break;
      case 623:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 162UL;
        break;
      case 1723:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 863UL;
        break;
      case 1728:
        _index14_0++;
        _1_OBF_FUNC_next = 939UL;
        break;
      case 1677:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 243UL;
        break;
      case 565:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1253UL;
        } else {
          _1_OBF_FUNC_next = 1549UL;
        }
        break;
      case 1242:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 952UL;
        } else {
          _1_OBF_FUNC_next = 453UL;
        }
        break;
      case 185:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1946UL;
        break;
      case 707:
        _index14_0++;
        _1_OBF_FUNC_next = 609UL;
        break;
      case 883:
        tmp___126 = rand();
        _1_OBF_FUNC_next = 140UL;
        break;
      case 1174:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        _1_OBF_FUNC_next = 320UL;
        break;
      case 14:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 317UL;
        break;
      case 1482:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 1362UL;
        break;
      case 729:
        tmp___145 = rand();
        _1_OBF_FUNC_next = 822UL;
        break;
      case 1777:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 162UL;
        break;
      case 1980:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1527UL;
        break;
      case 487:
        _index14_0++;
        _1_OBF_FUNC_next = 1733UL;
        break;
      case 920:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1499UL;
        } else {
          _1_OBF_FUNC_next = 403UL;
        }
        break;
      case 1483:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 541UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1202UL;
          break;
        default:
          _1_OBF_FUNC_next = 1668UL;
          break;
        }
        break;
      case 1123:;
        if (tmp___159 % 10 >= 5) {
          _1_OBF_FUNC_next = 1760UL;
        } else {
          _1_OBF_FUNC_next = 1965UL;
        }
        break;
      case 534:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1173UL;
        break;
      case 977:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1354UL;
        break;
      case 270:;
        if (tmp___99 % 10 >= 5) {
          _1_OBF_FUNC_next = 518UL;
        } else {
          _1_OBF_FUNC_next = 980UL;
        }
        break;
      case 1513:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1815UL;
        break;
      case 810:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1559UL;
        break;
      case 1687:
        tmp___142 = rand();
        _1_OBF_FUNC_next = 1346UL;
        break;
      case 31:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1034UL;
        break;
      case 554:;
        if (tmp___19 % 10 >= 5) {
          _1_OBF_FUNC_next = 1395UL;
        } else {
          _1_OBF_FUNC_next = 705UL;
        }
        break;
      case 893:
        _induction7_6_2 = 0U;
        _1_OBF_FUNC_next = 1966UL;
        break;
      case 366:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 71UL;
        break;
      case 1641:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1560UL;
        } else {
          _1_OBF_FUNC_next = 1542UL;
        }
        break;
      case 1434:
        tmp___59 = rand();
        _1_OBF_FUNC_next = 1736UL;
        break;
      case 1106:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 902UL;
        break;
      case 1177:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1537UL;
        } else {
          _1_OBF_FUNC_next = 375UL;
        }
        break;
      case 1064:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1065UL;
        } else {
          _1_OBF_FUNC_next = 770UL;
        }
        break;
      case 556:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1615UL;
        } else {
          _1_OBF_FUNC_next = 586UL;
        }
        break;
      case 1264:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1757UL;
        break;
      case 1812:;
        if (tmp___35 % 10 >= 5) {
          _1_OBF_FUNC_next = 1900UL;
        } else {
          _1_OBF_FUNC_next = 818UL;
        }
        break;
      case 1944:;
        if (tmp___52 % 10 >= 5) {
          _1_OBF_FUNC_next = 1058UL;
        } else {
          _1_OBF_FUNC_next = 1513UL;
        }
        break;
      case 1026:
        _index14_0++;
        _1_OBF_FUNC_next = 1086UL;
        break;
      case 1462:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 446UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 399:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1190UL;
        break;
      case 1332:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1542UL;
        break;
      case 1544:
        localStaticState[_induction1_0_2] *= localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 1650UL;
        break;
      case 94:
        tmp___113 = rand();
        _1_OBF_FUNC_next = 1200UL;
        break;
      case 109:;
        if (tmp___20 % 10 >= 5) {
          _1_OBF_FUNC_next = 846UL;
        } else {
          _1_OBF_FUNC_next = 851UL;
        }
        break;
      case 543:
        tmp___52 = rand();
        _1_OBF_FUNC_next = 1944UL;
        break;
      case 610:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1527UL;
        break;
      case 922:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1617UL;
        } else {
          _1_OBF_FUNC_next = 352UL;
        }
        break;
      case 1430:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 922UL;
        break;
      case 1496:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1590UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 902:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 795UL;
        } else {
          _1_OBF_FUNC_next = 1166UL;
        }
        break;
      case 1668:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 632UL;
        break;
      case 1887:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 257:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1106UL;
        break;
      case 899:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1465UL;
        break;
      case 529:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 675UL;
        } else {
          _1_OBF_FUNC_next = 596UL;
        }
        break;
      case 1490:
        _index14_0++;
        _1_OBF_FUNC_next = 1269UL;
        break;
      case 932:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1629UL;
        break;
      case 1173:
        _index14_0++;
        _1_OBF_FUNC_next = 1515UL;
        break;
      case 1421:;
        if (tmp___88 % 10 >= 5) {
          _1_OBF_FUNC_next = 217UL;
        } else {
          _1_OBF_FUNC_next = 1197UL;
        }
        break;
      case 11:;
        if (tmp___53 % 10 >= 5) {
          _1_OBF_FUNC_next = 131UL;
        } else {
          _1_OBF_FUNC_next = 933UL;
        }
        break;
      case 485:
        _index14_0++;
        _1_OBF_FUNC_next = 518UL;
        break;
      case 535:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 358UL;
        break;
      case 1621:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1630UL;
        break;
      case 1732:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 810UL;
        break;
      case 375:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 844UL;
        break;
      case 1187:
        tmp___104 = rand();
        _1_OBF_FUNC_next = 1875UL;
        break;
      case 390:;
        if (tmp___1 % 10 >= 5) {
          _1_OBF_FUNC_next = 1752UL;
        } else {
          _1_OBF_FUNC_next = 1665UL;
        }
        break;
      case 1720:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 40UL;
        } else {
          _1_OBF_FUNC_next = 167UL;
        }
        break;
      case 1801:
        _index0_4++;
        _1_OBF_FUNC_next = 1688UL;
        break;
      case 1768:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 33UL;
        } else {
          _1_OBF_FUNC_next = 1165UL;
        }
        break;
      case 1881:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1129UL;
        break;
      case 1056:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 10UL;
        break;
      case 1171:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1238UL;
        } else {
          _1_OBF_FUNC_next = 1520UL;
        }
        break;
      case 210:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1533UL;
        break;
      case 738:
        _index8_0 = 0U;
        _1_OBF_FUNC_next = 330UL;
        break;
      case 339:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1092UL;
        } else {
          _1_OBF_FUNC_next = 723UL;
        }
        break;
      case 345:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1079UL;
        } else {
          _1_OBF_FUNC_next = 1731UL;
        }
        break;
      case 827:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1514UL;
        } else {
          _1_OBF_FUNC_next = 1484UL;
        }
        break;
      case 1509:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1159UL;
        break;
      case 321:
        tmp___20 = rand();
        _1_OBF_FUNC_next = 109UL;
        break;
      case 762:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1058UL;
        break;
      case 1211:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 585UL;
        break;
      case 1423:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1362UL;
        break;
      case 1737:
        tmp___68 = rand();
        _1_OBF_FUNC_next = 221UL;
        break;
      case 348:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 397UL;
        break;
      case 384:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1093UL;
        break;
      case 38:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 1448UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1038UL;
          break;
        default:
          _1_OBF_FUNC_next = 1916UL;
          break;
        }
        break;
      case 907:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1798UL;
        break;
      case 522:
        _index14_0++;
        _1_OBF_FUNC_next = 1116UL;
        break;
      case 75:;
        if (tmp___122 % 10 >= 5) {
          _1_OBF_FUNC_next = 195UL;
        } else {
          _1_OBF_FUNC_next = 1009UL;
        }
        break;
      case 1164:;
        if (tmp___81 % 10 >= 5) {
          _1_OBF_FUNC_next = 1853UL;
        } else {
          _1_OBF_FUNC_next = 1103UL;
        }
        break;
      case 1767:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 584UL;
        break;
      case 558:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1021UL;
        } else {
          _1_OBF_FUNC_next = 152UL;
        }
        break;
      case 921:;
        if (tmp___44 % 10 >= 5) {
          _1_OBF_FUNC_next = 451UL;
        } else {
          _1_OBF_FUNC_next = 763UL;
        }
        break;
      case 1898:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 931UL;
        } else {
          _1_OBF_FUNC_next = 1246UL;
        }
        break;
      case 800:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 984UL;
        } else {
          _1_OBF_FUNC_next = 1418UL;
        }
        break;
      case 1007:
        tmp___67 = rand();
        _1_OBF_FUNC_next = 1751UL;
        break;
      case 1371:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1936UL;
        break;
      case 1738:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1043UL;
        break;
      case 1562:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 544UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 1604:
        tmp___131 = rand();
        _1_OBF_FUNC_next = 787UL;
        break;
      case 867:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1768UL;
        break;
      case 1764:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1952UL;
        break;
      case 649:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 546UL;
        break;
      case 1593:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 411UL;
        break;
      case 1867:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 96UL;
        } else {
          _1_OBF_FUNC_next = 593UL;
        }
        break;
      case 1160:;
        if (tmp___39 % 10 >= 5) {
          _1_OBF_FUNC_next = 1231UL;
        } else {
          _1_OBF_FUNC_next = 773UL;
        }
        break;
      case 53:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 333UL;
        break;
      case 859:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1575UL;
        } else {
          _1_OBF_FUNC_next = 281UL;
        }
        break;
      case 752:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 1845UL;
        }
        break;
      case 73:
        _index14_0++;
        _1_OBF_FUNC_next = 1635UL;
        break;
      case 851:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 765:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1794UL;
        } else {
          _1_OBF_FUNC_next = 211UL;
        }
        break;
      case 896:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1317UL;
        break;
      case 1417:;
        if (tmp___118 % 10 >= 5) {
          _1_OBF_FUNC_next = 1807UL;
        } else {
          _1_OBF_FUNC_next = 1885UL;
        }
        break;
      case 1363:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 493UL;
        break;
      case 1151:;
        if ((unsigned long)_index2_1 < 1UL) {
          _1_OBF_FUNC_next = 525UL;
        } else {
          _1_OBF_FUNC_next = 1574UL;
        }
        break;
      case 1484:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 483UL;
        } else {
          _1_OBF_FUNC_next = 1807UL;
        }
        break;
      case 461:;
        if (tmp___149 % 10 >= 5) {
          _1_OBF_FUNC_next = 1171UL;
        } else {
          _1_OBF_FUNC_next = 36UL;
        }
        break;
      case 1559:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1209UL;
        } else {
          _1_OBF_FUNC_next = 1240UL;
        }
        break;
      case 1926:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1977UL;
        break;
      case 283:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1950UL;
        break;
      case 95:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 275UL;
        break;
      case 149:;
        if ((unsigned long)_index2_1 < 1UL) {
          _1_OBF_FUNC_next = 326UL;
        } else {
          _1_OBF_FUNC_next = 893UL;
        }
        break;
      case 874:
        _index14_0++;
        _1_OBF_FUNC_next = 1226UL;
        break;
      case 1542:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 517UL;
        } else {
          _1_OBF_FUNC_next = 256UL;
        }
        break;
      case 1375:
        _index14_0++;
        _1_OBF_FUNC_next = 452UL;
        break;
      case 766:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 395UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1931UL;
          break;
        default:
          _1_OBF_FUNC_next = 660UL;
          break;
        }
        break;
      case 1877:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1673UL;
        break;
      case 229:
        tmp___23 = rand();
        _1_OBF_FUNC_next = 287UL;
        break;
      case 1365:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 1181UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1784UL;
          break;
        default:
          _1_OBF_FUNC_next = 1567UL;
          break;
        }
        break;
      case 662:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 794UL;
        break;
      case 928:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1878UL;
        break;
      case 784:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1511UL;
        break;
      case 1268:;
        if (tmp___41 % 10 >= 5) {
          _1_OBF_FUNC_next = 262UL;
        } else {
          _1_OBF_FUNC_next = 806UL;
        }
        break;
      case 239:;
        if (tmp___7 % 10 >= 5) {
          _1_OBF_FUNC_next = 781UL;
        } else {
          _1_OBF_FUNC_next = 1796UL;
        }
        break;
      case 318:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1473UL;
        break;
      case 1705:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 476UL;
        break;
      case 50:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 255UL;
        break;
      case 806:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 472UL;
        break;
      case 104:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1250UL;
        break;
      case 496:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1529UL;
        } else {
          _1_OBF_FUNC_next = 1523UL;
        }
        break;
      case 568:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1705UL;
        break;
      case 1068:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 177UL;
        break;
      case 1218:
        tmp___159 = rand();
        _1_OBF_FUNC_next = 1123UL;
        break;
      case 1358:
        tmp___60 = rand();
        _1_OBF_FUNC_next = 1969UL;
        break;
      case 1690:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1817UL;
        break;
      case 863:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 625UL;
        break;
      case 1946:
        _index14_0++;
        _1_OBF_FUNC_next = 1731UL;
        break;
      case 453:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 318UL;
        } else {
          _1_OBF_FUNC_next = 1518UL;
        }
        break;
      case 862:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 420UL;
        break;
      case 378:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 490UL;
        break;
      case 1845:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1729UL;
        } else {
          _1_OBF_FUNC_next = 1646UL;
        }
        break;
      case 733:;
        if (tmp___153 % 10 >= 5) {
          _1_OBF_FUNC_next = 751UL;
        } else {
          _1_OBF_FUNC_next = 1546UL;
        }
        break;
      case 1682:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 708UL;
        break;
      case 1397:
        _index14_0++;
        _1_OBF_FUNC_next = 131UL;
        break;
      case 1670:
        tmp___41 = rand();
        _1_OBF_FUNC_next = 1268UL;
        break;
      case 1376:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1748UL;
        break;
      case 984:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 117UL;
        break;
      case 1381:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 154UL;
        } else {
          _1_OBF_FUNC_next = 1282UL;
        }
        break;
      case 400:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 72UL;
        break;
      case 523:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 646UL;
        break;
      case 481:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1516UL;
        break;
      case 690:;
        if (tmp___136 % 10 >= 5) {
          _1_OBF_FUNC_next = 345UL;
        } else {
          _1_OBF_FUNC_next = 523UL;
        }
        break;
      case 1703:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 573UL;
        } else {
          _1_OBF_FUNC_next = 1231UL;
        }
        break;
      case 774:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1007UL;
        } else {
          _1_OBF_FUNC_next = 1956UL;
        }
        break;
      case 8:;
        if (tmp___49 % 10 >= 5) {
          _1_OBF_FUNC_next = 1226UL;
        } else {
          _1_OBF_FUNC_next = 422UL;
        }
        break;
      case 959:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 455UL;
        } else {
          _1_OBF_FUNC_next = 808UL;
        }
        break;
      case 1097:
        _index14_0++;
        _1_OBF_FUNC_next = 622UL;
        break;
      case 1830:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 531UL;
        break;
      case 335:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 785UL;
        break;
      case 560:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1336UL;
        break;
      case 1343:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 577UL;
        break;
      case 195:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 852UL;
        } else {
          _1_OBF_FUNC_next = 632UL;
        }
        break;
      case 553:
        tmp___157 = rand();
        _1_OBF_FUNC_next = 374UL;
        break;
      case 1894:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1216UL;
        } else {
          _1_OBF_FUNC_next = 1329UL;
        }
        break;
      case 803:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 438UL;
        } else {
          _1_OBF_FUNC_next = 1631UL;
        }
        break;
      case 757:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1121UL;
        break;
      case 1205:
        _index14_0++;
        _1_OBF_FUNC_next = 1132UL;
        break;
      case 613:
        _index2_1++;
        _1_OBF_FUNC_next = 1151UL;
        break;
      case 332:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1918UL;
        break;
      case 1258:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 602UL;
        } else {
          _1_OBF_FUNC_next = 1285UL;
        }
        break;
      case 1553:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1720UL;
        break;
      case 1453:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1291UL;
        break;
      case 1799:
        tmp___121 = rand();
        _1_OBF_FUNC_next = 1119UL;
        break;
      case 419:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1011UL;
        } else {
          _1_OBF_FUNC_next = 1132UL;
        }
        break;
      case 1035:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1556UL;
        break;
      case 1807:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 567UL;
        } else {
          _1_OBF_FUNC_next = 195UL;
        }
        break;
      case 717:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 809UL;
        } else {
          _1_OBF_FUNC_next = 1843UL;
        }
        break;
      case 1131:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1095UL;
        break;
      case 644:;
        if (tmp___50 % 10 >= 5) {
          _1_OBF_FUNC_next = 1912UL;
        } else {
          _1_OBF_FUNC_next = 1782UL;
        }
        break;
      case 1233:
        tmp___19 = rand();
        _1_OBF_FUNC_next = 554UL;
        break;
      case 1591:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1715UL;
        } else {
          _1_OBF_FUNC_next = 1636UL;
        }
        break;
      case 122:
        _index14_0++;
        _1_OBF_FUNC_next = 328UL;
        break;
      case 306:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1841UL;
        break;
      case 382:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 214UL;
        break;
      case 638:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1641UL;
        break;
      case 1154:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1800UL;
        break;
      case 100:;
        if (tmp___141 % 10 >= 5) {
          _1_OBF_FUNC_next = 1246UL;
        } else {
          _1_OBF_FUNC_next = 1323UL;
        }
        break;
      case 1626:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1635UL;
        break;
      case 1849:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1321UL;
        break;
      case 412:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 531UL;
        break;
      case 1602:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1722UL;
        break;
      case 1422:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 340UL;
        } else {
          _1_OBF_FUNC_next = 528UL;
        }
        break;
      case 658:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1293UL;
        break;
      case 463:;
        if (tmp___56 % 10 >= 5) {
          _1_OBF_FUNC_next = 922UL;
        } else {
          _1_OBF_FUNC_next = 1696UL;
        }
        break;
      case 793:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 80UL;
        break;
      case 1733:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 155UL;
        } else {
          _1_OBF_FUNC_next = 1116UL;
        }
        break;
      case 980:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 820UL;
        break;
      case 1966:
        _index6_0 = 0U;
        _1_OBF_FUNC_next = 1349UL;
        break;
      case 192:
        _index14_0++;
        _1_OBF_FUNC_next = 959UL;
        break;
      case 1478:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 1108UL;
        break;
      case 1870:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1332UL;
        break;
      case 259:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 350UL;
        break;
      case 320:;
        if ((unsigned long)_index6_0 < 0UL) {
          _1_OBF_FUNC_next = 876UL;
        } else {
          _1_OBF_FUNC_next = 1504UL;
        }
        break;
      case 1277:
        tmp___32 = rand();
        _1_OBF_FUNC_next = 1289UL;
        break;
      case 1070:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1258UL;
        break;
      case 1185:;
        if (tmp___90 % 10 >= 5) {
          _1_OBF_FUNC_next = 64UL;
        } else {
          _1_OBF_FUNC_next = 133UL;
        }
        break;
      case 19:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 524UL;
        break;
      case 32:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1049UL;
        break;
      case 1823:
        _index14_0++;
        _1_OBF_FUNC_next = 496UL;
        break;
      case 172:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1367UL;
        } else {
          _1_OBF_FUNC_next = 1401UL;
        }
        break;
      case 497:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 25UL;
        break;
      case 1046:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1090UL;
        break;
      case 514:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 202UL;
        } else {
          _1_OBF_FUNC_next = 1651UL;
        }
        break;
      case 838:;
        if (tmp___127 % 10 >= 5) {
          _1_OBF_FUNC_next = 1582UL;
        } else {
          _1_OBF_FUNC_next = 184UL;
        }
        break;
      case 60:;
        if (tmp___140 % 10 >= 5) {
          _1_OBF_FUNC_next = 1898UL;
        } else {
          _1_OBF_FUNC_next = 364UL;
        }
        break;
      case 1115:
        tmp___63 = rand();
        _1_OBF_FUNC_next = 1152UL;
        break;
      case 759:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 355UL;
        break;
      case 144:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1645UL;
        break;
      case 706:
        _index14_0++;
        _1_OBF_FUNC_next = 751UL;
        break;
      case 1824:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 250UL;
        } else {
          _1_OBF_FUNC_next = 1703UL;
        }
        break;
      case 1043:
        _index14_0++;
        _1_OBF_FUNC_next = 431UL;
        break;
      case 1459:
        tmp___18 = rand();
        _1_OBF_FUNC_next = 361UL;
        break;
      case 1694:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          _1_OBF_FUNC_next = 5UL;
        } else {
          _1_OBF_FUNC_next = 1338UL;
        }
        break;
      case 629:;
        if (tmp___28 % 10 >= 5) {
          _1_OBF_FUNC_next = 1285UL;
        } else {
          _1_OBF_FUNC_next = 637UL;
        }
        break;
      case 1597:;
        if (tmp___42 % 10 >= 5) {
          _1_OBF_FUNC_next = 419UL;
        } else {
          _1_OBF_FUNC_next = 294UL;
        }
        break;
      case 1617:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 550UL;
        break;
      case 1186:
        _index14_0++;
        _1_OBF_FUNC_next = 1157UL;
        break;
      case 1565:;
        if (tmp___27 % 10 >= 5) {
          _1_OBF_FUNC_next = 1804UL;
        } else {
          _1_OBF_FUNC_next = 1767UL;
        }
        break;
      case 1285:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 805UL;
        } else {
          _1_OBF_FUNC_next = 859UL;
        }
        break;
      case 127:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 663UL;
        } else {
          _1_OBF_FUNC_next = 264UL;
        }
        break;
      case 614:;
        if (tmp___46 % 10 >= 5) {
          _1_OBF_FUNC_next = 1465UL;
        } else {
          _1_OBF_FUNC_next = 1605UL;
        }
        break;
      case 1276:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 809548512UL) + 931336176UL);
        _1_OBF_FUNC_next = 1791UL;
        break;
      case 1296:
        localStaticState[_induction1_0_2] *= localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 254UL;
        break;
      case 1286:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 750UL;
        break;
      case 1136:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 948UL;
        } else {
          _1_OBF_FUNC_next = 726UL;
        }
        break;
      case 1463:;
        if (tmp___133 % 10 >= 5) {
          _1_OBF_FUNC_next = 1862UL;
        } else {
          _1_OBF_FUNC_next = 759UL;
        }
        break;
      case 998:
        _index14_0++;
        _1_OBF_FUNC_next = 674UL;
        break;
      case 903:
        tmp___65 = rand();
        _1_OBF_FUNC_next = 232UL;
        break;
      case 1291:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1396UL;
        } else {
          _1_OBF_FUNC_next = 603UL;
        }
        break;
      case 1899:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 295UL;
        break;
      case 325:
        _index14_0++;
        _1_OBF_FUNC_next = 596UL;
        break;
      case 440:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 352UL;
        break;
      case 974:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1524UL;
        break;
      case 184:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1820UL;
        break;
      case 976:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1087UL;
        break;
      case 1505:
        tmp___11 = rand();
        _1_OBF_FUNC_next = 682UL;
        break;
      case 72:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 167UL;
        break;
      case 261:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 227UL;
        break;
      case 93:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1440UL;
        break;
      case 1850:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 1419UL;
        break;
      case 1917:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1582UL;
        break;
      case 970:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1285UL;
        break;
      case 701:
        _index14_0++;
        _1_OBF_FUNC_next = 895UL;
        break;
      case 1625:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 627UL;
        break;
      case 1791:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input - 102851024UL) + (unsigned long)localStaticState[0UL] * 363128600UL);
        _1_OBF_FUNC_next = 920UL;
        break;
      case 1108:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 854UL;
        break;
      case 1403:;
        if (tmp___70 % 10 >= 5) {
          _1_OBF_FUNC_next = 331UL;
        } else {
          _1_OBF_FUNC_next = 946UL;
        }
        break;
      case 832:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 37UL;
        break;
      case 1407:
        tmp___108 = rand();
        _1_OBF_FUNC_next = 1389UL;
        break;
      case 1852:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1277UL;
        } else {
          _1_OBF_FUNC_next = 1426UL;
        }
        break;
      case 254:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 909UL;
        break;
      case 817:
        _index14_0++;
        _1_OBF_FUNC_next = 331UL;
        break;
      case 1047:;
        if (tmp___132 % 10 >= 5) {
          _1_OBF_FUNC_next = 1329UL;
        } else {
          _1_OBF_FUNC_next = 1312UL;
        }
        break;
      case 1520:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1508UL;
        break;
      case 989:
        tmp___136 = rand();
        _1_OBF_FUNC_next = 690UL;
        break;
      case 207:
        tmp___125 = rand();
        _1_OBF_FUNC_next = 115UL;
        break;
      case 1772:
        tmp___22 = rand();
        _1_OBF_FUNC_next = 1089UL;
        break;
      case 7:
        _index14_0++;
        _1_OBF_FUNC_next = 991UL;
        break;
      case 1448:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 427UL;
        break;
      case 1504:;
        return ((unsigned int)((unsigned long)localStaticState[0UL] * ((unsigned long)localStaticState[1UL] + 589599036UL)));
        break;
      case 1642:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1509UL;
        break;
      case 1405:;
        if (tmp___85 % 10 >= 5) {
          _1_OBF_FUNC_next = 1067UL;
        } else {
          _1_OBF_FUNC_next = 527UL;
        }
        break;
      case 625:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 927UL;
        } else {
          _1_OBF_FUNC_next = 546UL;
        }
        break;
      case 1895:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1341UL;
        } else {
          _1_OBF_FUNC_next = 800UL;
        }
        break;
      case 1009:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1700UL;
        break;
      case 166:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 491UL;
        break;
      case 376:;
        if (tmp___103 % 10 >= 5) {
          _1_OBF_FUNC_next = 1451UL;
        } else {
          _1_OBF_FUNC_next = 1018UL;
        }
        break;
      case 1347:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1659UL;
        } else {
          _1_OBF_FUNC_next = 1306UL;
        }
        break;
      case 1438:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1570UL;
        break;
      case 479:
        tmp___42 = rand();
        _1_OBF_FUNC_next = 1597UL;
        break;
      case 653:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 983UL;
        break;
      case 1004:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 992UL;
        break;
      case 1426:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1774UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 1521:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1392UL;
        break;
      case 49:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 137UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1778UL;
          break;
        default:
          _1_OBF_FUNC_next = 492UL;
          break;
        }
        break;
      case 1362:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 730UL;
        } else {
          _1_OBF_FUNC_next = 219UL;
        }
        break;
      case 1203:;
        if (tmp___31 % 10 >= 5) {
          _1_OBF_FUNC_next = 1064UL;
        } else {
          _1_OBF_FUNC_next = 766UL;
        }
        break;
      case 1696:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1937UL;
        break;
      case 1571:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1695UL;
        break;
      case 284:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1064UL;
        break;
      case 1608:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 616UL;
        break;
      case 688:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1604UL;
        } else {
          _1_OBF_FUNC_next = 1894UL;
        }
        break;
      case 1116:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1822UL;
        } else {
          _1_OBF_FUNC_next = 1269UL;
        }
        break;
      case 1010:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 129UL;
        break;
      case 1560:
        tmp___69 = rand();
        _1_OBF_FUNC_next = 84UL;
        break;
      case 1854:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 961UL;
        break;
      case 493:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1401UL;
        break;
      case 1918:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1213UL;
        break;
      case 56:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 657UL;
        break;
      case 914:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 731UL;
        break;
      case 1580:
        _index14_0++;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 422:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 359UL;
        break;
      case 443:
        tmp___133 = rand();
        _1_OBF_FUNC_next = 1463UL;
        break;
      case 732:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 935UL;
        break;
      case 967:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1519UL;
        break;
      case 1094:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 448UL;
        } else {
          _1_OBF_FUNC_next = 1219UL;
        }
        break;
      case 1299:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1889UL;
        break;
      case 1352:
        tmp___89 = rand();
        _1_OBF_FUNC_next = 631UL;
        break;
      case 919:
        tmp___83 = rand();
        _1_OBF_FUNC_next = 1714UL;
        break;
      case 840:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1141UL;
        } else {
          _1_OBF_FUNC_next = 1458UL;
        }
        break;
      case 1366:;
        if (tmp___152 % 10 >= 5) {
          _1_OBF_FUNC_next = 1951UL;
        } else {
          _1_OBF_FUNC_next = 1612UL;
        }
        break;
      case 849:;
        if (tmp___112 % 10 >= 5) {
          _1_OBF_FUNC_next = 320UL;
        } else {
          _1_OBF_FUNC_next = 1212UL;
        }
        break;
      case 201:
        _induction3_2_2 = 0U;
        _1_OBF_FUNC_next = 1305UL;
        break;
      case 1708:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1556UL;
        break;
      case 346:
        _index14_0++;
        _1_OBF_FUNC_next = 1898UL;
        break;
      case 1306:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1911UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 288:
        _index0_4 = 0U;
        _1_OBF_FUNC_next = 978UL;
        break;
      case 828:
        tmp___124 = rand();
        _1_OBF_FUNC_next = 329UL;
        break;
      case 844:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 840UL;
        break;
      case 956:
        _index2_1++;
        _1_OBF_FUNC_next = 149UL;
        break;
      case 1139:;
        if (tmp___30 % 10 >= 5) {
          _1_OBF_FUNC_next = 281UL;
        } else {
          _1_OBF_FUNC_next = 698UL;
        }
        break;
      case 1573:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 252UL;
        break;
      case 1630:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 56UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 78:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 325UL;
        break;
      case 1014:
        tmp___55 = rand();
        _1_OBF_FUNC_next = 650UL;
        break;
      case 616:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1484UL;
        break;
      case 966:
        tmp___50 = rand();
        _1_OBF_FUNC_next = 644UL;
        break;
      case 1601:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1093UL;
        break;
      case 1024:;
        if (tmp___71 % 10 >= 5) {
          _1_OBF_FUNC_next = 1515UL;
        } else {
          _1_OBF_FUNC_next = 434UL;
        }
        break;
      case 1432:
        tmp___13 = rand();
        _1_OBF_FUNC_next = 48UL;
        break;
      case 1631:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 926UL;
        } else {
          _1_OBF_FUNC_next = 1381UL;
        }
        break;
      case 337:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 732UL;
        } else {
          _1_OBF_FUNC_next = 819UL;
        }
        break;
      case 1305:
        _index2_1 = 0U;
        _1_OBF_FUNC_next = 1151UL;
        break;
      case 351:
        tmp___102 = rand();
        _1_OBF_FUNC_next = 775UL;
        break;
      case 1822:
        tmp___87 = rand();
        _1_OBF_FUNC_next = 626UL;
        break;
      case 1159:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 536UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 393:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 726UL;
        break;
      case 1389:;
        if (tmp___108 % 10 >= 5) {
          _1_OBF_FUNC_next = 917UL;
        } else {
          _1_OBF_FUNC_next = 1738UL;
        }
        break;
      case 197:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 960UL;
        break;
      case 1568:;
        if (tmp___101 % 10 >= 5) {
          _1_OBF_FUNC_next = 1190UL;
        } else {
          _1_OBF_FUNC_next = 539UL;
        }
        break;
      case 360:
        _index14_0++;
        _1_OBF_FUNC_next = 1183UL;
        break;
      case 526:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1464UL;
        break;
      case 839:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1500UL;
        break;
      case 1567:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 1518UL;
        break;
      case 1795:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 862UL;
        break;
      case 747:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 972UL;
        } else {
          _1_OBF_FUNC_next = 674UL;
        }
        break;
      case 794:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1865UL;
        } else {
          _1_OBF_FUNC_next = 1465UL;
        }
        break;
      case 1752:;
        if ((unsigned long)_index0_4 < 4UL) {
          _1_OBF_FUNC_next = 1296UL;
        } else {
          _1_OBF_FUNC_next = 403UL;
        }
        break;
      case 1011:
        tmp___43 = rand();
        _1_OBF_FUNC_next = 1603UL;
        break;
      case 1262:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1174UL;
        break;
      case 202:
        localStaticState[0UL] *= localStaticState[0UL];
        _1_OBF_FUNC_next = 1651UL;
        break;
      case 1527:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 300UL;
        } else {
          _1_OBF_FUNC_next = 1853UL;
        }
        break;
      case 1021:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 943UL;
        break;
      case 1499:
        _induction1_0_2 = 0U;
        _1_OBF_FUNC_next = 288UL;
        break;
      case 1638:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1888UL;
        break;
      case 719:
        tmp___80 = rand();
        _1_OBF_FUNC_next = 1976UL;
        break;
      case 1639:
        _index2_1++;
        _1_OBF_FUNC_next = 1348UL;
        break;
      case 220:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1726UL;
        break;
      case 888:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1805UL;
        break;
      case 1976:;
        if (tmp___80 % 10 >= 5) {
          _1_OBF_FUNC_next = 1314UL;
        } else {
          _1_OBF_FUNC_next = 878UL;
        }
        break;
      case 312:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 398UL;
        break;
      case 1341:
        tmp___4 = rand();
        _1_OBF_FUNC_next = 1472UL;
        break;
      case 1784:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1211UL;
        } else {
          _1_OBF_FUNC_next = 1012UL;
        }
        break;
      case 735:
        tmp___112 = rand();
        _1_OBF_FUNC_next = 849UL;
        break;
      case 1183:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 828UL;
        } else {
          _1_OBF_FUNC_next = 1069UL;
        }
        break;
      case 1716:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 192UL;
        break;
      case 146:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 35UL;
        } else {
          _1_OBF_FUNC_next = 222UL;
        }
        break;
      case 852:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 947UL;
        break;
      case 500:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 299UL;
        break;
      case 1508:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 428UL;
        break;
      case 316:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1528UL;
        break;
      case 1975:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1708UL;
        break;
      case 322:
        _index14_0++;
        _1_OBF_FUNC_next = 1282UL;
        break;
      case 1342:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 965UL;
        break;
      case 1034:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 827UL;
        break;
      case 268:
        _index14_0++;
        _1_OBF_FUNC_next = 1703UL;
        break;
      case 773:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 268UL;
        break;
      case 1195:
        _index14_0++;
        _1_OBF_FUNC_next = 1523UL;
        break;
      case 1804:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1154UL;
        } else {
          _1_OBF_FUNC_next = 914UL;
        }
        break;
      case 1429:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1887UL;
        break;
      case 657:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1630UL;
        break;
      case 1399:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 297UL;
        break;
      case 59:
        _index14_0++;
        _1_OBF_FUNC_next = 1827UL;
        break;
      case 445:;
        if (tmp___75 % 10 >= 5) {
          _1_OBF_FUNC_next = 1381UL;
        } else {
          _1_OBF_FUNC_next = 439UL;
        }
        break;
      case 698:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1896UL;
        break;
      case 809:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 1843UL;
        break;
      case 223:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1773UL;
        break;
      case 609:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1300UL;
        } else {
          _1_OBF_FUNC_next = 1666UL;
        }
        break;
      case 1912:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1360UL;
        } else {
          _1_OBF_FUNC_next = 1045UL;
        }
        break;
      case 438:
        tmp___74 = rand();
        _1_OBF_FUNC_next = 1368UL;
        break;
      case 934:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1836UL;
        } else {
          _1_OBF_FUNC_next = 352UL;
        }
        break;
      case 1790:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1118UL;
        break;
      case 1914:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1690UL;
        break;
      case 300:
        tmp___81 = rand();
        _1_OBF_FUNC_next = 1164UL;
        break;
      case 151:;
        if (tmp___73 % 10 >= 5) {
          _1_OBF_FUNC_next = 256UL;
        } else {
          _1_OBF_FUNC_next = 757UL;
        }
        break;
      case 1816:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 312UL;
        } else {
          _1_OBF_FUNC_next = 1310UL;
        }
        break;
      case 158:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1643UL;
        break;
      case 1295:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1535UL;
        break;
      case 575:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1496UL;
        break;
      case 697:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 693UL;
        break;
      case 1455:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1067UL;
        break;
      case 138:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 603UL;
        break;
      case 584:
        _index14_0++;
        _1_OBF_FUNC_next = 67UL;
        break;
      case 1232:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 762UL;
        break;
      case 1244:;
        if (tmp___12 % 10 >= 5) {
          _1_OBF_FUNC_next = 1825UL;
        } else {
          _1_OBF_FUNC_next = 916UL;
        }
        break;
      case 255:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1530UL;
        } else {
          _1_OBF_FUNC_next = 661UL;
        }
        break;
      case 48:;
        if (tmp___13 % 10 >= 5) {
          _1_OBF_FUNC_next = 1094UL;
        } else {
          _1_OBF_FUNC_next = 1050UL;
        }
        break;
      case 963:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1823UL;
        break;
      case 1949:
        tmp___71 = rand();
        _1_OBF_FUNC_next = 1024UL;
        break;
      case 1517:
        _index14_0++;
        _1_OBF_FUNC_next = 1322UL;
        break;
      case 536:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1001UL;
        break;
      case 1570:
        _index14_0++;
        _1_OBF_FUNC_next = 1057UL;
        break;
      case 1974:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1478UL;
        } else {
          _1_OBF_FUNC_next = 1108UL;
        }
        break;
      case 1237:
        tmp___146 = rand();
        _1_OBF_FUNC_next = 447UL;
        break;
      case 260:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1327UL;
        break;
      case 820:
        _index14_0++;
        _1_OBF_FUNC_next = 1344UL;
        break;
      case 586:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 85UL;
        break;
      case 1846:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1698UL;
        break;
      case 1957:;
        if (tmp___47 % 10 >= 5) {
          _1_OBF_FUNC_next = 770UL;
        } else {
          _1_OBF_FUNC_next = 1943UL;
        }
        break;
      case 1820:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1913UL;
        break;
      case 1951:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 689UL;
        } else {
          _1_OBF_FUNC_next = 751UL;
        }
        break;
      case 1189:;
        if (tmp___137 % 10 >= 5) {
          _1_OBF_FUNC_next = 1731UL;
        } else {
          _1_OBF_FUNC_next = 1295UL;
        }
        break;
      case 1439:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1258UL;
        break;
      case 408:;
        if (tmp___61 % 10 >= 5) {
          _1_OBF_FUNC_next = 1559UL;
        } else {
          _1_OBF_FUNC_next = 1600UL;
        }
        break;
      case 1753:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 183UL;
        break;
      case 516:;
        if (tmp___25 % 10 >= 5) {
          _1_OBF_FUNC_next = 465UL;
        } else {
          _1_OBF_FUNC_next = 1521UL;
        }
        break;
      case 1134:
        _index14_0++;
        _1_OBF_FUNC_next = 217UL;
        break;
      case 1069:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 207UL;
        } else {
          _1_OBF_FUNC_next = 1372UL;
        }
        break;
      case 1126:
        _induction9_8_2 = 0U;
        _1_OBF_FUNC_next = 1454UL;
        break;
      case 567:
        tmp___122 = rand();
        _1_OBF_FUNC_next = 75UL;
        break;
      case 969:;
        if (tmp___40 % 10 >= 5) {
          _1_OBF_FUNC_next = 1401UL;
        } else {
          _1_OBF_FUNC_next = 1131UL;
        }
        break;
      case 680:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 322UL;
        break;
      case 687:;
        if (tmp___93 % 10 >= 5) {
          _1_OBF_FUNC_next = 1193UL;
        } else {
          _1_OBF_FUNC_next = 259UL;
        }
        break;
      case 716:;
        if (tmp___115 % 10 >= 5) {
          _1_OBF_FUNC_next = 222UL;
        } else {
          _1_OBF_FUNC_next = 1945UL;
        }
        break;
      case 854:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 633UL;
        break;
      case 1656:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1759UL;
        } else {
          _1_OBF_FUNC_next = 1226UL;
        }
        break;
      case 641:;
        if (tmp___156 % 10 >= 5) {
          _1_OBF_FUNC_next = 452UL;
        } else {
          _1_OBF_FUNC_next = 78UL;
        }
        break;
      case 1516:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 220UL;
        } else {
          _1_OBF_FUNC_next = 1363UL;
        }
        break;
      case 198:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 673UL;
        break;
      case 1952:
        _index14_0++;
        _1_OBF_FUNC_next = 1889UL;
        break;
      case 1564:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 310UL;
        break;
      case 597:
        tmp___78 = rand();
        _1_OBF_FUNC_next = 1112UL;
        break;
      case 1451:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1187UL;
        } else {
          _1_OBF_FUNC_next = 328UL;
        }
        break;
      case 909:
        _index0_4++;
        _1_OBF_FUNC_next = 1752UL;
        break;
      case 1648:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 670UL;
        break;
      case 1891:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1286UL;
        break;
      case 983:
        _index14_0++;
        _1_OBF_FUNC_next = 1793UL;
        break;
      case 1316:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 520UL;
        break;
      case 1058:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 68UL;
        } else {
          _1_OBF_FUNC_next = 922UL;
        }
        break;
      case 1152:;
        if (tmp___63 % 10 >= 5) {
          _1_OBF_FUNC_next = 89UL;
        } else {
          _1_OBF_FUNC_next = 1479UL;
        }
        break;
      case 1310:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1430UL;
        break;
      case 35:
        tmp___115 = rand();
        _1_OBF_FUNC_next = 716UL;
        break;
      case 603:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 729UL;
        } else {
          _1_OBF_FUNC_next = 1355UL;
        }
        break;
      case 664:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 688UL;
        break;
      case 1196:;
        if (tmp___129 % 10 >= 5) {
          _1_OBF_FUNC_next = 603UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 1606:
        _index14_0++;
        _1_OBF_FUNC_next = 1462UL;
        break;
      case 1869:;
        if (tmp___117 % 10 >= 5) {
          _1_OBF_FUNC_next = 1523UL;
        } else {
          _1_OBF_FUNC_next = 963UL;
        }
        break;
      case 451:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 74UL;
        } else {
          _1_OBF_FUNC_next = 794UL;
        }
        break;
      case 43:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 898UL;
        break;
      case 1128:;
        if (tmp___155 % 10 >= 5) {
          _1_OBF_FUNC_next = 596UL;
        } else {
          _1_OBF_FUNC_next = 1954UL;
        }
        break;
      case 427:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1840UL;
        break;
      case 1269:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 415UL;
        } else {
          _1_OBF_FUNC_next = 217UL;
        }
        break;
      case 778:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 336UL;
        break;
      case 1112:;
        if (tmp___78 % 10 >= 5) {
          _1_OBF_FUNC_next = 1242UL;
        } else {
          _1_OBF_FUNC_next = 313UL;
        }
        break;
      case 557:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 426UL;
        } else {
          _1_OBF_FUNC_next = 186UL;
        }
        break;
      case 1124:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 240UL;
        break;
      case 1491:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1210UL;
        break;
      case 1666:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 638UL;
        break;
      case 1117:
        _index14_0++;
        _1_OBF_FUNC_next = 529UL;
        break;
      case 219:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 956UL;
        break;
      case 459:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1340UL;
        break;
      case 777:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1724UL;
        break;
      case 272:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1670UL;
        } else {
          _1_OBF_FUNC_next = 262UL;
        }
        break;
      case 145:;
        if (tmp___77 % 10 >= 5) {
          _1_OBF_FUNC_next = 546UL;
        } else {
          _1_OBF_FUNC_next = 1723UL;
        }
        break;
      case 789:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1298UL;
        break;
      case 604:
        tmp___26 = rand();
        _1_OBF_FUNC_next = 792UL;
        break;
      case 1057:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1438UL;
        } else {
          _1_OBF_FUNC_next = 166UL;
        }
        break;
      case 1315:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 552UL;
        break;
      case 15:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1342UL;
        break;
      case 1503:
        _index14_0++;
        _1_OBF_FUNC_next = 1170UL;
        break;
      case 221:;
        if (tmp___68 % 10 >= 5) {
          _1_OBF_FUNC_next = 1932UL;
        } else {
          _1_OBF_FUNC_next = 678UL;
        }
        break;
      case 1843:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1596UL;
        break;
      case 1054:;
        if (tmp___92 % 10 >= 5) {
          _1_OBF_FUNC_next = 264UL;
        } else {
          _1_OBF_FUNC_next = 1156UL;
        }
        break;
      case 639:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1970UL;
        break;
      case 1707:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1314UL;
        break;
      case 1923:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1793UL;
        break;
      case 1037:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 959UL;
        break;
      case 1673:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1193UL;
        break;
      case 152:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 737UL;
        } else {
          _1_OBF_FUNC_next = 1625UL;
        }
        break;
      case 205:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1188UL;
        break;
      case 429:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 1891UL;
        } else {
          _1_OBF_FUNC_next = 713UL;
        }
        break;
      case 1487:
        tmp___123 = rand();
        _1_OBF_FUNC_next = 1719UL;
        break;
      case 437:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 839UL;
        break;
      case 579:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 1260UL;
        break;
      case 1121:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 803UL;
        break;
      case 1464:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1426UL;
        break;
      case 54:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 877UL;
        break;
      case 1688:;
        if ((unsigned long)_index0_4 < 4UL) {
          _1_OBF_FUNC_next = 906UL;
        } else {
          _1_OBF_FUNC_next = 402UL;
        }
        break;
      case 140:;
        if (tmp___126 % 10 >= 5) {
          _1_OBF_FUNC_next = 1913UL;
        } else {
          _1_OBF_FUNC_next = 1359UL;
        }
        break;
      case 628:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 70UL;
        break;
      case 720:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 606UL;
        } else {
          _1_OBF_FUNC_next = 416UL;
        }
        break;
      case 995:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 251UL;
        } else {
          _1_OBF_FUNC_next = 708UL;
        }
        break;
      case 1028:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 892UL;
        } else {
          _1_OBF_FUNC_next = 1522UL;
        }
        break;
      case 1556:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1547UL;
        } else {
          _1_OBF_FUNC_next = 420UL;
        }
        break;
      case 954:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1979UL;
        break;
      case 1713:;
        if (tmp___147 % 10 >= 5) {
          _1_OBF_FUNC_next = 747UL;
        } else {
          _1_OBF_FUNC_next = 377UL;
        }
        break;
      case 1684:
        tmp___15 = rand();
        _1_OBF_FUNC_next = 1506UL;
        break;
      case 131:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1872UL;
        } else {
          _1_OBF_FUNC_next = 1409UL;
        }
        break;
      case 231:;
        if (tmp___33 % 10 >= 5) {
          _1_OBF_FUNC_next = 1845UL;
        } else {
          _1_OBF_FUNC_next = 357UL;
        }
        break;
      case 68:
        tmp___56 = rand();
        _1_OBF_FUNC_next = 463UL;
        break;
      case 1393:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1505UL;
        } else {
          _1_OBF_FUNC_next = 381UL;
        }
        break;
      case 1360:
        tmp___51 = rand();
        _1_OBF_FUNC_next = 349UL;
        break;
      case 1835:;
        if (tmp___48 % 10 >= 5) {
          _1_OBF_FUNC_next = 420UL;
        } else {
          _1_OBF_FUNC_next = 344UL;
        }
        break;
      case 1970:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        _1_OBF_FUNC_next = 1349UL;
        break;
      case 85:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 781UL;
        break;
      case 808:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1890UL;
        } else {
          _1_OBF_FUNC_next = 1898UL;
        }
        break;
      case 1247:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        _1_OBF_FUNC_next = 201UL;
        break;
      case 1736:;
        if (tmp___59 % 10 >= 5) {
          _1_OBF_FUNC_next = 424UL;
        } else {
          _1_OBF_FUNC_next = 807UL;
        }
        break;
      case 105:;
        if (tmp___135 % 10 >= 5) {
          _1_OBF_FUNC_next = 309UL;
        } else {
          _1_OBF_FUNC_next = 868UL;
        }
        break;
      case 519:;
        if (tmp___2 % 10 >= 5) {
          _1_OBF_FUNC_next = 1574UL;
        } else {
          _1_OBF_FUNC_next = 1694UL;
        }
        break;
      case 871:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1553UL;
        break;
      case 1535:
        _index14_0++;
        _1_OBF_FUNC_next = 345UL;
        break;
      case 1297:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1242UL;
        break;
      case 1519:
        _index14_0++;
        _1_OBF_FUNC_next = 1045UL;
        break;
      case 247:
        tmp___120 = rand();
        _1_OBF_FUNC_next = 782UL;
        break;
      case 377:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 612UL;
        break;
      case 650:;
        if (tmp___55 % 10 >= 5) {
          _1_OBF_FUNC_next = 1827UL;
        } else {
          _1_OBF_FUNC_next = 1398UL;
        }
        break;
      case 357:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 509UL;
        break;
      case 297:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 720UL;
        break;
      case 812:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 142UL;
        break;
      case 1510:;
        if (tmp___66 % 10 >= 5) {
          _1_OBF_FUNC_next = 774UL;
        } else {
          _1_OBF_FUNC_next = 1085UL;
        }
        break;
      case 1735:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 1843UL;
        break;
      case 615:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 897UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 558UL;
          break;
        default:
          _1_OBF_FUNC_next = 1740UL;
          break;
        }
        break;
      case 1524:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 392UL;
        break;
      case 1883:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1853UL;
        break;
      case 1890:
        tmp___140 = rand();
        _1_OBF_FUNC_next = 60UL;
        break;
      case 555:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1416UL;
        break;
      case 786:;
        if (tmp___9 % 10 >= 5) {
          _1_OBF_FUNC_next = 1458UL;
        } else {
          _1_OBF_FUNC_next = 1177UL;
        }
        break;
      case 1120:
        tmp___25 = rand();
        _1_OBF_FUNC_next = 516UL;
        break;
      case 1454:
        _index8_0 = 0U;
        _1_OBF_FUNC_next = 1538UL;
        break;
      case 1865:
        tmp___46 = rand();
        _1_OBF_FUNC_next = 614UL;
        break;
      case 944:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1591UL;
        break;
      case 962:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 394UL;
        break;
      case 1722:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 335UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 349:;
        if (tmp___51 % 10 >= 5) {
          _1_OBF_FUNC_next = 1045UL;
        } else {
          _1_OBF_FUNC_next = 1689UL;
        }
        break;
      case 434:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 817UL;
        break;
      case 710:
        tmp___127 = rand();
        _1_OBF_FUNC_next = 838UL;
        break;
      case 1027:
        tmp___24 = rand();
        _1_OBF_FUNC_next = 470UL;
        break;
      case 1919:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 302UL;
        break;
      case 264:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1846UL;
        } else {
          _1_OBF_FUNC_next = 1104UL;
        }
        break;
      case 1419:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 295UL;
        break;
      case 1739:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 615UL;
        } else {
          _1_OBF_FUNC_next = 316UL;
        }
        break;
      case 1711:
        _index14_0++;
        _1_OBF_FUNC_next = 1646UL;
        break;
      case 328:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1169UL;
        } else {
          _1_OBF_FUNC_next = 784UL;
        }
        break;
      case 792:;
        if (tmp___26 % 10 >= 5) {
          _1_OBF_FUNC_next = 67UL;
        } else {
          _1_OBF_FUNC_next = 1179UL;
        }
        break;
      case 754:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 826UL;
        break;
      case 1427:;
        if (tmp___84 % 10 >= 5) {
          _1_OBF_FUNC_next = 1522UL;
        } else {
          _1_OBF_FUNC_next = 1155UL;
        }
        break;
      case 353:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 750UL;
        break;
      case 499:;
        if (tmp___94 % 10 >= 5) {
          _1_OBF_FUNC_next = 995UL;
        } else {
          _1_OBF_FUNC_next = 1877UL;
        }
        break;
      case 1314:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1271UL;
        } else {
          _1_OBF_FUNC_next = 1739UL;
        }
        break;
      case 187:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 98UL;
        } else {
          _1_OBF_FUNC_next = 765UL;
        }
        break;
      case 381:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 700UL;
        } else {
          _1_OBF_FUNC_next = 1825UL;
        }
        break;
      case 587:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 896UL;
        } else {
          _1_OBF_FUNC_next = 1802UL;
        }
        break;
      case 1378:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          _1_OBF_FUNC_next = 1753UL;
        } else {
          _1_OBF_FUNC_next = 1219UL;
        }
        break;
      case 1653:
        _index14_0++;
        _1_OBF_FUNC_next = 262UL;
        break;
      case 389:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 995UL;
        break;
      case 1643:
        _index0_4++;
        _1_OBF_FUNC_next = 978UL;
        break;
      case 157:;
        if (tmp___158 % 10 >= 5) {
          _1_OBF_FUNC_next = 37UL;
        } else {
          _1_OBF_FUNC_next = 1587UL;
        }
        break;
      case 490:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1958UL;
        } else {
          _1_OBF_FUNC_next = 743UL;
        }
        break;
      case 1555:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1471UL;
        } else {
          _1_OBF_FUNC_next = 954UL;
        }
        break;
      case 730:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1267UL;
        } else {
          _1_OBF_FUNC_next = 188UL;
        }
        break;
      case 1300:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 707UL;
        break;
      case 1213:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 437UL;
        } else {
          _1_OBF_FUNC_next = 488UL;
        }
        break;
      case 1223:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1240UL;
        break;
      case 1575:
        tmp___30 = rand();
        _1_OBF_FUNC_next = 1139UL;
        break;
      case 1885:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1923UL;
        break;
      case 982:
        tmp___99 = rand();
        _1_OBF_FUNC_next = 270UL;
        break;
      case 1671:
        _index14_0++;
        _1_OBF_FUNC_next = 235UL;
        break;
      case 330:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1789UL;
        } else {
          _1_OBF_FUNC_next = 1262UL;
        }
        break;
      case 1302:
        _index14_0++;
        _1_OBF_FUNC_next = 1171UL;
        break;
      case 1751:;
        if (tmp___67 % 10 >= 5) {
          _1_OBF_FUNC_next = 1956UL;
        } else {
          _1_OBF_FUNC_next = 714UL;
        }
        break;
      case 480:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1866UL;
        break;
      case 317:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1649UL;
        break;
      case 22:
        tmp___33 = rand();
        _1_OBF_FUNC_next = 231UL;
        break;
      case 1851:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 371UL;
        break;
      case 355:
        _index14_0++;
        _1_OBF_FUNC_next = 1329UL;
        break;
      case 813:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 337UL;
        break;
      case 1049:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1245UL;
        break;
      case 1114:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1393UL;
        break;
      case 1955:;
        if (tmp___62 % 10 >= 5) {
          _1_OBF_FUNC_next = 1240UL;
        } else {
          _1_OBF_FUNC_next = 1732UL;
        }
        break;
      case 1041:
        tmp___70 = rand();
        _1_OBF_FUNC_next = 1403UL;
        break;
      case 1582:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 712UL;
        } else {
          _1_OBF_FUNC_next = 1229UL;
        }
        break;
      case 600:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1343UL;
        break;
      case 1144:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          _1_OBF_FUNC_next = 1850UL;
        } else {
          _1_OBF_FUNC_next = 672UL;
        }
        break;
      case 1281:
        tmp___57 = rand();
        _1_OBF_FUNC_next = 125UL;
        break;
      case 1596:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1061UL;
        break;
      case 1893:
        _index14_0++;
        _1_OBF_FUNC_next = 879UL;
        break;
      case 816:
        tmp___61 = rand();
        _1_OBF_FUNC_next = 408UL;
        break;
      case 906:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 780UL;
        break;
      case 1089:;
        if (tmp___22 % 10 >= 5) {
          _1_OBF_FUNC_next = 1086UL;
        } else {
          _1_OBF_FUNC_next = 601UL;
        }
        break;
      case 539:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 382UL;
        break;
      case 64:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1198UL;
        } else {
          _1_OBF_FUNC_next = 127UL;
        }
        break;
      case 1479:
        localStaticState[0UL] = localStaticState[_index6_0] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        _1_OBF_FUNC_next = 57UL;
        break;
      case 1714:;
        if (tmp___83 % 10 >= 5) {
          _1_OBF_FUNC_next = 1028UL;
        } else {
          _1_OBF_FUNC_next = 1648UL;
        }
        break;
      case 593:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1572UL;
        break;
      case 276:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 43UL;
        break;
      case 1355:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 38UL;
        } else {
          _1_OBF_FUNC_next = 348UL;
        }
        break;
      case 1699:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1624UL;
        } else {
          _1_OBF_FUNC_next = 1243UL;
        }
        break;
      case 1798:
        _index14_0++;
        _1_OBF_FUNC_next = 1932UL;
        break;
      case 1140:;
        if ((unsigned long)_index6_0 < 0UL) {
          _1_OBF_FUNC_next = 1115UL;
        } else {
          _1_OBF_FUNC_next = 89UL;
        }
        break;
      case 1494:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1893UL;
        break;
      case 540:
        tmp___105 = rand();
        _1_OBF_FUNC_next = 736UL;
        break;
      case 853:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1904UL;
        break;
      case 1528:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        _1_OBF_FUNC_next = 1140UL;
        break;
      case 1038:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 697UL;
        } else {
          _1_OBF_FUNC_next = 1941UL;
        }
        break;
      case 1163:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 770UL;
        break;
      case 1543:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 134UL;
        } else {
          _1_OBF_FUNC_next = 632UL;
        }
        break;
      case 1886:;
        if (tmp___119 % 10 >= 5) {
          _1_OBF_FUNC_next = 879UL;
        } else {
          _1_OBF_FUNC_next = 653UL;
        }
        break;
      case 1290:;
        if (tmp___37 % 10 >= 5) {
          _1_OBF_FUNC_next = 1824UL;
        } else {
          _1_OBF_FUNC_next = 1764UL;
        }
        break;
      case 398:
        _index14_0++;
        _1_OBF_FUNC_next = 1816UL;
        break;
      case 878:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 1984UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1858UL;
          break;
        default:
          _1_OBF_FUNC_next = 1735UL;
          break;
        }
        break;
      case 1367:
        tmp___40 = rand();
        _1_OBF_FUNC_next = 969UL;
        break;
      case 637:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1070UL;
        break;
      case 1902:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1633UL;
        break;
      case 1590:
        tmp___158 = rand();
        _1_OBF_FUNC_next = 157UL;
        break;
      case 577:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 520UL;
        break;
      case 868:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1456UL;
        break;
      case 1815:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 371:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 793UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 939:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1041UL;
        } else {
          _1_OBF_FUNC_next = 331UL;
        }
        break;
      case 1118:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 1722UL;
        break;
      case 491:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 195UL;
        break;
      case 785:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1387UL;
        break;
      case 333:
        _index14_0++;
        _1_OBF_FUNC_next = 1387UL;
        break;
      case 703:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1205UL;
        break;
      case 250:
        tmp___38 = rand();
        _1_OBF_FUNC_next = 834UL;
        break;
      case 626:;
        if (tmp___87 % 10 >= 5) {
          _1_OBF_FUNC_next = 1269UL;
        } else {
          _1_OBF_FUNC_next = 86UL;
        }
        break;
      case 1093:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 432UL;
        } else {
          _1_OBF_FUNC_next = 1078UL;
        }
        break;
      case 1441:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1539UL;
        break;
      case 206:
        tmp___93 = rand();
        _1_OBF_FUNC_next = 687UL;
        break;
      case 446:
        tmp___90 = rand();
        _1_OBF_FUNC_next = 1185UL;
        break;
      case 1240:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 769UL;
        } else {
          _1_OBF_FUNC_next = 352UL;
        }
        break;
      case 1965:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 832UL;
        break;
      case 1872:
        tmp___54 = rand();
        _1_OBF_FUNC_next = 779UL;
        break;
      case 1954:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1117UL;
        break;
      case 277:;
        if (tmp___14 % 10 >= 5) {
          _1_OBF_FUNC_next = 1140UL;
        } else {
          _1_OBF_FUNC_next = 942UL;
        }
        break;
      case 1651:;
        if (!((localStaticState[0UL] >> 4U) & 1U)) {
          _1_OBF_FUNC_next = 181UL;
        } else {
          _1_OBF_FUNC_next = 201UL;
        }
        break;
      case 1950:
        _index14_0++;
        _1_OBF_FUNC_next = 1381UL;
        break;
      case 89:;
        if ((unsigned long)_index6_0 < 0UL) {
          _1_OBF_FUNC_next = 735UL;
        } else {
          _1_OBF_FUNC_next = 320UL;
        }
        break;
      case 695:
        _index14_0++;
        _1_OBF_FUNC_next = 1912UL;
        break;
      case 1061:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 719UL;
        } else {
          _1_OBF_FUNC_next = 1314UL;
        }
        break;
      case 217:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1146UL;
        } else {
          _1_OBF_FUNC_next = 435UL;
        }
        break;
      case 470:;
        if (tmp___24 % 10 >= 5) {
          _1_OBF_FUNC_next = 371UL;
        } else {
          _1_OBF_FUNC_next = 306UL;
        }
        break;
      case 833:
        _index14_0++;
        _1_OBF_FUNC_next = 1451UL;
        break;
      case 573:
        tmp___39 = rand();
        _1_OBF_FUNC_next = 1160UL;
        break;
      case 1669:
        _index14_0++;
        _1_OBF_FUNC_next = 1951UL;
        break;
      case 666:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 899UL;
        break;
      case 1322:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1077UL;
        } else {
          _1_OBF_FUNC_next = 1451UL;
        }
        break;
      case 1416:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1591UL;
        break;
      case 1718:;
        if (tmp___72 % 10 >= 5) {
          _1_OBF_FUNC_next = 609UL;
        } else {
          _1_OBF_FUNC_next = 534UL;
        }
        break;
      case 665:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1032UL;
        } else {
          _1_OBF_FUNC_next = 1061UL;
        }
        break;
      case 1547:
        tmp___48 = rand();
        _1_OBF_FUNC_next = 1835UL;
        break;
      case 476:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1687UL;
        } else {
          _1_OBF_FUNC_next = 1136UL;
        }
        break;
      case 303:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 73UL;
        break;
      case 712:
        tmp___128 = rand();
        _1_OBF_FUNC_next = 1770UL;
        break;
      case 1065:
        tmp___47 = rand();
        _1_OBF_FUNC_next = 1957UL;
        break;
      case 356:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1457UL;
        } else {
          _1_OBF_FUNC_next = 747UL;
        }
        break;
      case 672:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 218UL;
        break;
      case 273:;
        if (tmp___110 % 10 >= 5) {
          _1_OBF_FUNC_next = 1720UL;
        } else {
          _1_OBF_FUNC_next = 621UL;
        }
        break;
      case 70:
        _index14_0++;
        _1_OBF_FUNC_next = 1817UL;
        break;
      case 1029:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1682UL;
        break;
      case 898:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1391UL;
        } else {
          _1_OBF_FUNC_next = 1649UL;
        }
        break;
      case 134:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 632UL;
        break;
      case 509:
        _index14_0++;
        _1_OBF_FUNC_next = 752UL;
        break;
      case 24:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 142UL;
        break;
      case 1087:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 816UL;
        } else {
          _1_OBF_FUNC_next = 1559UL;
        }
        break;
      case 1374:
        tmp___135 = rand();
        _1_OBF_FUNC_next = 105UL;
        break;
      case 167:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 400UL;
        } else {
          _1_OBF_FUNC_next = 234UL;
        }
        break;
      case 407:
        tmp___27 = rand();
        _1_OBF_FUNC_next = 1565UL;
        break;
      case 415:
        tmp___88 = rand();
        _1_OBF_FUNC_next = 1421UL;
        break;
      case 1792:;
        if (tmp___34 % 10 >= 5) {
          _1_OBF_FUNC_next = 1646UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 750:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1925UL;
        } else {
          _1_OBF_FUNC_next = 819UL;
        }
        break;
      case 917:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 93UL;
        } else {
          _1_OBF_FUNC_next = 957UL;
        }
        break;
      case 57:
        _induction9_8_2 = 0U;
        _1_OBF_FUNC_next = 1091UL;
        break;
      case 156:
        tmp___100 = rand();
        _1_OBF_FUNC_next = 200UL;
        break;
      case 669:;
        if (tmp___45 % 10 >= 5) {
          _1_OBF_FUNC_next = 794UL;
        } else {
          _1_OBF_FUNC_next = 1571UL;
        }
        break;
      case 1866:
        _index14_0++;
        _1_OBF_FUNC_next = 1900UL;
        break;
      case 1326:
        tmp___144 = rand();
        _1_OBF_FUNC_next = 334UL;
        break;
      case 941:;
        if (tmp___130 % 10 >= 5) {
          _1_OBF_FUNC_next = 1078UL;
        } else {
          _1_OBF_FUNC_next = 1978UL;
        }
        break;
      case 1001:
        _index14_0++;
        _1_OBF_FUNC_next = 1159UL;
        break;
      case 1780:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 636UL;
        break;
      case 420:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 543UL;
        } else {
          _1_OBF_FUNC_next = 1058UL;
        }
        break;
      case 1418:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1555UL;
        } else {
          _1_OBF_FUNC_next = 1338UL;
        }
        break;
      case 344:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 971UL;
        break;
      case 552:
        _index14_0++;
        _1_OBF_FUNC_next = 720UL;
        break;
      case 518:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 156UL;
        } else {
          _1_OBF_FUNC_next = 1157UL;
        }
        break;
      case 1963:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 829UL;
        break;
      case 1500:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1361UL;
        } else {
          _1_OBF_FUNC_next = 332UL;
        }
        break;
      case 517:
        tmp___73 = rand();
        _1_OBF_FUNC_next = 151UL;
        break;
      case 1361:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 417UL;
        break;
      case 1629:
        _index14_0++;
        _1_OBF_FUNC_next = 1069UL;
        break;
      case 971:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1656UL;
        break;
      case 997:
        tmp___110 = rand();
        _1_OBF_FUNC_next = 273UL;
        break;
      case 1856:
        _induction9_8_2 = 0U;
        _1_OBF_FUNC_next = 738UL;
        break;
      case 1146:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1134UL;
        break;
      case 1724:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 94UL;
        } else {
          _1_OBF_FUNC_next = 1291UL;
        }
        break;
      case 331:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1949UL;
        } else {
          _1_OBF_FUNC_next = 1515UL;
        }
        break;
      case 965:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1554UL;
        } else {
          _1_OBF_FUNC_next = 211UL;
        }
        break;
      case 1731:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 185UL;
        } else {
          _1_OBF_FUNC_next = 1441UL;
        }
        break;
      case 693:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 673UL;
        break;
      case 388:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 665UL;
        break;
      case 887:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 591UL;
        break;
      case 40:
        tmp___111 = rand();
        _1_OBF_FUNC_next = 1176UL;
        break;
      case 1874:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 617UL;
        break;
      case 67:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 407UL;
        } else {
          _1_OBF_FUNC_next = 1804UL;
        }
        break;
      case 1636:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 997UL;
        } else {
          _1_OBF_FUNC_next = 1720UL;
        }
        break;
      case 110:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1691UL;
        } else {
          _1_OBF_FUNC_next = 131UL;
        }
        break;
      case 779:;
        if (tmp___54 % 10 >= 5) {
          _1_OBF_FUNC_next = 1409UL;
        } else {
          _1_OBF_FUNC_next = 1750UL;
        }
        break;
      case 931:
        tmp___141 = rand();
        _1_OBF_FUNC_next = 100UL;
        break;
      case 1012:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1620UL;
        } else {
          _1_OBF_FUNC_next = 1518UL;
        }
        break;
      case 6:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 903UL;
        } else {
          _1_OBF_FUNC_next = 1641UL;
        }
        break;
      case 155:
        tmp___86 = rand();
        _1_OBF_FUNC_next = 1224UL;
        break;
      case 483:
        tmp___118 = rand();
        _1_OBF_FUNC_next = 1417UL;
        break;
      case 1030:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 634UL;
        break;
      case 1853:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 1067UL;
        }
        break;
      case 1934:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 153UL;
        break;
      case 530:
        _index14_0++;
        _1_OBF_FUNC_next = 565UL;
        break;
      case 342:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 800UL;
        break;
      case 675:
        tmp___155 = rand();
        _1_OBF_FUNC_next = 1128UL;
        break;
      case 1522:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 754UL;
        } else {
          _1_OBF_FUNC_next = 495UL;
        }
        break;
      case 1202:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 987UL;
        } else {
          _1_OBF_FUNC_next = 1543UL;
        }
        break;
      case 256:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 104UL;
        } else {
          _1_OBF_FUNC_next = 1518UL;
        }
        break;
      case 374:;
        if (tmp___157 % 10 >= 5) {
          _1_OBF_FUNC_next = 13UL;
        } else {
          _1_OBF_FUNC_next = 248UL;
        }
        break;
      case 1649:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 413UL;
        } else {
          _1_OBF_FUNC_next = 965UL;
        }
        break;
      case 1945:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 365UL;
        break;
      case 495:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 610UL;
        break;
      case 74:
        tmp___45 = rand();
        _1_OBF_FUNC_next = 669UL;
        break;
      case 1929:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        _1_OBF_FUNC_next = 1538UL;
        break;
      case 1847:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 902UL;
        break;
      case 1088:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 977UL;
        break;
      case 1472:;
        if (tmp___4 % 10 >= 5) {
          _1_OBF_FUNC_next = 800UL;
        } else {
          _1_OBF_FUNC_next = 521UL;
        }
        break;
      case 234:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1707UL;
        break;
      case 713:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 91UL;
        } else {
          _1_OBF_FUNC_next = 819UL;
        }
        break;
      case 1889:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 18UL;
        } else {
          _1_OBF_FUNC_next = 1824UL;
        }
        break;
      case 1158:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1917UL;
        break;
      case 1308:;
        if (tmp___17 % 10 >= 5) {
          _1_OBF_FUNC_next = 1549UL;
        } else {
          _1_OBF_FUNC_next = 538UL;
        }
        break;
      case 1383:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 149UL;
        } else {
          _1_OBF_FUNC_next = 1378UL;
        }
        break;
      case 240:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1899UL;
        break;
      case 218:
        _index2_1++;
        _1_OBF_FUNC_next = 1574UL;
        break;
      case 1294:;
        if (tmp___97 % 10 >= 5) {
          _1_OBF_FUNC_next = 1166UL;
        } else {
          _1_OBF_FUNC_next = 1914UL;
        }
        break;
      case 723:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 812UL;
        } else {
          _1_OBF_FUNC_next = 142UL;
        }
        break;
      case 1181:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 506UL;
        break;
      case 1615:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 586UL;
        break;
      case 163:
        _index14_0++;
        _1_OBF_FUNC_next = 803UL;
        break;
      case 230:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 654UL;
        break;
      case 1155:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1910UL;
        break;
      case 1635:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 303UL;
        } else {
          _1_OBF_FUNC_next = 15UL;
        }
        break;
      case 114:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1655UL;
        break;
      case 1217:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1120UL;
        } else {
          _1_OBF_FUNC_next = 465UL;
        }
        break;
      case 1391:
        tmp___150 = rand();
        _1_OBF_FUNC_next = 1UL;
        break;
      case 252:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1229UL;
        break;
      case 1428:
        _index14_0++;
        _1_OBF_FUNC_next = 1243UL;
        break;
      case 1700:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 755UL;
        break;
      case 547:;
        if (tmp___98 % 10 >= 5) {
          _1_OBF_FUNC_next = 1344UL;
        } else {
          _1_OBF_FUNC_next = 628UL;
        }
        break;
      case 782:;
        if (tmp___120 % 10 >= 5) {
          _1_OBF_FUNC_next = 622UL;
        } else {
          _1_OBF_FUNC_next = 1494UL;
        }
        break;
      case 1060:
        _index14_0++;
        _1_OBF_FUNC_next = 1631UL;
        break;
      case 1372:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 205UL;
        } else {
          _1_OBF_FUNC_next = 928UL;
        }
        break;
      case 1633:
        _index14_0++;
        _1_OBF_FUNC_next = 1246UL;
        break;
      case 1979:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1418UL;
        break;
      case 660:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 1108UL;
        break;
      case 538:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 530UL;
        break;
      case 636:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 256UL;
        break;
      case 1145:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1094UL;
        break;
      case 533:
        _index14_0++;
        _1_OBF_FUNC_next = 1409UL;
        break;
      case 631:;
        if (tmp___89 % 10 >= 5) {
          _1_OBF_FUNC_next = 1757UL;
        } else {
          _1_OBF_FUNC_next = 1474UL;
        }
        break;
      case 1293:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 6UL;
        break;
      case 1461:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 752UL;
        break;
      case 736:;
        if (tmp___105 % 10 >= 5) {
          _1_OBF_FUNC_next = 315UL;
        } else {
          _1_OBF_FUNC_next = 237UL;
        }
        break;
      case 447:;
        if (tmp___146 % 10 >= 5) {
          _1_OBF_FUNC_next = 898UL;
        } else {
          _1_OBF_FUNC_next = 223UL;
        }
        break;
      case 1773:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 356UL;
        break;
      case 1605:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 662UL;
        break;
      case 66:
        _index14_0++;
        _1_OBF_FUNC_next = 255UL;
        break;
      case 363:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 701UL;
        break;
      case 1456:
        _index14_0++;
        _1_OBF_FUNC_next = 1147UL;
        break;
      case 340:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1986UL;
        break;
      case 1794:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 211UL;
        break;
      case 1840:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1642UL;
        } else {
          _1_OBF_FUNC_next = 634UL;
        }
        break;
      case 1471:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 954UL;
        break;
      case 1783:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 234UL;
        break;
      case 678:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 136UL;
        break;
      case 795:
        tmp___97 = rand();
        _1_OBF_FUNC_next = 1294UL;
        break;
      case 865:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1733UL;
        break;
      case 1345:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 605UL;
        } else {
          _1_OBF_FUNC_next = 934UL;
        }
        break;
      case 589:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 706UL;
        break;
      case 737:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 1625UL;
        break;
      case 949:
        _induction5_4_2 = 0U;
        _1_OBF_FUNC_next = 1482UL;
        break;
      case 1858:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 588UL;
        } else {
          _1_OBF_FUNC_next = 717UL;
        }
        break;
      case 18:
        tmp___37 = rand();
        _1_OBF_FUNC_next = 1290UL;
        break;
      case 1425:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1699UL;
        break;
      case 1659:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1439UL;
        break;
      case 1757:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 789UL;
        } else {
          _1_OBF_FUNC_next = 1843UL;
        }
        break;
      case 452:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 553UL;
        } else {
          _1_OBF_FUNC_next = 13UL;
        }
        break;
      case 1169:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 122UL;
        break;
      case 532:;
        if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
        } else if (tmp___116 % 10 >= 5) {
          _1_OBF_FUNC_next = 496UL;
        } else {
          _1_OBF_FUNC_next = 260UL;
        }
        break;
      case 726:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1326UL;
        } else {
          _1_OBF_FUNC_next = 1354UL;
        }
        break;
      case 258:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 476UL;
        break;
      case 897:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1830UL;
        break;
      case 1249:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1026UL;
        break;
      case 942:
        localStaticState[0UL] = localStaticState[_index6_0] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        _1_OBF_FUNC_next = 1126UL;
        break;
      case 1208:
        tmp___1 = rand();
        _1_OBF_FUNC_next = 390UL;
        break;
      case 1079:
        tmp___137 = rand();
        _1_OBF_FUNC_next = 1189UL;
        break;
      case 508:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 481UL;
        break;
      case 1793:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1182UL;
        } else {
          _1_OBF_FUNC_next = 879UL;
        }
        break;
      case 544:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 234UL;
        break;
      case 1031:
        tmp___31 = rand();
        _1_OBF_FUNC_next = 1203UL;
        break;
      case 1549:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1459UL;
        } else {
          _1_OBF_FUNC_next = 991UL;
        }
        break;
      case 1318:;
        if (tmp___96 % 10 >= 5) {
          _1_OBF_FUNC_next = 1739UL;
        } else {
          _1_OBF_FUNC_next = 968UL;
        }
        break;
      case 1913:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 710UL;
        } else {
          _1_OBF_FUNC_next = 1582UL;
        }
        break;
      case 743:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 321UL;
        } else {
          _1_OBF_FUNC_next = 846UL;
        }
        break;
      case 879:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 247UL;
        } else {
          _1_OBF_FUNC_next = 622UL;
        }
        break;
      case 275:
        _index14_0++;
        _1_OBF_FUNC_next = 755UL;
        break;
      case 1179:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 659UL;
        break;
      case 428:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1237UL;
        } else {
          _1_OBF_FUNC_next = 898UL;
        }
        break;
      case 1298:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 587UL;
        break;
      case 528:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 412UL;
        break;
      case 768:
        tmp___134 = rand();
        _1_OBF_FUNC_next = 1585UL;
        break;
      case 818:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1711UL;
        break;
      case 1023:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1488UL;
        break;
      case 216:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 813UL;
        break;
      case 682:;
        if (tmp___11 % 10 >= 5) {
          _1_OBF_FUNC_next = 381UL;
        } else {
          _1_OBF_FUNC_next = 1967UL;
        }
        break;
      case 520:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1934UL;
        } else {
          _1_OBF_FUNC_next = 1895UL;
        }
        break;
      case 1032:
        tmp___64 = rand();
        _1_OBF_FUNC_next = 1892UL;
        break;
      case 1538:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1684UL;
        } else {
          _1_OBF_FUNC_next = 633UL;
        }
        break;
      case 1182:
        tmp___119 = rand();
        _1_OBF_FUNC_next = 1886UL;
        break;
      case 426:
        tmp___58 = rand();
        _1_OBF_FUNC_next = 1380UL;
        break;
      case 1841:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1217UL;
        break;
      case 431:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1407UL;
        } else {
          _1_OBF_FUNC_next = 917UL;
        }
        break;
      case 475:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 114UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1347UL;
          break;
        default:
          _1_OBF_FUNC_next = 1010UL;
          break;
        }
        break;
      case 831:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1297UL;
        break;
      case 1436:
        tmp___94 = rand();
        _1_OBF_FUNC_next = 499UL;
        break;
      case 1488:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1825UL;
        break;
      case 731:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 846UL;
        break;
      case 1129:
        _index14_0++;
        _1_OBF_FUNC_next = 1549UL;
        break;
      case 1267:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 188UL;
        break;
      case 1726:
        _index14_0++;
        _1_OBF_FUNC_next = 1516UL;
        break;
      case 1789:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 1790UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 339UL;
          break;
        default:
          _1_OBF_FUNC_next = 24UL;
          break;
        }
        break;
      case 1:;
        if (tmp___150 % 10 >= 5) {
          _1_OBF_FUNC_next = 1649UL;
        } else {
          _1_OBF_FUNC_next = 1399UL;
        }
        break;
      case 1693:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1228UL;
        break;
      case 947:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1057UL;
        break;
      case 1469:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 711UL;
        } else {
          _1_OBF_FUNC_next = 488UL;
        }
        break;
      case 1600:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 976UL;
        break;
      case 448:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1693UL;
        } else {
          _1_OBF_FUNC_next = 1228UL;
        }
        break;
      case 541:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1410UL;
        break;
      case 1212:
        localStaticState[0UL] = localStaticState[_index6_0] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        _1_OBF_FUNC_next = 1839UL;
        break;
      case 1770:;
        if (tmp___128 % 10 >= 5) {
          _1_OBF_FUNC_next = 1229UL;
        } else {
          _1_OBF_FUNC_next = 1158UL;
        }
        break;
      case 1855:;
        if (tmp___91 % 10 >= 5) {
          _1_OBF_FUNC_next = 127UL;
        } else {
          _1_OBF_FUNC_next = 1677UL;
        }
        break;
      case 506:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 6UL;
        break;
      case 602:
        tmp___28 = rand();
        _1_OBF_FUNC_next = 629UL;
        break;
      case 1228:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1145UL;
        break;
      case 36:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 998UL;
        break;
      case 1695:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 451UL;
        break;
      case 684:
        tmp___72 = rand();
        _1_OBF_FUNC_next = 1718UL;
        break;
      case 1475:
        _index14_0++;
        _1_OBF_FUNC_next = 416UL;
        break;
      case 181:;
        if (localStaticState[1UL] & 1U) {
          _1_OBF_FUNC_next = 1247UL;
        } else {
          _1_OBF_FUNC_next = 201UL;
        }
        break;
      case 876:
        localStaticState[0UL] = localStaticState[_index6_0] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        _1_OBF_FUNC_next = 1856UL;
        break;
      case 1879:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 59UL;
        break;
      case 1216:
        tmp___132 = rand();
        _1_OBF_FUNC_next = 1047UL;
        break;
      case 402:;
        if ((unsigned long)_index0_4 < 4UL) {
          _1_OBF_FUNC_next = 1208UL;
        } else {
          _1_OBF_FUNC_next = 1752UL;
        }
        break;
      case 26:
        tmp___85 = rand();
        _1_OBF_FUNC_next = 1405UL;
        break;
      case 1002:
        tmp___66 = rand();
        _1_OBF_FUNC_next = 1510UL;
        break;
      case 1354:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1088UL;
        } else {
          _1_OBF_FUNC_next = 488UL;
        }
        break;
      case 435:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1883UL;
        break;
      case 1387:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 108UL;
        }
        break;
      case 875:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 211UL;
        break;
      case 135:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 962UL;
        } else {
          _1_OBF_FUNC_next = 144UL;
        }
        break;
      case 1587:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 575UL;
        break;
      case 1928:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 428UL;
        break;
      case 1260:;
        if (tmp___6 % 10 >= 5) {
          _1_OBF_FUNC_next = 1348UL;
        } else {
          _1_OBF_FUNC_next = 1144UL;
        }
        break;
      case 1437:
        _index14_0++;
        _1_OBF_FUNC_next = 424UL;
        break;
      case 125:;
        if (tmp___57 % 10 >= 5) {
          _1_OBF_FUNC_next = 557UL;
        } else {
          _1_OBF_FUNC_next = 560UL;
        }
        break;
      case 676:;
        if (tmp___114 % 10 >= 5) {
          _1_OBF_FUNC_next = 1484UL;
        } else {
          _1_OBF_FUNC_next = 1429UL;
        }
        break;
      case 973:
        _index14_0++;
        _1_OBF_FUNC_next = 186UL;
        break;
      case 1042:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 281UL;
        break;
      case 1095:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 272UL;
        break;
      case 1514:
        tmp___114 = rand();
        _1_OBF_FUNC_next = 676UL;
        break;
      case 227:
        _index14_0++;
        _1_OBF_FUNC_next = 1395UL;
        break;
      case 454:;
        if (tmp___109 % 10 >= 5) {
          _1_OBF_FUNC_next = 1636UL;
        } else {
          _1_OBF_FUNC_next = 555UL;
        }
        break;
      case 606:
        tmp___151 = rand();
        _1_OBF_FUNC_next = 1859UL;
        break;
      case 935:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1867UL;
        break;
      case 1219:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1639UL;
        break;
      case 269:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 163UL;
        break;
      case 1156:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1313UL;
        break;
      case 117:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 1418UL;
        } else {
          _1_OBF_FUNC_next = 1746UL;
        }
        break;
      case 1712:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 206UL;
        } else {
          _1_OBF_FUNC_next = 1193UL;
        }
        break;
      case 1092:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1621UL;
        break;
      case 525:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 519UL;
        break;
      case 546:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 597UL;
        } else {
          _1_OBF_FUNC_next = 1242UL;
        }
        break;
      case 150:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 175UL;
        break;
      case 244:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 485UL;
        break;
      case 607:
        tmp___116 = rand();
        _1_OBF_FUNC_next = 532UL;
        break;
      case 1691:
        tmp___53 = rand();
        _1_OBF_FUNC_next = 11UL;
        break;
      case 137:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1601UL;
        break;
      case 1530:
        tmp___21 = rand();
        _1_OBF_FUNC_next = 1040UL;
        break;
      case 243:
        _index14_0++;
        _1_OBF_FUNC_next = 64UL;
        break;
      case 194:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1186UL;
        break;
      case 87:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1847UL;
        break;
      case 751:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 589UL;
        } else {
          _1_OBF_FUNC_next = 276UL;
        }
        break;
      case 815:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1195UL;
        break;
      case 1243:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 486UL;
        } else {
          _1_OBF_FUNC_next = 431UL;
        }
        break;
      case 84:;
        if (tmp___69 % 10 >= 5) {
          _1_OBF_FUNC_next = 1542UL;
        } else {
          _1_OBF_FUNC_next = 1874UL;
        }
        break;
      case 183:
        _index4_0 = 0U;
        _1_OBF_FUNC_next = 1393UL;
        break;
      case 1086:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 135UL;
        }
        break;
      case 1246:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1902UL;
        } else {
          _1_OBF_FUNC_next = 1390UL;
        }
        break;
      case 1336:
        _index14_0++;
        _1_OBF_FUNC_next = 1953UL;
        break;
      case 1936:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 595UL;
        } else {
          _1_OBF_FUNC_next = 451UL;
        }
        break;
      case 1744:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1008UL;
        break;
      case 1165:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 919UL;
        } else {
          _1_OBF_FUNC_next = 1028UL;
        }
        break;
      case 281:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 734UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 1911:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 129UL;
        break;
      case 705:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 7UL;
        break;
      case 413:
        tmp___154 = rand();
        _1_OBF_FUNC_next = 27UL;
        break;
      case 708:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1029UL;
        } else {
          _1_OBF_FUNC_next = 1843UL;
        }
        break;
      case 805:
        tmp___29 = rand();
        _1_OBF_FUNC_next = 1578UL;
        break;
      case 788:;
        if (tmp___36 % 10 >= 5) {
          _1_OBF_FUNC_next = 172UL;
        } else {
          _1_OBF_FUNC_next = 159UL;
        }
        break;
      case 700:
        tmp___12 = rand();
        _1_OBF_FUNC_next = 1244UL;
        break;
      case 1572:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 337UL;
        break;
      case 1250:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 895UL;
        break;
      case 1473:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 453UL;
        break;
      case 1050:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 160UL;
        } else {
          _1_OBF_FUNC_next = 1023UL;
        }
        break;
      case 423:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1035UL;
        break;
      case 1188:
        _index14_0++;
        _1_OBF_FUNC_next = 1372UL;
        break;
      case 424:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 425UL;
        } else {
          _1_OBF_FUNC_next = 1232UL;
        }
        break;
      case 1978:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 664UL;
        break;
      case 1304:
        _induction13_12_2 = 0U;
        _1_OBF_FUNC_next = 1928UL;
        break;
      case 1862:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1963UL;
        } else {
          _1_OBF_FUNC_next = 767UL;
        }
        break;
      case 394:
        _index14_0++;
        _1_OBF_FUNC_next = 135UL;
        break;
      case 1193:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1436UL;
        } else {
          _1_OBF_FUNC_next = 995UL;
        }
        break;
      case 338:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1503UL;
        break;
      case 1346:;
        if (tmp___142 % 10 >= 5) {
          _1_OBF_FUNC_next = 1136UL;
        } else {
          _1_OBF_FUNC_next = 1586UL;
        }
        break;
      case 1440:
        _index14_0++;
        _1_OBF_FUNC_next = 917UL;
        break;
      case 1939:
        _index8_0 = 0U;
        _1_OBF_FUNC_next = 1724UL;
        break;
      case 309:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 989UL;
        } else {
          _1_OBF_FUNC_next = 345UL;
        }
        break;
      case 0:;
        if (tmp___95 % 10 >= 5) {
          _1_OBF_FUNC_next = 708UL;
        } else {
          _1_OBF_FUNC_next = 1221UL;
        }
        break;
      case 763:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1610UL;
        break;
      case 361:;
        if (tmp___18 % 10 >= 5) {
          _1_OBF_FUNC_next = 991UL;
        } else {
          _1_OBF_FUNC_next = 1881UL;
        }
        break;
      case 633:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 1031UL;
        } else {
          _1_OBF_FUNC_next = 1064UL;
        }
        break;
      case 661:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1772UL;
        } else {
          _1_OBF_FUNC_next = 1086UL;
        }
        break;
      case 136:
        _index14_0++;
        _1_OBF_FUNC_next = 1956UL;
        break;
      case 819:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1163UL;
        break;
      case 1495:
        tmp___138 = rand();
        _1_OBF_FUNC_next = 391UL;
        break;
      case 1574:;
        if ((unsigned long)_index2_1 < 1UL) {
          _1_OBF_FUNC_next = 579UL;
        } else {
          _1_OBF_FUNC_next = 1348UL;
        }
        break;
      case 1147:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1374UL;
        } else {
          _1_OBF_FUNC_next = 309UL;
        }
        break;
      case 1878:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1807UL;
        break;
      case 179:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 691UL;
        } else {
          _1_OBF_FUNC_next = 494UL;
        }
        break;
      case 886:
        _index14_0++;
        _1_OBF_FUNC_next = 661UL;
        break;
      case 1176:;
        if (tmp___111 % 10 >= 5) {
          _1_OBF_FUNC_next = 167UL;
        } else {
          _1_OBF_FUNC_next = 871UL;
        }
        break;
      case 329:;
        if (tmp___124 % 10 >= 5) {
          _1_OBF_FUNC_next = 1069UL;
        } else {
          _1_OBF_FUNC_next = 1279UL;
        }
        break;
      case 350:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1712UL;
        break;
      case 1214:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 198UL;
        break;
      case 1746:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 778UL;
        } else {
          _1_OBF_FUNC_next = 336UL;
        }
        break;
      case 352:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 284UL;
        break;
      case 129:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1929UL;
        break;
      case 397:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        _1_OBF_FUNC_next = 89UL;
        break;
      case 358:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1760UL;
        break;
      case 25:
        _index14_0++;
        _1_OBF_FUNC_next = 1768UL;
        break;
      case 1779:
        tmp___156 = rand();
        _1_OBF_FUNC_next = 641UL;
        break;
      case 1986:
        _index14_0++;
        _1_OBF_FUNC_next = 1422UL;
        break;
      case 1616:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 1383UL;
        break;
      case 1817:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1259UL;
        } else {
          _1_OBF_FUNC_next = 1344UL;
        }
        break;
      case 200:;
        if (tmp___100 % 10 >= 5) {
          _1_OBF_FUNC_next = 1157UL;
        } else {
          _1_OBF_FUNC_next = 244UL;
        }
        break;
      case 632:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 777UL;
        break;
      case 925:
        _index14_0++;
        _1_OBF_FUNC_next = 1867UL;
        break;
      case 1279:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 360UL;
        break;
      case 1458:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 671UL;
        } else {
          _1_OBF_FUNC_next = 672UL;
        }
        break;
      case 1657:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 727UL;
        break;
      case 760:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 847UL;
        break;
      case 978:;
        if ((unsigned long)_index0_4 < 4UL) {
          _1_OBF_FUNC_next = 771UL;
        } else {
          _1_OBF_FUNC_next = 1688UL;
        }
        break;
      case 133:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1606UL;
        break;
      case 1932:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 907UL;
        } else {
          _1_OBF_FUNC_next = 658UL;
        }
        break;
      case 796:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1854UL;
        } else {
          _1_OBF_FUNC_next = 211UL;
        }
        break;
      case 825:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 393UL;
        break;
      case 1802:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1264UL;
        break;
      case 1259:
        tmp___98 = rand();
        _1_OBF_FUNC_next = 547UL;
        break;
      case 1748:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1136UL;
        break;
      case 991:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1233UL;
        } else {
          _1_OBF_FUNC_next = 1395UL;
        }
        break;
      case 1940:
        _index14_0++;
        _1_OBF_FUNC_next = 1894UL;
        break;
      case 718:;
        if (tmp___107 % 10 >= 5) {
          _1_OBF_FUNC_next = 431UL;
        } else {
          _1_OBF_FUNC_next = 549UL;
        }
        break;
      case 674:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 594UL;
        } else {
          _1_OBF_FUNC_next = 1171UL;
        }
        break;
      case 1729:
        tmp___34 = rand();
        _1_OBF_FUNC_next = 1792UL;
        break;
      case 96:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 925UL;
        break;
      case 396:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 833UL;
        break;
      case 1368:;
        if (tmp___74 % 10 >= 5) {
          _1_OBF_FUNC_next = 1631UL;
        } else {
          _1_OBF_FUNC_next = 269UL;
        }
        break;
      case 1045:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 967UL;
        } else {
          _1_OBF_FUNC_next = 1975UL;
        }
        break;
      case 1925:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 353UL;
        break;
      case 411:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1114UL;
        break;
      case 646:
        _index14_0++;
        _1_OBF_FUNC_next = 309UL;
        break;
      case 1578:;
        if (tmp___29 % 10 >= 5) {
          _1_OBF_FUNC_next = 859UL;
        } else {
          _1_OBF_FUNC_next = 1102UL;
        }
        break;
      case 952:
        tmp___79 = rand();
        _1_OBF_FUNC_next = 193UL;
        break;
      case 1008:
        _index14_0++;
        _1_OBF_FUNC_next = 1699UL;
        break;
      case 1327:
        _index14_0++;
        _1_OBF_FUNC_next = 222UL;
        break;
      case 1321:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 1895UL;
        break;
      case 1537:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 375UL;
        break;
      case 663:
        tmp___92 = rand();
        _1_OBF_FUNC_next = 1054UL;
        break;
      case 847:
        _index14_0++;
        _1_OBF_FUNC_next = 419UL;
        break;
      case 1398:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 533UL;
        break;
      case 299:
        _index0_4++;
        _1_OBF_FUNC_next = 402UL;
        break;
      case 1040:;
        if (tmp___21 % 10 >= 5) {
          _1_OBF_FUNC_next = 661UL;
        } else {
          _1_OBF_FUNC_next = 1476UL;
        }
        break;
      case 98:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1742UL;
        break;
      case 214:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 351UL;
        } else {
          _1_OBF_FUNC_next = 1322UL;
        }
        break;
      case 630:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 1371UL;
        break;
      case 1796:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          _1_OBF_FUNC_next = 1124UL;
        } else {
          _1_OBF_FUNC_next = 240UL;
        }
        break;
      case 711:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 488UL;
        break;
      case 769:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1223UL;
        break;
      case 1892:;
        if (tmp___64 % 10 >= 5) {
          _1_OBF_FUNC_next = 1061UL;
        } else {
          _1_OBF_FUNC_next = 1365UL;
        }
        break;
      case 1931:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 630UL;
        } else {
          _1_OBF_FUNC_next = 1974UL;
        }
        break;
      case 1515:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 684UL;
        } else {
          _1_OBF_FUNC_next = 609UL;
        }
        break;
      case 13:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 14UL;
        }
        break;
      case 734:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1042UL;
        break;
      case 1719:;
        if (tmp___123 % 10 >= 5) {
          _1_OBF_FUNC_next = 1183UL;
        } else {
          _1_OBF_FUNC_next = 95UL;
        }
        break;
      case 51:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 107UL;
        break;
      case 107:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 654UL;
        break;
      case 1401:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 508UL;
        } else {
          _1_OBF_FUNC_next = 1108UL;
        }
        break;
      case 1253:
        tmp___17 = rand();
        _1_OBF_FUNC_next = 1308UL;
        break;
      case 612:
        _index14_0++;
        _1_OBF_FUNC_next = 356UL;
        break;
      case 1104:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1455UL;
        break;
      case 1778:;
        if (localStaticState[0UL] & 1U) {
          _1_OBF_FUNC_next = 568UL;
        } else {
          _1_OBF_FUNC_next = 1469UL;
        }
        break;
      case 1245:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        _1_OBF_FUNC_next = 381UL;
        break;
      case 601:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 886UL;
        break;
      case 822:;
        if (tmp___145 % 10 >= 5) {
          _1_OBF_FUNC_next = 1355UL;
        } else {
          _1_OBF_FUNC_next = 311UL;
        }
        break;
      case 1603:;
        if (tmp___43 % 10 >= 5) {
          _1_OBF_FUNC_next = 1132UL;
        } else {
          _1_OBF_FUNC_next = 760UL;
        }
        break;
      case 1231:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1004UL;
        } else {
          _1_OBF_FUNC_next = 526UL;
        }
        break;
      case 1409:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1014UL;
        } else {
          _1_OBF_FUNC_next = 1827UL;
        }
        break;
      case 1750:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1397UL;
        break;
      case 193:;
        if (tmp___79 % 10 >= 5) {
          _1_OBF_FUNC_next = 453UL;
        } else {
          _1_OBF_FUNC_next = 831UL;
        }
        break;
      case 527:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 865UL;
        break;
      case 659:
        _index14_0++;
        _1_OBF_FUNC_next = 465UL;
        break;
      case 960:
        _index14_0++;
        _1_OBF_FUNC_next = 747UL;
        break;
      case 992:
        _index14_0++;
        _1_OBF_FUNC_next = 1231UL;
        break;
      case 1149:;
        if (tmp___139 % 10 >= 5) {
          _1_OBF_FUNC_next = 808UL;
        } else {
          _1_OBF_FUNC_next = 1716UL;
        }
        break;
      case 1620:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 1518UL;
        break;
      case 670:
        _index14_0++;
        _1_OBF_FUNC_next = 1165UL;
        break;
      case 1665:
        localStaticState[_induction1_0_2] *= localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 500UL;
        break;
      case 383:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1046UL;
        } else {
          _1_OBF_FUNC_next = 1608UL;
        }
        break;
      case 1221:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 389UL;
        break;
      case 410:;
        if (tmp___106 % 10 >= 5) {
          _1_OBF_FUNC_next = 1243UL;
        } else {
          _1_OBF_FUNC_next = 1744UL;
        }
        break;
      case 1953:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 1281UL;
        } else {
          _1_OBF_FUNC_next = 557UL;
        }
        break;
      case 549:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1428UL;
        break;
      case 154:
        tmp___76 = rand();
        _1_OBF_FUNC_next = 1175UL;
        break;
      case 406:;
        if (tmp___160 % 10 >= 5) {
          _1_OBF_FUNC_next = 796UL;
        } else {
          _1_OBF_FUNC_next = 535UL;
        }
        break;
      case 472:
        _index14_0++;
        _1_OBF_FUNC_next = 272UL;
        break;
      case 595:
        tmp___44 = rand();
        _1_OBF_FUNC_next = 921UL;
        break;
      case 770:;
        if ((unsigned long)_index8_0 < 0UL) {
          _1_OBF_FUNC_next = 99UL;
        } else {
          _1_OBF_FUNC_next = 639UL;
        }
        break;
      case 1686:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1037UL;
        break;
      case 1681:
        localStaticState[_induction1_0_2] *= localStaticState[_induction1_0_2];
        _1_OBF_FUNC_next = 158UL;
        break;
      case 1916:
        localStaticState[1UL] = localStaticState[(unsigned long)_index6_0 % 2UL] - localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        _1_OBF_FUNC_next = 634UL;
        break;
      case 531:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1919UL;
        } else {
          _1_OBF_FUNC_next = 1625UL;
        }
        break;
      case 1141:
        tmp___9 = rand();
        _1_OBF_FUNC_next = 786UL;
        break;
      case 1170:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 338UL;
        } else {
          _1_OBF_FUNC_next = 1068UL;
        }
        break;
      case 1805:
        _index14_0++;
        _1_OBF_FUNC_next = 1824UL;
        break;
      case 1329:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 443UL;
        } else {
          _1_OBF_FUNC_next = 1862UL;
        }
        break;
      case 494:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1851UL;
        break;
      case 1759:
        tmp___49 = rand();
        _1_OBF_FUNC_next = 8UL;
        break;
      case 1166:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 936UL;
        } else {
          _1_OBF_FUNC_next = 1190UL;
        }
        break;
      case 71:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 529UL;
        break;
      case 524:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 1840UL;
        break;
      case 1943:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 423UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 1345UL;
          break;
        default:
          _1_OBF_FUNC_next = 440UL;
          break;
        }
        break;
      case 972:
        tmp___148 = rand();
        _1_OBF_FUNC_next = 1072UL;
        break;
      case 455:
        tmp___139 = rand();
        _1_OBF_FUNC_next = 1149UL;
        break;
      case 775:;
        if (tmp___102 % 10 >= 5) {
          _1_OBF_FUNC_next = 1322UL;
        } else {
          _1_OBF_FUNC_next = 1227UL;
        }
        break;
      case 1410:
        _index12_0 = 0U;
        _1_OBF_FUNC_next = 827UL;
        break;
      case 1825:;
        if ((unsigned long)_index4_0 < 0UL) {
          _1_OBF_FUNC_next = 1432UL;
        } else {
          _1_OBF_FUNC_next = 1094UL;
        }
        break;
      case 311:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 1304UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 187UL;
          break;
        default:
          _1_OBF_FUNC_next = 875UL;
          break;
        }
        break;
      case 722:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 1461UL;
        break;
      case 1102:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 970UL;
        break;
      case 1839:
        _induction9_8_2 = 0U;
        _1_OBF_FUNC_next = 1939UL;
        break;
      case 961:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 796UL;
        break;
      case 1078:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 768UL;
        } else {
          _1_OBF_FUNC_next = 310UL;
        }
        break;
      case 1927:
        _induction11_10_2 = 0U;
        _1_OBF_FUNC_next = 944UL;
        break;
      case 91:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)_index8_0 % 2UL];
        _1_OBF_FUNC_next = 819UL;
        break;
      case 97:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 1462UL;
        break;
      case 594:
        tmp___149 = rand();
        _1_OBF_FUNC_next = 461UL;
        break;
      case 1610:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        _1_OBF_FUNC_next = 1936UL;
        break;
      case 99:;
        switch ((unsigned long)((int)localStaticState[_induction9_8_2]) % 4UL) {
        case 0UL:
          _1_OBF_FUNC_next = 216UL;
          break;
        case 1UL:
          _1_OBF_FUNC_next = 429UL;
          break;
        default:
          _1_OBF_FUNC_next = 1206UL;
          break;
        }
        break;
      case 1859:;
        if (tmp___151 % 10 >= 5) {
          _1_OBF_FUNC_next = 416UL;
        } else {
          _1_OBF_FUNC_next = 1315UL;
        }
        break;
      case 37:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1218UL;
        } else {
          _1_OBF_FUNC_next = 1760UL;
        }
        break;
      case 1689:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 695UL;
        break;
      case 652:;
        if (tmp___16 % 10 >= 5) {
          _1_OBF_FUNC_next = 743UL;
        } else {
          _1_OBF_FUNC_next = 210UL;
        }
        break;
      case 872:
        _index14_0++;
        _1_OBF_FUNC_next = 110UL;
        break;
      case 248:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1375UL;
        break;
      case 1910:
        _index14_0++;
        _1_OBF_FUNC_next = 1028UL;
        break;
      case 1103:
        _induction15_14_2 = 0U;
        _1_OBF_FUNC_next = 867UL;
        break;
      case 1348:;
        if ((unsigned long)_index2_1 < 1UL) {
          _1_OBF_FUNC_next = 1616UL;
        } else {
          _1_OBF_FUNC_next = 149UL;
        }
        break;
      case 1810:
        localStaticState[_index4_0] = localStaticState[0UL] + localStaticState[_index2_1];
        _1_OBF_FUNC_next = 1849UL;
        break;
      case 486:
        tmp___107 = rand();
        _1_OBF_FUNC_next = 718UL;
        break;
      case 643:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1097UL;
        break;
      case 895:;
        if ((unsigned long)_index14_0 < 0UL) {
          _1_OBF_FUNC_next = 363UL;
        } else {
          _1_OBF_FUNC_next = 1780UL;
        }
        break;
      case 957:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 399UL;
        break;
      case 232:;
        if (tmp___65 % 10 >= 5) {
          _1_OBF_FUNC_next = 1641UL;
        } else {
          _1_OBF_FUNC_next = 1491UL;
        }
        break;
      case 927:
        tmp___77 = rand();
        _1_OBF_FUNC_next = 145UL;
        break;
      case 1210:
        _index14_0 = 0U;
        _1_OBF_FUNC_next = 235UL;
        break;
      case 1935:
        tmp___7 = rand();
        _1_OBF_FUNC_next = 239UL;
        break;
      case 115:;
        if (tmp___125 % 10 >= 5) {
          _1_OBF_FUNC_next = 1372UL;
        } else {
          _1_OBF_FUNC_next = 932UL;
        }
        break;
      case 714:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1623UL;
        break;
      case 771:
        tmp = rand();
        _1_OBF_FUNC_next = 433UL;
        break;
      case 936:
        tmp___101 = rand();
        _1_OBF_FUNC_next = 1568UL;
        break;
      case 287:;
        if (tmp___23 % 10 >= 5) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 1249UL;
        }
        break;
      case 1938:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 378UL;
        break;
      case 177:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        _1_OBF_FUNC_next = 315UL;
        break;
      case 336:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 342UL;
        break;
      case 1760:;
        if ((unsigned long)_index10_0 < 0UL) {
          _1_OBF_FUNC_next = 1497UL;
        } else {
          _1_OBF_FUNC_next = 796UL;
        }
        break;
      case 621:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 1933UL;
        break;
      case 1067:;
        if ((unsigned long)_index12_0 < 0UL) {
          _1_OBF_FUNC_next = 1352UL;
        } else {
          _1_OBF_FUNC_next = 1757UL;
        }
        break;
      case 1359:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 623UL;
        break;
      case 86:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        _1_OBF_FUNC_next = 522UL;
        break;
      case 1698:
        _index14_0++;
        _1_OBF_FUNC_next = 264UL;
        break;
      case 2:
        _index10_0 = 0U;
        _1_OBF_FUNC_next = 1712UL;
        break;
      }
    }
  }
}
// variants: loop-fission, block-fission
// expanded variants: loop-fission, block-fission:default
