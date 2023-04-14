typedef void *__builtin_va_list;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion____missing_field_name_168944669;
struct _G_fpos64_t;
union __anonunion_pthread_mutex_t_335460617;
struct _IO_wide_data;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __anonstruct_ldiv_t_790849867;
struct __locale_data;
union __anonunion_pthread_barrier_t_145707746;
struct __locale_struct;
struct __anonstruct_div_t_773697287;
struct timespec;
union __anonunion_pthread_barrierattr_t_951761806;
struct random_data;
struct __anonstruct_fd_set_356711149;
struct _IO_FILE;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion____missing_field_name_972253865;
struct __pthread_mutex_s;
enum __anonenum_idtype_t_558242672;
union pthread_attr_t;
struct __anonstruct___mbstate_t_582134611;
struct timeval;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct___sigset_t_973126068;
struct drand48_data;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___wseq32_961093918;
struct __anonstruct_lldiv_t_103911545;
struct _IO_codecvt;
struct _G_fpos_t;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_rwlockattr_t_145707745;
struct __pthread_internal_list;
struct __pthread_rwlock_arch_t;
struct __anonstruct___g1_start32_972253866;
union __anonunion___value_771759453;
struct _IO_marker;
struct __pthread_internal_slist;
struct __pthread_cond_s;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
struct _3_OBF_FUNC_2_opaque_NodeStruct;
struct _3_OBF_FUNC_1_opaque_NodeStruct;
extern char *(strstr)(char const *__haystack, char const *__needle);
struct _3_OBF_FUNC_2_opaque_NodeStruct {
  struct _3_OBF_FUNC_2_opaque_NodeStruct *next;
  int data;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *prev;
};
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_ptr_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef unsigned int __mode_t;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
extern int putchar_unlocked(int __c);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
typedef struct _IO_FILE FILE;
extern int putc(int __c, FILE *__stream);
typedef long __blksize_t;
typedef __blksize_t blksize_t;
typedef int __daddr_t;
typedef __daddr_t daddr_t;
typedef unsigned long size_t;
extern size_t fread_unlocked(void *__ptr, size_t __size, size_t __n, FILE *__stream);
typedef unsigned long __fsfilcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef struct __locale_struct *__locale_t;
extern char *(ctermid)(char *__s);
extern char *(stpcpy)(char *__dest, char const *__src);
extern int fputs(char const *__s, FILE *__stream);
extern void(funlockfile)(FILE *__stream);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
typedef unsigned long __uint64_t;
typedef __uint64_t u_int64_t;
extern FILE *tmpfile(void);
extern void(abort)(void);
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __fd_mask;
extern int(at_quick_exit)(void (*__func)(void));
extern char *(tempnam)(char const *__dir, char const *__pfx);
typedef long __ssize_t;
extern __ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream);
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2;
typedef int __clockid_t;
typedef unsigned short __uint16_t;
extern int(fileno)(FILE *__stream);
typedef __builtin_va_list __gnuc_va_list;
extern int vsprintf(char *__s, char const *__format, __gnuc_va_list __arg);
extern int vprintf(char const *__format, __gnuc_va_list __arg);
extern char *(strtok_r)(char *__s, char const *__delim, char **__save_ptr);
typedef int __key_t;
typedef __key_t key_t;
extern int(strcasecmp)(char const *__s1, char const *__s2);
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
union __anonunion___value_771759453 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_582134611 {
  int __count;
  union __anonunion___value_771759453 __value;
};
typedef struct __anonstruct___mbstate_t_582134611 __mbstate_t;
typedef long __off_t;
struct _G_fpos_t {
  __off_t __pos;
  __mbstate_t __state;
};
typedef struct _G_fpos_t __fpos_t;
typedef __fpos_t fpos_t;
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
typedef __fd_mask fd_mask;
extern void *(malloc)(size_t __size);
extern long long(atoll)(char const *__nptr);
typedef int register_t;
extern int getw(FILE *__stream);
extern char *(realpath)(char const *__name, char *__resolved);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_1;
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
extern int vsnprintf(char *__s, size_t __maxlen, char const *__format, __gnuc_va_list __arg);
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
extern int sprintf(char *__s, char const *__format, ...);
extern FILE *stdout;
typedef __locale_t locale_t;
extern int(strcoll_l)(char const *__s1, char const *__s2, locale_t __l);
typedef __id_t id_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern int putc_unlocked(int __c, FILE *__stream);
extern int vscanf(char const *__format, __gnuc_va_list __arg);
typedef __int16_t __int_least16_t;
extern int(abs)(int __x);
typedef int wchar_t;
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
typedef unsigned long __rlim64_t;
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
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern void *(memmove)(void *__dest, void const *__src, size_t __n);
extern char *(rindex)(char const *__s, int __c);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
extern int(feof_unlocked)(FILE *__stream);
extern float(strtof)(char const *__nptr, char **__endptr);
typedef long __suseconds_t;
typedef long __time_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
extern size_t fwrite(void const *__ptr, size_t __size, size_t __n, FILE *__s);
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timespec const *__timeout, __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
extern int pclose(FILE *__stream);
typedef void _IO_lock_t;
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
typedef long __syscall_slong_t;
extern void(bzero)(void *__s, size_t __n);
typedef unsigned int __uint32_t;
typedef int pthread_once_t;
extern void(clearerr)(FILE *__stream);
typedef unsigned char __u_char;
typedef __u_char u_char;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef __off_t off_t;
extern __ssize_t getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
char **_global_argv;
extern int(ftrylockfile)(FILE *__stream);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
extern int fgetpos(FILE *__stream, fpos_t *__pos);
extern void(flockfile)(FILE *__stream);
extern int(memcmp)(void const *__s1, void const *__s2, size_t __n);
extern int fgetc(FILE *__stream);
struct _3_OBF_FUNC_1_opaque_NodeStruct {
  struct _3_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *prev;
};
extern int putchar(int __c);
extern int(feof)(FILE *__stream);
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
extern int scanf(char const *__format, ...);
typedef unsigned long __rlim_t;
typedef unsigned long __uintmax_t;
extern int(getsubopt)(char **__optionp, char *const *__tokens, char **__valuep);
extern int(qfcvt_r)(long double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
extern int puts(char const *__s);
extern int fflush(FILE *__stream);
extern void *(memcpy)(void *__dest, void const *__src, size_t __n);
extern char *(strpbrk)(char const *__s, char const *__accept);
typedef long __clock_t;
typedef union __anonunion_pthread_barrierattr_t_951761806 pthread_barrierattr_t;
extern FILE *(fmemopen)(void *__s, size_t __len, char const *__modes);
typedef void *__timer_t;
typedef __timer_t timer_t;
extern char *(setstate)(char *__statebuf);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_1 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
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
extern void rewind(FILE *__stream);
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_1;
extern int(strncasecmp_l)(char const *__s1, char const *__s2, size_t __n, locale_t __loc);
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
extern FILE *stderr;
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
extern size_t(strxfrm_l)(char *__dest, char const *__src, size_t __n, locale_t __l);
extern lldiv_t(lldiv)(long long __numer, long long __denom);
extern int(strcmp)(char const *__s1, char const *__s2);
extern char *(index)(char const *__s, int __c);
typedef __suseconds_t suseconds_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
extern size_t(strcspn)(char const *__s, char const *__reject);
extern int fputc_unlocked(int __c, FILE *__stream);
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
typedef __fsid_t fsid_t;
typedef __uint32_t __uint_least32_t;
typedef unsigned int __gid_t;
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
extern char *(strncpy)(char *__dest, char const *__src, size_t __n);
typedef struct __anonstruct_div_t_773697287 div_t;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
extern int printf(char const *__format, ...);
extern void(clearerr_unlocked)(FILE *__stream);
extern int(renameat)(int __oldfd, char const *__old, int __newfd, char const *__new);
typedef struct _IO_FILE __FILE;
extern long(lrand48)(void);
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
typedef unsigned long __u_long;
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
extern int(strcoll)(char const *__s1, char const *__s2);
extern FILE *popen(char const *__command, char const *__modes);
extern char *(mktemp)(char *__template);
extern long(nrand48)(unsigned short *__xsubi);
extern char *(initstate)(unsigned int __seed, char *__statebuf, size_t __statelen);
unsigned int OBF_FUNC(char *str, unsigned int len);
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_ptr_2 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __pthread_internal_slist __pthread_slist_t;
extern void(quick_exit)(int __status);
extern size_t(strspn)(char const *__s, char const *__accept);
typedef unsigned short __u_short;
typedef __u_short u_short;
typedef __uint8_t u_int8_t;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern int fgetc_unlocked(FILE *__stream);
extern int(strcasecmp_l)(char const *__s1, char const *__s2, locale_t __loc);
extern void(_Exit)(int __status);
typedef long __quad_t;
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
extern char *(strsignal)(int __sig);
extern __off_t ftello(FILE *__stream);
extern int sys_nerr;
typedef unsigned short ushort;
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2;
extern int(initstate_r)(unsigned int __seed, char *__statebuf, size_t __statelen, struct random_data *__buf);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
};
extern int(atoi)(char const *__nptr);
extern int fscanf(FILE *__stream, char const *__format, ...);
extern int fputc(int __c, FILE *__stream);
extern char *(__stpcpy)(char *__dest, char const *__src);
typedef __uint16_t __uint_least16_t;
struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_list_1 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)0;
extern int __overflow(FILE *, int);
extern int dprintf(int __fd, char const *__fmt, ...);
extern void(lcong48)(unsigned short *__param);
extern int(rename)(char const *__old, char const *__new);
unsigned long _1_entropy;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
extern int(ferror_unlocked)(FILE *__stream);
int _global_argc;
extern char *(tmpnam_r)(char *__s);
extern int(mkstemp)(char *__template);
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt, int *__sign);
extern int putw(int __w, FILE *__stream);
extern long(a64l)(char const *__s);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
extern int fprintf(FILE *__stream, char const *__format, ...);
extern int __uflow(FILE *);
typedef long __blkcnt_t;
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern double(strtod)(char const *__nptr, char **__endptr);
typedef int __sig_atomic_t;
extern void(explicit_bzero)(void *__s, size_t __n);
extern int(sscanf)(char const *__s, char const *__format, ...);
typedef unsigned long __ino64_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
extern int getchar(void);
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
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern size_t fwrite_unlocked(void const *__ptr, size_t __size, size_t __n, FILE *__stream);
extern char *(strcat)(char *__dest, char const *__src);
extern char *(strsep)(char **__stringp, char const *__delim);
extern char *(l64a)(long __n);
typedef __off64_t __loff_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_2;
typedef unsigned long __dev_t;
typedef __dev_t dev_t;
typedef unsigned int uint;
extern int(strncmp)(char const *__s1, char const *__s2, size_t __n);
struct _G_fpos64_t {
  __off64_t __pos;
  __mbstate_t __state;
};
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern void *(realloc)(void *__ptr, size_t __size);
extern int(fileno_unlocked)(FILE *__stream);
typedef unsigned int pthread_key_t;
unsigned long _1_alwaysZero;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
typedef __loff_t loff_t;
extern int vfscanf(FILE *__s, char const *__format, __gnuc_va_list __arg);
extern void(srand)(unsigned int __seed);
typedef __int32_t __int_least32_t;
extern int(atexit)(void (*__func)(void));
typedef __u_quad_t u_quad_t;
extern int fclose(FILE *__stream);
typedef struct _3_OBF_FUNC_1_opaque_NodeStruct *_3_OBF_FUNC_1_opaque_StructureType;
extern int(strncasecmp)(char const *__s1, char const *__s2, size_t __n);
extern char *(strchr)(char const *__s, int __c);
typedef struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_StructureType;
union pthread_attr_t {
  char __size[56];
  long __align;
};
extern FILE *(open_memstream)(char **__bufloc, size_t *__sizeloc);
extern size_t(strnlen)(char const *__string, size_t __maxlen);
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int(bcmp)(void const *__s1, void const *__s2, size_t __n);
typedef __uint32_t u_int32_t;
extern FILE *fopen(char const *__filename, char const *__modes);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
extern char *(mkdtemp)(char *__template);
typedef unsigned long __fsblkcnt64_t;
extern char *(strerror)(int __errnum);
extern int fseek(FILE *__stream, long __off, int __whence);
extern double(atof)(char const *__nptr);
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_StructureType;
typedef __gnuc_va_list va_list;
typedef __sigset_t sigset_t;
extern int(ffsll)(long long __ll);
union __anonunion_pthread_cond_t_951761805 {
  struct __pthread_cond_s __data;
  char __size[48];
  long long __align;
};
typedef unsigned int __socklen_t;
typedef struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_StructureType;
extern long ftell(FILE *__stream);
extern int getchar_unlocked(void);
extern void(setlinebuf)(FILE *__stream);
extern char *(strrchr)(char const *__s, int __c);
typedef union pthread_attr_t pthread_attr_t;
extern int(ffsl)(long __l);
extern FILE *freopen(char const *__filename, char const *__modes, FILE *__stream);
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_2;
extern void *(reallocarray)(void *__ptr, size_t __nmemb, size_t __size);
extern int getc(FILE *__stream);
extern FILE *(fdopen)(int __fd, char const *__modes);
extern unsigned short *(seed48)(unsigned short *__seed16v);
extern int vdprintf(int __fd, char const *__fmt, __gnuc_va_list __arg);
extern char *fgets(char *__s, int __n, FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
typedef union __anonunion_pthread_mutex_t_335460617 pthread_mutex_t;
extern char *(strcpy)(char *__dest, char const *__src);
extern char *(strdup)(char const *__s);
extern char const *const sys_errlist[];
extern char *(__stpncpy)(char *__dest, char const *__src, size_t __n);
extern long double(strtold)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_1;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern char *(strtok)(char *__s, char const *__delim);
extern int getc_unlocked(FILE *__stream);
unsigned long _2_entropy = 4846267729658592363UL;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
};
extern int(remove)(char const *__filename);
typedef __uint64_t __uint_least64_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
typedef enum __anonenum_idtype_t_558242672 idtype_t;
typedef __int64_t __int_least64_t;
typedef __int8_t int8_t;
extern int snprintf(char *__s, size_t __maxlen, char const *__format, ...);
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
extern int fsetpos(FILE *__stream, fpos_t const *__pos);
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
extern int(setvbuf)(FILE *__stream, char *__buf, int __modes, size_t __n);
unsigned long _2_alwaysZero = 0;
typedef struct _G_fpos64_t __fpos64_t;
extern char *(tmpnam)(char *__s);
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
extern int(rpmatch)(char const *__response);
extern ldiv_t(ldiv)(long __numer, long __denom);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_2 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
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
extern int vfprintf(FILE *__s, char const *__format, __gnuc_va_list __arg);
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign, char *__buf, size_t __len);
struct _3_OBF_FUNC_2_opaque_NodeStruct *_3_OBF_FUNC_2_opaque_list_1 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void(bcopy)(void const *__src, void *__dest, size_t __n);
extern void *(alloca)(size_t __size);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
int main(int argc, char **argv, char **_formal_envp);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, long *__result);
extern void(setbuf)(FILE *__stream, char *__buf);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer, double *__result);
extern FILE *stdin;
typedef long __intptr_t;
extern void *(memccpy)(void *__dest, void const *__src, int __c, size_t __n);
extern __ssize_t __getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
extern int(vsscanf)(char const *__s, char const *__format, __gnuc_va_list __arg);
extern void *(memchr)(void const *__s, int __c, size_t __n);
extern int(strerror_r)(int __errnum, char *__buf, size_t __buflen);
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
extern void perror(char const *__s);
extern int fflush_unlocked(FILE *__stream);
extern void(srandom)(unsigned int __seed);
extern char *(strndup)(char const *__string, size_t __n);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr, int __base);
extern void *(memset)(void *__s, int __c, size_t __n);
extern int(ferror)(FILE *__stream);
extern void(setbuffer)(FILE *__stream, char *__buf, size_t __size);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
unsigned int OBF_FUNC(char *str, unsigned int len) {
  unsigned int hash;
  unsigned int i;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p5;
  int i6;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p7;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p11;
  int i12;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p13;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  void *tmp___2;
  unsigned long _1_OBF_FUNC_next;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p22;
  int i23;
  struct _3_OBF_FUNC_1_opaque_NodeStruct *p24;
  int _3_OBF_FUNC__BEGIN_1;
  int _3_OBF_FUNC__END_1;
  int _3_OBF_FUNC__BARRIER_2;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p28;
  int i29;
  struct _3_OBF_FUNC_2_opaque_NodeStruct *p30;
  int _3_OBF_FUNC__BEGIN_3;
  int _3_OBF_FUNC__END_3;
  int _3_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      tmp = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p11 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp;
      p11->next = p11;
      p11->prev = p11;
      _2_OBF_FUNC_2_opaque_list_1 = p11;
      i12 = 0;
      while (i12 < 2) {
        tmp___0 = malloc(sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p13 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)tmp___0;
        p13->data = (int)((unsigned long)i12 * ((_1_entropy & 10UL) * (_1_entropy | 10UL) + (_1_entropy & 0xfffffffffffffff5UL) * (~_1_entropy & 10UL)));
        p13->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p13->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p13;
        _2_OBF_FUNC_2_opaque_list_1->next = p13;
        i12++;
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
      p5 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___1;
      p5->next = p5;
      p5->prev = p5;
      _2_OBF_FUNC_1_opaque_list_1 = p5;
      i6 = 0;
      while (i6 < 3) {
        tmp___2 = malloc(sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p7 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)tmp___2;
        p7->data = (int)((unsigned long)i6 * (((_1_entropy - 4UL) - ((_1_entropy | 0xfffffffffffffffbUL) << 1UL)) - 2UL));
        p7->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p7->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p7;
        _2_OBF_FUNC_1_opaque_list_1->next = p7;
        i6++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_2->next;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    {
      _3_OBF_FUNC__BEGIN_3 = 1;
      p28 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
      p28->next = p28;
      p28->prev = p28;
      _3_OBF_FUNC_2_opaque_list_1 = p28;
      i29 = 0;
      while (i29 < 4) {
        p30 = (struct _3_OBF_FUNC_2_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_2_opaque_NodeStruct));
        p30->data = i29 * (((_2_entropy + 6) + 1UL) + ((-_2_entropy - 1UL) | (-6 - 1UL)));
        p30->next = _3_OBF_FUNC_2_opaque_list_1->next;
        p30->prev = _3_OBF_FUNC_2_opaque_list_1;
        (_3_OBF_FUNC_2_opaque_list_1->next)->prev = p30;
        _3_OBF_FUNC_2_opaque_list_1->next = p30;
        i29++;
      }
      _3_OBF_FUNC_2_opaque_ptr_1 = _3_OBF_FUNC_2_opaque_list_1->next;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_1;
      _3_OBF_FUNC_2_opaque_ptr_2 = _3_OBF_FUNC_2_opaque_ptr_2->next;
      _3_OBF_FUNC__END_3 = 1;
    }
    _3_OBF_FUNC__BARRIER_4 = 1;
    {
      _3_OBF_FUNC__BEGIN_1 = 1;
      p22 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
      p22->next = p22;
      p22->prev = p22;
      _3_OBF_FUNC_1_opaque_list_1 = p22;
      i23 = 0;
      while (i23 < 2) {
        p24 = (struct _3_OBF_FUNC_1_opaque_NodeStruct *)malloc(sizeof(struct _3_OBF_FUNC_1_opaque_NodeStruct));
        p24->data = i23 * (((_2_entropy - 1) - ((_2_entropy | ~1) << 1UL)) - 2UL);
        p24->next = _3_OBF_FUNC_1_opaque_list_1->next;
        p24->prev = _3_OBF_FUNC_1_opaque_list_1;
        (_3_OBF_FUNC_1_opaque_list_1->next)->prev = p24;
        _3_OBF_FUNC_1_opaque_list_1->next = p24;
        i23++;
      }
      _3_OBF_FUNC_1_opaque_ptr_1 = _3_OBF_FUNC_1_opaque_list_1->next;
      _3_OBF_FUNC_1_opaque_ptr_2 = _3_OBF_FUNC_1_opaque_ptr_1;
      _3_OBF_FUNC__END_1 = 1;
    }
    _3_OBF_FUNC__BARRIER_2 = 1;
    _1_OBF_FUNC_next = 4UL;
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 18:;
        if (i < len) {
          _1_OBF_FUNC_next = 14UL;
        } else {
          _1_OBF_FUNC_next = 1UL;
        }
        break;
      case 4:
        hash = 0U;
        _1_OBF_FUNC_next = 0UL;
        break;
      case 14:
        hash = (((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash;
        _1_OBF_FUNC_next = 13UL;
        break;
      case 15:;
        if ((i < len) <= i12) {
          _1_OBF_FUNC_next = 8UL;
        } else {
          _1_OBF_FUNC_next = 10UL;
        }
        break;
      case 12:;
        if ((unsigned long)_2_OBF_FUNC_2_opaque_ptr_1 == (unsigned long)_2_OBF_FUNC_2_opaque_ptr_2) {
          _1_OBF_FUNC_next = 17UL;
        } else {
          _1_OBF_FUNC_next = 15UL;
        }
        break;
      case 8:;
        {
          if (_3_OBF_FUNC_2_opaque_ptr_1 == _3_OBF_FUNC_2_opaque_ptr_2) {
          } else {
            return (len);
          }
        }
        break;
      case 1:;
        return (hash);
        break;
      case 3:
        i++;
        _1_OBF_FUNC_next = 18UL;
        break;
      case 16:
        i = (i + 1U) + 1U;
        if (_3_OBF_FUNC_2_opaque_ptr_1 != _3_OBF_FUNC_2_opaque_ptr_2) {
          _1_OBF_FUNC_next = 12UL;
        } else {
        }
        break;
      case 13:
        str++;
        _1_OBF_FUNC_next = 3UL;
        break;
      case 17:;
        if (!(((i < len) <= i12) > i12)) {
          _1_OBF_FUNC_next = 2UL;
        } else {
          _1_OBF_FUNC_next = 10UL;
        }
        break;
      case 6:
        str = (str + 1) + -1;
        _1_OBF_FUNC_next = 16UL;
        break;
      case 5:;
        if ((unsigned long)_2_OBF_FUNC_2_opaque_ptr_1 == (unsigned long)_2_OBF_FUNC_2_opaque_ptr_2) {
          _1_OBF_FUNC_next = 12UL;
        } else {
          _1_OBF_FUNC_next = 18UL;
        }
        break;
      case 10:
        hash = ((((unsigned int)*str + (hash << 6)) + (hash << 16)) - hash) >> 3;
        _1_OBF_FUNC_next = 6UL;
        break;
      case 0:
        i = 0U;
        _1_OBF_FUNC_next = 5UL;
        break;
      case 2:;
        return (len);
        break;
      }
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned char *str;
  unsigned int hash;
  size_t tmp;
  unsigned int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit; }
        _2_OBF_FUNC_1_opaque_ptr_1_i$nit_INLINE__2_OBF_FUNC_1_opaque_ptr_1_i$nit:;
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
          {
            _1_entropy = 6008780427878000536UL;
            goto _1_entropy_i$nit_INLINE__1_entropy_i$nit;
          }
        _1_entropy_i$nit_INLINE__1_entropy_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit; }
        _2_OBF_FUNC_2_opaque_ptr_2_i$nit_INLINE__2_OBF_FUNC_2_opaque_ptr_2_i$nit:;
        }
        {
          { goto _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit; }
        _2_OBF_FUNC_2_opaque_list_1_i$nit_INLINE__2_OBF_FUNC_2_opaque_list_1_i$nit:;
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
    str = (unsigned char *)*(argv + 1);
    tmp = strlen((char const *)str);
    tmp___0 = OBF_FUNC((char *)str, (unsigned int)tmp);
    hash = tmp___0;
    if (hash == 2312951406U) {
      printf((char const *)"You win!\n");
    }
    return (0);
  }
}
// variants: deadcode, block-fission
// expanded variants: deadcode:bug, block-fission:default
