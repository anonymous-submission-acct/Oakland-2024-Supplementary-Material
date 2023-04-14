typedef void *__builtin_va_list;
struct __locale_data;
struct __pthread_cond_s;
union pthread_attr_t;
struct itimerspec;
union __anonunion____missing_field_name_697295009;
struct sigevent;
struct __anonstruct___wseq32_961093918;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct___g1_start32_1014467460;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_cond_t_951761805;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_barrier_t_145707746;
struct random_data;
struct tm;
struct __anonstruct_fd_set_356711149;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_rwlock_arch_t;
union __anonunion_pthread_mutexattr_t_488594144;
struct __anonstruct_lldiv_t_103911545;
struct __pthread_internal_slist;
struct __anonstruct_ldiv_t_790849867;
struct drand48_data;
struct __pthread_mutex_s;
union __anonunion_pthread_mutex_t_335460617;
union __anonunion____missing_field_name_1014467459;
struct timespec;
union __anonunion_pthread_barrierattr_t_951761806;
struct timeval;
enum __anonenum_idtype_t_558242672;
struct __anonstruct___sigset_t_973126068;
struct __pthread_internal_list;
union __anonunion_pthread_rwlock_t_656928968;
struct __locale_struct;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
extern char *(strstr)(char const *__haystack, char const *__needle);
typedef unsigned long __u_quad_t;
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
char mock_fgetc(char *file);
typedef struct __locale_struct *__locale_t;
typedef unsigned long __fsfilcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
extern char *(stpcpy)(char *__dest, char const *__src);
typedef long __time_t;
typedef __time_t time_t;
extern time_t(mktime)(struct tm *__tp);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
typedef unsigned long __uint64_t;
typedef __uint64_t u_int64_t;
extern void(abort)(void);
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __fd_mask;
extern int(at_quick_exit)(void (*__func)(void));
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char const *tm_zone;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
};
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef int __clockid_t;
typedef unsigned short __uint16_t;
extern char *(strtok_r)(char *__s, char const *__delim, char **__save_ptr);
extern void(tzset)(void);
typedef int __key_t;
typedef __key_t key_t;
extern int(strcasecmp)(char const *__s1, char const *__s2);
typedef unsigned long __fsblkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
typedef int volatile pthread_spinlock_t;
struct __anonstruct_ldiv_t_790849867 {
  long quot;
  long rem;
};
extern int(rand_r)(unsigned int *__seed);
extern time_t(time)(time_t *__timer);
extern long __timezone;
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
typedef __fd_mask fd_mask;
extern void *(malloc)(size_t __size);
extern long long(atoll)(char const *__nptr);
typedef int register_t;
extern char *(realpath)(char const *__name, char *__resolved);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_1 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct drand48_data {
  unsigned short __x[3];
  unsigned short __old_x[3];
  unsigned short __c;
  unsigned short __init;
  unsigned long long __a;
};
typedef struct __anonstruct_lldiv_t_103911545 lldiv_t;
extern char *(getenv)(char const *__name);
extern int(ffs)(int __i);
extern size_t(strlen)(char const *__s);
struct __anonstruct_fd_set_356711149 {
  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
};
typedef unsigned int __id_t;
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
typedef signed char __int8_t;
extern int(clearenv)(void);
extern double(difftime)(time_t __time1, time_t __time0);
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
typedef __locale_t locale_t;
extern int(strcoll_l)(char const *__s1, char const *__s2, locale_t __l);
typedef __id_t id_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
typedef __int16_t __int_least16_t;
extern int(abs)(int __x);
typedef int wchar_t;
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int __daylight;
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
extern void *(memmove)(void *__dest, void const *__src, size_t __n);
extern char *(rindex)(char const *__s, int __c);
char *mock_fopen(char *file);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
extern float(strtof)(char const *__nptr, char **__endptr);
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
typedef long __syscall_slong_t;
extern char *(asctime)(struct tm const *__tp);
extern int nanosleep(struct timespec const *__requested_time, struct timespec *__remaining);
extern void(bzero)(void *__s, size_t __n);
extern time_t(timelocal)(struct tm *__tp);
extern char *(ctime_r)(time_t const *__timer, char *__buf);
typedef int pthread_once_t;
typedef unsigned int __uint32_t;
typedef unsigned char __u_char;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
extern int(memcmp)(void const *__s1, void const *__s2, size_t __n);
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
int mock_file_ptr;
typedef unsigned long __uintmax_t;
extern int(getsubopt)(char **__optionp, char *const *__tokens, char **__valuep);
typedef void *__timer_t;
typedef __timer_t timer_t;
extern int(timer_getoverrun)(timer_t __timerid);
extern int(qfcvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern void *(memcpy)(void *__dest, void const *__src, size_t __n);
extern char *(strpbrk)(char const *__s, char const *__accept);
typedef long __clock_t;
int close_ptr;
typedef union __anonunion_pthread_barrierattr_t_951761806 pthread_barrierattr_t;
extern int(clock_getres)(clockid_t __clock_id, struct timespec *__res);
extern char *(setstate)(char *__statebuf);
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
extern int(clock_gettime)(clockid_t __clock_id, struct timespec *__tp);
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_1 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern int(strncasecmp_l)(char const *__s1, char const *__s2, size_t __n, locale_t __loc);
extern struct tm *(localtime)(time_t const *__timer);
typedef int __pid_t;
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
extern size_t(strxfrm)(char *__dest, char const *__src, size_t __n);
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr, int __base);
extern char *(strncat)(char *__dest, char const *__src, size_t __n);
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
struct __anonstruct___g1_start32_1014467460 {
  unsigned int __low;
  unsigned int __high;
};
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_1014467459 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_1014467460 __g1_start32;
};
union __anonunion____missing_field_name_697295009 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_697295009 __annonCompField1;
  union __anonunion____missing_field_name_1014467459 __annonCompField2;
  unsigned int __g_refs[2];
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
extern size_t(strxfrm_l)(char *__dest, char const *__src, size_t __n, locale_t __l);
extern lldiv_t(lldiv)(long long __numer, long long __denom);
extern int(strcmp)(char const *__s1, char const *__s2);
extern char *(index)(char const *__s, int __c);
typedef __suseconds_t suseconds_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
extern size_t(strcspn)(char const *__s, char const *__reject);
extern int(timer_create)(clockid_t __clock_id, struct sigevent *__evp, timer_t *__timerid);
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
typedef __fsid_t fsid_t;
typedef __uint32_t __uint_least32_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef unsigned int __gid_t;
typedef __gid_t gid_t;
extern size_t(strftime)(char *__s, size_t __maxsize, char const *__format, struct tm const *__tp);
extern char *(strncpy)(char *__dest, char const *__src, size_t __n);
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};
typedef struct __anonstruct_div_t_773697287 div_t;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
extern size_t(strftime_l)(char *__s, size_t __maxsize, char const *__format, struct tm const *__tp, locale_t __loc);
extern int printf();
extern int(timer_delete)(timer_t __timerid);
extern int daylight;
extern long(lrand48)(void);
extern int(dysize)(int __year);
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
typedef unsigned long __u_long;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
extern int(strcoll)(char const *__s1, char const *__s2);
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
void OBF_FUNC(char *str, unsigned int len);
typedef struct __pthread_internal_slist __pthread_slist_t;
extern void(quick_exit)(int __status);
extern size_t(strspn)(char const *__s, char const *__accept);
typedef unsigned short __u_short;
typedef __u_short u_short;
typedef __uint8_t u_int8_t;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
extern int(strcasecmp_l)(char const *__s1, char const *__s2, locale_t __loc);
typedef long __quad_t;
typedef __quad_t quad_t;
extern char *(strsignal)(int __sig);
extern void(srand48)(long __seedval);
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
extern int(atoi)(char const *__nptr);
extern char *(__stpcpy)(char *__dest, char const *__src);
typedef __uint16_t __uint_least16_t;
extern void(lcong48)(unsigned short *__param);
extern char *(asctime_r)(struct tm const *__tp, char *__buf);
unsigned long _1_entropy = 4465652213940039705UL;
int _global_argc;
extern int(mkstemp)(char *__template);
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern long(a64l)(char const *__s);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
extern char *__tzname[2];
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern double(strtod)(char const *__nptr, char **__endptr);
typedef int __sig_atomic_t;
extern void(explicit_bzero)(void *__s, size_t __n);
typedef unsigned long __ino64_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
extern int(unsetenv)(char const *__name);
extern char *(strerror_l)(int __errnum, locale_t __l);
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
extern int(qecvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern char *(strcat)(char *__dest, char const *__src);
extern char *(strsep)(char **__stringp, char const *__delim);
extern char *(l64a)(long __n);
typedef __off64_t __loff_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_2 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef unsigned long __dev_t;
typedef __dev_t dev_t;
typedef unsigned int uint;
extern int(strncmp)(char const *__s1, char const *__s2, size_t __n);
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern struct tm *(localtime_r)(time_t const *__timer, struct tm *__tp);
extern void *(realloc)(void *__ptr, size_t __size);
typedef unsigned int pthread_key_t;
unsigned long _1_alwaysZero = 0;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern char *tzname[2];
typedef __loff_t loff_t;
extern void(srand)(unsigned int __seed);
typedef __int32_t __int_least32_t;
extern int(atexit)(void (*__func)(void));
typedef __u_quad_t u_quad_t;
extern char *(strchr)(char const *__s, int __c);
extern int(strncasecmp)(char const *__s1, char const *__s2, size_t __n);
extern int(timespec_get)(struct timespec *__ts, int __base);
typedef struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_StructureType;
union pthread_attr_t {
  char __size[56];
  long __align;
};
extern size_t(strnlen)(char const *__string, size_t __maxlen);
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int(bcmp)(void const *__s1, void const *__s2, size_t __n);
typedef __uint32_t u_int32_t;
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
extern long timezone;
typedef unsigned long __fsblkcnt64_t;
extern char *(strerror)(int __errnum);
extern double(atof)(char const *__nptr);
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
typedef __sigset_t sigset_t;
extern struct tm *(gmtime)(time_t const *__timer);
extern int(ffsll)(long long __ll);
union __anonunion_pthread_cond_t_951761805 {
  struct __pthread_cond_s __data;
  char __size[48];
  long long __align;
};
typedef unsigned int __socklen_t;
extern char *(strrchr)(char const *__s, int __c);
typedef __pid_t pid_t;
extern int(clock_getcpuclockid)(pid_t __pid, clockid_t *__clock_id);
typedef union pthread_attr_t pthread_attr_t;
extern int(ffsl)(long __l);
extern int clock_nanosleep(clockid_t __clock_id, int __flags, struct timespec const *__req, struct timespec *__rem);
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_2 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
extern time_t(timegm)(struct tm *__tp);
extern void *(reallocarray)(void *__ptr, size_t __nmemb, size_t __size);
extern unsigned short *(seed48)(unsigned short *__seed16v);
typedef union __anonunion_pthread_mutex_t_335460617 pthread_mutex_t;
extern char *(strcpy)(char *__dest, char const *__src);
extern int(timer_gettime)(timer_t __timerid, struct itimerspec *__value);
extern char *(strdup)(char const *__s);
extern char *(__stpncpy)(char *__dest, char const *__src, size_t __n);
extern long double(strtold)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_1 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern char *(strtok)(char *__s, char const *__delim);
extern struct tm *(gmtime_r)(time_t const *__timer, struct tm *__tp);
extern int(clock_settime)(clockid_t __clock_id, struct timespec const *__tp);
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
extern clock_t(clock)(void);
extern char *(ctime)(time_t const *__timer);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
typedef __int64_t __int_least64_t;
void mock_write(char *file, char *str, int len);
typedef __int8_t int8_t;
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
typedef unsigned long __fsfilcnt64_t;
extern char *(stpncpy)(char *__dest, char const *__src, size_t __n);
extern int(mblen)(char const *__s, size_t __n);
struct __locale_struct {
  struct __locale_data *__locales[13];
  unsigned short const *__ctype_b;
  int const *__ctype_tolower;
  int const *__ctype_toupper;
  char const *__names[13];
};
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
extern int(rpmatch)(char const *__response);
extern ldiv_t(ldiv)(long __numer, long __denom);
typedef long __intmax_t;
typedef __u_long u_long;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
extern char *(__strtok_r)(char *__s, char const *__delim, char **__save_ptr);
extern void *(calloc)(size_t __nmemb, size_t __size);
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
void mock_fclose(char *str);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
extern int(timer_settime)(timer_t __timerid, int __flags, struct itimerspec const *__value, struct itimerspec *__ovalue);
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
extern void(bcopy)(void const *__src, void *__dest, size_t __n);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
typedef long __intptr_t;
extern void *(memccpy)(void *__dest, void const *__src, int __c, size_t __n);
extern void *(memchr)(void const *__s, int __c, size_t __n);
extern int(strerror_r)(int __errnum, char *__buf, size_t __buflen);
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
typedef long __fsword_t;
extern void(srandom)(unsigned int __seed);
extern char *(strndup)(char const *__string, size_t __n);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern void *(memset)(void *__s, int __c, size_t __n);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
void OBF_FUNC(char *str, unsigned int len) {
  char mock_file[10];
  char *rfile;
  char *wfile;
  char ch;
  char tmp;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[18];
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p10;
  int i11;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p12;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p16;
  int i17;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p18;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p16 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p16->next = p16;
      p16->prev = p16;
      _2_OBF_FUNC_2_opaque_list_1 = p16;
      i17 = 0;
      while (i17 < 4) {
        p18 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p18->data = i17 * ((_1_entropy & 1) * (_1_entropy | 1) + (_1_entropy & ~1) * (~_1_entropy & 1));
        p18->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p18->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p18;
        _2_OBF_FUNC_2_opaque_list_1->next = p18;
        i17++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_2->next;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p10 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p10->next = p10;
      p10->prev = p10;
      _2_OBF_FUNC_1_opaque_list_1 = p10;
      i11 = 0;
      while (i11 < 2) {
        p12 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p12->data = i11 * ((_1_entropy ^ 2) + ((_1_entropy & 2) + (_1_entropy & 2)));
        p12->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p12->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p12;
        _2_OBF_FUNC_1_opaque_list_1->next = p12;
        i11++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_jumpTab[0] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[1] = &&_1_OBF_FUNC_lab1;
    _1_OBF_FUNC_jumpTab[2] = &&_1_OBF_FUNC_lab2;
    _1_OBF_FUNC_jumpTab[3] = &&_1_OBF_FUNC_lab3;
    _1_OBF_FUNC_jumpTab[4] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[5] = &&_1_OBF_FUNC_lab5;
    _1_OBF_FUNC_jumpTab[6] = &&_1_OBF_FUNC_lab6;
    _1_OBF_FUNC_jumpTab[7] = &&_1_OBF_FUNC_lab7;
    _1_OBF_FUNC_jumpTab[8] = &&_1_OBF_FUNC_lab8;
    _1_OBF_FUNC_jumpTab[9] = &&_1_OBF_FUNC_lab0;
    _1_OBF_FUNC_jumpTab[10] = &&_1_OBF_FUNC_lab10;
    _1_OBF_FUNC_jumpTab[11] = &&_1_OBF_FUNC_lab11;
    _1_OBF_FUNC_jumpTab[12] = &&_1_OBF_FUNC_lab12;
    _1_OBF_FUNC_jumpTab[13] = &&_1_OBF_FUNC_lab13;
    _1_OBF_FUNC_jumpTab[14] = &&_1_OBF_FUNC_lab14;
    _1_OBF_FUNC_jumpTab[15] = &&_1_OBF_FUNC_lab15;
    _1_OBF_FUNC_jumpTab[16] = &&_1_OBF_FUNC_lab16;
    _1_OBF_FUNC_jumpTab[17] = &&_1_OBF_FUNC_lab17;
    _1_OBF_FUNC_next = 15UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
    if (((((_1_alwaysZero & ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) * (_1_alwaysZero | ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) + (_1_alwaysZero & ~((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) * (~_1_alwaysZero & ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4)))) | 0) << 1UL) - (((_1_alwaysZero & ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) * (_1_alwaysZero | ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) + (_1_alwaysZero & ~((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4))) * (~_1_alwaysZero & ((_1_entropy & 4) * (_1_entropy | 4) + (_1_entropy & ~4) * (~_1_entropy & 4)))) ^ 0)) {
      printf("Error!" - 1);
      exit(4);
    } else {
    _1_OBF_FUNC_lab1:
      printf("Error!");
      exit(1);
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab17:;
    if ((unsigned long)wfile == (unsigned long)((char *)0)) {
      {
        if (_2_OBF_FUNC_2_opaque_ptr_1 != _2_OBF_FUNC_2_opaque_ptr_2) {
          _1_OBF_FUNC_next = 1UL;
        } else {
          _1_OBF_FUNC_next = _1_OBF_FUNC_next;
        }
      }
    } else {
      _1_OBF_FUNC_next = 7UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab6:
    mock_fclose(wfile);
    _1_OBF_FUNC_next = 10UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab3:;
    return;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab12:;
    if ((unsigned long)rfile == (unsigned long)((char *)0)) {
      _1_OBF_FUNC_next = 0UL;
    } else {
      _1_OBF_FUNC_next = 2UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab2:
    tmp = mock_fgetc(rfile);
    _1_OBF_FUNC_next = 8UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab11:
    printf("%c", (int)ch);
    _1_OBF_FUNC_next = 13UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab10:
    rfile = mock_fopen(mock_file);
    _1_OBF_FUNC_next = 12UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab13:
    ch = mock_fgetc(rfile);
    _1_OBF_FUNC_next = 16UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab0:
    printf("Error!");
    exit(1);
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab7:
    mock_write(wfile, str, (int)len);
    _1_OBF_FUNC_next = 6UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab14:
    printf("\n");
    _1_OBF_FUNC_next = 5UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab16:;
    if ((int)ch != -1) {
      _1_OBF_FUNC_next = 11UL;
    } else {
      _1_OBF_FUNC_next = 14UL;
    }
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab15:
    wfile = mock_fopen(mock_file);
    _1_OBF_FUNC_next = 17UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab5:
    mock_fclose(rfile);
    _1_OBF_FUNC_next = 3UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  _1_OBF_FUNC_lab8:
    ch = tmp;
    _1_OBF_FUNC_next = 16UL;
    goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next]);
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  size_t tmp;
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
    goto close_ptr_i$nit_INLINE_close_ptr_i$nit;
  close_ptr_i$nit_INLINE_close_ptr_i$nit:;
    goto mock_file_ptr_i$nit_INLINE_mock_file_ptr_i$nit;
  mock_file_ptr_i$nit_INLINE_mock_file_ptr_i$nit:;
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
    tmp = strlen((char const *)*(argv + 1));
    OBF_FUNC(*(argv + 1), (unsigned int)tmp);
    return (0);
  }
}
void mock_write(char *file, char *str, int len) {
  int i;
  int tmp;
  int tmp___0;
  {
    i = 0;
    while (1) {
      if (mock_file_ptr < len) {
        if (!(i < len)) {
          break;
        }
      } else {
        break;
      }
      tmp = mock_file_ptr;
      mock_file_ptr++;
      *(file + tmp) = *(str + i);
      i++;
    }
    if (mock_file_ptr < len) {
      tmp___0 = mock_file_ptr;
      mock_file_ptr++;
      *(file + tmp___0) = (char)0;
    }
    return;
  }
}
char mock_fgetc(char *file) {
  char ch;
  {
    if (mock_file_ptr >= 10) {
      return ((char)-1);
    }
    ch = *(file + mock_file_ptr);
    if ((int)ch == 0) {
      return ((char)-1);
    }
    mock_file_ptr++;
    return (ch);
  }
}
char *mock_fopen(char *file) {
  { return (file); }
}
void mock_fclose(char *str) {
  int tmp;
  {
    tmp = close_ptr;
    close_ptr++;
    *(str + tmp) = (char)'X';
    *(str + mock_file_ptr) = (char)0;
    mock_file_ptr = 0;
    return;
  }
}
// variants: flatten, loop-unroll, deadcode
// expanded variants: flatten:indirect-goto, loop-unroll, deadcode:bug
