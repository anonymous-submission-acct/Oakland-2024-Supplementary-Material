typedef void *__builtin_va_list;
union __anonunion_pthread_cond_t_951761805;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
union __anonunion____missing_field_name_905257456;
union __anonunion_pthread_condattr_t_488594145;
struct drand48_data;
struct __pthread_mutex_s;
union __anonunion_pthread_mutex_t_335460617;
enum __anonenum_idtype_t_558242672;
union __anonunion_pthread_barrierattr_t_951761806;
struct random_data;
union __anonunion_pthread_mutexattr_t_488594144;
union pthread_attr_t;
struct __anonstruct_ldiv_t_790849867;
struct __pthread_internal_slist;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_barrier_t_145707746;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_rwlock_t_656928968;
struct timespec;
struct __anonstruct_div_t_773697287;
struct timeval;
struct __anonstruct_lldiv_t_103911545;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
struct __pthread_internal_list;
union __anonunion____missing_field_name_790136668;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_cond_s;
struct __pthread_rwlock_arch_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
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
unsigned long _1_entropy = 5888919124344022858UL;
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
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
  int data;
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
typedef __int32_t int32_t;
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
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_790136668 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
union __anonunion____missing_field_name_905257456 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_905257456 __annonCompField1;
  union __anonunion____missing_field_name_790136668 __annonCompField2;
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
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __suseconds_t suseconds_t;
typedef __int64_t __int_least64_t;
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
typedef __int8_t __int_least8_t;
typedef __clock_t clock_t;
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
void OBF_FUNC(int *a, int n);
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
typedef long __fsword_t;
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
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
void OBF_FUNC(int *a, int n) {
  int big;
  int small;
  int i;
  int tmp;
  int tmp___0;
  int tmp___1;
  int __RANDVAR__95583857119735669033__;
  int __RANDVAR__28607022654741755320__;
  int tmp___2;
  int __RANDVAR__69606326841630036095__;
  int __RANDVAR__2278630316968025610__;
  int __RANDVAR__67226827733482846394__;
  int __RANDVAR__58329346751575669735__;
  int __RANDVAR__65256266320569730462__;
  int tmp___3;
  int __RANDVAR__69606326841630036095_____0;
  int __RANDVAR__2278630316968025610_____0;
  int __RANDVAR__67226827733482846394_____0;
  int __RANDVAR__58329346751575669735_____0;
  int __RANDVAR__65256266320569730462_____0;
  int tmp___4;
  int __RANDVAR__69606326841630036095_____1;
  int __RANDVAR__2278630316968025610_____1;
  int __RANDVAR__67226827733482846394_____1;
  int __RANDVAR__58329346751575669735_____1;
  int __RANDVAR__65256266320569730462_____1;
  int __RANDVAR__69606326841630036095_____2;
  int __RANDVAR__2278630316968025610_____2;
  int __RANDVAR__67226827733482846394_____2;
  int __RANDVAR__58329346751575669735_____2;
  int __RANDVAR__65256266320569730462_____2;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p34;
  int i35;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p36;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p40;
  int i41;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p42;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p40 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p40->next = p40;
      p40->prev = p40;
      _2_OBF_FUNC_2_opaque_list_1 = p40;
      i41 = 0;
      while (i41 < 3) {
        p42 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p42->data = i41 * ((_1_entropy ^ 5) - ((~_1_entropy & 5) + (~_1_entropy & 5)));
        p42->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p42->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p42;
        _2_OBF_FUNC_2_opaque_list_1->next = p42;
        i41++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p34 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p34->next = p34;
      p34->prev = p34;
      _2_OBF_FUNC_1_opaque_list_1 = p34;
      i35 = 0;
      while (i35 < 4) {
        p36 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p36->data = i35 * ((_1_entropy & ~5) - (~_1_entropy & 5));
        p36->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p36->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p36;
        _2_OBF_FUNC_1_opaque_list_1->next = p36;
        i35++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    big = *(a + 0);
    small = *(a + 0);
    i = 1;
    while (i < n) {
      tmp = rand();
      if (tmp % 10 >= 5) {
        break;
      }
      n += 352;
      n -= 352;
      if (big < *(a + i)) {
        n -= 506;
        n += 506;
        big = *(a + i);
      }
      n -= 571;
      n += 571;
      i++;
    }
    while (i < n) {
      tmp___0 = rand();
      if (tmp___0 % 10 >= 5) {
        break;
      }
      n += 352;
      n -= 352;
      if (big < *(a + i)) {
        n -= 506;
        n += 506;
        big = *(a + i);
      }
      n -= 571;
      n += 571;
      i++;
    }
    while (i < n) {
      tmp___1 = rand();
      if (tmp___1 % 10 >= 5) {
        break;
      }
      n += 352;
      n -= 352;
      if (big < *(a + i)) {
        n -= 506;
        n += 506;
        big = *(a + i);
      }
      n -= 571;
      n += 571;
      i++;
    }
    while (i < n) {
      n += 352;
      n -= 352;
      if (big < *(a + i)) {
        n -= 506;
        n += 506;
        big = *(a + i);
      }
      n -= 571;
      n += 571;
      i++;
    }
    __RANDVAR__95583857119735669033__ = (__RANDVAR__95583857119735669033__ - 855) * (38 - n);
    if (n < 236) {
      __RANDVAR__28607022654741755320__ = 463;
    } else {
      n += 335;
      n -= 335;
    }
    printf("Largest element: %d\n", big);
    i = 1;
    while (i < n) {
      tmp___2 = rand();
      if (tmp___2 % 10 >= 5) {
        break;
      }
      if (small > *(a + i)) {
        __RANDVAR__69606326841630036095__ = 134;
        if (__RANDVAR__69606326841630036095__ < n) {
          __RANDVAR__2278630316968025610__ *= __RANDVAR__2278630316968025610__ * 324;
          if (n < (__RANDVAR__69606326841630036095__ * __RANDVAR__69606326841630036095__) * -182) {
            __RANDVAR__67226827733482846394__++;
          } else {
            __RANDVAR__58329346751575669735__ = -992;
          }
        } else {
          n -= 504;
          n += 504;
        }
        small = *(a + i);
      }
      __RANDVAR__65256266320569730462__ -= 509;
      i++;
    }
    while (i < n) {
      tmp___3 = rand();
      if (tmp___3 % 10 >= 5) {
        break;
      }
      if (small > *(a + i)) {
        __RANDVAR__69606326841630036095_____0 = 134;
        if (__RANDVAR__69606326841630036095_____0 < n) {
          __RANDVAR__2278630316968025610_____0 *= __RANDVAR__2278630316968025610_____0 * 324;
          if (n < (__RANDVAR__69606326841630036095_____0 * __RANDVAR__69606326841630036095_____0) * -182) {
            __RANDVAR__67226827733482846394_____0++;
          } else {
            __RANDVAR__58329346751575669735_____0 = -992;
          }
        } else {
          n -= 504;
          n += 504;
        }
        {
          if (_2_OBF_FUNC_2_opaque_ptr_1 == _2_OBF_FUNC_2_opaque_ptr_2) {
          } else {
            __RANDVAR__67226827733482846394_____0 = main(__RANDVAR__2278630316968025610_____1, 0, 0);
          }
          small = *(a + i);
        }
      }
      __RANDVAR__65256266320569730462_____0 -= 509;
      i++;
    }
    while (i < n) {
      tmp___4 = rand();
      if (tmp___4 % 10 >= 5) {
        break;
      }
      if (small > *(a + i)) {
        __RANDVAR__69606326841630036095_____1 = 134;
        if (__RANDVAR__69606326841630036095_____1 < n) {
          __RANDVAR__2278630316968025610_____1 *= __RANDVAR__2278630316968025610_____1 * 324;
          if (n < (__RANDVAR__69606326841630036095_____1 * __RANDVAR__69606326841630036095_____1) * -182) {
            __RANDVAR__67226827733482846394_____1++;
          } else {
            __RANDVAR__58329346751575669735_____1 = -992;
          }
        } else {
          n -= 504;
          n += 504;
        }
        small = *(a + i);
      }
      __RANDVAR__65256266320569730462_____1 -= 509;
      i++;
    }
    while (i < n) {
      if (small > *(a + i)) {
        __RANDVAR__69606326841630036095_____2 = 134;
        if (__RANDVAR__69606326841630036095_____2 < n) {
          if (((((_1_alwaysZero & (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) * (_1_alwaysZero | (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) + (_1_alwaysZero & ~(((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) * (~_1_alwaysZero & (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL))) ^ ~0) + ((((_1_alwaysZero & (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) * (_1_alwaysZero | (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) + (_1_alwaysZero & ~(((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL)) * (~_1_alwaysZero & (((_1_entropy ^ ~6) + ((_1_entropy | 6) + (_1_entropy | 6))) + 1UL))) | 0) << 1UL)) + 1UL) {
            OBF_FUNC(a, tmp);
          } else {
          }
          __RANDVAR__2278630316968025610_____2 *= __RANDVAR__2278630316968025610_____2 * 324;
          if (n < (__RANDVAR__69606326841630036095_____2 * __RANDVAR__69606326841630036095_____2) * -182) {
            __RANDVAR__67226827733482846394_____2++;
          } else {
            __RANDVAR__58329346751575669735_____2 = -992;
          }
        } else {
          n -= 504;
          n += 504;
        }
        small = *(a + i);
      }
      __RANDVAR__65256266320569730462_____2 -= 509;
      i++;
    }
    printf("Smallest element: %d\n", small);
    return;
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
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;
    a[6] = 7;
    a[7] = 8;
    a[8] = 9;
    a[9] = 10;
    OBF_FUNC(a, 10);
    return (0);
  }
}
// variants: irrelevant-code, loop-fission, deadcode
// expanded variants: irrelevant-code, loop-fission, deadcode:call