# 1 "8.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "8.c"
# 10 "8.c"
# 1 "/scratch/chenyang/csmith/runtime/csmith.h" 1
# 40 "/scratch/chenyang/csmith/runtime/csmith.h"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 646 "/usr/include/string.h" 3 4

# 41 "/scratch/chenyang/csmith/runtime/csmith.h" 2


# 1 "/scratch/chenyang/csmith/runtime/random_inc.h" 1
# 51 "/scratch/chenyang/csmith/runtime/random_inc.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 158 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 170 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed/limits.h" 2 3 4
# 52 "/scratch/chenyang/csmith/runtime/random_inc.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdint.h" 1 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 4 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdint.h" 2 3 4
# 56 "/scratch/chenyang/csmith/runtime/random_inc.h" 2



# 1 "/usr/include/assert.h" 1 3 4
# 68 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 60 "/scratch/chenyang/csmith/runtime/random_inc.h" 2
# 89 "/scratch/chenyang/csmith/runtime/random_inc.h"
# 1 "/scratch/chenyang/csmith/runtime/platform_generic.h" 1
# 40 "/scratch/chenyang/csmith/runtime/platform_generic.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 132 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 172 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 182 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 205 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 273 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

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
# 321 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 330 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 366 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 418 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 462 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 492 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 165 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 166 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 210 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 253 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 267 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 296 "/usr/include/stdio.h" 3 4

# 307 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 320 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 418 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 449 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 469 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 500 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 528 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 556 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 567 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 600 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 662 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 734 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 770 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 789 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 812 "/usr/include/stdio.h" 3 4

# 821 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 851 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 870 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 910 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 940 "/usr/include/stdio.h" 3 4

# 41 "/scratch/chenyang/csmith/runtime/platform_generic.h" 2


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc, int flag)
{



 printf ("checksum = %X\n", crc);
# 117 "/scratch/chenyang/csmith/runtime/platform_generic.h"
}
# 90 "/scratch/chenyang/csmith/runtime/random_inc.h" 2
# 100 "/scratch/chenyang/csmith/runtime/random_inc.h"
# 1 "/scratch/chenyang/csmith/runtime/safe_math.h" 1
# 13 "/scratch/chenyang/csmith/runtime/safe_math.h"
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
 
  return






    -si;
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return






    (si1 + si2);
}

static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return






    (si1 - si2);
}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return






    si1 * si2;
}

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
 
  return






    -si;
}

static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    (si1 - si2);
}

static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
 
  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
 
  return


    (si==(-9223372036854775807L -1)) ?
    ((si)) :


    -si;
}

static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
 
  return -ui;
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
 
  return -ui;
}

static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}

static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
 
  return -ui;
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}

static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
 
  return -ui;
}

static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}

static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}

static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
# 101 "/scratch/chenyang/csmith/runtime/random_inc.h" 2
# 44 "/scratch/chenyang/csmith/runtime/csmith.h" 2

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
# 94 "/scratch/chenyang/csmith/runtime/csmith.h"
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}

static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
# 11 "8.c" 2


static long __undefined;



static const volatile uint64_t g_9 = 0x371865425A80E358LL;
static uint32_t g_54 = 0UL;
static int32_t g_68[6][2] = {{1L,0x4B6369DDL},{0x22CBD4DAL,1L},{0x253674F9L,0x253674F9L},{0x253674F9L,1L},{0x22CBD4DAL,0x4B6369DDL},{1L,0x4B6369DDL}};
static int16_t g_123 = 0x3DC6L;
static int32_t g_128 = 0x07DEA5C4L;
static int32_t *g_127 = &g_128;
static int32_t g_139 = 0x8EB3B5FDL;
static int64_t g_157 = (-4L);
static int32_t *g_159[1][6] = {{&g_68[4][1],&g_139,&g_68[4][1],&g_68[4][1],&g_139,&g_68[4][1]}};
static int32_t **g_158 = &g_159[0][4];
static int8_t g_167 = 0xFCL;
static int16_t *g_171[6] = {&g_123,&g_123,&g_123,&g_123,&g_123,&g_123};
static uint8_t *g_185 = (void*)0;
static uint64_t g_213 = 18446744073709551608UL;
static uint32_t g_224 = 0xA066732FL;
static int64_t *g_262 = &g_157;
static volatile int64_t * volatile *g_261 = &g_262;
static int8_t g_347[5] = {0x96L,0x96L,0x96L,0x96L,0x96L};
static int64_t g_375 = 0L;
static int32_t g_440 = 0L;
static const int32_t g_443 = (-1L);
static const int32_t *g_442 = &g_443;
static uint8_t **g_482[6][10] = {{&g_185,(void*)0,(void*)0,&g_185,&g_185,&g_185,&g_185,(void*)0,(void*)0,&g_185},{(void*)0,&g_185,(void*)0,&g_185,&g_185,&g_185,(void*)0,(void*)0,&g_185,&g_185},{(void*)0,&g_185,&g_185,(void*)0,(void*)0,&g_185,&g_185,(void*)0,&g_185,(void*)0},{(void*)0,&g_185,&g_185,(void*)0,&g_185,&g_185,(void*)0,&g_185,&g_185,(void*)0},{&g_185,(void*)0,&g_185,&g_185,(void*)0,&g_185,&g_185,(void*)0,&g_185,&g_185},{&g_185,(void*)0,&g_185,(void*)0,&g_185,&g_185,(void*)0,(void*)0,&g_185,&g_185}};
static uint8_t ***g_481[10] = {&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4],&g_482[3][4]};
static uint8_t ***g_486 = &g_482[0][2];
static uint64_t g_527 = 0x01EA85723A6F8EE7LL;
static int32_t * const g_529 = &g_128;
static uint32_t *g_635 = &g_54;
static uint32_t **g_634 = &g_635;
static uint32_t **g_639 = &g_635;
static uint16_t g_695 = 65535UL;
static uint16_t *g_694 = &g_695;
static uint16_t **g_693 = &g_694;
static uint32_t ***g_709[8] = {&g_634,&g_634,&g_634,&g_634,&g_634,&g_634,&g_634,&g_634};
static uint32_t g_755 = 0x6B035B56L;
static uint32_t g_835 = 0x1E4F514BL;
static int32_t g_842 = (-4L);
static const volatile int32_t *g_841 = &g_842;
static int32_t g_897 = 0xE8F0E4F5L;
static int32_t *g_896 = &g_897;
static uint32_t *g_901[9] = {&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835};
static volatile uint32_t **g_900 = &g_901[0];
static uint32_t **g_903[3] = {&g_901[0],&g_901[0],&g_901[0]};
static uint32_t g_904 = 18446744073709551608UL;
static int32_t g_953 = (-1L);
static int16_t *g_982 = &g_123;
static int64_t g_1035 = 0x29F41343000D271FLL;
static int16_t g_1038 = 0x317FL;
static int16_t g_1062 = 0x4A78L;
static int64_t g_1147 = 1L;
static int64_t g_1150[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static int16_t g_1170 = 0x04DFL;
static uint16_t g_1190 = 7UL;
static uint8_t ***** const *g_1197 = (void*)0;
static uint64_t *g_1343 = &g_527;
static uint64_t * volatile *g_1342 = &g_1343;
static const uint32_t *g_1413 = &g_904;
static const uint32_t **g_1412 = &g_1413;
static int32_t g_1441 = (-1L);
static int8_t *g_1459 = (void*)0;
static int8_t * volatile *g_1458 = &g_1459;
static int32_t g_1510 = (-6L);
static const int32_t *g_1547 = (void*)0;
static int32_t g_1667 = 0x653CA793L;
static uint32_t * const *g_1690 = &g_901[1];
static uint32_t * const **g_1689[7][5][7] = {{{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{(void*)0,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,(void*)0},{&g_1690,&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,(void*)0}},{{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{(void*)0,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,(void*)0,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690}},{{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,(void*)0}},{{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690}},{{&g_1690,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690,(void*)0},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{(void*)0,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,(void*)0},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690}},{{&g_1690,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,(void*)0,(void*)0,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690}},{{&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,(void*)0},{&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690,&g_1690},{&g_1690,&g_1690,&g_1690,&g_1690,(void*)0,(void*)0,&g_1690},{&g_1690,&g_1690,&g_1690,(void*)0,&g_1690,&g_1690,&g_1690}}};
static int32_t *g_1706 = (void*)0;
static int32_t *g_1711 = (void*)0;
static int32_t **g_1743 = &g_896;
static int32_t g_1778 = 0xA3C4E36AL;
static uint8_t g_1802 = 249UL;
static int32_t g_1832 = (-8L);
static int32_t * const *g_1834[3] = {&g_1706,&g_1706,&g_1706};
static int32_t * const ** volatile g_1833 = &g_1834[1];
static uint64_t **g_1889 = &g_1343;
static volatile uint32_t g_2066[1][1] = {{0xB3D012A6L}};
static uint32_t g_2084[4][9][4] = {{{0UL,0x4C737DDAL,1UL,1UL},{0UL,4294967289UL,4294967293UL,0xA522978EL},{0x14E5AA3EL,1UL,0UL,0UL},{0x4518C668L,0UL,8UL,0x943EFEFCL},{0x6EB53D80L,0UL,0x1481E0D7L,0x15010725L},{0x140A278CL,4294967289UL,4294967295UL,4294967289UL},{0xAF0B043DL,0xF1FC371AL,0xF271D079L,0x462669E4L},{0UL,0x8543DD3EL,0UL,0xB64A0428L},{2UL,9UL,0UL,0x2F85C31CL}},{{1UL,4294967295UL,0xF25B05D6L,4294967295UL},{7UL,0xF25B05D6L,0x4C737DDAL,0x37C5671BL},{0x2F85C31CL,0UL,0x2F85C31CL,4294967295UL},{0xE85BE0A6L,0x97A2408BL,0xE02E3F62L,9UL},{0x4518C668L,0UL,4294967295UL,0xF82277D3L},{0xF271D079L,0xD3394F07L,4294967295UL,2UL},{0x4518C668L,0x6EB53D80L,0xAF0B043DL,0UL},{1UL,0x97A2408BL,0xD3394F07L,0x4E7EDF30L},{0xD3394F07L,0x4E7EDF30L,0UL,0x8543DD3EL}},{{4294967295UL,1UL,0x7F760481L,1UL},{0xF25B05D6L,0xE85BE0A6L,0x07B6B27BL,0UL},{0x462669E4L,1UL,0UL,1UL},{0UL,0UL,3UL,0x2F85C31CL},{4294967295UL,4294967295UL,0x97A2408BL,0x943EFEFCL},{4294967286UL,4294967295UL,4294967295UL,4UL},{4294967293UL,0xB64A0428L,0x66A50092L,0x462669E4L},{0x8AB429A6L,9UL,0x4C7B3DE6L,6UL},{0x140A278CL,1UL,1UL,0x140A278CL}},{{0UL,4294967295UL,0x6C46E65EL,7UL},{0x4C7B3DE6L,0UL,0x82B510A8L,4294967295UL},{0xA522978EL,6UL,0x8AB429A6L,4294967295UL},{0xF82277D3L,0UL,0UL,7UL},{0UL,4294967295UL,1UL,0x140A278CL},{4294967295UL,1UL,0UL,6UL},{0xFC23E28EL,9UL,0x4C737DDAL,0x462669E4L},{0x1481E0D7L,0xB64A0428L,4294967289UL,4UL},{0x97A2408BL,4294967295UL,2UL,0x943EFEFCL}}};
static uint16_t g_2086[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static volatile int16_t g_2115 = 0xC8CAL;
static volatile int16_t g_2175 = 0x7994L;
static volatile uint64_t g_2193 = 0x0D895FFAB7BF4102LL;
static uint16_t g_2212 = 65535UL;
static uint16_t g_2293[2] = {1UL,1UL};
static const volatile int64_t g_2331 = 0xF9DF2F57C5CF5D54LL;
static const volatile int64_t *g_2330[9][3][1] = {{{(void*)0},{&g_2331},{(void*)0}},{{(void*)0},{&g_2331},{&g_2331}},{{&g_2331},{&g_2331},{&g_2331}},{{(void*)0},{(void*)0},{&g_2331}},{{(void*)0},{(void*)0},{&g_2331}},{{&g_2331},{&g_2331},{&g_2331}},{{&g_2331},{(void*)0},{(void*)0}},{{&g_2331},{(void*)0},{(void*)0}},{{&g_2331},{&g_2331},{&g_2331}}};
static const volatile int64_t ** volatile g_2329[7][5][7] = {{{&g_2330[0][0][0],&g_2330[0][0][0],(void*)0,&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[7][0][0],&g_2330[0][0][0]},{(void*)0,&g_2330[0][0][0],&g_2330[8][1][0],(void*)0,&g_2330[5][2][0],&g_2330[1][2][0],&g_2330[0][0][0]},{&g_2330[0][2][0],(void*)0,&g_2330[3][0][0],(void*)0,(void*)0,&g_2330[1][1][0],&g_2330[3][0][0]},{(void*)0,(void*)0,(void*)0,&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[3][0][0],&g_2330[1][2][0]},{&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[1][1][0],&g_2330[1][1][0],&g_2330[0][0][0]}},{{&g_2330[7][2][0],&g_2330[1][2][0],&g_2330[0][0][0],&g_2330[5][2][0],&g_2330[0][0][0],&g_2330[7][2][0],&g_2330[0][0][0]},{&g_2330[0][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0]},{&g_2330[1][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[2][2][0],&g_2330[0][0][0],&g_2330[5][2][0],&g_2330[0][0][0]},{&g_2330[1][0][0],(void*)0,&g_2330[0][2][0],&g_2330[4][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0]},{&g_2330[0][0][0],(void*)0,&g_2330[8][1][0],&g_2330[0][0][0],(void*)0,&g_2330[4][1][0],&g_2330[0][0][0]}},{{&g_2330[3][0][0],&g_2330[0][0][0],&g_2330[2][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0]},{(void*)0,&g_2330[0][0][0],(void*)0,&g_2330[0][0][0],&g_2330[8][2][0],(void*)0,&g_2330[8][0][0]},{&g_2330[0][0][0],&g_2330[3][0][0],&g_2330[8][2][0],&g_2330[4][2][0],&g_2330[1][2][0],&g_2330[0][0][0],&g_2330[1][2][0]},{&g_2330[5][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[5][2][0],&g_2330[1][0][0],(void*)0,(void*)0},{&g_2330[0][0][0],&g_2330[4][2][0],(void*)0,&g_2330[2][0][0],&g_2330[1][1][0],&g_2330[0][0][0],&g_2330[0][0][0]}},{{(void*)0,(void*)0,&g_2330[0][0][0],&g_2330[8][2][0],&g_2330[0][0][0],&g_2330[4][1][0],(void*)0},{&g_2330[0][2][0],&g_2330[7][2][0],(void*)0,&g_2330[1][1][0],(void*)0,&g_2330[3][1][0],&g_2330[1][2][0]},{&g_2330[5][2][0],&g_2330[0][0][0],&g_2330[3][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[8][0][0]},{&g_2330[1][1][0],&g_2330[1][1][0],&g_2330[0][0][0],&g_2330[0][2][0],(void*)0,(void*)0,&g_2330[0][0][0]},{&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[1][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0]}},{{&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],(void*)0,&g_2330[3][0][0],&g_2330[0][0][0],&g_2330[0][0][0]},{&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[3][0][0],(void*)0,&g_2330[7][2][0],&g_2330[3][0][0],&g_2330[0][0][0]},{&g_2330[3][2][0],&g_2330[7][2][0],&g_2330[0][0][0],&g_2330[4][2][0],&g_2330[0][0][0],&g_2330[2][0][0],&g_2330[0][0][0]},{&g_2330[1][0][0],&g_2330[8][1][0],(void*)0,&g_2330[8][0][0],(void*)0,&g_2330[1][0][0],&g_2330[3][0][0]},{&g_2330[1][1][0],&g_2330[0][0][0],(void*)0,&g_2330[4][2][0],&g_2330[1][0][0],&g_2330[0][0][0],&g_2330[0][0][0]}},{{&g_2330[5][2][0],&g_2330[3][0][0],&g_2330[0][0][0],&g_2330[8][1][0],(void*)0,(void*)0,&g_2330[8][1][0]},{&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[0][0][0],(void*)0,&g_2330[7][0][0]},{&g_2330[1][2][0],(void*)0,&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[8][2][0],(void*)0,&g_2330[7][2][0]},{&g_2330[1][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[1][2][0],&g_2330[0][0][0],(void*)0,&g_2330[1][0][0]},{(void*)0,(void*)0,&g_2330[3][0][0],&g_2330[0][0][0],&g_2330[0][0][0],(void*)0,(void*)0}},{{&g_2330[0][2][0],&g_2330[1][0][0],(void*)0,&g_2330[0][0][0],&g_2330[1][1][0],&g_2330[0][0][0],&g_2330[4][2][0]},{&g_2330[0][0][0],&g_2330[5][2][0],&g_2330[0][0][0],&g_2330[1][2][0],(void*)0,&g_2330[1][0][0],&g_2330[8][2][0]},{&g_2330[2][0][0],&g_2330[3][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[3][2][0],&g_2330[2][0][0],&g_2330[7][0][0]},{&g_2330[0][0][0],&g_2330[1][2][0],(void*)0,&g_2330[0][0][0],&g_2330[7][2][0],(void*)0,&g_2330[1][2][0]},{&g_2330[1][1][0],(void*)0,&g_2330[2][0][0],&g_2330[7][2][0],&g_2330[0][0][0],&g_2330[0][0][0],&g_2330[1][1][0]}}};
static const volatile int64_t ** volatile *g_2328[10] = {&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0],&g_2329[1][2][0]};
static const volatile int64_t ** volatile **g_2327 = &g_2328[4];
static const volatile int64_t ** volatile ** const * volatile g_2326 = &g_2327;
static int32_t g_2409[9][6][4] = {{{0x48EF4763L,1L,0x53C097E0L,1L},{0x7C85C0B4L,(-1L),(-1L),(-1L)},{0L,0x48EF4763L,0x01A1BFAAL,1L},{0x4CD59266L,0L,2L,0x56CF5147L},{0x4CD59266L,0x669A90F6L,0x01A1BFAAL,2L},{0L,0x56CF5147L,(-1L),0x7C85C0B4L}},{{0x7C85C0B4L,0x7820411CL,0x53C097E0L,0x53C097E0L},{0x48EF4763L,0x48EF4763L,0x7C85C0B4L,(-1L)},{0xA6FE22DEL,1L,2L,0x01A1BFAAL},{0x65A4F05FL,0x7C85C0B4L,0x56CF5147L,2L},{0x1FB4913EL,0x7C85C0B4L,1L,0x01A1BFAAL},{0x7C85C0B4L,1L,(-1L),(-1L)}},{{(-4L),0x48EF4763L,1L,0x53C097E0L},{2L,0x7820411CL,2L,0x7C85C0B4L},{0x5172F94DL,0x56CF5147L,0x669A90F6L,2L},{0x29FD75BCL,0x669A90F6L,0x3AB07864L,0x56CF5147L},{0x7C85C0B4L,0L,0x3AB07864L,1L},{0x29FD75BCL,0x48EF4763L,0x669A90F6L,(-1L)}},{{0x5172F94DL,(-1L),2L,1L},{2L,1L,1L,2L},{(-4L),0x01A1BFAAL,(-1L),0x669A90F6L},{0x7C85C0B4L,(-1L),1L,0x3AB07864L},{0x1FB4913EL,0x48EF4763L,0x56CF5147L,0x3AB07864L},{0x65A4F05FL,0x669A90F6L,(-1L),0x3AB07864L}},{{0x7820411CL,1L,(-1L),(-1L)},{0x5172F94DL,(-1L),(-4L),(-1L)},{(-1L),0x56CF5147L,0x1FB4913EL,0L},{0x4CD59266L,0x5172F94DL,1L,0x48EF4763L},{0L,1L,(-1L),0x53C097E0L},{0L,0x3AB07864L,1L,(-1L)}},{{0x4CD59266L,0x53C097E0L,0x1FB4913EL,(-1L)},{(-1L),0x01A1BFAAL,(-4L),(-4L)},{0x5172F94DL,0x5172F94DL,(-1L),0x1FB4913EL},{0x7820411CL,0x7C85C0B4L,(-1L),1L},{(-1L),(-1L),0x53C097E0L,(-1L)},{2L,(-1L),0x48EF4763L,1L}},{{(-1L),0x7C85C0B4L,0L,0x1FB4913EL},{0xA6FE22DEL,0x5172F94DL,(-1L),(-4L)},{(-1L),0x01A1BFAAL,(-1L),(-1L)},{1L,0x53C097E0L,0x3AB07864L,(-1L)},{0x65A4F05FL,0x3AB07864L,0x29FD75BCL,0x53C097E0L},{(-1L),1L,0x29FD75BCL,0x48EF4763L}},{{0x65A4F05FL,0x5172F94DL,0x3AB07864L,0L},{1L,0x56CF5147L,(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{0xA6FE22DEL,1L,0L,0x3AB07864L},{(-1L),0x669A90F6L,0x48EF4763L,0x29FD75BCL},{2L,0x7C85C0B4L,0xA6FE22DEL,(-1L)}},{{0x53C097E0L,0x29FD75BCL,0x3AB07864L,0x65A4F05FL},{1L,0x5172F94DL,0x4CD59266L,0x3AB07864L},{0x7C85C0B4L,2L,0x7820411CL,2L},{0x4CD59266L,(-4L),(-1L),0L},{1L,0x7C85C0B4L,0x5172F94DL,1L},{(-1L),0x1FB4913EL,0x3AB07864L,0xA6FE22DEL}}};
static uint32_t g_2424 = 0xBB9D20D1L;



static int32_t func_1(void);
static int16_t func_10(const int64_t p_11, const uint8_t p_12);
static int64_t func_15(uint32_t p_16, int16_t p_17);
static uint32_t func_26(uint8_t p_27, uint16_t p_28, uint16_t p_29, uint32_t p_30);
static uint8_t func_31(uint32_t p_32, int32_t p_33);
static int64_t func_40(int64_t p_41, int32_t p_42, int32_t p_43, int32_t p_44);
static int64_t func_51(uint64_t p_52, uint16_t p_53);
static int32_t func_59(uint8_t p_60, int32_t p_61, int32_t p_62, int8_t p_63);
static int32_t * const func_98(const uint32_t p_99, uint64_t p_100);
static int32_t func_120(int16_t * p_121);
# 129 "8.c"
static int32_t func_1(void)
{
    int32_t l_8 = 0xCCBAD86EL;
    int32_t *l_1442 = &g_953;
    uint32_t l_1443 = 0xC60DF387L;
    int16_t l_1444 = (-1L);
    int64_t *l_1686 = &g_1150[4];
    uint32_t l_1715[2];
    uint32_t *l_2083 = &g_2084[2][0][1];
    uint16_t *l_2085 = &g_2086[2];
    int32_t l_2087 = 0x5551144CL;
    uint16_t l_2422 = 65530UL;
    uint32_t l_2423[5][3] = {{5UL,5UL,0x92B8A02DL},{0x218C6283L,0x218C6283L,4294967294UL},{5UL,5UL,0x92B8A02DL},{0x218C6283L,0x218C6283L,4294967294UL},{5UL,5UL,0x92B8A02DL}};
    uint64_t l_2425 = 4UL;
    int32_t l_2426 = 0x60EA2C05L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1715[i] = 0UL;
    g_2424 = ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((~(safe_lshift_func_int16_t_s_u((l_8 <= (((g_9 , func_10(l_8, (safe_sub_func_int64_t_s_s(func_15((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_2085) ^= (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_2083) = (func_26(l_8, g_9, (func_31((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(func_40(((*l_1686) |= ((safe_lshift_func_int8_t_s_s(0x53L, (safe_rshift_func_int8_t_s_s((((safe_div_func_int16_t_s_s((func_51(g_54, ((((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_1442) ^= func_59(l_8, ((g_54 , l_8) ^ g_54), g_54, g_54)), l_1443)) , l_1444), l_1443)) != l_1444) ^ l_1443) , (*g_694))) , (*l_1442)), 0x2FB6L)) == (-9L)) || g_128), 7)))) ^ l_1443)), l_1444, g_54, l_1443), l_8)), l_1444)), l_1444)), l_1443) && (*l_1442)), l_1715[0]) == l_8)), 0UL)), 7))), 9)), l_2087)), l_1444), l_8)))) , (*g_982)) , (*l_1442))), 10))), l_2422)), l_2423[1][1])) , (*l_1442));

    (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1]) || g_127 == &g_128) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1]) || g_127 == &g_128", "8.c", 149, __PRETTY_FUNCTION__));

    ((g_262 == &g_157 || g_262 == 0) ? (void) (0) : __assert_fail ("g_262 == &g_157 || g_262 == 0", "8.c", 151, __PRETTY_FUNCTION__));
    ((g_693 == 0 || g_693 == &g_694) ? (void) (0) : __assert_fail ("g_693 == 0 || g_693 == &g_694", "8.c", 152, __PRETTY_FUNCTION__));


    ((g_1743 == &g_1711 || g_1743 == &g_896) ? (void) (0) : __assert_fail ("g_1743 == &g_1711 || g_1743 == &g_896", "8.c", 155, __PRETTY_FUNCTION__));
    (*g_529) ^= l_2425;
    return l_2426;
}







static int16_t func_10(const int64_t p_11, const uint8_t p_12)
{
    int32_t *l_2269 = &g_139;
    int32_t l_2272 = 0L;
    int32_t l_2273 = 5L;
    int32_t l_2274[5] = {0x0E8C3949L,0x0E8C3949L,0x0E8C3949L,0x0E8C3949L,0x0E8C3949L};
    uint16_t l_2276 = 0xC384L;
    uint64_t ****l_2347 = (void*)0;
    uint32_t l_2390 = 4UL;
    int i;
    (*g_158) = l_2269;
    for (g_1510 = 0; (g_1510 < (-13)); --g_1510)
    {
        int32_t *l_2275[7] = {(void*)0,&l_2274[3],(void*)0,(void*)0,&l_2274[3],(void*)0,(void*)0};
        int i;
        ++l_2276;
    }
    for (g_1510 = 0; (g_1510 <= (-26)); g_1510 = safe_sub_func_int16_t_s_s(g_1510, 1))
    {
        int32_t l_2295 = 0xA4137EC8L;
        int16_t *l_2307 = &g_1062;
        int64_t ***l_2310 = (void*)0;
        int64_t ****l_2309 = &l_2310;
        int64_t *****l_2308 = &l_2309;
        int32_t l_2352 = 0x62B4E791L;
        uint16_t l_2369 = 0x2140L;
        int32_t l_2397 = 0L;
        for (g_695 = 0; (g_695 == 21); g_695 = safe_add_func_uint32_t_u_u(g_695, 2))
        {
            uint16_t l_2283 = 0xE958L;
            if (l_2283)
                break;
            if ((*l_2269))
                break;
        }
        for (l_2273 = 4; (l_2273 >= 0); l_2273 -= 1)
        {
            uint16_t l_2292 = 5UL;
            uint8_t ****l_2304 = &g_481[2];
            uint32_t *l_2332 = &g_2084[2][0][1];
            uint16_t l_2385[6];
            int32_t l_2392[3];
            uint32_t l_2400[2];
            int16_t **l_2404[3];
            int16_t ***l_2403 = &l_2404[2];
            int i;
            for (i = 0; i < 6; i++)
                l_2385[i] = 65535UL;
            for (i = 0; i < 3; i++)
                l_2392[i] = 0xD2A105F0L;
            for (i = 0; i < 2; i++)
                l_2400[i] = 0x19E5B642L;
            for (i = 0; i < 3; i++)
                l_2404[i] = (void*)0;
            for (g_167 = 0; (g_167 <= 4); g_167 += 1)
            {
                int64_t *l_2294 = &g_1035;
                uint32_t l_2339 = 0x49E4FBF5L;
                uint8_t l_2340 = 0xD6L;
                uint16_t **l_2361[9];
                int32_t l_2395 = 0xE2532375L;
                int32_t l_2396 = 0x0B1B9680L;
                int32_t l_2398 = 1L;
                int32_t l_2399 = 0xB5C8F2E9L;
                int16_t *** const l_2414 = &l_2404[2];
                int i;
                for (i = 0; i < 9; i++)
                    l_2361[i] = &g_694;
                if ((((*l_2294) = (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((g_347[l_2273] , &g_158) != &g_158), 0)), (((~(safe_sub_func_uint32_t_u_u(((((1UL != p_11) , ((*g_694) > func_31((safe_lshift_func_int8_t_s_s((*l_2269), g_347[l_2273])), (*l_2269)))) == l_2292) , 0xD03E6DC0L), 0L))) || g_2293[0]) , (**g_1342))))) || l_2295))
                {
                    int32_t l_2305 = 0xE5CB5984L;
                    int64_t ******l_2311 = (void*)0;
                    int64_t *****l_2313 = &l_2309;
                    int64_t ******l_2312 = &l_2313;
                    uint8_t *l_2316 = (void*)0;
                    uint8_t *l_2317 = &g_1802;
                    int16_t l_2325[9][6][4] = {{{0xA9BEL,0x2549L,0xFE46L,0x2549L},{1L,0xB042L,0xD6E1L,0xEB00L},{5L,0x5014L,0x2FA2L,0x0933L},{0L,0x0CC6L,0xE215L,(-6L)},{0L,2L,0x2FA2L,0xA9BEL},{5L,(-6L),0xD6E1L,9L}},{{1L,0xD269L,0xFE46L,6L},{0xA9BEL,0xF28DL,1L,0x9FFBL},{3L,0xF713L,5L,0xB042L},{0xF713L,0xD269L,0xBE89L,0xB587L},{7L,0xB135L,2L,0x471FL},{0xB042L,0xB587L,(-5L),0xB135L}},{{0x9FFBL,0xD269L,0L,0x3295L},{6L,2L,2L,6L},{9L,0x9FFBL,0x2FA2L,(-1L)},{0xA9BEL,0L,0xAE7EL,0xD269L},{(-6L),0xF785L,0x8AFAL,0xD269L},{0x0933L,0L,5L,(-1L)}},{{0xEB00L,0x9FFBL,(-1L),6L},{0x2549L,2L,0x0933L,0x3295L},{0xF785L,0xD269L,1L,0xB135L},{0x0CC6L,0xB587L,0xE215L,0x471FL},{0x2549L,0xB135L,0L,1L},{0x500FL,0x55EBL,5L,3L}},{{0x471FL,0xA9BEL,0L,(-6L)},{(-6L),0x2FA2L,0xB135L,0x9FFBL},{0x2FA2L,0x55EBL,0x2FA2L,(-5L)},{0xB587L,0x2549L,0x8EB4L,0x471FL},{6L,9L,(-5L),0x2549L},{3L,0xD269L,(-5L),1L}},{{6L,7L,0x8EB4L,6L},{0xB587L,3L,0x2FA2L,0L},{0x2FA2L,0L,0xB135L,0xD6E1L},{(-6L),0x0CC6L,0L,0xD269L},{0xF28DL,0x9032L,(-1L),5L},{9L,0x500FL,0xAF0CL,0L}},{{3L,1L,0xF713L,0x2FA2L},{0xB135L,(-2L),1L,3L},{0xAE7EL,0x8AFAL,0xBE89L,0xBE89L},{3L,3L,0x0CC6L,2L},{9L,0xAF0CL,(-1L),0x500FL},{0xBE89L,0L,0xE215L,(-1L)}},{{0xB042L,0L,0x9FFBL,0x500FL},{0L,0xAF0CL,(-1L),2L},{0L,3L,1L,0xBE89L},{(-5L),0x8AFAL,7L,3L},{0x500FL,(-2L),0x8EB4L,0x2FA2L},{0L,1L,1L,0L}},{{0x8AFAL,0x500FL,0x55EBL,5L},{0L,0x9032L,0xFE46L,(-1L)},{(-1L),0xB135L,0xE215L,(-2L)},{0xF28DL,5L,6L,5L},{9L,0x2DE8L,0xAF0CL,(-5L)},{0xFE46L,1L,0xBE89L,1L}}};
                    int32_t l_2351[4];
                    uint16_t **l_2363[7] = {&g_694,&g_694,&g_694,&g_694,&g_694,&g_694,&g_694};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2351[i] = 0x5C98F52BL;
                    for (g_139 = 0; (g_139 <= 4); g_139 += 1)
                    {
                        int32_t *l_2306 = &g_1778;
                        int i;
                        (*l_2306) |= (l_2274[g_139] >= (~(safe_mod_func_uint32_t_u_u((0x6FL == ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((func_120(&g_1038) , p_12), (g_347[l_2273] ^ (safe_add_func_int32_t_s_s(((l_2304 != (((l_2305 > p_11) || l_2295) , l_2304)) == p_12), 0x81AB6D3FL))))), l_2274[g_139])) <= 0x8DL)), (*g_841)))));

                        (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 254, __PRETTY_FUNCTION__));
                        if (p_11)
                            break;
                        if (g_347[l_2273])
                            break;
                        (*l_2306) = (*g_529);
                    }
                    (*g_529) |= (l_2325[7][5][3] != 18446744073709551612UL);
                    (*g_127) = 0x36E46F5EL;
                    for (g_139 = 0; (g_139 < (-16)); g_139 = safe_sub_func_int32_t_s_s(g_139, 7))
                    {
                        int8_t l_2348 = 0xBFL;
                        uint16_t ***l_2362 = &g_693;
                        int8_t *l_2368 = &g_347[l_2273];
                        int32_t *l_2370 = &g_68[2][1];
                        l_2352 &= (l_2351[3] = func_31((g_347[l_2273] , (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_2339 & (++l_2340)), (safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s(l_2295, p_12)), ((void*)0 == l_2347))))), l_2348))), (l_2339 | ((safe_rshift_func_uint16_t_u_u(((*g_982) >= 1UL), p_12)) , 9UL))));
                        l_2274[2] = p_12;
                        (*g_529) &= p_12;
                        (*l_2370) ^= ((*g_529) = ((safe_sub_func_uint32_t_u_u((0L <= (safe_div_func_int64_t_s_s(l_2348, (func_40(l_2348, (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((!p_11), p_12)), (l_2348 , ((((*l_2362) = l_2361[8]) != l_2363[2]) ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_2368) = (*l_2269)), p_11)), 0x39L)))))), l_2352, (*l_2269)) ^ (*g_694))))), l_2369)) > 0x63F3L));

                        ((g_693 == &g_694) ? (void) (0) : __assert_fail ("g_693 == &g_694", "8.c", 274, __PRETTY_FUNCTION__));
                    }
                }
                else
                {
                    int32_t *l_2371 = &l_2295;
                    uint8_t *l_2376 = &l_2340;
                    uint8_t *l_2379 = (void*)0;
                    uint8_t *l_2380 = (void*)0;
                    uint8_t *l_2381 = (void*)0;
                    uint8_t *l_2382 = &g_1802;
                    int32_t l_2393 = (-1L);
                    int32_t l_2394[3];
                    int16_t ***l_2406 = (void*)0;
                    int16_t ****l_2405 = &l_2406;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2394[i] = 0x42A8C8EDL;
                    (*g_158) = &l_2272;
                    (*g_158) = l_2371;
                    if (((~((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((*l_2382) = ((*l_2371) &= (--(*l_2376)))), 0xDBL)), (0x00E3B26DL < (safe_mul_func_int8_t_s_s(l_2385[1], (safe_lshift_func_int16_t_s_s(p_11, (safe_mul_func_uint16_t_u_u(p_12, (l_2390 = p_12)))))))))) , p_11)) >= 0xF76A442BL))
                    {
                        int32_t *l_2391[8][3] = {{&g_953,&g_440,&g_953},{&l_2295,(void*)0,(void*)0},{&l_2274[4],&g_440,&l_2274[4]},{&l_2295,&l_2295,(void*)0},{&g_953,&g_440,&g_953},{&l_2295,(void*)0,(void*)0},{&l_2274[4],&g_440,&l_2274[4]},{&l_2295,&l_2295,(void*)0}};
                        int i, j;
                        --l_2400[0];
                    }
                    else
                    {
                        (*l_2371) = l_2385[3];
                    }
                    l_2397 = ((((*l_2405) = (p_11 , l_2403)) != ((func_40((safe_rshift_func_int8_t_s_u((*l_2371), 7)), g_2409[2][5][0], (safe_sub_func_uint64_t_u_u((*g_1343), ((*l_2371) >= ((safe_div_func_uint8_t_u_u((3L > (((0xB02D502948699B4ALL != ((((**g_1889) , (void*)0) == (void*)0) && 0xD9L)) <= p_11) <= (*g_982))), 246UL)) , p_12)))), (*l_2269)) >= l_2385[1]) , l_2414)) == l_2340);

                    (((l_2406 >= &l_2404[0] && l_2406 <= &l_2404[2])) ? (void) (0) : __assert_fail ("(l_2406 >= &l_2404[0] && l_2406 <= &l_2404[2])", "8.c", 306, __PRETTY_FUNCTION__));
                }
                if (p_12)
                    break;
            }
        }


    }


    for (g_128 = (-6); (g_128 >= 16); g_128++)
    {
        int32_t *l_2421 = &g_842;
        (*l_2421) = (safe_mod_func_uint16_t_u_u((0x52EA9A7E6A49FD1DLL < p_11), (safe_mod_func_uint16_t_u_u(((*l_2269) != (-7L)), (p_11 , (*g_982))))));
    }
    return p_12;


}







static int64_t func_15(uint32_t p_16, int16_t p_17)
{
    int32_t *l_2088 = &g_68[3][0];
    uint16_t l_2091 = 0x2C9FL;
    int32_t l_2097 = (-1L);
    uint16_t **l_2112 = (void*)0;
    int16_t **l_2124 = &g_171[3];
    int32_t * const l_2129 = &g_842;
    uint64_t *l_2141[3][10] = {{&g_213,&g_527,(void*)0,&g_527,&g_213,&g_213,&g_213,&g_213,&g_527,(void*)0},{&g_527,&g_527,(void*)0,&g_213,&g_213,&g_213,(void*)0,&g_527,&g_527,(void*)0},{&g_527,&g_213,&g_213,&g_213,&g_213,&g_527,(void*)0,&g_527,&g_213,&g_213}};
    int16_t *l_2152 = &g_1170;
    int32_t l_2176 = (-1L);
    int32_t l_2177 = 0x2EE4A3E9L;
    int32_t l_2178 = 0x82C97B27L;
    int32_t l_2179 = 0xA7662354L;
    int32_t l_2180 = 1L;
    int32_t l_2181 = 0L;
    int32_t l_2183 = (-1L);
    int32_t l_2185 = 4L;
    int32_t l_2186[3][2][7] = {{{9L,0L,0x7E826E12L,0x2AFB7D94L,0x786165B3L,0x786165B3L,0x2AFB7D94L},{0x7E826E12L,0L,0x7E826E12L,0x9D20F893L,(-7L),0x786165B3L,0x9D20F893L}},{{9L,0L,0xDD5C4422L,0x2AFB7D94L,(-7L),0x6B6E0879L,0x2AFB7D94L},{9L,0L,0x7E826E12L,0x2AFB7D94L,0x786165B3L,0x786165B3L,0x2AFB7D94L}},{{0x7E826E12L,0L,0x7E826E12L,0x9D20F893L,(-7L),0x786165B3L,0x9D20F893L},{9L,0L,0xDD5C4422L,0x2AFB7D94L,(-7L),0x6B6E0879L,0x2AFB7D94L}}};
    int16_t l_2188 = (-1L);
    uint8_t l_2263 = 0x78L;
    int i, j, k;
    (*g_158) = l_2088;
    for (g_1510 = 7; (g_1510 >= 0); g_1510 -= 1)
    {
        int8_t *l_2093 = &g_167;
        int8_t *l_2094 = &g_347[2];
        int64_t *l_2095 = &g_1147;
        int64_t *l_2096[7][7][5] = {{{(void*)0,&g_157,&g_157,&g_1150[4],&g_375},{&g_1150[5],&g_375,&g_375,&g_1150[4],&g_1150[1]},{&g_1150[5],&g_375,(void*)0,&g_1035,&g_1150[4]},{(void*)0,&g_1035,&g_1150[3],(void*)0,(void*)0},{&g_1150[4],&g_1150[5],&g_157,&g_157,&g_375},{&g_1150[7],&g_157,&g_157,&g_1150[4],&g_157},{&g_1035,&g_375,&g_1035,&g_157,&g_375}},{{&g_157,(void*)0,(void*)0,&g_1150[4],&g_1035},{&g_157,(void*)0,&g_1035,&g_1150[5],&g_1150[1]},{&g_1150[1],(void*)0,(void*)0,&g_157,(void*)0},{&g_1150[4],(void*)0,&g_1035,&g_375,&g_1035},{&g_157,&g_375,&g_1150[6],&g_1150[4],(void*)0},{&g_375,&g_157,&g_1035,&g_1035,&g_375},{&g_1035,&g_1150[5],&g_375,&g_1035,&g_1150[3]}},{{&g_1150[6],&g_1035,&g_375,&g_157,&g_1035},{&g_375,&g_375,&g_1035,&g_1150[5],&g_1035},{&g_375,&g_1035,(void*)0,&g_1150[1],&g_1150[4]},{(void*)0,&g_1150[4],&g_1150[3],&g_375,(void*)0},{&g_1150[4],&g_157,&g_157,&g_1150[4],&g_1150[0]},{&g_375,&g_375,(void*)0,(void*)0,&g_1150[1]},{(void*)0,&g_375,&g_157,&g_1035,&g_1035}},{{&g_1035,&g_375,&g_1150[5],&g_1150[1],&g_375},{&g_1035,(void*)0,&g_375,&g_157,(void*)0},{&g_157,&g_375,&g_157,&g_1150[1],&g_1150[5]},{&g_157,&g_1035,(void*)0,&g_157,&g_1035},{&g_1150[4],&g_1035,&g_157,&g_1035,&g_1035},{&g_375,&g_1150[4],&g_375,(void*)0,&g_157},{&g_157,(void*)0,&g_1035,&g_1035,&g_1150[4]}},{{&g_1150[5],&g_1150[4],&g_375,&g_375,&g_1150[4]},{(void*)0,(void*)0,(void*)0,&g_375,&g_375},{&g_375,&g_1035,(void*)0,&g_375,&g_375},{&g_1035,&g_1150[4],&g_1035,&g_1150[6],(void*)0},{(void*)0,&g_1150[4],&g_1035,&g_1035,&g_1035},{(void*)0,&g_1150[5],&g_1150[1],&g_1035,&g_1035},{&g_1035,&g_1035,(void*)0,&g_157,&g_375}},{{&g_375,&g_1150[5],&g_375,&g_157,&g_1035},{(void*)0,(void*)0,&g_1035,(void*)0,&g_157},{&g_1150[5],&g_1150[4],&g_375,&g_375,&g_1150[5]},{&g_157,&g_375,&g_1150[4],&g_1035,&g_375},{&g_375,&g_1150[5],&g_1035,&g_157,(void*)0},{&g_1150[4],&g_1035,&g_157,&g_1150[4],&g_157},{&g_375,&g_375,&g_1150[5],(void*)0,(void*)0}},{{&g_1150[1],&g_375,&g_1150[1],&g_1150[5],&g_157},{&g_375,&g_375,&g_1035,&g_1035,&g_1035},{&g_375,&g_157,&g_1150[4],&g_1150[4],&g_1035},{&g_1150[1],&g_157,&g_1035,&g_1035,&g_375},{&g_157,&g_1035,&g_1150[1],&g_375,(void*)0},{&g_1150[1],(void*)0,&g_1150[5],&g_157,&g_1150[4]},{&g_157,&g_1150[1],&g_157,&g_1035,(void*)0}}};
        int32_t l_2113 = 0x5B861159L;
        int64_t l_2114 = 1L;
        int16_t *l_2116 = (void*)0;
        int16_t *l_2117[10];
        int32_t l_2118 = 0xB868E2F5L;
        int32_t *l_2119[8][10] = {{&g_440,&l_2097,&g_842,&g_1778,(void*)0,&g_139,&g_68[3][1],&g_68[3][1],&g_139,(void*)0},{&g_68[3][1],&g_440,&g_440,&g_68[3][1],(void*)0,&g_139,&g_1778,&g_842,(void*)0,&g_842},{&g_440,&g_1778,&g_440,&g_842,&g_440,&g_1778,&g_440,&g_1778,(void*)0,&l_2097},{&g_1778,&g_139,(void*)0,&g_68[3][1],&g_440,&g_440,&g_68[3][1],(void*)0,&g_139,&g_1778},{&g_68[3][1],&g_139,(void*)0,&g_1778,&g_842,&l_2097,&g_440,&l_2097,&g_842,&g_68[3][1]},{&g_68[3][1],&g_1778,&g_68[3][1],&g_440,&g_440,&g_139,&g_1778,(void*)0,(void*)0,&g_1778},{&g_440,&l_2097,&g_139,&g_139,&l_2097,&g_440,(void*)0,(void*)0,(void*)0,&g_68[3][1]},{&g_1778,&g_68[3][1],&g_68[3][1],&g_1778,(void*)0,&g_1778,&g_68[3][1],&g_68[3][1],&g_1778,&g_440}};
        int16_t **l_2126 = &g_171[4];
        int16_t ***l_2125 = &l_2126;
        uint32_t l_2167 = 18446744073709551606UL;
        uint32_t l_2211 = 0x1C002016L;
        int32_t l_2247 = 1L;
        int8_t l_2261 = (-7L);
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_2117[i] = &g_1170;
        (*g_529) = ((safe_lshift_func_int16_t_s_u(p_17, (l_2091 < p_17))) , ((0x393482309ADF986DLL > (l_2097 = ((*l_2095) &= (((*l_2094) = (safe_unary_minus_func_int8_t_s(((*l_2093) = g_1150[4])))) ^ ((*l_2088) ^= (~p_16)))))) , p_17));
        l_2097 |= ((l_2118 = ((8L != (safe_div_func_uint8_t_u_u(255UL, p_16))) , ((*g_982) = (safe_add_func_int32_t_s_s((*g_127), (safe_mod_func_uint16_t_u_u((((1UL == (((safe_rshift_func_uint8_t_u_u(p_17, func_40(p_17, (*l_2088), func_40((safe_mul_func_uint8_t_u_u(func_40(((safe_lshift_func_uint8_t_u_s(func_40((safe_mul_func_uint16_t_u_u(((~((l_2112 != (void*)0) || p_16)) , (*g_694)), (*l_2088))), l_2113, p_17, l_2113), 2)) == 0xFA3A94196BDB23A2LL), (*l_2088), l_2113, l_2114), p_17)), (*l_2088), p_17, (*l_2088)), p_16))) , p_17) , g_2115)) , (*g_694)) , 0xEE6DL), p_16))))))) ^ (*g_694));
        if ((safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((*l_2125) = l_2124) == l_2124), (safe_rshift_func_uint8_t_u_s(5UL, ((void*)0 == l_2129))))) && (safe_div_func_int16_t_s_s((((p_17 , (safe_rshift_func_uint16_t_u_u((*g_694), ((safe_div_func_int64_t_s_s((((1L > p_16) , (*l_2129)) & p_16), 1UL)) <= 0x1AE2L)))) >= 0xD9CEL) , (*g_982)), (*g_982)))), 0x90CBL)))
        {
            int16_t l_2151 = 0xBBB3L;
            int16_t l_2158 = 0xE01DL;
            for (g_953 = 2; (g_953 >= 0); g_953 -= 1)
            {
                uint16_t * const l_2154[2][9] = {{&g_2086[2],&g_2086[4],&g_2086[2],&g_2086[2],&g_2086[2],&g_2086[2],&g_2086[4],&g_2086[2],&g_2086[2]},{&g_2086[2],&g_2086[2],&g_2086[2],&g_2086[2],&g_2086[4],&g_2086[2],&g_2086[2],&g_2086[2],&g_2086[2]}};
                int32_t l_2155 = 0xE323DC4FL;
                int i, j;
                for (g_54 = 0; (g_54 <= 2); g_54 += 1)
                {
                    uint16_t *l_2153 = (void*)0;
                    int32_t l_2157[8];
                    int32_t **l_2165 = &g_1706;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_2157[i] = 0L;
                    if (((*g_127) = p_16))
                    {
                        uint8_t l_2140 = 0x18L;
                        int32_t l_2142[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2142[i] = 0xED544C46L;
                        l_2142[0] = (safe_rshift_func_int16_t_s_s(p_16, (safe_sub_func_int8_t_s_s(l_2140, ((*l_2094) = (l_2141[0][1] != (void*)0))))));
                        if ((*g_127))
                            break;
                    }
                    else
                    {
                        int32_t l_2156 = 0L;
                        int i;
                        l_2157[5] = ((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((**g_1889), g_375)), (safe_rshift_func_int8_t_s_s((l_2156 |= (((0x6DL || ((safe_sub_func_int16_t_s_s(l_2151, (((p_17 , 0x397EL) > ((func_120(l_2152) , (l_2153 != l_2154[0][4])) <= (*l_2129))) && (-1L)))) | l_2155)) , p_16) , 0xE2L)), (*l_2129))))) , (*g_841));
                    }
                    for (l_2114 = 0; (l_2114 <= 9); l_2114 += 1)
                    {
                        (*g_158) = &l_2097;


                        return l_2158;


                    }
                    for (g_1778 = 2; (g_1778 >= 0); g_1778 -= 1)
                    {
                        return g_527;
                    }
                    l_2157[1] ^= p_17;
                }
            }
        }
        else
        {
            int64_t l_2166 = 0x1405478AED6686D2LL;
            int32_t l_2170 = 0x3959B1D3L;
            int32_t l_2171 = 0x27DC44F4L;
            int32_t l_2172 = (-6L);
            int32_t l_2173 = 0xBC49D13DL;
            int32_t l_2174 = 0x124DE158L;
            int32_t l_2182 = 1L;
            int32_t l_2184 = 0x9A363C03L;
            int32_t l_2187 = 0x4446AC56L;
            int32_t l_2189 = 0L;
            int32_t l_2190 = 0x38B88211L;
            int32_t l_2191 = 6L;
            int32_t l_2192[8][1];
            uint8_t ****l_2215 = &g_481[(g_1510 + 1)];
            uint8_t *****l_2214 = &l_2215;
            uint8_t ******l_2213 = &l_2214;
            int64_t **l_2225[9][9] = {{&g_262,&l_2095,&l_2095,&g_262,&l_2096[4][4][0],&l_2096[3][3][0],&l_2096[3][3][0],&l_2096[4][4][0],&g_262},{&l_2096[4][3][2],&l_2096[2][1][3],&l_2096[4][3][2],&l_2096[1][3][1],&l_2096[4][3][2],&l_2096[2][1][3],&l_2096[4][3][2],&l_2096[1][3][1],&l_2096[4][3][2]},{&g_262,&g_262,&l_2096[3][3][0],&l_2095,&l_2096[4][4][0],&l_2096[4][4][0],&l_2095,&l_2096[3][3][0],&g_262},{(void*)0,&l_2096[1][3][1],&l_2096[5][3][0],&l_2096[1][3][1],(void*)0,&l_2096[1][3][1],&l_2096[5][3][0],&l_2096[1][3][1],(void*)0},{&l_2096[4][4][0],&l_2095,&l_2096[3][3][0],&g_262,&g_262,&l_2096[3][3][0],&l_2095,&l_2096[4][4][0],&l_2096[4][4][0]},{&l_2096[4][3][2],&l_2096[1][3][1],&l_2096[4][3][2],&l_2096[2][1][3],&l_2096[4][3][2],&l_2096[1][3][1],&l_2096[4][3][2],&l_2096[2][1][3],&l_2096[4][3][2]},{&l_2096[4][4][0],&g_262,&l_2095,&l_2095,&g_262,&l_2096[4][4][0],&l_2096[3][3][0],&l_2096[3][3][0],&l_2096[4][4][0]},{(void*)0,&l_2096[2][1][3],&l_2096[5][3][0],&l_2096[2][1][3],(void*)0,&l_2096[2][1][3],&l_2096[5][3][0],&l_2096[2][1][3],(void*)0},{&g_262,&l_2095,&l_2095,&g_262,&l_2096[4][4][0],&l_2096[3][3][0],&l_2096[3][3][0],&l_2096[4][4][0],&g_262}};
            int64_t ** const *l_2224 = &l_2225[8][1];
            uint32_t l_2248[10][7] = {{4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL},{0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L},{0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L},{4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL},{0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L},{0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L},{4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL},{0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L,0xD78B3937L,0xD2432BE0L,0xD78B3937L},{0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L},{4294967290UL,0xD78B3937L,4294967290UL,4294967290UL,0xD78B3937L,4294967290UL,4294967290UL}};
            uint16_t l_2258[9][8][1] = {{{0xD87DL},{1UL},{65530UL},{0xFB76L},{8UL},{0xAEDDL},{3UL},{0xAE54L}},{{1UL},{0xAE54L},{3UL},{0xAEDDL},{8UL},{0xFB76L},{65530UL},{1UL}},{{0xD87DL},{1UL},{65535UL},{0xFB29L},{65535UL},{1UL},{0xD87DL},{1UL}},{{65530UL},{0xFB76L},{8UL},{0xAEDDL},{3UL},{0xAE54L},{1UL},{0xAE54L}},{{3UL},{0xAEDDL},{8UL},{0xFB76L},{65530UL},{1UL},{0xD87DL},{1UL}},{{65535UL},{0xFB29L},{65535UL},{1UL},{0xD87DL},{1UL},{65530UL},{0xFB76L}},{{8UL},{0xAEDDL},{3UL},{0xAE54L},{1UL},{0xAE54L},{3UL},{0xAEDDL}},{{8UL},{0xFB76L},{65530UL},{1UL},{0xD87DL},{1UL},{65535UL},{0xFB29L}},{{65535UL},{1UL},{0xD87DL},{1UL},{65530UL},{0xFB76L},{8UL},{0xAEDDL}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2192[i][j] = 0xC3C87BABL;
            }
            l_2167--;
            --g_2193;
            for (g_1147 = 5; (g_1147 >= 0); g_1147 -= 1)
            {
                int8_t l_2208[9];
                int32_t l_2209[3];
                int32_t *l_2210 = &g_1667;
                uint64_t ** const *l_2242 = &g_1889;
                int64_t l_2262 = (-8L);
                int i;
                for (i = 0; i < 9; i++)
                    l_2208[i] = (-1L);
                for (i = 0; i < 3; i++)
                    l_2209[i] = 0L;
                (*l_2129) = (*g_127);
                if ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((*g_982), ((l_2211 ^= ((*l_2210) = (safe_add_func_int16_t_s_s(((l_2187 < func_40((l_2184 ^ (safe_div_func_uint32_t_u_u((0x6FADL <= (((l_2209[2] = (safe_mul_func_int16_t_s_s((*g_982), (((*l_2129) = ((safe_div_func_uint32_t_u_u(l_2189, 4294967295UL)) || 0x72B20218L)) > ((p_16 < 0UL) & l_2208[2]))))) == 255UL) || (*l_2088))), p_17))), p_17, p_17, p_17)) && p_16), (*g_694))))) , 0xEC7AL))) , p_17) <= (*g_982)), p_17)))
                {
                    uint8_t ******l_2217[3];
                    uint8_t *******l_2216 = &l_2217[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2217[i] = &l_2214;
                    (*l_2088) = 0xC46277B2L;
                    (*g_529) ^= (g_2212 == p_16);
                    (*g_158) = &l_2113;
                }
                else
                {
                    int64_t ***l_2226 = &l_2225[8][1];
                    uint32_t l_2227 = 0x2DE31B59L;
                    int64_t * const *l_2232[2];
                    int64_t * const * const *l_2231 = &l_2232[1];
                    int64_t * const * const **l_2230 = &l_2231;
                    int32_t l_2249 = 1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2232[i] = (void*)0;
                    if (((~p_17) || (l_2227 = (p_17 < (1UL >= func_31((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(0x35L, 7)), func_120(&g_1170))), func_40(p_16, p_16, (safe_rshift_func_int8_t_s_s((l_2224 == l_2226), 4)), p_16)))))))
                    {
                        int64_t * const * const **l_2234[7][5] = {{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231},{&l_2231,&l_2231,&l_2231,&l_2231,&l_2231}};
                        int64_t * const * const ***l_2233 = &l_2234[6][3];
                        int32_t l_2235 = 0x7AAD08DFL;
                        uint64_t *l_2246 = &g_213;
                        uint64_t ** const l_2245 = &l_2246;
                        uint64_t ** const *l_2244 = &l_2245;
                        uint64_t ** const **l_2243 = &l_2244;
                        int i, j;
                        l_2249 &= (((safe_mul_func_uint16_t_u_u((l_2192[0][0] & (((((*l_2233) = l_2230) != ((((l_2189 | 0x236BF669DB157289LL) & ((**g_1690) |= (l_2235 , ((safe_mul_func_int8_t_s_s(p_17, (safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s(((((((*l_2243) = l_2242) != (void*)0) , 0x42L) >= p_17) <= 1L), p_17)) ^ 0x241CL) <= 0x6B38L) ^ l_2227), l_2235)))) >= p_17)))) , (-7L)) , (void*)0)) < l_2247) , p_17)), p_17)) <= 0xECB4L) , l_2248[4][2]);

                        ((l_2244 == &g_1889) ? (void) (0) : __assert_fail ("l_2244 == &g_1889", "8.c", 507, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        uint16_t l_2252 = 0x7158L;
                        int32_t l_2257 = 7L;
                        (*l_2129) &= (safe_sub_func_uint64_t_u_u(((**g_1342) = (l_2252 >= ((*g_694) = ((0x75A280EAL & (safe_mul_func_int8_t_s_s((~func_40(l_2182, p_17, (p_16 , (-1L)), (+(p_17 | (safe_mul_func_int8_t_s_s(((((l_2249 = ((l_2209[0] < func_120(&g_1170)) <= p_16)) <= 65528UL) != l_2227) , p_16), p_16)))))), l_2252))) , p_17)))), p_17));

                        (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 515, __PRETTY_FUNCTION__));
                        l_2258[8][3][0]++;
                    }
                    l_2249 = 0x827E5613L;
                    if (p_17)
                        break;
                    l_2263++;
                }
            }


        }


        for (l_2113 = 0; (l_2113 <= 8); l_2113 += 1)
        {
            uint8_t l_2266 = 1UL;
            l_2266--;
            (*g_529) &= (*g_442);
            (*g_529) = (*g_841);
        }
    }
    return p_16;
}







static uint32_t func_26(uint8_t p_27, uint16_t p_28, uint16_t p_29, uint32_t p_30)
{
    int64_t l_1722[2][3][7] = {{{0L,0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL,0L,0L},{0x3C65AD835F107F4ALL,0x3C65AD835F107F4ALL,(-9L),0x3C65AD835F107F4ALL,0x3C65AD835F107F4ALL,(-9L),0x3C65AD835F107F4ALL},{0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL}},{{0L,0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL,0L,0L},{0x3C65AD835F107F4ALL,0x3C65AD835F107F4ALL,(-9L),0x3C65AD835F107F4ALL,0x3C65AD835F107F4ALL,(-9L),0x3C65AD835F107F4ALL},{0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL,0L,0L,0x3C65AD835F107F4ALL}}};
    int32_t l_1723 = 1L;
    int32_t l_1724 = 0x8A1D9F81L;
    int32_t l_1725 = (-1L);
    int32_t l_1726 = 0x4E75B66AL;
    int32_t l_1727 = 3L;
    int32_t l_1728 = 0x4727D97CL;
    int32_t l_1729 = (-1L);
    int32_t l_1730 = 0x26A9A761L;
    int32_t l_1731 = 9L;
    int32_t l_1732 = 0x5FE424E6L;
    int32_t l_1733[2][3] = {{0x2074679EL,0x2074679EL,0x2074679EL},{8L,8L,8L}};
    uint64_t l_1749 = 0xD0CB9D6E975E0C78LL;
    int8_t *l_1763[8][2] = {{(void*)0,&g_347[2]},{&g_347[1],&g_347[1]},{&g_347[1],&g_347[2]},{(void*)0,&g_347[2]},{&g_347[2],&g_347[2]},{(void*)0,&g_347[2]},{&g_347[1],&g_347[1]},{&g_347[1],&g_347[2]}};
    uint16_t **l_1820 = (void*)0;
    uint16_t l_1822 = 0xF0E0L;
    uint64_t * const *l_1842 = &g_1343;
    uint16_t l_1853 = 0x3806L;
    uint16_t l_1877 = 65535UL;
    int16_t * const l_1892 = &g_1170;
    uint16_t l_1931[2];
    uint32_t **l_1985 = &g_901[0];
    uint8_t l_2052 = 0x71L;
    int16_t l_2081 = 0x4718L;
    int8_t l_2082 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1931[i] = 1UL;
    for (g_157 = 0; (g_157 > 10); ++g_157)
    {
        int32_t *l_1718 = &g_1441;
        int32_t *l_1719 = &g_68[3][1];
        int32_t *l_1720 = &g_128;
        int32_t *l_1721[10][6] = {{(void*)0,(void*)0,&g_68[3][1],(void*)0,(void*)0,&g_68[3][1]},{&g_953,&g_953,&g_842,&g_139,&g_139,&g_68[3][1]},{&g_139,(void*)0,&g_68[2][1],&g_953,(void*)0,&g_128},{(void*)0,&g_139,&g_68[2][1],&g_139,(void*)0,&g_68[3][1]},{(void*)0,&g_139,&g_128,(void*)0,(void*)0,&g_139},{(void*)0,(void*)0,&g_139,&g_139,&g_139,&g_139},{(void*)0,(void*)0,&g_128,&g_953,&g_139,&g_68[3][1]},{&g_139,(void*)0,&g_68[2][1],&g_953,(void*)0,&g_128},{(void*)0,&g_139,&g_68[2][1],&g_139,(void*)0,&g_68[3][1]},{(void*)0,&g_139,&g_128,(void*)0,(void*)0,&g_139}};
        uint32_t l_1734 = 0x0C935C07L;
        int i, j;
        l_1734--;
    }
lbl_2055:
    for (p_28 = 0; (p_28 > 49); p_28 = safe_add_func_uint8_t_u_u(p_28, 1))
    {
        int32_t **l_1741 = &g_1711;
        int32_t l_1745 = (-3L);
        int32_t l_1746[8][8] = {{1L,1L,0xF0717E81L,0x08EF1C2DL,3L,0xF0717E81L,3L,0x08EF1C2DL},{1L,0x08EF1C2DL,1L,(-10L),0x08EF1C2DL,0x749EFF39L,0x749EFF39L,0x08EF1C2DL},{0x08EF1C2DL,0x749EFF39L,0x749EFF39L,0x08EF1C2DL,(-10L),1L,0x08EF1C2DL,1L},{0x08EF1C2DL,3L,0xF0717E81L,3L,0x08EF1C2DL,0xF0717E81L,1L,1L},{1L,3L,(-10L),(-10L),3L,1L,0x749EFF39L,3L},{1L,0x749EFF39L,(-10L),1L,(-10L),0x749EFF39L,0x749EFF39L,0xF0717E81L},{1L,(-10L),0x08EF1C2DL,0x749EFF39L,0x749EFF39L,0x08EF1C2DL,(-10L),1L},{0xF0717E81L,0x749EFF39L,0L,0x4EE54EA4L,0x749EFF39L,0x4EE54EA4L,0L,0x749EFF39L}};
        int64_t l_1748[3][2][2] = {{{(-8L),0x89025A3ACF31A761LL},{(-9L),(-9L)}},{{(-9L),0x89025A3ACF31A761LL},{(-8L),0x9D91C6BA5705D3B4LL}},{{0x89025A3ACF31A761LL,0x9D91C6BA5705D3B4LL},{(-8L),0x89025A3ACF31A761LL}}};
        uint32_t *l_1826 = &g_755;
        int32_t *l_1848 = &g_1441;
        int32_t *l_1849 = &l_1745;
        int32_t *l_1850 = &l_1728;
        int32_t *l_1851[1];
        int64_t l_1852 = 0x6613431D37E5FD63LL;
        const uint8_t **l_1857 = (void*)0;
        const uint8_t ***l_1856[6][10][4] = {{{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857}},{{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,(void*)0,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,(void*)0,&l_1857},{(void*)0,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857}},{{&l_1857,&l_1857,&l_1857,&l_1857},{(void*)0,&l_1857,(void*)0,&l_1857},{(void*)0,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{(void*)0,&l_1857,(void*)0,&l_1857},{(void*)0,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857}},{{&l_1857,&l_1857,&l_1857,&l_1857},{(void*)0,&l_1857,(void*)0,&l_1857},{(void*)0,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{(void*)0,&l_1857,(void*)0,&l_1857},{(void*)0,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857}},{{&l_1857,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,(void*)0,&l_1857},{&l_1857,&l_1857,(void*)0,(void*)0},{&l_1857,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,(void*)0,&l_1857},{&l_1857,&l_1857,(void*)0,(void*)0}},{{&l_1857,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,(void*)0,&l_1857},{&l_1857,&l_1857,(void*)0,(void*)0},{&l_1857,&l_1857,&l_1857,(void*)0},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,&l_1857,&l_1857},{&l_1857,&l_1857,(void*)0,&l_1857},{&l_1857,&l_1857,(void*)0,(void*)0}}};
        uint8_t ****l_1858 = &g_486;
        uint64_t **l_1886 = &g_1343;
        uint64_t **l_1890 = &g_1343;
        uint64_t **l_1891 = &g_1343;
        int32_t l_1893 = (-1L);
        uint8_t l_1901[6][9][1] = {{{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL}},{{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L}},{{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL}},{{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L}},{{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL}},{{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L},{0UL},{0xC3L}}};
        int8_t l_1909 = (-1L);
        const int32_t l_1942 = 0L;
        uint16_t l_1955 = 7UL;
        int64_t **l_1999[2][5][4] = {{{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262}},{{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262},{&g_262,&g_262,&g_262,&g_262}}};
        int64_t ***l_1998[3][8] = {{&l_1999[0][1][2],&l_1999[1][4][0],&l_1999[0][1][2],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[0][1][2],&l_1999[1][4][0],&l_1999[0][1][2]},{&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[0][1][2],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[0][1][2]},{&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[0][1][2],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[1][4][0],&l_1999[1][4][0]}};
        uint16_t **l_2014 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1851[i] = &l_1723;
        for (g_440 = 15; (g_440 > (-23)); g_440--)
        {
            int32_t ***l_1742[4][2][2];
            int32_t *l_1744[1];
            int16_t l_1747 = 0x4B04L;
            uint32_t l_1845 = 0x4ADA5ADFL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1742[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 1; i++)
                l_1744[i] = &l_1724;
            g_1743 = l_1741;

            ((g_1743 == &g_1711) ? (void) (0) : __assert_fail ("g_1743 == &g_1711", "8.c", 635, __PRETTY_FUNCTION__));
            l_1746[6][0] &= (l_1745 |= (*g_127));
            l_1749++;
            if (func_31(((*g_635) ^= 0x9A73D13EL), p_27))
            {
                uint64_t l_1752 = 0UL;
                int8_t *l_1764 = &g_347[2];
                int32_t l_1779 = 0x30F3FF8AL;
                if ((&p_28 == (void*)0))
                {
                    --l_1752;
                    for (g_1062 = 12; (g_1062 <= (-20)); g_1062 = safe_sub_func_uint8_t_u_u(g_1062, 8))
                    {
                        int32_t l_1777 = 0x88EAF87EL;
                        l_1779 |= ((((l_1745 = (safe_add_func_uint32_t_u_u((((l_1726 = ((((((*g_982) = (((safe_lshift_func_uint8_t_u_s((p_27++), (l_1763[6][1] == l_1764))) == ((l_1748[2][1][0] , (safe_sub_func_uint8_t_u_u(0x82L, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((!(p_29 < ((*g_529) = l_1777))) & 0x0AL) , (func_40(p_29, p_29, l_1752, p_30) ^ l_1746[4][6])), 0xB0CFL)), p_29)), 0x75CFL)), 0x4754L)), p_30))))) < l_1777)) ^ l_1748[1][0][1])) != l_1733[1][1]) < (*g_841)) , l_1777) , 0UL)) | p_28) , l_1752), 1UL))) , 0x6B91L) > g_1778) != 0UL);
                        (*g_158) = &l_1732;
                        (*g_158) = &g_128;
                    }


                }
                else
                {
                    const uint16_t *l_1781[10] = {&g_1190,&g_695,&g_1190,&g_1190,&g_695,&g_1190,&g_1190,&g_695,&g_1190,&g_1190};
                    const uint16_t **l_1780 = &l_1781[0];
                    const uint16_t **l_1783 = &l_1781[0];
                    const uint16_t ***l_1782 = &l_1783;
                    int i;
                    (*g_127) = (((*l_1782) = (l_1729 , l_1780)) != (void*)0);
                }


                for (g_1147 = (-5); (g_1147 <= (-16)); g_1147 = safe_sub_func_uint8_t_u_u(g_1147, 3))
                {
                    (*g_158) = &l_1746[4][7];
                }


                return p_29;


            }
            else
            {
                uint16_t l_1788 = 0xBD38L;
                uint16_t ***l_1821 = &g_693;
                int64_t *l_1825 = &l_1748[0][0][1];
                uint32_t *l_1828 = &g_835;
                uint32_t **l_1827 = &l_1828;
                int32_t l_1843[5][5][9] = {{{(-10L),0x614BA3FAL,(-4L),1L,0x51D7F258L,0x8CD62998L,(-1L),0x00A64D47L,(-1L)},{0x9CD48547L,0x8CD62998L,(-7L),0xC0574993L,(-3L),1L,1L,0x0F0DEE9BL,0L},{0L,0L,0x51D7F258L,0L,(-9L),0L,0L,0x7A8CD0F3L,(-4L)},{(-4L),1L,1L,0x3970AD07L,0xADACCFB6L,3L,0L,0x3EF4ADE8L,(-10L)},{(-3L),1L,1L,1L,(-7L),1L,0x614BA3FAL,(-3L),0xF58AA313L}},{{0L,0L,(-3L),0x3EF4ADE8L,0x3EF4ADE8L,(-3L),0L,0L,1L},{1L,0x8CD62998L,0x1798A126L,1L,0L,0x91E681B8L,(-1L),(-1L),(-1L)},{4L,0x614BA3FAL,0L,0x3B7CAFD1L,2L,0x919CF785L,0x00A64D47L,0xF58AA313L,1L},{0L,0x7A8CD0F3L,0x8CD62998L,0xA80F545AL,1L,7L,0xF0F2504BL,(-1L),0L},{0x919CF785L,(-9L),(-7L),0xF0F2504BL,1L,0x3EF4ADE8L,(-9L),0x91E681B8L,(-4L)}},{{0L,(-1L),0x9CD48547L,0x0F0DEE9BL,1L,0x8CD62998L,(-9L),0xC7A41F3BL,3L},{0L,0x3B7CAFD1L,1L,0L,0x919CF785L,0x0CCEA24FL,1L,0x0CCEA24FL,0x919CF785L},{0x00A64D47L,0x7A8CD0F3L,0x7A8CD0F3L,0x00A64D47L,0x9CD48547L,0L,1L,0x614BA3FAL,(-7L)},{0xB4E46E25L,0L,0x614BA3FAL,(-1L),0x3F1F6BC7L,(-9L),(-3L),0x37996555L,(-1L)},{0xA80F545AL,0xC7A41F3BL,0x8CD62998L,0x5719C1A0L,0x9CD48547L,0x614BA3FAL,0xAA56DD29L,0xFA3CA5FCL,0x91E681B8L}},{{7L,0xD5ECBCBBL,0L,(-1L),0x919CF785L,(-9L),0xA80F545AL,0xF58AA313L,0x9CD48547L},{0xC7A41F3BL,0x919CF785L,1L,0x3F1F6BC7L,1L,4L,1L,0x0F0DEE9BL,0L},{0x37996555L,0x614BA3FAL,1L,0xC0574993L,1L,7L,0x919CF785L,1L,0x3970AD07L},{0x5C73011FL,0x5719C1A0L,0L,1L,(-3L),1L,0L,0x5719C1A0L,0x5C73011FL},{0xF0F2504BL,2L,0x8CD62998L,0xADACCFB6L,0x8CD62998L,0x3970AD07L,7L,0x7A8CD0F3L,1L}},{{1L,1L,1L,(-3L),0xA80F545AL,(-1L),(-4L),1L,4L},{1L,0x8CD62998L,7L,(-9L),0x0CCEA24FL,0xC7A41F3BL,1L,(-1L),(-7L)},{0x0CCEA24FL,0x9CD48547L,0L,0xD5ECBCBBL,0x37996555L,(-1L),0xC0574993L,7L,(-4L)},{0x3EF4ADE8L,0xD5ECBCBBL,1L,(-3L),2L,0x9CD48547L,0x3F1F6BC7L,7L,0L},{0x5C73011FL,0L,0x1798A126L,1L,0xB4E46E25L,(-9L),(-1L),(-1L),(-9L)}}};
                int i, j, k;
                for (g_167 = (-27); (g_167 <= 8); g_167 = safe_add_func_int8_t_s_s(g_167, 2))
                {
                    uint32_t l_1800 = 0xB1B23B18L;
                    int32_t l_1819[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1819[i] = 6L;
                    if (p_28)
                    {
                        if (p_30)
                            break;
                        ++l_1788;
                    }
                    else
                    {
                        uint32_t l_1799 = 0UL;
                        uint8_t *l_1801 = &g_1802;
                        uint32_t *l_1817 = &g_755;
                        int32_t l_1818 = 7L;
                        l_1819[1] = (safe_add_func_int64_t_s_s(((l_1818 = (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_1799, (**g_900))), ((*l_1801) = (p_27 ^= l_1800)))), ((*g_1343) = ((safe_rshift_func_uint8_t_u_s(p_29, ((safe_lshift_func_uint16_t_u_s(p_30, 0)) , p_29))) | ((*g_529) = ((safe_lshift_func_int8_t_s_u(p_29, (safe_sub_func_uint16_t_u_u(p_30, ((*g_694) = (((safe_mul_func_int16_t_s_s((((*l_1817) = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_29, l_1799)) || 0xB700DECAEE239B4DLL), p_28))) != (-7L)), 9L)) == 0x85L) || 0xE8L)))))) >= l_1800))))))) ^ p_29), g_897));
                    }
                }
                if ((((l_1745 , ((*l_1821) = l_1820)) != (void*)0) | (((l_1746[3][2] , ((l_1822 , (((safe_mul_func_int16_t_s_s((func_40(((*l_1825) = p_30), ((((*g_900) != ((*l_1827) = l_1826)) >= (l_1746[6][0] > l_1788)) || (-1L)), l_1746[6][0], l_1745) == p_29), p_28)) & 2UL) >= p_27)) != l_1732)) | 0x4114EBE1L) || 0x94BAE3772D8C296ELL)))
                {
                    (*g_529) = ((void*)0 != (*g_1743));
                    return p_30;
                }
                else
                {
                    uint64_t * const *l_1841 = &g_1343;
                    for (g_1778 = 2; (g_1778 >= 0); g_1778 -= 1)
                    {
                        int32_t * const l_1831 = &g_1832;
                        int32_t * const *l_1830 = &l_1831;
                        int32_t * const **l_1829 = &l_1830;
                        if (p_30)
                            break;
                        (*g_1833) = ((*l_1829) = &g_1706);

                        ((l_1830 == &g_1706) ? (void) (0) : __assert_fail ("l_1830 == &g_1706", "8.c", 725, __PRETTY_FUNCTION__));
                    }
                    (*g_529) = ((*g_694) ^ ((~l_1724) | ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((((0x35L || l_1745) , p_29) & (safe_mul_func_uint8_t_u_u(p_27, ((&g_1743 == &l_1741) != l_1788)))) , p_29) | l_1788) | (-1L)), p_27)), (*g_1343))) < l_1745)));
                    l_1842 = l_1841;
                    for (g_695 = 0; (g_695 <= 2); g_695 += 1)
                    {
                        int16_t l_1844 = 0x6C53L;
                        l_1845++;
                        return p_29;
                    }
                }

                ((g_693 == 0) ? (void) (0) : __assert_fail ("g_693 == 0", "8.c", 737, __PRETTY_FUNCTION__));
                ((l_1828 == &g_755) ? (void) (0) : __assert_fail ("l_1828 == &g_755", "8.c", 738, __PRETTY_FUNCTION__));
            }

            ((g_693 == 0) ? (void) (0) : __assert_fail ("g_693 == 0", "8.c", 741, __PRETTY_FUNCTION__));
        }
        l_1853++;
    }
    if (p_27)
    {
        int32_t *l_2043 = &l_1728;
        int32_t l_2044[1][3];
        int32_t *l_2045 = &l_2044[0][2];
        int32_t *l_2046 = &g_1778;
        int32_t *l_2047 = &l_1723;
        int32_t *l_2048 = &l_1729;
        int32_t *l_2049 = &l_1728;
        int32_t *l_2050[3];
        int32_t l_2051 = 0x81006DC1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2044[i][j] = 1L;
        }
        for (i = 0; i < 3; i++)
            l_2050[i] = &l_1728;
        --l_2052;
        if (l_1853)
            goto lbl_2055;
    }
    else
    {
        int32_t l_2063[7][7] = {{0xF639D241L,0x160ED1AFL,0x160ED1AFL,0xF639D241L,0x9B12F1D4L,0xF639D241L,0x160ED1AFL},{0x198B6F58L,0x198B6F58L,0x160ED1AFL,(-6L),0x160ED1AFL,0x198B6F58L,0x198B6F58L},{0x198B6F58L,0x160ED1AFL,(-6L),0x160ED1AFL,0x198B6F58L,0x198B6F58L,0x160ED1AFL},{0xF639D241L,0x9B12F1D4L,0xF639D241L,0x160ED1AFL,0x160ED1AFL,0xF639D241L,0x9B12F1D4L},{0x160ED1AFL,0x9B12F1D4L,(-6L),(-6L),0x9B12F1D4L,0x160ED1AFL,0x9B12F1D4L},{0xF639D241L,0x160ED1AFL,0x160ED1AFL,0xF639D241L,0x9B12F1D4L,0xF639D241L,0x160ED1AFL},{0x198B6F58L,0x198B6F58L,(-6L),0x198B6F58L,(-6L),0xF639D241L,0xF639D241L}};
        int64_t l_2064 = 0xF67B546B69338E5FLL;
        int i, j;
        for (g_1038 = 0; (g_1038 > (-7)); g_1038 = safe_sub_func_int8_t_s_s(g_1038, 9))
        {
            const int32_t l_2058[1][3][2] = {{{0xAC546368L,7L},{0xAC546368L,0xAC546368L},{7L,0xAC546368L}}};
            int32_t l_2059[2];
            int32_t *l_2060 = &g_68[3][1];
            int32_t *l_2061 = &l_1723;
            int32_t *l_2062[6];
            int32_t l_2065[5];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2059[i] = (-4L);
            for (i = 0; i < 6; i++)
                l_2062[i] = &g_440;
            for (i = 0; i < 5; i++)
                l_2065[i] = 1L;
            if (l_2058[0][2][0])
                break;
            g_2066[0][0]--;
            (*l_2061) = (safe_lshift_func_uint8_t_u_u(p_27, 5));
            for (g_842 = 0; g_842 < 5; g_842 += 1)
            {
                g_347[g_842] = (-1L);
            }
        }
        (*g_529) = 0x1DD290F0L;
    }
    (*g_127) = (safe_lshift_func_int8_t_s_s((((safe_div_func_int64_t_s_s((((l_1724 || 1L) , l_2082) > l_1723), 0x22094215F2520D24LL)) != 0L) && 0xC702A619L), 6));
    return l_1729;
}







static uint8_t func_31(uint32_t p_32, int32_t p_33)
{
    const int64_t l_1714 = 0xC9025CD0F6FD62ADLL;
    (*g_127) = ((*g_1343) > 0xA43AFB5A04A43A9ALL);
    (*g_158) = &p_33;


    (*g_158) = &p_33;
    return p_33;


}







static int64_t func_40(int64_t p_41, int32_t p_42, int32_t p_43, int32_t p_44)
{
    uint32_t * const **l_1692 = &g_1690;
    uint32_t * const ***l_1691 = &l_1692;
    int32_t *l_1693 = &g_897;
    int32_t **l_1694 = &g_896;
    int32_t **l_1695 = &g_896;
    int32_t **l_1696 = &g_896;
    int32_t *l_1697 = &g_1667;
    int32_t **l_1698 = &g_896;
    int32_t **l_1699 = &g_896;
    int32_t **l_1700 = (void*)0;
    int32_t **l_1701 = &g_896;
    int32_t **l_1702 = &g_896;
    int32_t **l_1703 = &g_896;
    int32_t **l_1704 = &g_896;
    int32_t **l_1705 = &g_896;
    uint32_t * const **l_1707 = &g_1690;
    int32_t l_1708 = 0xDD8247CCL;
    int32_t **l_1709 = (void*)0;
    int32_t **l_1710[7] = {&g_896,&g_896,&g_896,&g_896,&g_896,&g_896,&g_896};
    uint32_t l_1712 = 0UL;
    int32_t *l_1713 = &g_842;
    int i;
    l_1713 = &p_42;

    ((l_1713 == &p_42) ? (void) (0) : __assert_fail ("l_1713 == &p_42", "8.c", 854, __PRETTY_FUNCTION__));
    return p_42;
}







static int64_t func_51(uint64_t p_52, uint16_t p_53)
{
    uint16_t **l_1445 = &g_694;
    int32_t l_1446[6][1];
    uint32_t **l_1448 = &g_901[0];
    uint32_t **l_1450 = &g_901[0];
    int8_t l_1457 = 1L;
    int32_t l_1511 = (-7L);
    int32_t l_1560 = 0x4208DEAFL;
    int32_t l_1561 = (-1L);
    int32_t l_1564 = 0x23021524L;
    int32_t l_1565 = 4L;
    int32_t l_1566 = (-6L);
    int32_t l_1567 = 0xEF81807CL;
    int32_t l_1568[2];
    int32_t l_1580[7][9] = {{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L},{0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L,0x57177156L,1L,0x57177156L}};
    uint8_t ****l_1603 = &g_481[7];
    uint64_t **l_1606 = &g_1343;
    uint64_t l_1623[7][10] = {{4UL,0x42D31E2629BE7B33LL,0x301B463030FA2719LL,0xC072D921380B9E95LL,0xBBACB80878D8B380LL,0x16F065B4F7D1B952LL,0x16F065B4F7D1B952LL,0xBBACB80878D8B380LL,0xC072D921380B9E95LL,0x301B463030FA2719LL},{4UL,4UL,0x16F065B4F7D1B952LL,0x42D31E2629BE7B33LL,0x35BDC4E44DF1F842LL,0xBBACB80878D8B380LL,0x301B463030FA2719LL,18446744073709551615UL,0xC072D921380B9E95LL,0xC072D921380B9E95LL},{0xBBACB80878D8B380LL,0x301B463030FA2719LL,18446744073709551615UL,0xC072D921380B9E95LL,0xC072D921380B9E95LL,18446744073709551615UL,0x301B463030FA2719LL,0xBBACB80878D8B380LL,0x35BDC4E44DF1F842LL,0x42D31E2629BE7B33LL},{0x35BDC4E44DF1F842LL,4UL,0x42D31E2629BE7B33LL,0x301B463030FA2719LL,0xC072D921380B9E95LL,0xBBACB80878D8B380LL,0x16F065B4F7D1B952LL,0x16F065B4F7D1B952LL,0xBBACB80878D8B380LL,0xC072D921380B9E95LL},{0xC072D921380B9E95LL,0x42D31E2629BE7B33LL,0x42D31E2629BE7B33LL,0xC072D921380B9E95LL,0x35BDC4E44DF1F842LL,0x16F065B4F7D1B952LL,18446744073709551615UL,0xBBACB80878D8B380LL,4UL,0x301B463030FA2719LL},{0xC072D921380B9E95LL,4UL,18446744073709551615UL,0x42D31E2629BE7B33LL,0xBBACB80878D8B380LL,0xBBACB80878D8B380LL,0x42D31E2629BE7B33LL,18446744073709551615UL,4UL,0xC072D921380B9E95LL},{0x35BDC4E44DF1F842LL,0x301B463030FA2719LL,0x16F065B4F7D1B952LL,0xC072D921380B9E95LL,4UL,18446744073709551615UL,0x42D31E2629BE7B33LL,0xBBACB80878D8B380LL,0xBBACB80878D8B380LL,0x42D31E2629BE7B33LL}};
    uint8_t *****l_1650 = &l_1603;
    uint8_t ******l_1649 = &l_1650;
    const int32_t l_1653 = 2L;
    uint64_t l_1685 = 0x26EE18DE5278F334LL;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_1446[i][j] = 1L;
    }
    for (i = 0; i < 2; i++)
        l_1568[i] = (-4L);
    if ((&g_694 == l_1445))
    {
        uint32_t **l_1447 = &g_901[8];
        uint32_t ***l_1449[2][7][10] = {{{&l_1447,&l_1448,&g_903[2],&l_1447,&l_1447,&g_903[0],&l_1447,&l_1447,&l_1448,&l_1447},{&l_1447,&g_903[1],&g_903[1],&l_1448,&g_903[1],&g_903[1],&l_1447,(void*)0,&g_903[1],&l_1448},{&g_903[1],&l_1447,(void*)0,&g_903[1],&l_1448,&l_1448,&g_903[1],&l_1447,(void*)0,(void*)0},{&l_1448,&l_1447,&g_903[1],&l_1447,&l_1447,&g_903[1],&l_1447,&l_1448,&g_903[2],&l_1447},{&l_1447,&l_1447,&g_903[2],&l_1448,(void*)0,&l_1448,&l_1448,(void*)0,&l_1447,&l_1447},{&g_903[2],&l_1447,&g_903[2],(void*)0,&l_1448,(void*)0,&g_903[2],&l_1447,&g_903[2],&g_903[2]},{&l_1448,&l_1447,&g_903[1],&l_1448,&l_1447,&g_903[2],&l_1447,&l_1448,&g_903[2],&l_1448}},{{&l_1447,&g_903[2],&g_903[1],&l_1448,&g_903[2],&g_903[2],&l_1448,&g_903[1],&g_903[2],&l_1447},{&g_903[1],&l_1448,&g_903[2],(void*)0,&l_1447,&l_1447,&g_903[1],&l_1447,&l_1447,&g_903[2]},{&l_1448,&l_1447,(void*)0,&l_1448,&l_1447,&g_903[2],&l_1447,&l_1448,(void*)0,&l_1447},{&l_1447,&g_903[1],&l_1448,&l_1447,&g_903[2],&l_1448,&l_1447,&g_903[2],&g_903[1],&l_1448},{(void*)0,&l_1448,&g_903[2],&l_1447,&l_1447,&l_1448,&l_1448,&l_1447,&l_1447,&g_903[2]},{&l_1447,&l_1447,&g_903[1],&l_1447,&l_1448,&g_903[2],&l_1447,&l_1447,&g_903[0],&l_1447},{&l_1448,(void*)0,&l_1448,&l_1448,(void*)0,&g_903[2],&g_903[1],&g_903[2],&g_903[1],&g_903[2]}}};
        int32_t l_1460 = (-3L);
        int8_t *l_1461 = &g_347[2];
        int8_t **l_1462 = &g_1459;
        int32_t l_1463 = (-3L);
        int32_t l_1464 = (-9L);
        int32_t l_1476 = 1L;
        uint16_t l_1501 = 0x7E31L;
        int i, j, k;
        (*g_127) = (((((((*g_982) = l_1446[2][0]) , (void*)0) == (g_262 = (void*)0)) && ((l_1446[2][0] , l_1447) != (l_1450 = l_1448))) , (((safe_div_func_int16_t_s_s(p_53, (*g_982))) & 0xB3064AD7L) , (void*)0)) == g_1458);

        ((g_262 == 0) ? (void) (0) : __assert_fail ("g_262 == 0", "8.c", 909, __PRETTY_FUNCTION__));
lbl_1467:
        (*g_127) = (*g_442);
lbl_1477:
        for (g_1190 = 0; (g_1190 <= 4); ++g_1190)
        {
            int64_t l_1474[4];
            int32_t l_1475 = 0xF2B70A05L;
            int i;
            for (i = 0; i < 4; i++)
                l_1474[i] = 0xE9A5BC338B86E363LL;
            if (g_1190)
                goto lbl_1467;
            if (g_443)
                goto lbl_1477;
            if (p_52)
                continue;
            l_1476 &= ((safe_mod_func_uint8_t_u_u((((*l_1461) = p_52) , ((l_1446[3][0] ^ (((safe_rshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((((l_1474[1] = 0x3CL) < ((((*l_1461) = l_1464) && p_53) , func_120(&g_123))) ^ 65531UL), ((*g_694) &= ((l_1460 = l_1475) ^ 1UL)))) , p_53), 0)) , 0xAFC3EFCC4B51A272LL) <= p_52)) > 0x908BL)), l_1475)) , l_1474[1]);

            (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 928, __PRETTY_FUNCTION__));
        }
        for (g_527 = 0; (g_527 == 52); g_527 = safe_add_func_uint16_t_u_u(g_527, 3))
        {
            uint32_t l_1483 = 0x379423E7L;
            for (p_52 = 0; (p_52 <= 9); p_52 += 1)
            {
                int32_t *l_1486 = &g_1441;
                int32_t l_1503 = 0x87F6520FL;
                for (g_139 = 9; (g_139 >= 3); g_139 -= 1)
                {
                    for (g_755 = 0; (g_755 <= 0); g_755 += 1)
                    {
                        int32_t *l_1480 = &g_953;
                        int32_t *l_1481 = &g_68[5][0];
                        int32_t *l_1482[9] = {&g_953,&l_1476,&g_953,&g_953,&l_1476,&g_953,&g_953,&l_1476,&g_953};
                        int i, j;
                        l_1483--;
                        (*g_158) = l_1486;
                        (*g_529) = (*l_1486);
                    }
                    for (g_1035 = 7; (g_1035 >= 0); g_1035 -= 1)
                    {
                        (*g_529) = p_53;
                        if (l_1464)
                            continue;
                    }
                }
                if ((*l_1486))
                {
                    int16_t l_1495[9][8] = {{1L,0L,0xDA2CL,0L,1L,0xB6CBL,0x9813L,0xDA2CL},{0L,1L,0L,0xC2B2L,0xD568L,0L,0xB6CBL,0L},{0x2321L,(-6L),0L,(-1L),0x2EB5L,1L,0x9813L,0x9813L},{0xD568L,(-6L),0xDA2CL,0xDA2CL,(-6L),0xD568L,0x08D1L,0xC2B2L},{1L,0x2EB5L,(-1L),0L,(-6L),0x2321L,0x2EB5L,0L},{0L,0xD568L,0xC2B2L,0L,1L,0L,(-6L),0xC2B2L},{0xB6CBL,1L,0L,0xDA2CL,0L,1L,0xB6CBL,0x9813L},{0L,0x9813L,(-6L),(-1L),0x08D1L,7L,0L,0L},{0xD568L,0xADADL,(-5L),0xC2B2L,0x08D1L,0xD568L,(-6L),0xDA2CL}};
                    int32_t l_1502 = (-1L);
                    int i, j;
                    for (g_1441 = 0; (g_1441 <= 1); g_1441 += 1)
                    {
                        int32_t l_1498 = 0x557AB32DL;
                        int32_t *l_1504 = &g_440;
                        int i, j;
                        g_68[(g_1441 + 1)][g_1441] ^= ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((p_53 || l_1483), (l_1495[4][3] = (*g_694)))) & ((((*g_1343) == 0x69CDE64C7E6CFC5DLL) , (p_52 > ((safe_sub_func_uint16_t_u_u(((l_1498 , (safe_mul_func_int16_t_s_s(l_1463, ((*l_1486) & p_52)))) , p_53), (**g_693))) & l_1457))) , l_1501)), p_52)), l_1502)) != p_53), p_52)) , l_1495[4][3]);
                        (*l_1504) ^= (l_1503 = (*g_127));
                    }
                }
                else
                {
                    int32_t l_1507 = 0x806EEAF9L;
                    if ((l_1483 != (*g_1343)))
                    {
                        uint64_t *l_1521 = &g_213;
                        int i;
                        (*l_1486) = (l_1476 , ((((*g_529) = (((*g_982) = (l_1501 , (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((l_1511 ^= ((l_1507 >= 0x4DL) , 0xD4L)))) && (safe_lshift_func_uint16_t_u_u((p_53 , p_53), (safe_div_func_uint64_t_u_u(((*l_1521) = ((*g_694) , ((*g_1343) == p_52))), 0x078FE328E85398A5LL))))), l_1446[3][0])))) , 0x88028B16L)) ^ l_1483) || l_1507));
                    }
                    else
                    {
                        return p_52;
                    }
                }
            }
        }


    }
    else
    {
        uint32_t l_1535 = 18446744073709551607UL;
        int32_t l_1543 = 0xDBABD72EL;
        int32_t l_1562[1][10] = {{0xC221E2F6L,6L,0xC221E2F6L,6L,0xC221E2F6L,6L,0xC221E2F6L,6L,0xC221E2F6L,6L}};
        uint64_t l_1569 = 18446744073709551613UL;
        uint16_t l_1572[7][9] = {{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL},{0xC27CL,0UL,6UL,0UL,0xC27CL,6UL,0xF7B1L,0xF7B1L,6UL}};
        uint8_t **l_1591 = (void*)0;
        int8_t *l_1683 = &l_1457;
        int i, j;
        for (g_1035 = 0; (g_1035 == 18); g_1035++)
        {
            const int32_t **l_1532 = &g_442;
            int32_t l_1538 = (-6L);
            int32_t l_1549 = 0x722023C8L;
            int32_t l_1550 = (-6L);
            int32_t l_1563[10][10] = {{0x430E050FL,0x430E050FL,0x954692E4L,0x430E050FL,0x430E050FL,0x954692E4L,0x430E050FL,0x430E050FL,0x954692E4L,0x430E050FL},{0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL},{0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL},{0x430E050FL,0x430E050FL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL},{0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL},{0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L},{0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL},{0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL},{0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L,0x0224358AL,0x954692E4L,0x954692E4L},{0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL,0x0224358AL,0x430E050FL,0x0224358AL}};
            uint8_t **l_1592[5][6][4] = {{{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,(void*)0,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,(void*)0,(void*)0}},{{&g_185,&g_185,&g_185,&g_185},{&g_185,(void*)0,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,(void*)0,(void*)0,&g_185}},{{&g_185,&g_185,&g_185,&g_185},{&g_185,(void*)0,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,(void*)0},{&g_185,(void*)0,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185}},{{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,(void*)0,&g_185,&g_185},{&g_185,&g_185,(void*)0,&g_185}},{{&g_185,&g_185,&g_185,(void*)0},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,(void*)0},{&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185},{&g_185,(void*)0,&g_185,&g_185}}};
            int16_t *l_1598 = &g_1170;
            uint32_t l_1604 = 0UL;
            uint32_t ***l_1622[6][8][3] = {{{&l_1448,(void*)0,&g_903[2]},{&g_903[2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_903[2]},{(void*)0,&l_1450,&l_1448},{(void*)0,&g_903[2],&l_1448},{&g_903[2],&g_903[2],&g_903[2]},{&g_903[2],&g_903[2],(void*)0},{&g_903[2],&l_1450,&g_903[2]}},{{&g_903[2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_903[2]},{(void*)0,&l_1450,&l_1448},{(void*)0,&g_903[2],&l_1448},{&g_903[2],&g_903[2],&g_903[2]},{&g_903[2],&g_903[2],(void*)0},{&g_903[2],&l_1450,&g_903[2]},{&g_903[2],(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_903[2]},{(void*)0,&l_1450,&l_1448},{(void*)0,&g_903[2],&l_1448},{&g_903[2],&g_903[2],&g_903[2]},{&g_903[2],&g_903[2],(void*)0},{&g_903[2],&l_1450,&g_903[2]},{&g_903[2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_903[2]}},{{(void*)0,&l_1450,&l_1448},{(void*)0,&g_903[2],&l_1448},{&g_903[2],&g_903[2],&g_903[2]},{&g_903[2],&g_903[2],(void*)0},{&g_903[2],&l_1450,&g_903[2]},{&g_903[2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_903[2]},{(void*)0,&l_1450,&l_1448}},{{(void*)0,&g_903[2],&g_903[2]},{&l_1450,(void*)0,&g_903[2]},{&g_903[2],&l_1448,&l_1450},{&g_903[2],(void*)0,&l_1448},{&l_1450,&l_1450,&l_1450},{&l_1450,&l_1450,&g_903[2]},{&g_903[2],(void*)0,&g_903[2]},{&l_1450,&l_1448,&g_903[2]}},{{&l_1450,(void*)0,&g_903[2]},{&g_903[2],&l_1448,&l_1450},{&g_903[2],(void*)0,&l_1448},{&l_1450,&l_1450,&l_1450},{&l_1450,&l_1450,&g_903[2]},{&g_903[2],(void*)0,&g_903[2]},{&l_1450,&l_1448,&g_903[2]},{&l_1450,(void*)0,&g_903[2]}}};
            uint8_t l_1684[1][9] = {{0x2FL,0x1AL,0x1AL,0x2FL,0x1AL,0x1AL,0x2FL,0x1AL,0x1AL}};
            int i, j, k;
            (*g_529) &= ((safe_div_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((+p_52), (safe_sub_func_uint32_t_u_u(0xA412A9C1L, p_53)))) & (*g_982)), p_52)) > (safe_mul_func_uint8_t_u_u(p_52, p_52)));
            (*l_1532) = &g_443;
        }
    }


    ((g_262 == &g_157 || g_262 == 0) ? (void) (0) : __assert_fail ("g_262 == &g_157 || g_262 == 0", "8.c", 1018, __PRETTY_FUNCTION__));
    return l_1685;
}







static int32_t func_59(uint8_t p_60, int32_t p_61, int32_t p_62, int8_t p_63)
{
    uint16_t l_66 = 0x2E0FL;
    int32_t l_84 = 0x3F7CFEB4L;
    int32_t l_86[1];
    int32_t l_1285[2][1];
    uint16_t l_1294 = 6UL;
    int32_t **l_1310 = &g_896;
    uint32_t l_1335 = 0xD74527F9L;
    uint64_t l_1374[2][6][10] = {{{0xE0D32A5EEE0C5A5ELL,0x706407F7C2648029LL,1UL,0UL,0xC596910905851E72LL,0x5E20423C3E28757FLL,0xE0D32A5EEE0C5A5ELL,1UL,18446744073709551611UL,4UL},{1UL,0xB61E30731A566845LL,18446744073709551607UL,0xA444371107FA9B05LL,8UL,0x5E20423C3E28757FLL,0x706407F7C2648029LL,8UL,18446744073709551612UL,1UL},{0xE0D32A5EEE0C5A5ELL,18446744073709551615UL,0xEE93406C2BC2E5D3LL,0x15B68317959F5A12LL,8UL,18446744073709551609UL,18446744073709551615UL,4UL,5UL,4UL},{0xB61E30731A566845LL,0x706407F7C2648029LL,0xC596910905851E72LL,0x15B68317959F5A12LL,0xC596910905851E72LL,0x706407F7C2648029LL,0xB61E30731A566845LL,1UL,18446744073709551612UL,8UL},{3UL,0x5E888DBBA6E5A196LL,3UL,0x27624BA76EDDA3FFLL,1UL,3UL,3UL,1UL,0x31A6652DF7FE2CA3LL,18446744073709551609UL},{18446744073709551615UL,0x5E888DBBA6E5A196LL,18446744073709551615UL,1UL,0x5E20423C3E28757FLL,0UL,0xD05C8747DC061D10LL,0x706407F7C2648029LL,0xAF74C34CB12967A1LL,0x5E20423C3E28757FLL}},{{18446744073709551615UL,3UL,0x8CA495C019F31E27LL,0x9DDA8F0DFBEAEF5ALL,3UL,3UL,18446744073709551615UL,18446744073709551609UL,0x27624BA76EDDA3FFLL,0x5E20423C3E28757FLL},{3UL,18446744073709551615UL,18446744073709551609UL,0x27624BA76EDDA3FFLL,0x5E20423C3E28757FLL,3UL,3UL,0x5E20423C3E28757FLL,0x27624BA76EDDA3FFLL,18446744073709551609UL},{0xD05C8747DC061D10LL,0xD05C8747DC061D10LL,18446744073709551615UL,0x9DDA8F0DFBEAEF5ALL,1UL,0UL,0x5E888DBBA6E5A196LL,0x5E20423C3E28757FLL,0xAF74C34CB12967A1LL,0x706407F7C2648029LL},{0x5E888DBBA6E5A196LL,3UL,18446744073709551609UL,1UL,3UL,1UL,0x5E888DBBA6E5A196LL,18446744073709551609UL,0x31A6652DF7FE2CA3LL,1UL},{3UL,0xD05C8747DC061D10LL,0x8CA495C019F31E27LL,0x27624BA76EDDA3FFLL,0x706407F7C2648029LL,1UL,3UL,0x706407F7C2648029LL,5UL,18446744073709551609UL},{0x5E888DBBA6E5A196LL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0x706407F7C2648029LL,0UL,18446744073709551615UL,1UL,0xAF74C34CB12967A1LL,1UL}}};
    uint8_t **l_1403 = &g_185;
    uint8_t **l_1404[9] = {&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185};
    int32_t *l_1418[2][8][10] = {{{&l_1285[0][0],&l_1285[0][0],&l_1285[1][0],&l_1285[0][0],&l_1285[0][0],&l_84,&l_84,&g_440,&l_86[0],&l_84},{&l_1285[1][0],&l_1285[1][0],&l_84,&g_440,&l_86[0],&g_440,&l_84,&l_1285[1][0],&l_1285[1][0],&l_84},{&l_86[0],&g_440,&l_1285[0][0],&l_1285[0][0],&g_440,&l_86[0],&l_84,&l_86[0],&g_440,&l_1285[0][0]},{&l_1285[0][0],&l_1285[1][0],&l_1285[0][0],&l_1285[0][0],&l_84,&l_84,&l_1285[0][0],&l_1285[0][0],&l_1285[1][0],&l_1285[0][0]},{&l_1285[0][0],&l_86[0],&l_1285[1][0],&g_440,&l_1285[1][0],&l_86[0],&l_1285[0][0],&l_1285[0][0],&l_86[0],&l_1285[1][0]},{&l_86[0],&l_1285[0][0],&l_1285[0][0],&l_86[0],&l_1285[1][0],&g_440,&l_1285[1][0],&l_86[0],&l_1285[0][0],&l_1285[0][0]},{&l_1285[1][0],&l_1285[0][0],&l_1285[0][0],&l_84,&l_84,&l_1285[0][0],&l_1285[0][0],&l_1285[1][0],&l_1285[0][0],&l_1285[0][0]},{&g_440,&l_86[0],&l_84,&l_86[0],&g_440,&l_1285[0][0],&l_1285[0][0],&g_440,&l_86[0],&l_84}},{{&l_1285[1][0],&l_1285[1][0],&l_84,&g_440,&l_86[0],&g_440,&l_84,&l_1285[1][0],&l_1285[1][0],&l_84},{&l_86[0],&g_440,&l_1285[0][0],&l_1285[0][0],&g_440,&l_86[0],&l_84,&l_86[0],&g_440,&l_1285[0][0]},{&l_1285[0][0],&l_1285[1][0],&l_1285[0][0],&l_1285[1][0],&l_86[0],&l_86[0],&l_1285[1][0],&l_1285[0][0],&l_86[0],&l_1285[0][0]},{&l_1285[0][0],&g_440,&l_86[0],&l_84,&l_86[0],&g_440,&l_1285[0][0],&l_1285[0][0],&g_440,&l_86[0]},{&g_440,&l_1285[0][0],&l_1285[0][0],&g_440,&l_86[0],&l_84,&l_86[0],&g_440,&l_1285[0][0],&l_1285[0][0]},{&l_86[0],&l_1285[0][0],&l_1285[1][0],&l_86[0],&l_86[0],&l_1285[1][0],&l_1285[0][0],&l_86[0],&l_1285[0][0],&l_1285[1][0]},{&l_84,&g_440,&l_86[0],&g_440,&l_84,&l_1285[1][0],&l_1285[1][0],&l_84,&g_440,&l_86[0]},{&l_86[0],&l_86[0],&l_86[0],&l_84,&l_1285[0][0],&l_84,&l_86[0],&l_86[0],&l_86[0],&l_86[0]}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_86[i] = 0xB2CC2567L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1285[i][j] = 0x03A80C7CL;
    }
    for (p_61 = 0; (p_61 == (-26)); --p_61)
    {
        int32_t *l_67 = &g_68[3][1];
        int32_t l_81[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t **l_1309 = (void*)0;
        int32_t l_1322 = 9L;
        int32_t l_1330 = 2L;
        uint32_t **l_1354[4];
        uint32_t l_1371 = 0x6A88006AL;
        int32_t l_1380 = 0x703CFBE5L;
        uint32_t **l_1389 = &g_635;
        uint64_t l_1419 = 1UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1354[i] = &g_901[0];
        if (((*l_67) = (l_66 ^ (-1L))))
        {
            int32_t l_78 = 5L;
            int32_t l_79 = 0x9AD1DC2CL;
            int32_t l_83 = 0L;
            int32_t l_90 = 0x87867195L;
            uint32_t l_95 = 1UL;
            uint32_t l_1276 = 18446744073709551613UL;
            for (l_66 = 6; (l_66 < 23); l_66 = safe_add_func_uint8_t_u_u(l_66, 4))
            {
                int32_t l_75 = 0x3BC9FC22L;
                int32_t l_76 = 1L;
                int32_t l_77[1];
                const uint32_t l_109[3][5] = {{0x229A812DL,0x229A812DL,0x229A812DL,0x229A812DL,0x229A812DL},{0x71E1A547L,0x71E1A547L,0x71E1A547L,0x71E1A547L,0x71E1A547L},{0x229A812DL,0x229A812DL,0x229A812DL,0x229A812DL,0x229A812DL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_77[i] = 0x2575E7E8L;
                for (p_62 = 1; (p_62 >= 0); p_62 -= 1)
                {
                    int16_t l_72 = 0x54F6L;
                    int32_t l_73 = 0x46C20B13L;
                    int32_t l_74 = 0xD6736FA7L;
                    int32_t l_80 = 0x6574F207L;
                    int32_t l_82 = 0x996BD0C7L;
                    int32_t l_85 = 0x3BD3A577L;
                    int32_t l_87 = 0x72DEFE8EL;
                    int32_t l_88 = 7L;
                    int16_t l_89 = 0x5102L;
                    uint32_t l_91 = 0x89394F44L;
                    int64_t l_94 = (-1L);
                    int16_t *l_116 = &l_89;
                    int32_t **l_1270 = &l_67;
                    for (p_63 = 1; (p_63 >= 0); p_63 -= 1)
                    {
                        int32_t *l_71[8] = {&g_68[3][1],&g_68[3][1],&g_68[3][1],&g_68[3][1],&g_68[3][1],&g_68[3][1],&g_68[3][1],&g_68[3][1]};
                        int i, j;
                        l_91--;
                        if (g_68[p_63][p_63])
                            continue;
                        if (p_62)
                            continue;
                        l_95--;
                    }
                    (*l_1270) = func_98(p_62, (((safe_add_func_int16_t_s_s(((*l_116) = (safe_add_func_uint16_t_u_u(g_54, (0x4C99091BL ^ (safe_sub_func_uint8_t_u_u(((l_86[0] > (safe_lshift_func_uint8_t_u_u(l_109[2][1], 3))) ^ 0x69L), (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((((void*)0 != &p_62) && ((void*)0 == &g_68[4][0])) | p_60), 0xABF039857A524CF1LL)) , 0x2727L), g_54)), 0x7DL)))))))), l_72)) , g_68[3][1]) || g_68[3][1]));
                }
                for (g_123 = 0; (g_123 == (-11)); g_123--)
                {
                    uint64_t l_1273[7][5] = {{18446744073709551613UL,18446744073709551613UL,0UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551606UL,0x76C38DCDAE5A7782LL},{18446744073709551613UL,18446744073709551612UL,18446744073709551612UL,18446744073709551613UL,18446744073709551612UL},{0x76C38DCDAE5A7782LL,18446744073709551615UL,0x6DDFB86A3182144CLL,18446744073709551615UL,0x76C38DCDAE5A7782LL},{18446744073709551612UL,18446744073709551613UL,18446744073709551612UL,18446744073709551612UL,18446744073709551613UL},{0x76C38DCDAE5A7782LL,18446744073709551606UL,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{18446744073709551613UL,18446744073709551613UL,0UL,18446744073709551613UL,18446744073709551613UL}};
                    int i, j;
                    if (l_1273[5][4])
                    {
                        int32_t *l_1274 = &g_128;
                        int32_t *l_1275[10][1][6] = {{{&l_86[0],&l_76,&g_440,&g_440,&l_76,&l_86[0]}},{{&g_68[3][1],&l_86[0],(void*)0,&l_76,(void*)0,&l_86[0]}},{{(void*)0,&g_68[3][1],&g_440,(void*)0,(void*)0,&g_440}},{{(void*)0,(void*)0,(void*)0,&l_76,&g_842,&l_76}},{{&g_68[3][1],(void*)0,&g_68[3][1],&g_440,(void*)0,(void*)0}},{{&l_86[0],&g_68[3][1],&g_68[3][1],&l_86[0],(void*)0,&l_76}},{{&l_76,&l_86[0],(void*)0,&l_86[0],&l_76,&g_440}},{{&l_86[0],&l_76,&g_440,&g_440,&l_76,&l_86[0]}},{{&g_68[3][1],&l_86[0],(void*)0,&l_76,(void*)0,&l_86[0]}},{{(void*)0,&g_68[3][1],&g_440,(void*)0,(void*)0,&g_440}}};
                        int i, j, k;
                        --l_1276;
                    }
                    else
                    {
                        int16_t l_1279 = 0x8AEFL;
                        int32_t *l_1280[8] = {(void*)0,&g_68[4][0],(void*)0,(void*)0,&g_68[4][0],(void*)0,(void*)0,&g_68[4][0]};
                        int i;
                        (*g_529) = p_61;
                        l_1279 = (*g_127);
                        (*g_158) = l_1280[4];
                        (*g_127) &= 7L;
                    }
                    l_86[0] = (*g_442);
                    for (l_90 = 0; (l_90 <= 0); l_90 += 1)
                    {
                        int i;
                        return l_86[l_90];


                    }
                    (*g_158) = (void*)0;
                }
                p_62 = ((*g_127) = l_75);
            }

            ((l_67 == &g_953 || (l_67 >= &l_86[0] && l_67 <= &l_86[0]) || (l_67 >= &g_68[0][0] && l_67 <= &g_68[5][1]) || l_67 == 0 || l_67 == &g_139 || l_67 == &g_128) ? (void) (0) : __assert_fail ("l_67 == &g_953 || (l_67 >= &l_86[0] && l_67 <= &l_86[0]) || (l_67 >= &g_68[0][0] && l_67 <= &g_68[5][1]) || l_67 == 0 || l_67 == &g_139 || l_67 == &g_128", "8.c", 1143, __PRETTY_FUNCTION__));
            if (p_63)
                continue;
            (*g_529) = l_86[0];
        }
        else
        {
            for (g_1062 = 25; (g_1062 >= 12); g_1062 = safe_sub_func_uint8_t_u_u(g_1062, 7))
            {
                for (l_84 = (-26); (l_84 <= 14); ++l_84)
                {
                    int32_t *l_1286 = &g_128;
                    int32_t *l_1287 = (void*)0;
                    int32_t *l_1288 = &g_139;
                    int32_t *l_1289 = &g_953;
                    int32_t *l_1290 = &g_68[3][1];
                    int32_t *l_1291 = (void*)0;
                    int32_t *l_1292 = &g_128;
                    int32_t *l_1293[10][1];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1293[i][j] = (void*)0;
                    }
                    if ((*g_529))
                        break;
                    if ((*g_529))
                        break;
                    l_1294--;
                    return p_60;


                }
                for (g_1147 = 0; (g_1147 <= 7); g_1147 += 1)
                {
                    for (g_375 = 0; (g_375 <= 5); g_375 += 1)
                    {
                        int32_t *l_1297 = &l_86[0];
                        (*g_158) = l_1297;
                    }
                }
            }
        }

        ((l_67 == &g_953 || (l_67 >= &l_86[0] && l_67 <= &l_86[0]) || (l_67 >= &g_68[0][0] && l_67 <= &g_68[5][1]) || l_67 == 0 || l_67 == &g_139 || l_67 == &g_128) ? (void) (0) : __assert_fail ("l_67 == &g_953 || (l_67 >= &l_86[0] && l_67 <= &l_86[0]) || (l_67 >= &g_68[0][0] && l_67 <= &g_68[5][1]) || l_67 == 0 || l_67 == &g_139 || l_67 == &g_128", "8.c", 1188, __PRETTY_FUNCTION__));
        for (g_128 = (-3); (g_128 != (-18)); g_128--)
        {
            uint32_t l_1302 = 0UL;
            int32_t l_1316 = 0xBDA91BD3L;
            int32_t l_1318 = 0x2146D40CL;
            int32_t l_1319 = 4L;
            int32_t l_1321[5][1] = {{8L},{1L},{8L},{1L},{8L}};
            uint32_t l_1332 = 0x707AFA9DL;
            uint64_t *l_1341 = (void*)0;
            uint64_t **l_1340[2];
            uint16_t l_1390[10][3] = {{0UL,0UL,65535UL},{0x9AC1L,0x9AC1L,65535UL},{0UL,0UL,65535UL},{0x9AC1L,0x9AC1L,65535UL},{0UL,0UL,65535UL},{0x9AC1L,0x9AC1L,65535UL},{0UL,0UL,65535UL},{0x9AC1L,0x9AC1L,65535UL},{0UL,0UL,65535UL},{0x9AC1L,0x9AC1L,65535UL}};
            uint32_t l_1405 = 4294967295UL;
            const uint32_t **l_1416 = (void*)0;
            int32_t *l_1424 = &l_1318;
            uint32_t l_1426 = 4294967288UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1340[i] = &l_1341;
        }
    }

    (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1]) || g_127 == &g_128) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1]) || g_127 == &g_128", "8.c", 1210, __PRETTY_FUNCTION__));



    p_62 = func_120(&g_1062);

    (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1216, __PRETTY_FUNCTION__));
    return (*g_442);


}







static int32_t * const func_98(const uint32_t p_99, uint64_t p_100)
{
    uint16_t l_119[7][5][7] = {{{0x236CL,0x9C4AL,0x2096L,0x04BCL,0x8948L,65534UL,0x8948L},{2UL,0UL,0UL,2UL,0x9C4AL,0x0375L,65535UL},{4UL,2UL,2UL,0xD77EL,0x71AFL,7UL,65535UL},{0UL,0x0375L,0xAAE7L,7UL,6UL,0x2B06L,65535UL},{0x27AEL,65531UL,1UL,5UL,0x6AA3L,0x2C0BL,0x8948L}},{{65531UL,0x236CL,2UL,0x8948L,1UL,65535UL,0x27AEL},{65535UL,0x3E54L,2UL,0x2B06L,65535UL,65535UL,0x2B06L},{1UL,2UL,1UL,1UL,0xD77EL,0UL,0x9EE1L},{0x0375L,0xD77EL,0xAAE7L,0xA930L,65534UL,0x790AL,0xAAE7L},{0x27AEL,0x0B26L,0x2B06L,0x236CL,0x9EE1L,0x17A0L,65535UL}},{{0x71AFL,0x3E54L,65531UL,1UL,0x2B06L,0xAAE7L,0x236CL},{0x17A0L,0UL,0x71AFL,6UL,0x27AEL,0x0013L,7UL},{65534UL,0UL,0xA930L,5UL,0x8948L,5UL,0xA930L},{0x3E54L,0x3E54L,1UL,0x17A0L,65535UL,65535UL,4UL},{0x6AA3L,0x0B26L,5UL,0x2C0BL,65535UL,65534UL,65534UL}},{{0x9EE1L,65534UL,1UL,0UL,65535UL,7UL,0UL},{0xD77EL,0x2B06L,0x790AL,0x0013L,0x8948L,65535UL,1UL},{1UL,4UL,1UL,0xD77EL,0x27AEL,0x9C4AL,0x2C0BL},{1UL,0UL,0UL,0x2B06L,0x2B06L,0UL,0UL},{0xD77EL,6UL,65535UL,1UL,0x9EE1L,2UL,1UL}},{{0x9EE1L,7UL,0x27AEL,1UL,65535UL,0x0375L,65531UL},{0x6AA3L,0x8948L,0x3E54L,1UL,65534UL,65531UL,0x17A0L},{0x3E54L,65531UL,1UL,0x27AEL,0x2B06L,65535UL,6UL},{65535UL,0x3E54L,0x2B06L,65534UL,0UL,0x790AL,6UL},{1UL,65535UL,6UL,0xD77EL,6UL,65535UL,1UL}},{{7UL,0x2C0BL,65534UL,1UL,0x790AL,65534UL,2UL},{0x0B26L,5UL,0x2C0BL,65535UL,65534UL,65534UL,0xAAE7L},{0x17A0L,65531UL,65534UL,1UL,0x3E54L,0x8948L,0x6AA3L},{0x0375L,0x04BCL,6UL,0x0013L,0x9EE1L,0x0B26L,65535UL},{0xD77EL,65534UL,0x2B06L,0x8948L,1UL,0x0B26L,1UL}},{{0x8948L,65535UL,0xAAE7L,0xAAE7L,65535UL,0x8948L,4UL},{1UL,65535UL,0x790AL,65535UL,65535UL,65534UL,65535UL},{2UL,0x0375L,0x0B26L,4UL,1UL,65534UL,1UL},{0x2096L,65535UL,0x04BCL,0x236CL,4UL,65535UL,0x3E54L},{0UL,65535UL,1UL,0UL,65531UL,0x790AL,0x17A0L}}};
    int32_t l_140[3][7] = {{(-3L),0x03FA2AEEL,(-3L),0x45E95938L,0x03FA2AEEL,(-4L),(-4L)},{0x03FA2AEEL,0x03FA2AEEL,(-1L),0x03FA2AEEL,(-1L),(-1L),(-1L)},{(-1L),(-3L),(-4L),(-1L),(-4L),(-3L),(-1L)}};
    int16_t *l_152[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_176 = &g_159[0][4];
    int32_t l_180[4];
    int32_t l_181 = (-8L);
    int8_t l_348 = 8L;
    int32_t * const l_354 = (void*)0;
    int16_t *l_378[10] = {&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123};
    uint8_t l_428 = 3UL;
    uint64_t l_447 = 0xA6F49467F4E4CDB2LL;
    uint32_t l_469 = 0x9B240984L;
    const uint64_t *l_473 = &l_447;
    const uint64_t **l_472 = &l_473;
    uint8_t **l_525 = &g_185;
    uint64_t l_537 = 0xA9F5A9F21676DEB1LL;
    uint16_t l_540 = 65528UL;
    int32_t * const l_615[3][8][8] = {{{&l_180[2],&l_180[2],&l_180[1],&l_181,&l_180[1],&l_180[1],&l_181,&l_180[1]},{(void*)0,&l_181,&l_181,&l_180[1],&l_180[1],&l_180[3],&l_180[1],&l_181},{(void*)0,&l_180[1],(void*)0,&l_180[3],&l_181,&l_180[1],&l_180[0],&l_180[3]},{&l_180[1],(void*)0,&l_180[1],&l_180[1],&l_180[1],(void*)0,&l_180[1],&l_180[1]},{&l_180[1],(void*)0,&l_180[1],&l_180[1],(void*)0,&l_180[3],&l_180[1],&l_180[2]},{&l_180[1],(void*)0,&l_180[2],&l_180[1],(void*)0,&l_180[1],&l_181,&l_180[1]},{&l_180[1],&l_180[3],&l_180[1],&l_180[2],&l_180[1],(void*)0,(void*)0,&l_180[2]},{&l_180[1],&l_181,(void*)0,&l_180[1],&l_181,&l_180[2],&l_180[1],&l_181}},{{&l_181,(void*)0,&l_180[1],&l_180[2],&l_180[0],&l_181,&l_180[1],&l_180[1]},{(void*)0,&l_180[1],&l_181,&l_181,&l_180[1],(void*)0,&l_181,(void*)0},{&l_181,(void*)0,&l_180[1],&l_180[3],&l_180[1],(void*)0,(void*)0,&l_180[1]},{&l_180[1],&l_181,&l_180[3],&l_180[3],&l_180[1],(void*)0,&l_180[1],(void*)0},{&l_180[0],&l_180[1],&l_181,&l_181,&l_181,&l_181,&l_180[1],&l_180[1]},{&l_180[1],(void*)0,&l_180[1],&l_180[2],(void*)0,&l_180[1],&l_180[1],&l_181},{&l_180[1],&l_181,(void*)0,&l_180[1],&l_180[2],&l_180[3],&l_180[2],&l_180[3]},{&l_180[0],&l_181,&l_180[2],&l_181,&l_180[0],(void*)0,&l_180[1],&l_180[1]}},{{&l_180[2],&l_180[2],&l_181,&l_180[1],&l_180[3],&l_180[1],&l_180[1],&l_181},{&l_181,&l_181,&l_181,&l_180[2],&l_180[3],&l_180[1],&l_180[1],(void*)0},{&l_180[3],&l_180[1],&l_180[2],&l_180[1],(void*)0,(void*)0,&l_180[2],&l_180[0]},{&l_180[1],&l_180[3],(void*)0,&l_181,(void*)0,&l_180[2],&l_181,(void*)0},{(void*)0,&l_180[1],&l_180[1],(void*)0,&l_181,&l_180[0],&l_180[0],&l_181},{&l_180[1],&l_180[1],&l_180[1],&l_180[1],&l_181,&l_181,(void*)0,&l_181},{&l_180[2],&l_181,(void*)0,&l_180[1],&l_180[3],&l_180[0],&l_180[1],&l_180[0]},{&l_181,&l_181,&l_181,&l_180[1],&l_180[1],&l_181,&l_180[1],(void*)0}}};
    int32_t * const l_647[2][9][8] = {{{&g_128,&g_128,&g_68[5][1],(void*)0,&l_140[0][3],&g_68[3][1],&l_140[0][3],&g_139},{&g_68[5][1],(void*)0,&g_68[3][1],(void*)0,&g_128,(void*)0,&g_68[3][1],&g_139},{(void*)0,(void*)0,&l_140[0][3],(void*)0,&g_440,&g_68[5][1],&g_68[3][1],&g_440},{&g_139,&g_440,&g_139,&l_140[0][3],&g_139,&g_440,&g_139,&g_68[5][1]},{&l_140[0][3],&g_128,&g_68[5][1],&l_140[0][3],(void*)0,&g_68[1][1],&g_139,&g_68[3][1]},{&l_140[0][3],&g_68[5][1],&l_140[1][2],&g_68[3][1],(void*)0,&g_128,&g_68[1][1],&l_140[0][3]},{&l_140[0][3],&g_139,(void*)0,&g_68[3][1],&g_139,&l_140[1][3],&l_140[1][3],&g_139},{&g_139,&g_68[3][1],&g_68[3][1],&g_139,&g_440,&g_440,&l_140[0][3],(void*)0},{&g_139,&l_140[0][3],&l_140[1][6],&g_440,&g_68[5][1],&g_139,(void*)0,&g_68[1][1]}},{{&g_139,&l_140[0][3],&g_128,(void*)0,(void*)0,&g_440,&l_140[1][3],&g_68[3][1]},{&l_140[1][3],&l_140[1][2],&g_68[5][1],&g_440,&l_140[0][3],&g_440,&g_68[5][1],&l_140[1][2]},{&g_128,&g_440,&g_68[3][1],&l_140[0][3],&g_139,&l_140[1][3],&l_140[0][3],&l_140[1][6]},{&g_440,(void*)0,&g_440,(void*)0,&g_128,(void*)0,&l_140[0][3],&g_128},{&l_140[0][3],(void*)0,&g_68[3][1],&l_140[1][3],(void*)0,(void*)0,&g_68[5][1],&g_68[5][1]},{(void*)0,(void*)0,&g_68[5][1],&g_68[5][1],(void*)0,(void*)0,&l_140[1][3],&g_68[3][1]},{&l_140[1][2],&g_68[3][1],&g_128,&l_140[0][3],(void*)0,&g_128,(void*)0,&g_440},{&l_140[0][3],&g_139,&l_140[1][6],&l_140[0][3],&l_140[1][3],&g_139,&l_140[0][3],&g_68[3][1]},{&g_68[5][1],&l_140[1][3],&l_140[1][2],&g_68[5][1],&g_440,&l_140[0][3],&g_440,&g_68[5][1]}}};
    int32_t * const l_648 = &g_139;
    uint8_t ** const l_679 = (void*)0;
    uint32_t ***l_708[3];
    int16_t l_795[5];
    uint8_t * const *l_861[3][7] = {{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185}};
    uint8_t * const **l_860 = &l_861[1][5];
    uint8_t * const ***l_859 = &l_860;
    int32_t *l_893 = &l_181;
    int32_t l_906 = 0x0D1E08AFL;
    uint8_t l_954 = 0xBFL;
    uint16_t l_981[2];
    int64_t l_1033 = 1L;
    uint64_t l_1041 = 0x3BF29681695A4FC7LL;
    int64_t **l_1077 = &g_262;
    int32_t l_1155 = 0x3EBDFF12L;
    int8_t l_1172 = 0L;
    uint64_t l_1182[3];
    uint8_t ***l_1188 = &l_525;
    int32_t l_1261 = 0x1A21C187L;
    int64_t l_1263 = 0x54EAA3829B91C5C3LL;
    uint16_t l_1266 = 0x4413L;
    int32_t * const l_1269 = &g_953;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_180[i] = 0xF76F22C2L;
    for (i = 0; i < 3; i++)
        l_708[i] = &g_634;
    for (i = 0; i < 5; i++)
        l_795[i] = 0x888DL;
    for (i = 0; i < 2; i++)
        l_981[i] = 65535UL;
    for (i = 0; i < 3; i++)
        l_1182[i] = 1UL;
lbl_546:
    for (p_100 = 0; (p_100 > 8); p_100++)
    {
        int16_t *l_122 = &g_123;
        int32_t *l_138[5] = {&g_139,&g_139,&g_139,&g_139,&g_139};
        int i;
        if (l_119[6][3][3])
            break;
        l_140[0][3] |= func_120(l_122);

        (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1292, __PRETTY_FUNCTION__));
    }
    if (l_140[0][1])
    {
        int32_t *l_141 = &g_139;
        int32_t *l_142 = (void*)0;
        int32_t *l_143 = &g_139;
        int32_t l_144 = 0xB6AF0722L;
        int32_t *l_145 = &l_140[0][3];
        int32_t *l_146 = &g_68[1][1];
        int32_t *l_147 = &g_68[3][1];
        int32_t *l_148[7][2] = {{&l_140[2][2],&l_140[2][2]},{&l_140[0][3],&l_140[2][2]},{&l_140[2][2],&l_140[0][3]},{&l_140[2][2],&l_140[2][2]},{&l_140[0][3],&l_140[2][2]},{&l_140[2][2],&l_140[0][3]},{&l_140[2][2],&l_140[2][2]}};
        uint8_t l_149 = 1UL;
        const uint32_t l_184 = 0x3305BF0CL;
        int16_t l_198 = 0xCA75L;
        uint32_t l_222[4];
        uint32_t l_259[3];
        int32_t * const l_330 = (void*)0;
        uint16_t *l_339 = &l_119[2][1][4];
        uint8_t l_405 = 0x8FL;
        int32_t *l_515 = &l_180[1];
        int32_t * const l_528 = &l_140[0][3];
        uint8_t ***l_583 = &g_482[3][4];
        uint32_t * const l_598 = &g_224;
        const uint16_t l_627 = 65532UL;
        int8_t l_742[3];
        int64_t *l_753 = &g_375;
        uint8_t l_765[5][2] = {{0xFBL,0xFBL},{0xFBL,0xFBL},{0xFBL,0xFBL},{0xFBL,0xFBL},{0xFBL,0xFBL}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_222[i] = 5UL;
        for (i = 0; i < 3; i++)
            l_259[i] = 5UL;
        for (i = 0; i < 3; i++)
            l_742[i] = (-1L);
        l_149--;
    }
    else
    {
        int32_t l_782 = (-1L);
        int16_t *l_785 = &g_123;
        int32_t *l_786 = (void*)0;
        uint32_t *l_792 = &l_469;
        uint32_t **l_791 = &l_792;
        uint8_t l_840[9][3];
        int32_t l_845 = (-1L);
        uint32_t l_871[2][1][10] = {{{0xD5CC5646L,0x5AB73D86L,5UL,0x1E67BF57L,0x1E67BF57L,5UL,0x5AB73D86L,0xD5CC5646L,0x5AB73D86L,5UL}},{{0UL,0x2EB65D63L,0x1E67BF57L,0x2EB65D63L,0UL,5UL,5UL,0UL,0x2EB65D63L,0x1E67BF57L}}};
        uint32_t l_872[9] = {0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L,0xDD26ADD6L};
        int32_t *l_895 = &l_782;
        int32_t **l_894[3];
        uint32_t ***l_902 = (void*)0;
        int64_t l_905 = 0x844E36D6E84C405DLL;
        uint32_t **l_912 = (void*)0;
        uint32_t **l_913 = (void*)0;
        int32_t l_919[4][2] = {{0x79E4FBD3L,0x88524017L},{0x79E4FBD3L,0x88524017L},{0x79E4FBD3L,0x88524017L},{0x79E4FBD3L,0x88524017L}};
        int16_t l_925[7][4][3] = {{{1L,0xE6B6L,1L},{9L,(-1L),(-1L)},{1L,(-1L),0x6CE1L},{1L,0x8217L,0xA223L}},{{0xB7A7L,0x3960L,0x8523L},{1L,0xDA19L,0x4C05L},{1L,0xBF81L,0x9E71L},{0x3960L,5L,0x8523L}},{{(-1L),3L,1L},{0x41A8L,3L,0x6B35L},{5L,5L,0xDA19L},{(-9L),0x4C05L,0x41A8L}},{{0xD1C1L,1L,9L},{0xF10BL,0x41A8L,0L},{0xB7A7L,0xD1C1L,9L},{3L,0xA223L,0x41A8L}},{{0x8523L,0xE6B6L,0xDA19L},{0xBF81L,0x8217L,0x6B35L},{9L,0x6B35L,1L},{9L,0x8523L,0x8523L}},{{0xBF81L,0L,0x9E71L},{0x8523L,(-1L),0x738FL},{3L,0xB7A7L,0xF325L},{0xB7A7L,0x9E71L,3L}},{{0xF10BL,0xB7A7L,0x3B5CL},{0xD1C1L,(-1L),(-9L)},{(-9L),0L,(-1L)},{5L,0x8523L,1L}}};
        uint8_t *** const l_991 = &g_482[3][8];
        uint64_t l_1058[8][3] = {{0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL},{0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL},{0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL},{0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL},{0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL},{0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL},{0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL,0x474E5B2B4EF6D38ALL},{0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL,0x9C363B9EFAADC3E0LL}};
        uint32_t l_1095 = 4294967290UL;
        uint32_t l_1118[4] = {0x53211A60L,0x53211A60L,0x53211A60L,0x53211A60L};
        int64_t * const l_1149 = &g_1150[4];
        int64_t * const *l_1148 = &l_1149;
        uint8_t ***l_1186 = &g_482[3][4];
        uint16_t l_1241 = 0x9A61L;
        int8_t l_1264 = 1L;
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 3; j++)
                l_840[i][j] = 0xEAL;
        }
        for (i = 0; i < 3; i++)
            l_894[i] = &l_895;
lbl_1007:
        for (g_375 = 3; (g_375 >= 0); g_375 -= 1)
        {
            uint8_t l_783 = 255UL;
            int32_t *l_784 = &g_128;
            int32_t *l_787[9][8][1] = {{{&g_68[0][1]},{&g_68[0][0]},{&g_139},{(void*)0},{&g_68[0][1]},{&g_68[3][1]},{(void*)0},{&g_68[3][1]}},{{&g_68[0][1]},{(void*)0},{&g_139},{&g_68[3][1]},{&g_128},{&l_140[0][3]},{(void*)0},{&g_68[0][0]}},{{&l_140[0][3]},{&l_140[0][3]},{&l_140[0][3]},{&g_68[0][0]},{(void*)0},{&l_140[0][3]},{&g_128},{&g_68[3][1]}},{{&g_139},{(void*)0},{&g_68[0][1]},{&g_68[3][1]},{(void*)0},{&g_68[3][1]},{&g_68[0][1]},{(void*)0}},{{&g_139},{&g_68[3][1]},{&g_128},{&l_140[0][3]},{(void*)0},{&g_68[0][0]},{&l_140[0][3]},{&l_140[0][3]}},{{&l_140[0][3]},{&g_68[0][0]},{(void*)0},{&l_140[0][3]},{&g_128},{&g_68[3][1]},{&g_139},{(void*)0}},{{&g_68[0][1]},{&g_68[3][1]},{(void*)0},{&g_68[3][1]},{&g_68[0][1]},{(void*)0},{&g_139},{&g_68[3][1]}},{{&g_128},{&l_140[0][3]},{(void*)0},{&g_68[0][0]},{&l_140[0][3]},{&l_140[0][3]},{&l_140[0][3]},{&g_68[0][0]}},{{(void*)0},{&l_140[0][3]},{&g_128},{&g_68[3][1]},{&g_139},{(void*)0},{&g_68[0][1]},{&g_68[3][1]}}};
            uint16_t ** const l_798[3] = {&g_694,&g_694,&g_694};
            int16_t *l_821 = (void*)0;
            uint32_t l_851 = 0xE31216EDL;
            int i, j, k;
            for (l_537 = 0; (l_537 <= 4); l_537 += 1)
            {
                int8_t *l_800 = (void*)0;
                int32_t l_803 = 6L;
                (*l_648) = (((safe_mul_func_uint8_t_u_u(0xB1L, func_120(&g_123))) & (safe_rshift_func_uint8_t_u_s(p_100, 2))) != ((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(0x448726C5F3B9D35BLL, (safe_mul_func_int16_t_s_s(p_99, ((safe_add_func_uint64_t_u_u((g_347[3] || (safe_add_func_int8_t_s_s(((-7L) < (l_782 ^ l_782)), l_782))), 0x556264E32F784AFDLL)) < (**g_693)))))), (*g_262))) || p_99));

                (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1381, __PRETTY_FUNCTION__));
                if (p_100)
                    goto lbl_546;

                if (l_783)
                    break;
            }
            for (g_157 = 0; (g_157 <= 4); g_157 += 1)
            {
                uint32_t **l_811 = &l_792;
                uint32_t l_830[2];
                int32_t l_834 = 0x37F72757L;
                uint16_t l_836 = 65535UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_830[i] = 0UL;
                (*g_529) = (safe_sub_func_int32_t_s_s(p_100, (--(**l_791))));
                for (l_469 = 0; (l_469 <= 4); l_469 += 1)
                {
                    uint32_t ** const l_808[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t ***l_809 = (void*)0;
                    uint32_t ***l_810 = (void*)0;
                    int i, j, k;
                    l_811 = l_808[5];
                    for (l_537 = 0; (l_537 <= 4); l_537 += 1)
                    {
                        return l_784;




                    }
                    (*l_784) = l_119[(g_157 + 1)][l_469][(l_469 + 2)];
                    for (l_783 = 0; (l_783 <= 4); l_783 += 1)
                    {
                        uint64_t *l_816 = &l_447;
                        int8_t *l_831 = &g_347[4];
                        int32_t l_837 = (-4L);
                        int i, j, k;
                        if (g_128)
                            goto lbl_546;

                        l_837 |= (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((*l_816) = ((*l_176) == (void*)0)) && ((safe_div_func_uint64_t_u_u((p_100++), func_120(l_821))) & (((safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(l_119[(l_469 + 1)][g_375][l_469], (p_99 & (4294967286UL || (((((((safe_add_func_int16_t_s_s((l_834 = (safe_add_func_int8_t_s_s(((*l_831) = l_830[1]), ((safe_add_func_int16_t_s_s(p_99, l_830[1])) || (*l_648))))), 7L)) , p_99) | 0x851DE829L) & 1L) , g_835) ^ p_99) && l_830[1]))))) , 0x74L), (*l_648))) <= p_99) , l_836))), (*g_694))), 6));
                    }
                }

                ((l_811 == &l_792 || l_811 == 0) ? (void) (0) : __assert_fail ("l_811 == &l_792 || l_811 == 0", "8.c", 1427, __PRETTY_FUNCTION__));
            }
            for (l_783 = 0; l_783 < 9; l_783 += 1)
            {
                for (g_157 = 0; g_157 < 8; g_157 += 1)
                {
                    for (l_428 = 0; l_428 < 1; l_428 += 1)
                    {
                        l_787[l_783][g_157][l_428] = &l_140[2][3];
                    }
                }
            }
            l_840[0][1] = ((p_100 , (-9L)) , (safe_lshift_func_uint16_t_u_s(p_100, ((*l_648) , (func_120(l_821) < 3UL)))));

            (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1441, __PRETTY_FUNCTION__));
            for (g_695 = 1; (g_695 <= 4); g_695 += 1)
            {
                const int32_t *l_844 = (void*)0;
                const volatile int32_t **l_843 = &l_844;
                int32_t l_847 = 0L;
                int32_t l_850[1][5];
                uint8_t ** const *l_865[3][1][1];
                uint8_t ** const **l_864[4][8] = {{&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0]},{&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0]},{&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0]},{&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0],&l_865[1][0][0]}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_850[i][j] = 9L;
                }
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_865[i][j][k] = &g_482[3][4];
                    }
                }
                (*l_843) = g_841;

                ((l_844 == &g_842) ? (void) (0) : __assert_fail ("l_844 == &g_842", "8.c", 1466, __PRETTY_FUNCTION__));
                for (l_181 = 4; (l_181 >= 0); l_181 -= 1)
                {
                    int64_t l_846 = (-1L);
                    int32_t l_848 = 0x8F308EB2L;
                    int32_t l_849[1];
                    uint32_t l_889 = 0x47D34231L;
                    int32_t **l_890 = &l_784;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_849[i] = 0x5888198AL;
                    if ((*g_529))
                    {
                        return (*l_176);




                    }
                    else
                    {
                        (*g_529) &= p_99;
                        (*g_127) = (*g_529);
                    }
                    --l_851;
                    for (p_100 = 0; (p_100 <= 4); p_100 += 1)
                    {
                        int32_t l_858 = 0L;
                        uint8_t * const ***l_863 = &l_860;
                        uint8_t * const ****l_862 = &l_863;
                        int16_t *l_866 = (void*)0;
                        uint8_t ***l_878 = &l_525;
                        uint8_t **** const l_877 = &l_878;
                        uint8_t **** const *l_876 = &l_877;
                        uint8_t **** const **l_875 = &l_876;
                        int i, j, k;
                        l_872[2] = (+((((safe_add_func_int32_t_s_s(((++l_119[(p_100 + 1)][l_181][(l_181 + 1)]) < l_858), ((((*l_862) = l_859) != (p_99 , l_864[2][6])) , (p_99 > (func_120((l_858 , ((func_120(l_866) > (((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, l_858)), 0x5E2C69FD64C3AEEFLL)) != (-5L)) | g_527)) , &g_123))) != l_871[0][0][5]))))) > p_100) && (*g_262)) , p_100));
                        l_845 = (((safe_add_func_uint8_t_u_u((((*l_875) = (void*)0) != (void*)0), ((l_850[0][3] = (0UL || (p_100 , ((safe_mod_func_uint64_t_u_u(p_100, (safe_lshift_func_int8_t_s_u(g_167, 5)))) || ((*g_127) ^= (l_473 != ((safe_add_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s((-10L), (*g_442))), p_100)) >= p_100), 0L)) , (void*)0))))))) != 0xAD7176BDL))) & 4294967295UL) < (*g_694));

                        ((l_876 == 0) ? (void) (0) : __assert_fail ("l_876 == 0", "8.c", 1505, __PRETTY_FUNCTION__));
                        l_889 ^= p_99;
                    }
                    (*l_890) = (*g_158);
                }
            }


        }
        if (((l_845 = ((((void*)0 == l_785) , ((safe_div_func_uint8_t_u_u(((g_896 = l_893) == ((safe_sub_func_uint64_t_u_u(((((**g_693) ^ (g_900 == (g_903[2] = &l_792))) ^ 0x1F44L) , (((*l_792) = 4294967288UL) , (((((*g_127) = g_904) < p_100) | l_905) >= p_99))), p_100)) , (void*)0)), 1UL)) > p_100)) < l_906)) & p_99))
        {
            uint64_t l_909 = 0x7FB5F12CB3CABFDCLL;
            int64_t *l_914[10][8][3] = {{{(void*)0,&g_375,&g_375},{&g_375,(void*)0,&l_905},{&l_905,&l_905,&g_375},{&l_905,&l_905,&g_375},{(void*)0,(void*)0,&g_375},{&l_905,&l_905,&l_905},{&g_375,&l_905,&g_375},{(void*)0,(void*)0,&g_375}},{{&g_375,&g_375,&l_905},{&g_375,(void*)0,&g_375},{&g_375,(void*)0,&g_375},{&g_375,&g_375,&l_905},{&g_375,&g_375,&g_375},{&g_375,&g_375,&g_375},{&g_375,(void*)0,&g_375},{&g_375,(void*)0,&l_905}},{{&g_375,&g_375,&g_375},{&g_375,&l_905,&l_905},{&g_375,&g_375,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_375,(void*)0,(void*)0},{&l_905,&g_375,(void*)0},{(void*)0,&g_375,(void*)0},{&l_905,&g_375,(void*)0}},{{&l_905,(void*)0,(void*)0},{&g_375,(void*)0,&l_905},{&g_375,(void*)0,(void*)0},{(void*)0,&g_375,&l_905},{&g_375,(void*)0,&g_375},{(void*)0,&l_905,(void*)0},{&g_375,&l_905,(void*)0},{&l_905,&l_905,&g_375}},{{(void*)0,(void*)0,&g_375},{&g_375,&g_375,&l_905},{&g_375,(void*)0,(void*)0},{&l_905,&g_375,&l_905},{&l_905,&g_375,&g_375},{(void*)0,&g_375,&g_375},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_375},{(void*)0,&g_375,&l_905},{&l_905,&g_375,(void*)0},{&l_905,&g_375,&l_905},{&g_375,&g_375,&l_905},{&g_375,&g_375,&l_905},{(void*)0,(void*)0,&g_375},{&l_905,(void*)0,&g_375}},{{&g_375,(void*)0,&g_375},{(void*)0,&g_375,&l_905},{&g_375,&g_375,&l_905},{(void*)0,&g_375,&l_905},{&g_375,(void*)0,(void*)0},{(void*)0,&g_375,&l_905},{&g_375,(void*)0,&g_375},{(void*)0,&l_905,(void*)0}},{{&g_375,&l_905,(void*)0},{&l_905,&l_905,(void*)0},{&g_375,&g_375,&g_375},{&l_905,(void*)0,(void*)0},{(void*)0,(void*)0,&g_375},{(void*)0,&l_905,(void*)0},{(void*)0,(void*)0,&g_375},{&g_375,(void*)0,(void*)0}},{{(void*)0,&g_375,&l_905},{&l_905,&g_375,&g_375},{(void*)0,&g_375,(void*)0},{&g_375,&g_375,&l_905},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_375},{(void*)0,(void*)0,&g_375},{&l_905,&g_375,&l_905}},{{&g_375,&g_375,&l_905},{&l_905,&g_375,&g_375},{&l_905,&g_375,&l_905},{&g_375,(void*)0,&l_905},{(void*)0,(void*)0,&g_375},{&g_375,&l_905,&g_375},{&g_375,(void*)0,(void*)0},{&g_375,(void*)0,&l_905}}};
            int32_t l_915 = 0x3CC01357L;
            int32_t l_926 = (-1L);
            int32_t l_931 = (-7L);
            int32_t l_932 = 1L;
            int32_t l_935[5] = {0xEDCAD1ADL,0xEDCAD1ADL,0xEDCAD1ADL,0xEDCAD1ADL,0xEDCAD1ADL};
            int32_t l_937[5] = {3L,3L,3L,3L,3L};
            uint8_t l_942 = 0UL;
            int i, j, k;
            (*g_127) = (safe_lshift_func_uint16_t_u_s(((p_99 <= (&g_897 != &g_897)) < ((((l_909 >= ((++(**g_693)) <= p_99)) == ((*g_262) = (p_100 >= p_100))) != (l_915 = ((l_913 = l_912) == l_912))) , g_139)), l_845));
            for (l_845 = 0; (l_845 < 29); ++l_845)
            {
                int32_t **l_918 = &l_786;
                int32_t l_920 = 0xB4A958F2L;
                int32_t l_921 = 0x42A05044L;
                int32_t l_922 = 0xC4D9F308L;
                int32_t l_923 = 1L;
                int32_t l_924 = 0xC98B7FA9L;
                int32_t l_927 = 3L;
                int32_t l_928 = 0xFA96D139L;
                int32_t l_929 = 0x4E89FC27L;
                int32_t l_930 = 0x6A37F02BL;
                int32_t l_933 = 1L;
                int32_t l_934 = (-3L);
                int32_t l_936 = (-8L);
                int32_t l_938 = 0xA155DC00L;
                int32_t l_939 = (-10L);
                int32_t l_940 = 0x594559FDL;
                int32_t l_941 = 0xFC7D9043L;
                int16_t *l_965 = &l_795[4];
                (*l_918) = (*g_158);
                ++l_942;
                if ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(0x2B18L, (((safe_div_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(p_100, func_120(&g_123))) != ((--l_954) , ((**g_693) = p_100))) || p_100), (safe_sub_func_uint32_t_u_u(p_99, (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((p_100 >= (safe_lshift_func_int8_t_s_u(((~0xD6L) , p_99), p_100))) , l_937[4]), 0L)), 1UL)))))) < (-6L)) & 9L))) != 0x5B58DF84298174F6LL), p_99)))
                {
                    uint8_t *l_966 = &l_840[0][1];
                    int32_t *l_975 = &l_933;
                    uint32_t l_976 = 18446744073709551615UL;
                    int16_t l_992 = 0x07C3L;
                    l_976 |= ((!func_120(l_965)) ^ ((((((((void*)0 == l_966) , 18446744073709551615UL) ^ (safe_add_func_int64_t_s_s(p_99, ((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_99, 7)), p_99)), 0L)) ^ (-2L))))) , l_926) & 0xD15570ACL) , (void*)0) == l_975));
                    if (l_915)
                        continue;
                    (*l_918) = (((safe_rshift_func_int8_t_s_u(((p_100 > 1L) == 0UL), (l_981[1] &= (safe_lshift_func_int8_t_s_s((p_99 < ((7L == p_100) , p_99)), 1))))) ^ ((func_120(g_982) , 18446744073709551615UL) > p_99)) , (*g_158));
                    for (l_954 = 0; (l_954 <= 40); ++l_954)
                    {
                        l_992 = ((safe_mod_func_int64_t_s_s((((*l_975) = (*g_982)) == p_99), (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_935[0], 12)), 2)))) , ((void*)0 != l_991));
                        (*g_127) |= l_933;
                    }
                }
                else
                {
                    for (l_348 = 0; (l_348 == 26); ++l_348)
                    {
                        if (p_100)
                            break;
                    }
                    for (l_909 = 0; (l_909 <= 1); l_909 += 1)
                    {
                        int32_t l_995 = (-1L);
                        int i, j;
                        l_995 |= func_120(l_965);
                        if (l_919[l_909][l_909])
                            continue;
                    }
                }

                (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1582, __PRETTY_FUNCTION__));
            }


            l_786 = &l_919[1][0];

            (((l_786 >= &l_919[0][0] && l_786 <= &l_919[3][1])) ? (void) (0) : __assert_fail ("(l_786 >= &l_919[0][0] && l_786 <= &l_919[3][1])", "8.c", 1588, __PRETTY_FUNCTION__));
            return (*l_176);




        }
        else
        {
            int16_t *l_1002 = &l_925[5][3][1];
            uint64_t l_1004 = 0UL;
            uint32_t l_1005 = 0x49127465L;
            int32_t l_1019 = 0L;
            int32_t l_1022 = 0xC43B9C26L;
            int32_t l_1025[2][5][10] = {{{0xF8687C29L,0x85396D20L,0x85396D20L,0xF8687C29L,(-1L),(-1L),(-1L),1L,0x9F5B41E1L,0x12DBB542L},{(-6L),1L,0x9F5B41E1L,(-1L),0x85396D20L,0xF1DADE41L,0x85396D20L,(-1L),0x9F5B41E1L,(-6L)},{0xF8687C29L,(-1L),(-1L),(-1L),1L,0L,0xEF19F6F4L,0x85396D20L,1L,1L},{(-1L),(-1L),0L,0x9F5B41E1L,0x9F5B41E1L,0L,(-1L),(-1L),(-1L),0xEF19F6F4L},{0xF8687C29L,(-1L),(-1L),(-1L),1L,0x9F5B41E1L,0x12DBB542L,0xEF19F6F4L,0x12DBB542L,0x9F5B41E1L}},{{0xF1DADE41L,1L,(-1L),1L,0xF1DADE41L,0xEF19F6F4L,(-1L),(-1L),(-1L),0L},{(-1L),1L,0L,0xEF19F6F4L,0x85396D20L,1L,1L,0x85396D20L,0xEF19F6F4L,0L},{0xEF19F6F4L,0xEF19F6F4L,(-1L),0L,0xF1DADE41L,(-6L),0x85396D20L,(-1L),8L,0x9F5B41E1L},{(-1L),0x12DBB542L,0x85396D20L,(-1L),1L,(-1L),0x85396D20L,0x12DBB542L,(-1L),0xEF19F6F4L},{1L,0xEF19F6F4L,8L,0xF1DADE41L,0x9F5B41E1L,0xF8687C29L,1L,1L,1L,1L}}};
            int64_t l_1034 = 0L;
            int16_t * const l_1061 = &g_1062;
            int16_t * const *l_1060 = &l_1061;
            int16_t * const **l_1059 = &l_1060;
            int32_t l_1066 = (-10L);
            int i, j, k;
            for (g_755 = 0; (g_755 >= 17); ++g_755)
            {
                uint64_t *l_1003[3][3][8] = {{{&g_527,&g_527,&l_447,&g_527,&g_527,&l_447,&g_527,&g_527},{(void*)0,&g_527,(void*)0,(void*)0,&g_527,(void*)0,&l_447,(void*)0},{(void*)0,&l_447,&l_447,(void*)0,&l_447,&l_447,(void*)0,&l_447}},{{(void*)0,(void*)0,&g_527,(void*)0,(void*)0,&g_527,(void*)0,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0,&l_447,&l_447,(void*)0},{(void*)0,&l_447,&l_447,(void*)0,&l_447,&l_447,(void*)0,&l_447}},{{(void*)0,(void*)0,&g_527,(void*)0,(void*)0,&g_527,(void*)0,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0,&l_447,&l_447,(void*)0},{(void*)0,&l_447,&l_447,(void*)0,&l_447,&l_447,(void*)0,&l_447}}};
                int32_t *l_1013 = &g_128;
                int32_t *l_1014 = &l_845;
                int32_t l_1017 = 0x30BE3AA0L;
                int32_t l_1020[3][4][8] = {{{0x580A2C22L,0xD4FBD2C3L,0L,0xD4FBD2C3L,0x580A2C22L,0x35EFD982L,0x96A2A90DL,0xD4FBD2C3L},{0xCA2EF00BL,0xD4FBD2C3L,(-3L),0x7B48E088L,0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L},{0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L,0xCA2EF00BL,0x7B48E088L,0x96A2A90DL,0x7B48E088L},{0x580A2C22L,0xD4FBD2C3L,0L,0xD4FBD2C3L,0x580A2C22L,0x35EFD982L,0x96A2A90DL,0xD4FBD2C3L}},{{0xCA2EF00BL,0xD4FBD2C3L,(-3L),0x7B48E088L,0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L},{0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L,0xCA2EF00BL,0x7B48E088L,0x96A2A90DL,0x7B48E088L},{0x580A2C22L,0xD4FBD2C3L,0L,0xD4FBD2C3L,0x580A2C22L,0x35EFD982L,0x96A2A90DL,0xD4FBD2C3L},{0xCA2EF00BL,0xD4FBD2C3L,(-3L),0x7B48E088L,0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L}},{{0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L,0xCA2EF00BL,0x7B48E088L,0x96A2A90DL,0x7B48E088L},{0x580A2C22L,0xD4FBD2C3L,0L,0xD4FBD2C3L,0x580A2C22L,0x35EFD982L,0x96A2A90DL,0xD4FBD2C3L},{0xCA2EF00BL,0xD4FBD2C3L,(-3L),0x7B48E088L,0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L},{0x580A2C22L,0x7B48E088L,(-3L),0xD4FBD2C3L,0xCA2EF00BL,0x7B48E088L,0x96A2A90DL,0x7B48E088L}}};
                int16_t l_1036 = 0x00CBL;
                int i, j, k;
                if (((safe_mul_func_int8_t_s_s(((p_99 ^ (safe_unary_minus_func_int32_t_s(p_99))) , (safe_unary_minus_func_uint32_t_u((((((((*l_648) = func_120(l_1002)) , (((l_1004 = (+p_99)) == p_100) > (((*g_262) |= (p_100 <= (~((*l_648) &= func_120(&l_925[5][3][1]))))) , p_100))) || l_1005) , &g_901[0]) != &g_901[4]) < l_1005)))), 251UL)) <= p_99))
                {
                    int64_t l_1006 = 2L;
                    l_1006 ^= 0x79AFA9EAL;
                }
                else
                {
                    uint32_t l_1008 = 3UL;
                    if (g_755)
                        goto lbl_1007;
                    l_1008++;
                }

                (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1631, __PRETTY_FUNCTION__));
                for (l_1005 = 0; (l_1005 >= 35); l_1005 = safe_add_func_int32_t_s_s(l_1005, 4))
                {
                    int32_t l_1015 = 0x49B1E7BDL;
                    int32_t l_1016 = 0x839D6853L;
                    int32_t l_1018 = 0xC77E8E20L;
                    int32_t l_1021 = 0x22BC33C9L;
                    int32_t l_1023 = 0x29720466L;
                    int32_t l_1024 = (-1L);
                    int32_t l_1026 = 0x8B8D72B3L;
                    int32_t l_1027 = (-1L);
                    int32_t l_1028 = 0x7F6846E1L;
                    int32_t l_1029 = 0x831A5929L;
                    int32_t l_1030 = (-3L);
                    int32_t l_1031 = 0x92657E52L;
                    int32_t l_1032 = 1L;
                    int32_t l_1037 = 6L;
                    int32_t l_1039 = 0x027282E0L;
                    int32_t l_1040 = 0xB72628D3L;
                    if ((*g_529))
                    {
                        l_845 = 0xEBD80763L;
                        if (p_100)
                            break;
                    }
                    else
                    {
                        (*l_648) = func_120(l_1002);
                        l_1014 = ((*l_176) = l_1013);

                        ((l_1014 == &g_128) ? (void) (0) : __assert_fail ("l_1014 == &g_128", "8.c", 1661, __PRETTY_FUNCTION__));
                    }
                    ++l_1041;
                }

                ((l_1014 == &g_128 || l_1014 == &l_845) ? (void) (0) : __assert_fail ("l_1014 == &g_128 || l_1014 == &l_845", "8.c", 1666, __PRETTY_FUNCTION__));
                for (g_375 = 0; g_375 < 3; g_375 += 1)
                {
                    for (l_906 = 0; l_906 < 7; l_906 += 1)
                    {
                        l_140[g_375][l_906] = 0x7CF6C06CL;
                    }
                }
            }
            l_1022 = (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_99, (p_100 , func_120(((((*g_442) > (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_835, func_120(&g_1038))), ((*g_694) ^= ((*g_262) | ((safe_div_func_uint32_t_u_u(((**l_791)++), (l_1058[1][2] |= ((*l_648) |= (0x6DL >= 255UL))))) , (*g_262)))))), g_897))) , p_100) , &l_795[2]))))), 0L));

            (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1677, __PRETTY_FUNCTION__));
            l_1066 &= func_120((((l_1004 <= ((&g_171[3] != ((*l_1059) = &l_378[5])) && func_120(&l_925[5][0][0]))) , (l_1022 ^= (safe_unary_minus_func_int16_t_s((0x2517L && (safe_mul_func_int8_t_s_s((p_99 >= p_100), (l_1019 &= ((*g_127) , l_1025[1][1][2]))))))))) , (void*)0));

            (((l_1060 >= &l_378[0] && l_1060 <= &l_378[9])) ? (void) (0) : __assert_fail ("(l_1060 >= &l_378[0] && l_1060 <= &l_378[9])", "8.c", 1680, __PRETTY_FUNCTION__));
        }

        (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1683, __PRETTY_FUNCTION__));
        ((g_896 == &l_181) ? (void) (0) : __assert_fail ("g_896 == &l_181", "8.c", 1684, __PRETTY_FUNCTION__));
        if (p_99)
        {
            uint16_t l_1069 = 6UL;
            uint8_t ****l_1070 = (void*)0;
            uint32_t **l_1084[8] = {&g_635,&g_635,&g_635,&g_635,&g_635,&g_635,&g_635,&g_635};
            int64_t l_1094[6][6] = {{0x7C38563A9AA134FDLL,0x13B01052D20F98C1LL,9L,0x7C38563A9AA134FDLL,0x76BC194BF576A7F8LL,0x7C38563A9AA134FDLL},{0x7C38563A9AA134FDLL,0x76BC194BF576A7F8LL,0x7C38563A9AA134FDLL,9L,0x13B01052D20F98C1LL,0x7C38563A9AA134FDLL},{0L,0xB5213F1542493656LL,9L,0x5D0FF8BF3312F75FLL,0x13B01052D20F98C1LL,0L},{9L,0x76BC194BF576A7F8LL,0x5D0FF8BF3312F75FLL,0x5D0FF8BF3312F75FLL,0x76BC194BF576A7F8LL,9L},{0L,0x13B01052D20F98C1LL,0x5D0FF8BF3312F75FLL,9L,0xB5213F1542493656LL,(-8L)},{(-1L),0L,0x5B210ABA254D799CLL,(-1L),0x5D0FF8BF3312F75FLL,(-1L)}};
            int32_t *l_1097 = &g_953;
            int32_t l_1104 = 0x2997B392L;
            uint32_t l_1105 = 0x2DC542EBL;
            int8_t *l_1143[10] = {&g_347[2],(void*)0,&g_347[2],&g_347[2],(void*)0,&g_347[2],&g_347[2],(void*)0,&g_347[2],&g_347[2]};
            int32_t l_1162 = 0x7A69D571L;
            int32_t l_1165 = 0x80E21480L;
            int32_t l_1166 = 0x36504DDBL;
            int32_t l_1171 = (-6L);
            uint32_t l_1173 = 0xD7820D4FL;
            int16_t *l_1236 = (void*)0;
            int i, j;
            for (g_440 = (-3); (g_440 == (-22)); --g_440)
            {
                uint32_t l_1096 = 0xB62972B1L;
                int16_t *l_1116[1];
                int8_t *l_1136[7][10][1] = {{{&g_167},{&l_348},{(void*)0},{&g_347[2]},{&g_347[2]},{&l_348},{&g_347[1]},{&g_347[0]},{(void*)0},{&g_347[0]}},{{&g_347[1]},{&l_348},{&g_347[2]},{&g_347[2]},{(void*)0},{&l_348},{&g_167},{&l_348},{&g_167},{&l_348}},{{(void*)0},{&g_347[2]},{&g_347[2]},{&l_348},{&g_347[1]},{&g_347[0]},{(void*)0},{&g_347[0]},{&g_347[1]},{&l_348}},{{&g_347[2]},{&g_347[2]},{(void*)0},{&l_348},{&g_167},{&l_348},{&g_167},{&l_348},{(void*)0},{&g_347[2]}},{{&g_347[2]},{&l_348},{&g_347[1]},{&g_347[0]},{(void*)0},{&g_347[0]},{&g_347[1]},{&l_348},{&g_347[2]},{&g_347[2]}},{{(void*)0},{&l_348},{&g_167},{&l_348},{&g_167},{&l_348},{(void*)0},{&g_347[2]},{&g_347[2]},{&l_348}},{{&g_347[1]},{&g_347[0]},{(void*)0},{&g_347[0]},{&g_347[1]},{&l_348},{&g_347[2]},{&g_347[2]},{(void*)0},{&l_348}}};
                int32_t l_1156[10] = {0xCE12751DL,0x89B55F9EL,0xCE12751DL,0x4331420FL,0x4331420FL,0xCE12751DL,0x89B55F9EL,0xCE12751DL,0x3C01A410L,0x3C01A410L};
                uint8_t ***l_1185[3];
                int32_t *l_1189 = (void*)0;
                uint8_t ****l_1205[9][10] = {{(void*)0,&l_1186,(void*)0,&g_481[4],&g_486,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4]},{(void*)0,&l_1186,&l_1185[1],&l_1186,(void*)0,(void*)0,(void*)0,&l_1186,&l_1185[1],&l_1186},{&g_486,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4],&g_486,&g_481[4],(void*)0,&l_1186},{(void*)0,&l_1186,(void*)0,&g_481[4],(void*)0,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4]},{&g_486,&l_1186,&l_1185[0],&l_1186,&g_486,(void*)0,&g_486,&l_1186,&l_1185[0],&l_1186},{(void*)0,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4],(void*)0,&g_481[4],(void*)0,&l_1186},{(void*)0,&l_1186,(void*)0,&g_481[4],&g_486,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4]},{(void*)0,&l_1186,&l_1185[1],&l_1186,(void*)0,(void*)0,(void*)0,&l_1186,&l_1185[1],&l_1186},{&g_486,&g_481[4],(void*)0,&l_1186,(void*)0,&g_481[4],&g_486,&g_481[4],(void*)0,&l_1186}};
                uint8_t ***** const l_1204 = &l_1205[5][8];
                uint8_t ***** const *l_1203[10] = {&l_1204,&l_1204,&l_1204,&l_1204,&l_1204,&l_1204,&l_1204,&l_1204,&l_1204,&l_1204};
                int8_t l_1229[5][10] = {{(-9L),(-1L),9L,9L,(-1L),(-9L),0x5CL,0xB9L,1L,0x90L},{(-5L),0x90L,(-4L),0L,0xB9L,0L,(-4L),0x90L,(-5L),(-9L)},{(-5L),9L,0x39L,0x5CL,0L,(-9L),(-9L),0L,0x5CL,0x39L},{(-9L),(-9L),0L,0x5CL,0x39L,9L,(-5L),0xBFL,(-5L),9L},{(-4L),0L,0xB9L,0L,(-4L),0x90L,(-5L),(-9L),1L,1L}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1116[i] = &g_1062;
                for (i = 0; i < 3; i++)
                    l_1185[i] = &l_525;
            }
        }
        else
        {
            int16_t *l_1246 = &l_925[5][3][1];
            uint64_t l_1250 = 18446744073709551613UL;
            int32_t l_1258[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int32_t l_1260 = 0x16172E55L;
            int64_t l_1262 = 0x3744D4FD86238591LL;
            int64_t l_1265 = 0L;
            int i;
lbl_1259:
            for (l_954 = 0; (l_954 >= 2); l_954 = safe_add_func_int32_t_s_s(l_954, 6))
            {
                uint16_t l_1257[3][5][10] = {{{0x9778L,65535UL,65535UL,0x280AL,0x5839L,0x280AL,65535UL,65535UL,0x9778L,0x5839L},{0x32A6L,2UL,5UL,0x280AL,0x46D2L,0xE5FDL,65535UL,0xB5E2L,0x9778L,0x46D2L},{0x3765L,5UL,65535UL,0x280AL,0x9147L,0x9778L,2UL,2UL,0x9778L,0x9147L},{0x46D2L,0x1C40L,0x1C40L,0x46D2L,2UL,0x9147L,0x3CAEL,0xEB56L,0x5839L,2UL},{65526UL,0xEB56L,0x3948L,0x46D2L,0xB5E2L,0x60D2L,0x1C40L,0x3CAEL,0x5839L,0xB5E2L}},{{0x5839L,0xD642L,0xEB56L,0x46D2L,65535UL,0x46D2L,0xEB56L,0xD642L,0x5839L,65535UL},{0x9147L,0x3948L,0x3CAEL,0x46D2L,5UL,65526UL,0xD642L,0x1C40L,0x5839L,5UL},{0x60D2L,0x3CAEL,0xD642L,0x46D2L,65535UL,0x5839L,0x3948L,0x3948L,0x5839L,65535UL},{0x46D2L,0x1C40L,0x1C40L,0x46D2L,2UL,0x9147L,0x3CAEL,0xEB56L,0x5839L,2UL},{65526UL,0xEB56L,0x3948L,0x46D2L,0xB5E2L,0x60D2L,0x1C40L,0x3CAEL,0x5839L,0xB5E2L}},{{0x5839L,0xD642L,0xEB56L,0x46D2L,65535UL,0x46D2L,0xEB56L,0xD642L,0x5839L,65535UL},{0x9147L,0x3948L,0x3CAEL,0x46D2L,5UL,65526UL,0xD642L,0x1C40L,0x5839L,5UL},{0x60D2L,0x3CAEL,0xD642L,0x46D2L,65535UL,0xD642L,0x9778L,0x9778L,0xD642L,0x7C4AL},{0x3CAEL,0x280AL,0x280AL,0x3CAEL,65535UL,0xEB56L,0xE5FDL,0x3765L,0xD642L,65535UL},{0x3948L,0x3765L,0x9778L,0x3CAEL,8UL,0x1C40L,0x280AL,0xE5FDL,0xD642L,8UL}}};
                int i, j, k;
                if ((p_100 , func_120(l_1246)))
                {
                    int32_t l_1247 = 0xE4A9E5EDL;
                    if (l_1247)
                        break;
                    if (g_123)
                        goto lbl_1259;
                }
                else
                {
                    l_1258[6] = ((*g_127) <= (safe_sub_func_int16_t_s_s(((*l_1246) = (l_1250 > p_100)), ((~(safe_div_func_int64_t_s_s(((safe_add_func_int32_t_s_s(p_100, (((p_100 < (safe_div_func_uint64_t_u_u(p_100, p_100))) || l_1257[0][2][3]) & p_99))) ^ 4294967294UL), (*g_262)))) <= g_139))));
                }
                return (*g_158);




            }
            l_1266--;
        }
    }
    return l_1269;



}







static int32_t func_120(int16_t * p_121)
{
    int64_t l_124[2][8] = {{0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL},{0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL,0x3D31FC3C61D2E95CLL}};
    int32_t *l_129 = &g_68[5][1];
    int32_t *l_131 = (void*)0;
    int32_t **l_130 = &l_131;
    int32_t *l_133 = &g_68[3][1];
    int32_t **l_132 = &l_133;
    int32_t *l_134 = &g_128;
    int i, j;
    (*l_134) |= (l_124[1][0] , (safe_add_func_int64_t_s_s(g_68[3][1], ((g_127 = &g_68[3][1]) == ((*l_132) = ((*l_130) = l_129))))));

    (((g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(g_127 >= &g_68[0][0] && g_127 <= &g_68[5][1])", "8.c", 1780, __PRETTY_FUNCTION__));
    (((l_131 >= &g_68[0][0] && l_131 <= &g_68[5][1])) ? (void) (0) : __assert_fail ("(l_131 >= &g_68[0][0] && l_131 <= &g_68[5][1])", "8.c", 1781, __PRETTY_FUNCTION__));
    for (g_123 = 0; (g_123 != 2); g_123 = safe_add_func_int32_t_s_s(g_123, 2))
    {
        uint32_t l_137 = 4294967295UL;
        return l_137;
    }
    return (*g_127);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_347[i], "g_347[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1150[i], "g_1150[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1510, "g_1510", print_hash_value);
    transparent_crc(g_1667, "g_1667", print_hash_value);
    transparent_crc(g_1778, "g_1778", print_hash_value);
    transparent_crc(g_1802, "g_1802", print_hash_value);
    transparent_crc(g_1832, "g_1832", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2066[i][j], "g_2066[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2084[i][j][k], "g_2084[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2086[i], "g_2086[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2115, "g_2115", print_hash_value);
    transparent_crc(g_2175, "g_2175", print_hash_value);
    transparent_crc(g_2193, "g_2193", print_hash_value);
    transparent_crc(g_2212, "g_2212", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2293[i], "g_2293[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2331, "g_2331", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2409[i][j][k], "g_2409[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2424, "g_2424", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
