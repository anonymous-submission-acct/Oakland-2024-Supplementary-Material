typedef void *__builtin_va_list;
struct __pthread_mutex_s;
union __anonunion____missing_field_name_894610310;
union __anonunion_pthread_rwlockattr_t_145707745;
union pthread_attr_t;
struct __pthread_cond_s;
struct timespec;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_barrier_t_145707746;
enum __anonenum_idtype_t_558242672;
struct __anonstruct_fd_set_356711149;
struct __pthread_internal_slist;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct___g1_start32_961093919;
struct __anonstruct___wseq32_961093918;
union __anonunion_pthread_rwlock_t_656928968;
struct __pthread_internal_list;
struct random_data;
struct timeval;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct_ldiv_t_790849867;
struct drand48_data;
union __anonunion_pthread_cond_t_951761805;
struct _1_OBF_FUNC_argStruct;
union __anonunion____missing_field_name_390231020;
struct __anonstruct_div_t_773697287;
struct __anonstruct___sigset_t_973126068;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_barrierattr_t_951761806;
struct __pthread_rwlock_arch_t;
struct __anonstruct___fsid_t_109580352;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned int __mode_t;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
typedef long __blksize_t;
typedef __blksize_t blksize_t;
typedef int __daddr_t;
typedef __daddr_t daddr_t;
typedef unsigned long __fsfilcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_63(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
struct __anonstruct___g1_start32_961093919 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_894610310 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_961093919 __g1_start32;
};
typedef unsigned long __uint64_t;
typedef __uint64_t u_int64_t;
extern void(abort)(void);
void OBF_FUNC_FLATTEN_SPLIT_64(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
void OBF_FUNC_FLATTEN_SPLIT_29(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(at_quick_exit)(void (*__func)(void));
typedef int __clockid_t;
typedef unsigned short __uint16_t;
void OBF_FUNC_FLATTEN_SPLIT_23(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef int __key_t;
typedef __key_t key_t;
void OBF_FUNC_FLATTEN_SPLIT_48(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __fsblkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
typedef int volatile pthread_spinlock_t;
struct __anonstruct_ldiv_t_790849867 {
  long quot;
  long rem;
};
extern int(rand_r)(unsigned int *__seed);
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
typedef __fd_mask fd_mask;
void OBF_FUNC_FLATTEN_SPLIT_61(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern void *(malloc)(size_t __size);
extern long long(atoll)(char const *__nptr);
typedef int register_t;
extern char *(realpath)(char const *__name, char *__resolved);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
struct drand48_data {
  unsigned short __x[3];
  unsigned short __old_x[3];
  unsigned short __c;
  unsigned short __init;
  unsigned long long __a;
};
typedef struct __anonstruct_lldiv_t_103911545 lldiv_t;
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_390231020 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
extern char *(getenv)(char const *__name);
void OBF_FUNC_FLATTEN_SPLIT_76(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __anonstruct_fd_set_356711149 {
  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
};
typedef unsigned int __id_t;
struct _1_OBF_FUNC_argStruct {
  int __RANDVAR__18538618091456912721__;
  int __RANDVAR__55230377994778236778__;
  int i;
  int sum;
  int __RANDVAR__68952941980375037272__;
  int __RANDVAR__16042802751283179408__;
  int __RANDVAR__26518926542897397356__;
  int __RANDVAR__44600806239876419459__;
  int __RANDVAR__40893801901345880707__;
  int __RANDVAR__27979049856298067875__;
  int __RANDVAR__57579607671640033527__;
  int __RANDVAR__85676976691897754440__;
  int __RANDVAR__75719306870437977732__;
  int __RANDVAR__66925345028068859693__;
  int __RANDVAR__96510228076559744289__;
  int __RANDVAR__71613412325299853622__;
  int __RANDVAR__36647446517031365965__;
  int __RANDVAR__59411839565796061720__;
  int __RANDVAR__31502074964986350598__;
  int __RANDVAR__16874241127757994389__;
  int __RANDVAR__80546585636930639702__;
  int *n;
  int _1_OBF_FUNC_return;
  unsigned long _1_OBF_FUNC_next;
};
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
typedef short __int16_t;
typedef __int16_t int16_t;
void OBF_FUNC_FLATTEN_SPLIT_70(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef signed char __int8_t;
void OBF_FUNC_FLATTEN_SPLIT_30(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(clearenv)(void);
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __id_t id_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
typedef __int16_t __int_least16_t;
typedef int wchar_t;
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
extern int(abs)(int __x);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
void OBF_FUNC_FLATTEN_SPLIT_44(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
typedef unsigned long __rlim64_t;
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
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
void OBF_FUNC_FLATTEN_SPLIT_26(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int system(char const *__command);
void OBF_FUNC_FLATTEN_SPLIT_66(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_79(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_38(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern float(strtof)(char const *__nptr, char **__endptr);
typedef long __suseconds_t;
typedef long __time_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
void OBF_FUNC_FLATTEN_SPLIT_65(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __syscall_slong_t;
typedef int pthread_once_t;
typedef unsigned int __uint32_t;
typedef unsigned char __u_char;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
void OBF_FUNC_FLATTEN_SPLIT_51(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
void OBF_FUNC_FLATTEN_SPLIT_21(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
static __uint32_t __uint32_identity(__uint32_t __x);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
void OBF_FUNC_FLATTEN_SPLIT_69(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(putenv)(char *__string);
typedef int __int32_t;
typedef __int32_t int32_t;
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
extern int(getsubopt)(char **__optionp, char *const *__tokens, char **__valuep);
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(qfcvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
void OBF_FUNC_FLATTEN_SPLIT_37(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __clock_t;
typedef union __anonunion_pthread_barrierattr_t_951761806 pthread_barrierattr_t;
void OBF_FUNC_FLATTEN_SPLIT_41(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef void *__timer_t;
typedef __timer_t timer_t;
extern char *(setstate)(char *__statebuf);
void OBF_FUNC_FLATTEN_SPLIT_35(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
union __anonunion_pthread_rwlock_t_656928968 {
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long __align;
};
void OBF_FUNC_FLATTEN_SPLIT_33(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef int __pid_t;
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
void OBF_FUNC_FLATTEN_SPLIT_27(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
void OBF_FUNC_FLATTEN_SPLIT_55(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr, int __base);
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
struct __pthread_cond_s {
  union __anonunion____missing_field_name_390231020 __annonCompField1;
  union __anonunion____missing_field_name_894610310 __annonCompField2;
  unsigned int __g_refs[2];
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
extern lldiv_t(lldiv)(long long __numer, long long __denom);
void OBF_FUNC_FLATTEN_SPLIT_22(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __suseconds_t suseconds_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
void OBF_FUNC_FLATTEN_SPLIT_68(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
typedef __fsid_t fsid_t;
typedef __uint32_t __uint_least32_t;
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned int __gid_t;
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef struct __anonstruct_div_t_773697287 div_t;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
void OBF_FUNC_FLATTEN_SPLIT_45(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern long(lrand48)(void);
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
typedef unsigned long __u_long;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
int OBF_FUNC(int n);
typedef struct __pthread_internal_slist __pthread_slist_t;
extern void(quick_exit)(int __status);
typedef unsigned short __u_short;
typedef __u_short u_short;
typedef __uint8_t u_int8_t;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
typedef long __quad_t;
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
void OBF_FUNC_FLATTEN_SPLIT_34(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
void OBF_FUNC_FLATTEN_SPLIT_72(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(atoi)(char const *__nptr);
void OBF_FUNC_FLATTEN_SPLIT_24(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_84(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __uint16_t __uint_least16_t;
extern void(lcong48)(unsigned short *__param);
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
void OBF_FUNC_FLATTEN_SPLIT_39(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
static __uint64_t __uint64_identity(__uint64_t __x);
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(mkstemp)(char *__template);
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern long(a64l)(char const *__s);
void OBF_FUNC_FLATTEN_SPLIT_40(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
void OBF_FUNC_FLATTEN_SPLIT_59(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_53(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern double(strtod)(char const *__nptr, char **__endptr);
void OBF_FUNC_FLATTEN_SPLIT_74(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef int __sig_atomic_t;
typedef unsigned long __ino64_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
void OBF_FUNC_FLATTEN_SPLIT_62(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(unsetenv)(char const *__name);
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __mode_t mode_t;
extern size_t(wcstombs)(char *__s, wchar_t const *__pwcs, size_t __n);
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
typedef unsigned long ulong;
extern long(atol)(char const *__nptr);
extern size_t(mbstowcs)(wchar_t *__pwcs, char const *__s, size_t __n);
extern int(mkstemps)(char *__template, int __suffixlen);
extern int(seed48_r)(unsigned short *__seed16v, struct drand48_data *__buffer);
struct __anonstruct___sigset_t_973126068 {
  unsigned long __val[1024UL / (8UL * sizeof(unsigned long))];
};
void OBF_FUNC_FLATTEN_SPLIT_82(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(qecvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
void OBF_FUNC_FLATTEN_SPLIT_81(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern char *(l64a)(long __n);
typedef __off64_t __loff_t;
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_80(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __dev_t;
typedef __dev_t dev_t;
typedef unsigned int uint;
static __uint32_t __bswap_32(__uint32_t __bsx);
static __uint16_t __uint16_identity(__uint16_t __x);
void OBF_FUNC_FLATTEN_SPLIT_32(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern void *(realloc)(void *__ptr, size_t __size);
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned int pthread_key_t;
void OBF_FUNC_FLATTEN_SPLIT_57(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
void OBF_FUNC_FLATTEN_SPLIT_20(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __loff_t loff_t;
void OBF_FUNC_FLATTEN_SPLIT_67(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern void(srand)(unsigned int __seed);
typedef __int32_t __int_least32_t;
extern int(atexit)(void (*__func)(void));
void OBF_FUNC_FLATTEN_SPLIT_25(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __u_quad_t u_quad_t;
void OBF_FUNC_FLATTEN_SPLIT_83(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_47(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
union pthread_attr_t {
  char __size[56];
  long __align;
};
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __uint32_t u_int32_t;
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
typedef unsigned long __fsblkcnt64_t;
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern double(atof)(char const *__nptr);
typedef __sigset_t sigset_t;
union __anonunion_pthread_cond_t_951761805 {
  struct __pthread_cond_s __data;
  char __size[48];
  long long __align;
};
void OBF_FUNC_FLATTEN_SPLIT_49(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned int __socklen_t;
static __uint16_t __bswap_16(__uint16_t __bsx);
void OBF_FUNC_FLATTEN_SPLIT_28(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef union pthread_attr_t pthread_attr_t;
void OBF_FUNC_FLATTEN_SPLIT_42(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern void *(reallocarray)(void *__ptr, size_t __nmemb, size_t __size);
extern unsigned short *(seed48)(unsigned short *__seed16v);
void OBF_FUNC_FLATTEN_SPLIT_73(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef union __anonunion_pthread_mutex_t_335460617 pthread_mutex_t;
void OBF_FUNC_FLATTEN_SPLIT_85(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_71(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_31(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_78(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern long double(strtold)(char const *__nptr, char **__endptr);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern div_t(div)(int __numer, int __denom);
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
void OBF_FUNC_FLATTEN_SPLIT_46(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_43(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __time_t time_t;
typedef enum __anonenum_idtype_t_558242672 idtype_t;
typedef __int64_t __int_least64_t;
typedef __int8_t int8_t;
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
void OBF_FUNC_FLATTEN_SPLIT_77(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef unsigned long __fsfilcnt64_t;
extern int(mblen)(char const *__s, size_t __n);
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
void OBF_FUNC_FLATTEN_SPLIT_54(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_52(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_50(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_36(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(rpmatch)(char const *__response);
extern ldiv_t(ldiv)(long __numer, long __denom);
typedef long __intmax_t;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
typedef __u_long u_long;
extern void *(calloc)(size_t __nmemb, size_t __size);
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __int8_t __int_least8_t;
extern void *(alloca)(size_t __size);
extern void(free)(void *__ptr);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
void OBF_FUNC_FLATTEN_SPLIT_58(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
typedef __pid_t pid_t;
void OBF_FUNC_FLATTEN_SPLIT_56(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
typedef long __fsword_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
void OBF_FUNC_FLATTEN_SPLIT_75(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern void(srandom)(unsigned int __seed);
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_60(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(rand)(void);
typedef unsigned long pthread_t;
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab32:;
    if (_1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ * (*(_1_OBF_FUNC_arg->n) * 308) < 904 * _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ + 729) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 14UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 86UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab53:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 85UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 42UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab85:;
    if (441409 - (*(_1_OBF_FUNC_arg->n) - _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__) < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 82UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 72UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab89:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 15UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_47(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab7:
    _1_OBF_FUNC_arg->__RANDVAR__16874241127757994389__ -= 549;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 56UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_31(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab69:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 35UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_65(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:
    _1_OBF_FUNC_arg->__RANDVAR__57579607671640033527__ = *(_1_OBF_FUNC_arg->n);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 89UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_32(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab74:
    _1_OBF_FUNC_arg->i = 1;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 31UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_83(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 38UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab50:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 15UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab59:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab87:
    _1_OBF_FUNC_arg->__RANDVAR__68952941980375037272__ = 1;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 76UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab78:
    _1_OBF_FUNC_arg->__RANDVAR__59411839565796061720__ += 947;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 81UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_76(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab88:
    *(_1_OBF_FUNC_arg->n) += 816;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_34(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab31:
    *(_1_OBF_FUNC_arg->n) -= 510;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 79UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_82(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab19:
    _1_OBF_FUNC_arg->__RANDVAR__71613412325299853622__ = 729;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 53UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_41(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab68:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ -= 104;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 70UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_62(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab10:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ -= 580;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_75(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab39:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 51UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 46UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_25(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab44:
    (_1_OBF_FUNC_arg->__RANDVAR__44600806239876419459__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 59UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab45:
    _1_OBF_FUNC_arg->__RANDVAR__55230377994778236778__ = 549 - *(_1_OBF_FUNC_arg->n);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 74UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_56(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab61:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 13UL; }
    return;
  }
}
int OBF_FUNC(int n) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[91])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg) = {&OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_77, &OBF_FUNC_FLATTEN_SPLIT_58, &OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_53, &OBF_FUNC_FLATTEN_SPLIT_81, &OBF_FUNC_FLATTEN_SPLIT_26, &OBF_FUNC_FLATTEN_SPLIT_47, &OBF_FUNC_FLATTEN_SPLIT_65, &OBF_FUNC_FLATTEN_SPLIT_83, &OBF_FUNC_FLATTEN_SPLIT_62, &OBF_FUNC_FLATTEN_SPLIT_35, &OBF_FUNC_FLATTEN_SPLIT_78, &OBF_FUNC_FLATTEN_SPLIT_22, &OBF_FUNC_FLATTEN_SPLIT_64, &OBF_FUNC_FLATTEN_SPLIT_71, &OBF_FUNC_FLATTEN_SPLIT_66, &OBF_FUNC_FLATTEN_SPLIT_14, &OBF_FUNC_FLATTEN_SPLIT_46, &OBF_FUNC_FLATTEN_SPLIT_82, &OBF_FUNC_FLATTEN_SPLIT_37, &OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_30, &OBF_FUNC_FLATTEN_SPLIT_44, &OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_61, &OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_51, &OBF_FUNC_FLATTEN_SPLIT_84, &OBF_FUNC_FLATTEN_SPLIT_69, &OBF_FUNC_FLATTEN_SPLIT_45, &OBF_FUNC_FLATTEN_SPLIT_34, &OBF_FUNC_FLATTEN_SPLIT_19, &OBF_FUNC_FLATTEN_SPLIT_33, &OBF_FUNC_FLATTEN_SPLIT_42, &OBF_FUNC_FLATTEN_SPLIT_40, &OBF_FUNC_FLATTEN_SPLIT_3, &OBF_FUNC_FLATTEN_SPLIT_60, &OBF_FUNC_FLATTEN_SPLIT_1, &OBF_FUNC_FLATTEN_SPLIT_75, &OBF_FUNC_FLATTEN_SPLIT_29, &OBF_FUNC_FLATTEN_SPLIT_36, &OBF_FUNC_FLATTEN_SPLIT_52, &OBF_FUNC_FLATTEN_SPLIT_23, &OBF_FUNC_FLATTEN_SPLIT_25, &OBF_FUNC_FLATTEN_SPLIT_0, &OBF_FUNC_FLATTEN_SPLIT_67, &OBF_FUNC_FLATTEN_SPLIT_73, &OBF_FUNC_FLATTEN_SPLIT_85, &OBF_FUNC_FLATTEN_SPLIT_54, &OBF_FUNC_FLATTEN_SPLIT_8, &OBF_FUNC_FLATTEN_SPLIT_43, &OBF_FUNC_FLATTEN_SPLIT_49, &OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_59, &OBF_FUNC_FLATTEN_SPLIT_39, &OBF_FUNC_FLATTEN_SPLIT_24, &OBF_FUNC_FLATTEN_SPLIT_48, &OBF_FUNC_FLATTEN_SPLIT_57, &OBF_FUNC_FLATTEN_SPLIT_15, &OBF_FUNC_FLATTEN_SPLIT_2, &OBF_FUNC_FLATTEN_SPLIT_56, &OBF_FUNC_FLATTEN_SPLIT_50, &OBF_FUNC_FLATTEN_SPLIT_80, &OBF_FUNC_FLATTEN_SPLIT_6, &OBF_FUNC_FLATTEN_SPLIT_4, &OBF_FUNC_FLATTEN_SPLIT_16, &OBF_FUNC_FLATTEN_SPLIT_63, &OBF_FUNC_FLATTEN_SPLIT_41, &OBF_FUNC_FLATTEN_SPLIT_31, &OBF_FUNC_FLATTEN_SPLIT_28, &OBF_FUNC_FLATTEN_SPLIT_72, &OBF_FUNC_FLATTEN_SPLIT_70, &OBF_FUNC_FLATTEN_SPLIT_10, &OBF_FUNC_FLATTEN_SPLIT_32, &OBF_FUNC_FLATTEN_SPLIT_68, &OBF_FUNC_FLATTEN_SPLIT_13, &OBF_FUNC_FLATTEN_SPLIT_79, &OBF_FUNC_FLATTEN_SPLIT_7, &OBF_FUNC_FLATTEN_SPLIT_17, &OBF_FUNC_FLATTEN_SPLIT_74, &OBF_FUNC_FLATTEN_SPLIT_27, &OBF_FUNC_FLATTEN_SPLIT_55, &OBF_FUNC_FLATTEN_SPLIT_11, &OBF_FUNC_FLATTEN_SPLIT_38, &OBF_FUNC_FLATTEN_SPLIT_5, &OBF_FUNC_FLATTEN_SPLIT_20, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_76, &OBF_FUNC_FLATTEN_SPLIT_12, &OBF_FUNC_FLATTEN_SPLIT_21};
  {
    { _1_OBF_FUNC_arg._1_OBF_FUNC_next = 27UL; }
    _1_OBF_FUNC_arg.n = &n;
    while (1) {
      if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 90) {
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
      } else {
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next - 0]))(&_1_OBF_FUNC_arg);
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_30(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab22:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ += 97;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 28UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_85(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab48:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 20UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_26(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:
    _1_OBF_FUNC_arg->__RANDVAR__16874241127757994389__ = 666 - (83 + *(_1_OBF_FUNC_arg->n));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 49UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_59(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab54:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 1;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 91UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_80(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab63:
    *(_1_OBF_FUNC_arg->n) += 845;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 76UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab17:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ = 350;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 64UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_81(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab5:;
    if (_1_OBF_FUNC_arg->sum == *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 54UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 18UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab66:
    _1_OBF_FUNC_arg->__RANDVAR__68952941980375037272__ = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 47UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_39(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab55:
    _1_OBF_FUNC_arg->__RANDVAR__27979049856298067875__ = *(_1_OBF_FUNC_arg->n);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 41UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_43(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab51:;
    if (*(_1_OBF_FUNC_arg->n) < 611) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 33UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 32UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_33(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab33:
    *(_1_OBF_FUNC_arg->n) -= 459;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 16UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_67(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab46:
    _1_OBF_FUNC_arg->__RANDVAR__96510228076559744289__ = (_1_OBF_FUNC_arg->__RANDVAR__96510228076559744289__ + _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__) + (*(_1_OBF_FUNC_arg->n) - 705);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 60UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_74(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab80:
    *(_1_OBF_FUNC_arg->n) += 564;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 43UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab76:;
    if (_1_OBF_FUNC_arg->__RANDVAR__68952941980375037272__ == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 73UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab64:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 55UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 42UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_79(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab77:;
    if (*(_1_OBF_FUNC_arg->n) < 380) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 23UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_55(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab82:
    _1_OBF_FUNC_arg->__RANDVAR__36647446517031365965__ = 87;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 81UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_58(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    _1_OBF_FUNC_arg->sum = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 65UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_22(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab13:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 42UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_57(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab58:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_60(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_29(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab40:
    (_1_OBF_FUNC_arg->__RANDVAR__16042802751283179408__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 76UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_23(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab43:
    *(_1_OBF_FUNC_arg->n) -= 564;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 69UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_68(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab75:
    (_1_OBF_FUNC_arg->__RANDVAR__66925345028068859693__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 25UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab73:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 80UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_70(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab72:
    _1_OBF_FUNC_arg->__RANDVAR__59411839565796061720__ = _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 77UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_38(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab84:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 36UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 75UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_66(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab16:
    *(_1_OBF_FUNC_arg->n) += 459;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 84UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_64(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab14:
    _1_OBF_FUNC_arg->__RANDVAR__85676976691897754440__ = 391;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 84UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_45(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab30:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ -= 97;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 22UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_73(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab47:;
    if (*(_1_OBF_FUNC_arg->n) < 185) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 62UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 40UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_36(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab41:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 61UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 13UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_20(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab86:
    (_1_OBF_FUNC_arg->__RANDVAR__75719306870437977732__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 84UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab36:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 75UL; }
    return;
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
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
    tmp___0 = OBF_FUNC(tmp);
    return (tmp___0);
  }
}
void OBF_FUNC_FLATTEN_SPLIT_21(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab90:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ += 580;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 10UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_37(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab20:;
    if (859 * (*(_1_OBF_FUNC_arg->n) - *(_1_OBF_FUNC_arg->n)) < 412) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 71UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 44UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_48(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab57:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 48UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 20UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_63(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab67:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ += 165;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 39UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_77(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:
    _1_OBF_FUNC_arg->__RANDVAR__31502074964986350598__ = _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 81UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab83:
    _1_OBF_FUNC_arg->__RANDVAR__80546585636930639702__ = 687;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 87UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_71(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab15:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ -= 165;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 67UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab38:
    *(_1_OBF_FUNC_arg->n) += 920;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 52UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab79:
    *(_1_OBF_FUNC_arg->n) += 510;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab60:;
    if (*(_1_OBF_FUNC_arg->n) < _1_OBF_FUNC_arg->__RANDVAR__96510228076559744289__) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 68UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 19UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_61(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab25:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 46UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab65:
    *(_1_OBF_FUNC_arg->n) -= 991;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 29UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_35(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab11:
    *(_1_OBF_FUNC_arg->n) -= 816;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 88UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_44(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab23:
    _1_OBF_FUNC_arg->__RANDVAR__59411839565796061720__ -= 947;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 78UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_46(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab18:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 91UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_52(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab42:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->n)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 50UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 83UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_24(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab56:
    _1_OBF_FUNC_arg->__RANDVAR__16874241127757994389__ += 549;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_51(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab27:;
    if (*(_1_OBF_FUNC_arg->n) < 472) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 34UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 45UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_69(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab29:
    *(_1_OBF_FUNC_arg->n) += 991;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 66UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_84(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab28:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 58UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_28(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab70:
    _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ += 104;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 53UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_50(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab62:
    *(_1_OBF_FUNC_arg->n) -= 845;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 63UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_53(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:
    (_1_OBF_FUNC_arg->i)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 42UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_49(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab52:
    *(_1_OBF_FUNC_arg->n) -= 920;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 57UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_42(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab34:
    _1_OBF_FUNC_arg->__RANDVAR__18538618091456912721__ = *(_1_OBF_FUNC_arg->n);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 74UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_40(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab35:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_54(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab49:;
    if (677 - _1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ * _1_OBF_FUNC_arg->__RANDVAR__16874241127757994389__ < -270 - (_1_OBF_FUNC_arg->__RANDVAR__40893801901345880707__ + 160)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 90UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_78(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab12:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_72(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab71:
    _1_OBF_FUNC_arg->__RANDVAR__26518926542897397356__ = *(_1_OBF_FUNC_arg->n);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 59UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_27(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab81:;
    if (*(_1_OBF_FUNC_arg->n) % _1_OBF_FUNC_arg->i == 0) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 12UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL; }
    }
    return;
  }
}
// variants: loop-unroll, irrelevant-code, flatten
// expanded variants: loop-unroll, irrelevant-code, flatten:call
