typedef void *__builtin_va_list;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_internal_list;
union __anonunion_pthread_mutexattr_t_488594144;
struct __pthread_internal_slist;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion____missing_field_name_168944669;
struct __pthread_rwlock_arch_t;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_barrierattr_t_951761806;
union __anonunion_pthread_rwlockattr_t_145707745;
union pthread_attr_t;
struct __anonstruct___wseq32_961093918;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_barrier_t_145707746;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct___g1_start32_972253866;
union __anonunion_pthread_cond_t_951761805;
struct __pthread_mutex_s;
struct timespec;
struct timeval;
struct __anonstruct_ldiv_t_790849867;
union __anonunion_pthread_rwlock_t_656928968;
struct __pthread_cond_s;
union __anonunion_pthread_condattr_t_488594145;
enum __anonenum_idtype_t_558242672;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_mutex_t_335460617;
struct drand48_data;
struct random_data;
union __anonunion____missing_field_name_972253865;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned long __u_quad_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned int __mode_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
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
typedef long __fd_mask;
typedef long __off64_t;
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
typedef unsigned int pthread_key_t;
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
unsigned long _1_alwaysZero;
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
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
typedef unsigned int __socklen_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
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
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_1 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
unsigned long _2_entropy = 4191281148033031745UL;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
};
typedef __uint64_t __uint_least64_t;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
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
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
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
void OBF_FUNC(int *a, int n);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2;
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
};
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int main(int argc, char **argv, char **_formal_envp) {
  int a[10];
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit; }
        _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit; }
        _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit; }
        _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_2_i$nit; }
        _2_OBF_FUNC_1_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_2_i$nit:;
        }
        {
          { goto _1_alwaysZero_i$nit_INLINE__1_alwaysZero_i$nit; }
        _1_alwaysZero_i$nit_INLINE__1_alwaysZero_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_2_i$nit; }
        _2_OBF_FUNC_1_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_2_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_1_i$nit; }
        _2_OBF_FUNC_2_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_1_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_2_i$nit; }
        _2_OBF_FUNC_2_opaque_list_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_2_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_1_i$nit; }
        _2_OBF_FUNC_1_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_list_1_i$nit:;
        }
        {
          {
            _1_entropy = 335830320406540035UL;
            goto _1_entropy_i$nit_INLINE__1_entropy_i$nit;
          }
        _1_entropy_i$nit_INLINE__1_entropy_i$nit:;
        }
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
void OBF_FUNC(int *a, int n) {
  int i;
  int j;
  int __RANDVAR__27826040080511641946__;
  int temp;
  int __RANDVAR__85418945122323454464__;
  int temp___0;
  int __RANDVAR__22526326578224395813__;
  int temp___1;
  int __RANDVAR__66788561998593893925__;
  int temp___2;
  int __RANDVAR__20171062369736728385__;
  int temp___3;
  int __RANDVAR__87330471208156360026__;
  int temp___4;
  int __RANDVAR__53845358526202721340__;
  int __RANDVAR__88947956413900232740__;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p19;
  int i20;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p21;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p25;
  int i26;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p27;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  void *tmp___2;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p36;
  int i37;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p38;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p42;
  int i43;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p44;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      tmp = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p25 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp;
      p25->next = p25;
      p25->prev = p25;
      _2_OBF_FUNC_2_opaque_list_1 = p25;
      i26 = 0;
      while (i26 < 4) {
        tmp___0 = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p27 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp___0;
        p27->data = (int)((unsigned long)i26 * ((_1_entropy ^ 2UL) - ((~_1_entropy & 2UL) + (~_1_entropy & 2UL))));
        p27->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p27->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p27;
        _2_OBF_FUNC_2_opaque_list_1->next = p27;
        i26++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_2->next;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      tmp___1 = malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p19 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___1;
      p19->next = p19;
      p19->prev = p19;
      _2_OBF_FUNC_1_opaque_list_1 = p19;
      i20 = 0;
      while (i20 < 3) {
        tmp___2 = malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p21 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___2;
        p21->data = (int)((unsigned long)i20 * ((_1_entropy | 3UL) - (_1_entropy & 3UL)));
        p21->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p21->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p21;
        _2_OBF_FUNC_1_opaque_list_1->next = p21;
        i20++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p42 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p42->next = p42;
      p42->prev = p42;
      _3_OBF_FUNC_2_opaque_list_1 = p42;
      i43 = 0;
      while (i43 < 2) {
        p44 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p44->data = i43 * (((_2_entropy | 4) << 1UL) - (_2_entropy ^ 4));
        p44->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p44->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p44;
        _3_OBF_FUNC_2_opaque_list_1->next = p44;
        i43++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p36 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p36->next = p36;
      p36->prev = p36;
      _3_OBF_FUNC_1_opaque_list_1 = p36;
      i37 = 0;
      while (i37 < 2) {
        p38 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p38->data = i37 * ((_2_entropy ^ 2) + ((_2_entropy & 2) + (_2_entropy & 2)));
        p38->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p38->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p38;
        _3_OBF_FUNC_1_opaque_list_1->next = p38;
        i37++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 241UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 239:
        __RANDVAR__88947956413900232740__ = 1;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 182:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 3UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 18:;
        if (__RANDVAR__88947956413900232740__ == 0) {
          _1_OBF_FUNC_next = 218UL;
        } else {
          _1_OBF_FUNC_next = 188UL;
        }
        break;
      case 50:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 30UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        break;
      case 80:
        j = i - 1;
        _1_OBF_FUNC_next = 210UL;
        break;
      case 104:
        j = i - 1;
        _1_OBF_FUNC_next = 257UL;
        break;
      case 188:;
        return;
        break;
      case 219:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 103:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 36UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 189:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 201UL;
        break;
      case 272:
        j--;
        _1_OBF_FUNC_next = 180UL;
        break;
      case 145:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 189UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 15:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 82UL;
        }
        break;
      case 221:
        i++;
        _1_OBF_FUNC_next = 37UL;
        break;
      case 180:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 252UL;
        } else {
          _1_OBF_FUNC_next = 97UL;
        }
        break;
      case 275:
        j--;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 121:
        j = i - 1;
        _1_OBF_FUNC_next = 44UL;
        break;
      case 141:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 71UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 216:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 46UL;
        } else {
          _1_OBF_FUNC_next = 207UL;
        }
        break;
      case 168:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 217UL;
        } else {
          _1_OBF_FUNC_next = 192UL;
        }
        break;
      case 152:
        temp = *(a + i);
        _1_OBF_FUNC_next = 197UL;
        break;
      case 8:
        i++;
        _1_OBF_FUNC_next = 22UL;
        break;
      case 160:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 134UL;
        } else {
          _1_OBF_FUNC_next = 161UL;
        }
        break;
      case 204:
        __RANDVAR__66788561998593893925__ = 1;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 246:
        __RANDVAR__66788561998593893925__ = main(__RANDVAR__20171062369736728385__, (char **)0, (char **)0);
        _1_OBF_FUNC_next = 204UL;
        break;
      case 195:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 215UL;
        break;
      case 54:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 212UL;
        break;
      case 124:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 109UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 140:;
        if (__RANDVAR__85418945122323454464__ == 0) {
          _1_OBF_FUNC_next = 269UL;
        } else {
          _1_OBF_FUNC_next = 175UL;
        }
        break;
      case 1:;
        if (i < n) {
          _1_OBF_FUNC_next = 256UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 77:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 169UL;
        } else {
          _1_OBF_FUNC_next = 172UL;
        }
        break;
      case 242:
        j--;
        _1_OBF_FUNC_next = 240UL;
        break;
      case 159:;
        if ((unsigned long)_2_OBF_FUNC_2_opaque_ptr_1 != (unsigned long)_2_OBF_FUNC_2_opaque_ptr_2) {
          _1_OBF_FUNC_next = 169UL;
        } else {
          _1_OBF_FUNC_next = 10UL;
        }
        break;
      case 3:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 25UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 16:
        j--;
        _1_OBF_FUNC_next = 164UL;
        break;
      case 21:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 114UL;
        break;
      case 36:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 196UL;
        break;
      case 131:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 65UL;
        } else {
          _1_OBF_FUNC_next = 182UL;
        }
        break;
      case 231:;
        if (__RANDVAR__20171062369736728385__ == 0) {
          _1_OBF_FUNC_next = 264UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 68:
        j--;
        _1_OBF_FUNC_next = 17UL;
        break;
      case 213:
        j--;
        _1_OBF_FUNC_next = 182UL;
        break;
      case 122:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 111UL;
        break;
      case 181:;
        if (__RANDVAR__27826040080511641946__ == 0) {
          _1_OBF_FUNC_next = 248UL;
        } else {
          _1_OBF_FUNC_next = 270UL;
        }
        break;
      case 237:
        j--;
        _1_OBF_FUNC_next = 82UL;
        break;
      case 85:
        j--;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 100:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 108UL;
        break;
      case 26:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 237UL;
        break;
      case 105:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 39UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 225:
        i++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 247:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 275UL;
        break;
      case 135:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 40UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 63:
        temp___0 = *(a + i);
        _1_OBF_FUNC_next = 80UL;
        {
          if (_3_OBF_FUNC_1_opaque_ptr_1 == _3_OBF_FUNC_1_opaque_ptr_2) {
            break;
          } else {
          }
        }
      case 176:
        i++;
        _1_OBF_FUNC_next = 174UL;
        break;
      case 186:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 15UL;
        } else {
          _1_OBF_FUNC_next = 82UL;
        }
        break;
      case 192:
        __RANDVAR__87330471208156360026__ = 1;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 211:
        temp___3 = *(a + i);
        _1_OBF_FUNC_next = 121UL;
        break;
      case 259:
        i++;
        _1_OBF_FUNC_next = 14UL;
        break;
      case 271:
        __RANDVAR__53845358526202721340__ = 1;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 125:
        __RANDVAR__53845358526202721340__ = 0;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 143:;
        if (__RANDVAR__66788561998593893925__ == 0) {
          _1_OBF_FUNC_next = 155UL;
        } else {
          _1_OBF_FUNC_next = 156UL;
        }
        break;
      case 19:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 233UL;
        } else {
          _1_OBF_FUNC_next = 186UL;
        }
        break;
      case 32:
        *(a + (j + 1)) = temp___3;
        _1_OBF_FUNC_next = 120UL;
        break;
      case 227:
        i++;
        _1_OBF_FUNC_next = 92UL;
        break;
      case 17:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 101UL;
        } else {
          _1_OBF_FUNC_next = 271UL;
        }
        break;
      case 172:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 150UL;
        } else {
          _1_OBF_FUNC_next = 265UL;
        }
        break;
      case 228:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 141UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 226:
        j--;
        _1_OBF_FUNC_next = 47UL;
        break;
      case 264:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 73UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 269:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 194UL;
        } else {
          _1_OBF_FUNC_next = 127UL;
        }
        break;
      case 117:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 49UL;
        } else {
          _1_OBF_FUNC_next = 179UL;
        }
        break;
      case 208:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 195UL;
        } else {
          _1_OBF_FUNC_next = 82UL;
        }
        break;
      case 60:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 167UL;
        break;
      case 150:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 223UL;
        } else {
          _1_OBF_FUNC_next = 265UL;
        }
        break;
      case 161:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 216UL;
        } else {
          _1_OBF_FUNC_next = 207UL;
        }
        break;
      case 142:
        j--;
        _1_OBF_FUNC_next = 207UL;
        break;
      case 144:
        j--;
        _1_OBF_FUNC_next = 228UL;
        break;
      case 262:
        j--;
        _1_OBF_FUNC_next = 265UL;
        break;
      case 27:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 224UL;
        break;
      case 157:
        j--;
        _1_OBF_FUNC_next = 64UL;
        break;
      case 194:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 9UL;
        } else {
          _1_OBF_FUNC_next = 127UL;
        }
        break;
      case 212:
        i++;
        _1_OBF_FUNC_next = 274UL;
        break;
      case 87:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 135UL;
        } else {
          _1_OBF_FUNC_next = 64UL;
        }
        break;
      case 84:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 171:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 236UL;
        break;
      case 34:
        *(a + (j + 1)) = temp___2;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 274:;
        if (i < n) {
          _1_OBF_FUNC_next = 60UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 241:
        i = 1;
        _1_OBF_FUNC_next = 263UL;
        break;
      case 251:;
        if (i < n) {
          _1_OBF_FUNC_next = 190UL;
        } else {
          _1_OBF_FUNC_next = 99UL;
        }
        break;
      case 169:
        __RANDVAR__85418945122323454464__ = 1;
        _1_OBF_FUNC_next = 140UL;
        break;
      case 127:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 117UL;
        } else {
          _1_OBF_FUNC_next = 179UL;
        }
        break;
      case 22:;
        if (i < n) {
          _1_OBF_FUNC_next = 45UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 215:
        j--;
        _1_OBF_FUNC_next = 82UL;
        break;
      case 65:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 213UL;
        break;
      case 44:
        __RANDVAR__87330471208156360026__ = 0;
        _1_OBF_FUNC_next = 165UL;
        break;
      case 5:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 123UL;
        } else {
          _1_OBF_FUNC_next = 136UL;
        }
        break;
      case 120:
        i++;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 184:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 51UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 162:
        j--;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 33:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 254UL;
        } else {
          _1_OBF_FUNC_next = 240UL;
        }
        if (_3_OBF_FUNC_1_opaque_ptr_1 != _3_OBF_FUNC_1_opaque_ptr_2) {
        } else {
          break;
        }
      case 64:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 29UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        break;
      case 119:
        __RANDVAR__27826040080511641946__ = 1;
        _1_OBF_FUNC_next = 181UL;
        break;
      case 175:
        *(a + (j + 1)) = temp;
        _1_OBF_FUNC_next = 227UL;
        break;
      case 233:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 96UL;
        } else {
          _1_OBF_FUNC_next = 186UL;
        }
        break;
      case 92:;
        if (i < n) {
          _1_OBF_FUNC_next = 63UL;
        } else {
          _1_OBF_FUNC_next = 22UL;
        }
        break;
      case 10:
        OBF_FUNC(a, i20);
        _1_OBF_FUNC_next = 169UL;
        break;
      case 0:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 226UL;
        break;
      case 224:
        j--;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 136:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 33UL;
        } else {
          _1_OBF_FUNC_next = 240UL;
        }
        break;
      case 254:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 242UL;
        break;
      case 153:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 89UL;
        break;
      case 39:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 128UL;
        break;
      case 207:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 208UL;
        } else {
          _1_OBF_FUNC_next = 82UL;
        }
        break;
      case 88:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 145UL;
        } else {
          _1_OBF_FUNC_next = 124UL;
        }
        break;
      case 174:;
        if (i < n) {
          _1_OBF_FUNC_next = 59UL;
        } else {
          _1_OBF_FUNC_next = 81UL;
        }
        break;
      case 126:
        __RANDVAR__66788561998593893925__ = 0;
        _1_OBF_FUNC_next = 143UL;
        break;
      case 179:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 219UL;
        } else {
          _1_OBF_FUNC_next = 79UL;
        }
        break;
      case 20:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 253UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 129:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 151UL;
        } else {
          _1_OBF_FUNC_next = 198UL;
        }
        break;
      case 108:
        j--;
        _1_OBF_FUNC_next = 161UL;
        break;
      case 166:;
        if (__RANDVAR__22526326578224395813__ == 0) {
          _1_OBF_FUNC_next = 5UL;
        } else {
          _1_OBF_FUNC_next = 55UL;
        }
        break;
      case 130:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 86UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 25:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 206UL;
        break;
      case 49:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 91UL;
        break;
      case 52:
        j--;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 250:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 232UL;
        } else {
          _1_OBF_FUNC_next = 228UL;
        }
        break;
      case 30:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 153UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        break;
      case 62:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 144UL;
        break;
      case 106:;
        if ((_1_alwaysZero & (((_1_entropy + 8UL) + 1UL) + ((-_1_entropy - 1UL) | 0xfffffffffffffff7UL))) * (_1_alwaysZero | (((_1_entropy + 8UL) + 1UL) + ((-_1_entropy - 1UL) | 0xfffffffffffffff7UL))) + (_1_alwaysZero & ~(((_1_entropy + 8UL) + 1UL) + ((-_1_entropy - 1UL) | 0xfffffffffffffff7UL))) * (~_1_alwaysZero & (((_1_entropy + 8UL) + 1UL) + ((-_1_entropy - 1UL) | 0xfffffffffffffff7UL)))) {
          _1_OBF_FUNC_next = 246UL;
        } else {
          _1_OBF_FUNC_next = 204UL;
        }
        break;
      case 206:
        j--;
        _1_OBF_FUNC_next = 79UL;
        break;
      case 14:;
        if (i < n) {
          _1_OBF_FUNC_next = 245UL;
        } else {
          _1_OBF_FUNC_next = 174UL;
        }
        break;
      case 111:
        j--;
        _1_OBF_FUNC_next = 146UL;
        break;
      case 266:
        j--;
        _1_OBF_FUNC_next = 250UL;
        break;
      case 82:;
        if (temp___2 < *(a + j)) {
          _1_OBF_FUNC_next = 58UL;
        } else {
          _1_OBF_FUNC_next = 67UL;
        }
        break;
      case 133:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 84UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 89:
        j--;
        _1_OBF_FUNC_next = 168UL;
        break;
      case 79:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 77UL;
        } else {
          _1_OBF_FUNC_next = 159UL;
        }
        break;
      case 217:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 192UL;
        } else {
          _1_OBF_FUNC_next = 88UL;
        }
        break;
      case 270:
        printf("After sorting: ");
        _1_OBF_FUNC_next = 147UL;
        break;
      case 164:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 38UL;
        } else {
          _1_OBF_FUNC_next = 184UL;
        }
        break;
      case 31:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 193UL;
        break;
      case 12:
        i++;
        _1_OBF_FUNC_next = 37UL;
        break;
      case 101:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 271UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 209:
        j--;
        _1_OBF_FUNC_next = 127UL;
        break;
      case 201:
        j--;
        _1_OBF_FUNC_next = 124UL;
        break;
      case 203:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 133UL;
        }
        break;
      case 96:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 112UL;
        break;
      case 45:
        temp___1 = *(a + i);
        _1_OBF_FUNC_next = 273UL;
        break;
      case 78:
        __RANDVAR__88947956413900232740__ = 0;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 81:;
        if (i < n) {
          _1_OBF_FUNC_next = 251UL;
        } else {
          _1_OBF_FUNC_next = 239UL;
        }
        break;
      case 128:
        j--;
        _1_OBF_FUNC_next = 132UL;
        break;
      case 236:
        j--;
        _1_OBF_FUNC_next = 87UL;
        break;
      case 23:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 68UL;
        break;
      case 273:
        j = i - 1;
        _1_OBF_FUNC_next = 126UL;
        break;
      case 70:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 177UL;
        } else {
          _1_OBF_FUNC_next = 164UL;
        }
        break;
      case 134:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 100UL;
        } else {
          _1_OBF_FUNC_next = 161UL;
        }
        break;
      case 24:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 173UL;
        } else {
          _1_OBF_FUNC_next = 20UL;
        }
        break;
      case 94:;
        if (temp___3 < *(a + j)) {
          _1_OBF_FUNC_next = 158UL;
        } else {
          _1_OBF_FUNC_next = 87UL;
        }
        break;
      case 109:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 27UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 190:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 116UL;
        break;
      case 167:
        i++;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 76:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 259UL;
        break;
      case 197:
        j = i - 1;
        _1_OBF_FUNC_next = 220UL;
        break;
      case 245:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 176UL;
        break;
      case 57:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 122UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 156:
        *(a + (j + 1)) = temp___1;
        _1_OBF_FUNC_next = 221UL;
        break;
      case 257:
        __RANDVAR__20171062369736728385__ = 0;
        _1_OBF_FUNC_next = 231UL;
        break;
      case 98:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 57UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 214:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 229UL;
        } else {
          _1_OBF_FUNC_next = 250UL;
        }
        break;
      case 11:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 70UL;
        } else {
          _1_OBF_FUNC_next = 164UL;
        }
        break;
      case 9:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 209UL;
        break;
      case 13:
        *(a + (j + 1)) = temp___4;
        _1_OBF_FUNC_next = 12UL;
        break;
      case 220:
        __RANDVAR__85418945122323454464__ = 0;
        _1_OBF_FUNC_next = 140UL;
        break;
      case 51:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 247UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 107:
        j--;
        _1_OBF_FUNC_next = 19UL;
        break;
      case 146:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 129UL;
        } else {
          _1_OBF_FUNC_next = 198UL;
        }
        break;
      case 40:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 157UL;
        break;
      case 210:
        __RANDVAR__22526326578224395813__ = 0;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 67:
        __RANDVAR__20171062369736728385__ = 1;
        _1_OBF_FUNC_next = 231UL;
        break;
      case 55:
        *(a + (j + 1)) = temp___0;
        _1_OBF_FUNC_next = 8UL;
        break;
      case 132:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 203UL;
        } else {
          _1_OBF_FUNC_next = 133UL;
        }
        break;
      case 110:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 149UL;
        break;
      case 193:
        j--;
        _1_OBF_FUNC_next = 133UL;
        break;
      case 59:
        printf(" %d", *(a + i));
        _1_OBF_FUNC_next = 225UL;
        break;
      case 165:;
        if (__RANDVAR__87330471208156360026__ == 0) {
          _1_OBF_FUNC_next = 94UL;
        } else {
          _1_OBF_FUNC_next = 32UL;
        }
        break;
      case 196:
        j--;
        _1_OBF_FUNC_next = 180UL;
        break;
      case 223:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 262UL;
        break;
      case 155:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 105UL;
        } else {
          _1_OBF_FUNC_next = 132UL;
        }
        break;
      case 116:
        i++;
        _1_OBF_FUNC_next = 99UL;
        break;
      case 154:
        j = i - 1;
        _1_OBF_FUNC_next = 125UL;
        break;
      case 151:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 75UL;
        break;
      case 38:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 191UL;
        } else {
          _1_OBF_FUNC_next = 184UL;
        }
        break;
      case 61:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 85UL;
        break;
      case 158:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 171UL;
        } else {
          _1_OBF_FUNC_next = 87UL;
        }
        break;
      case 256:
        temp___4 = *(a + i);
        _1_OBF_FUNC_next = 154UL;
        break;
      case 58:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 67UL;
        } else {
          _1_OBF_FUNC_next = 160UL;
        }
        break;
      case 74:;
        if (i < n) {
          _1_OBF_FUNC_next = 211UL;
        } else {
          _1_OBF_FUNC_next = 1UL;
        }
        break;
      case 112:
        j--;
        _1_OBF_FUNC_next = 186UL;
        break;
      case 255:;
        if (i < n) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 74UL;
        }
        break;
      case 75:
        j--;
        _1_OBF_FUNC_next = 198UL;
        break;
      case 123:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 42UL;
        } else {
          _1_OBF_FUNC_next = 136UL;
        }
        break;
      case 267:
        j--;
        _1_OBF_FUNC_next = 168UL;
        break;
      case 147:
        i = 0;
        _1_OBF_FUNC_next = 78UL;
        break;
      case 71:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 272UL;
        break;
      case 234:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 267UL;
        break;
      case 173:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 61UL;
        } else {
          _1_OBF_FUNC_next = 20UL;
        }
        break;
      case 260:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 106UL;
        } else {
          _1_OBF_FUNC_next = 130UL;
        }
        break;
      case 53:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 52UL;
        break;
      case 240:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 103UL;
        } else {
          _1_OBF_FUNC_next = 180UL;
        }
        break;
      case 191:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 83UL;
        break;
      case 218:;
        if (i < n) {
          _1_OBF_FUNC_next = 76UL;
        } else {
          _1_OBF_FUNC_next = 14UL;
        }
        break;
      case 47:;
        if (temp___1 < *(a + j)) {
          _1_OBF_FUNC_next = 260UL;
        } else {
          _1_OBF_FUNC_next = 204UL;
        }
        break;
      case 73:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 163UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 91:
        j--;
        _1_OBF_FUNC_next = 179UL;
        break;
      case 97:
        __RANDVAR__22526326578224395813__ = 1;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 163:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 107UL;
        break;
      case 230:;
        if (temp___0 < *(a + j)) {
          _1_OBF_FUNC_next = 214UL;
        } else {
          _1_OBF_FUNC_next = 250UL;
        }
        break;
      case 99:;
        if (i < n) {
          _1_OBF_FUNC_next = 54UL;
        } else {
          _1_OBF_FUNC_next = 274UL;
        }
        break;
      case 114:
        j--;
        _1_OBF_FUNC_next = 47UL;
        break;
      case 37:;
        if (i < n) {
          _1_OBF_FUNC_next = 255UL;
        } else {
          _1_OBF_FUNC_next = 119UL;
        }
        break;
      case 252:;
        if (!(j >= 0)) {
          _1_OBF_FUNC_next = 97UL;
        } else {
          _1_OBF_FUNC_next = 230UL;
        }
        break;
      case 265:;
        if (temp < *(a + j)) {
          _1_OBF_FUNC_next = 131UL;
        } else {
          _1_OBF_FUNC_next = 182UL;
        }
        break;
      case 248:;
        if (i < n) {
          _1_OBF_FUNC_next = 152UL;
        } else {
          _1_OBF_FUNC_next = 92UL;
        }
        break;
      case 41:;
        if (__RANDVAR__53845358526202721340__ == 0) {
          _1_OBF_FUNC_next = 98UL;
        } else {
          _1_OBF_FUNC_next = 13UL;
        }
        break;
      case 95:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 23UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 149:
        j--;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 198:;
        if (temp___4 < *(a + j)) {
          _1_OBF_FUNC_next = 95UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 232:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 228UL;
        }
        break;
      case 42:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 162UL;
        break;
      case 253:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 0UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 229:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 266UL;
        break;
      case 46:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 142UL;
        break;
      case 177:
        *(a + (j + 1)) = *(a + j);
        _1_OBF_FUNC_next = 16UL;
        break;
      case 66:
        temp___2 = *(a + i);
        _1_OBF_FUNC_next = 104UL;
        break;
      case 83:
        j--;
        _1_OBF_FUNC_next = 184UL;
        break;
      case 35:
        i++;
        _1_OBF_FUNC_next = 74UL;
        break;
      case 263:
        __RANDVAR__27826040080511641946__ = 0;
        _1_OBF_FUNC_next = 181UL;
        break;
      case 29:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 234UL;
        } else {
          _1_OBF_FUNC_next = 168UL;
        }
        break;
      case 86:;
        if (j >= 0) {
          _1_OBF_FUNC_next = 110UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      }
    }
  }
}
// variants: loop-unroll, deadcode, block-fission
// expanded variants: loop-unroll, deadcode:call, block-fission:default
