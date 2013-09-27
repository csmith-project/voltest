# 1 "1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "1.c"
# 10 "1.c"
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
# 11 "1.c" 2


static long __undefined;


union U0 {
   int64_t f0;
   uint32_t f1;
   int8_t f2;
};

union U1 {
   const uint32_t f0;
   const uint16_t f1;
   int8_t f2;
   int16_t f3;
   volatile int8_t f4;
};

union U2 {
   const volatile uint64_t f0;
};

union U3 {
   uint32_t f0;
   uint32_t f1;
   const int8_t * f2;
   int32_t f3;
};


static uint64_t g_30 = 18446744073709551615UL;
static int32_t * volatile g_34 = (void*)0;
static int32_t g_36 = 0xEB64D07DL;
static int32_t * const volatile g_35 = &g_36;
static volatile int16_t g_53 = 0x081BL;
static int32_t g_54 = 0x010F1939L;
static uint32_t g_55 = 18446744073709551614UL;
static int8_t *g_73 = (void*)0;
static int8_t g_90 = (-1L);
static int32_t g_92 = 0L;
static int16_t g_101 = 0xD300L;
static uint32_t g_105[5] = {1UL,1UL,1UL,1UL,1UL};
static int32_t *g_118 = &g_92;
static int32_t ** volatile g_117 = &g_118;
static int32_t * volatile g_119[2] = {&g_36,&g_36};
static int32_t * const volatile g_120 = &g_36;
static uint16_t g_137 = 1UL;
static union U0 g_151 = {0xF880E7157E95F642LL};
static int32_t ** volatile g_160 = &g_118;
static int8_t g_170[2] = {0x33L,0x33L};
static int8_t *g_182[4][7][5] = {{{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_90,&g_170[1]}},{{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]}},{{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]}},{{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]},{&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]}}};
static volatile union U2 g_202 = {9UL};
static volatile union U1 g_233 = {0x3F146284L};
static volatile union U1 * volatile g_232[7][4] = {{(void*)0,(void*)0,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233},{(void*)0,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,(void*)0,&g_233},{&g_233,(void*)0,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233}};
static volatile union U1 g_235 = {4294967293UL};
static volatile int8_t g_269 = 0xE2L;
static int16_t g_312 = 0xE48DL;
static union U3 g_339 = {6UL};
static union U3 *g_341 = &g_339;
static union U3 ** volatile g_340 = &g_341;
static union U2 g_368 = {1UL};
static volatile union U1 g_370[2][1][1] = {{{{0x2A2AF9B5L}}},{{{0x2A2AF9B5L}}}};
static volatile union U1 g_384[7][4][9] = {{{{0UL},{0xCBDFCB6BL},{0x59A9C194L},{0x11216D08L},{4294967287UL},{4294967289UL},{4294967295UL},{4294967289UL},{4294967287UL}},{{0UL},{0x15896220L},{0x15896220L},{0UL},{0x1A76D822L},{0xC3D2FF1BL},{0UL},{4294967295UL},{0xD80E3966L}},{{0UL},{0UL},{0x602DE463L},{0x59A9C194L},{0x04D68C53L},{0x851EC8FEL},{0x851EC8FEL},{0x04D68C53L},{0x59A9C194L}},{{0x0E8AC800L},{8UL},{0x0E8AC800L},{1UL},{0x1A76D822L},{4294967295UL},{4294967288UL},{4294967295UL},{0xC3D2FF1BL}}},{{{9UL},{0UL},{0x04D68C53L},{4294967288UL},{4294967287UL},{0x90295D12L},{4294967287UL},{4294967288UL},{0x04D68C53L}},{{0xC3D2FF1BL},{0xC3D2FF1BL},{8UL},{1UL},{0UL},{0x0E8AC800L},{0xD80E3966L},{0UL},{0x15896220L}},{{4294967295UL},{0x11216D08L},{0x90295D12L},{0x59A9C194L},{0UL},{0UL},{0xC1212F90L},{0UL},{0xCBDFCB6BL}},{{4294967287UL},{5UL},{4294967295UL},{1UL},{0xD80E3966L},{0x15896220L},{5UL},{0UL},{4294967288UL}}},{{{0UL},{0x59A9C194L},{9UL},{0xCBDFCB6BL},{4294967288UL},{0xCBDFCB6BL},{9UL},{0x59A9C194L},{0UL}},{{0xD80E3966L},{5UL},{8UL},{0UL},{5UL},{2UL},{4294967295UL},{4294967295UL},{0xC3D2FF1BL}},{{0UL},{0xCBDFCB6BL},{4294967287UL},{0UL},{0UL},{4294967287UL},{0xCBDFCB6BL},{0UL},{0x602DE463L}},{{0xD80E3966L},{5UL},{4294967295UL},{0x1A76D822L},{0x0E8AC800L},{4294967287UL},{4294967288UL},{0UL},{0UL}}},{{{0UL},{4294967289UL},{0xC1212F90L},{0UL},{0xC1212F90L},{4294967289UL},{0UL},{0UL},{0x602DE463L}},{{4294967287UL},{4294967295UL},{0UL},{5UL},{0UL},{0x0E8AC800L},{0xC3D2FF1BL},{5UL},{0xC3D2FF1BL}},{{0x59A9C194L},{0x04D68C53L},{0x851EC8FEL},{0x851EC8FEL},{0x04D68C53L},{0x59A9C194L},{0x602DE463L},{0UL},{0UL}},{{5UL},{4294967295UL},{0x1A76D822L},{0x0E8AC800L},{4294967287UL},{4294967288UL},{0UL},{0UL},{4294967288UL}}},{{{0x851EC8FEL},{4294967288UL},{0UL},{4294967288UL},{0x851EC8FEL},{0xC1212F90L},{0x602DE463L},{0UL},{0xCBDFCB6BL}},{{0x1A76D822L},{0xC3D2FF1BL},{0UL},{4294967295UL},{0xD80E3966L},{4294967288UL},{2UL},{4294967288UL},{0xD80E3966L}},{{0UL},{0x04D68C53L},{0x04D68C53L},{0UL},{4294967289UL},{4294967288UL},{0xC1212F90L},{0xCBDFCB6BL},{0x90295D12L}},{{5UL},{0x15896220L},{4294967287UL},{0UL},{4294967295UL},{8UL},{8UL},{4294967295UL},{0UL}}},{{{0x851EC8FEL},{0x11216D08L},{0x851EC8FEL},{0UL},{4294967289UL},{0xCBDFCB6BL},{4294967295UL},{9UL},{4294967288UL}},{{0x0E8AC800L},{0x1A76D822L},{4294967295UL},{5UL},{0xD80E3966L},{0UL},{0xD80E3966L},{5UL},{4294967295UL}},{{4294967288UL},{4294967288UL},{0x11216D08L},{0UL},{0UL},{0x851EC8FEL},{0x90295D12L},{0xC1212F90L},{0x04D68C53L}},{{2UL},{4294967295UL},{0UL},{0UL},{1UL},{1UL},{0UL},{0UL},{4294967295UL}}},{{{0x602DE463L},{0UL},{0x11216D08L},{0UL},{4294967287UL},{0UL},{4294967288UL},{0x90295D12L},{4294967289UL}},{{5UL},{2UL},{4294967295UL},{4294967295UL},{0xC3D2FF1BL},{4294967295UL},{4294967295UL},{2UL},{5UL}},{{4294967287UL},{0UL},{0x851EC8FEL},{0x59A9C194L},{4294967288UL},{4294967295UL},{0x04D68C53L},{0x11216D08L},{0xCBDFCB6BL}},{{0UL},{4294967295UL},{4294967287UL},{0UL},{0UL},{0xD80E3966L},{0xC3D2FF1BL},{1UL},{4294967287UL}}}};
static const int8_t g_400 = 0x0CL;
static const int8_t *g_399[7][9] = {{&g_400,(void*)0,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,(void*)0},{&g_400,&g_400,&g_400,(void*)0,&g_400,&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,(void*)0,&g_400,(void*)0,&g_400,&g_400,(void*)0,&g_400},{&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400},{(void*)0,(void*)0,(void*)0,(void*)0,&g_400,&g_400,&g_400,(void*)0,&g_400},{(void*)0,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400,&g_400,(void*)0,&g_400,&g_400,&g_400}};
static const int8_t **g_398 = &g_399[2][7];
static union U1 g_417 = {0x874411FAL};
static union U1 g_454 = {4294967295UL};
static union U1 g_458[10][9] = {{{4294967295UL},{0UL},{0xD2577244L},{4294967295UL},{0xECA38126L},{1UL},{0xB4D52016L},{1UL},{0xECA38126L}},{{0xB4D52016L},{0UL},{0UL},{0xB4D52016L},{0xECA38126L},{4294967295UL},{0UL},{1UL},{0xC97F7B77L}},{{0UL},{0UL},{0x248ECBABL},{0UL},{0xECA38126L},{1UL},{4294967295UL},{1UL},{4294967289UL}},{{4294967295UL},{0UL},{4294967295UL},{4UL},{0UL},{4294967289UL},{4294967292UL},{4294967289UL},{0UL}},{{4294967292UL},{1UL},{1UL},{4294967292UL},{0UL},{0xECA38126L},{4294967295UL},{4294967289UL},{0x248ECBABL}},{{4294967295UL},{1UL},{1UL},{4294967295UL},{0UL},{0xC97F7B77L},{4UL},{4294967289UL},{0xD2577244L}},{{4UL},{1UL},{4294967295UL},{4UL},{0UL},{4294967289UL},{4294967292UL},{4294967289UL},{0UL}},{{4294967292UL},{1UL},{1UL},{4294967292UL},{0UL},{0xECA38126L},{4294967295UL},{4294967289UL},{0x248ECBABL}},{{4294967295UL},{1UL},{1UL},{4294967295UL},{0UL},{0xC97F7B77L},{4UL},{4294967289UL},{0xD2577244L}},{{4UL},{1UL},{4294967295UL},{4UL},{0UL},{4294967289UL},{4294967292UL},{4294967289UL},{0UL}}};
static union U1 g_460 = {1UL};
static union U1 *g_459 = &g_460;
static union U1 g_462 = {0x6449BA6DL};
static union U1 *g_461[3] = {&g_462,&g_462,&g_462};
static volatile int64_t g_465[1] = {(-1L)};
static int32_t ** const volatile g_485 = &g_118;
static volatile union U1 g_525 = {7UL};
static const union U0 *g_530 = &g_151;
static union U1 g_557 = {0x4C765149L};
static union U1 g_560 = {4294967295UL};
static volatile int8_t *g_565 = &g_525.f4;
static volatile int8_t **g_564 = &g_565;
static volatile int8_t ** volatile *g_563[1][9][3] = {{{(void*)0,&g_564,&g_564},{&g_564,&g_564,&g_564},{&g_564,(void*)0,&g_564},{(void*)0,&g_564,&g_564},{&g_564,&g_564,&g_564},{&g_564,&g_564,&g_564},{&g_564,(void*)0,&g_564},{&g_564,&g_564,&g_564},{&g_564,&g_564,(void*)0}}};
static volatile int8_t ** volatile ** volatile g_562[1] = {&g_563[0][1][1]};
static volatile union U1 g_567 = {0xD749065DL};
static union U1 g_571 = {0xEE2C8192L};
static uint8_t g_588 = 1UL;
static union U1 g_597 = {0UL};
static int32_t **g_629 = &g_118;
static int32_t ***g_628 = &g_629;
static union U1 g_635 = {0xE179408BL};
static volatile union U2 g_638[2] = {{3UL},{3UL}};
static union U1 g_647[2] = {{4294967292UL},{4294967292UL}};
static const volatile union U1 g_664[8] = {{0xAFC63319L},{0xAFC63319L},{0xAFC63319L},{0xAFC63319L},{0xAFC63319L},{0xAFC63319L},{0xAFC63319L},{0xAFC63319L}};
static union U2 g_665 = {0x3B3993A93C2E775FLL};
static int32_t g_669 = (-1L);
static union U1 g_677 = {0xE40A5326L};
static volatile union U2 g_678 = {18446744073709551606UL};
static union U2 g_688 = {18446744073709551615UL};
static union U2 *g_687 = &g_688;
static union U2 g_690 = {18446744073709551615UL};
static union U0 *g_697[4] = {&g_151,&g_151,&g_151,&g_151};
static union U0 ** volatile g_696 = &g_697[2];
static union U1 g_701 = {0x7F916125L};
static union U1 g_721 = {4294967295UL};
static volatile uint64_t g_727[2] = {9UL,9UL};
static union U1 g_762 = {0UL};
static union U1 g_776 = {0x8E38D0FFL};
static union U2 g_786[8][9] = {{{3UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551607UL},{18446744073709551611UL},{3UL},{18446744073709551607UL}},{{0x2B2F22F3ABAE6136LL},{0x33EFCAF6EA22F599LL},{0x58014FE3F93ED47ELL},{0x85853E243BABD571LL},{3UL},{0x0B33E6AE0D731469LL},{0UL},{0x656CADCD7B968511LL},{0x58014FE3F93ED47ELL}},{{3UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551607UL},{18446744073709551611UL},{3UL},{18446744073709551607UL}},{{0x2B2F22F3ABAE6136LL},{0x33EFCAF6EA22F599LL},{0x58014FE3F93ED47ELL},{0x85853E243BABD571LL},{3UL},{0x0B33E6AE0D731469LL},{0UL},{0x656CADCD7B968511LL},{0x58014FE3F93ED47ELL}},{{3UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551607UL},{18446744073709551611UL},{3UL},{18446744073709551607UL}},{{0x2B2F22F3ABAE6136LL},{0x33EFCAF6EA22F599LL},{0x58014FE3F93ED47ELL},{0x85853E243BABD571LL},{3UL},{0x0B33E6AE0D731469LL},{0UL},{0x656CADCD7B968511LL},{0x58014FE3F93ED47ELL}},{{3UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551607UL},{18446744073709551611UL},{3UL},{18446744073709551607UL}},{{0x2B2F22F3ABAE6136LL},{0x33EFCAF6EA22F599LL},{0x58014FE3F93ED47ELL},{0x85853E243BABD571LL},{3UL},{0x0B33E6AE0D731469LL},{0UL},{0x656CADCD7B968511LL},{0x58014FE3F93ED47ELL}}};
static union U1 g_826 = {2UL};
static union U2 g_831 = {0x89B98467E3889B13LL};
static union U2 g_846 = {0x1E51A911CCF90A90LL};
static volatile union U2 g_866[4] = {{0x723DF19F0723C06ALL},{0x723DF19F0723C06ALL},{0x723DF19F0723C06ALL},{0x723DF19F0723C06ALL}};
static union U2 g_887 = {18446744073709551610UL};
static union U2 g_910 = {3UL};
static union U2 g_931 = {0xF2BEFD0D7F5ECA05LL};
static int32_t *g_934 = &g_92;
static int32_t ** volatile g_933 = &g_934;
static volatile union U1 g_935 = {0x85A65EA6L};
static union U1 g_972 = {4294967292UL};
static volatile union U2 g_973 = {0xE6575A9D00844377LL};
static volatile uint64_t g_1002 = 0x87B700AC49C84CF2LL;
static union U2 g_1017 = {18446744073709551615UL};
static union U2 g_1018[3][3] = {{{18446744073709551611UL},{18446744073709551611UL},{18446744073709551611UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551611UL},{18446744073709551611UL},{18446744073709551611UL}}};
static volatile uint8_t *g_1034 = (void*)0;
static volatile uint8_t * volatile * volatile g_1033 = &g_1034;
static int8_t g_1043 = 0xA7L;
static volatile uint16_t g_1045[2] = {5UL,5UL};
static volatile int32_t g_1072[10] = {0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L,0xFCC86A64L};
static int32_t ** volatile g_1107[9] = {&g_934,&g_934,&g_934,&g_934,&g_934,&g_934,&g_934,&g_934,&g_934};
static union U2 g_1117[9][1] = {{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}},{{0xCF0D8F0E755A9464LL}}};
static union U2 g_1118 = {0xAA8BDEB41A519F5FLL};
static union U3 ** volatile g_1119[7] = {&g_341,&g_341,&g_341,&g_341,&g_341,&g_341,&g_341};
static union U1 ** volatile g_1131 = &g_459;
static union U2 g_1158 = {18446744073709551609UL};
static uint64_t g_1194[1][9][9] = {{{0x0C4A90ADCBE2C7F7LL,0x4E0A98CE38745374LL,0x4E0A98CE38745374LL,0x0C4A90ADCBE2C7F7LL,0xB10C5D13D2E135CCLL,18446744073709551615UL,0xB10C5D13D2E135CCLL,0x0C4A90ADCBE2C7F7LL,0x4E0A98CE38745374LL},{4UL,4UL,7UL,18446744073709551614UL,0x65BFCA25E0522E62LL,18446744073709551614UL,7UL,4UL,4UL},{0x4E0A98CE38745374LL,0x0C4A90ADCBE2C7F7LL,0xB10C5D13D2E135CCLL,18446744073709551615UL,0xB10C5D13D2E135CCLL,0x0C4A90ADCBE2C7F7LL,0x4E0A98CE38745374LL,0x4E0A98CE38745374LL,0x0C4A90ADCBE2C7F7LL},{18446744073709551614UL,0x6A6747A9B35B5C66LL,7UL,0x6A6747A9B35B5C66LL,18446744073709551614UL,7UL,7UL,18446744073709551614UL,0x6A6747A9B35B5C66LL},{0x4E0A98CE38745374LL,0xB10C5D13D2E135CCLL,0x4E0A98CE38745374LL,0x8C4ADEACD299BA28LL,0x49F44C1DE096112DLL,0x49F44C1DE096112DLL,0x8C4ADEACD299BA28LL,0x4E0A98CE38745374LL,0xB10C5D13D2E135CCLL},{4UL,1UL,7UL,7UL,7UL,7UL,1UL,4UL,7UL},{18446744073709551615UL,0x49F44C1DE096112DLL,0xB10C5D13D2E135CCLL,0xB10C5D13D2E135CCLL,0x49F44C1DE096112DLL,18446744073709551615UL,1UL,18446744073709551615UL,0x49F44C1DE096112DLL},{18446744073709551614UL,7UL,7UL,18446744073709551614UL,0x6A6747A9B35B5C66LL,7UL,0x6A6747A9B35B5C66LL,18446744073709551614UL,7UL},{0x0C4A90ADCBE2C7F7LL,0x0C4A90ADCBE2C7F7LL,1UL,0x49F44C1DE096112DLL,0x4E0A98CE38745374LL,0x49F44C1DE096112DLL,1UL,0x0C4A90ADCBE2C7F7LL,0x0C4A90ADCBE2C7F7LL}}};
static union U3 ** volatile g_1198 = &g_341;
static int32_t * volatile g_1199 = &g_36;
static uint8_t ***g_1208 = (void*)0;
static int32_t * volatile g_1243[4] = {&g_36,&g_36,&g_36,&g_36};
static int32_t g_1275 = 0x67E184E1L;
static uint16_t g_1314[1] = {0xCDBDL};



static const uint32_t func_1(void);
static int32_t func_3(const int8_t * p_4, int32_t p_5, int8_t * p_6, uint32_t p_7, int8_t p_8);
static const int8_t * func_9(uint64_t p_10, const uint16_t p_11, uint8_t p_12, union U3 p_13);
static const uint16_t func_15(int8_t * p_16, uint32_t p_17, int8_t * p_18, int8_t * p_19, int8_t * p_20);
static int8_t * func_21(int8_t p_22, int16_t p_23);
static int16_t func_26(uint64_t p_27, int32_t p_28, uint64_t p_29);
static union U2 func_58(int16_t p_59, int32_t p_60, union U0 p_61);
static union U1 func_62(int8_t * p_63, union U0 p_64);
static union U0 func_66(union U0 p_67, uint32_t p_68);
static union U0 func_69(const uint16_t p_70, int8_t * p_71, int8_t * p_72);
# 174 "1.c"
static const uint32_t func_1(void)
{
    int8_t l_2 = 0xBAL;
    int32_t l_1162 = (-1L);
    int32_t l_1255 = (-9L);
    uint64_t l_1263 = 0xA78D6BD7B4C4F2A3LL;
    uint32_t l_1344 = 4294967295UL;
    uint32_t l_1360 = 0x799755A3L;
    if (l_2)
    {
        uint8_t l_14 = 6UL;
        int16_t *l_1161[3];
        uint16_t *l_1170 = (void*)0;
        uint16_t *l_1171 = &g_137;
        union U3 l_1172 = {4294967295UL};
        uint64_t l_1177 = 0xB37F1464C2E799ECLL;
        union U0 l_1239 = {-6L};
        int16_t l_1252 = 0xD839L;
        int32_t l_1253 = (-1L);
        int32_t * const l_1274 = &g_1275;
        int32_t * const *l_1273[10][6] = {{&l_1274,(void*)0,&l_1274,(void*)0,&l_1274,&l_1274},{&l_1274,(void*)0,&l_1274,&l_1274,(void*)0,&l_1274},{&l_1274,(void*)0,&l_1274,(void*)0,&l_1274,&l_1274},{&l_1274,(void*)0,&l_1274,(void*)0,&l_1274,(void*)0},{&l_1274,&l_1274,(void*)0,(void*)0,&l_1274,&l_1274},{&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274},{&l_1274,&l_1274,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,&l_1274},{(void*)0,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274},{&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274}};
        int32_t * const **l_1272 = &l_1273[1][3];
        int32_t * const ***l_1271 = &l_1272;
        int8_t *l_1278 = &g_462.f2;
        int8_t **l_1283 = &l_1278;
        int8_t ***l_1282 = &l_1283;
        uint64_t l_1290 = 0x51A6FEF05EB41E8ALL;
        int32_t l_1315 = 0xE4ADEE0EL;
        uint32_t l_1330 = 0x13605890L;
        int64_t l_1331[2][10] = {{1L,0x5454257BA0937AC5LL,0xC8174DD961D04AC6LL,0x97C5C4CACDA3789ELL,0x5454257BA0937AC5LL,0x97C5C4CACDA3789ELL,0xC8174DD961D04AC6LL,0xC8174DD961D04AC6LL,0x97C5C4CACDA3789ELL,0x5454257BA0937AC5LL},{0x97C5C4CACDA3789ELL,0xC8174DD961D04AC6LL,0xC8174DD961D04AC6LL,0x97C5C4CACDA3789ELL,0x5454257BA0937AC5LL,0x97C5C4CACDA3789ELL,0xC8174DD961D04AC6LL,0xC8174DD961D04AC6LL,0x97C5C4CACDA3789ELL,0x5454257BA0937AC5LL}};
        int64_t l_1334 = 0L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1161[i] = &g_460.f3;
        if (func_3(func_9(l_14, ((*l_1171) = func_15(func_21((safe_mul_func_int16_t_s_s(func_26(g_30, l_2, g_30), (l_1162 = (safe_sub_func_int64_t_s_s(g_635.f0, l_2))))), l_14), g_635.f1, &g_170[1], &g_90, &g_170[1])), l_14, l_1172), g_762.f2, &g_170[1], l_1177, l_2))
        {
            uint32_t l_1215 = 1UL;
            union U3 l_1251 = {6UL};
            int32_t l_1259 = 0x44538F4DL;
            int32_t l_1260 = (-10L);
            int32_t l_1261 = 1L;
            int32_t l_1262 = (-2L);
            for (g_635.f2 = 17; (g_635.f2 >= 3); g_635.f2 = safe_sub_func_int64_t_s_s(g_635.f2, 4))
            {
                int32_t l_1202 = 4L;
                uint32_t l_1203 = 0x9D4845CAL;
                int8_t *l_1204[9][7][4] = {{{&g_1043,&g_972.f2,&g_762.f2,&g_701.f2},{(void*)0,(void*)0,&g_462.f2,&g_677.f2},{(void*)0,(void*)0,&g_151.f2,&g_597.f2},{(void*)0,&g_571.f2,(void*)0,&g_560.f2},{&g_170[1],&g_826.f2,&g_151.f2,&g_170[0]},{&l_2,&g_677.f2,&g_721.f2,&g_677.f2},{&g_597.f2,&g_151.f2,(void*)0,&g_701.f2}},{{&g_170[1],&g_454.f2,&g_170[1],&g_721.f2},{&g_597.f2,(void*)0,(void*)0,&g_721.f2},{&g_557.f2,&g_647[0].f2,&g_460.f2,&g_170[1]},{&g_647[0].f2,&g_972.f2,&g_170[1],&g_460.f2},{&g_701.f2,&g_454.f2,&g_560.f2,&g_776.f2},{&g_762.f2,&g_701.f2,&g_826.f2,&l_2},{&g_170[0],(void*)0,&g_776.f2,(void*)0}},{{&g_417.f2,&g_557.f2,&g_458[1][5].f2,&g_826.f2},{(void*)0,&g_635.f2,(void*)0,&g_151.f2},{(void*)0,(void*)0,&g_762.f2,(void*)0},{(void*)0,&g_170[0],&g_571.f2,&g_557.f2},{&g_972.f2,&g_597.f2,&g_597.f2,&g_762.f2},{&g_647[0].f2,&g_1043,&g_701.f2,&g_1043},{(void*)0,&g_170[0],(void*)0,&g_151.f2}},{{&g_677.f2,&g_762.f2,&g_571.f2,(void*)0},{&g_170[0],&g_776.f2,(void*)0,&g_762.f2},{&g_1043,&g_151.f2,(void*)0,(void*)0},{&g_170[0],&g_170[1],&g_571.f2,&g_90},{&g_677.f2,&g_170[0],(void*)0,&g_597.f2},{(void*)0,&g_597.f2,&g_701.f2,(void*)0},{&g_647[0].f2,&g_454.f2,&g_454.f2,&g_462.f2}},{{&g_417.f2,&g_151.f2,&g_462.f2,(void*)0},{(void*)0,&g_417.f2,(void*)0,&g_557.f2},{&g_972.f2,&g_647[0].f2,&g_597.f2,&g_762.f2},{&g_677.f2,(void*)0,&g_597.f2,&g_571.f2},{(void*)0,&g_972.f2,&g_762.f2,&g_647[0].f2},{&g_826.f2,(void*)0,&g_557.f2,(void*)0},{&g_90,&g_462.f2,&g_677.f2,&g_701.f2}},{{&g_571.f2,(void*)0,&g_597.f2,(void*)0},{(void*)0,&g_460.f2,(void*)0,&g_677.f2},{(void*)0,&g_701.f2,&g_647[0].f2,&g_677.f2},{&g_454.f2,(void*)0,(void*)0,(void*)0},{&g_701.f2,(void*)0,&g_571.f2,(void*)0},{&g_677.f2,&g_597.f2,&g_560.f2,&g_635.f2},{(void*)0,&g_170[1],&g_597.f2,&g_701.f2}},{{&g_597.f2,(void*)0,&g_701.f2,(void*)0},{&g_1043,&g_170[1],&g_557.f2,&g_677.f2},{&g_170[1],&g_677.f2,&g_701.f2,&g_721.f2},{&g_571.f2,&g_972.f2,&g_972.f2,&g_571.f2},{&g_762.f2,&g_762.f2,&g_571.f2,(void*)0},{&g_677.f2,&g_462.f2,&g_721.f2,&g_557.f2},{&g_557.f2,&g_647[0].f2,&g_647[0].f2,&g_557.f2}},{{(void*)0,&g_462.f2,&g_151.f2,(void*)0},{&g_701.f2,&g_762.f2,(void*)0,&g_571.f2},{&g_721.f2,&g_972.f2,&g_1043,&g_721.f2},{&g_170[1],&g_677.f2,&g_597.f2,&g_677.f2},{&g_826.f2,&g_170[1],&g_762.f2,&g_1043},{(void*)0,(void*)0,&g_721.f2,(void*)0},{&g_762.f2,&g_151.f2,&g_597.f2,&g_151.f2}},{{&g_170[0],(void*)0,&g_762.f2,&g_460.f2},{&g_460.f2,(void*)0,&g_597.f2,&g_460.f2},{&g_560.f2,&g_557.f2,&g_170[1],(void*)0},{&g_762.f2,(void*)0,&g_701.f2,&g_972.f2},{&g_972.f2,(void*)0,&g_647[0].f2,(void*)0},{&g_454.f2,&g_460.f2,&g_677.f2,&g_458[1][5].f2},{&g_826.f2,&g_677.f2,(void*)0,&g_597.f2}}};
                int32_t l_1225 = 0x5F088E0AL;
                int32_t l_1242[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int i, j, k;
                if (((*g_35) = ((*g_934) = (**g_117))))
                {
                    (**g_629) = (+l_1162);
                    for (g_571.f2 = 26; (g_571.f2 != (-19)); g_571.f2--)
                    {
                        int32_t *l_1207 = &g_92;
                        l_1207 = (*g_933);
                        (***g_628) ^= l_1177;
                        if (l_1202)
                            break;
                    }
                }
                else
                {
                    uint8_t ****l_1209 = &g_1208;
                    int8_t *l_1210 = &g_454.f2;
                    int32_t l_1224[10][6][4] = {{{4L,0xC6DAC63EL,0L,(-5L)},{0x3E752CAEL,0xC6DAC63EL,0x3E752CAEL,4L},{0x3E752CAEL,0x38185E45L,(-5L),0xAE07DE12L},{0xAE07DE12L,0L,(-2L),0x38185E45L},{4L,(-2L),(-2L),4L},{0xAE07DE12L,4L,(-5L),0x78DA7AE8L}},{{0x3E752CAEL,(-1L),0x78DA7AE8L,(-1L)},{0x78DA7AE8L,(-1L),0L,(-1L)},{(-2L),(-1L),0L,0x78DA7AE8L},{0xC6DAC63EL,4L,(-1L),4L},{0L,(-2L),0x38185E45L,0x38185E45L},{0L,0L,(-1L),0xAE07DE12L}},{{0xC6DAC63EL,0x38185E45L,0L,4L},{(-2L),0x3E752CAEL,0L,0L},{0x78DA7AE8L,0x3E752CAEL,0x78DA7AE8L,4L},{0x3E752CAEL,0x38185E45L,(-5L),0xAE07DE12L},{0xAE07DE12L,0L,(-2L),0x38185E45L},{4L,(-2L),(-2L),4L}},{{0xAE07DE12L,4L,(-5L),0x78DA7AE8L},{0x3E752CAEL,(-1L),0x78DA7AE8L,(-1L)},{0x78DA7AE8L,(-1L),0L,(-1L)},{(-2L),(-1L),0L,0x78DA7AE8L},{0xC6DAC63EL,4L,(-1L),4L},{0L,(-2L),0x38185E45L,0x38185E45L}},{{0L,0L,(-1L),0xAE07DE12L},{0xC6DAC63EL,0x38185E45L,0L,(-2L)},{(-1L),0x78DA7AE8L,(-1L),0L},{0xAE07DE12L,0x78DA7AE8L,0xAE07DE12L,(-2L)},{0x78DA7AE8L,4L,0L,0x38185E45L},{0x38185E45L,0L,(-1L),4L}},{{(-5L),(-1L),(-1L),(-5L)},{0x38185E45L,(-2L),0L,0xAE07DE12L},{0x78DA7AE8L,4L,0xAE07DE12L,0xC6DAC63EL},{0xAE07DE12L,0xC6DAC63EL,(-1L),0xC6DAC63EL},{(-1L),4L,0L,0xAE07DE12L},{0x3E752CAEL,(-2L),0xC6DAC63EL,(-5L)}},{{0L,(-1L),4L,4L},{0L,0L,0xC6DAC63EL,0x38185E45L},{0x3E752CAEL,4L,0L,(-2L)},{(-1L),0x78DA7AE8L,(-1L),0L},{0xAE07DE12L,0x78DA7AE8L,0xAE07DE12L,(-2L)},{0x78DA7AE8L,4L,0L,0x38185E45L}},{{0x38185E45L,0L,(-1L),4L},{(-5L),(-1L),(-1L),(-5L)},{0x38185E45L,(-2L),0L,0xAE07DE12L},{0x78DA7AE8L,4L,0xAE07DE12L,0xC6DAC63EL},{0xAE07DE12L,0xC6DAC63EL,(-1L),0xC6DAC63EL},{(-1L),4L,0L,0xAE07DE12L}},{{0x3E752CAEL,(-2L),0xC6DAC63EL,(-5L)},{0L,(-1L),(-2L),(-2L)},{(-1L),(-1L),0x3E752CAEL,4L},{0x78DA7AE8L,(-2L),(-1L),(-1L)},{4L,0xAE07DE12L,0xC6DAC63EL,(-1L)},{0x38185E45L,0xAE07DE12L,0x38185E45L,(-1L)}},{{0xAE07DE12L,(-2L),0L,4L},{4L,(-1L),4L,(-2L)},{0L,4L,4L,0L},{4L,(-1L),0L,0x38185E45L},{0xAE07DE12L,(-5L),0x38185E45L,0x3E752CAEL},{0x38185E45L,0x3E752CAEL,0xC6DAC63EL,0x3E752CAEL}}};
                    int i, j, k;
                    if (func_3((*g_398), (((*l_1209) = g_1208) != (void*)0), l_1210, ((g_567.f1 , 0x90B6CDF6L) , g_460.f1), (safe_div_func_uint16_t_u_u(g_557.f3, (l_1162 = g_454.f3)))))
                    {
                        uint8_t *l_1216 = &g_588;
                        const int32_t l_1217[5] = {0L,0L,0L,0L,0L};
                        int8_t l_1234 = 5L;
                        int32_t *l_1244 = &l_1242[6];
                        int i;
                        (***g_628) = (func_3(((*g_398) = (*g_398)), ((safe_sub_func_uint8_t_u_u((~((*l_1216) = l_1215)), l_1217[2])) | (l_1215 && (safe_mod_func_int32_t_s_s((**g_629), 0x191FEDB5L)))), &l_2, func_26((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((*l_1210) = (l_1224[7][4][3] , (l_1225 != g_665.f0))), 7)), 4)), g_647[0].f1, l_1224[9][4][1]), l_1172.f0) || l_1172.f1);
                        l_1242[4] ^= ((safe_mod_func_int32_t_s_s(((**g_629) = ((*g_341) , (*g_35))), (safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((l_1224[3][2][1] >= l_1234), (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_1202 && (l_1239 , g_635.f2)), g_677.f0)), ((*l_1210) ^= (safe_div_func_uint32_t_u_u(0xB7C8402EL, l_1225))))))) ^ g_557.f2) == g_560.f1), l_1215)), g_776.f3)))) & l_1224[7][4][3]);
                        (*l_1244) &= ((**g_629) = (l_1224[5][2][2] != l_2));
                        (*g_934) = l_1202;
                    }
                    else
                    {
                        uint8_t *l_1245 = &l_14;
                        union U3 **l_1246 = &g_341;
                        (*g_934) ^= (l_1172.f1 ^ ((*l_1245) = 1UL));
                        (*l_1246) = (*g_340);
                    }
                    return g_1072[3];
                }
                (*g_118) = (l_1215 != (l_1242[4] , (0x89L <= 0L)));
                for (g_701.f3 = 0; (g_701.f3 != 28); ++g_701.f3)
                {
                    int32_t *l_1254 = &l_1162;
                    int32_t *l_1256 = &g_92;
                    int32_t *l_1257 = &l_1253;
                    int32_t *l_1258[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1258[i] = &l_1242[3];
                    (*g_934) = (l_2 <= g_701.f4);
                    l_1252 = ((***g_628) = (safe_add_func_uint64_t_u_u((l_1251 , (3L || 0UL)), g_635.f4)));
                    l_1263--;
                }
            }
        }
        else
        {
            int32_t *l_1268 = &g_54;
            union U3 **l_1277 = &g_341;
            union U3 ***l_1276 = &l_1277;
            int32_t l_1279 = (-1L);
            int32_t l_1312 = 0x61B21F98L;
            int32_t l_1316 = 4L;
            const uint8_t *l_1323 = &l_14;
            const uint8_t **l_1322 = &l_1323;
            uint64_t l_1325 = 18446744073709551612UL;
            uint16_t l_1328 = 1UL;
            int64_t l_1333 = 0xC53FADB878F43EFFLL;
            uint32_t l_1335 = 0xCCCBFDBAL;
            (**g_629) ^= (safe_add_func_uint16_t_u_u(l_1172.f1, g_235.f1));
            if (g_635.f0)
                goto lbl_1291;
            (*g_629) = (func_58((((*l_1268) = g_312) , (safe_mul_func_uint16_t_u_u(((((*g_459) , (*g_687)) , (void*)0) != (l_1271 = (void*)0)), (((*l_1276) = &g_341) != &g_341)))), g_677.f3, (*g_530)) , (*g_485));
lbl_1291:
            (*g_118) = (*g_118);
            for (g_30 = 0; (g_30 >= 39); g_30 = safe_add_func_uint16_t_u_u(g_30, 9))
            {
                uint8_t l_1294[6];
                union U0 *l_1303 = &l_1239;
                uint16_t *l_1313[3][5] = {{&g_1314[0],&g_1314[0],&g_1314[0],&g_1314[0],&g_1314[0]},{(void*)0,&g_1314[0],(void*)0,&g_1314[0],(void*)0},{&g_1314[0],&g_1314[0],&g_1314[0],&g_1314[0],&g_1314[0]}};
                union U2 **l_1317[3][9][9] = {{{(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,&g_687},{&g_687,&g_687,&g_687,(void*)0,(void*)0,&g_687,(void*)0,(void*)0,&g_687},{&g_687,&g_687,&g_687,&g_687,(void*)0,(void*)0,&g_687,&g_687,&g_687},{&g_687,(void*)0,&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,(void*)0,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0},{(void*)0,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,(void*)0},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0}},{{(void*)0,&g_687,&g_687,(void*)0,(void*)0,&g_687,&g_687,&g_687,&g_687},{&g_687,(void*)0,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687,(void*)0},{(void*)0,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687,(void*)0,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0},{&g_687,(void*)0,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,(void*)0,&g_687},{(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687}},{{&g_687,(void*)0,&g_687,(void*)0,(void*)0,&g_687,(void*)0,&g_687,(void*)0},{(void*)0,&g_687,&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687},{&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,&g_687},{(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0,&g_687,&g_687,&g_687},{&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687,(void*)0},{(void*)0,&g_687,(void*)0,&g_687,&g_687,&g_687,&g_687,&g_687,&g_687},{(void*)0,(void*)0,&g_687,(void*)0,&g_687,(void*)0,(void*)0,&g_687,(void*)0}}};
                int32_t l_1332 = 8L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1294[i] = 251UL;
                --l_1294[2];
                if (((l_1316 &= (g_690.f0 || (safe_lshift_func_uint8_t_u_s(((-5L) < (((*l_1282) != ((((safe_sub_func_int16_t_s_s((func_26(((safe_lshift_func_int16_t_s_u(g_831.f0, (g_701.f3 , ((void*)0 != l_1303)))) == (safe_lshift_func_uint16_t_u_u((l_1315 = (safe_mul_func_uint16_t_u_u(((*l_1171) |= (safe_lshift_func_int8_t_s_u(((l_1294[2] < (l_1279 |= ((safe_sub_func_uint16_t_u_u(((void*)0 != &g_399[1][0]), g_462.f0)) == 0x4C45L))) ^ g_647[0].f2), l_1312))), l_1312))), 12))), l_1312, g_762.f2) && 0x2F856994D6D66813LL), g_339.f3)) == l_1294[2]) & (*g_118)) , (void*)0)) && l_1294[0])), 7)))) == l_1312))
                {
                    uint8_t l_1329 = 246UL;
                    if (((*g_118) = (((l_1317[0][0][3] = l_1317[2][1][6]) != &g_687) , (safe_sub_func_int32_t_s_s((l_1279 = (safe_div_func_int64_t_s_s(1L, 0xB1C06BF51F07B77DLL))), 4294967287UL)))))
                    {
                        const uint8_t ***l_1324 = &l_1322;
                        (**g_628) = (*g_485);
                        (**g_628) = (*g_117);
                        (*g_629) = &l_1162;
                        (*l_1324) = l_1322;
                    }
                    else
                    {
                        l_1325++;
                        l_1331[1][0] = ((*g_934) = (g_370[1][0][0].f2 , func_26(((l_1328 || l_1329) > (**g_485)), g_762.f0, (l_1330 == (***g_628)))));
                    }
                    l_1335--;
                }
                else
                {
                    volatile union U2 *l_1339 = &g_638[0];
                    volatile union U2 **l_1338 = &l_1339;
                    (*g_160) = (*g_160);
                    (*l_1338) = &g_866[0];
                    l_1332 = ((*g_934) = (g_721.f4 ^ (safe_rshift_func_uint8_t_u_u((l_1263 < (safe_sub_func_int16_t_s_s(0x9AA6L, 0x22ABL))), 3))));
                    l_1344--;
                }
            }
        }
    }
    else
    {
        int64_t l_1349[6];
        uint32_t *l_1350 = &g_105[4];
        int8_t * const *l_1357[6][10][4] = {{{&g_182[1][6][3],&g_182[1][0][3],&g_73,&g_73},{&g_182[1][0][3],&g_182[1][4][3],(void*)0,&g_73},{(void*)0,(void*)0,(void*)0,&g_182[1][0][3]},{&g_182[1][0][3],(void*)0,&g_182[1][0][3],&g_73},{&g_182[1][0][3],&g_73,&g_182[3][0][4],(void*)0},{(void*)0,&g_182[1][0][3],&g_73,&g_73},{(void*)0,&g_73,&g_182[1][0][3],&g_182[0][5][1]},{&g_182[1][0][3],&g_73,(void*)0,&g_182[3][4][3]},{&g_182[1][0][3],&g_182[1][1][1],&g_182[3][0][3],&g_182[1][0][3]},{&g_182[1][0][3],&g_182[3][4][2],(void*)0,&g_182[1][0][3]}},{{&g_182[1][0][3],(void*)0,&g_73,&g_182[3][1][3]},{&g_73,&g_182[1][0][3],&g_182[1][0][3],&g_73},{(void*)0,&g_182[1][0][3],&g_182[1][0][3],&g_73},{&g_73,(void*)0,&g_182[1][0][3],(void*)0},{(void*)0,&g_73,&g_73,(void*)0},{&g_182[1][4][3],(void*)0,&g_73,&g_73},{&g_182[0][3][4],&g_182[1][0][3],&g_73,&g_73},{&g_182[1][0][3],&g_182[1][0][3],(void*)0,&g_182[3][1][3]},{&g_73,(void*)0,&g_73,&g_182[1][0][3]},{&g_182[1][0][3],&g_182[1][0][3],&g_182[1][0][3],(void*)0}},{{&g_182[1][0][3],&g_73,(void*)0,(void*)0},{&g_73,&g_73,&g_182[1][0][3],&g_73},{&g_73,&g_182[1][0][3],(void*)0,&g_182[1][0][3]},{&g_182[1][0][3],&g_182[3][0][3],&g_73,&g_182[2][1][2]},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_73,&g_182[0][3][4],&g_182[1][0][3],(void*)0},{&g_182[1][0][3],&g_73,(void*)0,&g_182[1][0][3]},{&g_182[1][0][3],&g_73,&g_73,&g_182[1][0][3]},{&g_182[1][0][3],&g_182[1][0][3],&g_182[0][2][1],(void*)0},{&g_73,&g_182[1][0][3],&g_182[1][0][3],&g_182[1][0][3]}},{{&g_182[1][0][3],&g_73,&g_182[3][4][2],&g_73},{(void*)0,&g_73,(void*)0,&g_182[0][6][2]},{&g_73,&g_182[0][5][1],(void*)0,&g_182[1][6][3]},{&g_73,&g_182[1][4][3],&g_182[3][0][3],&g_182[1][0][3]},{&g_182[1][0][3],&g_182[1][0][3],&g_73,&g_182[1][0][3]},{&g_73,&g_73,(void*)0,&g_73},{&g_182[1][0][3],(void*)0,&g_182[1][0][3],&g_182[1][0][3]},{&g_182[1][0][3],(void*)0,&g_73,&g_182[3][0][4]},{&g_73,&g_182[0][6][2],&g_182[1][0][3],&g_182[1][0][3]},{&g_73,&g_73,&g_73,&g_73}},{{&g_182[1][0][3],&g_182[1][0][3],&g_182[1][0][3],&g_182[1][0][3]},{&g_182[1][0][3],&g_182[1][0][3],(void*)0,&g_182[1][0][3]},{&g_73,(void*)0,&g_73,(void*)0},{&g_182[1][0][3],&g_182[1][0][3],&g_73,&g_73},{&g_73,(void*)0,(void*)0,&g_182[1][0][3]},{(void*)0,&g_73,(void*)0,(void*)0},{&g_182[1][1][1],&g_182[1][0][3],&g_182[1][0][3],&g_182[1][0][3]},{&g_182[0][6][2],&g_73,&g_182[1][0][3],&g_73},{&g_182[1][0][3],(void*)0,&g_182[1][0][3],&g_182[3][4][3]},{&g_182[1][0][3],&g_182[1][1][1],&g_182[1][0][3],(void*)0}},{{&g_182[1][0][3],&g_73,&g_73,&g_182[1][0][3]},{&g_73,&g_182[1][0][3],(void*)0,(void*)0},{&g_182[1][0][3],(void*)0,&g_73,&g_73},{&g_73,&g_73,(void*)0,&g_73},{(void*)0,&g_73,&g_73,&g_182[3][0][3]},{&g_182[1][0][3],&g_182[3][0][4],&g_182[1][0][3],&g_73},{&g_182[1][1][1],&g_182[1][0][3],(void*)0,&g_73},{&g_182[1][4][3],&g_73,&g_73,&g_182[1][0][3]},{&g_182[1][0][3],(void*)0,&g_182[1][0][3],&g_182[0][5][1]},{&g_182[1][0][3],&g_182[1][0][3],(void*)0,(void*)0}}};
        int8_t * const **l_1356 = &l_1357[1][5][3];
        int8_t * const ***l_1355 = &l_1356;
        uint8_t *l_1359 = &g_588;
        uint8_t **l_1358 = &l_1359;
        int32_t l_1361[10][3][3] = {{{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L}},{{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L}},{{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L}},{{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L}},{{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L}},{{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L}},{{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L}},{{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L}},{{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L}},{{0x6A8A6511L,5L,0x6A8A6511L},{0x5AD90EF2L,0x5AD90EF2L,0x5AD90EF2L},{0x6A8A6511L,5L,0x6A8A6511L}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1349[i] = 0L;
        l_1162 = ((safe_mul_func_int8_t_s_s(l_1349[2], (l_1361[8][1][1] = ((((*l_1350)++) , (((*g_687) , ((l_1263 , (safe_rshift_func_int16_t_s_s(l_1162, (((void*)0 != l_1355) ^ (l_1255 = ((void*)0 == l_1358)))))) >= l_1344)) && 0x7D7D5E53L)) & l_1360)))) != l_2);
    }
    return l_1263;
}







static int32_t func_3(const int8_t * p_4, int32_t p_5, int8_t * p_6, uint32_t p_7, int8_t p_8)
{
    uint64_t l_1178 = 0x70518E9C0A8AD540LL;
    int32_t l_1187 = 0L;
    int32_t l_1188 = 0L;
    uint32_t l_1189 = 18446744073709551612UL;
    int32_t l_1192 = 0xF08C6981L;
    int32_t l_1193 = 0x73709608L;
    (*g_118) &= 4L;
    (**g_629) &= l_1178;
    for (g_151.f0 = 0; (g_151.f0 != (-27)); g_151.f0--)
    {
        int32_t l_1183 = (-1L);
        int32_t l_1186[10];
        union U3 *l_1197 = &g_339;
        int i;
        for (i = 0; i < 10; i++)
            l_1186[i] = 0x4A49FADEL;
    }
    (*g_1199) &= (***g_628);
    return l_1188;
}







static const int8_t * func_9(uint64_t p_10, const uint16_t p_11, uint8_t p_12, union U3 p_13)
{
    const int8_t *l_1175 = &g_647[0].f2;
    const int8_t *l_1176 = (void*)0;
    (*g_118) |= (-1L);
    for (g_597.f2 = (-19); (g_597.f2 <= (-28)); --g_597.f2)
    {
        return l_1175;
    }
    return l_1176;
}







static const uint16_t func_15(int8_t * p_16, uint32_t p_17, int8_t * p_18, int8_t * p_19, int8_t * p_20)
{
    uint64_t *l_1168 = (void*)0;
    uint64_t *l_1169 = &g_30;
    (*g_118) = (safe_sub_func_uint64_t_u_u(g_597.f3, ((*l_1169) ^= p_17)));
    return g_1043;
}







static int8_t * func_21(int8_t p_22, int16_t p_23)
{
    int16_t l_1163 = 0x72EBL;
    int32_t l_1164 = 1L;
    int32_t l_1165 = 0x662FB31AL;
    l_1165 = (g_762.f2 < ((p_23 != ((*g_118) = (l_1164 = l_1163))) , g_400));
    return &g_90;
}







static int16_t func_26(uint64_t p_27, int32_t p_28, uint64_t p_29)
{
    int8_t l_33 = (-7L);
    union U3 l_39[4][1][2] = {{{{0x355C0C8FL},{0x355C0C8FL}}},{{{0x355C0C8FL},{0x355C0C8FL}}},{{{0x355C0C8FL},{0x355C0C8FL}}},{{{0x355C0C8FL},{0x355C0C8FL}}}};
    int32_t l_48[3][8] = {{1L,0L,1L,(-3L),2L,2L,(-3L),1L},{0L,0L,2L,0x17B4D2C2L,0xF402BE2FL,0x17B4D2C2L,2L,0L},{0L,1L,(-3L),2L,2L,(-3L),1L,0L}};
    int64_t l_52 = 0L;
    int i, j, k;
    (*g_35) = (safe_mul_func_int16_t_s_s(l_33, l_33));
    for (p_28 = 0; (p_28 != (-19)); --p_28)
    {
        int32_t l_45 = 0x69C1477AL;
        int32_t l_49 = 0xE255BB5FL;
        int32_t l_50 = 0x53A21B78L;
        int32_t l_51[6];
        int8_t *l_65 = &l_33;
        int i;
        for (i = 0; i < 6; i++)
            l_51[i] = 0xD4416DA8L;
        for (p_29 = 0; (p_29 <= 0); p_29 += 1)
        {
            int32_t *l_40 = &g_36;
            int32_t *l_41 = &g_36;
            int32_t *l_42 = &g_36;
            int32_t l_43 = 0xA6C2E3A4L;
            int32_t *l_44 = (void*)0;
            int32_t *l_46 = &l_45;
            int32_t *l_47[7][1];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_47[i][j] = &l_43;
            }
            g_55++;
            for (l_33 = 0; (l_33 >= 0); l_33 -= 1)
            {
                union U0 l_777 = {-7L};
                (*l_46) &= (-1L);
            }
        }
    }
    return l_48[0][4];
}







static union U2 func_58(int16_t p_59, int32_t p_60, union U0 p_61)
{
    uint16_t l_785 = 0x527DL;
    int32_t l_794 = 0x4D71B67FL;
    uint32_t l_795 = 0xC9F5AFE1L;
    union U3 *l_832 = (void*)0;
    int32_t l_836 = 2L;
    int32_t l_837 = 3L;
    int32_t l_838[10] = {0xF8171FE3L,(-6L),0xF8171FE3L,9L,9L,0xF8171FE3L,(-6L),0xF8171FE3L,9L,9L};
    int32_t *l_914 = &l_838[9];
    int32_t *l_915 = &l_794;
    uint32_t l_924 = 0x120B278EL;
    union U0 **l_971 = &g_697[2];
    uint8_t l_1078[5] = {0xD0L,0xD0L,0xD0L,0xD0L,0xD0L};
    int i;
    for (g_721.f2 = 0; (g_721.f2 >= 23); g_721.f2 = safe_add_func_uint16_t_u_u(g_721.f2, 1))
    {
        int16_t l_780 = 7L;
        int32_t l_793 = 5L;
        uint32_t l_813[1];
        int16_t l_890[2];
        int32_t l_904 = 0xA18086F1L;
        const uint8_t l_906 = 0x2EL;
        union U2 *l_909 = &g_910;
        int32_t l_1000 = 0xF05103B0L;
        int32_t l_1001 = 0xEC109180L;
        int32_t l_1040[9] = {0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L,0x5F217DE4L};
        int8_t l_1064 = (-1L);
        int64_t l_1073 = (-1L);
        int32_t l_1082 = 4L;
        uint32_t l_1084 = 4294967289UL;
        uint32_t l_1134 = 4294967291UL;
        int32_t *l_1135 = &l_793;
        int32_t *l_1136 = &g_92;
        int32_t *l_1137 = &g_92;
        int32_t *l_1138 = &l_1000;
        int32_t *l_1139 = (void*)0;
        int32_t *l_1140 = &l_838[1];
        int32_t *l_1141 = (void*)0;
        int32_t *l_1142 = &l_837;
        int32_t *l_1143 = (void*)0;
        int32_t *l_1144 = &g_92;
        int32_t *l_1145 = (void*)0;
        int32_t *l_1146 = &l_838[1];
        int32_t *l_1147 = (void*)0;
        int32_t *l_1148 = &l_793;
        int32_t *l_1149 = (void*)0;
        int32_t *l_1150 = (void*)0;
        int32_t *l_1151 = &l_838[3];
        int32_t *l_1152 = &l_1040[5];
        int32_t *l_1153 = &g_92;
        int32_t *l_1154[1];
        uint32_t l_1155 = 0x774DED72L;
        int i;
        for (i = 0; i < 1; i++)
            l_813[i] = 0x9E92DA18L;
        for (i = 0; i < 2; i++)
            l_890[i] = 0xB054L;
        for (i = 0; i < 1; i++)
            l_1154[i] = &l_1000;
    }
    return g_1158;
}







static union U1 func_62(int8_t * p_63, union U0 p_64)
{
    int32_t l_380 = 0x94A4F0ECL;
    int32_t l_428 = (-10L);
    int32_t l_436 = 4L;
    int32_t l_437[1][3][6] = {{{0x253CF6CDL,(-1L),(-1L),0x253CF6CDL,0xC14DF241L,0x253CF6CDL},{0x253CF6CDL,0xC14DF241L,0x253CF6CDL,(-1L),(-1L),0x253CF6CDL},{(-8L),(-8L),(-1L),0x0CE44594L,(-1L),(-8L)}}};
    int32_t l_477[9];
    int8_t l_538 = 1L;
    union U3 l_555[3][10][2] = {{{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}},{{4294967295UL},{0UL}},{{0x898D6328L},{4294967288UL}},{{0UL},{0x4D951187L}},{{1UL},{4294967295UL}},{{4294967288UL},{0xB0E94A83L}},{{0xB0E94A83L},{0xB0E94A83L}},{{4294967288UL},{4294967295UL}}},{{{1UL},{0x4D951187L}},{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}},{{4294967295UL},{0UL}},{{0x898D6328L},{4294967288UL}},{{0UL},{0x4D951187L}},{{1UL},{4294967295UL}},{{4294967288UL},{0xB0E94A83L}},{{0xB0E94A83L},{0xB0E94A83L}}},{{{4294967288UL},{4294967295UL}},{{1UL},{0x4D951187L}},{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}},{{4294967295UL},{0UL}},{{0x898D6328L},{4294967288UL}},{{0xB0E94A83L},{1UL}},{{0x4D951187L},{1UL}},{{4294967295UL},{4294967295UL}}}};
    int32_t *l_649 = &l_437[0][2][4];
    union U2 *l_689 = &g_690;
    union U0 *l_694 = &g_151;
    int16_t l_702 = 0xE4D3L;
    int32_t l_703 = 0L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_477[i] = 3L;
    if ((**g_160))
    {
        uint32_t *l_381[1][4];
        int32_t l_382 = 0xA2C60234L;
        int8_t **l_407 = &g_182[1][0][3];
        int8_t ***l_406 = &l_407;
        int32_t l_434 = 0L;
        int32_t l_438 = (-9L);
        int32_t l_441 = 0x76A0DB76L;
        int32_t l_444[7];
        int32_t *l_509 = &l_434;
        union U3 *l_512 = &g_339;
        union U3 *l_515 = (void*)0;
        const union U0 *l_528 = &g_151;
        uint64_t l_539[7] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL};
        int32_t **l_548 = &l_509;
        int32_t ***l_547 = &l_548;
        uint32_t l_623 = 0UL;
        uint64_t l_644 = 5UL;
        uint64_t l_672[3];
        int32_t l_709 = 0x869B23D4L;
        uint64_t l_710 = 0x1DDD2B1E922BEFDELL;
        int8_t l_732 = (-8L);
        uint16_t l_763 = 65535UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_381[i][j] = &g_339.f0;
        }
        for (i = 0; i < 7; i++)
            l_444[i] = 1L;
        for (i = 0; i < 3; i++)
            l_672[i] = 0x1EB7F1CECF47C1EELL;
        if (((((safe_rshift_func_uint16_t_u_s(((p_64.f2 && p_64.f1) <= g_151.f0), 10)) < p_64.f2) < (l_380 != (l_382 = g_235.f2))) , ((+(((0x5EA165C4EDAE71FCLL || (((safe_unary_minus_func_int16_t_s((g_384[4][3][2] , g_30))) == 0UL) || 0x15EEDD2B8BD8121BLL)) & p_64.f0) ^ l_382)) || g_370[1][0][0].f3)))
        {
            uint32_t l_389 = 1UL;
            union U0 l_405 = {-2L};
            int8_t *l_411 = &g_170[0];
            int32_t l_433 = 1L;
            int32_t l_440 = 2L;
            int32_t l_443 = 1L;
            int32_t l_445 = (-4L);
            int32_t l_447 = 0xAB19E4DCL;
            int32_t l_448 = 0xE9ED2F00L;
            int32_t l_449 = 0x121BB186L;
            int32_t l_450[1];
            uint8_t l_506 = 0xD9L;
            int32_t *l_556 = (void*)0;
            int32_t l_580 = (-3L);
            int i;
            for (i = 0; i < 1; i++)
                l_450[i] = 1L;
            if ((safe_mod_func_int8_t_s_s((l_389 ^= (safe_lshift_func_int8_t_s_s(((void*)0 == &l_382), 3))), 1L)))
            {
                int8_t *l_410[6];
                int32_t l_422[9];
                uint32_t l_478 = 1UL;
                int32_t *l_486 = &l_445;
                int32_t *l_487 = &l_449;
                int32_t *l_488 = &l_422[0];
                int32_t *l_489 = &l_448;
                int32_t *l_490 = &l_450[0];
                int32_t *l_491 = &l_438;
                int32_t *l_492 = (void*)0;
                int32_t *l_493 = &l_438;
                int32_t *l_494 = &l_441;
                int32_t *l_495 = &l_445;
                int32_t *l_496 = &g_92;
                int32_t *l_497 = (void*)0;
                int32_t *l_498 = &l_448;
                int32_t *l_499 = &g_92;
                int32_t *l_500 = &l_434;
                int32_t *l_501 = &l_449;
                int32_t *l_502 = &l_444[0];
                int32_t *l_503 = &g_92;
                int32_t *l_504[3];
                int8_t l_505[4] = {0L,0L,0L,0L};
                int i;
                for (i = 0; i < 6; i++)
                    l_410[i] = (void*)0;
                for (i = 0; i < 9; i++)
                    l_422[i] = 0x84C93C08L;
                for (i = 0; i < 3; i++)
                    l_504[i] = &l_448;
                if ((*g_35))
                {
                    int32_t *l_392 = &g_36;
                    const int8_t *l_397 = &g_170[1];
                    const int8_t **l_396 = &l_397;
                    int8_t ****l_408 = &l_406;
                    const uint8_t l_409 = 0xF3L;
                    union U0 *l_412 = &g_151;
                    union U0 *l_413 = (void*)0;
                    union U0 *l_414 = &l_405;
                    int32_t l_431 = 0xD10D603BL;
                    int32_t l_435 = 1L;
                    int32_t l_439 = (-6L);
                    int32_t l_442 = (-2L);
                    int32_t l_446[4];
                    uint64_t l_451[2][2];
                    union U1 *l_457 = &g_458[1][5];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_446[i] = 0xC73AD064L;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_451[i][j] = 18446744073709551612UL;
                    }
                    for (p_64.f2 = 0; (p_64.f2 < 13); p_64.f2++)
                    {
                        int32_t **l_393 = &g_118;
                        (*g_118) = 0x6CA1A1E9L;
                        (*l_393) = l_392;
                    }
                    if ((safe_div_func_uint8_t_u_u((!l_382), ((~((g_398 = l_396) != &p_63)) , ((+((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((l_405 , (((*l_408) = l_406) == (((*l_414) = ((*l_412) = func_69(l_409, l_410[5], l_411))) , (void*)0))), g_384[4][3][2].f3)), 5)) < p_64.f2)) , (*p_63))))))
                    {
                        uint16_t *l_425[7] = {&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137};
                        int32_t l_426 = 0L;
                        int64_t *l_427 = &l_405.f0;
                        int i;
                        l_428 ^= (+(safe_div_func_int64_t_s_s((~(((*l_427) = (((g_417 , &g_151) != (void*)0) | ((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((l_422[5] , (safe_rshift_func_int8_t_s_s(l_382, (*l_392)))) ^ ((*l_392) == g_30)), (((g_137 = g_101) , p_64.f2) , p_64.f2))) || p_64.f2), l_382)) == l_426))) , l_426)), g_90)));
                    }
                    else
                    {
                        int32_t **l_429 = &g_118;
                        int32_t *l_430 = &l_428;
                        int32_t *l_432[4] = {&l_431,&l_431,&l_431,&l_431};
                        int i;
                        (*l_429) = (*g_160);
                        (*l_430) ^= (*g_118);
                        l_451[1][0]--;
                        (*l_392) = (**l_429);
                    }
                    if (((&g_341 == (void*)0) > g_269))
                    {
                        return g_454;
                    }
                    else
                    {
                        union U1 *l_456 = &g_417;
                        union U1 **l_455[10] = {&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456};
                        int i;
                        g_461[0] = (g_459 = (l_457 = &g_454));
                        (*g_118) = 0x7D330289L;
                        (*l_392) |= (&p_64 != (void*)0);
                    }
                }
                else
                {
                    int32_t *l_463 = &l_437[0][2][4];
                    int32_t *l_464 = (void*)0;
                    int32_t *l_466 = &l_447;
                    int32_t *l_467 = &l_443;
                    int32_t *l_468 = &l_422[5];
                    int32_t *l_469 = &l_437[0][2][4];
                    int32_t l_470[5][8] = {{(-7L),(-7L),0L,0L,(-7L),(-7L),0L,0L},{(-7L),(-7L),0L,0L,(-7L),(-7L),0L,0L},{(-7L),(-7L),0L,0L,(-7L),(-7L),0L,0L},{(-7L),(-7L),0L,0L,(-7L),(-7L),0L,0L},{(-7L),(-7L),0L,0L,(-7L),(-7L),0L,0L}};
                    int32_t *l_471 = (void*)0;
                    int32_t *l_472 = &l_450[0];
                    int32_t *l_473 = (void*)0;
                    int32_t *l_474 = &l_422[5];
                    int32_t *l_475[4][10] = {{&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36},{&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36},{&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36},{&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36}};
                    int64_t l_476 = 0x7ABEDC6E114B12DDLL;
                    int i, j;
                    l_478++;
                    if (l_428)
                        goto lbl_484;
lbl_484:
                    for (g_55 = 0; (g_55 >= 1); g_55++)
                    {
                        const int32_t l_483 = 3L;
                        if (l_483)
                            break;
                    }
                    (*g_485) = &l_422[0];
                }
                l_506--;
                l_509 = &l_422[5];
                for (l_405.f1 = 0; l_405.f1 < 1; l_405.f1 += 1)
                {
                    g_465[l_405.f1] = 0x1418248DF81060DBLL;
                }
            }
            else
            {
                (*l_509) = 0xD941AD4FL;
                for (g_101 = (-28); (g_101 <= 2); g_101++)
                {
                    union U3 **l_513 = (void*)0;
                    union U3 **l_514[7] = {&g_341,&l_512,&g_341,&g_341,&l_512,&g_341,&g_341};
                    int32_t l_516[2][5];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_516[i][j] = 0xB406A1AFL;
                    }
                    l_515 = (l_512 = (g_233.f0 , l_512));
                    (*g_118) = l_516[1][3];
                    l_447 = ((safe_lshift_func_int16_t_s_u(((*g_341) , (~p_64.f1)), 0)) ^ (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(g_465[0], 4)) , l_516[0][4]), (safe_mod_func_uint64_t_u_u(0x940804DAEF8AC3CFLL, p_64.f2)))));
                    (*g_118) ^= (g_525 , (p_64.f2 > 0x8EECL));
                }
                (*g_118) = (((*l_406) = &p_63) == (void*)0);
                (*l_509) &= (**g_485);
            }
            for (l_448 = 3; (l_448 >= 29); l_448 = safe_add_func_uint8_t_u_u(l_448, 9))
            {
                const union U0 **l_529 = &l_528;
                int32_t l_542 = 0x371FA1E8L;
                g_530 = ((*l_529) = l_528);
                for (g_460.f3 = 0; (g_460.f3 > 2); g_460.f3 = safe_add_func_int32_t_s_s(g_460.f3, 6))
                {
                    uint32_t l_535[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_535[i] = 0x2A00E9FDL;
                    l_539[2] = ((safe_rshift_func_uint16_t_u_u(((*p_63) & l_535[3]), p_64.f2)) != (safe_mod_func_uint8_t_u_u(p_64.f2, l_538)));
                    for (g_417.f2 = (-13); (g_417.f2 < 2); g_417.f2 = safe_add_func_uint64_t_u_u(g_417.f2, 6))
                    {
                        int32_t * const *l_546 = (void*)0;
                        int32_t * const **l_545 = &l_546;
                        uint16_t *l_549 = &g_137;
                        int32_t *l_550 = &l_444[4];
                        if (l_542)
                            break;
                        (*l_550) &= (l_535[3] & (((safe_mul_func_int8_t_s_s((-1L), ((((((*l_545) = &g_118) == &g_35) > g_30) >= (((*p_63) > 0xA7L) != ((*l_549) = (p_64.f2 >= (l_547 != &g_117))))) , p_64.f2))) & p_64.f2) <= 0L));
                    }
                }
            }
            for (g_90 = 6; (g_90 > 10); g_90++)
            {
                int64_t l_566 = (-1L);
                int32_t *l_581 = (void*)0;
                int32_t *l_582[4][10] = {{&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4]},{&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4]},{&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4]},{&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4],&l_448,&l_437[0][2][4]}};
                int i, j;
                if (l_405.f1)
                {
                    uint16_t l_558[6][8] = {{0x3AB7L,65527UL,0xF93CL,0x3AB7L,0xF93CL,65527UL,0x3AB7L,0x26BBL},{65535UL,0UL,0x1C24L,0x3AB7L,0x3AB7L,0x1C24L,0UL,65535UL},{0x26BBL,0x3AB7L,65527UL,0xF93CL,0x3AB7L,0xF93CL,65527UL,0x3AB7L},{65535UL,0x386AL,0x1C24L,0x26BBL,0x7993L,0x7993L,0x26BBL,0x1C24L},{65527UL,65527UL,0UL,0xF93CL,0x26BBL,0UL,0x26BBL,0xF93CL},{0x1C24L,0xF93CL,0x1C24L,0x7993L,0xF93CL,0x386AL,0x386AL,0xF93CL}};
                    int32_t **l_559 = (void*)0;
                    int i, j;
                    for (g_460.f2 = 0; (g_460.f2 == 25); g_460.f2++)
                    {
                        (**l_547) = (l_555[0][5][0] , l_556);
                        return g_557;
                    }
                    for (g_137 = 0; (g_137 <= 3); g_137 += 1)
                    {
                        l_558[1][5] = 0x4A193EBEL;
                    }
                    (*l_547) = l_559;
                    return g_560;
                }
                else
                {
                    if (l_437[0][2][4])
                        break;
                    for (g_462.f3 = 0; (g_462.f3 >= 0); g_462.f3 -= 1)
                    {
                        int8_t **** const l_561 = &l_406;
                        int i;
                        l_566 &= ((l_477[(g_462.f3 + 3)] , l_561) != g_562[0]);
                        (**l_547) = &g_92;
                        if (l_477[(g_462.f3 + 3)])
                            break;
                        if (l_477[(g_462.f3 + 7)])
                            continue;
                    }
                    if (p_64.f2)
                    {
                        uint16_t l_570 = 65533UL;
                        (*l_548) = (g_567 , ((safe_mod_func_int16_t_s_s(l_570, 0xAC3BL)) , &l_448));
                        return g_571;
                    }
                    else
                    {
                        if (p_64.f2)
                            break;
                    }
                }
                l_436 = ((*g_35) = (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s(l_566, 0xBAB720FCL)) && (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_436, g_525.f0)), l_580))) <= l_566), 3)));
            }
            (*l_548) = &l_437[0][0][3];
        }
        else
        {
            uint8_t *l_587 = &g_588;
            uint8_t **l_589 = &l_587;
            uint64_t *l_590[3];
            int64_t *l_593 = (void*)0;
            int64_t *l_594 = (void*)0;
            int64_t *l_595 = (void*)0;
            int64_t *l_596 = &g_151.f0;
            int32_t l_608 = 0x0F838C1FL;
            int32_t l_609 = (-9L);
            int32_t l_610 = (-1L);
            int32_t l_612 = 0x1E338C87L;
            int32_t l_613 = 2L;
            int32_t l_615[3];
            int32_t * const *l_632 = (void*)0;
            int32_t * const **l_631[6] = {&l_632,&l_632,&l_632,&l_632,&l_632,&l_632};
            int32_t l_650 = 0x2196E3D1L;
            union U3 *l_680 = &l_555[0][5][0];
            uint16_t l_691 = 0UL;
            uint16_t ** const l_698 = (void*)0;
            int16_t l_718[10] = {0xD589L,0x81C9L,0x81C9L,0xD589L,0x81C9L,0x81C9L,0xD589L,0x81C9L,0x81C9L,0xD589L};
            int16_t l_725[8][5] = {{0x96F7L,0x915DL,0x96F7L,0x915DL,0x96F7L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x96F7L,0x915DL,0x96F7L,0x915DL,0x96F7L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x96F7L,0x915DL,0x96F7L,0x915DL,0x96F7L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x96F7L,0x915DL,0x96F7L,0x915DL,0x96F7L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_590[i] = &l_539[1];
            for (i = 0; i < 3; i++)
                l_615[i] = 0xF01CFA54L;
            if ((safe_sub_func_int16_t_s_s((0L > (safe_add_func_int64_t_s_s((((***l_406) = (*p_63)) ^ l_436), (((((*l_589) = l_587) == (void*)0) > g_269) <= (((g_30 |= g_571.f2) > ((*l_596) = (safe_add_func_int32_t_s_s((g_461[0] != (void*)0), g_151.f1)))) <= 0xA955L))))), l_437[0][0][0])))
            {
                return g_597;
            }
            else
            {
                uint8_t l_602 = 0xE6L;
                int32_t l_607 = 0xBC4F738EL;
                int32_t l_614 = 0L;
                int32_t l_616 = 0x1711A6D2L;
                int32_t l_617 = 0x58F677D4L;
                int32_t l_618 = 0L;
                int32_t l_619 = 1L;
                int32_t l_620 = 0x43BC124AL;
                int32_t l_621 = 0xEB3D21A1L;
                int32_t l_622 = (-7L);
                int32_t l_643 = 0x73BE9CC1L;
                uint8_t *l_657 = &l_602;
                int16_t *l_667 = &g_312;
                int16_t l_670 = (-1L);
                int32_t l_671[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                for (g_597.f2 = 1; (g_597.f2 <= 11); g_597.f2++)
                {
                    int32_t *l_600 = &l_437[0][1][1];
                    int32_t *l_601[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    --l_602;
                    for (g_151.f0 = 29; (g_151.f0 == (-25)); g_151.f0--)
                    {
                        int32_t l_611[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_611[i] = (-3L);
                        --l_623;
                    }
                    if ((**g_117))
                    {
                        int32_t ****l_630 = &l_547;
                        (*g_118) |= p_64.f0;
                        (**l_548) = (safe_sub_func_int32_t_s_s((0x7338L == (((*l_630) = (g_628 = g_628)) != l_631[1])), ((p_64 , g_235.f2) , (safe_lshift_func_int8_t_s_s(0x07L, 3)))));
                        if ((****l_630))
                            continue;
                        return g_635;
                    }
                    else
                    {
                        (*l_509) = (((p_64.f1 , (safe_add_func_uint8_t_u_u((((g_638[0] , g_233.f0) , p_64.f2) , l_616), (*l_509)))) < (safe_add_func_int64_t_s_s(0L, (l_477[6] | (safe_add_func_int8_t_s_s((((l_614 = (~(**g_629))) & (*g_118)) ^ l_643), 3L)))))) , (*g_118));
                        if (l_644)
                            break;
                    }
                }
                (***l_547) = (g_567.f4 , (+(p_64.f0 >= p_64.f0)));
                for (l_436 = 16; (l_436 == (-23)); l_436--)
                {
                    int32_t l_648 = 0x287EC826L;
                    int16_t *l_666[10] = {&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312};
                    int i;
                    for (l_609 = 6; (l_609 >= 2); l_609 -= 1)
                    {
                        return g_647[0];
                    }
                    if (l_648)
                    {
                        uint8_t l_651 = 255UL;
                        (*l_548) = l_649;
                        --l_651;
                        if (p_64.f0)
                            continue;
                        (**l_548) = (safe_lshift_func_int8_t_s_u((0x388F006E267A2D06LL ^ g_647[0].f3), 5));
                    }
                    else
                    {
                        uint8_t *l_656[1];
                        const int32_t l_668 = 0xABD7DF2FL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_656[i] = (void*)0;
                        (*g_629) = (*g_160);
                        (*l_509) = ((((~((*l_589) != (l_657 = l_656[0]))) != (safe_mod_func_uint32_t_u_u((((((((safe_sub_func_uint8_t_u_u(p_64.f1, ((***l_406) = (l_616 != (g_664[6] , (g_151.f2 < ((((*g_120) ^ ((void*)0 == (**l_406))) > 0xADL) , 0x3C3BA185487D2B5CLL))))))) , g_665) , l_666[0]) == l_667) >= l_668) != (-1L)) >= 0UL), p_64.f0))) == 0xB3ECL) >= (-6L));
                    }
                }
                l_672[2]--;
            }
            (*g_629) = (*g_485);
            if ((*l_509))
            {
                int32_t l_685 = 0L;
                for (g_151.f2 = 0; (g_151.f2 < (-4)); g_151.f2--)
                {
                    int32_t *l_679 = &l_615[1];
                    union U2 **l_686 = (void*)0;
                    if ((g_677 , ((*l_649) = (g_678 , 1L))))
                    {
                        l_679 = &l_437[0][2][4];
                    }
                    else
                    {
                        union U3 **l_681 = &l_680;
                        int32_t l_682[3][4] = {{0x06304CF8L,(-7L),0x06304CF8L,0x06304CF8L},{(-7L),(-7L),0L,(-7L)},{(-7L),0x06304CF8L,0x06304CF8L,(-7L)}};
                        int i, j;
                        (*l_681) = l_680;
                        (*g_629) = (*g_117);
                        l_682[1][3] = (*l_679);
                        l_685 = (safe_sub_func_uint32_t_u_u(p_64.f1, ((*l_649) = 4294967292UL)));
                    }
                    l_689 = (g_687 = &g_665);
                    if ((p_64.f0 & (*l_649)))
                    {
                        union U0 **l_695 = (void*)0;
                        uint16_t **l_700 = (void*)0;
                        uint16_t ***l_699 = &l_700;
                        --l_691;
                        (*g_696) = l_694;
                        (*l_699) = l_698;
                    }
                    else
                    {
                        (*g_118) = 0xDB93F879L;
                        (*g_629) = (*g_629);
                        return g_701;
                    }
                }
            }
            else
            {
                int32_t l_704 = 0x1148B81AL;
                int32_t l_705 = (-3L);
                int32_t l_706 = 0x0CEB12F0L;
                int32_t l_707 = 0x0A340BA1L;
                int32_t l_708[8] = {0x84ED8065L,8L,0x84ED8065L,0x84ED8065L,8L,0x84ED8065L,0x84ED8065L,8L};
                int8_t l_730 = 2L;
                uint16_t l_736 = 9UL;
                int i;
                l_710--;
                for (g_677.f2 = 0; (g_677.f2 <= 2); g_677.f2 += 1)
                {
                    union U0 *l_719 = &g_151;
                    int32_t l_722 = 0L;
                    int32_t l_731 = 0L;
                    int32_t l_733 = 0xFDE528B9L;
                    int32_t l_734 = (-1L);
                    int32_t l_735[6] = {0xA5796216L,0x2368F7CAL,0x2368F7CAL,0xA5796216L,0x2368F7CAL,0x2368F7CAL};
                    int i;
                    for (l_623 = 0; (l_623 <= 2); l_623 += 1)
                    {
                        union U3 **l_713[10] = {&l_512,&l_512,&l_512,&l_512,&l_512,&l_512,&l_512,&l_512,&l_512,&l_512};
                        int i;
                        if (l_615[l_623])
                            break;
                        if (l_615[g_677.f2])
                            break;
                        l_680 = (void*)0;
                    }
                    if ((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((p_64.f0 = g_690.f0), l_718[4])), 2)))
                    {
                        union U0 **l_720 = &l_719;
                        int i;
                        l_615[g_677.f2] = (*g_118);
                        (*l_720) = l_719;
                        if ((*g_118))
                            continue;
                        return g_721;
                    }
                    else
                    {
                        int64_t l_723[7][7][5] = {{{(-6L),0xA7302EC606E46B5CLL,0x74E8EF0DB5C09E62LL,0x8ECAF380603CE2A6LL,0x8ECAF380603CE2A6LL},{1L,0x538F93883ED67A9CLL,1L,(-2L),0xDBEAF392DAFD0271LL},{0x480507E1AE3E6220LL,0x74E8EF0DB5C09E62LL,0x1B713B4FAAA6AC5ALL,0x9187F349928B7049LL,0xCF5876B48B67EEF7LL},{(-1L),4L,(-2L),0xBCB8F5E9DA7AACB8LL,1L},{3L,0L,0x1B713B4FAAA6AC5ALL,0xCF5876B48B67EEF7LL,0xC4ABCF602CFCD925LL},{7L,(-2L),1L,0x3BF664E5F6C4138CLL,5L},{0x4C32D237C0A1DEEFLL,0xCE9A45203FAD2507LL,0x74E8EF0DB5C09E62LL,0L,4L}},{{0x1553AA85094BF931LL,7L,(-1L),0x04555FD7F3CC3853LL,(-1L)},{0xCF5876B48B67EEF7LL,4L,0L,9L,0xFA8DC681B52DAF65LL},{0x9B69FA72BFCFBF1FLL,0L,0xB9605D252FECC8B3LL,0x374B5E3D99CBE1FBLL,(-2L)},{0x26A8BA62F655B016LL,0xD6683EAE4D5A0D77LL,2L,0L,1L},{0xA530B50C1724AAD9LL,0xB0F058F8693902CBLL,3L,3L,0xB0F058F8693902CBLL},{0L,(-3L),0xCF5876B48B67EEF7LL,3L,0xBDCA0C240BA4ACB7LL},{4L,7L,(-1L),0xBCB8F5E9DA7AACB8LL,6L}},{{2L,0x5D359645E6A9AEABLL,0x07CEF775074FBEEALL,0x06A8DEE6C370BAA2LL,9L},{4L,0xDBEAF392DAFD0271LL,(-3L),0xEEC36C7473B9316BLL,0x888C0380B3B49992LL},{0L,0L,(-10L),0xBDCA0C240BA4ACB7LL,(-6L)},{0xA530B50C1724AAD9LL,0L,0x26B7113DAD792082LL,0x21E6F3824917C87FLL,5L},{(-10L),0xAD6427B8F968DD1CLL,0L,0xA7302EC606E46B5CLL,0L},{0xC2DA85E009E3EE9ALL,0xF1FFB2BBD265DA28LL,5L,0xB0F058F8693902CBLL,0x04555FD7F3CC3853LL},{0x480507E1AE3E6220LL,1L,0xCE9A45203FAD2507LL,0x4708A932E2486BFFLL,0xFA8DC681B52DAF65LL}},{{0xE01B8915666F80D0LL,0x9B69FA72BFCFBF1FLL,0xD9CF99A87A672888LL,(-9L),0xEEC36C7473B9316BLL},{0L,9L,9L,0L,(-4L)},{(-4L),0L,0xEEC36C7473B9316BLL,1L,0xE01B8915666F80D0LL},{(-1L),0x06A8DEE6C370BAA2LL,0x4708A932E2486BFFLL,0xA296A0F718AC4AF4LL,1L},{0xDBEAF392DAFD0271LL,0L,(-1L),1L,0x374B5E3D99CBE1FBLL},{(-3L),0x26A8BA62F655B016LL,0x1B713B4FAAA6AC5ALL,0L,0x5A3D7C6937A1D354LL},{0xD30ED89BF70FECECLL,5L,0x2B458523C9348319LL,(-9L),0x3BF664E5F6C4138CLL}},{{5L,(-6L),1L,0x4708A932E2486BFFLL,0x74E8EF0DB5C09E62LL},{(-1L),0xBCB8F5E9DA7AACB8LL,7L,0xB0F058F8693902CBLL,6L},{8L,5L,0L,(-10L),0x49E01F63AF7263B2LL},{5L,(-4L),0x6D67F6EFFE4B40DCLL,0x04555FD7F3CC3853LL,0x2B458523C9348319LL},{0x5A3D7C6937A1D354LL,0x07CEF775074FBEEALL,0xC4ABCF602CFCD925LL,0L,0xC4ABCF602CFCD925LL},{(-9L),(-9L),5L,1L,(-1L)},{0xF045884121F058BCLL,0x74E8EF0DB5C09E62LL,1L,0xD4EA13F1C81E5105LL,0xCE9A45203FAD2507LL}},{{0x26B7113DAD792082LL,0xD9CF99A87A672888LL,0xE01B8915666F80D0LL,0x3BF664E5F6C4138CLL,0xA530B50C1724AAD9LL},{0x19D1E57FAA166D37LL,0x74E8EF0DB5C09E62LL,0x8FC18C59721798E1LL,0xBDCA0C240BA4ACB7LL,0xA7302EC606E46B5CLL},{0xC2DA85E009E3EE9ALL,(-9L),0xBCB8F5E9DA7AACB8LL,0x26B7113DAD792082LL,7L},{0L,0x07CEF775074FBEEALL,(-3L),8L,0L},{0xDBEAF392DAFD0271LL,(-4L),0x21E6F3824917C87FLL,7L,0x7F3251EBE654F692LL},{0x74E8EF0DB5C09E62LL,5L,0x4708A932E2486BFFLL,4L,0x78CBFA58E22372C7LL},{(-1L),0x3BF664E5F6C4138CLL,0L,(-2L),5L}},{{0xE26D8A0A7F04F349LL,0x8FC18C59721798E1LL,(-10L),1L,4L},{0x78C17919CAF1DF02LL,0x9B69FA72BFCFBF1FLL,(-1L),0x9B69FA72BFCFBF1FLL,0x78C17919CAF1DF02LL},{0xC4ABCF602CFCD925LL,0x78CBFA58E22372C7LL,8L,0x4C32D237C0A1DEEFLL,(-10L)},{0L,6L,0x1553AA85094BF931LL,5L,0xDBEAF392DAFD0271LL},{0xA7302EC606E46B5CLL,0xD4EA13F1C81E5105LL,0xD6683EAE4D5A0D77LL,0x78CBFA58E22372C7LL,(-10L)},{1L,5L,0xAD10C9DA043739C4LL,0xB0F058F8693902CBLL,0x78C17919CAF1DF02LL},{(-10L),(-1L),0xA7302EC606E46B5CLL,0xD6683EAE4D5A0D77LL,0xD6683EAE4D5A0D77LL}}};
                        int32_t l_724 = 0xBBDF6EDCL;
                        int32_t l_726 = 0xDC1DA48DL;
                        int i, j, k;
                        --g_727[1];
                        (*l_509) &= (**g_629);
                    }
                    l_736++;
                    for (l_610 = 3; (l_610 >= 0); l_610 -= 1)
                    {
                        uint32_t l_743 = 0x612EC731L;
                        int32_t l_748[10][10][2] = {{{(-3L),0x26C299AAL},{1L,0x87071A65L},{0x01D51E20L,0x2DDF9E0EL},{(-9L),(-1L)},{0L,0xDB96C12AL},{0x2EF84A09L,0L},{0xA9D5C006L,1L},{0L,0xDB358471L},{0xF3866635L,(-2L)},{0xC53BF443L,0x36C8A16BL}},{{0xCB524BE2L,(-1L)},{0xC5678A3EL,(-9L)},{(-1L),4L},{(-1L),0L},{0L,3L},{(-6L),(-1L)},{0L,0x8279F99BL},{1L,0x75A8B499L},{5L,0L},{0xDB358471L,0x640E3EDAL}},{{0xD0F2E679L,8L},{0x6E16E27AL,1L},{(-1L),0x86AEBBB8L},{0xD3923814L,0xD3923814L},{0xFAEBCA03L,5L},{0x15524DF1L,1L},{7L,0xF938AD50L},{6L,7L},{0L,(-1L)},{0L,7L}},{{6L,0xF938AD50L},{7L,1L},{0x15524DF1L,5L},{0xFAEBCA03L,0xD3923814L},{0xD3923814L,0x86AEBBB8L},{(-1L),1L},{0x6E16E27AL,8L},{0xD0F2E679L,0x640E3EDAL},{0xDB358471L,0L},{5L,0x75A8B499L}},{{1L,0x8279F99BL},{0L,(-1L)},{(-6L),3L},{0L,0L},{(-1L),4L},{(-1L),(-9L)},{0xC5678A3EL,(-1L)},{0x2E7CA6D7L,0x23BDE412L},{0x15524DF1L,0x75A8B499L},{0L,1L}},{{(-1L),0L},{(-2L),0x26C299AAL},{7L,5L},{1L,0xAFC713EEL},{0x70FC5B3BL,0xC4F2240BL},{0L,0x36C8A16BL},{0L,2L},{1L,4L},{0x0D1AA6BDL,0x672A92FCL},{1L,0xF3866635L}},{{0xDB358471L,0x7DAD3AAEL},{2L,1L},{(-1L),0x949B5C41L},{5L,0xA9D5C006L},{6L,1L},{0L,(-9L)},{1L,0xDE6614D8L},{0xC4F2240BL,0xDB358471L},{5L,0xFF086BB6L},{0x8D1643ACL,0xD0F2E679L}},{{0x84F953BEL,0L},{1L,(-1L)},{(-3L),0x8279F99BL},{0x36C8A16BL,0x8279F99BL},{(-3L),(-1L)},{1L,0L},{0x84F953BEL,0xD0F2E679L},{0x8D1643ACL,0xFF086BB6L},{5L,0xDB358471L},{0xC4F2240BL,0xDE6614D8L}},{{1L,(-9L)},{0L,1L},{6L,0xA9D5C006L},{5L,0x949B5C41L},{(-1L),1L},{2L,0x7DAD3AAEL},{0xDB358471L,0xF3866635L},{1L,0x672A92FCL},{0x0D1AA6BDL,4L},{1L,2L}},{{0L,0x36C8A16BL},{0L,0xC4F2240BL},{0x70FC5B3BL,0xAFC713EEL},{1L,5L},{7L,0x26C299AAL},{0xD0F2E679L,(-1L)},{1L,0x15524DF1L},{0xCB524BE2L,0x8279F99BL},{5L,5L},{0x640E3EDAL,1L}}};
                        int32_t l_749 = 0xE7DC269FL;
                        int16_t *l_760 = (void*)0;
                        int16_t *l_761 = (void*)0;
                        int i, j, k;
                        l_749 ^= ((***g_628) = (+((*l_649) |= (l_735[3] = (safe_sub_func_uint16_t_u_u((((void*)0 != &l_719) > (safe_div_func_uint32_t_u_u((l_743--), (~(&g_232[(l_610 + 3)][l_610] != &g_232[(g_677.f2 + 3)][l_610]))))), (~(safe_rshift_func_uint16_t_u_u((g_233.f4 >= g_647[0].f0), (l_748[3][1][0] = ((+g_30) > ((***l_406) = (*p_63)))))))))))));
                        l_749 = (((*g_341) , (safe_div_func_uint8_t_u_u(g_370[1][0][0].f4, 1UL))) <= (g_560.f3 >= (((***l_547) = ((safe_lshift_func_int16_t_s_s((l_748[3][1][0] = (((((safe_lshift_func_uint16_t_u_s((l_733 = g_417.f2), (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, p_64.f2)), g_721.f1)))) , (-10L)) <= p_64.f1) , p_64.f1) || 65535UL)), p_64.f0)) && 1UL)) ^ 0x17125303L)));
                    }
                }
                for (l_623 = 0; (l_623 <= 3); l_623 += 1)
                {
                    (***g_628) |= (*l_509);
                    if (p_64.f1)
                    {
                        return g_762;
                    }
                    else
                    {
                        return (*g_459);
                    }
                }
            }
            for (g_151.f1 = 3; (g_151.f1 <= 9); g_151.f1 += 1)
            {
                int32_t l_770[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (l_718[g_151.f1])
                    break;
                ++l_763;
                for (g_137 = 0; (g_137 <= 9); g_137 += 1)
                {
                    int64_t l_769 = 0x405231CC2DC97C32LL;
                    for (l_691 = 0; (l_691 <= 9); l_691 += 1)
                    {
                        int i;
                        (***g_628) |= (safe_lshift_func_int16_t_s_u((l_718[g_151.f1] == l_718[g_151.f1]), 9));
                    }
                    if (p_64.f2)
                        continue;
                    for (l_538 = 8; (l_538 >= 0); l_538 -= 1)
                    {
                        uint8_t l_768 = 3UL;
                        uint16_t l_771 = 0UL;
                        (*l_509) &= l_768;
                        ++l_771;
                        (*l_649) = (p_64.f0 , 1L);
                        (***l_547) = 7L;
                    }
                }
                (***l_547) = (((***l_406) = (-1L)) != (18446744073709551615UL || 0xF2B28BA5F8D0A094LL));
            }
        }
        for (g_635.f2 = 0; (g_635.f2 == 6); g_635.f2++)
        {
            return g_776;
        }
    }
    else
    {
        (**g_628) = &l_703;
        (*g_629) = &l_436;
        (**g_628) = &l_703;
    }
    return (*g_459);
}







static union U0 func_66(union U0 p_67, uint32_t p_68)
{
    int8_t *l_376 = &g_170[1];
    union U0 l_377 = {1L};
    (*g_118) ^= (safe_rshift_func_int8_t_s_s((p_67.f2 = ((*l_376) = p_67.f0)), 3));
    return l_377;
}







static union U0 func_69(const uint16_t p_70, int8_t * p_71, int8_t * p_72)
{
    uint64_t l_74[1];
    int32_t l_116 = 6L;
    int32_t l_155[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    uint32_t l_211[6][7][2] = {{{0x7984CDCFL,0xD9D4B4A6L},{18446744073709551606UL,0x49F534F0L},{18446744073709551615UL,0UL},{1UL,0x5F2DE2ACL},{0x5F2DE2ACL,7UL},{0xD9D4B4A6L,0UL},{0x1B15F34AL,18446744073709551606UL}},{{18446744073709551606UL,1UL},{0xD9B7CDBEL,18446744073709551606UL},{6UL,18446744073709551609UL},{0xB61917E9L,0xCF0709E6L},{0xD9B7CDBEL,0xD9D4B4A6L},{0xCF0709E6L,18446744073709551606UL},{18446744073709551615UL,18446744073709551615UL}},{{0xD9D4B4A6L,0x5F2DE2ACL},{7UL,0x5F2DE2ACL},{0xD9D4B4A6L,18446744073709551615UL},{18446744073709551615UL,18446744073709551606UL},{0xCF0709E6L,0xD9D4B4A6L},{0xD9B7CDBEL,0xCF0709E6L},{0xB61917E9L,18446744073709551609UL}},{{6UL,18446744073709551606UL},{0xD9B7CDBEL,1UL},{18446744073709551606UL,18446744073709551606UL},{0x1B15F34AL,0UL},{0xD9D4B4A6L,7UL},{0x5F2DE2ACL,0x5F2DE2ACL},{1UL,0UL}},{{18446744073709551615UL,0x49F534F0L},{18446744073709551606UL,0xD9D4B4A6L},{0x7984CDCFL,18446744073709551606UL},{0xB61917E9L,0x7C3E9936L},{0xB61917E9L,18446744073709551606UL},{0x7984CDCFL,0xD9D4B4A6L},{18446744073709551606UL,6UL}},{{0xD9D4B4A6L,0UL},{0xCF0709E6L,18446744073709551609UL},{18446744073709551609UL,0x7C3E9936L},{18446744073709551606UL,0UL},{1UL,0xB61917E9L},{18446744073709551606UL,0xCF0709E6L},{0UL,18446744073709551606UL}}};
    int8_t * const *l_263 = &g_73;
    int8_t * const **l_262[2];
    int64_t l_267 = 0xDCE2DD5305F2F72ALL;
    uint32_t l_325[2][9][6] = {{{0UL,0UL,4UL,4UL,0UL,0UL},{0UL,18446744073709551612UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,4UL,0x215303D7L,0UL},{0UL,18446744073709551612UL,4UL,0UL,0x215303D7L,0UL},{0UL,0UL,4UL,4UL,0UL,0UL},{0UL,18446744073709551612UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,4UL,0x215303D7L,0UL},{0UL,18446744073709551612UL,4UL,0UL,0x215303D7L,0UL},{0UL,0UL,4UL,4UL,0UL,0UL}},{{0UL,18446744073709551612UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,4UL,0x215303D7L,0UL},{0UL,18446744073709551612UL,4UL,0UL,0x215303D7L,0UL},{0UL,0UL,4UL,4UL,0UL,0UL},{0UL,4UL,0x5DBC6FC8L,18446744073709551610UL,0UL,0x5DBC6FC8L},{18446744073709551610UL,0UL,0x5DBC6FC8L,18446744073709551615UL,0UL,8UL},{18446744073709551610UL,4UL,18446744073709551615UL,18446744073709551610UL,0UL,0x5DBC6FC8L},{8UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL,8UL},{8UL,4UL,0x5DBC6FC8L,18446744073709551610UL,0UL,0x5DBC6FC8L}}};
    union U0 l_328[9][4][7] = {{{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}}},{{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}}},{{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0x8472F2EA7C4602C3LL},{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL}},{{0x865DE98533E3FD7ALL},{0xBBB5579D358C5A75LL},{0x8472F2EA7C4602C3LL},{0xFC3104D62375A837LL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}}},{{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}}},{{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}}},{{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{1L},{0xB24D9D22A20EB5CELL},{0x865DE98533E3FD7ALL},{0xB24D9D22A20EB5CELL},{1L},{0xBBB5579D358C5A75LL}},{{0xBBB5579D358C5A75LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}}},{{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}}},{{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}}},{{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}},{{0xFC3104D62375A837LL},{0x865DE98533E3FD7ALL},{1L},{0xC24F1B4242BAB7D9LL},{1L},{0x865DE98533E3FD7ALL},{0xFC3104D62375A837LL}}}};
    int8_t **l_367 = &g_182[0][6][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_74[i] = 6UL;
    for (i = 0; i < 2; i++)
        l_262[i] = &l_263;
    for (g_55 = 0; (g_55 <= 0); g_55 += 1)
    {
        int32_t l_80 = 0x86F270ADL;
        int32_t l_103 = (-1L);
        uint8_t l_121 = 0x5DL;
        union U0 l_159 = {3L};
        int32_t l_184 = (-1L);
        int8_t **l_197 = &g_73;
        volatile union U1 * volatile l_234 = &g_235;
        uint32_t l_241 = 1UL;
        int32_t l_271 = (-6L);
        int32_t **l_309[9][7][4] = {{{(void*)0,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118}},{{&g_118,(void*)0,(void*)0,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,(void*)0,&g_118}},{{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,(void*)0,&g_118},{&g_118,&g_118,(void*)0,(void*)0},{&g_118,(void*)0,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,(void*)0}},{{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118},{(void*)0,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,(void*)0},{(void*)0,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,(void*)0,&g_118},{&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,(void*)0,&g_118},{(void*)0,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118}}};
        union U3 *l_338 = &g_339;
        int i, j, k;
    }
    for (g_151.f0 = 0; (g_151.f0 == (-6)); g_151.f0 = safe_sub_func_int64_t_s_s(g_151.f0, 9))
    {
        int8_t ** const l_363 = &g_182[0][6][3];
        int8_t ***l_364 = (void*)0;
        int8_t **l_366 = (void*)0;
        int8_t ***l_365 = &l_366;
        int32_t **l_369 = &g_118;
        int32_t *l_371 = (void*)0;
        int32_t *l_372 = (void*)0;
        int32_t *l_373 = &g_36;
    }
    return l_328[3][3][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_202.f0, "g_202.f0", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    transparent_crc(g_233.f2, "g_233.f2", print_hash_value);
    transparent_crc(g_233.f3, "g_233.f3", print_hash_value);
    transparent_crc(g_233.f4, "g_233.f4", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_235.f2, "g_235.f2", print_hash_value);
    transparent_crc(g_235.f3, "g_235.f3", print_hash_value);
    transparent_crc(g_235.f4, "g_235.f4", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_339.f3, "g_339.f3", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_370[i][j][k].f0, "g_370[i][j][k].f0", print_hash_value);
                transparent_crc(g_370[i][j][k].f1, "g_370[i][j][k].f1", print_hash_value);
                transparent_crc(g_370[i][j][k].f2, "g_370[i][j][k].f2", print_hash_value);
                transparent_crc(g_370[i][j][k].f3, "g_370[i][j][k].f3", print_hash_value);
                transparent_crc(g_370[i][j][k].f4, "g_370[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_384[i][j][k].f0, "g_384[i][j][k].f0", print_hash_value);
                transparent_crc(g_384[i][j][k].f1, "g_384[i][j][k].f1", print_hash_value);
                transparent_crc(g_384[i][j][k].f2, "g_384[i][j][k].f2", print_hash_value);
                transparent_crc(g_384[i][j][k].f3, "g_384[i][j][k].f3", print_hash_value);
                transparent_crc(g_384[i][j][k].f4, "g_384[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_417.f0, "g_417.f0", print_hash_value);
    transparent_crc(g_417.f1, "g_417.f1", print_hash_value);
    transparent_crc(g_417.f2, "g_417.f2", print_hash_value);
    transparent_crc(g_417.f3, "g_417.f3", print_hash_value);
    transparent_crc(g_417.f4, "g_417.f4", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_454.f4, "g_454.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_458[i][j].f0, "g_458[i][j].f0", print_hash_value);
            transparent_crc(g_458[i][j].f1, "g_458[i][j].f1", print_hash_value);
            transparent_crc(g_458[i][j].f2, "g_458[i][j].f2", print_hash_value);
            transparent_crc(g_458[i][j].f3, "g_458[i][j].f3", print_hash_value);
            transparent_crc(g_458[i][j].f4, "g_458[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_460.f1, "g_460.f1", print_hash_value);
    transparent_crc(g_460.f2, "g_460.f2", print_hash_value);
    transparent_crc(g_460.f3, "g_460.f3", print_hash_value);
    transparent_crc(g_460.f4, "g_460.f4", print_hash_value);
    transparent_crc(g_462.f0, "g_462.f0", print_hash_value);
    transparent_crc(g_462.f1, "g_462.f1", print_hash_value);
    transparent_crc(g_462.f2, "g_462.f2", print_hash_value);
    transparent_crc(g_462.f3, "g_462.f3", print_hash_value);
    transparent_crc(g_462.f4, "g_462.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_465[i], "g_465[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_525.f0, "g_525.f0", print_hash_value);
    transparent_crc(g_525.f1, "g_525.f1", print_hash_value);
    transparent_crc(g_525.f2, "g_525.f2", print_hash_value);
    transparent_crc(g_525.f3, "g_525.f3", print_hash_value);
    transparent_crc(g_525.f4, "g_525.f4", print_hash_value);
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2, "g_557.f2", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_557.f4, "g_557.f4", print_hash_value);
    transparent_crc(g_560.f0, "g_560.f0", print_hash_value);
    transparent_crc(g_560.f1, "g_560.f1", print_hash_value);
    transparent_crc(g_560.f2, "g_560.f2", print_hash_value);
    transparent_crc(g_560.f3, "g_560.f3", print_hash_value);
    transparent_crc(g_560.f4, "g_560.f4", print_hash_value);
    transparent_crc(g_567.f0, "g_567.f0", print_hash_value);
    transparent_crc(g_567.f1, "g_567.f1", print_hash_value);
    transparent_crc(g_567.f2, "g_567.f2", print_hash_value);
    transparent_crc(g_567.f3, "g_567.f3", print_hash_value);
    transparent_crc(g_567.f4, "g_567.f4", print_hash_value);
    transparent_crc(g_571.f2, "g_571.f2", print_hash_value);
    transparent_crc(g_571.f4, "g_571.f4", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_597.f2, "g_597.f2", print_hash_value);
    transparent_crc(g_597.f4, "g_597.f4", print_hash_value);
    transparent_crc(g_635.f2, "g_635.f2", print_hash_value);
    transparent_crc(g_635.f4, "g_635.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_638[i].f0, "g_638[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_647[i].f0, "g_647[i].f0", print_hash_value);
        transparent_crc(g_647[i].f1, "g_647[i].f1", print_hash_value);
        transparent_crc(g_647[i].f2, "g_647[i].f2", print_hash_value);
        transparent_crc(g_647[i].f3, "g_647[i].f3", print_hash_value);
        transparent_crc(g_647[i].f4, "g_647[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_664[i].f0, "g_664[i].f0", print_hash_value);
        transparent_crc(g_664[i].f1, "g_664[i].f1", print_hash_value);
        transparent_crc(g_664[i].f2, "g_664[i].f2", print_hash_value);
        transparent_crc(g_664[i].f3, "g_664[i].f3", print_hash_value);
        transparent_crc(g_664[i].f4, "g_664[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_665.f0, "g_665.f0", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_677.f0, "g_677.f0", print_hash_value);
    transparent_crc(g_677.f1, "g_677.f1", print_hash_value);
    transparent_crc(g_677.f2, "g_677.f2", print_hash_value);
    transparent_crc(g_677.f3, "g_677.f3", print_hash_value);
    transparent_crc(g_677.f4, "g_677.f4", print_hash_value);
    transparent_crc(g_678.f0, "g_678.f0", print_hash_value);
    transparent_crc(g_688.f0, "g_688.f0", print_hash_value);
    transparent_crc(g_690.f0, "g_690.f0", print_hash_value);
    transparent_crc(g_701.f1, "g_701.f1", print_hash_value);
    transparent_crc(g_701.f2, "g_701.f2", print_hash_value);
    transparent_crc(g_701.f3, "g_701.f3", print_hash_value);
    transparent_crc(g_701.f4, "g_701.f4", print_hash_value);
    transparent_crc(g_721.f2, "g_721.f2", print_hash_value);
    transparent_crc(g_721.f4, "g_721.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_727[i], "g_727[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_762.f0, "g_762.f0", print_hash_value);
    transparent_crc(g_762.f1, "g_762.f1", print_hash_value);
    transparent_crc(g_762.f2, "g_762.f2", print_hash_value);
    transparent_crc(g_762.f3, "g_762.f3", print_hash_value);
    transparent_crc(g_762.f4, "g_762.f4", print_hash_value);
    transparent_crc(g_776.f0, "g_776.f0", print_hash_value);
    transparent_crc(g_776.f1, "g_776.f1", print_hash_value);
    transparent_crc(g_776.f2, "g_776.f2", print_hash_value);
    transparent_crc(g_776.f3, "g_776.f3", print_hash_value);
    transparent_crc(g_776.f4, "g_776.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_786[i][j].f0, "g_786[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_826.f0, "g_826.f0", print_hash_value);
    transparent_crc(g_826.f1, "g_826.f1", print_hash_value);
    transparent_crc(g_826.f2, "g_826.f2", print_hash_value);
    transparent_crc(g_826.f3, "g_826.f3", print_hash_value);
    transparent_crc(g_826.f4, "g_826.f4", print_hash_value);
    transparent_crc(g_831.f0, "g_831.f0", print_hash_value);
    transparent_crc(g_846.f0, "g_846.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_866[i].f0, "g_866[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_887.f0, "g_887.f0", print_hash_value);
    transparent_crc(g_910.f0, "g_910.f0", print_hash_value);
    transparent_crc(g_931.f0, "g_931.f0", print_hash_value);
    transparent_crc(g_935.f0, "g_935.f0", print_hash_value);
    transparent_crc(g_935.f1, "g_935.f1", print_hash_value);
    transparent_crc(g_935.f2, "g_935.f2", print_hash_value);
    transparent_crc(g_935.f3, "g_935.f3", print_hash_value);
    transparent_crc(g_935.f4, "g_935.f4", print_hash_value);
    transparent_crc(g_972.f0, "g_972.f0", print_hash_value);
    transparent_crc(g_972.f1, "g_972.f1", print_hash_value);
    transparent_crc(g_972.f2, "g_972.f2", print_hash_value);
    transparent_crc(g_972.f3, "g_972.f3", print_hash_value);
    transparent_crc(g_972.f4, "g_972.f4", print_hash_value);
    transparent_crc(g_973.f0, "g_973.f0", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1017.f0, "g_1017.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1018[i][j].f0, "g_1018[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1043, "g_1043", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1045[i], "g_1045[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1072[i], "g_1072[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1117[i][j].f0, "g_1117[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1118.f0, "g_1118.f0", print_hash_value);
    transparent_crc(g_1158.f0, "g_1158.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1194[i][j][k], "g_1194[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1275, "g_1275", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1314[i], "g_1314[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
