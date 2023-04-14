typedef void *__builtin_va_list;
struct __anonstruct_ldiv_t_790849867;
union __anonunion_pthread_rwlock_t_656928968;
union __anonunion____missing_field_name_418050178;
struct __pthread_mutex_s;
struct __pthread_internal_list;
struct __anonstruct___sigset_t_973126068;
struct __anonstruct___g1_start32_961093919;
union __anonunion_pthread_barrier_t_145707746;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_condattr_t_488594145;
enum __anonenum_idtype_t_558242672;
struct __anonstruct_div_t_773697287;
union pthread_attr_t;
struct __anonstruct_fd_set_356711149;
struct __pthread_cond_s;
struct drand48_data;
struct __anonstruct___fsid_t_109580352;
union __anonunion____missing_field_name_837858127;
struct __anonstruct_lldiv_t_103911545;
struct random_data;
union __anonunion_pthread_mutex_t_335460617;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_rwlockattr_t_145707745;
union __anonunion_pthread_cond_t_951761805;
struct timeval;
struct timespec;
struct __pthread_internal_slist;
union __anonunion_pthread_barrierattr_t_951761806;
typedef unsigned long __u_quad_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
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
extern int(at_quick_exit)(void (*__func)(void));
extern int(setenv)(char const *__name, char const *__value, int __replace);
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
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_418050178 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
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
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
extern double(atof)(char const *__nptr);
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
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
_Bool OBF_FUNC(int *a, int n, int m);
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
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
_Bool OBF_FUNC(int *a, int n, int m) {
  int l;
  int u;
  int mid;
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
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[218] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab187, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab191, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab193, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab206, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab210, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab215, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab217};
  {
    { _1_OBF_FUNC_next = 43UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab195:
    u = mid - 1;
    goto _1_OBF_FUNC_lab85;
  _1_OBF_FUNC_lab17:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab124:
    l = mid + 1;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab50:;
    if (tmp___18 % 10 >= 5) {
      goto _1_OBF_FUNC_lab31;
    } else {
      goto _1_OBF_FUNC_lab144;
    }
  _1_OBF_FUNC_lab54:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab210:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab78;
  _1_OBF_FUNC_lab183:
    tmp___13 = rand();
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab178:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab77;
    } else {
      goto _1_OBF_FUNC_lab207;
    }
  _1_OBF_FUNC_lab7:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab131:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab85:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab18;
    }
  _1_OBF_FUNC_lab217:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab130;
    } else {
      goto _1_OBF_FUNC_lab165;
    }
  _1_OBF_FUNC_lab64:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab177;
    } else {
      goto _1_OBF_FUNC_lab153;
    }
  _1_OBF_FUNC_lab83:
    tmp = rand();
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab6:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab49;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab160:
    tmp___12 = rand();
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab141:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab188;
    } else {
      goto _1_OBF_FUNC_lab193;
    }
  _1_OBF_FUNC_lab158:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab135;
    } else {
      goto _1_OBF_FUNC_lab191;
    }
  _1_OBF_FUNC_lab166:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab76:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab158;
    } else {
      goto _1_OBF_FUNC_lab127;
    }
  _1_OBF_FUNC_lab95:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab187;
    } else {
      goto _1_OBF_FUNC_lab140;
    }
  _1_OBF_FUNC_lab82:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab168;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab16:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab203;
  _1_OBF_FUNC_lab127:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab11:
    l = mid + 1;
    goto _1_OBF_FUNC_lab85;
  _1_OBF_FUNC_lab162:;
    if (tmp___17 % 10 >= 5) {
      goto _1_OBF_FUNC_lab31;
    } else {
      goto _1_OBF_FUNC_lab24;
    }
  _1_OBF_FUNC_lab159:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab202;
    } else {
      goto _1_OBF_FUNC_lab66;
    }
  _1_OBF_FUNC_lab155:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab36;
    } else {
      goto _1_OBF_FUNC_lab112;
    }
  _1_OBF_FUNC_lab65:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab190;
    } else {
      goto _1_OBF_FUNC_lab36;
    }
  _1_OBF_FUNC_lab46:
    u = mid - 1;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab62:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab134:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab111;
    } else {
      goto _1_OBF_FUNC_lab173;
    }
  _1_OBF_FUNC_lab167:
    l = mid + 1;
    goto _1_OBF_FUNC_lab158;
  _1_OBF_FUNC_lab21:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab194;
    } else {
      goto _1_OBF_FUNC_lab48;
    }
  _1_OBF_FUNC_lab60:
    l = mid + 1;
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab45:
    l = mid + 1;
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab150:;
    if (tmp___21 % 10 >= 5) {
      goto _1_OBF_FUNC_lab85;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab136:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab66:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab82;
  _1_OBF_FUNC_lab187:
    u = mid - 1;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab113:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab136;
    } else {
      goto _1_OBF_FUNC_lab217;
    }
  _1_OBF_FUNC_lab70:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab154;
    } else {
      goto _1_OBF_FUNC_lab15;
    }
  _1_OBF_FUNC_lab1:;
    if (tmp___12 % 10 >= 5) {
      goto _1_OBF_FUNC_lab146;
    } else {
      goto _1_OBF_FUNC_lab22;
    }
  _1_OBF_FUNC_lab119:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab177:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab202:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab16;
    } else {
      goto _1_OBF_FUNC_lab132;
    }
  _1_OBF_FUNC_lab68:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab8:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab198;
  _1_OBF_FUNC_lab90:;
    if (tmp___13 % 10 >= 5) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab181;
    }
  _1_OBF_FUNC_lab125:
    u = mid - 1;
    goto _1_OBF_FUNC_lab158;
  _1_OBF_FUNC_lab148:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab63:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab119;
    } else {
      goto _1_OBF_FUNC_lab95;
    }
  _1_OBF_FUNC_lab80:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab212:
    tmp___21 = rand();
    goto _1_OBF_FUNC_lab150;
  _1_OBF_FUNC_lab107:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab166;
    } else {
      goto _1_OBF_FUNC_lab101;
    }
  _1_OBF_FUNC_lab37:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab62;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab213:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab56:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab145;
    } else {
      goto _1_OBF_FUNC_lab214;
    }
  _1_OBF_FUNC_lab146:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab183;
    } else {
      goto _1_OBF_FUNC_lab32;
    }
  _1_OBF_FUNC_lab145:
    u = mid - 1;
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab215:
    l = mid + 1;
    goto _1_OBF_FUNC_lab191;
  _1_OBF_FUNC_lab161:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab205;
  _1_OBF_FUNC_lab168:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab86:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab128:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab154;
    }
  _1_OBF_FUNC_lab206:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab121;
  _1_OBF_FUNC_lab33:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab143;
    } else {
      goto _1_OBF_FUNC_lab31;
    }
  _1_OBF_FUNC_lab171:
    u = mid - 1;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab4:
    tmp___22 = rand();
    goto _1_OBF_FUNC_lab180;
  _1_OBF_FUNC_lab130:
    u = mid - 1;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab15:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab128;
  _1_OBF_FUNC_lab36:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab160;
    } else {
      goto _1_OBF_FUNC_lab146;
    }
  _1_OBF_FUNC_lab100:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab30;
    } else {
      goto _1_OBF_FUNC_lab209;
    }
  _1_OBF_FUNC_lab192:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab125;
    } else {
      goto _1_OBF_FUNC_lab167;
    }
  _1_OBF_FUNC_lab153:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab174;
    } else {
      goto _1_OBF_FUNC_lab74;
    }
  _1_OBF_FUNC_lab194:
    u = mid - 1;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab74:
    l = mid + 1;
    goto _1_OBF_FUNC_lab154;
  _1_OBF_FUNC_lab49:
    u = mid - 1;
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab191:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab54;
    } else {
      goto _1_OBF_FUNC_lab202;
    }
  _1_OBF_FUNC_lab186:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab202;
    } else {
      goto _1_OBF_FUNC_lab89;
    }
  _1_OBF_FUNC_lab27:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab171;
    } else {
      goto _1_OBF_FUNC_lab124;
    }
  _1_OBF_FUNC_lab75:;
    if (tmp___16 % 10 >= 5) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab179;
    }
  _1_OBF_FUNC_lab73:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab41:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab65;
    } else {
      goto _1_OBF_FUNC_lab8;
    }
  _1_OBF_FUNC_lab205:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab147;
    } else {
      goto _1_OBF_FUNC_lab185;
    }
  _1_OBF_FUNC_lab129:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab89:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab159;
  _1_OBF_FUNC_lab174:
    u = mid - 1;
    goto _1_OBF_FUNC_lab154;
  _1_OBF_FUNC_lab154:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab213;
    } else {
      goto _1_OBF_FUNC_lab65;
    }
  _1_OBF_FUNC_lab94:
    u = mid - 1;
    goto _1_OBF_FUNC_lab118;
  _1_OBF_FUNC_lab78:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab120;
    } else {
      goto _1_OBF_FUNC_lab56;
    }
  _1_OBF_FUNC_lab31:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab88;
    } else {
      goto _1_OBF_FUNC_lab200;
    }
  _1_OBF_FUNC_lab203:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab132;
    } else {
      goto _1_OBF_FUNC_lab93;
    }
  _1_OBF_FUNC_lab118:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab212;
    } else {
      goto _1_OBF_FUNC_lab85;
    }
  _1_OBF_FUNC_lab185:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab46;
    } else {
      goto _1_OBF_FUNC_lab55;
    }
  _1_OBF_FUNC_lab43:
    l = 0;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab151:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab24:
    tmp___18 = rand();
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab34:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab158;
    } else {
      goto _1_OBF_FUNC_lab129;
    }
  _1_OBF_FUNC_lab140:
    l = mid + 1;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab201:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab182;
    } else {
      goto _1_OBF_FUNC_lab51;
    }
  _1_OBF_FUNC_lab147:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab207:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab105;
    } else {
      goto _1_OBF_FUNC_lab60;
    }
  _1_OBF_FUNC_lab181:
    tmp___14 = rand();
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab44:
    u = mid - 1;
    goto _1_OBF_FUNC_lab191;
  _1_OBF_FUNC_lab152:;
    return ((_Bool)0);
  _1_OBF_FUNC_lab123:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab73;
    } else {
      goto _1_OBF_FUNC_lab134;
    }
  _1_OBF_FUNC_lab193:
    l = mid + 1;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab143:
    tmp___17 = rand();
    goto _1_OBF_FUNC_lab162;
  _1_OBF_FUNC_lab67:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab131;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab2:
    tmp___15 = rand();
    goto _1_OBF_FUNC_lab106;
  _1_OBF_FUNC_lab112:
    tmp___11 = rand();
    goto _1_OBF_FUNC_lab138;
  _1_OBF_FUNC_lab19:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab44;
    } else {
      goto _1_OBF_FUNC_lab215;
    }
  _1_OBF_FUNC_lab182:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab157:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab101:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab195;
    } else {
      goto _1_OBF_FUNC_lab11;
    }
  _1_OBF_FUNC_lab51:;
    if (m < *(a + mid)) {
      goto _1_OBF_FUNC_lab94;
    } else {
      goto _1_OBF_FUNC_lab57;
    }
  _1_OBF_FUNC_lab5:
    u = n - 1;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab93:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab18:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab157;
    } else {
      goto _1_OBF_FUNC_lab152;
    }
  _1_OBF_FUNC_lab190:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab155;
  _1_OBF_FUNC_lab48:
    l = mid + 1;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab142:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab47:;
    if (tmp___20 % 10 >= 5) {
      goto _1_OBF_FUNC_lab118;
    } else {
      goto _1_OBF_FUNC_lab210;
    }
  _1_OBF_FUNC_lab30:
    u = mid - 1;
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab105:
    u = mid - 1;
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab38:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab191;
    } else {
      goto _1_OBF_FUNC_lab86;
    }
  _1_OBF_FUNC_lab165:
    l = mid + 1;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab179:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab122;
  _1_OBF_FUNC_lab135:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab96:
    tmp___16 = rand();
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab111:
    u = mid - 1;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab13:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab22:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab178;
  _1_OBF_FUNC_lab121:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab68;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab88:
    tmp___19 = rand();
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab40:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab151;
    } else {
      goto _1_OBF_FUNC_lab192;
    }
  _1_OBF_FUNC_lab209:
    l = mid + 1;
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab92:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab123;
  _1_OBF_FUNC_lab173:
    l = mid + 1;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab103:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab148;
    } else {
      goto _1_OBF_FUNC_lab100;
    }
  _1_OBF_FUNC_lab180:;
    if (tmp___22 % 10 >= 5) {
      goto _1_OBF_FUNC_lab18;
    } else {
      goto _1_OBF_FUNC_lab80;
    }
  _1_OBF_FUNC_lab108:;
    if (tmp___19 % 10 >= 5) {
      goto _1_OBF_FUNC_lab200;
    } else {
      goto _1_OBF_FUNC_lab92;
    }
  _1_OBF_FUNC_lab106:;
    if (tmp___15 % 10 >= 5) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab96;
    }
  _1_OBF_FUNC_lab12:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab83;
    } else {
      goto _1_OBF_FUNC_lab158;
    }
  _1_OBF_FUNC_lab211:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab64;
  _1_OBF_FUNC_lab120:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab214:
    l = mid + 1;
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab79:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab201;
  _1_OBF_FUNC_lab122:;
    if (m == *(a + mid)) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab141;
    }
  _1_OBF_FUNC_lab25:
    tmp___20 = rand();
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab188:
    u = mid - 1;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab77:;
    return ((_Bool)1);
  _1_OBF_FUNC_lab144:
    mid = (l + u) / 2;
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab55:
    l = mid + 1;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab164:;
    if (tmp___14 % 10 >= 5) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab161;
    }
  _1_OBF_FUNC_lab0:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab191;
    } else {
      goto _1_OBF_FUNC_lab13;
    }
  _1_OBF_FUNC_lab200:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab118;
    }
  _1_OBF_FUNC_lab138:;
    if (tmp___11 % 10 >= 5) {
      goto _1_OBF_FUNC_lab36;
    } else {
      goto _1_OBF_FUNC_lab142;
    }
  _1_OBF_FUNC_lab32:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab2;
    } else {
      goto _1_OBF_FUNC_lab33;
    }
  _1_OBF_FUNC_lab57:
    l = mid + 1;
    goto _1_OBF_FUNC_lab118;
  _1_OBF_FUNC_lab198:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab65;
    } else {
      goto _1_OBF_FUNC_lab211;
    }
  _1_OBF_FUNC_lab132:;
    if (l <= u) {
      goto _1_OBF_FUNC_lab17;
    } else {
      goto _1_OBF_FUNC_lab154;
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int x[10];
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
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5;
    x[5] = 6;
    x[6] = 7;
    x[7] = 8;
    x[8] = 9;
    x[9] = 10;
    OBF_FUNC(x, 10, 5);
    return (0);
  }
}
// variants: loop-fission, loop-fission, flatten
// expanded variants: loop-fission, loop-fission, flatten:goto
