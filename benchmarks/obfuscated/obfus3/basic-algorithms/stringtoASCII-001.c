typedef void *__builtin_va_list;
union __anonunion____missing_field_name_972253865;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct_fd_set_356711149;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_mutex_s;
union __anonunion_pthread_cond_t_951761805;
struct __pthread_internal_slist;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
union pthread_attr_t;
struct __anonstruct_ldiv_t_790849867;
struct timeval;
union __anonunion_pthread_rwlock_t_656928968;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion____missing_field_name_168944669;
struct timespec;
struct __pthread_cond_s;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_internal_list;
union __anonunion_pthread_condattr_t_488594145;
struct __pthread_rwlock_arch_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct___fsid_t_109580352;
struct drand48_data;
struct random_data;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct___g1_start32_972253866;
enum __anonenum_idtype_t_558242672;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
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
typedef int volatile pthread_spinlock_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
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
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
extern void *(realloc)(void *__ptr, size_t __size);
typedef signed char __int8_t;
extern int(clearenv)(void);
typedef unsigned int pthread_key_t;
typedef __clockid_t clockid_t;
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
typedef int pthread_once_t;
typedef unsigned long __fsblkcnt64_t;
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
unsigned long _2_entropy = 8510278629101722406UL;
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
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
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
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
void OBF_FUNC(char *str);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
void OBF_FUNC(char *str) {
  int i;
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
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p44;
  int i45;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p46;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p50;
  int i51;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p52;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p50 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p50->next = p50;
      p50->prev = p50;
      _3_OBF_FUNC_2_opaque_list_1 = p50;
      i51 = 0;
      while (i51 < 2) {
        p52 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p52->data = i51 * (((_2_entropy ^ ~2) + ((_2_entropy | 2) + (_2_entropy | 2))) + 1UL);
        p52->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p52->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p52;
        _3_OBF_FUNC_2_opaque_list_1->next = p52;
        i51++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p44 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p44->next = p44;
      p44->prev = p44;
      _3_OBF_FUNC_1_opaque_list_1 = p44;
      i45 = 0;
      while (i45 < 4) {
        p46 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p46->data = i45 * (((_2_entropy & ~2) << 1UL) - (_2_entropy ^ 2));
        p46->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p46->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p46;
        _3_OBF_FUNC_1_opaque_list_1->next = p46;
        i45++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_2->next;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 151UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 18:;
        if (tmp___17 % 10 >= 5) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 144UL;
        }
        break;
      case 129:
        tmp___20 = i;
        _1_OBF_FUNC_next = 12UL;
        break;
      case 50:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 139UL;
        } else {
          _1_OBF_FUNC_next = 48UL;
        }
        break;
      case 80:
        tmp___26 = i;
        _1_OBF_FUNC_next = 158UL;
        break;
      case 108:
        i++;
        _1_OBF_FUNC_next = 90UL;
        break;
      case 166:
        i++;
        _1_OBF_FUNC_next = 98UL;
        break;
      case 104:
        printf("%d ", (int)*(str + tmp___9));
        _1_OBF_FUNC_next = 146UL;
        break;
      case 130:
        printf("%d ", (int)*(str + tmp___23));
        _1_OBF_FUNC_next = 113UL;
        break;
      case 25:
        i++;
        _1_OBF_FUNC_next = 130UL;
        break;
      case 49:
        i++;
        _1_OBF_FUNC_next = 128UL;
        break;
      case 52:;
        if (tmp___28 % 10 >= 5) {
          _1_OBF_FUNC_next = 50UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 4:
        tmp___8 = rand();
        _1_OBF_FUNC_next = 22UL;
        break;
      case 30:
        printf("%d ", (int)*(str + tmp___12));
        _1_OBF_FUNC_next = 7UL;
        break;
      case 62:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 95UL;
        } else {
          _1_OBF_FUNC_next = 113UL;
        }
        break;
      case 145:
        printf("%d ", (int)*(str + tmp___20));
        _1_OBF_FUNC_next = 62UL;
        break;
      case 15:;
        if (tmp___3 % 10 >= 5) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 43UL;
        }
        break;
      case 133:
        tmp___38 = i;
        _1_OBF_FUNC_next = 53UL;
        break;
      case 89:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 24UL;
        } else {
          _1_OBF_FUNC_next = 162UL;
        }
        break;
      case 56:
        i++;
        _1_OBF_FUNC_next = 30UL;
        break;
      case 164:;
        if (tmp___2 % 10 >= 5) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 54UL;
        }
        break;
      case 31:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 36UL;
        } else {
          _1_OBF_FUNC_next = 50UL;
        }
        break;
      case 12:
        i++;
        _1_OBF_FUNC_next = 145UL;
        break;
      case 141:;
        if (tmp___21 % 10 >= 5) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 153UL;
        }
        break;
      case 168:
        printf("ASCII values of each characters of given string: ");
        _1_OBF_FUNC_next = 114UL;
        break;
      case 69:
        tmp___9 = i;
        _1_OBF_FUNC_next = 160UL;
        break;
      case 8:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 28UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 160:
        i++;
        _1_OBF_FUNC_next = 104UL;
        break;
      case 54:
        tmp___3 = rand();
        _1_OBF_FUNC_next = 15UL;
        break;
      case 78:
        i++;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 118:;
        if (tmp___14 % 10 >= 5) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 157UL;
        }
        break;
      case 1:;
        if (tmp___10 % 10 >= 5) {
          _1_OBF_FUNC_next = 89UL;
        } else {
          _1_OBF_FUNC_next = 63UL;
        }
        break;
      case 128:
        printf("%d ", (int)*(str + tmp___18));
        _1_OBF_FUNC_next = 162UL;
        break;
      case 77:
        printf("%d ", (int)*(str + tmp___31));
        _1_OBF_FUNC_next = 50UL;
        break;
      case 70:
        printf("%d ", (int)*(str + tmp___29));
        _1_OBF_FUNC_next = 31UL;
        break;
      case 3:
        i++;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 134:
        tmp___37 = i;
        _1_OBF_FUNC_next = 3UL;
        break;
      case 16:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 133UL;
        } else {
          _1_OBF_FUNC_next = 97UL;
        }
        break;
      case 24:
        tmp___13 = rand();
        _1_OBF_FUNC_next = 27UL;
        break;
      case 109:
        i++;
        _1_OBF_FUNC_next = 86UL;
        break;
      case 167:;
        if (tmp___16 % 10 >= 5) {
          _1_OBF_FUNC_next = 62UL;
        } else {
          _1_OBF_FUNC_next = 44UL;
        }
        break;
      case 36:
        tmp___27 = rand();
        _1_OBF_FUNC_next = 119UL;
        break;
      case 131:
        tmp___32 = rand();
        _1_OBF_FUNC_next = 163UL;
        break;
      case 122:
        tmp___12 = i;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 26:
        tmp___28 = rand();
        _1_OBF_FUNC_next = 52UL;
        break;
      case 98:
        printf("%d ", (int)*(str + tmp___33));
        _1_OBF_FUNC_next = 48UL;
        break;
      case 105:
        tmp___25 = rand();
        _1_OBF_FUNC_next = 37UL;
        break;
      case 11:
        tmp___23 = i;
        _1_OBF_FUNC_next = 25UL;
        break;
      case 9:;
        if (tmp___24 % 10 >= 5) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 105UL;
        }
        break;
      case 135:
        tmp___2 = rand();
        _1_OBF_FUNC_next = 164UL;
        break;
      case 63:
        tmp___11 = rand();
        _1_OBF_FUNC_next = 39UL;
        break;
      case 51:;
        return;
        break;
      case 146:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 4UL;
        } else {
          _1_OBF_FUNC_next = 7UL;
        }
        break;
      case 143:;
        if (tmp___36 % 10 >= 5) {
          _1_OBF_FUNC_next = 16UL;
        } else {
          _1_OBF_FUNC_next = 134UL;
        }
        break;
      case 17:
        tmp___0 = rand();
        _1_OBF_FUNC_next = 123UL;
        break;
      case 90:
        printf("%d ", (int)*(str + tmp___1));
        _1_OBF_FUNC_next = 114UL;
        break;
      case 40:;
        if (tmp___22 % 10 >= 5) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 11UL;
        }
        break;
      case 67:;
        if (tmp___5 % 10 >= 5) {
          _1_OBF_FUNC_next = 146UL;
        } else {
          _1_OBF_FUNC_next = 120UL;
        }
        break;
      case 55:
        printf("%d ", (int)*(str + tmp___7));
        _1_OBF_FUNC_next = 66UL;
        break;
      case 117:
        tmp___7 = i;
        _1_OBF_FUNC_next = 73UL;
        break;
      case 132:
        tmp = rand();
        _1_OBF_FUNC_next = 149UL;
        break;
      case 150:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 147UL;
        } else {
          _1_OBF_FUNC_next = 16UL;
        }
        break;
      case 165:;
        if (tmp___34 % 10 >= 5) {
          _1_OBF_FUNC_next = 150UL;
        } else {
          _1_OBF_FUNC_next = 35UL;
        }
        break;
      case 6:
        i++;
        _1_OBF_FUNC_next = 77UL;
        break;
      case 142:
        printf("%d ", (int)*(str + tmp___15));
        _1_OBF_FUNC_next = 89UL;
        break;
      case 144:
        tmp___18 = i;
        _1_OBF_FUNC_next = 49UL;
        break;
      case 116:;
        if (tmp___19 % 10 >= 5) {
          _1_OBF_FUNC_next = 113UL;
        } else {
          _1_OBF_FUNC_next = 129UL;
        }
        break;
      case 27:;
        if (tmp___13 % 10 >= 5) {
          _1_OBF_FUNC_next = 162UL;
        } else {
          _1_OBF_FUNC_next = 148UL;
        }
        break;
      case 154:
        printf("%d ", (int)*(str + tmp___26));
        _1_OBF_FUNC_next = 8UL;
        break;
      case 151:
        i = 0;
        _1_OBF_FUNC_next = 168UL;
        break;
      case 157:
        tmp___15 = i;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 61:
        tmp___5 = rand();
        _1_OBF_FUNC_next = 67UL;
        break;
      case 158:
        i++;
        _1_OBF_FUNC_next = 154UL;
        break;
      case 87:;
        if (tmp___6 % 10 >= 5) {
          {
            if ((((_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (_2_alwaysZero | (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) + (_2_alwaysZero & ~(((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (~_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10)))) ^ 0) + ((((_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (_2_alwaysZero | (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) + (_2_alwaysZero & ~(((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (~_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10)))) & 0) + (((_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (_2_alwaysZero | (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) + (_2_alwaysZero & ~(((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10))) * (~_2_alwaysZero & (((_2_entropy | 10) << 1UL) - (_2_entropy ^ 10)))) & 0))) {
            } else {
              _1_OBF_FUNC_next = 146UL;
            }
          }
        } else {
          _1_OBF_FUNC_next = 117UL;
        }
        break;
      case 113:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 10UL;
        } else {
          _1_OBF_FUNC_next = 8UL;
        }
        break;
      case 84:
        printf("%d ", (int)*(str + tmp___38));
        _1_OBF_FUNC_next = 16UL;
        break;
      case 171:
        tmp___33 = i;
        _1_OBF_FUNC_next = 166UL;
        break;
      case 34:
        tmp___29 = i;
        _1_OBF_FUNC_next = 136UL;
        break;
      case 74:;
        if (tmp___30 % 10 >= 5) {
          _1_OBF_FUNC_next = 48UL;
        } else {
          _1_OBF_FUNC_next = 92UL;
        }
        break;
      case 123:;
        if (tmp___0 % 10 >= 5) {
          _1_OBF_FUNC_next = 93UL;
        } else {
          _1_OBF_FUNC_next = 126UL;
        }
        break;
      case 48:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 131UL;
        } else {
          _1_OBF_FUNC_next = 47UL;
        }
        break;
      case 139:
        tmp___30 = rand();
        _1_OBF_FUNC_next = 74UL;
        break;
      case 147:
        tmp___36 = rand();
        _1_OBF_FUNC_next = 143UL;
        break;
      case 22:;
        if (tmp___8 % 10 >= 5) {
          _1_OBF_FUNC_next = 7UL;
        } else {
          _1_OBF_FUNC_next = 69UL;
        }
        break;
      case 28:
        tmp___24 = rand();
        _1_OBF_FUNC_next = 9UL;
        break;
      case 53:
        i++;
        _1_OBF_FUNC_next = 84UL;
        break;
      case 148:
        tmp___14 = rand();
        _1_OBF_FUNC_next = 118UL;
        break;
      case 47:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 91UL;
        } else {
          _1_OBF_FUNC_next = 150UL;
        }
        break;
      case 73:
        i++;
        _1_OBF_FUNC_next = 55UL;
        break;
      case 44:
        tmp___17 = rand();
        _1_OBF_FUNC_next = 18UL;
        break;
      case 91:
        tmp___34 = rand();
        _1_OBF_FUNC_next = 165UL;
        break;
      case 120:
        tmp___6 = rand();
        _1_OBF_FUNC_next = 87UL;
        break;
      case 97:
        printf("\n");
        _1_OBF_FUNC_next = 51UL;
        break;
      case 162:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 115UL;
        } else {
          _1_OBF_FUNC_next = 62UL;
        }
        break;
      case 163:;
        if (tmp___32 % 10 >= 5) {
          _1_OBF_FUNC_next = 47UL;
        } else {
          _1_OBF_FUNC_next = 171UL;
        }
        break;
      case 72:
        printf("%d ", (int)*(str + tmp___37));
        _1_OBF_FUNC_next = 150UL;
        break;
      case 99:
        tmp___10 = rand();
        _1_OBF_FUNC_next = 1UL;
        break;
      case 114:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 132UL;
        } else {
          _1_OBF_FUNC_next = 93UL;
        }
        break;
      case 37:;
        if (tmp___25 % 10 >= 5) {
          _1_OBF_FUNC_next = 31UL;
        } else {
          _1_OBF_FUNC_next = 80UL;
        }
        break;
      case 93:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 135UL;
        } else if ((((_2_alwaysZero & ((_2_entropy & 4) * (_2_entropy | 4) + (_2_entropy & ~4) * (~_2_entropy & 4))) * (_2_alwaysZero | ((_2_entropy & 4) * (_2_entropy | 4) + (_2_entropy & ~4) * (~_2_entropy & 4))) + (_2_alwaysZero & ~((_2_entropy & 4) * (_2_entropy | 4) + (_2_entropy & ~4) * (~_2_entropy & 4))) * (~_2_alwaysZero & ((_2_entropy & 4) * (_2_entropy | 4) + (_2_entropy & ~4) * (~_2_entropy & 4)))) - ~1) - 1UL) {
          _1_OBF_FUNC_next = 66UL;
        } else {
        }
        break;
      case 119:;
        if (tmp___27 % 10 >= 5) {
          _1_OBF_FUNC_next = 50UL;
        } else {
          _1_OBF_FUNC_next = 26UL;
        }
        break;
      case 41:
        printf("%d ", (int)*(str + tmp___4));
        _1_OBF_FUNC_next = 93UL;
        break;
      case 95:
        tmp___19 = rand();
        _1_OBF_FUNC_next = 116UL;
        break;
      case 149:;
        if (tmp % 10 >= 5) {
          _1_OBF_FUNC_next = 93UL;
        } else {
          _1_OBF_FUNC_next = 17UL;
        }
        break;
      case 92:
        tmp___31 = i;
        _1_OBF_FUNC_next = 6UL;
        break;
      case 115:
        tmp___16 = rand();
        _1_OBF_FUNC_next = 167UL;
        break;
      case 10:
        tmp___21 = rand();
        _1_OBF_FUNC_next = 141UL;
        break;
      case 136:
        i++;
        _1_OBF_FUNC_next = 70UL;
        break;
      case 153:
        tmp___22 = rand();
        _1_OBF_FUNC_next = 40UL;
        break;
      case 39:;
        if (tmp___11 % 10 >= 5) {
          _1_OBF_FUNC_next = 89UL;
        } else {
          _1_OBF_FUNC_next = 122UL;
        }
        break;
      case 66:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 61UL;
        } else {
          _1_OBF_FUNC_next = 146UL;
        }
        break;
      case 7:;
        if (*(str + i)) {
          _1_OBF_FUNC_next = 99UL;
        } else {
          _1_OBF_FUNC_next = 89UL;
        }
        break;
      case 35:
        tmp___35 = i;
        _1_OBF_FUNC_next = 109UL;
        break;
      case 126:
        tmp___1 = i;
        _1_OBF_FUNC_next = 108UL;
        break;
      case 43:
        tmp___4 = i;
        _1_OBF_FUNC_next = 78UL;
        break;
      case 86:
        printf("%d ", (int)*(str + tmp___35));
        _1_OBF_FUNC_next = 47UL;
        break;
      case 20:
        i++;
        _1_OBF_FUNC_next = 142UL;
        break;
      }
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
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
    OBF_FUNC(*(argv + 0));
    return (0);
  }
}
// variants: loop-fission, loop-fission, block-fission
// expanded variants: loop-fission, loop-fission, block-fission:default