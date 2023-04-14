typedef void *__builtin_va_list;
struct __pthread_internal_slist;
union __anonunion_pthread_cond_t_951761805;
struct timeval;
union __anonunion____missing_field_name_418050178;
struct __pthread_internal_list;
enum __anonenum_idtype_t_558242672;
union pthread_attr_t;
struct __anonstruct_div_t_773697287;
struct __pthread_cond_s;
union __anonunion_pthread_mutexattr_t_488594144;
struct __pthread_mutex_s;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___g1_start32_961093919;
struct __pthread_rwlock_arch_t;
union __anonunion____missing_field_name_837858127;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct___wseq32_961093918;
struct drand48_data;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
struct timespec;
struct __anonstruct_lldiv_t_103911545;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion_pthread_rwlock_t_656928968;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_barrier_t_145707746;
struct random_data;
union __anonunion_pthread_barrierattr_t_951761806;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
typedef unsigned int __mode_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
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
typedef unsigned long ulong;
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
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
extern int(strlen)();
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_418050178 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
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
unsigned long _2_entropy = 5595823856443529059UL;
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
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
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
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
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
unsigned int OBF_FUNC(char *str, unsigned int len);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
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
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
unsigned int OBF_FUNC(char *str, unsigned int len) {
  int __RANDVAR__6692256403267321139__;
  unsigned int hash;
  unsigned int i;
  int __RANDVAR__34424100899546745621__;
  int __RANDVAR__82705663119362817365__;
  int __RANDVAR__52107967761997348554__;
  int __RANDVAR__63720897738450213595__;
  int __RANDVAR__77519917399265644344__;
  int __RANDVAR__49651540465197336108__;
  int __RANDVAR__82705663119362817365_____0;
  int __RANDVAR__52107967761997348554_____0;
  int __RANDVAR__63720897738450213595_____0;
  int __RANDVAR__77519917399265644344_____0;
  int __RANDVAR__49651540465197336108_____0;
  int __RANDVAR__82705663119362817365_____1;
  int __RANDVAR__52107967761997348554_____1;
  int __RANDVAR__63720897738450213595_____1;
  int __RANDVAR__77519917399265644344_____1;
  int __RANDVAR__49651540465197336108_____1;
  int __RANDVAR__82705663119362817365_____2;
  int __RANDVAR__52107967761997348554_____2;
  int __RANDVAR__63720897738450213595_____2;
  int __RANDVAR__77519917399265644344_____2;
  int __RANDVAR__49651540465197336108_____2;
  int __RANDVAR__82705663119362817365_____3;
  int __RANDVAR__52107967761997348554_____3;
  int __RANDVAR__63720897738450213595_____3;
  int __RANDVAR__77519917399265644344_____3;
  int __RANDVAR__49651540465197336108_____3;
  int __RANDVAR__82705663119362817365_____4;
  int __RANDVAR__52107967761997348554_____4;
  int __RANDVAR__63720897738450213595_____4;
  int __RANDVAR__77519917399265644344_____4;
  int __RANDVAR__49651540465197336108_____4;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p38;
  int i39;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p40;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p44;
  int i45;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p46;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p44 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p44->next = p44;
      p44->prev = p44;
      _3_OBF_FUNC_2_opaque_list_1 = p44;
      i45 = 0;
      while (i45 < 4) {
        p46 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p46->data = i45 * ((_2_entropy | 9) + (_2_entropy & 9));
        p46->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p46->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p46;
        _3_OBF_FUNC_2_opaque_list_1->next = p46;
        i45++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p38 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p38->next = p38;
      p38->prev = p38;
      _3_OBF_FUNC_1_opaque_list_1 = p38;
      i39 = 0;
      while (i39 < 3) {
        p40 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p40->data = i39 * ((_2_entropy | 6) - (_2_entropy & 6));
        p40->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p40->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p40;
        _3_OBF_FUNC_1_opaque_list_1->next = p40;
        i39++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 2UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 18:
        str++;
        _1_OBF_FUNC_next = 7UL;
        break;
      case 50:
        i++;
        _1_OBF_FUNC_next = 24UL;
        break;
      case 80:
        __RANDVAR__82705663119362817365_____4++;
        _1_OBF_FUNC_next = 40UL;
        break;
      case 25:
        __RANDVAR__6692256403267321139__ -= 308;
        _1_OBF_FUNC_next = 56UL;
        break;
      case 49:
        __RANDVAR__77519917399265644344_____3 = __RANDVAR__82705663119362817365_____3;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 52:
        str++;
        _1_OBF_FUNC_next = 45UL;
        break;
      case 4:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 79UL;
        } else {
          _1_OBF_FUNC_next = 70UL;
        }
        break;
      case 30:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365_____2 * __RANDVAR__82705663119362817365_____2) {
          _1_OBF_FUNC_next = 58UL;
        } else {
          _1_OBF_FUNC_next = 78UL;
        }
        break;
      case 62:
        __RANDVAR__49651540465197336108_____1 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 39UL;
        break;
      case 14:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365__ * __RANDVAR__82705663119362817365__) {
          _1_OBF_FUNC_next = 26UL;
        } else {
          _1_OBF_FUNC_next = 27UL;
        }
        break;
      case 15:
        __RANDVAR__63720897738450213595_____3 = 651;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 82:
        __RANDVAR__52107967761997348554_____1 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 72UL;
        break;
      case 56:
        __RANDVAR__6692256403267321139__ += 308;
        _1_OBF_FUNC_next = 71UL;
        break;
      case 79:
        __RANDVAR__52107967761997348554_____3 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 48UL;
        {
          if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
            break;
          } else {
          }
        }
      case 31:;
        if (i < len) {
          _1_OBF_FUNC_next = 13UL;
        } else {
          _1_OBF_FUNC_next = 3UL;
        }
        break;
      case 12:
        __RANDVAR__49651540465197336108_____2 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 8:
        __RANDVAR__52107967761997348554__ = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 14UL;
        break;
      case 45:
        __RANDVAR__82705663119362817365__++;
        _1_OBF_FUNC_next = 0UL;
        break;
      case 54:
        hash = 5381U;
        _1_OBF_FUNC_next = 25UL;
        break;
      case 78:
        __RANDVAR__77519917399265644344_____2 = __RANDVAR__82705663119362817365_____2;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 1:
        i++;
        _1_OBF_FUNC_next = 43UL;
        break;
      case 81:
        str++;
        _1_OBF_FUNC_next = 80UL;
        break;
      case 23:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 17UL;
        } else {
          _1_OBF_FUNC_next = 59UL;
        }
        break;
      case 77:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 5UL;
        break;
      case 70:
        __RANDVAR__49651540465197336108_____3 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 50UL;
        break;
      case 3:
        __RANDVAR__34424100899546745621__ = 1;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 16:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 82UL;
        } else {
          _1_OBF_FUNC_next = 62UL;
        }
        break;
      case 24:;
        if (i < len) {
          _1_OBF_FUNC_next = 29UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 21:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 57UL;
        break;
      case 36:
        __RANDVAR__52107967761997348554_____2 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 30UL;
        break;
      case 76:;
        if (i < len) {
          _1_OBF_FUNC_next = 61UL;
        } else {
          _1_OBF_FUNC_next = 24UL;
        }
        break;
      case 57:
        str++;
        _1_OBF_FUNC_next = 47UL;
        break;
      case 26:
        __RANDVAR__63720897738450213595__ = 651;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 11:
        __RANDVAR__82705663119362817365_____0++;
        _1_OBF_FUNC_next = 23UL;
        break;
      case 9:
        str++;
        _1_OBF_FUNC_next = 73UL;
        break;
      case 13:;
        if (i < len) {
          _1_OBF_FUNC_next = 10UL;
        } else {
          _1_OBF_FUNC_next = 76UL;
        }
        break;
      case 63:;
        return (hash);
        break;
      case 51:;
        if (__RANDVAR__34424100899546745621__ == 0) {
          _1_OBF_FUNC_next = 22UL;
        } else {
          _1_OBF_FUNC_next = 63UL;
        }
        break;
      case 19:;
        if (i < len) {
          _1_OBF_FUNC_next = 77UL;
        } else {
          _1_OBF_FUNC_next = 43UL;
        }
        break;
      case 32:
        __RANDVAR__49651540465197336108_____4 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 65UL;
        break;
      case 17:
        __RANDVAR__52107967761997348554_____0 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 46UL;
        break;
      case 40:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 64UL;
        } else {
          _1_OBF_FUNC_next = 32UL;
        }
        break;
      case 67:
        __RANDVAR__34424100899546745621__ = 0;
        _1_OBF_FUNC_next = 51UL;
        break;
      case 55:;
        if (__RANDVAR__6692256403267321139__ < 45) {
          if (((((_2_alwaysZero & ((_2_entropy + ~5) + 1UL)) * (_2_alwaysZero | ((_2_entropy + ~5) + 1UL)) + (_2_alwaysZero & ~((_2_entropy + ~5) + 1UL)) * (~_2_alwaysZero & ((_2_entropy + ~5) + 1UL))) | 0) + (((_2_alwaysZero & ((_2_entropy + ~5) + 1UL)) * (_2_alwaysZero | ((_2_entropy + ~5) + 1UL)) + (_2_alwaysZero & ~((_2_entropy + ~5) + 1UL)) * (~_2_alwaysZero & ((_2_entropy + ~5) + 1UL))) | 0)) - (((_2_alwaysZero & ((_2_entropy + ~5) + 1UL)) * (_2_alwaysZero | ((_2_entropy + ~5) + 1UL)) + (_2_alwaysZero & ~((_2_entropy + ~5) + 1UL)) * (~_2_alwaysZero & ((_2_entropy + ~5) + 1UL))) ^ 0)) {
          } else {
            _1_OBF_FUNC_next = 33UL;
          }
        } else {
          _1_OBF_FUNC_next = 6UL;
        }
        break;
      case 59:
        __RANDVAR__49651540465197336108_____0 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 6:
        __RANDVAR__6692256403267321139__ += 780;
        _1_OBF_FUNC_next = 38UL;
        break;
      case 27:
        __RANDVAR__77519917399265644344__ = __RANDVAR__82705663119362817365__;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 38:
        __RANDVAR__6692256403267321139__ -= 780;
        _1_OBF_FUNC_next = 67UL;
        break;
      case 61:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 58:
        __RANDVAR__63720897738450213595_____2 = 651;
        _1_OBF_FUNC_next = 20UL;
        break;
      case 84:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 52UL;
        break;
      case 34:
        __RANDVAR__77519917399265644344_____4 = __RANDVAR__82705663119362817365_____4;
        _1_OBF_FUNC_next = 65UL;
        break;
      case 74:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 36UL;
        } else {
          _1_OBF_FUNC_next = 12UL;
        }
        break;
      case 75:
        __RANDVAR__63720897738450213595_____1 = 651;
        _1_OBF_FUNC_next = 39UL;
        break;
      case 48:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365_____3 * __RANDVAR__82705663119362817365_____3) {
          _1_OBF_FUNC_next = 15UL;
        } else {
          _1_OBF_FUNC_next = 49UL;
        }
        break;
      case 71:
        i = 0U;
        _1_OBF_FUNC_next = 55UL;
        break;
      case 22:;
        if (i < len) {
          _1_OBF_FUNC_next = 84UL;
        } else {
          _1_OBF_FUNC_next = 19UL;
        }
        break;
      case 28:
        __RANDVAR__49651540465197336108__ = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 35UL;
        break;
      case 53:
        __RANDVAR__63720897738450213595_____4 = 651;
        _1_OBF_FUNC_next = 65UL;
        break;
      case 65:
        i++;
        _1_OBF_FUNC_next = 31UL;
        break;
      case 47:
        __RANDVAR__82705663119362817365_____1++;
        _1_OBF_FUNC_next = 16UL;
        break;
      case 73:
        __RANDVAR__82705663119362817365_____2++;
        _1_OBF_FUNC_next = 74UL;
        break;
      case 5:
        str++;
        _1_OBF_FUNC_next = 11UL;
        break;
      case 72:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365_____1 * __RANDVAR__82705663119362817365_____1) {
          _1_OBF_FUNC_next = 75UL;
        } else {
          _1_OBF_FUNC_next = 37UL;
        }
        break;
      case 33:
        __RANDVAR__6692256403267321139__ += 371;
        _1_OBF_FUNC_next = 83UL;
        break;
      case 37:
        __RANDVAR__77519917399265644344_____1 = __RANDVAR__82705663119362817365_____1;
        _1_OBF_FUNC_next = 39UL;
        break;
      case 64:
        __RANDVAR__52107967761997348554_____4 = __RANDVAR__6692256403267321139__;
        _1_OBF_FUNC_next = 41UL;
        break;
      case 41:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365_____4 * __RANDVAR__82705663119362817365_____4) {
          _1_OBF_FUNC_next = 53UL;
        } else {
          _1_OBF_FUNC_next = 34UL;
        }
        break;
      case 10:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 9UL;
        break;
      case 42:
        __RANDVAR__77519917399265644344_____0 = __RANDVAR__82705663119362817365_____0;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 0:;
        if (__RANDVAR__6692256403267321139__ < 453) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 28UL;
        }
        break;
      case 46:;
        if (__RANDVAR__6692256403267321139__ < 88 - __RANDVAR__82705663119362817365_____0 * __RANDVAR__82705663119362817365_____0) {
          _1_OBF_FUNC_next = 66UL;
        } else {
          _1_OBF_FUNC_next = 42UL;
        }
        break;
      case 39:
        i++;
        _1_OBF_FUNC_next = 31UL;
        break;
      case 66:
        __RANDVAR__63720897738450213595_____0 = 651;
        _1_OBF_FUNC_next = 1UL;
        break;
      case 83:
        __RANDVAR__6692256403267321139__ -= 371;
        _1_OBF_FUNC_next = 67UL;
        break;
      case 7:
        __RANDVAR__82705663119362817365_____3++;
        _1_OBF_FUNC_next = 4UL;
        break;
      case 35:
        i++;
        _1_OBF_FUNC_next = 19UL;
        break;
      case 29:
        hash = ((hash << 5) + hash) + (unsigned int)*str;
        _1_OBF_FUNC_next = 81UL;
        break;
      case 43:;
        if (i < len) {
          _1_OBF_FUNC_next = 21UL;
        } else {
          _1_OBF_FUNC_next = 31UL;
        }
        break;
      case 2:
        __RANDVAR__6692256403267321139__ = 9509;
        _1_OBF_FUNC_next = 54UL;
        break;
      case 20:
        i++;
        _1_OBF_FUNC_next = 76UL;
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
    if (hash == 1235568949U) {
      printf("You win!\n");
    }
    return (0);
  }
}
// variants: irrelevant-code, loop-unroll, block-fission
// expanded variants: irrelevant-code, loop-unroll, block-fission:default
