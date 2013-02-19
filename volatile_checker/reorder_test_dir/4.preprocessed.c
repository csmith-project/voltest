# 1 "4.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "4.c"
# 10 "4.c"
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
# 11 "4.c" 2


static long __undefined;


union U0 {
   volatile uint8_t f0;
   int8_t * volatile f1;
   int64_t f2;
   const volatile signed f3 : 8;
};

union U1 {
   uint32_t f0;
   volatile uint64_t f1;
};

union U2 {
   unsigned f0 : 21;
   int32_t f1;
};


static volatile int64_t g_2 = 0x41449C9FB37B0480LL;
static int32_t g_11 = (-3L);
static uint64_t g_37 = 0x29EC6EA3D88101AELL;
static int64_t g_42[1][10] = {{0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL,0xB81F947F9F41ADF8LL}};
static int32_t g_47[2][7] = {{0x5708880DL,0x9CAAF7CCL,0x3781CDFFL,0x3781CDFFL,0x9CAAF7CCL,0x5708880DL,0x9CAAF7CCL},{0xE101EAE8L,0x5708880DL,0x5708880DL,0xE101EAE8L,0x9CAAF7CCL,0xE101EAE8L,0x5708880DL}};
static int8_t g_79 = (-2L);
static int8_t *g_78 = &g_79;
static int8_t *g_89 = &g_79;
static int32_t *g_103[6][2][3] = {{{&g_47[1][5],&g_47[1][0],&g_47[0][0]},{(void*)0,(void*)0,&g_47[0][0]}},{{&g_47[1][5],&g_47[0][0],&g_47[1][0]},{&g_47[1][0],&g_47[0][0],&g_47[1][5]}},{{&g_47[0][0],(void*)0,(void*)0},{&g_47[0][0],&g_47[1][0],&g_47[1][5]}},{{&g_47[0][0],&g_47[0][2],&g_47[1][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0]}},{{&g_47[1][5],&g_47[1][2],&g_47[1][5]},{&g_47[0][0],&g_47[0][0],&g_47[0][2]}},{{(void*)0,&g_47[0][0],&g_47[0][2]},{&g_47[1][4],(void*)0,&g_47[1][5]}}};
static union U2 g_108 = {0UL};
static uint16_t g_140[7] = {65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL};
static uint32_t g_153 = 1UL;
static uint8_t g_155 = 0x1DL;
static int16_t g_191 = (-1L);
static int16_t * volatile g_190 = &g_191;
static int16_t * volatile *g_189 = &g_190;
static int64_t g_209 = 8L;
static union U0 g_221 = {0xB0L};
static union U0 *g_220[10] = {&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221};
static union U1 g_225 = {1UL};
static union U1 g_227[2] = {{4294967295UL},{4294967295UL}};
static uint64_t g_236 = 18446744073709551607UL;
static int16_t **g_257 = (void*)0;
static int16_t ***g_256 = &g_257;
static union U1 g_286[9] = {{0x5605049BL},{0x5605049BL},{0UL},{0x5605049BL},{0x5605049BL},{0UL},{0x5605049BL},{0x5605049BL},{0UL}};
static int32_t g_348 = 1L;
static uint32_t g_360 = 18446744073709551611UL;
static union U0 g_377[2][6][2] = {{{{0UL},{255UL}},{{1UL},{0UL}},{{255UL},{5UL}},{{255UL},{0UL}},{{1UL},{255UL}},{{0UL},{5UL}}},{{{0x64L},{0x64L}},{{1UL},{0x64L}},{{0x64L},{5UL}},{{0UL},{255UL}},{{1UL},{0UL}},{{255UL},{5UL}}}};
static int64_t g_379[3][4][10] = {{{0xE013C732B1A559D9LL,0xF38C42DC16C737D3LL,(-1L),1L,1L,(-1L),0xF38C42DC16C737D3LL,0xE013C732B1A559D9LL,(-1L),0xE013C732B1A559D9LL},{1L,0x146C966623AB8013LL,0L,1L,0L,0x146C966623AB8013LL,1L,(-1L),(-1L),1L},{(-1L),0xE013C732B1A559D9LL,0L,0L,0xE013C732B1A559D9LL,(-1L),0x146C966623AB8013LL,0xE013C732B1A559D9LL,0x146C966623AB8013LL,0L},{1L,0xF38C42DC16C737D3LL,1L,0xF38C42DC16C737D3LL,1L,1L,0xE013C732B1A559D9LL,0xE013C732B1A559D9LL,1L,1L}},{{1L,(-1L),(-1L),1L,0x146C966623AB8013LL,0L,1L,0L,0x146C966623AB8013LL,1L},{0L,1L,0L,0x146C966623AB8013LL,1L,(-1L),(-1L),1L,0x146C966623AB8013LL,0L},{0xE013C732B1A559D9LL,0xE013C732B1A559D9LL,1L,1L,0xF38C42DC16C737D3LL,1L,0xF38C42DC16C737D3LL,1L,1L,0xE013C732B1A559D9LL},{0xF38C42DC16C737D3LL,(-1L),0L,0xF38C42DC16C737D3LL,0x146C966623AB8013LL,0x146C966623AB8013LL,0xF38C42DC16C737D3LL,0L,(-1L),0xF38C42DC16C737D3LL}},{{0L,0xE013C732B1A559D9LL,(-1L),0x146C966623AB8013LL,0xE013C732B1A559D9LL,0x146C966623AB8013LL,(-1L),0xE013C732B1A559D9LL,0L,0L},{0xF38C42DC16C737D3LL,1L,1L,0xE013C732B1A559D9LL,0xE013C732B1A559D9LL,1L,1L,0xF38C42DC16C737D3LL,1L,0xF38C42DC16C737D3LL},{0xE013C732B1A559D9LL,(-1L),0x146C966623AB8013LL,0xE013C732B1A559D9LL,0x146C966623AB8013LL,(-1L),0xE013C732B1A559D9LL,0L,0L,0xE013C732B1A559D9LL},{0L,0xF38C42DC16C737D3LL,0x146C966623AB8013LL,0x146C966623AB8013LL,0xF38C42DC16C737D3LL,0L,(-1L),0xF38C42DC16C737D3LL,(-1L),0L}}};
static const uint32_t *g_416 = &g_225.f0;
static const uint32_t **g_415 = &g_416;
static union U0 g_514[3] = {{0x6AL},{0x6AL},{0x6AL}};
static int32_t g_545 = 0xB1AFC265L;
static union U1 g_583 = {7UL};
static union U1 *g_582 = &g_583;
static int64_t g_618[5] = {0x70F7E07F07CB8E2ALL,0x70F7E07F07CB8E2ALL,0x70F7E07F07CB8E2ALL,0x70F7E07F07CB8E2ALL,0x70F7E07F07CB8E2ALL};
static uint8_t g_637[10] = {253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL};
static union U0 g_674 = {253UL};
static uint8_t *g_676 = &g_155;
static int8_t g_726 = 8L;
static union U1 ** volatile g_787 = &g_582;
static int8_t g_789[3] = {0xDFL,0xDFL,0xDFL};
static union U0 g_793 = {248UL};
static volatile uint64_t g_862 = 1UL;
static int32_t *g_871 = &g_348;
static int32_t ** volatile g_877 = &g_103[2][0][2];
static union U1 **g_907 = &g_582;
static union U1 *** volatile g_906 = &g_907;
static const union U0 g_917[9][7] = {{{252UL},{0x9BL},{252UL},{0xEFL},{0x7DL},{0x99L},{0x7BL}},{{0xFDL},{0xA7L},{0xFDL},{0x86L},{4UL},{4UL},{0x86L}},{{252UL},{0x9BL},{252UL},{0xEFL},{0x7DL},{0x99L},{0x7BL}},{{0xFDL},{0xA7L},{0xFDL},{0x86L},{4UL},{4UL},{0x86L}},{{252UL},{0x9BL},{252UL},{0xEFL},{0x7DL},{0x99L},{0x7BL}},{{0xFDL},{0xA7L},{0xFDL},{0x86L},{4UL},{4UL},{0x86L}},{{252UL},{0x9BL},{252UL},{0xEFL},{0x7DL},{0x99L},{0x7BL}},{{0xFDL},{0xA7L},{0xFDL},{0x86L},{4UL},{4UL},{0x86L}},{{252UL},{0x9BL},{252UL},{0xEFL},{0x7DL},{0x99L},{0x7BL}}};
static int8_t **g_929 = &g_78;
static int32_t ** volatile g_932 = &g_871;
static union U2 g_944 = {4294967294UL};
static uint32_t *g_951 = &g_227[1].f0;
static uint32_t **g_950[9][8][3] = {{{(void*)0,&g_951,&g_951},{&g_951,&g_951,(void*)0},{(void*)0,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,&g_951,(void*)0},{&g_951,&g_951,&g_951}},{{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,&g_951,&g_951}},{{(void*)0,&g_951,&g_951},{&g_951,&g_951,(void*)0},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,(void*)0,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,(void*)0}},{{&g_951,&g_951,&g_951},{(void*)0,&g_951,(void*)0},{(void*)0,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,(void*)0,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,(void*)0}},{{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,&g_951,&g_951},{&g_951,&g_951,(void*)0},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951}},{{&g_951,(void*)0,&g_951},{&g_951,(void*)0,&g_951},{&g_951,(void*)0,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,(void*)0,(void*)0},{&g_951,&g_951,&g_951},{&g_951,(void*)0,&g_951}},{{&g_951,(void*)0,&g_951},{&g_951,&g_951,(void*)0},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,(void*)0},{&g_951,(void*)0,&g_951}},{{&g_951,&g_951,&g_951},{(void*)0,&g_951,&g_951},{&g_951,&g_951,(void*)0},{&g_951,(void*)0,&g_951},{&g_951,(void*)0,&g_951},{&g_951,&g_951,&g_951},{(void*)0,(void*)0,&g_951},{(void*)0,(void*)0,&g_951}},{{&g_951,&g_951,&g_951},{&g_951,&g_951,&g_951},{&g_951,&g_951,(void*)0},{&g_951,(void*)0,&g_951},{(void*)0,&g_951,&g_951},{&g_951,&g_951,&g_951},{(void*)0,&g_951,(void*)0},{(void*)0,&g_951,&g_951}}};
static uint16_t g_968 = 0x99E0L;
static union U1 g_993 = {4294967295UL};
static uint16_t *g_1010 = (void*)0;
static uint16_t **g_1009 = &g_1010;
static uint16_t *** volatile g_1008 = &g_1009;
static union U0 g_1056[6] = {{0xF8L},{0xF8L},{0xF8L},{0xF8L},{0xF8L},{0xF8L}};
static const volatile union U1 g_1057 = {0xF5F0C0D1L};
static volatile union U1 g_1058 = {4294967286UL};
static volatile union U0 g_1072 = {0xCEL};
static union U1 g_1092 = {0xB147400FL};
static union U1 g_1093 = {4294967292UL};
static int8_t g_1113 = 0x18L;
static volatile int8_t g_1131[3] = {2L,2L,2L};
static union U1 g_1170 = {0xDB022F79L};
static const union U0 g_1181 = {254UL};
static uint32_t g_1207 = 1UL;
static union U1 ** volatile g_1211 = (void*)0;
static union U1 ** const volatile g_1212 = (void*)0;
static int16_t g_1215 = 0x5A41L;
static int16_t ****g_1218 = &g_256;
static int32_t ** volatile g_1225 = &g_871;
static volatile union U0 g_1236 = {6UL};
static uint16_t g_1247 = 1UL;
static volatile union U0 g_1266 = {255UL};
static const union U0 g_1310 = {1UL};
static const union U0 g_1311 = {1UL};
static int32_t * volatile g_1327 = &g_47[0][0];
static const union U0 g_1350 = {251UL};
static const union U0 g_1351 = {0xD6L};
static int16_t g_1352 = 0x2677L;
static volatile union U2 g_1368 = {0x4B9AF410L};
static volatile union U2 *g_1367 = &g_1368;
static volatile union U2 ** volatile g_1366 = &g_1367;
static int32_t ** volatile g_1382 = (void*)0;
static int32_t ** volatile g_1401 = (void*)0;
static int32_t ** volatile g_1402 = &g_103[3][0][2];
static union U0 g_1451[1] = {{0xB7L}};
static union U2 ** volatile g_1457 = (void*)0;
static uint32_t *g_1463[3][10] = {{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360}};
static uint32_t **g_1462[4][3][10] = {{{&g_1463[1][1],(void*)0,&g_1463[1][2],&g_1463[1][1],&g_1463[1][2],(void*)0,&g_1463[1][1],&g_1463[0][7],&g_1463[0][7],&g_1463[1][1]},{&g_1463[0][7],&g_1463[0][7],&g_1463[1][2],&g_1463[1][2],&g_1463[0][7],&g_1463[0][7],(void*)0,&g_1463[0][7],(void*)0,&g_1463[0][7]},{&g_1463[0][7],&g_1463[0][7],(void*)0,&g_1463[0][7],&g_1463[0][7],(void*)0,&g_1463[1][1],&g_1463[1][1],(void*)0,&g_1463[0][7]}},{{&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],&g_1463[0][7],&g_1463[0][7],&g_1463[1][2],&g_1463[0][7]},{&g_1463[0][7],&g_1463[0][7],&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],(void*)0,(void*)0,&g_1463[1][2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],&g_1463[0][7],&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],(void*)0}},{{&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],&g_1463[0][7],&g_1463[0][7]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],(void*)0,(void*)0},{&g_1463[1][2],&g_1463[0][7],&g_1463[0][7],&g_1463[0][7],&g_1463[1][2],&g_1463[0][7],(void*)0,(void*)0,&g_1463[0][7],&g_1463[1][2]}}};
static uint32_t *** const volatile g_1461[3][3][8] = {{{&g_1462[3][0][3],&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],(void*)0,&g_1462[2][1][6],&g_1462[1][1][7],&g_1462[2][1][6]},{&g_1462[3][2][6],&g_1462[2][1][6],(void*)0,&g_1462[2][1][6],(void*)0,&g_1462[2][1][6],&g_1462[3][2][6],&g_1462[2][1][6]},{&g_1462[2][1][6],&g_1462[0][0][8],&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[3][0][3],(void*)0,(void*)0,&g_1462[2][1][6]}},{{&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][2][2],&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[0][2][2],(void*)0,&g_1462[2][1][4]},{&g_1462[2][1][4],(void*)0,&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],(void*)0,(void*)0,&g_1462[2][1][6]},{&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],(void*)0,&g_1462[1][1][7],&g_1462[2][1][6]}},{{&g_1462[2][1][6],&g_1462[2][1][6],&g_1462[2][1][6],(void*)0,&g_1462[3][2][6],(void*)0,&g_1462[1][2][8],&g_1462[2][2][2]},{(void*)0,&g_1462[2][1][6],&g_1462[3][0][3],(void*)0,&g_1462[2][1][6],(void*)0,&g_1462[0][2][2],&g_1462[2][1][6]},{&g_1462[0][2][2],&g_1462[2][1][6],&g_1462[3][2][6],(void*)0,&g_1462[1][1][7],(void*)0,&g_1462[3][2][6],&g_1462[2][1][6]}}};
static union U1 g_1473 = {4294967287UL};
static uint8_t **g_1547[4][1][9] = {{{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676}},{{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676}},{{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676}},{{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676}}};
static volatile int32_t g_1590[1][8][7] = {{{0xE00DBA34L,0x23935CA7L,0xDC58FE80L,4L,1L,0xE00DBA34L,0xF28E1661L},{8L,0x5A9EB54BL,1L,(-2L),4L,(-2L),1L},{0x1D41173BL,0x1D41173BL,1L,(-1L),0x33F5933AL,0x23935CA7L,0xF28E1661L},{1L,(-1L),(-4L),0x33F5933AL,0x1D41173BL,1L,0x497927FAL},{0x15EF5B0FL,0xDC58FE80L,(-2L),(-1L),0x33F5933AL,0xE00DBA34L,0xDC58FE80L},{1L,4L,8L,8L,4L,1L,0xDC58FE80L},{0xE00DBA34L,0x33F5933AL,(-1L),(-2L),0xDC58FE80L,0x15EF5B0FL,0x497927FAL},{1L,0x1D41173BL,0x33F5933AL,(-4L),(-1L),1L,0xF28E1661L}}};
static int8_t g_1592 = 0xE2L;
static int32_t ** volatile g_1600 = &g_103[3][0][2];
static const union U2 *g_1603 = &g_108;
static const union U2 ** volatile g_1602 = &g_1603;
static uint32_t g_1636[2] = {4294967290UL,4294967290UL};
static volatile union U1 g_1642 = {0x795CCE42L};
static union U1 g_1658 = {0x50DC5A68L};
static union U1 g_1660 = {4294967295UL};
static volatile union U0 g_1709 = {0UL};
static union U0 g_1720[5][2][9] = {{{{0x57L},{0xFAL},{0UL},{0xD2L},{0x14L},{0x16L},{0x5CL},{0x16L},{0x14L}},{{0xC9L},{0x5CL},{0x5CL},{0xC9L},{0xFAL},{0UL},{0x16L},{0x72L},{0x14L}}},{{{0x72L},{0x69L},{0xC3L},{0x5CL},{0x98L},{0xD2L},{0x8CL},{0x8CL},{0xD2L}},{{0xFAL},{0UL},{0xC9L},{0UL},{0xFAL},{0x72L},{0x69L},{0xC3L},{0x5CL}}},{{{0xFAL},{0UL},{0x16L},{0x72L},{0x14L},{0x69L},{0x16L},{1UL},{0x16L}},{{0x72L},{0x5CL},{0x57L},{0x57L},{0x5CL},{0x14L},{255UL},{0x69L},{0xD2L}}},{{{1UL},{0x5CL},{0x8CL},{0UL},{0xC3L},{0xC9L},{0x57L},{0x16L},{0x16L}},{{255UL},{0xB6L},{0xC9L},{0x16L},{0xC9L},{0xB6L},{255UL},{0x57L},{0x8CL}}},{{{0x72L},{0x16L},{0xC9L},{255UL},{0x16L},{0x98L},{0xC3L},{0xB6L},{0x14L}},{{0x57L},{0x72L},{0x8CL},{0xB6L},{0xB6L},{0x8CL},{0x72L},{0x57L},{0xFAL}}}};
static int32_t g_1753 = (-2L);
static volatile union U0 g_1757 = {4UL};
static uint16_t g_1779[10][3] = {{0x280CL,0x280CL,0x280CL},{0x52C2L,0x52C2L,0x52C2L},{0x280CL,0x280CL,0x280CL},{0x52C2L,0x52C2L,0x52C2L},{0x280CL,0x280CL,0x280CL},{0x52C2L,0x52C2L,0x52C2L},{0x280CL,0x280CL,0x280CL},{0x52C2L,0x52C2L,0x52C2L},{0x280CL,0x280CL,0x280CL},{0x52C2L,0x52C2L,0x52C2L}};
static const volatile union U1 g_1836[3][5] = {{{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L},{0x2DF2F655L}}};
static const union U0 *g_1847 = (void*)0;
static const union U0 ** volatile g_1846[3][1][1] = {{{&g_1847}},{{&g_1847}},{{&g_1847}}};
static const union U0 g_1851 = {255UL};
static int16_t g_1895 = 0x1FFEL;
static int32_t ** volatile g_1935 = &g_871;
static union U2 g_1948 = {0xDEF1EAEFL};
static volatile union U0 g_2028 = {255UL};
static uint32_t g_2062 = 2UL;
static uint32_t g_2162[9][10][1] = {{{0xB3D2DD24L},{0x04883F8BL},{18446744073709551615UL},{0x0E4F6423L},{18446744073709551615UL},{0x3712C2F1L},{0UL},{0x0E4F6423L},{1UL},{0xF27D1FE6L}},{{0xF8E4BEF7L},{0x4C4032EDL},{0xF8E4BEF7L},{0xF27D1FE6L},{1UL},{0x0E4F6423L},{0UL},{0x3712C2F1L},{18446744073709551615UL},{0x3712C2F1L}},{{0UL},{0x0E4F6423L},{1UL},{0xF27D1FE6L},{0xF8E4BEF7L},{0x4C4032EDL},{0xF8E4BEF7L},{0xF27D1FE6L},{1UL},{0x0E4F6423L}},{{0UL},{0x3712C2F1L},{18446744073709551615UL},{0x3712C2F1L},{0UL},{0x0E4F6423L},{1UL},{0xF27D1FE6L},{0xF8E4BEF7L},{0x4C4032EDL}},{{0xF8E4BEF7L},{0xF27D1FE6L},{1UL},{0x0E4F6423L},{0UL},{0x3712C2F1L},{18446744073709551615UL},{0x3712C2F1L},{0UL},{0x0E4F6423L}},{{1UL},{0xF27D1FE6L},{0xF8E4BEF7L},{0x4C4032EDL},{0xF8E4BEF7L},{0xF27D1FE6L},{1UL},{0x0E4F6423L},{0UL},{0x3712C2F1L}},{{18446744073709551615UL},{0x3712C2F1L},{0UL},{0x0E4F6423L},{1UL},{0xF27D1FE6L},{0xF8E4BEF7L},{0x4C4032EDL},{0xF8E4BEF7L},{0xF27D1FE6L}},{{1UL},{0x0E4F6423L},{0UL},{0x3712C2F1L},{18446744073709551615UL},{0x3712C2F1L},{0UL},{0x0E4F6423L},{1UL},{0xF27D1FE6L}},{{0xF8E4BEF7L},{0x4C4032EDL},{0xF8E4BEF7L},{0xF27D1FE6L},{1UL},{0x0E4F6423L},{0UL},{0x3712C2F1L},{18446744073709551615UL},{0x3712C2F1L}}};
static const volatile union U1 g_2192 = {0UL};
static union U0 g_2210 = {0x22L};
static int32_t ** volatile g_2212[3] = {&g_871,&g_871,&g_871};
static int32_t ** volatile g_2220[5] = {&g_871,&g_871,&g_871,&g_871,&g_871};
static union U0 g_2238 = {0x9CL};
static int32_t ** volatile g_2348 = &g_871;
static union U2 * const g_2352[1] = {&g_108};
static union U2 * const *g_2351 = &g_2352[0];
static union U2 * const ** volatile g_2350 = &g_2351;
static union U1 g_2386 = {0x76645565L};
static const int8_t *g_2417 = &g_789[2];
static const int8_t **g_2416 = &g_2417;
static const int8_t *** volatile g_2415 = &g_2416;
static const union U0 g_2449 = {0xC0L};
static int32_t ** volatile g_2464 = (void*)0;
static int32_t ** volatile g_2465 = &g_103[3][0][2];
static uint64_t * volatile g_2483 = &g_236;
static uint64_t * volatile *g_2482 = &g_2483;
static uint64_t * volatile * volatile *g_2481 = &g_2482;
static uint64_t *g_2486 = &g_37;
static uint64_t **g_2485 = &g_2486;
static uint64_t ***g_2484 = &g_2485;
static uint64_t ***g_2490 = (void*)0;
static int32_t ** volatile g_2508 = &g_103[0][0][2];
static const int32_t *g_2530 = &g_1753;
static int32_t ** volatile g_2532 = &g_103[3][0][2];
static uint32_t g_2571[6][1][7] = {{{0x7C8A38B9L,0xD9764871L,3UL,0x8D23BF30L,1UL,18446744073709551615UL,18446744073709551615UL}},{{3UL,0xD9764871L,0x7C8A38B9L,0xD9764871L,3UL,0x8D23BF30L,1UL}},{{6UL,0x49F9322DL,0xD9764871L,0x8D23BF30L,4UL,0x8D23BF30L,0xD9764871L}},{{1UL,1UL,0xF256CD5CL,0x7C8A38B9L,0x49F9322DL,18446744073709551615UL,6UL}},{{6UL,0x8D23BF30L,0xF256CD5CL,0xF256CD5CL,0x8D23BF30L,6UL,4UL}},{{3UL,0xF256CD5CL,0xD9764871L,4UL,0x49F9322DL,0x49F9322DL,4UL}}};
static const union U0 g_2608 = {3UL};
static volatile union U1 g_2619 = {1UL};
static volatile int16_t g_2626 = 0xC294L;
static union U0 g_2635 = {1UL};
static uint8_t g_2669 = 255UL;
static union U1 g_2672 = {1UL};
static int32_t g_2674[3] = {0x4E01E2DCL,0x4E01E2DCL,0x4E01E2DCL};
static uint32_t g_2688 = 0x528CC7DEL;
static union U0 g_2723 = {0x97L};
static const uint64_t *g_2732[8][7] = {{&g_37,&g_37,&g_37,&g_236,&g_236,&g_37,&g_236},{&g_236,&g_37,&g_37,&g_236,(void*)0,&g_236,(void*)0},{&g_37,&g_236,&g_37,&g_236,&g_37,&g_37,&g_236},{&g_37,&g_37,&g_37,&g_236,&g_37,(void*)0,(void*)0},{&g_37,&g_37,&g_236,&g_37,&g_236,&g_37,&g_236},{&g_37,&g_37,(void*)0,(void*)0,(void*)0,(void*)0,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_236,&g_37,(void*)0,&g_37,&g_37,(void*)0}};
static const uint64_t **g_2731 = &g_2732[5][2];
static const uint64_t ***g_2730 = &g_2731;
static const uint64_t ****g_2729 = &g_2730;
static union U1 g_2749[6] = {{4294967287UL},{4294967287UL},{4294967287UL},{4294967287UL},{4294967287UL},{4294967287UL}};
static union U1 g_2820 = {0UL};
static int32_t g_2844[9][2] = {{0x162867F8L,1L},{(-1L),(-1L)},{(-1L),1L},{0x162867F8L,1L},{1L,1L},{0x162867F8L,1L},{(-1L),(-1L)},{(-1L),1L},{0x162867F8L,1L}};
static uint32_t g_2896 = 0xCABA64B0L;
static volatile union U1 g_2906 = {1UL};
static int32_t ** volatile g_2945 = &g_871;
static volatile union U1 g_2983 = {0xA7B6568FL};
static int64_t g_2990 = 1L;
static union U2 g_2991 = {0x4B4C7FBCL};
static volatile union U1 g_3004 = {0x7D2F4419L};
static int32_t ** volatile g_3018 = (void*)0;
static int32_t ** volatile g_3019 = &g_871;
static volatile union U1 g_3027 = {4294967295UL};
static const volatile uint64_t *g_3041[10][10][2] = {{{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,(void*)0}},{{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862}},{{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862}},{{&g_862,(void*)0},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,(void*)0},{(void*)0,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,&g_862}},{{(void*)0,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{(void*)0,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{(void*)0,&g_862}},{{(void*)0,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{(void*)0,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,(void*)0}},{{(void*)0,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{(void*)0,&g_862}},{{(void*)0,(void*)0},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{(void*)0,&g_862},{&g_862,(void*)0},{&g_862,&g_862},{&g_862,(void*)0},{&g_862,&g_862}},{{(void*)0,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862}},{{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862},{(void*)0,&g_862},{&g_862,&g_862}}};
static const volatile uint64_t **g_3040[8] = {&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0],&g_3041[9][1][0]};
static const volatile uint64_t ** const volatile * const g_3039 = &g_3040[4];
static union U0 g_3058[7][3] = {{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}},{{0xBAL},{5UL},{0xBAL}}};
static volatile union U0 g_3118 = {5UL};
static int32_t *g_3121 = &g_2674[2];
static union U0 g_3142 = {0x99L};
static int8_t g_3170 = 0x01L;
static volatile union U0 g_3180 = {0x11L};
static volatile union U1 g_3221 = {0UL};
static union U1 g_3298 = {0x96E9484FL};
static union U1 ** volatile g_3308 = &g_582;
static int64_t g_3317 = 0x8D15A818A213E2C6LL;
static volatile uint16_t g_3320 = 0x95A9L;
static int32_t ** volatile g_3324 = &g_871;
static const union U0 ** const volatile * volatile g_3351 = &g_1846[0][0][0];
static const union U0 ** const volatile * volatile * volatile g_3350[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * volatile g_3374[8][2][2] = {{{&g_47[1][6],&g_2674[0]},{&g_2674[0],&g_47[1][6]}},{{&g_2674[0],&g_2674[0]},{&g_47[1][6],&g_2674[0]}},{{&g_2674[0],&g_47[1][6]},{&g_2674[0],&g_2674[0]}},{{&g_47[1][6],&g_2674[0]},{&g_2674[0],&g_47[1][6]}},{{&g_2674[0],&g_2674[0]},{&g_47[1][6],&g_2674[0]}},{{&g_2674[0],&g_47[1][6]},{&g_2674[0],&g_2674[0]}},{{&g_47[1][6],&g_2674[0]},{&g_2674[0],&g_47[1][6]}},{{&g_2674[0],&g_2674[0]},{&g_47[1][6],&g_2674[0]}}};
static int64_t g_3376 = (-1L);
static int16_t g_3380 = 0x1FF0L;
static int32_t ** volatile g_3388[5] = {&g_871,&g_871,&g_871,&g_871,&g_871};
static int32_t ** volatile g_3389 = (void*)0;
static int16_t g_3391[10][3] = {{3L,3L,3L},{0xB6AFL,0xB6AFL,0xB6AFL},{3L,3L,3L},{0xB6AFL,0xB6AFL,0xB6AFL},{3L,3L,3L},{0xB6AFL,0xB6AFL,0xB6AFL},{3L,3L,3L},{0xB6AFL,0xB6AFL,0xB6AFL},{3L,3L,3L},{0xB6AFL,0xB6AFL,0xB6AFL}};



static uint64_t func_1(void);
static uint16_t func_3(uint32_t p_4, const int8_t * p_5, int16_t p_6, int8_t p_7, uint64_t p_8);
static const union U0 func_12(int8_t p_13, const uint32_t p_14);
static int8_t func_15(int8_t * p_16, union U2 p_17, union U2 p_18);
static union U2 func_20(const uint8_t p_21, int32_t p_22, int8_t p_23);
static uint16_t func_31(int8_t p_32, int32_t p_33, int8_t * p_34, const uint8_t p_35, uint32_t p_36);
static int8_t * func_38(uint8_t p_39);
static const uint8_t func_59(int8_t * p_60);
static int8_t * func_64(const uint32_t p_65, int32_t * p_66, int32_t * p_67, uint32_t p_68);
static int8_t * func_69(int32_t * p_70, int32_t p_71, uint64_t p_72, int64_t p_73, int8_t * const p_74);
# 252 "4.c"
static uint64_t func_1(void)
{
    int32_t l_9 = 1L;
    int32_t *l_10[4][10] = {{(void*)0,(void*)0,&g_11,(void*)0,(void*)0,&g_11,(void*)0,(void*)0,&g_11,(void*)0},{(void*)0,&g_11,&g_11,(void*)0,&g_11,&g_11,(void*)0,&g_11,&g_11,(void*)0},{&g_11,(void*)0,&g_11,&g_11,(void*)0,&g_11,&g_11,(void*)0,&g_11,&g_11},{(void*)0,(void*)0,&g_11,(void*)0,(void*)0,&g_11,(void*)0,(void*)0,&g_11,(void*)0}};
    int8_t *l_19 = (void*)0;
    int64_t l_30 = 0xC013CEF339200279LL;
    int8_t *l_725 = &g_726;
    int8_t **l_724 = &l_725;
    int8_t l_727 = 0x2DL;
    uint8_t l_728[2][1];
    int64_t l_729 = 1L;
    const int8_t *l_1353 = (void*)0;
    int16_t l_2668 = 0x0A73L;
    union U2 l_2673 = {1UL};
    const int8_t l_2679[3] = {0xBBL,0xBBL,0xBBL};
    const uint32_t l_2682[7] = {0x932BC2FDL,0x932BC2FDL,0x932BC2FDL,0x932BC2FDL,0x932BC2FDL,0x932BC2FDL,0x932BC2FDL};
    int64_t *l_2683 = &g_2635.f2;
    uint8_t l_2689 = 255UL;
    const uint64_t l_2707 = 7UL;
    uint32_t l_2738 = 0xFC36A4C3L;
    int64_t l_2799 = 0x4DD7E9E57C2DC4A7LL;
    uint32_t l_2811[10] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
    int16_t l_2827[4][3] = {{0xD751L,0xA08EL,1L},{0x53B7L,0xA08EL,0x53B7L},{0x5F8BL,0xD751L,1L},{0x5F8BL,0x5F8BL,0xD751L}};
    int32_t l_2842[7][5] = {{0x0AE200DFL,0L,(-1L),0L,0x0AE200DFL},{1L,0xE78C59C9L,1L,1L,0xE78C59C9L},{0x0AE200DFL,0L,0x23633B2BL,0L,0x23633B2BL},{0xE78C59C9L,0xE78C59C9L,0xF0A275E0L,0xE78C59C9L,0xE78C59C9L},{0x23633B2BL,0L,0x23633B2BL,0L,0x0AE200DFL},{0xE78C59C9L,1L,1L,0xE78C59C9L,1L},{0x0AE200DFL,0L,(-1L),0L,0x0AE200DFL}};
    uint32_t l_2847 = 0xD14821A7L;
    union U0 * const l_2850 = &g_514[0];
    int8_t l_2887[3][3][1];
    uint16_t l_2918 = 9UL;
    int16_t l_2967 = 0xFE13L;
    uint32_t **l_3005[9] = {&g_951,&g_951,&g_951,&g_951,&g_951,&g_951,&g_951,&g_951,&g_951};
    union U0 * const *l_3010[4][5][8] = {{{&g_220[1],&l_2850,&g_220[5],&l_2850,&l_2850,&g_220[5],&g_220[6],&l_2850},{&l_2850,&g_220[6],&g_220[1],(void*)0,&g_220[1],&g_220[6],&l_2850,&g_220[6]},{&l_2850,(void*)0,&g_220[6],&l_2850,(void*)0,&l_2850,&l_2850,&l_2850},{&l_2850,&l_2850,&g_220[5],&g_220[1],&l_2850,&l_2850,&l_2850,&l_2850},{&l_2850,&g_220[6],&g_220[6],&l_2850,&l_2850,&g_220[6],&l_2850,&g_220[1]}},{{&l_2850,&l_2850,&l_2850,(void*)0,&l_2850,&g_220[6],(void*)0,&l_2850},{&l_2850,&l_2850,&g_220[5],&g_220[6],&l_2850,&g_220[6],&g_220[5],&l_2850},{&l_2850,&g_220[6],&l_2850,&l_2850,&g_220[5],&l_2850,&l_2850,&l_2850},{&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&g_220[6],&l_2850,&l_2850},{&g_220[1],&l_2850,&l_2850,&l_2850,&l_2850,&g_220[1],&g_220[5],&l_2850}},{{&l_2850,&g_220[1],&g_220[5],&l_2850,&g_220[6],&l_2850,(void*)0,&g_220[6]},{&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&g_220[6],&l_2850,&l_2850},{&g_220[6],&l_2850,&g_220[6],&l_2850,&l_2850,&g_220[5],&l_2850,&l_2850},{&l_2850,&l_2850,&g_220[5],&l_2850,&g_220[1],&g_220[6],&l_2850,&l_2850},{&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&l_2850}},{{&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[1],&g_220[6],&l_2850,&l_2850},{&g_220[6],&g_220[6],&l_2850,&l_2850,&g_220[6],&g_220[6],&g_220[1],&g_220[6]},{&g_220[5],&g_220[6],&l_2850,&g_220[6],&g_220[5],&l_2850,&l_2850,&g_220[5]},{&g_220[6],&l_2850,&l_2850,&g_220[6],&g_220[1],&g_220[6],&g_220[6],&g_220[6]},{&l_2850,&g_220[6],&l_2850,&l_2850,&l_2850,&l_2850,&l_2850,&l_2850}}};
    union U0 * const **l_3009 = &l_3010[0][3][0];
    uint32_t l_3038 = 0xC657080DL;
    uint8_t l_3046 = 0UL;
    union U2 *l_3089 = (void*)0;
    union U2 ** const l_3088[7][10] = {{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089},{&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089,&l_3089}};
    union U2 l_3102 = {0UL};
    uint16_t l_3149 = 0UL;
    uint64_t *l_3190 = &g_236;
    int32_t *l_3209 = &g_2674[0];
    int8_t l_3232 = 0x6DL;
    union U0 ***l_3268 = (void*)0;
    int16_t l_3277 = 2L;
    int32_t l_3278 = 0x291CD51BL;
    uint32_t l_3360 = 0x186F270AL;
    uint64_t l_3377[7] = {1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL};
    uint16_t *l_3385 = &g_140[6];
    uint8_t **l_3386 = &g_676;
    int32_t l_3387 = 3L;
    int32_t **l_3390[8];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_728[i][j] = 0UL;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_2887[i][j][k] = 0x1DL;
        }
    }
    for (i = 0; i < 8; i++)
        l_3390[i] = &g_871;
    g_2669 = ((g_2 , ((func_3((g_1352 = ((g_11 = (l_9 >= 0x672D714FL)) >= (((func_12(func_15(l_19, func_20(((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((l_30 | (!0UL)) , ((func_31(g_2, g_37, ((*l_724) = func_38((safe_sub_func_int16_t_s_s((g_37 || g_37), g_37)))), g_286[4].f0, g_37) , 0x1B8232BAFFBFE2E9LL) ^ 0x89EDD3BCD996E57ALL)), 0x698FB826L)), 7)), g_286[4].f0)) <= l_727) , 0x35L) == l_728[0][0]), l_729, g_618[2]), g_944), (*g_951)) , 255UL) && (*g_676)) || (-1L)))), l_1353, g_618[0], g_618[1], g_1113) <= 0x71FFL) || l_2668)) > g_1636[0]);





    ((g_256 == 0 || g_256 == &g_257) ? (void) (0) : __assert_fail ("g_256 == 0 || g_256 == &g_257", "4.c", 324, __PRETTY_FUNCTION__));
    ((g_582 == 0 || g_582 == &g_583) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583", "4.c", 325, __PRETTY_FUNCTION__));
    ((l_725 == 0 || l_725 == &g_79) ? (void) (0) : __assert_fail ("l_725 == 0 || l_725 == &g_79", "4.c", 326, __PRETTY_FUNCTION__));


    (((g_1010 >= &g_140[0] && g_1010 <= &g_140[6]) || g_1010 == 0) ? (void) (0) : __assert_fail ("(g_1010 >= &g_140[0] && g_1010 <= &g_140[6]) || g_1010 == 0", "4.c", 329, __PRETTY_FUNCTION__));
    ((g_1218 == 0 || g_1218 == &g_256) ? (void) (0) : __assert_fail ("g_1218 == 0 || g_1218 == &g_256", "4.c", 330, __PRETTY_FUNCTION__));
    ((g_1603 == 0 || g_1603 == &g_108) ? (void) (0) : __assert_fail ("g_1603 == 0 || g_1603 == &g_108", "4.c", 331, __PRETTY_FUNCTION__));


    ((g_2490 == 0 || g_2490 == &g_2485) ? (void) (0) : __assert_fail ("g_2490 == 0 || g_2490 == &g_2485", "4.c", 334, __PRETTY_FUNCTION__));

    if (((safe_lshift_func_int8_t_s_u((((g_2672 , l_2673) , g_2674[0]) > (safe_mod_func_uint8_t_u_u(func_31((((((safe_rshift_func_uint8_t_u_u(1UL, l_2679[0])) , ((*l_2683) = (safe_lshift_func_uint16_t_u_u(l_2682[3], 9)))) <= 0x704B967396A3152ALL) <= (safe_mod_func_uint32_t_u_u((*g_951), (safe_mod_func_uint8_t_u_u((*g_676), 0xB2L))))) ^ g_2688), g_2672.f0, (*l_724), (*g_676), l_2689), (*g_2417)))), 1)) && 8L))
    {
        int8_t l_2692 = 0x0CL;
        int32_t l_2695[4][2][10] = {{{1L,0x8D7715D0L,1L,(-2L),(-1L),1L,(-4L),0xBF797063L,(-2L),(-2L)},{0xBF797063L,0x8D7715D0L,(-2L),(-1L),(-1L),(-2L),0x8D7715D0L,0xBF797063L,0xF8A11D65L,(-1L)}},{{0xBF797063L,(-4L),1L,(-1L),(-2L),1L,0x8D7715D0L,1L,(-2L),(-1L)},{1L,0x8D7715D0L,1L,(-2L),(-1L),1L,(-4L),0xBF797063L,(-2L),(-2L)}},{{0xBF797063L,0x8D7715D0L,(-2L),(-1L),(-1L),(-2L),0x8D7715D0L,0xBF797063L,0xF8A11D65L,(-1L)},{0xBF797063L,(-4L),1L,(-1L),(-2L),1L,0x8D7715D0L,1L,(-2L),(-1L)}},{{1L,0x8D7715D0L,1L,(-2L),(-1L),1L,(-4L),0xBF797063L,(-2L),(-2L)},{0xBF797063L,0x8D7715D0L,(-2L),(-1L),(-1L),(-1L),0xE334BD17L,(-2L),0xF0FCA7A0L,(-10L)}}};
        int8_t *l_2706 = &g_1592;
        int16_t *l_2708 = &g_1352;
        uint64_t l_2709 = 0xE260A8623BDA861ALL;
        int32_t l_2758 = 0x566D0E4EL;
        uint32_t l_2761 = 4294967295UL;
        union U0 * const l_2764 = &g_2635;
        uint64_t l_2821 = 0x018E934510133442LL;
        int32_t l_2824 = 1L;
        union U2 l_2860 = {0xD6E6B4AEL};
        uint64_t ***l_2892 = (void*)0;
        int32_t l_2899[5][5][1] = {{{5L},{8L},{5L},{8L},{5L}},{{8L},{5L},{8L},{5L},{8L}},{{5L},{8L},{5L},{8L},{5L}},{{8L},{5L},{8L},{5L},{8L}},{{5L},{8L},{5L},{8L},{5L}}};
        int16_t ***l_2908[2][6][8] = {{{&g_257,(void*)0,&g_257,&g_257,&g_257,(void*)0,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0,(void*)0,&g_257},{&g_257,(void*)0,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,(void*)0,(void*)0,&g_257},{&g_257,(void*)0,(void*)0,&g_257,(void*)0,(void*)0,&g_257,&g_257},{(void*)0,(void*)0,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257}},{{&g_257,&g_257,&g_257,&g_257,&g_257,(void*)0,&g_257,&g_257},{(void*)0,(void*)0,&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,&g_257,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_257},{(void*)0,(void*)0,(void*)0,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,(void*)0,(void*)0,(void*)0,&g_257}}};
        int32_t l_2927 = (-1L);
        int32_t *l_2947 = &l_2842[5][4];
        int32_t l_2975 = 1L;
        uint8_t l_2996 = 0x36L;
        int32_t l_3011[8][6][5] = {{{0x263471EDL,(-6L),(-10L),0xDB60AFABL,1L},{0xCD8385B8L,0xA2BC29D9L,0x0036848CL,0x4132E0B6L,0x6DAEA9C2L},{4L,(-6L),0xAF3C45B1L,0x74928C75L,0xAF3C45B1L},{0xCD8385B8L,0xCD8385B8L,(-5L),0x2617DBA0L,0x6DAEA9C2L},{0x263471EDL,0xEC78117BL,(-10L),0x74928C75L,1L},{0x78F173F3L,0xA2BC29D9L,(-5L),0x4132E0B6L,7L}},{{4L,0xEC78117BL,0xAF3C45B1L,0xDB60AFABL,0xAF3C45B1L},{0x78F173F3L,0xCD8385B8L,0x0036848CL,0x2617DBA0L,7L},{0x263471EDL,(-6L),(-10L),0xDB60AFABL,1L},{0xCD8385B8L,0xA2BC29D9L,0x0036848CL,0x4132E0B6L,0x6DAEA9C2L},{4L,(-6L),0xAF3C45B1L,0x74928C75L,0xAF3C45B1L},{0xCD8385B8L,0xCD8385B8L,(-5L),0x2617DBA0L,0x6DAEA9C2L}},{{0x263471EDL,0xEC78117BL,(-10L),0x74928C75L,1L},{1L,1L,0xD80035F2L,0L,0xCD8385B8L},{0x04A7D8D4L,0xF5A6FA60L,4L,1L,4L},{1L,(-2L),0xA2BC29D9L,0xA18E26BCL,0xCD8385B8L},{6L,0xFABECB02L,(-8L),1L,0x263471EDL},{(-2L),1L,0xA2BC29D9L,0L,0x78F173F3L}},{{0x04A7D8D4L,0xFABECB02L,4L,0x039AD773L,4L},{(-2L),(-2L),0xD80035F2L,0xA18E26BCL,0x78F173F3L},{6L,0xF5A6FA60L,(-8L),0x039AD773L,0x263471EDL},{1L,1L,0xD80035F2L,0L,0xCD8385B8L},{0x04A7D8D4L,0xF5A6FA60L,4L,1L,4L},{1L,(-2L),0xA2BC29D9L,0xA18E26BCL,0xCD8385B8L}},{{6L,0xFABECB02L,(-8L),1L,0x263471EDL},{(-2L),1L,0xA2BC29D9L,0L,0x78F173F3L},{0x04A7D8D4L,0xFABECB02L,4L,0x039AD773L,4L},{(-2L),(-2L),0xD80035F2L,0xA18E26BCL,0x78F173F3L},{6L,0xF5A6FA60L,(-8L),0x039AD773L,0x263471EDL},{1L,1L,0xD80035F2L,0L,0xCD8385B8L}},{{0x04A7D8D4L,0xF5A6FA60L,4L,1L,4L},{1L,(-2L),0xA2BC29D9L,0xA18E26BCL,0xCD8385B8L},{1L,1L,0x229EE354L,0xFABECB02L,1L},{7L,0x0036848CL,0xA18E26BCL,(-2L),0xD8190196L},{0xAF3C45B1L,1L,0x4F2409CFL,0xF5A6FA60L,0x4F2409CFL},{7L,7L,0x70E0D1B5L,1L,0xD8190196L}},{{1L,0x1B294EBAL,0x229EE354L,0xF5A6FA60L,1L},{0x6DAEA9C2L,0x0036848CL,0x70E0D1B5L,(-2L),0L},{0xAF3C45B1L,0x1B294EBAL,0x4F2409CFL,0xFABECB02L,0x4F2409CFL},{0x6DAEA9C2L,7L,0xA18E26BCL,1L,0L},{1L,1L,0x229EE354L,0xFABECB02L,1L},{7L,0x0036848CL,0xA18E26BCL,(-2L),0xD8190196L}},{{0xAF3C45B1L,1L,0x4F2409CFL,0xF5A6FA60L,0x4F2409CFL},{7L,7L,0x70E0D1B5L,1L,0xD8190196L},{1L,0x1B294EBAL,0x229EE354L,0xF5A6FA60L,1L},{0x6DAEA9C2L,0x0036848CL,0x70E0D1B5L,(-2L),0L},{0xAF3C45B1L,0x1B294EBAL,0x4F2409CFL,0xFABECB02L,0x4F2409CFL},{0x6DAEA9C2L,7L,0xA18E26BCL,1L,0L}}};
        int8_t l_3070 = (-3L);
        uint64_t **l_3078[10] = {&g_2486,&g_2486,&g_2486,&g_2486,&g_2486,&g_2486,&g_2486,&g_2486,&g_2486,&g_2486};
        int32_t l_3135 = (-3L);
        int32_t l_3156[1][6][10] = {{{0xA091D8AAL,0x557D8B63L,0x00FB06A3L,0x557D8B63L,0xA091D8AAL,0x557D8B63L,7L,2L,0xA091D8AAL,2L},{7L,0x1C9854DEL,0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL,7L,0x1C9854DEL,0x00FB06A3L,2L},{0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL,7L,0x1C9854DEL,0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL},{7L,2L,0xA091D8AAL,2L,7L,0x557D8B63L,7L,2L,0xA091D8AAL,2L},{7L,0x1C9854DEL,0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL,7L,0x1C9854DEL,0x00FB06A3L,2L},{0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL,7L,0x1C9854DEL,0x00FB06A3L,2L,0x00FB06A3L,0x1C9854DEL}}};
        union U2 **l_3160 = &l_3089;
        int i, j, k;
        if ((l_2709 |= ((--(*g_951)) <= func_31(l_2692, (0x2BL != 0xF3L), (*l_724), l_2692, (((0xC1E42D88L < (l_2695[2][1][7] = (safe_lshift_func_int16_t_s_u(l_2692, 14)))) & (((*l_2708) |= ((((*g_676) ^= func_31(((*l_2706) = ((safe_mod_func_int16_t_s_s((((*g_89) = l_2692) , (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(0xC6510203L, 4294967293UL)), l_2692)), l_2692)), l_2692))), l_2692)) | g_1058.f0)), g_1092.f0, (*l_724), l_2707, l_2692)) > l_2692) | 65533UL)) != l_2692)) >= (**g_2485))))))
        {
            const uint32_t l_2712 = 0xB22D6E59L;
            uint16_t l_2713 = 65535UL;
            int8_t *l_2724 = &g_79;
            uint64_t * const *** const l_2736 = (void*)0;
            int32_t l_2737 = 0L;
            int32_t *l_2767 = (void*)0;
            int32_t l_2769 = 2L;
            int32_t l_2772 = 1L;
            int32_t l_2773 = 0xAC947FEDL;
            int32_t l_2776[6][6][4] = {{{(-7L),0x03AF68DBL,0xE02D3FD4L,0xA8D9F0B3L},{0L,1L,0xBA8907D0L,0x697F8A52L},{(-1L),0x7A5F71E5L,1L,(-1L)},{1L,0L,(-1L),1L},{0L,(-8L),0xD1067FFBL,0xBA8907D0L},{0x39D0B3D8L,7L,1L,(-9L)}},{{9L,0x67324870L,(-9L),3L},{0xB1CF9D76L,0xB2A07ACDL,(-1L),0xC55A689DL},{1L,0xB5A1CC2EL,0x2103D190L,(-6L)},{(-1L),0x05D26BC3L,0L,0x7A5F71E5L},{0x4CBBDA41L,0x03AF68DBL,9L,0L},{0x7A5F71E5L,0x15C4FDFFL,3L,0xA8D9F0B3L}},{{(-1L),0L,(-1L),(-1L)},{(-7L),0x2103D190L,0x2103D190L,(-7L)},{0x9906BA84L,1L,1L,0x6DF73FD8L},{9L,9L,0x4CBBDA41L,0xD1067FFBL},{(-1L),(-1L),7L,0xD1067FFBL},{0L,9L,0xC61105DAL,0x6DF73FD8L}},{{0x41BAACA2L,1L,0xA8D9F0B3L,(-7L)},{1L,0x2103D190L,2L,(-1L)},{0xE02D3FD4L,0L,0x073EFA9BL,0xA8D9F0B3L},{1L,0x15C4FDFFL,(-10L),0L},{0xB1CF9D76L,0x03AF68DBL,0x1442C208L,0xB2A07ACDL},{(-7L),(-1L),0x9906BA84L,0x2103D190L}},{{1L,3L,0x03AF68DBL,0x15C4FDFFL},{0x15C4FDFFL,0x67324870L,0xD1067FFBL,0x7A5F71E5L},{0x697F8A52L,0x49E89799L,0xC55A689DL,0xE02D3FD4L},{3L,0x9906BA84L,(-7L),(-1L)},{0x073EFA9BL,0x697F8A52L,0x2027B7D5L,1L},{(-9L),7L,0x7A5F71E5L,9L}},{{0x304A0067L,0xB2A07ACDL,0x304A0067L,(-10L)},{(-1L),3L,0x49E89799L,(-1L)},{(-10L),6L,1L,3L},{0L,0x59D6D408L,1L,(-8L)},{0x9906BA84L,0x67324870L,(-8L),0x41BAACA2L},{(-6L),0x2027B7D5L,0xB2A07ACDL,1L}}};
            int8_t *l_2792 = &g_1113;
            const union U2 l_2819 = {4294967293UL};
            uint16_t *l_2822 = &g_1779[9][2];
            uint16_t *l_2823 = &g_140[2];
            uint32_t l_2825 = 0UL;
            uint8_t l_2885 = 0xABL;
            const uint32_t l_2929 = 0x4DA9F25AL;
            int32_t l_2936[9][9] = {{0xDBC235E1L,(-1L),0xCAD9DF91L,0x51555E9FL,0xB053B2BDL,0L,(-1L),0x7308E6DEL,0xCAD9DF91L},{1L,7L,(-7L),1L,1L,(-7L),7L,1L,(-7L)},{0xDBC235E1L,(-1L),0xCAD9DF91L,0x51555E9FL,0xB053B2BDL,0L,(-1L),0x7308E6DEL,0xCAD9DF91L},{1L,7L,(-7L),1L,1L,(-7L),7L,1L,(-7L)},{0xDBC235E1L,(-1L),0xCAD9DF91L,0x51555E9FL,0xB053B2BDL,0L,(-1L),0x7308E6DEL,0xCAD9DF91L},{1L,7L,(-7L),1L,1L,(-7L),7L,1L,(-7L)},{0xDBC235E1L,(-1L),0xCAD9DF91L,0x51555E9FL,0xB053B2BDL,0L,(-1L),0x7308E6DEL,0xCAD9DF91L},{1L,7L,(-7L),1L,1L,(-7L),7L,1L,(-7L)},{0xDBC235E1L,(-1L),0xCAD9DF91L,0x51555E9FL,0xB053B2BDL,0L,(-1L),0x7308E6DEL,0xCAD9DF91L}};
            union U2 l_2944 = {8UL};
            const int32_t l_2946 = 1L;
            int32_t l_2974 = 0x480E4611L;
            int i, j, k;
            for (g_1207 = 14; (g_1207 == 5); --g_1207)
            {
                return (***g_2484);
            }
            if (l_2712)
            {
lbl_2965:
                l_2695[2][1][7] ^= (l_2713 == (*g_190));
            }
            else
            {
                int16_t l_2720 = 0L;
                int32_t l_2727 = (-7L);
                int32_t **l_2728 = &g_103[3][0][2];
                const uint64_t *****l_2733 = (void*)0;
                const uint64_t ****l_2735 = &g_2730;
                const uint64_t *****l_2734 = &l_2735;
                uint8_t l_2742 = 255UL;
                int32_t l_2770 = 0xDB828AF1L;
                int32_t l_2771 = 1L;
                int32_t l_2774 = 1L;
                int32_t l_2777[7] = {0x3FF9D4BBL,0x3FF9D4BBL,7L,0x3FF9D4BBL,0x3FF9D4BBL,7L,0x3FF9D4BBL};
                int64_t l_2783 = (-1L);
                uint32_t l_2791[8][7] = {{0UL,0xA47BD258L,4UL,0x0D4CC1ECL,0UL,0x68451DA2L,0UL},{18446744073709551609UL,1UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL},{0UL,0xA47BD258L,4UL,0x0D4CC1ECL,0UL,0x68451DA2L,0UL},{18446744073709551609UL,1UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL},{0UL,0xA47BD258L,4UL,0x0D4CC1ECL,0UL,0x68451DA2L,0UL},{18446744073709551609UL,1UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL},{0UL,0xA47BD258L,4UL,0x0D4CC1ECL,0UL,0x68451DA2L,0UL},{18446744073709551609UL,1UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL}};
                uint32_t l_2808[9][9] = {{4294967286UL,2UL,4294967295UL,1UL,0xE82BCD07L,3UL,2UL,4294967295UL,0x4B042ACAL},{3UL,0xB536408CL,4294967294UL,4294967295UL,7UL,3UL,1UL,4294967295UL,0xB536408CL},{4294967295UL,0UL,6UL,4294967295UL,7UL,0xB536408CL,7UL,4294967295UL,6UL},{0UL,0UL,1UL,0UL,0UL,7UL,4294967295UL,4294967295UL,1UL},{0x4B042ACAL,0x814162DCL,4294967286UL,4294967295UL,3UL,0xB536408CL,4294967294UL,4294967295UL,7UL},{1UL,7UL,0x040C97A8L,0xB536408CL,0x46D98A06L,4294967295UL,0UL,4294967295UL,0xB536408CL},{0xD9F1922BL,3UL,3UL,0UL,0x31B068BCL,0x31B068BCL,0UL,3UL,3UL},{3UL,4294967294UL,4294967286UL,2UL,0x44666F17L,0UL,4294967294UL,7UL,3UL},{1UL,0xE82BCD07L,0UL,4294967286UL,4294967295UL,1UL,0x31B068BCL,7UL,1UL}};
                int i, j;
                l_2727 = (safe_mod_func_int64_t_s_s((((((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_2720, func_59((((safe_mul_func_int16_t_s_s((*g_190), l_2720)) , g_2723) , l_2724)))), (safe_sub_func_int32_t_s_s(l_2713, ((((*g_951) = l_2720) >= l_2720) > l_2720))))) > (-1L)) && l_2713) & l_2720) & 0L), (-1L)));
lbl_2766:
                (*l_2728) = l_10[2][7];
                if ((l_2737 |= (((*l_2734) = g_2729) == l_2736)))
                {
                    int8_t l_2739 = 0x6DL;
                    int32_t *l_2754 = (void*)0;
                    int32_t l_2757 = (-4L);
                    l_2739 ^= l_2738;
                    for (g_1215 = 0; (g_1215 < 11); g_1215++)
                    {
                        l_2742--;
                        l_2758 = ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((g_2749[2] , (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((l_2754 == (g_221.f0 , l_2754)) ^ (safe_sub_func_int16_t_s_s(0xA052L, (l_2695[2][0][5] > 0xF7AE609092451D09LL)))), (4UL <= (((func_59(((((0xC7B7EEEC089A308CLL >= (**g_2485)) != 0xF6E3L) > l_2713) , &g_1113)) && l_2692) | 0L) <= l_2737)))), (***g_2484)))), l_2757)), 6)) , 0x670618A8L) <= l_2709) || 3L);
                    }
                    (*g_1327) = (safe_add_func_uint32_t_u_u(0xBED3E751L, l_2761));
                }
                else
                {
                    int16_t l_2768 = 0L;
                    int32_t l_2775 = 0x4FE88879L;
                    uint32_t l_2778 = 0xBCCA7A1CL;
                    uint64_t **l_2790 = &g_2486;
                    int32_t *l_2794 = &g_11;
                    int32_t l_2806[10][2][3] = {{{7L,4L,4L},{0x68204F64L,0L,0x8D7D7FEFL}},{{0x600D0DD2L,7L,1L},{0x68204F64L,0x68204F64L,0x05C278FCL}},{{7L,0x600D0DD2L,0L},{0L,0x68204F64L,0L}},{{4L,7L,1L},{0x16352AAFL,0L,0L}},{{1L,4L,0L},{0xFDB4CED2L,0x16352AAFL,0x05C278FCL}},{{1L,1L,1L},{0x16352AAFL,0xFDB4CED2L,0x8D7D7FEFL}},{{4L,1L,4L},{0L,0x16352AAFL,0x68204F64L}},{{7L,4L,4L},{0x68204F64L,0L,0x8D7D7FEFL}},{{0x600D0DD2L,7L,1L},{0x68204F64L,0x68204F64L,0x8D7D7FEFL}},{{1L,4L,0x600D0DD2L},{0x16352AAFL,0x05C278FCL,0x16352AAFL}}};
                    uint8_t l_2809 = 0UL;
                    int i, j, k;
                    for (l_727 = 0; (l_727 <= 20); ++l_727)
                    {
                        union U0 **l_2765 = &g_220[6];
                        (*l_2765) = l_2764;
                        (*l_2728) = &l_2695[2][1][7];
                        if (g_1660.f0)
                            goto lbl_2766;
                        l_2767 = &l_2737;

                        ((l_2767 == &l_2737) ? (void) (0) : __assert_fail ("l_2767 == &l_2737", "4.c", 448, __PRETTY_FUNCTION__));
                        if (g_944.f0)
                            goto lbl_2793;
                    }
                    l_2778--;
                    if (l_2769)
                    {
                        l_2776[2][1][0] = 0x22AED62AL;
lbl_2793:
                        l_2758 = (l_2709 != (safe_lshift_func_int16_t_s_s(((l_2783 < (safe_mul_func_uint16_t_u_u(l_2775, (safe_lshift_func_uint16_t_u_s(func_31(l_2769, ((safe_mul_func_uint8_t_u_u((((*g_2484) = l_2790) == (void*)0), 255UL)) <= (l_2791[0][5] == l_2695[2][1][7])), l_2792, (*g_676), l_2768), 10))))) , 0x3C1DL), 9)));
                        (*l_2728) = l_2794;
                    }
                    else
                    {
                        uint8_t l_2795 = 0x93L;
                        int32_t *l_2798 = &l_2695[2][1][0];
                        uint32_t l_2807 = 0xF4EFC65DL;
                        int8_t *l_2810[10][6][1] = {{{&g_726},{(void*)0},{&g_1113},{(void*)0},{&g_726},{&g_789[1]}},{{&l_727},{&g_1592},{&l_727},{&l_2692},{&l_727},{&g_1592}},{{&l_727},{&g_789[1]},{&g_726},{(void*)0},{&g_1113},{(void*)0}},{{&g_726},{&g_789[1]},{&l_727},{&g_1592},{&l_727},{&l_2692}},{{&l_727},{&g_1592},{&l_727},{&g_789[1]},{&g_726},{(void*)0}},{{&g_1113},{(void*)0},{&g_726},{&g_789[1]},{&l_727},{&g_1592}},{{&l_727},{&l_2692},{&l_727},{&g_1592},{&l_727},{&g_789[1]}},{{&g_726},{(void*)0},{&g_1113},{(void*)0},{&g_726},{&g_789[1]}},{{&l_727},{&g_1592},{&l_727},{&l_2692},{&l_727},{&g_1592}},{{&l_727},{&g_789[1]},{&g_726},{(void*)0},{&g_1113},{(void*)0}}};
                        int16_t *l_2812 = &l_2768;
                        int32_t l_2813 = 0xB98E0B84L;
                        int i, j, k;
                        ++l_2795;
                        if (l_2712)
                            goto lbl_2766;
                        l_2798 = l_10[2][8];

                        ((l_2798 == 0 || l_2798 == &g_11) ? (void) (0) : __assert_fail ("l_2798 == 0 || l_2798 == &g_11", "4.c", 474, __PRETTY_FUNCTION__));
                        l_2813 |= ((**g_189) > ((*l_2812) = ((l_2799 , ((*l_2724) = (*l_2794))) , ((*l_2708) &= func_31(((*l_2794) , ((safe_add_func_uint16_t_u_u(func_31((safe_div_func_int32_t_s_s((((l_2776[2][1][3] ^ ((safe_add_func_uint8_t_u_u((func_59(((*l_2794) , &g_1113)) | ((func_59(func_64(((l_2806[7][1][2] && g_1592) <= (**g_415)), &g_2674[1], &l_2695[2][1][7], l_2807)) , l_2808[8][3]) , (-1L))), l_2809)) == (*g_2417))) <= (*l_2794)) , (*l_2794)), (-1L))), l_2692, l_2810[3][4][0], (*l_2794), l_2811[2]), (*l_2794))) || (*l_2794))), g_2672.f0, &g_789[2], l_2771, l_2791[0][5])))));
                    }
                }
                for (g_37 = 1; (g_37 <= 4); g_37 += 1)
                {
                    (*l_2728) = ((&g_1602 != &g_2351) , &l_2695[3][1][7]);
                    for (g_1948.f1 = 4; (g_1948.f1 >= 0); g_1948.f1 -= 1)
                    {
                        uint8_t l_2814 = 0x57L;
                        ++l_2814;
                    }

                                    }
            }





            ((l_2767 == &l_2758 || l_2767 == &l_2737 || l_2767 == 0) ? (void) (0) : __assert_fail ("l_2767 == &l_2758 || l_2767 == &l_2737 || l_2767 == 0", "4.c", 494, __PRETTY_FUNCTION__));
            if (((((((*g_951)--) , ((l_2825 & (**g_415)) | 0x80L)) != g_1131[2]) , l_2761) , l_2824))
            {
                uint32_t l_2826 = 18446744073709551609UL;
                l_2826 = l_2821;
            }
            else
            {
                uint16_t l_2828 = 9UL;
                int32_t l_2835[4][9] = {{0xB04512F2L,0xB04512F2L,0xF38B5942L,0xB04512F2L,0xB04512F2L,0xF38B5942L,0xB04512F2L,0xB04512F2L,0xF38B5942L},{1L,0xEAB99988L,(-8L),0xEAB99988L,1L,1L,1L,0xEAB99988L,(-8L)},{0xB04512F2L,0xB04512F2L,0xF38B5942L,0xB04512F2L,0xB04512F2L,0xF38B5942L,0xB04512F2L,0xB04512F2L,0xF38B5942L},{1L,0xEAB99988L,1L,0xAB05E289L,1L,0xEAB99988L,1L,0xAB05E289L,1L}};
                int8_t l_2839 = 0x88L;
                int8_t l_2846 = (-1L);
                uint64_t l_2859 = 18446744073709551607UL;
                union U2 l_2928 = {0x27985E82L};
                int32_t l_2962 = 0x59F6339AL;
                int8_t l_2966 = (-5L);
                const int32_t l_2987 = 0xA08DE5ADL;
                int64_t l_2992 = 8L;
                int i, j;
                if ((*g_1327))
                {
                    int16_t l_2836 = 0x6D7AL;
                    int32_t l_2838 = 0x7D095579L;
                    int32_t l_2841 = 0x4CEF2A8BL;
                    l_2828--;
                    for (g_11 = (-8); (g_11 == (-17)); g_11--)
                    {
                        const union U2 *l_2833 = &g_108;
                        int32_t l_2834 = 6L;
                        int32_t l_2837 = 1L;
                        int32_t l_2840[3][3];
                        int32_t l_2843 = 6L;
                        int32_t l_2845 = 0x7AE7D4B2L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_2840[i][j] = (-5L);
                        }
                        l_2833 = &l_2819;

                        ((l_2833 == &l_2819) ? (void) (0) : __assert_fail ("l_2833 == &l_2819", "4.c", 535, __PRETTY_FUNCTION__));
                        ++l_2847;
                    }
                }
                else
                {
                    union U2 l_2861 = {0xF609BDA9L};
                    uint32_t *l_2876 = &g_2162[7][8][0];
                    uint32_t *l_2877 = (void*)0;
                    uint32_t *l_2878 = &l_2811[6];
                    int32_t **l_2886 = &l_10[3][4];
                    uint64_t ****l_2893 = (void*)0;
                    uint64_t ****l_2894 = &g_2484;
                    int32_t l_2895 = 1L;
                    for (g_1247 = 0; (g_1247 <= 3); g_1247 += 1)
                    {
                        union U0 **l_2851[7][10] = {{&g_220[6],&g_220[5],&g_220[6],&g_220[5],&g_220[6],(void*)0,(void*)0,&g_220[3],&g_220[6],&g_220[6]},{&g_220[6],&g_220[3],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[3],&g_220[6],&g_220[6],&g_220[6]},{&g_220[4],&g_220[6],&g_220[3],&g_220[6],&g_220[6],(void*)0,&g_220[6],&g_220[6],&g_220[3],&g_220[6]},{&g_220[6],(void*)0,&g_220[3],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6]},{&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[5],&g_220[6],&g_220[4],&g_220[3],&g_220[6],&g_220[3]},{&g_220[6],(void*)0,&g_220[6],&g_220[3],&g_220[6],(void*)0,&g_220[6],&g_220[4],&g_220[6],(void*)0},{&g_220[4],&g_220[6],&g_220[5],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[5],&g_220[6],&g_220[4]}};
                        union U0 **l_2852[7][3] = {{&g_220[4],&g_220[4],&g_220[4]},{&g_220[6],&g_220[6],&g_220[6]},{&g_220[4],&g_220[4],&g_220[4]},{&g_220[6],&g_220[6],&g_220[6]},{&g_220[4],&g_220[4],&g_220[4]},{&g_220[6],&g_220[6],&g_220[6]},{&g_220[4],&g_220[4],&g_220[4]}};
                        union U0 **l_2853 = &g_220[6];
                        int32_t l_2858 = 2L;
                        int i, j;
                        (*l_2853) = l_2850;
                        l_2695[2][1][7] = (*g_1327);
                    }
                    (*l_2886) = ((safe_mul_func_uint16_t_u_u(l_2861.f0, (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((func_31((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((*g_676), l_2861.f0)), l_2821)), l_2828, &l_2692, (*g_676), l_2761) , l_2828), 1)), 0x91F9L)) && 0x6E0AL) && l_2861.f0) , l_2835[0][0]), (*g_416))) && (-3L)), l_2885)))) , &l_2842[5][0]);
                    l_2895 = (~((l_2835[2][0] & l_2887[0][1][0]) != (((safe_mod_func_uint32_t_u_u(((l_2769 > ((*l_2683) = g_1660.f0)) <= l_2835[2][0]), 4294967293UL)) ^ (((safe_div_func_int8_t_s_s((l_2892 != ((*l_2894) = &g_2485)), ((l_2819 , l_2846) , l_2859))) > g_618[1]) & g_793.f0)) >= 0x663F734DE9DE5F1BLL)));
                }
                if (g_2896)
                {
                    uint64_t l_2900 = 0x5AD2059442518931LL;
                    int16_t ** const *l_2907 = &g_257;
                    union U2 ***l_2909 = (void*)0;
                    union U2 l_2915 = {0x03D14D63L};
                    const int8_t l_2926 = (-1L);
                    int8_t *l_2931[10][4][6] = {{{&g_789[2],&g_79,(void*)0,&g_789[2],(void*)0,&g_79},{&g_1592,&g_79,(void*)0,&g_79,&g_1592,(void*)0},{&l_2887[0][1][0],&g_79,&g_789[2],&l_2887[2][0][0],(void*)0,&l_2887[2][0][0]},{&l_2887[0][1][0],&g_79,&l_2887[0][1][0],&g_79,&g_1592,&l_2887[2][0][0]}},{{&g_79,(void*)0,&g_789[2],&g_789[2],&g_789[2],(void*)0},{&g_1592,&g_79,(void*)0,&g_789[2],&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,(void*)0},{&l_2887[0][1][0],&g_79,&g_1592,&l_2887[2][0][0],&g_79,&l_2887[2][0][0]}},{{&l_2887[0][1][0],&g_79,&l_2887[0][1][0],&g_79,&g_789[2],&l_2887[2][0][0]},{&g_1592,(void*)0,&g_1592,&g_789[2],&g_1592,(void*)0},{&g_789[2],&g_79,(void*)0,&g_789[2],(void*)0,&g_79},{&g_1592,&g_79,(void*)0,&g_79,&g_1592,(void*)0}},{{&l_2887[0][1][0],&g_79,&g_789[2],&l_2887[2][0][0],(void*)0,&l_2887[2][0][0]},{&l_2887[0][1][0],&g_79,&l_2887[0][1][0],&g_79,&g_1592,&l_2887[2][0][0]},{&g_79,(void*)0,&g_789[2],&g_789[2],&g_789[2],(void*)0},{&g_1592,&g_79,&l_2887[0][1][0],&l_2887[2][0][0],(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_2887[0][1][0],(void*)0,(void*)0,&g_79},{&g_1592,(void*)0,&g_1592,&g_79,(void*)0,&g_79},{&g_789[2],&g_789[2],&g_789[2],(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_1592,&l_2887[2][0][0],&g_1592,&g_79}},{{&g_79,&g_789[2],&l_2887[0][1][0],&l_2887[2][0][0],(void*)0,(void*)0},{&g_79,(void*)0,&l_2887[0][1][0],(void*)0,&g_79,&g_79},{&g_789[2],(void*)0,&g_79,&g_79,(void*)0,&g_79},{&g_1592,&g_789[2],&g_1592,(void*)0,&g_1592,&g_79}},{{(void*)0,&g_79,&g_79,&l_2887[2][0][0],&g_79,&g_79},{&g_1592,&g_789[2],&l_2887[0][1][0],&l_2887[2][0][0],(void*)0,(void*)0},{(void*)0,(void*)0,&l_2887[0][1][0],(void*)0,(void*)0,&g_79},{&g_1592,(void*)0,&g_1592,&g_79,(void*)0,&g_79}},{{&g_789[2],&g_789[2],&g_789[2],(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_1592,&l_2887[2][0][0],&g_1592,&g_79},{&g_79,&g_789[2],&l_2887[0][1][0],&l_2887[2][0][0],(void*)0,(void*)0},{&g_79,(void*)0,&g_79,&l_2887[2][0][0],&g_1592,&g_79}},{{(void*)0,&l_2887[2][0][0],&l_2887[0][1][0],&g_789[2],&g_79,&g_789[2]},{(void*)0,(void*)0,(void*)0,&l_2887[2][0][0],&l_2887[0][1][0],&g_789[2]},{&g_789[2],&g_79,&l_2887[0][1][0],&g_79,&l_2887[0][1][0],&g_79},{&l_2887[0][1][0],(void*)0,&g_79,&g_79,&g_1592,&l_2887[2][0][0]}},{{&g_789[2],&l_2887[2][0][0],(void*)0,&l_2887[2][0][0],&g_789[2],&g_79},{(void*)0,&l_2887[2][0][0],&l_2887[0][1][0],&g_789[2],&g_1592,&g_789[2]},{(void*)0,(void*)0,(void*)0,&l_2887[2][0][0],&l_2887[0][1][0],&g_789[2]},{&g_1592,&g_79,&l_2887[0][1][0],&g_79,&l_2887[0][1][0],&g_79}}};
                    uint32_t l_2932 = 0xF45148C9L;
                    int32_t l_2933 = 1L;
                    uint64_t ***l_2961 = &g_2485;
                    int i, j, k;
                    for (g_726 = 0; (g_726 < (-10)); g_726--)
                    {
                        int32_t **l_2903 = &l_10[1][8];
                        l_2900--;
                        (*l_2903) = &l_2835[2][0];
                    }


                    for (l_2761 = (-28); (l_2761 != 19); l_2761 = safe_add_func_uint32_t_u_u(l_2761, 6))
                    {
                        uint64_t l_2912 = 0xD7E1756382979F76LL;
                        union U2 *l_2913 = (void*)0;
                        union U2 *l_2914[4];
                        int32_t **l_2916 = &l_2767;
                        int32_t **l_2917[7][3][6] = {{{&g_103[2][1][2],(void*)0,&l_10[1][8],&l_10[2][8],&l_10[1][8],(void*)0},{&g_103[3][0][2],&l_10[2][8],&l_10[2][8],&l_10[2][8],(void*)0,&g_103[3][0][2]},{&l_10[2][8],(void*)0,&g_103[3][0][2],&l_10[1][8],(void*)0,&g_103[3][0][2]}},{{&g_103[3][0][2],(void*)0,&g_103[1][1][2],&g_103[1][1][2],(void*)0,&g_103[3][0][2]},{(void*)0,&l_10[2][8],(void*)0,&l_10[2][8],&l_10[1][8],&l_10[2][8]},{&g_103[1][1][2],(void*)0,(void*)0,&g_103[2][1][2],&g_103[2][1][1],&g_103[1][1][1]}},{{&g_103[1][1][2],&l_10[2][8],&g_103[2][1][2],&l_10[2][8],&g_103[1][1][2],&l_10[1][8]},{(void*)0,&l_10[2][8],&g_103[1][1][1],&g_103[3][0][2],(void*)0,(void*)0},{&l_10[1][8],&l_10[2][8],(void*)0,&l_10[2][8],(void*)0,(void*)0}},{{&g_103[3][0][2],&g_103[1][1][1],&g_103[1][1][1],&g_103[3][0][2],&l_10[2][8],&l_10[2][8]},{(void*)0,&g_103[3][0][2],&l_10[2][8],&g_103[3][0][2],&g_103[2][1][2],(void*)0},{&l_10[2][8],&l_10[1][8],&g_103[1][1][2],&l_10[2][8],&g_103[2][1][2],&l_10[2][8]}},{{&l_10[2][8],&g_103[3][0][2],&l_10[2][8],&g_103[2][1][1],&l_10[2][8],&l_10[1][8]},{&l_10[2][8],&g_103[1][1][1],&g_103[3][0][2],(void*)0,(void*)0,&l_10[2][8]},{&g_103[3][0][2],&l_10[2][8],&g_103[2][1][1],(void*)0,(void*)0,&g_103[2][1][1]}},{{&l_10[2][8],&l_10[2][8],&g_103[3][0][2],&g_103[2][1][1],&g_103[3][0][2],&l_10[2][8]},{&l_10[2][8],&g_103[2][1][2],&l_10[2][8],&l_10[2][8],&g_103[1][1][1],&g_103[3][0][2]},{&l_10[2][8],&l_10[2][8],&l_10[2][8],&g_103[3][0][2],&l_10[2][8],&l_10[2][8]}},{{(void*)0,&g_103[3][0][2],&g_103[3][0][2],&g_103[3][0][2],(void*)0,&g_103[2][1][1]},{&g_103[3][0][2],(void*)0,&g_103[2][1][1],&l_10[2][8],&g_103[1][1][2],&l_10[2][8]},{&l_10[1][8],(void*)0,&g_103[3][0][2],&g_103[3][0][2],(void*)0,&l_10[1][8]}}};
                        uint16_t l_2925 = 0x0C0AL;
                        int16_t l_2930 = 0xC944L;
                        int8_t *l_2943 = &g_789[0];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_2914[i] = &l_2673;
                        g_871 = ((*l_2916) = ((l_2915 = (**g_1366)) , &l_2758));

                        ((g_871 == &l_2758) ? (void) (0) : __assert_fail ("g_871 == &l_2758", "4.c", 597, __PRETTY_FUNCTION__));
                        ((l_2767 == &l_2758) ? (void) (0) : __assert_fail ("l_2767 == &l_2758", "4.c", 598, __PRETTY_FUNCTION__));
                        l_2769 |= (((65535UL <= (l_2918 != func_31((*l_2767), (l_2819 , (-6L)), l_2931[1][1][5], l_2900, l_2932))) > l_2928.f0) ^ (**g_932));
                        l_2933 = (*l_2767);
                        l_2835[1][2] ^= ((safe_rshift_func_int8_t_s_s(((*g_2417) < func_31(l_2936[1][1], g_1113, &g_1113, l_2899[3][3][0], (((**g_1935) > 4294967294UL) , 1UL))), 2)) && l_2915.f0);
                        if (g_1660.f0)
                            goto lbl_3017;


                    }


                    (*g_2945) = &l_2772;

                    ((g_871 == &l_2772) ? (void) (0) : __assert_fail ("g_871 == &l_2772", "4.c", 611, __PRETTY_FUNCTION__));
                    if (((((*l_2764) , ((*g_89) ^= l_2859)) , (l_2692 , ((*g_871) = func_59((func_59(l_2792) , func_64(l_2946, &l_2835[2][0], l_2947, l_2915.f0)))))) == 0UL))
                    {
                        uint32_t l_2960 = 1UL;
                        int32_t **l_2963 = &l_10[2][8];
                        (*l_2947) ^= ((*g_871) = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(func_59(&l_2692), (safe_mod_func_uint64_t_u_u((*g_2486), (l_2933 = ((safe_div_func_int16_t_s_s((l_2962 = ((255UL ^ (+l_2960)) , ((*l_2708) = ((func_59((*l_724)) >= l_2835[2][0]) <= ((((**g_189) , (void*)0) != l_2961) == l_2928.f0))))), l_2960)) , (***g_2481))))))), 2)) , (*g_676)), 3)), 0L)) == 0x9EL));
                        (*l_2963) = &l_2933;


                    }
                    else
                    {
                        int32_t **l_2964 = &g_103[5][0][1];
                        int32_t l_2976 = 0xA0714AF4L;
                        union U2 l_2977[3] = {{0UL},{0UL},{0UL}};
                        int i;
                        (*l_2964) = (*g_1225);
                        if (l_727)
                            goto lbl_2965;

                        (*g_871) = l_2966;
                        (*g_871) &= (l_2967 || (safe_lshift_func_uint8_t_u_s(((~g_1113) != (safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_2947), 0)) < l_2933), ((((*l_2947) , 0xCDL) ^ 0UL) == 0x24E11937L)))), l_2835[2][0])));
                    }


                }
                else
                {
                    l_2962 = l_2835[2][0];
                }


                for (l_2673.f1 = 12; (l_2673.f1 == 13); l_2673.f1 = safe_add_func_uint16_t_u_u(l_2673.f1, 2))
                {
                    uint16_t l_2982 = 65535UL;
                    int16_t l_2988 = 0x7428L;
                    int32_t l_2993 = 0x197D96F9L;
                    int32_t l_2994[3];
                    int32_t l_2995 = (-7L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2994[i] = 0xF56854D2L;
                    (*g_1327) &= l_2982;
                    for (l_2692 = 0; (l_2692 != 20); l_2692 = safe_add_func_int64_t_s_s(l_2692, 8))
                    {
                        union U2 l_2986 = {0x680E63A3L};
                        const int8_t *l_2989 = &l_2887[0][1][0];
                        (*l_2947) = ((l_2986 = (*g_1367)) , (*g_1327));
                        return l_2966;



                    }
                    l_2996++;
                    if (l_2987)
                        break;
                }

                            }
            l_2936[1][1] &= (*l_2947);
        }
        else
        {
            int64_t l_3003 = 1L;
            uint32_t *l_3006 = &l_2811[2];
            union U0 * const *l_3008 = (void*)0;
            union U0 * const **l_3007[2];
            uint8_t l_3012 = 249UL;
            union U2 *l_3013 = &l_2860;
            union U2 **l_3014 = (void*)0;
            union U2 *l_3016 = &l_2860;
            union U2 **l_3015 = &l_3016;
            int i;
            for (i = 0; i < 2; i++)
                l_3007[i] = &l_3008;
            l_3012 = (safe_mul_func_int8_t_s_s(((*l_2706) = (safe_sub_func_int32_t_s_s(l_3003, ((g_3004 , (g_1266.f0 == ((+(((((*l_3006) &= ((void*)0 != l_3005[0])) , (l_3007[1] == l_3009)) ^ (*g_2417)) >= (l_3011[6][3][0] | l_3003))) > l_3003))) , (*g_416))))), 0UL));
            (*l_3015) = l_3013;
        }




lbl_3017:
        l_2927 = (*l_2947);
        if (((*l_2947) = (*g_1327)))
        {
            return (*g_2486);



        }
        else
        {
            int32_t l_3024 = (-1L);
            int32_t l_3050 = 9L;
            int32_t l_3051 = 0x4704F8AFL;
            union U2 * const *l_3087[9][10] = {{&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0]},{&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0]},{&g_2352[0],(void*)0,&g_2352[0],(void*)0,&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],(void*)0,&g_2352[0]},{&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0]},{(void*)0,&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],(void*)0,&g_2352[0],(void*)0,&g_2352[0],&g_2352[0]},{&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0]},{&g_2352[0],(void*)0,&g_2352[0],&g_2352[0],&g_2352[0],(void*)0,&g_2352[0],&g_2352[0],(void*)0,&g_2352[0]},{(void*)0,&g_2352[0],&g_2352[0],(void*)0,&g_2352[0],&g_2352[0],&g_2352[0],(void*)0,&g_2352[0],&g_2352[0]},{&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0],&g_2352[0]}};
            int32_t l_3104 = (-1L);
            int16_t l_3114 = 8L;
            union U2 **l_3165 = &l_3089;
            int8_t *l_3203 = &g_789[2];
            uint64_t l_3205 = 0x44E3C7E4AF5DD718LL;
            int i, j;
            (*g_3019) = &l_2695[0][1][0];

            (((g_871 >= &l_2695[0][0][0] && g_871 <= &l_2695[3][1][9])) ? (void) (0) : __assert_fail ("(g_871 >= &l_2695[0][0][0] && g_871 <= &l_2695[3][1][9])", "4.c", 716, __PRETTY_FUNCTION__));
lbl_3148:
            for (g_1093.f0 = (-10); (g_1093.f0 != 31); g_1093.f0 = safe_add_func_int32_t_s_s(g_1093.f0, 9))
            {
                uint16_t l_3032 = 0x1FE6L;
                int32_t l_3052[1];
                int32_t l_3062 = 0x282A2888L;
                union U2 l_3077 = {4294967295UL};
                uint8_t l_3082 = 1UL;
                int64_t *l_3110 = &g_618[1];
                union U2 *l_3117[6][6][6] = {{{(void*)0,&l_3102,(void*)0,&g_944,&l_2860,&l_3077},{&l_3102,(void*)0,&l_3102,&l_2860,&l_2673,&l_3102},{&l_3077,(void*)0,&g_944,&l_2673,&l_2860,&g_108},{&g_1948,&g_1948,&g_2991,&g_108,&g_944,&l_3077},{&g_1948,&l_2673,&g_2991,&l_3102,&l_2673,&g_108},{&l_2860,(void*)0,&l_3077,&l_2860,(void*)0,(void*)0}},{{&l_2860,(void*)0,(void*)0,&l_2860,&l_3077,(void*)0},{&l_2860,&g_108,&l_2673,&l_3102,&g_2991,&l_2673},{&g_1948,&l_3077,&g_944,&g_108,&g_2991,&g_1948},{&g_1948,&g_108,&l_2860,&l_2673,&l_3077,&l_2673},{&g_1948,(void*)0,&g_108,&l_3077,(void*)0,&l_2673},{&l_2673,(void*)0,&l_2860,&g_1948,&l_2673,&g_1948}},{{&l_3102,&l_2673,&g_944,&g_1948,&g_944,&l_2673},{&l_3102,&g_1948,&l_2673,&g_1948,&l_2860,(void*)0},{&l_2673,&l_2673,(void*)0,&l_3077,&g_108,(void*)0},{&g_1948,&l_2673,&l_3077,&l_2673,&l_2860,&g_108},{&g_1948,&g_1948,&g_2991,&g_108,&g_944,&l_3077},{&g_1948,&l_2673,&g_2991,&l_3102,&l_2673,&g_108}},{{&l_2860,(void*)0,&l_3077,(void*)0,&g_1948,&g_1948},{(void*)0,&g_1948,&g_1948,(void*)0,&l_3077,(void*)0},{&g_1948,(void*)0,&g_944,&l_3102,&g_108,&g_2991},{&l_2673,&l_3077,&l_3077,&l_2860,&g_108,&l_2673},{&g_1948,(void*)0,&l_2673,&l_3077,&l_3077,&g_944},{&g_944,&g_1948,(void*)0,&l_3102,&g_1948,&g_944}},{{&l_3077,(void*)0,&l_2673,&l_2673,&g_944,&l_2673},{&l_3102,&g_2991,&l_3077,&g_944,&l_3077,&g_2991},{&l_3102,&l_2673,&g_944,&l_2673,&l_2673,(void*)0},{&l_3077,&g_944,&g_1948,&l_3102,(void*)0,&g_1948},{&g_944,&g_944,&l_3077,&l_3077,&l_2673,(void*)0},{&g_1948,&l_2673,&g_108,&l_2860,&l_3077,&l_3077}},{{&l_2673,&g_2991,&g_108,&l_3102,&g_944,(void*)0},{&g_1948,(void*)0,&l_3077,(void*)0,&g_1948,&g_1948},{(void*)0,&g_1948,&g_1948,(void*)0,&l_3077,(void*)0},{&g_1948,(void*)0,&g_944,&l_3102,&g_108,&g_2991},{&l_2673,&g_944,&l_2860,&l_2673,&l_2673,&l_3077},{&g_108,(void*)0,&g_108,(void*)0,&g_944,&g_1948}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_3052[i] = (-4L);
                for (g_79 = 21; (g_79 > 25); g_79 = safe_add_func_uint64_t_u_u(g_79, 3))
                {
                    const uint8_t l_3033 = 0xCFL;
                    int32_t l_3071 = (-1L);
                    int32_t l_3072 = 0x93CDF3C1L;
                    int32_t l_3073[9][5] = {{4L,0x6D71FB73L,0x13BD455CL,0x13BD455CL,0x6D71FB73L},{0xD48AA0A2L,0xCFADFB8AL,6L,9L,0L},{4L,0x6D71FB73L,0x13BD455CL,0x13BD455CL,0x6D71FB73L},{0xD48AA0A2L,0xCFADFB8AL,6L,9L,0L},{4L,0x6D71FB73L,0x13BD455CL,0x13BD455CL,0x6D71FB73L},{0xD48AA0A2L,0xCFADFB8AL,6L,9L,0L},{4L,0x6D71FB73L,0x13BD455CL,0x13BD455CL,0x6D71FB73L},{0xD48AA0A2L,0xCFADFB8AL,6L,9L,0L},{4L,0x6D71FB73L,0x13BD455CL,0x13BD455CL,0x6D71FB73L}};
                    uint32_t l_3074 = 7UL;
                    uint64_t **l_3079[8] = {&g_2486,(void*)0,&g_2486,(void*)0,&g_2486,(void*)0,&g_2486,(void*)0};
                    int16_t l_3103[6];
                    const int64_t l_3120 = 0xC833295F021B8255LL;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_3103[i] = (-4L);
                }
            }
            if (l_3104)
            {
                uint16_t *l_3127[8][6] = {{&g_140[2],&g_968,(void*)0,&g_968,&g_968,(void*)0},{&g_1247,&g_1247,(void*)0,(void*)0,&g_968,&g_140[0]},{&g_968,&g_968,&g_140[2],(void*)0,&g_968,(void*)0},{&g_1247,&g_968,&g_140[2],&g_968,&g_1247,&g_140[0]},{&g_140[2],&g_968,(void*)0,&g_140[2],&g_968,(void*)0},{&g_140[2],&g_968,(void*)0,(void*)0,(void*)0,(void*)0},{&g_140[2],&g_140[2],&g_140[2],&g_1247,(void*)0,(void*)0},{(void*)0,&g_968,&g_140[0],&g_1247,&g_968,&g_140[2]}};
                int32_t l_3128[1];
                union U0 * const l_3140 = &g_2635;
                uint8_t l_3143 = 0x77L;
                uint32_t l_3153[1][2][7] = {{{18446744073709551615UL,0xF3065D15L,18446744073709551615UL,0x247EE9C9L,18446744073709551611UL,18446744073709551611UL,0x247EE9C9L},{18446744073709551615UL,0xF3065D15L,18446744073709551615UL,0x247EE9C9L,18446744073709551611UL,18446744073709551611UL,0x247EE9C9L}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_3128[i] = 0L;
                if (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((*l_2947))), ((g_1779[9][2]++) != (!(*l_2947))))) < (safe_sub_func_int16_t_s_s((~(*g_190)), (safe_mod_func_int64_t_s_s((l_3135 >= (-1L)), (safe_sub_func_uint16_t_u_u((((*g_951) != ((*g_871) = l_3104)) , (((safe_lshift_func_int8_t_s_u(l_3128[0], (*l_2947))) & 9L) , (*l_2947))), (*l_2947)))))))))
                {
                    union U0 *l_3141 = &g_3142;
                    l_3141 = l_3140;

                    ((l_3141 == &g_2635) ? (void) (0) : __assert_fail ("l_3141 == &g_2635", "4.c", 760, __PRETTY_FUNCTION__));
                }
                else
                {
                    for (g_1113 = 0; (g_1113 <= 0); g_1113 += 1)
                    {
                        l_3143++;
                        (*g_3121) = ((*g_190) , (0L && 1UL));
                    }
                }
                for (l_729 = 0; (l_729 <= (-23)); l_729 = safe_sub_func_uint32_t_u_u(l_729, 2))
                {
                    uint64_t l_3152 = 0xBAC74F844C83766FLL;
                    if (g_1247)
                        goto lbl_3148;
                    if (l_3149)
                        continue;
                    if (((safe_unary_minus_func_int32_t_s(l_3024)) != l_3143))
                    {
                        uint8_t l_3151 = 0xB0L;
                        (*l_2947) ^= (l_3151 = l_3143);
                    }
                    else
                    {
                        if (l_3152)
                            break;
                        (*l_2947) = ((*g_3121) ^= l_3153[0][1][4]);
                    }
                    (*g_871) &= (safe_mod_func_int8_t_s_s((~l_3156[0][2][2]), func_59(&l_2692)));
                }
            }
            else
            {
                uint8_t l_3159 = 0UL;
                union U2 **l_3162 = (void*)0;
                union U2 ***l_3161 = &l_3162;
                union U2 **l_3164 = &l_3089;
                union U2 ***l_3163[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_3174 = (-1L);
                uint32_t l_3175 = 8UL;
                uint64_t *l_3189 = &g_236;
                uint32_t l_3202 = 18446744073709551611UL;
                int32_t l_3204[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_3204[i] = 0x402E9FC2L;
                if (((*g_871) = (l_2860 , ((safe_sub_func_int32_t_s_s(l_3159, (((*l_3161) = l_3160) == (l_3165 = (void*)0)))) , ((((**g_189) = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(65535UL, (*l_2947))), (*l_2947)))) || g_3170) <= ((1UL & 0x4ECA596D05B676D4LL) != (*l_2947)))))))
                {
                    int32_t l_3171 = 0xC49EBC54L;
                    int32_t l_3172 = 3L;
                    int32_t l_3173 = 0xE07A70FCL;
                    l_3175++;
                }
                else
                {
                    uint16_t l_3178 = 0x7A19L;
                    if (l_3178)
                    {
                        int16_t l_3179[10] = {5L,0x6EFDL,0x6EFDL,5L,0x9F4EL,5L,0x6EFDL,0x6EFDL,5L,0x9F4EL};
                        int i;
                        return l_3179[9];



                    }
                    else
                    {
                        int8_t l_3191 = 0xA4L;
                        (*g_3121) ^= (g_3180 , (l_3159 | ((*g_871) = (0xC77544535DC3BE02LL != (((safe_add_func_uint64_t_u_u(((-1L) > l_3175), g_37)) < ((*l_2947) = l_3050)) & (safe_mul_func_int8_t_s_s(0xA3L, (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_3190 = l_3189) == (**g_3039)), (*g_2417))), (*g_676))))))))));
                        (*g_3121) |= ((*l_2947) ^= l_3024);
                        l_3191 = (**g_2348);
                        (*g_3121) ^= ((((*l_2683) = (!(safe_add_func_uint32_t_u_u(((**g_2482) || (safe_mul_func_int16_t_s_s((**g_189), (((safe_rshift_func_int8_t_s_s(func_31(l_3051, l_3050, &l_3070, l_3191, l_3191), l_3191)) , 0x1771L) < l_3191)))), (*g_416))))) < (*g_2486)) & (*l_2947));
                    }
                    l_3204[0] ^= ((*g_3121) = (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((**g_2348) & l_3051), (*l_2947))) ^ 250UL), (func_31(l_3178, ((func_31((&g_929 == (void*)0), l_3051, &l_2692, l_3174, (*l_2947)) || l_3202) , (-7L)), l_3203, (*g_676), l_3051) , 1L))));
                }

                ((l_3162 == &l_3089) ? (void) (0) : __assert_fail ("l_3162 == &l_3089", "4.c", 836, __PRETTY_FUNCTION__));
                ((l_3165 == 0) ? (void) (0) : __assert_fail ("l_3165 == 0", "4.c", 837, __PRETTY_FUNCTION__));
                (*l_2947) |= (-6L);
                ++l_3205;
            }

            ((l_3165 == 0 || l_3165 == &l_3089) ? (void) (0) : __assert_fail ("l_3165 == 0 || l_3165 == &l_3089", "4.c", 842, __PRETTY_FUNCTION__));
        }

        (((g_871 >= &l_2695[0][0][0] && g_871 <= &l_2695[3][1][9])) ? (void) (0) : __assert_fail ("(g_871 >= &l_2695[0][0][0] && g_871 <= &l_2695[3][1][9])", "4.c", 845, __PRETTY_FUNCTION__));
    }
    else
    {
        int64_t l_3208[1];
        int8_t *l_3213 = &g_789[2];
        uint64_t **l_3222 = &l_3190;
        int32_t l_3234 = (-9L);
        int32_t **l_3249 = &g_871;
        int8_t l_3260 = (-8L);
        int32_t l_3276 = 5L;
        int32_t l_3279 = 0x37003200L;
        int32_t l_3281 = 0L;
        int32_t l_3285 = 0xFF99283BL;
        int32_t l_3286 = 0x6E88D4F9L;
        int32_t l_3287 = 0x2DDFA61CL;
        int32_t l_3288 = (-1L);
        int32_t l_3290 = 3L;
        int32_t l_3291 = 0xCD814B1FL;
        int32_t l_3292 = 0x0E81CDE0L;
        union U2 l_3305 = {0xE5CAAB30L};
        union U2 l_3306 = {0UL};
        uint16_t l_3315[7] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL};
        int8_t * const l_3344 = (void*)0;
        const uint16_t l_3345 = 0x6696L;
        int16_t l_3375 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_3208[i] = 0x1BFB29C127F319CELL;
        if (l_3208[0])
        {
            int8_t * const l_3212 = &l_2887[2][0][0];
            union U2 l_3214[7][9][4] = {{{{0UL},{0UL},{0xA4A708EEL},{0x0A985E59L}},{{5UL},{0x60AFD5C9L},{5UL},{0xA4A708EEL}},{{5UL},{0xA4A708EEL},{0xA4A708EEL},{5UL}},{{0UL},{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL}},{{0xA4A708EEL},{0x60AFD5C9L},{0x0A985E59L},{0x0A985E59L}},{{0UL},{0UL},{0xA4A708EEL},{0x0A985E59L}},{{5UL},{0x60AFD5C9L},{5UL},{0xA4A708EEL}},{{5UL},{0xA4A708EEL},{0xA4A708EEL},{5UL}},{{0UL},{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL}}},{{{0xA4A708EEL},{0x60AFD5C9L},{0x0A985E59L},{0x0A985E59L}},{{0UL},{0x60AFD5C9L},{0UL},{5UL}},{{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL},{0UL}},{{0xA4A708EEL},{0UL},{0UL},{0xA4A708EEL}},{{0x60AFD5C9L},{0UL},{5UL},{0UL}},{{0UL},{0x0A985E59L},{5UL},{5UL}},{{0x60AFD5C9L},{0x60AFD5C9L},{0UL},{5UL}},{{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL},{0UL}},{{0xA4A708EEL},{0UL},{0UL},{0xA4A708EEL}}},{{{0x60AFD5C9L},{0UL},{5UL},{0UL}},{{0UL},{0x0A985E59L},{5UL},{5UL}},{{0x60AFD5C9L},{0x60AFD5C9L},{0UL},{5UL}},{{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL},{0UL}},{{0xA4A708EEL},{0UL},{0UL},{0xA4A708EEL}},{{0x60AFD5C9L},{0UL},{5UL},{0UL}},{{0UL},{0x0A985E59L},{5UL},{5UL}},{{0x60AFD5C9L},{0x60AFD5C9L},{0UL},{5UL}},{{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL},{0UL}}},{{{0xA4A708EEL},{0UL},{0UL},{0xA4A708EEL}},{{0x60AFD5C9L},{0UL},{5UL},{0UL}},{{0UL},{0x0A985E59L},{5UL},{5UL}},{{0x60AFD5C9L},{0x60AFD5C9L},{0UL},{5UL}},{{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL},{0UL}},{{0xA4A708EEL},{0UL},{0UL},{0xA4A708EEL}},{{0x60AFD5C9L},{0UL},{5UL},{0UL}},{{5UL},{0UL},{0x60AFD5C9L},{0x60AFD5C9L}},{{0xA4A708EEL},{0xA4A708EEL},{5UL},{0x60AFD5C9L}}},{{{0x0A985E59L},{0UL},{0x0A985E59L},{5UL}},{{0x0A985E59L},{5UL},{5UL},{0x0A985E59L}},{{0xA4A708EEL},{5UL},{0x60AFD5C9L},{5UL}},{{5UL},{0UL},{0x60AFD5C9L},{0x60AFD5C9L}},{{0xA4A708EEL},{0xA4A708EEL},{5UL},{0x60AFD5C9L}},{{0x0A985E59L},{0UL},{0x0A985E59L},{5UL}},{{0x0A985E59L},{5UL},{5UL},{0x0A985E59L}},{{0xA4A708EEL},{5UL},{0x60AFD5C9L},{5UL}},{{5UL},{0UL},{0x60AFD5C9L},{0x60AFD5C9L}}},{{{0xA4A708EEL},{0xA4A708EEL},{5UL},{0x60AFD5C9L}},{{0x0A985E59L},{0UL},{0x0A985E59L},{5UL}},{{0x0A985E59L},{5UL},{5UL},{0x0A985E59L}},{{0xA4A708EEL},{5UL},{0x60AFD5C9L},{5UL}},{{5UL},{0UL},{0x60AFD5C9L},{0x60AFD5C9L}},{{0xA4A708EEL},{0xA4A708EEL},{5UL},{0x60AFD5C9L}},{{0x0A985E59L},{0UL},{0x0A985E59L},{5UL}},{{0x0A985E59L},{5UL},{5UL},{0x0A985E59L}},{{0xA4A708EEL},{5UL},{0x60AFD5C9L},{5UL}}},{{{5UL},{0UL},{0x60AFD5C9L},{0x60AFD5C9L}},{{0xA4A708EEL},{0xA4A708EEL},{5UL},{0x60AFD5C9L}},{{0x0A985E59L},{0UL},{0x0A985E59L},{5UL}},{{0x0A985E59L},{5UL},{5UL},{0x0A985E59L}},{{0UL},{0xA4A708EEL},{0x0A985E59L},{0xA4A708EEL}},{{0xA4A708EEL},{0x60AFD5C9L},{0x0A985E59L},{0x0A985E59L}},{{0UL},{0UL},{0xA4A708EEL},{0x0A985E59L}},{{5UL},{0x60AFD5C9L},{5UL},{0xA4A708EEL}},{{5UL},{0xA4A708EEL},{0xA4A708EEL},{5UL}}}};
            const uint64_t **l_3223 = &g_2732[1][6];
            int32_t l_3233 = (-1L);
            uint32_t l_3238 = 0x37F83A08L;
            uint8_t l_3259[5] = {0x8AL,0x8AL,0x8AL,0x8AL,0x8AL};
            union U1 *l_3274 = &g_286[6];
            int32_t l_3275 = 0x92D71728L;
            int32_t l_3280 = 0x0FEDA4F4L;
            int32_t l_3282 = 0x0E8BC909L;
            int32_t l_3283 = 0x26F316C5L;
            int32_t l_3284[4][9] = {{(-4L),(-1L),(-1L),(-4L),(-1L),(-1L),(-4L),(-1L),(-1L)},{1L,0x08934EE1L,0x1E11A547L,(-1L),0x1E11A547L,0x08934EE1L,1L,0x08934EE1L,0x1E11A547L},{(-4L),(-1L),(-1L),(-4L),(-1L),(-1L),(-4L),(-1L),(-1L)},{1L,0x08934EE1L,0x1E11A547L,(-1L),0x1E11A547L,0x08934EE1L,1L,0x08934EE1L,0x1E11A547L}};
            int64_t l_3289 = 0x7EDA593CD1D24E86LL;
            uint32_t l_3293 = 0UL;
            uint8_t l_3337 = 1UL;
            int i, j, k;
            if (((*l_3209) ^= (0UL <= (l_3214[2][7][2].f0 || l_3214[2][7][2].f0))))
            {
                uint64_t l_3217 = 0x4533793089BCA75DLL;
                int8_t *l_3220 = (void*)0;
                int32_t l_3231 = 0L;
                int32_t * const *l_3250[4] = {&g_871,&g_871,&g_871,&g_871};
                int i;
                (*g_1327) ^= l_3208[0];
                for (g_1170.f0 = 11; (g_1170.f0 <= 28); g_1170.f0 = safe_add_func_uint32_t_u_u(g_1170.f0, 6))
                {
                    uint16_t l_3229[9] = {0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL,0xC4FBL};
                    int32_t l_3230[1];
                    union U0 **l_3271[1];
                    union U0 ***l_3270[3][5] = {{&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0]},{&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0]},{&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0],&l_3271[0]}};
                    union U0 ****l_3269 = &l_3270[2][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_3230[i] = 0x8F09704AL;
                    for (i = 0; i < 1; i++)
                        l_3271[i] = &g_220[7];
                    if (((&g_220[6] != &g_220[2]) != l_3217))
                    {
                        union U2 l_3226 = {0x9DFA33A2L};
                        union U2 l_3227 = {0xF02BD71AL};
                        int8_t l_3228 = 0x8BL;
                        l_3229[1] &= ((safe_add_func_uint8_t_u_u(((l_3214[2][7][2].f0 & l_3228) == 1L), (-1L))) | l_3217);
                    }
                    else
                    {
                        uint32_t l_3235[8] = {0x5E72BA45L,0x5E72BA45L,0x5E72BA45L,0x5E72BA45L,0x5E72BA45L,0x5E72BA45L,0x5E72BA45L,0x5E72BA45L};
                        int i;
                        l_3235[6]--;
                        (*l_3209) |= l_3230[0];
                        if (l_3238)
                            break;
                        l_3234 = (l_3217 | ((2UL >= (safe_rshift_func_uint16_t_u_u(((*g_676) != (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0x2514DF3D2D2DD59DLL, (safe_add_func_int8_t_s_s((((l_3249 == l_3250[3]) , ((safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(l_3235[2], (safe_mod_func_int16_t_s_s((&g_1600 == &g_1225), g_221.f0)))), 0x39B8C330043A26CCLL)), l_3259[0])) ^ 0x2579E6806F14EA52LL)) , l_3260), l_3229[0])))), 0x5FL)) && (*g_190)), 4294967287UL))), (*l_3209)))) , l_3230[0]));
                    }
                    (*g_3121) |= (0UL || (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(0xC7L)), (((*g_190) , l_3230[0]) >= ((safe_lshift_func_uint8_t_u_u((((*l_3269) = l_3268) == (void*)0), (6L == ((*g_89) && (safe_lshift_func_uint8_t_u_u(((*g_676) = l_3229[5]), 1)))))) <= l_3238)))), (*g_89))));


                }
                (*g_907) = l_3274;

                (((g_582 >= &g_286[0] && g_582 <= &g_286[8])) ? (void) (0) : __assert_fail ("(g_582 >= &g_286[0] && g_582 <= &g_286[8])", "4.c", 935, __PRETTY_FUNCTION__));
            }
            else
            {
                (*l_3249) = &l_3233;

                ((g_871 == &l_3233) ? (void) (0) : __assert_fail ("g_871 == &l_3233", "4.c", 941, __PRETTY_FUNCTION__));
                return l_3214[2][7][2].f0;


            }

            (((g_582 >= &g_286[0] && g_582 <= &g_286[8])) ? (void) (0) : __assert_fail ("(g_582 >= &g_286[0] && g_582 <= &g_286[8])", "4.c", 947, __PRETTY_FUNCTION__));
            l_3293++;
            for (l_3149 = 27; (l_3149 > 22); l_3149 = safe_sub_func_uint64_t_u_u(l_3149, 6))
            {
                int32_t l_3299[8][6] = {{(-1L),0x6A488600L,(-1L),0x3D3B7725L,(-1L),0x6A488600L},{(-1L),(-1L),0x688BE4E3L,(-2L),(-2L),0x688BE4E3L},{(-1L),(-1L),(-2L),0x3D3B7725L,0x6E007CAFL,0x3D3B7725L},{(-1L),(-1L),(-1L),0x688BE4E3L,(-2L),(-2L)},{0x6A488600L,(-1L),(-1L),0x6A488600L,(-1L),0x3D3B7725L},{0x3D3B7725L,0x6A488600L,(-2L),0x6A488600L,0x3D3B7725L,0x688BE4E3L},{0x6A488600L,0x3D3B7725L,0x688BE4E3L,0x688BE4E3L,0x3D3B7725L,0x6A488600L},{(-1L),0x6A488600L,(-1L),0x3D3B7725L,(-1L),0x6A488600L}};
                int8_t * const l_3316 = &g_1113;
                uint64_t *l_3327 = &g_236;
                uint16_t l_3330 = 65535UL;
                int32_t l_3332 = 0x5205300CL;
                int32_t l_3346[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_3346[i] = 0x264A3A20L;
                if (((*l_3209) = l_3233))
                {
                    int8_t l_3304 = 0L;
                    union U1 * const l_3307 = &g_2820;
                    int8_t l_3312 = 0L;
                    uint16_t ***l_3314[10];
                    uint16_t ****l_3313 = &l_3314[0];
                    int32_t * const l_3323 = &l_3287;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_3314[i] = &g_1009;
                    if ((g_3298 , (g_2669 & (l_3293 | g_862))))
                    {
                        int8_t l_3311[8][2][9] = {{{0xC8L,0xF1L,0xF1L,0xC8L,0xA1L,(-5L),0xB3L,0xA1L,1L},{(-1L),0xA9L,0x6CL,0xFBL,0x6CL,0xA9L,(-1L),(-2L),0x6CL}},{{0xC8L,1L,(-5L),2L,0xA1L,0xA1L,2L,(-5L),1L},{0x5CL,(-2L),0L,0xFBL,0xDEL,(-2L),0xC7L,(-2L),0xDEL}},{{(-1L),0xF1L,(-5L),0xC8L,1L,(-5L),2L,0xA1L,0xA1L},{0x6CL,(-2L),0x6FL,0xA9L,0x6FL,(-2L),0x6CL,0x2DL,0x6FL}},{{0xA1L,0xD1L,(-1L),0xF1L,0xD1L,6L,(-5L),0x8EL,6L},{0xDEL,0x2DL,0x04L,0xA9L,0xE2L,0x2DL,0L,0x2DL,0xE2L}},{{1L,(-1L),(-1L),1L,6L,0x8EL,(-5L),6L,0xD1L},{0x6CL,0x2DL,0x6FL,(-2L),0x6FL,0x2DL,0x6CL,(-2L),0x6FL}},{{1L,0xD1L,0x8EL,0xF1L,6L,6L,0xF1L,0x8EL,0xD1L},{0xDEL,(-2L),0x04L,(-2L),0xE2L,(-2L),0L,(-2L),0xE2L}},{{0xA1L,(-1L),0x8EL,1L,0xD1L,0x8EL,0xF1L,6L,6L},{0x6CL,(-2L),0x6FL,0xA9L,0x6FL,(-2L),0x6CL,0x2DL,0x6FL}},{{0xA1L,0xD1L,(-1L),0xF1L,0xD1L,6L,(-5L),0x8EL,6L},{0xDEL,0x2DL,0x04L,0xA9L,0xE2L,0x2DL,0L,0x2DL,0xE2L}}};
                        int i, j, k;
                        (*l_3209) = l_3282;
                        (*g_3308) = l_3307;

                        ((g_582 == &g_2820) ? (void) (0) : __assert_fail ("g_582 == &g_2820", "4.c", 978, __PRETTY_FUNCTION__));
                        l_3311[7][1][2] = (safe_add_func_uint64_t_u_u((*g_2483), l_3299[5][2]));
                        (*g_3121) = 0L;
                    }
                    else
                    {
                        if ((*l_3209))
                            break;
                        l_3312 = (*l_3209);
                        (*g_3121) = ((((l_3313 != (void*)0) > func_31(l_3315[6], g_348, &l_3304, (*g_676), ((void*)0 != l_3316))) , (void*)0) == (void*)0);
                    }
                    (*g_3121) = l_3299[5][2];
                    if (g_3317)
                        continue;
                    for (g_1113 = 0; (g_1113 < 24); g_1113 = safe_add_func_uint16_t_u_u(g_1113, 9))
                    {
                        --g_3320;
                        (*g_3324) = l_3323;

                        ((g_871 == &l_3287) ? (void) (0) : __assert_fail ("g_871 == &l_3287", "4.c", 997, __PRETTY_FUNCTION__));
                    }
                }
                else
                {
                    uint64_t l_3331[4][5] = {{0x07DDBF4DF7B1466ALL,0x6335C0DE450BB101LL,0x6335C0DE450BB101LL,0x07DDBF4DF7B1466ALL,0x6335C0DE450BB101LL},{0x07DDBF4DF7B1466ALL,0x07DDBF4DF7B1466ALL,4UL,0x07DDBF4DF7B1466ALL,0x07DDBF4DF7B1466ALL},{0x6335C0DE450BB101LL,0x07DDBF4DF7B1466ALL,0x6335C0DE450BB101LL,0x6335C0DE450BB101LL,0x07DDBF4DF7B1466ALL},{0x07DDBF4DF7B1466ALL,0x6335C0DE450BB101LL,0x6335C0DE450BB101LL,0x07DDBF4DF7B1466ALL,0x6335C0DE450BB101LL}};
                    int32_t *l_3343 = &l_3279;
                    union U2 l_3349 = {0xE27DFDEEL};
                    uint8_t *l_3366 = &g_2669;
                    int i, j;
                    if ((((*g_89) = (((*l_3209) && (safe_div_func_int16_t_s_s((&l_2707 == l_3327), (safe_rshift_func_int16_t_s_s(((+l_3330) ^ ((*l_3316) = (l_3332 |= ((l_3331[2][0] > l_3279) | 0xA08BL)))), 7))))) < l_3331[0][0])) ^ (safe_div_func_uint16_t_u_u(func_31((l_3299[4][1] , 0x7EL), g_3221.f0, &g_1592, l_3331[2][2], l_3275), g_2674[0]))))
                    {
                        int16_t l_3335[9] = {0xEC53L,0xEC53L,0xEC53L,0xEC53L,0xEC53L,0xEC53L,0xEC53L,0xEC53L,0xEC53L};
                        int32_t l_3336 = 3L;
                        int i;
                        l_3337--;
                        l_3346[0] |= (((+((-7L) || (safe_lshift_func_uint8_t_u_u((*g_676), l_3331[3][0])))) || (*g_2417)) >= ((safe_unary_minus_func_int16_t_s((func_59(func_69(l_3343, g_1473.f0, func_59(func_69(&l_3332, g_11, (***g_2484), l_3282, l_3344)), g_1851.f0, &l_3260)) < l_3345))) || g_1753));
                    }
                    else
                    {
                        int8_t *l_3347[7] = {&l_3232,&l_3232,&l_3260,&l_3232,&l_3232,&l_3260,&l_3232};
                        union U2 l_3348[7][2] = {{{8UL},{0x4A1AB704L}},{{0x441147C0L},{3UL}},{{0x4A1AB704L},{3UL}},{{0x441147C0L},{0x4A1AB704L}},{{8UL},{8UL}},{{8UL},{0x4A1AB704L}},{{0x441147C0L},{3UL}}};
                        const union U0 ***l_3354 = (void*)0;
                        const union U0 ****l_3353 = &l_3354;
                        const union U0 *****l_3352 = &l_3353;
                        int i, j;
                        l_3346[1] ^= (l_3299[5][2] > ((g_3350[0] != ((*l_3352) = (g_2688 , (void*)0))) & (l_3275 , func_59(l_3347[6]))));

                        ((l_3353 == 0) ? (void) (0) : __assert_fail ("l_3353 == 0", "4.c", 1025, __PRETTY_FUNCTION__));
                        (*l_3209) ^= func_59((*l_724));
                    }
                    (*l_3249) = &l_3282;

                    ((g_871 == &l_3282) ? (void) (0) : __assert_fail ("g_871 == &l_3282", "4.c", 1030, __PRETTY_FUNCTION__));
                    for (l_3293 = (-10); (l_3293 == 60); ++l_3293)
                    {
                        uint8_t l_3357 = 0x19L;
                        if (l_3357)
                            break;
                        (*l_3343) &= ((*l_3209) &= ((*g_871) = (safe_lshift_func_int16_t_s_s((l_3360 < l_3299[0][2]), 8))));
                    }
                    if ((**l_3249))
                    {
                        uint64_t l_3365 = 0xBD28F7D061DAE56BLL;
                        int32_t **l_3373 = &g_3121;
                        (*l_3209) &= (((*g_951)--) != (safe_lshift_func_uint8_t_u_u((l_3365 != ((l_3366 != ((*l_3343) , func_69((*l_3249), (((**g_189) ^= l_3283) , (((safe_mul_func_int8_t_s_s(0xCDL, ((*g_676) = l_3346[0]))) & (safe_sub_func_uint32_t_u_u((!(((safe_rshift_func_uint8_t_u_u(((((*l_3222) = (**g_2484)) == (**g_2730)) && 0xC4L), 5)) , (*l_3343)) <= (*l_3343))), (**l_3249)))) || 0xDC21833D8312ED85LL)), (**l_3249), g_2820.f0, &g_789[2]))) | l_3365)), l_3214[2][7][2].f0)));

                        ((l_3190 == &g_37) ? (void) (0) : __assert_fail ("l_3190 == &g_37", "4.c", 1044, __PRETTY_FUNCTION__));
                        (*l_3373) = (*g_932);

                        ((g_3121 == &l_3282) ? (void) (0) : __assert_fail ("g_3121 == &l_3282", "4.c", 1047, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        return l_3214[2][7][2].f0;



                    }

                    ((g_3121 == &l_3282) ? (void) (0) : __assert_fail ("g_3121 == &l_3282", "4.c", 1057, __PRETTY_FUNCTION__));
                    ((l_3190 == &g_37) ? (void) (0) : __assert_fail ("l_3190 == &g_37", "4.c", 1058, __PRETTY_FUNCTION__));
                }
                if (l_3289)
                    continue;
            }

            (((g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820) ? (void) (0) : __assert_fail ("(g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820", "4.c", 1064, __PRETTY_FUNCTION__));

            ((g_3121 == &l_3282 || (g_3121 >= &g_2674[0] && g_3121 <= &g_2674[2])) ? (void) (0) : __assert_fail ("g_3121 == &l_3282 || (g_3121 >= &g_2674[0] && g_3121 <= &g_2674[2])", "4.c", 1066, __PRETTY_FUNCTION__));
            ((l_3190 == &g_37 || l_3190 == &g_236) ? (void) (0) : __assert_fail ("l_3190 == &g_37 || l_3190 == &g_236", "4.c", 1067, __PRETTY_FUNCTION__));
        }
        else
        {
            (*l_3249) = g_3374[2][0][1];

            (((g_871 >= &g_2674[0] && g_871 <= &g_2674[2]) || (g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(g_871 >= &g_2674[0] && g_871 <= &g_2674[2]) || (g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6])", "4.c", 1073, __PRETTY_FUNCTION__));
        }

        ((g_582 == 0 || g_582 == &g_583 || (g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583 || (g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820", "4.c", 1076, __PRETTY_FUNCTION__));


        ((l_3190 == &g_37 || l_3190 == &g_236) ? (void) (0) : __assert_fail ("l_3190 == &g_37 || l_3190 == &g_236", "4.c", 1079, __PRETTY_FUNCTION__));
        --l_3377[4];
        (*l_3249) = &l_3291;

        ((g_871 == &l_3291) ? (void) (0) : __assert_fail ("g_871 == &l_3291", "4.c", 1083, __PRETTY_FUNCTION__));
    }




    ((g_582 == 0 || g_582 == &g_583 || (g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583 || (g_582 >= &g_286[0] && g_582 <= &g_286[8]) || g_582 == &g_2820", "4.c", 1089, __PRETTY_FUNCTION__));


    ((l_3190 == &g_37 || l_3190 == &g_236) ? (void) (0) : __assert_fail ("l_3190 == &g_37 || l_3190 == &g_236", "4.c", 1092, __PRETTY_FUNCTION__));
    l_3387 = ((((((*g_951) , (*g_2483)) < ((*l_2683) = g_3380)) , (*l_3209)) < func_31(((*g_89) &= ((safe_lshift_func_int8_t_s_u((~((((**g_2485) = (safe_lshift_func_uint16_t_u_u(((9L == 0UL) < (((((*l_3385) = (*l_3209)) , ((g_1547[3][0][0] = &g_676) != ((g_379[2][0][2] , g_191) , l_3386))) & (*l_3209)) >= (*l_3209))), 4))) < (*l_3209)) , 1L)), (*g_676))) | 3L)), (*l_3209), (*l_724), (*l_3209), (*l_3209))) >= 0L);
    (*g_3324) = &l_3278;

    ((g_871 == &l_3278) ? (void) (0) : __assert_fail ("g_871 == &l_3278", "4.c", 1096, __PRETTY_FUNCTION__));
    return g_3391[5][0];


}







static uint16_t func_3(uint32_t p_4, const int8_t * p_5, int16_t p_6, int8_t p_7, uint64_t p_8)
{
    int32_t **l_1376 = (void*)0;
    union U2 *l_1405 = &g_944;
    uint32_t **l_1410 = &g_951;
    int32_t l_1426 = (-7L);
    int32_t l_1427 = (-1L);
    int32_t l_1428 = 0L;
    int32_t l_1429 = 0x38A12E47L;
    int32_t l_1430[3];
    int16_t l_1432 = (-1L);
    int64_t l_1433 = 0x039C5286E355D5C2LL;
    union U2 *l_1456 = &g_944;
    uint8_t l_1630 = 0x59L;
    int8_t *l_1745 = &g_1592;
    int32_t *l_1748 = (void*)0;
    uint32_t *l_1754 = &g_1658.f0;
    uint8_t *l_1760 = (void*)0;
    uint32_t l_1764[6];
    union U0 **l_1792 = &g_220[6];
    union U1 **l_1800 = &g_582;
    int16_t *l_1835[2];
    int16_t ** const l_1834 = &l_1835[0];
    union U1 ** const *l_1884 = &g_907;
    int16_t l_1931 = (-1L);
    int8_t l_1941 = 0L;
    uint8_t l_1964 = 0x6DL;
    uint32_t l_2015 = 1UL;
    const uint16_t l_2049 = 0x55C9L;
    uint64_t l_2110 = 0x0B05923EA82DACEDLL;
    int32_t l_2120 = 0xB0538D66L;
    int16_t *l_2132 = &g_191;
    int16_t **l_2131 = &l_2132;
    union U1 ***l_2133 = &g_907;
    uint64_t *l_2136 = &g_37;
    int32_t *l_2137 = &l_1430[2];
    int16_t l_2152[3];
    int32_t *l_2213 = &g_1753;
    uint16_t l_2243 = 65535UL;
    uint8_t l_2252 = 0x98L;
    int16_t l_2268 = 0xE840L;
    uint32_t l_2269 = 1UL;
    int64_t l_2332 = 0x1EAAC6A4C864DA4FLL;
    uint64_t l_2407 = 0xD623219813620460LL;
    const union U0 *l_2448 = &g_2449;
    uint64_t ***l_2487[3];
    uint32_t l_2515[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    uint32_t l_2539 = 1UL;
    uint64_t l_2553 = 0x59225690C2963597LL;
    uint32_t l_2572 = 4294967292UL;
    uint32_t l_2595 = 0xEC488A30L;
    int i;
    for (i = 0; i < 3; i++)
        l_1430[i] = 0x9039F5AAL;
    for (i = 0; i < 6; i++)
        l_1764[i] = 0x070C08C9L;
    for (i = 0; i < 2; i++)
        l_1835[i] = &l_1432;
    for (i = 0; i < 3; i++)
        l_2152[i] = 0x8F63L;
    for (i = 0; i < 3; i++)
        l_2487[i] = &g_2485;
lbl_1883:
    for (g_1207 = (-23); (g_1207 == 33); g_1207 = safe_add_func_int32_t_s_s(g_1207, 8))
    {
        int32_t l_1373 = 0x9E9FDBCBL;
        union U2 *l_1375 = &g_108;
        int32_t l_1379[2];
        int64_t l_1385 = 0x49E95C800BB83BBALL;
        int8_t *l_1386[1];
        int32_t *l_1400 = &g_47[0][0];
        uint32_t **l_1408 = &g_951;
        uint32_t ***l_1409 = (void*)0;
        uint32_t ***l_1411 = (void*)0;
        uint32_t ***l_1412 = &g_950[8][0][0];
        uint16_t l_1445 = 65529UL;
        uint32_t *l_1460 = &g_1207;
        uint32_t **l_1459 = &l_1460;
        int8_t l_1478 = 1L;
        int32_t l_1479 = 9L;
        uint8_t ***l_1556 = (void*)0;
        int32_t l_1585 = 0x04D586DCL;
        int16_t l_1591 = 1L;
        uint32_t l_1597[4] = {1UL,1UL,1UL,1UL};
        int32_t l_1685 = 0x99049CAAL;
        int32_t l_1691 = 0x15F4F152L;
        uint32_t l_1700 = 18446744073709551612UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1379[i] = (-6L);
        for (i = 0; i < 1; i++)
            l_1386[i] = (void*)0;
        for (g_348 = 0; (g_348 != (-16)); g_348 = safe_sub_func_uint8_t_u_u(g_348, 8))
        {
            int8_t l_1391 = 0x5CL;
            const uint32_t l_1396[6] = {0xA36402FFL,0xA36402FFL,0xA36402FFL,0xA36402FFL,0xA36402FFL,0xA36402FFL};
            int32_t *l_1399 = &g_47[0][0];
            int64_t l_1403 = 0L;
            int32_t *l_1404 = &l_1373;
            int i;
            for (p_7 = 5; (p_7 != (-11)); p_7 = safe_sub_func_int16_t_s_s(p_7, 4))
            {
                uint8_t l_1374 = 0x42L;
                int32_t *l_1377 = (void*)0;
                int32_t *l_1378 = &g_47[0][1];
                l_1379[0] = ((*l_1378) ^= (+(safe_sub_func_uint8_t_u_u(func_31((((((((0xACB5896FC6144927LL && (safe_rshift_func_uint8_t_u_u(func_59(&p_7), 0))) & ((0L == (~((((safe_mul_func_int8_t_s_s((((p_6 != p_4) , ((((void*)0 != g_1366) == (((safe_add_func_int64_t_s_s(((+(safe_sub_func_int32_t_s_s((g_637[0] ^ l_1373), p_8))) <= l_1374), 0xD74BE5B04A2275B2LL)) || p_8) == l_1374)) , 0L)) ^ l_1374), (*g_89))) | p_7) , l_1375) != (void*)0))) || (-1L))) , 0x5496L) | l_1373) , l_1376) != (void*)0) | 7L), l_1373, &g_726, (*g_676), g_1092.f0), (*g_89)))));
                if (p_8)
                {
                    int32_t *l_1381 = &l_1379[1];
                    for (g_545 = 0; (g_545 <= 6); g_545 += 1)
                    {
                        int32_t *l_1380 = &g_47[0][0];
                        l_1381 = l_1380;

                        (((l_1381 >= &g_47[0][0] && l_1381 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(l_1381 >= &g_47[0][0] && l_1381 <= &g_47[1][6])", "4.c", 1222, __PRETTY_FUNCTION__));
                        l_1381 = &l_1379[0];

                        (((l_1381 >= &l_1379[0] && l_1381 <= &l_1379[1])) ? (void) (0) : __assert_fail ("(l_1381 >= &l_1379[0] && l_1381 <= &l_1379[1])", "4.c", 1225, __PRETTY_FUNCTION__));
                    }
                    l_1373 &= p_8;
                }
                else
                {
                    int8_t l_1397 = 0x55L;
                    for (g_726 = 29; (g_726 == 0); g_726 = safe_sub_func_uint8_t_u_u(g_726, 7))
                    {
                        int32_t *l_1394 = (void*)0;
                        int32_t *l_1395 = &g_108.f1;
                        int32_t *l_1398 = &g_11;
                        (*l_1398) = ((((((&g_155 != (void*)0) || func_31(l_1385, g_1266.f0, l_1386[0], ((((*l_1378) = (l_1379[1] <= ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(func_31(l_1391, ((*l_1395) = (safe_mul_func_int16_t_s_s(p_8, g_583.f0))), l_1386[0], l_1396[1], l_1385), p_4)), p_7)) == p_6))) != 0x0D959221L) , p_8), g_1215)) >= p_4) > 4UL) , l_1397) ^ p_7);
                    }
                    l_1400 = l_1399;
                }
                if ((*l_1400))
                    break;
            }
            (*g_1402) = l_1399;
            (*l_1404) = (l_1403 = (*l_1400));
        }
    }
lbl_2577:
    if (func_59(l_1745))
    {
        int32_t *l_1746[8][8][4] = {{{&g_47[0][4],&l_1430[0],&l_1428,&l_1426},{&g_47[1][4],&g_11,&l_1428,&g_11},{(void*)0,&l_1430[2],&g_47[0][0],&l_1428},{&g_11,&g_47[0][5],&g_47[0][0],&g_11},{&g_47[1][2],&g_47[1][4],&g_11,&g_11},{&g_47[1][2],&g_47[0][0],&l_1429,(void*)0},{&g_47[0][0],&l_1430[0],&l_1430[0],&g_47[0][0]},{&g_11,&g_11,(void*)0,&g_47[0][4]}},{{&g_47[0][0],&g_47[0][0],&l_1427,&l_1430[2]},{&g_47[0][0],&l_1426,&l_1430[2],&l_1428},{&l_1428,&l_1426,(void*)0,&g_11},{&g_47[0][4],(void*)0,&g_11,&l_1428},{&g_11,&g_11,&l_1426,&l_1426},{&g_11,&l_1426,&g_47[0][0],&g_47[0][3]},{&g_348,&g_47[0][0],&l_1430[0],&l_1430[2]},{&l_1426,&l_1428,&l_1430[2],&g_47[0][0]}},{{&l_1426,&g_11,(void*)0,&l_1426},{&g_47[0][4],&g_47[0][5],(void*)0,(void*)0},{&g_11,&l_1428,&l_1430[0],&g_47[0][5]},{&g_47[0][0],&g_47[0][0],&l_1430[2],&l_1428},{&l_1430[2],&l_1428,(void*)0,&g_47[0][0]},{&g_47[0][0],&l_1430[2],&g_47[0][3],&g_11},{&l_1426,&l_1430[2],(void*)0,&l_1426},{&g_47[0][2],&l_1430[0],&l_1430[0],&g_47[0][2]}},{{&g_47[1][6],&g_11,&g_47[0][0],&g_348},{&g_11,&g_11,&l_1430[2],&l_1430[2]},{&l_1428,&l_1430[0],&g_11,&l_1430[2]},{&l_1430[2],&g_11,&l_1430[2],&g_348},{&l_1428,&g_11,&l_1427,&g_47[0][2]},{&l_1426,&g_47[0][0],&l_1426,&g_348},{&g_47[0][0],&l_1428,&g_47[0][3],&g_11},{&g_11,&g_47[0][0],&g_47[0][0],&l_1430[2]}},{{&g_11,&l_1429,&g_11,&l_1426},{&g_348,(void*)0,&g_11,&g_47[1][2]},{&g_348,&l_1430[2],(void*)0,&g_11},{&g_11,&g_47[1][2],&g_47[0][0],&g_348},{&l_1426,&l_1428,&g_47[0][3],&l_1430[0]},{(void*)0,&l_1426,&l_1430[2],&g_47[0][2]},{&g_348,&l_1430[0],&g_47[1][6],&g_47[0][0]},{&g_47[0][0],&g_11,(void*)0,&g_47[0][5]}},{{&g_348,&l_1430[2],&l_1427,&g_11},{&l_1430[2],&l_1427,&l_1430[2],&l_1430[0]},{&l_1427,&g_11,&l_1430[0],&l_1429},{&g_11,&g_348,&g_47[1][2],&g_47[0][2]},{&g_47[0][4],&g_47[0][3],(void*)0,&l_1428},{&g_348,&l_1428,&g_348,&l_1430[0]},{&l_1428,&g_11,&l_1429,&g_11},{&l_1428,&l_1428,&l_1430[2],&g_11}},{{&g_47[0][0],(void*)0,&l_1430[2],&g_47[0][0]},{&l_1428,&g_47[0][0],&l_1429,&l_1430[2]},{&l_1428,&g_11,&g_348,&l_1428},{&g_348,&l_1428,(void*)0,&g_348},{&g_47[0][4],&l_1426,&g_47[1][2],&g_47[0][4]},{&g_11,(void*)0,&l_1430[2],&l_1429},{&l_1427,&l_1430[0],(void*)0,(void*)0},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[0][3]}},{{(void*)0,&l_1430[0],&l_1430[2],&l_1429},{&g_47[0][0],&l_1430[2],&l_1429,(void*)0},{&g_348,&l_1430[2],&g_348,&l_1428},{&g_47[0][0],(void*)0,&l_1429,&g_11},{&l_1428,&g_47[0][3],&g_47[1][2],(void*)0},{&l_1430[0],&g_11,&l_1430[2],&l_1430[2]},{&l_1428,&g_47[0][0],(void*)0,(void*)0},{&g_11,&g_47[0][0],(void*)0,&g_11}}};
        int32_t **l_1747[10][5][5] = {{{(void*)0,&g_103[1][0][0],&l_1746[1][5][3],(void*)0,&l_1746[2][1][0]},{&g_871,&g_103[0][0][1],(void*)0,&g_103[3][0][2],(void*)0},{(void*)0,&g_103[3][0][2],&g_103[3][0][2],(void*)0,&l_1746[3][7][2]},{&g_103[3][0][2],&l_1746[4][1][1],&g_103[3][0][2],&g_871,(void*)0},{&l_1746[1][5][3],(void*)0,(void*)0,&g_103[3][0][2],&g_103[3][0][2]}},{{&g_103[3][0][2],&l_1746[7][3][1],&g_871,&g_871,&g_103[3][0][2]},{&l_1746[4][1][1],&l_1746[4][7][3],(void*)0,(void*)0,&g_103[3][0][2]},{(void*)0,&l_1746[4][1][1],&l_1746[3][6][0],&g_103[3][0][2],(void*)0},{&l_1746[2][5][2],(void*)0,&l_1746[4][1][1],(void*)0,(void*)0},{&g_103[4][1][2],&g_103[3][0][2],(void*)0,&g_103[4][0][1],&l_1746[3][7][2]}},{{&g_871,&l_1746[4][1][1],&l_1746[4][1][1],&g_103[5][1][1],&g_103[3][0][2]},{&l_1746[7][5][1],&g_871,&g_103[5][0][0],&l_1746[6][0][0],&g_871},{(void*)0,&l_1746[6][5][2],&l_1746[4][1][1],&l_1746[3][0][3],&g_871},{(void*)0,(void*)0,&g_871,(void*)0,&l_1746[2][7][2]},{&l_1746[4][7][3],&g_103[2][1][0],(void*)0,&l_1746[2][7][2],&g_103[3][0][2]}},{{&l_1746[4][1][1],&g_871,&l_1746[6][0][0],(void*)0,&g_103[5][1][0]},{(void*)0,&l_1746[4][1][1],&l_1746[6][5][3],&g_103[3][0][2],&g_871},{(void*)0,&g_103[4][1][2],(void*)0,&g_103[5][0][0],&g_871},{&l_1746[4][1][1],&g_103[3][0][2],&g_103[1][1][0],&g_103[1][1][0],(void*)0},{&l_1746[4][7][3],&g_103[3][0][2],&g_103[3][0][2],&g_103[3][0][2],&l_1746[4][1][1]}},{{(void*)0,(void*)0,&g_103[3][0][2],(void*)0,&g_103[3][0][1]},{(void*)0,&l_1746[6][7][1],&g_103[3][0][2],(void*)0,&g_103[3][0][2]},{&l_1746[7][5][1],&l_1746[4][1][1],&g_871,&l_1746[6][4][3],(void*)0},{&l_1746[4][1][1],&g_871,&l_1746[6][5][3],&g_103[3][0][2],&l_1746[4][1][1]},{&l_1746[6][7][1],&g_103[3][0][2],&g_103[3][0][2],&l_1746[4][1][1],&g_103[4][1][2]}},{{&g_103[3][0][2],&g_871,&l_1746[4][1][1],(void*)0,(void*)0},{&l_1746[4][1][1],&l_1746[4][1][1],&l_1746[4][1][1],&l_1746[4][1][1],&l_1746[4][1][1]},{&g_871,&g_103[3][0][2],&g_103[3][0][2],(void*)0,&g_103[3][0][2]},{&g_103[3][0][2],&g_103[4][1][2],(void*)0,&l_1746[2][7][2],(void*)0},{&g_871,&l_1746[6][5][2],&l_1746[2][5][2],&g_103[3][0][2],&g_103[4][1][2]}},{{&g_103[3][0][2],&l_1746[4][1][1],&l_1746[4][1][1],(void*)0,(void*)0},{&g_103[5][1][1],&g_103[3][0][2],&g_103[3][0][2],&g_103[3][0][2],&g_871},{&g_103[3][0][2],&l_1746[4][1][1],&g_103[3][0][2],&g_871,&g_871},{&g_103[5][1][1],(void*)0,&g_103[3][0][2],&g_103[3][0][2],&g_103[3][0][2]},{&g_871,&g_103[3][0][1],&g_103[3][0][2],&g_871,&g_871}},{{&g_103[3][0][2],&l_1746[2][7][2],(void*)0,(void*)0,&g_103[3][1][1]},{&g_103[3][0][2],(void*)0,&l_1746[0][7][1],&g_103[1][0][2],&g_871},{&g_103[3][0][2],&g_103[5][1][1],&g_103[5][0][0],(void*)0,&l_1746[6][7][1]},{(void*)0,&l_1746[4][0][3],&g_871,(void*)0,(void*)0},{(void*)0,&g_103[1][1][0],&g_871,&g_103[3][0][2],(void*)0}},{{&g_103[3][0][2],&l_1746[4][1][1],&g_103[3][0][2],(void*)0,(void*)0},{&l_1746[4][0][3],(void*)0,&g_871,&g_103[3][0][2],(void*)0},{&l_1746[4][1][1],&g_103[3][0][2],&l_1746[4][1][1],&g_871,&l_1746[6][7][1]},{&g_103[3][0][2],(void*)0,&l_1746[3][7][2],&g_103[3][0][2],&g_871},{(void*)0,&g_103[3][0][2],&g_103[3][0][2],&g_871,&g_103[3][1][1]}},{{&l_1746[2][7][2],(void*)0,&g_871,&g_103[3][0][2],&g_871},{&l_1746[2][7][2],&l_1746[4][1][1],(void*)0,&l_1746[3][6][0],&g_103[3][0][2]},{&g_103[1][1][0],&l_1746[4][1][1],&l_1746[4][1][1],&l_1746[4][1][1],&g_871},{&g_103[1][0][2],&g_103[3][0][2],&l_1746[4][1][1],&l_1746[4][1][1],&g_103[5][0][0]},{(void*)0,&g_103[4][1][2],&l_1746[3][6][0],&g_103[3][0][2],&l_1746[3][6][0]}}};
        uint8_t *l_1758 = (void*)0;
        uint8_t **l_1759[3];
        int64_t l_1763 = 0x4428FE6D46F174DFLL;
        const int32_t l_1775 = 0L;
        uint8_t l_1801 = 0UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1759[i] = &g_676;
        l_1748 = l_1746[4][1][1];
lbl_1823:
        g_1753 = func_15((g_191 , ((*g_929) = (l_1745 = &g_726))), (*l_1405), (*l_1456));

        ((g_78 == &g_79 || g_78 == &g_726) ? (void) (0) : __assert_fail ("g_78 == &g_79 || g_78 == &g_726", "4.c", 1265, __PRETTY_FUNCTION__));
        ((l_1745 == &g_726) ? (void) (0) : __assert_fail ("l_1745 == &g_726", "4.c", 1266, __PRETTY_FUNCTION__));
        l_1764[3] = (safe_div_func_uint32_t_u_u(((g_1757 , (((*l_1456) , (p_6 == 65535UL)) , &l_1630)) != (l_1760 = l_1758)), (((safe_sub_func_int32_t_s_s((p_7 < (p_4 , (l_1763 = p_6))), p_7)) < 0xDA77ED370A6AB0EALL) & p_6)));
        for (g_1170.f0 = 0; (g_1170.f0 <= 14); g_1170.f0 = safe_add_func_uint16_t_u_u(g_1170.f0, 3))
        {
            int16_t l_1767[6] = {0x1EF5L,0x3F75L,0x3F75L,0x1EF5L,0x3F75L,0x3F75L};
            int32_t *l_1768 = (void*)0;
            int32_t l_1769 = 0x00849787L;
            uint32_t l_1810 = 1UL;
            int16_t *l_1833 = (void*)0;
            int16_t **l_1832 = &l_1833;
            const union U0 *l_1850 = &g_1851;
            int32_t l_1879 = 0x44969655L;
            int32_t l_1892[4] = {0x2A392CF7L,0x2A392CF7L,0x2A392CF7L,0x2A392CF7L};
            int32_t l_1908 = 0xBA7AB1A7L;
            int i;
            if (l_1767[0])
                break;
            (*g_877) = l_1768;
            l_1769 |= p_7;
            if ((l_1769 ^= (safe_unary_minus_func_int32_t_s((0x4C43F277L > (*g_416))))))
            {
                union U2 l_1773[8] = {{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL},{0xBB31CD0FL}};
                union U2 l_1774 = {0x55FDB0FCL};
                uint16_t *l_1778 = &g_1779[9][2];
                const int32_t l_1795 = 0x4B62A4D6L;
                int32_t l_1807 = 0x79E69611L;
                const uint32_t *l_1837 = &g_1093.f0;
                int32_t l_1839 = 0x6C5E0E7AL;
                int i;
                if (p_4)
                    break;
                if ((safe_lshift_func_uint16_t_u_s((((*l_1778) = ((((func_15((*g_929), l_1773[4], l_1774) > p_4) >= l_1775) & (safe_lshift_func_int8_t_s_s(((g_11 , func_59(l_1745)) || g_1753), p_7))) <= 0x4A06L)) && l_1774.f0), 5)))
                {
                    int32_t *l_1780 = &l_1430[1];
                    union U0 **l_1794 = &g_220[6];
                    union U0 ***l_1793 = &l_1794;
                    l_1768 = l_1780;

                    (((l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])) ? (void) (0) : __assert_fail ("(l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])", "4.c", 1304, __PRETTY_FUNCTION__));
                    if ((p_8 < func_31((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((*l_1780), (safe_div_func_int64_t_s_s(((+l_1774.f0) != 0x42L), (safe_sub_func_int8_t_s_s((*l_1780), (safe_unary_minus_func_int16_t_s(((**g_189) ^= (safe_div_func_int64_t_s_s(func_31((1UL && 1UL), (((*l_1793) = l_1792) != (void*)0), l_1758, (*g_676), l_1773[4].f0), 0x085CF5D29A8C58FELL))))))))))), (*l_1768))), g_789[2], l_1758, l_1795, (*l_1780))))
                    {
                        uint32_t l_1804 = 1UL;
                        union U0 *l_1808 = &g_1056[3];
                        (*l_1768) &= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_59(l_1745), ((void*)0 == l_1800))), l_1801)) ^ (safe_add_func_int16_t_s_s(l_1804, (-1L))));
                        l_1807 |= (safe_lshift_func_int8_t_s_s((p_7 &= p_8), 2));
                        g_220[0] = l_1808;
                    }
                    else
                    {
                        int8_t l_1809 = 0xAEL;
                        int32_t l_1811[7] = {0L,0L,0L,0L,0L,0L,0L};
                        uint64_t *l_1816 = &g_37;
                        int32_t *l_1817 = &l_1773[4].f1;
                        int32_t *l_1818 = &g_944.f1;
                        int32_t *l_1819 = &l_1773[4].f1;
                        int32_t *l_1820 = &l_1807;
                        int32_t l_1821[8][1] = {{0x037A81F8L},{0x45F00B17L},{0x45F00B17L},{0x037A81F8L},{0x45F00B17L},{0x45F00B17L},{0x037A81F8L},{0x45F00B17L}};
                        uint16_t l_1822[3][8][5] = {{{0xCC68L,0xCCFBL,0xCCFBL,0xCC68L,6UL},{65531UL,0xCC68L,0x0DFDL,0xA451L,0xA451L},{0UL,0xCC68L,0UL,6UL,0xCC68L},{0xA451L,0xCCFBL,6UL,0xA451L,6UL},{0xA451L,0xA451L,0x0DFDL,0xCC68L,65531UL},{0UL,65531UL,6UL,6UL,65531UL},{65531UL,0xCCFBL,0UL,65531UL,6UL},{0xCC68L,65531UL,0x0DFDL,65531UL,0xCC68L}},{{0UL,0xA451L,0xCCFBL,6UL,0xA451L},{0xCC68L,0xCCFBL,0xCCFBL,0xCC68L,6UL},{65531UL,0xCC68L,0x0DFDL,0xA451L,0xA451L},{0x0DFDL,6UL,0x0DFDL,0x96B6L,6UL},{0xCCFBL,1UL,0x96B6L,0xCCFBL,0x96B6L},{0xCCFBL,0xCCFBL,0xCC68L,6UL,0UL},{0x0DFDL,0UL,0x96B6L,0x96B6L,0UL},{0UL,1UL,0x0DFDL,0UL,0x96B6L}},{{6UL,0UL,0xCC68L,0UL,6UL},{0x0DFDL,0xCCFBL,1UL,0x96B6L,0xCCFBL},{6UL,1UL,1UL,6UL,0x96B6L},{0UL,6UL,0xCC68L,0xCCFBL,0xCCFBL},{0x0DFDL,6UL,0x0DFDL,0x96B6L,6UL},{0xCCFBL,1UL,0x96B6L,0xCCFBL,0x96B6L},{0xCCFBL,0xCCFBL,0xCC68L,6UL,0UL},{0x0DFDL,0UL,0x96B6L,0x96B6L,0UL}}};
                        int i, j, k;
                        l_1809 &= (*l_1768);
                        (*l_1768) = ((((0UL < p_7) < ((*l_1778) = (+func_31((l_1811[1] = l_1810), (l_1821[6][0] ^= ((*l_1820) &= (safe_div_func_int32_t_s_s((((((0x3F8F3A49L ^ (l_1795 >= ((*g_929) == (*g_929)))) == (*g_190)) , (safe_add_func_uint64_t_u_u(((*l_1816) = 18446744073709551610UL), p_6))) < 0x08600725L) , p_7), (**g_415))))), (*g_929), p_4, l_1822[1][6][1])))) ^ p_4) || p_6);
                    }
                    if ((*g_1327))
                        continue;
                }
                else
                {
                    if (g_993.f0)
                        goto lbl_1823;
                }

                ((l_1768 == 0 || (l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])) ? (void) (0) : __assert_fail ("l_1768 == 0 || (l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])", "4.c", 1337, __PRETTY_FUNCTION__));
                for (g_360 = (-30); (g_360 != 20); g_360 = safe_add_func_int16_t_s_s(g_360, 5))
                {
                    const union U0 **l_1848 = (void*)0;
                    const union U0 **l_1849[1][10][5];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_1849[i][j][k] = (void*)0;
                        }
                    }
                    for (g_1660.f0 = 0; (g_1660.f0 <= 2); g_1660.f0 += 1)
                    {
                        uint64_t *l_1838 = &g_236;
                        int32_t l_1840 = 1L;
                        int32_t l_1841 = 0x2E3D9B4BL;
                        int32_t l_1842 = 0x71585C96L;
                        uint64_t l_1843 = 5UL;
                        int i;
                        l_1839 = (((*l_1838) &= (0x14BDCBA6C47DA1D3LL | (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_1764[(g_1660.f0 + 3)], ((func_59(((safe_mod_func_int64_t_s_s((l_1832 != l_1834), (((*g_951) = (((g_1836[0][4] , ((**l_1792) , (void*)0)) != l_1759[g_1660.f0]) | p_8)) | l_1764[(g_1660.f0 + 3)]))) , (*g_929))) , (void*)0) != l_1837))), l_1807)))) , 0xF0CE54CBL);
                        (*g_1402) = &l_1839;
                        if (p_6)
                            continue;
                        l_1843--;
                    }


                    l_1850 = &g_1310;

                    ((l_1850 == &g_1310) ? (void) (0) : __assert_fail ("l_1850 == &g_1310", "4.c", 1369, __PRETTY_FUNCTION__));
                    return l_1839;



                }
            }
            else
            {
                int32_t *l_1867[7];
                int8_t l_1871 = 0x9AL;
                int i;
                for (i = 0; i < 7; i++)
                    l_1867[i] = &l_1426;
                for (l_1433 = 0; (l_1433 != (-23)); l_1433 = safe_sub_func_int16_t_s_s(l_1433, 1))
                {
                    uint32_t l_1869 = 0xC3F9F150L;
                    int32_t l_1870 = 0x67AF1566L;
                    int32_t l_1872 = 0L;
                    int32_t l_1873 = 9L;
                    int32_t l_1875 = 9L;
                    uint32_t l_1876 = 8UL;
                    uint16_t l_1880 = 0x6286L;
                    for (l_1630 = 0; (l_1630 == 10); ++l_1630)
                    {
                        int8_t l_1862 = 0L;
                        int8_t **l_1868 = &l_1745;
                        int32_t l_1874[10] = {0x467CF2B7L,0xBD30FE8CL,0x467CF2B7L,0xBD30FE8CL,0x467CF2B7L,0xBD30FE8CL,0x467CF2B7L,0xBD30FE8CL,0x467CF2B7L,0xBD30FE8CL};
                        int i;
                        l_1871 ^= (((safe_div_func_uint16_t_u_u(p_8, (l_1869 ^= (func_59((*g_929)) | (safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((l_1862 <= (0L < (g_726 , (safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((func_59(((*l_1868) = func_69(l_1867[5], (p_4 || ((*g_416) & (*g_951))), p_4, p_7, (*g_929)))) && 0x9EL) & p_7) & g_153), 6L)), p_7))))), p_4)), p_6)))))) & l_1870) ^ p_6);

                        ((l_1745 == &g_79) ? (void) (0) : __assert_fail ("l_1745 == &g_79", "4.c", 1400, __PRETTY_FUNCTION__));
                        if (p_7)
                            continue;
                        l_1876--;
                        --l_1880;
                    }
                    if (g_1753)
                        goto lbl_1883;
                }
                if ((l_1879 = ((p_8 , l_1884) == (void*)0)))
                {
                    int32_t *l_1885 = &l_1426;
                    (*g_1402) = l_1885;
                }
                else
                {
                    int32_t *l_1886 = &g_348;
                    int32_t l_1890 = 1L;
                    int32_t l_1893 = 0x0D260D4BL;
                    int32_t l_1894 = (-1L);
                    int32_t l_1896 = 0xB255587FL;
                    int32_t l_1897 = (-5L);
                    int32_t l_1898 = 0L;
                    int32_t l_1899[10][8] = {{0L,0xCDE53045L,(-1L),0x252E668BL,0x3924AC93L,0x867ACA59L,0x867ACA59L,0x3924AC93L},{0x7F125071L,(-1L),(-1L),0x7F125071L,1L,0x78B3C1DFL,(-1L),0xD1E8B36EL},{0xD1E8B36EL,9L,(-1L),0x5D19374CL,(-1L),0x252E668BL,0xD1E8B36EL,1L},{1L,(-1L),9L,0x5D19374CL,0x8C7C8FD7L,7L,(-1L),7L},{0x78B3C1DFL,(-7L),0x867ACA59L,(-7L),0x78B3C1DFL,(-10L),0x8C7C8FD7L,0x867ACA59L},{0x1D9E40A7L,0x78B3C1DFL,(-1L),0xCDE53045L,0x252E668BL,0x7F125071L,(-10L),(-7L)},{0x25727193L,0x5D19374CL,(-1L),9L,0xD1E8B36EL,9L,0x8C7C8FD7L,0x8C7C8FD7L},{0x252E668BL,0x3924AC93L,0x867ACA59L,0x867ACA59L,0x3924AC93L,0x252E668BL,(-1L),0xCDE53045L},{9L,0xD1E8B36EL,9L,(-1L),0x5D19374CL,0x25727193L,0xD1E8B36EL,7L},{0x7F125071L,0x252E668BL,0xCDE53045L,(-1L),0x78B3C1DFL,0x1D9E40A7L,0x5D19374CL,0xCDE53045L}};
                    int64_t l_1902 = 0x9235F4F89C629497LL;
                    int8_t l_1903 = 3L;
                    int i, j;
                    l_1768 = l_1886;

                    ((l_1768 == &g_348) ? (void) (0) : __assert_fail ("l_1768 == &g_348", "4.c", 1429, __PRETTY_FUNCTION__));
                    for (l_1871 = 16; (l_1871 > (-1)); --l_1871)
                    {
                        int8_t l_1889 = 1L;
                        int32_t l_1891 = (-1L);
                        int32_t l_1900 = (-3L);
                        int32_t l_1901 = 0xBFDEC0C1L;
                        int32_t l_1904 = 1L;
                        int32_t l_1905 = 0xDD830E3EL;
                        int32_t l_1906 = 0xAA045587L;
                        int32_t l_1907 = 0L;
                        int32_t l_1909 = 1L;
                        uint8_t l_1910 = 255UL;
                        ++l_1910;
                    }
                }

                ((l_1768 == &g_348 || l_1768 == 0) ? (void) (0) : __assert_fail ("l_1768 == &g_348 || l_1768 == 0", "4.c", 1446, __PRETTY_FUNCTION__));
                if (p_4)
                    break;
            }

            ((l_1768 == &g_348 || l_1768 == 0 || (l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])) ? (void) (0) : __assert_fail ("l_1768 == &g_348 || l_1768 == 0 || (l_1768 >= &l_1430[0] && l_1768 <= &l_1430[2])", "4.c", 1451, __PRETTY_FUNCTION__));
        }

        ((l_1745 == &g_79 || l_1745 == &g_726) ? (void) (0) : __assert_fail ("l_1745 == &g_79 || l_1745 == &g_726", "4.c", 1454, __PRETTY_FUNCTION__));
    }
    else
    {
        union U2 l_1913 = {0x7A10CFD1L};
        int32_t *l_1934 = &g_11;
        int32_t l_1958 = 0L;
        int32_t *l_1977 = &l_1429;
        uint64_t l_2014 = 0x71A31C4E6234DC1CLL;
        uint16_t l_2048 = 9UL;
        uint32_t *l_2068 = &l_1764[3];
        uint16_t l_2071 = 65535UL;
        int32_t l_2083[8][4] = {{1L,1L,2L,1L},{0x7A161385L,(-1L),0x7A161385L,2L},{0x7A161385L,2L,2L,0x7A161385L},{1L,2L,1L,2L},{2L,(-1L),1L,1L},{1L,1L,2L,1L},{0x7A161385L,(-1L),0x7A161385L,2L},{0x7A161385L,2L,2L,0x7A161385L}};
        const int32_t *l_2087 = &g_47[1][4];
        union U1 *l_2088[8][10][3] = {{{(void*)0,&g_225,&g_286[6]},{&g_227[1],(void*)0,&g_286[4]},{&g_225,&g_1170,&g_1093},{(void*)0,&g_583,&g_225},{&g_1170,(void*)0,&g_1473},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1473,(void*)0},{&g_1170,&g_583,&g_993},{(void*)0,&g_1473,&g_1658},{&g_225,&g_227[1],&g_286[4]}},{{&g_227[1],(void*)0,(void*)0},{&g_1660,&g_993,(void*)0},{&g_583,&g_1092,&g_993},{&g_993,&g_583,&g_1658},{&g_225,&g_993,&g_225},{&g_286[6],&g_286[4],(void*)0},{&g_286[0],&g_286[0],(void*)0},{&g_1660,&g_286[4],&g_1092},{(void*)0,&g_286[4],&g_225},{&g_225,&g_993,(void*)0}},{{&g_286[4],(void*)0,&g_225},{&g_225,&g_286[4],&g_1092},{&g_286[8],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_1170,&g_227[1],&g_225},{&g_286[4],&g_286[4],&g_1658},{(void*)0,&g_1660,&g_993},{&g_1093,(void*)0,(void*)0},{&g_583,&g_1093,(void*)0},{&g_583,(void*)0,&g_286[4]}},{{&g_286[6],(void*)0,&g_1658},{&g_993,&g_993,&g_993},{&g_286[4],&g_286[4],(void*)0},{&g_1093,&g_286[4],&g_1473},{&g_286[6],&g_286[4],&g_227[1]},{&g_286[4],(void*)0,(void*)0},{&g_1473,&g_1092,&g_1658},{&g_1093,&g_225,&g_1093},{&g_227[1],&g_583,&g_1660},{&g_1658,(void*)0,&g_1092}},{{&g_1170,&g_1473,&g_286[0]},{&g_225,&g_225,(void*)0},{&g_1093,(void*)0,&g_993},{(void*)0,&g_993,&g_1660},{&g_1092,&g_1473,&g_1092},{&g_225,(void*)0,&g_286[6]},{&g_1473,&g_1660,&g_227[1]},{&g_1092,&g_225,&g_993},{(void*)0,(void*)0,(void*)0},{&g_1092,&g_286[4],&g_1093}},{{&g_1473,&g_1093,&g_1473},{&g_225,&g_1473,(void*)0},{&g_1092,(void*)0,&g_1093},{(void*)0,(void*)0,&g_1093},{&g_1093,&g_993,&g_286[4]},{&g_225,(void*)0,&g_1660},{&g_1170,&g_227[1],&g_1473},{&g_1658,&g_1473,&g_225},{&g_227[1],&g_993,(void*)0},{&g_1093,&g_1170,(void*)0}},{{&g_1473,&g_227[1],&g_1660},{&g_286[4],&g_227[0],&g_225},{&g_286[6],(void*)0,&g_225},{&g_1093,&g_583,&g_1660},{&g_1092,&g_993,&g_227[1]},{&g_225,&g_225,&g_227[1]},{(void*)0,&g_286[4],&g_225},{(void*)0,&g_227[1],&g_1473},{&g_1473,&g_286[4],&g_225},{&g_1473,&g_286[0],(void*)0}},{{&g_286[4],&g_225,&g_1092},{(void*)0,&g_1473,&g_227[1]},{(void*)0,&g_225,&g_225},{&g_225,&g_225,&g_993},{&g_227[1],&g_993,&g_227[1]},{(void*)0,&g_1473,&g_227[1]},{(void*)0,&g_286[4],(void*)0},{&g_1093,&g_1473,&g_1093},{&g_227[0],&g_993,&g_1092},{&g_993,&g_225,&g_1473}}};
        int32_t l_2109 = 0x427DC455L;
        int i, j, k;
        if (func_15(l_1745, (*g_1367), l_1913))
        {
            uint64_t *l_1926[9][9][2];
            uint64_t **l_1925 = &l_1926[7][0][1];
            int16_t l_1953 = 0x5238L;
            int64_t l_1990 = 3L;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1926[i][j][k] = &g_37;
                }
            }
            for (l_1433 = 0; (l_1433 > (-10)); l_1433 = safe_sub_func_int8_t_s_s(l_1433, 1))
            {
                int8_t *l_1939 = &g_1592;
                l_1427 = p_8;
                for (g_108.f1 = 4; (g_108.f1 >= 2); g_108.f1 -= 1)
                {
                    int8_t *l_1930 = (void*)0;
                    int32_t l_1932 = 0x044905EDL;
                    int i;
                    if ((safe_mul_func_int8_t_s_s(g_140[g_108.f1], p_6)))
                    {
                        uint8_t *l_1922 = &g_637[4];
                        uint64_t *l_1924 = &g_236;
                        uint64_t **l_1923 = &l_1924;
                        uint64_t **l_1928 = &l_1926[1][0][1];
                        uint64_t ***l_1927 = &l_1928;
                        int32_t l_1929[7][1] = {{0x76A0A688L},{0x76A0A688L},{0x7A902EDEL},{0x76A0A688L},{0x76A0A688L},{0x7A902EDEL},{0x76A0A688L}};
                        int32_t *l_1933[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1933[i] = (void*)0;
                        l_1932 = (((p_6 | (((((((*l_1922) = ((*g_676) = (safe_div_func_int16_t_s_s((p_8 <= p_7), p_6)))) & (l_1923 != ((*l_1927) = l_1925))) < p_8) & (g_140[(g_108.f1 + 1)] ^= (func_31(l_1929[1][0], g_191, l_1930, l_1913.f0, l_1931) , 0xFC07L))) & 3UL) , 0x2AFB92EB2A7B4434LL)) , 6L) || l_1913.f0);
                        if (p_7)
                            break;
                        l_1933[0] = &l_1932;


                        l_1932 ^= p_7;
                    }
                    else
                    {
                        (*g_1935) = l_1934;

                        ((g_871 == &g_11) ? (void) (0) : __assert_fail ("g_871 == &g_11", "4.c", 1519, __PRETTY_FUNCTION__));
                    }
                }

                                for (l_1931 = 21; (l_1931 >= 11); l_1931 = safe_sub_func_uint8_t_u_u(l_1931, 9))
                {
                    const uint32_t l_1938 = 4294967295UL;
                    int32_t l_1940[5];
                    int32_t *l_1942 = &l_1429;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1940[i] = 0x63253738L;
                    l_1940[4] = (l_1913 , p_8);
                    l_1427 = l_1941;
                    (*l_1942) = ((*l_1934) ^= (p_6 | p_8));
                }
                (*l_1934) ^= (-1L);
            }


            for (l_1426 = 0; (l_1426 < 7); ++l_1426)
            {
                uint16_t *l_1945 = &g_1247;
                uint16_t *l_1954 = &g_1779[9][2];
                const int32_t l_1957 = 1L;
                int32_t l_1959 = (-7L);
                int8_t *l_1960 = &g_789[1];
                union U2 **l_1961[3];
                int16_t ** const l_2009[6][7][4] = {{{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[0]},{(void*)0,&l_1835[0],&l_1835[1],(void*)0},{&l_1835[0],&l_1835[1],&l_1835[0],&l_1835[0]},{&l_1835[1],&l_1835[1],&l_1835[0],&l_1835[1]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]},{(void*)0,&l_1835[1],&l_1835[1],&l_1835[1]},{&l_1835[1],&l_1835[1],(void*)0,&l_1835[1]}},{{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[1]},{&l_1835[0],&l_1835[1],&l_1835[1],&l_1835[0]},{&l_1835[0],&l_1835[1],&l_1835[0],(void*)0},{&l_1835[1],&l_1835[0],&l_1835[1],(void*)0},{&l_1835[1],(void*)0,&l_1835[1],(void*)0},{&l_1835[1],&l_1835[1],&l_1835[0],&l_1835[0]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]}},{{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]},{&l_1835[0],&l_1835[1],&l_1835[0],&l_1835[0]},{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[0]},{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[0]},{&l_1835[0],&l_1835[1],&l_1835[0],&l_1835[1]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[1]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[0]}},{{&l_1835[0],&l_1835[1],&l_1835[1],(void*)0},{&l_1835[1],(void*)0,&l_1835[1],(void*)0},{&l_1835[1],&l_1835[1],&l_1835[0],&l_1835[0]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]},{&l_1835[0],&l_1835[1],&l_1835[0],&l_1835[0]},{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[0]}},{{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[0]},{&l_1835[0],&l_1835[1],&l_1835[0],&l_1835[1]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[1]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[0]},{&l_1835[0],&l_1835[1],&l_1835[1],(void*)0},{&l_1835[1],(void*)0,&l_1835[1],(void*)0},{&l_1835[1],&l_1835[1],&l_1835[0],&l_1835[0]}},{{&l_1835[1],&l_1835[0],&l_1835[1],&l_1835[1]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[1]},{&l_1835[1],(void*)0,&l_1835[0],&l_1835[0]},{&l_1835[0],&l_1835[0],&l_1835[1],&l_1835[0]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[0]},{&l_1835[0],(void*)0,&l_1835[1],&l_1835[1]},{&l_1835[1],&l_1835[0],&l_1835[0],&l_1835[1]}}};
                uint32_t l_2013 = 9UL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1961[i] = &l_1405;
                if ((0xE4C1B2DAL >= (((func_31((((*l_1945) = 3UL) | ((safe_mul_func_uint16_t_u_u((g_1948 , (l_1959 |= ((safe_div_func_uint8_t_u_u(((*g_951) <= ((((~(safe_div_func_uint16_t_u_u(l_1953, ((*l_1954) = (g_1590[0][3][0] & (0x8DF0L > g_618[1])))))) & ((safe_mul_func_uint8_t_u_u((*g_676), (-9L))) && l_1957)) == p_8) <= l_1958)), p_6)) , l_1953))), p_4)) , (-1L))), g_1660.f0, l_1960, p_7, p_4) > p_4) , l_1961[1]) == l_1961[0])))
                {
                    int8_t *l_1972 = &g_79;
                    int32_t l_1974 = (-1L);
                    union U0 *l_1980[3][7] = {{&g_1720[4][1][5],(void*)0,&g_793,(void*)0,&g_1720[4][1][5],&g_1720[4][1][5],(void*)0},{&g_1451[0],&g_377[0][3][1],&g_1451[0],&g_674,&g_674,&g_1451[0],&g_377[0][3][1]},{(void*)0,&g_674,&g_793,&g_793,&g_674,(void*)0,&g_674}};
                    int i, j;
                    for (g_1092.f0 = 0; (g_1092.f0 >= 19); g_1092.f0 = safe_add_func_uint8_t_u_u(g_1092.f0, 8))
                    {
                        int16_t l_1965 = (-6L);
                        int8_t *l_1970[5][2][3] = {{{&g_1113,&g_1113,&g_1113},{&g_789[2],&g_789[2],&g_789[2]}},{{&g_1113,&g_1113,&g_1113},{&g_789[2],&g_789[2],&g_789[2]}},{{&g_1113,&g_1113,&g_1113},{&g_789[2],&g_789[2],&g_789[2]}},{{&g_1113,&g_1113,&g_1113},{&g_789[2],&g_789[2],&g_789[2]}},{{&g_1113,&g_1113,&g_1113},{&g_789[2],&g_789[2],&g_789[2]}}};
                        uint8_t *l_1971 = &l_1630;
                        int64_t *l_1973 = &g_221.f2;
                        int i, j, k;
                        if (l_1964)
                            break;
                        if (l_1959)
                            break;
                        l_1974 &= (((*l_1973) = ((+((*l_1954) = (((*l_1945) = l_1965) > (**g_189)))) | (0xFD00L ^ ((func_31((((*l_1934) = 7L) , (safe_mul_func_int8_t_s_s((((((func_31((*g_89), p_7, l_1970[0][1][1], ((*l_1971) |= (p_6 , (*g_676))), l_1957) ^ p_7) && l_1965) < p_8) != l_1965) || p_6), (*g_676)))), p_8, l_1972, (*g_676), p_6) < 65533UL) >= 0x8E71C7588CE1B9C0LL)))) ^ 0x57D956EB4B523299LL);

                                            }
                    for (g_993.f0 = 0; (g_993.f0 <= 1); g_993.f0 += 1)
                    {
                        (*l_1934) = p_8;
                    }
                    for (l_1931 = 0; (l_1931 != 3); l_1931++)
                    {
                        (*g_1600) = l_1977;
                    }


                    for (g_1093.f0 = 17; (g_1093.f0 < 20); ++g_1093.f0)
                    {
                        (*l_1792) = l_1980[2][6];
                    }


                }
                else
                {
                    uint32_t l_1981[10] = {4294967295UL,0x2142B3E4L,0x2142B3E4L,4294967295UL,0x2142B3E4L,0x2142B3E4L,4294967295UL,0x2142B3E4L,0x2142B3E4L,4294967295UL};
                    int i;
                    (*l_1977) |= (l_1981[2] ^ l_1953);
                    for (p_7 = 14; (p_7 == 0); --p_7)
                    {
                        uint32_t l_2012[7] = {1UL,0x44F20BC3L,1UL,1UL,0x44F20BC3L,1UL,1UL};
                        int i;
                        (*l_1934) &= (0x1FE44025D8452B6ELL >= ((--(*l_1754)) | (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*g_951) &= 0UL), (l_1957 & l_1981[1]))), l_1990))));
                        (*l_1934) &= ((g_862 , (*g_676)) <= (safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((((((((safe_div_func_int8_t_s_s((*g_89), (-8L))) == ((((*g_1603) , ((safe_rshift_func_uint16_t_u_s(((*l_1945) ^= p_6), (safe_sub_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((void*)0 == l_2009[4][6][1]), ((safe_sub_func_uint64_t_u_u((p_7 != g_108.f0), 18446744073709551615UL)) & 0x736E5C7CL))), p_6)) && p_4), 0x20ECL)) != 0x31L) > 0xC9F051A5L) , 4294967295UL), 5L)))) | 0x862429CCL)) , p_6) & 4294967295UL)) > 0L) && l_2012[3]) == l_2013) == 0xF9L) != 0UL) || l_1953), l_1959)) && p_6), 0x4884AC07515614F1LL)), l_2014)));
                        if (l_2015)
                            continue;
                    }
                }



                return l_1990;



            }
            return p_7;



        }
        else
        {
            union U2 * const l_2020[10][7][3] = {{{&l_1913,(void*)0,&g_108},{&g_108,(void*)0,(void*)0},{(void*)0,&g_108,&l_1913},{&g_108,&g_944,&g_1948},{&g_1948,&g_108,&g_1948},{&g_944,&l_1913,&l_1913},{&g_944,&g_108,(void*)0}},{{&g_944,&g_108,&g_108},{&l_1913,&g_1948,&g_944},{&g_108,&g_108,&g_1948},{&l_1913,(void*)0,&g_944},{&g_1948,&g_944,&g_108},{&l_1913,&g_944,(void*)0},{&l_1913,(void*)0,&l_1913}},{{&g_1948,(void*)0,&g_1948},{(void*)0,(void*)0,&g_1948},{&g_944,(void*)0,&l_1913},{&l_1913,&l_1913,(void*)0},{&l_1913,&g_944,&g_108},{&g_1948,&g_108,&g_944},{&g_1948,&l_1913,&g_1948}},{{&g_944,&g_1948,&g_944},{&g_108,&g_108,&g_108},{&g_1948,(void*)0,(void*)0},{&g_944,&g_944,&l_1913},{&g_944,(void*)0,&g_1948},{&l_1913,&g_944,&g_1948},{&l_1913,&g_1948,&l_1913}},{{&g_108,&g_944,(void*)0},{&g_944,&g_1948,&g_108},{(void*)0,&g_944,&g_108},{(void*)0,&g_108,&g_944},{&g_1948,&l_1913,&g_108},{&l_1913,&g_1948,&g_108},{&g_944,&g_1948,&l_1913}},{{&g_1948,&g_1948,&g_944},{&g_1948,&g_1948,(void*)0},{(void*)0,&l_1913,(void*)0},{&l_1913,&l_1913,&g_944},{&g_108,(void*)0,&l_1913},{&g_944,&g_1948,&g_108},{&l_1913,&g_944,&g_108}},{{&g_1948,(void*)0,&g_944},{&g_108,&g_1948,&g_108},{&l_1913,&g_1948,&g_108},{&l_1913,&g_1948,&l_1913},{&g_108,&g_1948,&g_944},{&g_944,&g_1948,(void*)0},{&g_1948,&g_1948,(void*)0}},{{&g_944,&g_1948,&g_944},{&g_944,&g_944,&l_1913},{&g_944,(void*)0,&g_108},{(void*)0,&g_1948,&g_108},{&g_944,&g_944,&g_944},{&g_1948,(void*)0,&g_108},{&g_944,&l_1913,&g_108}},{{&l_1913,&g_1948,&l_1913},{&g_1948,&l_1913,&g_944},{(void*)0,&g_1948,(void*)0},{&l_1913,&g_1948,(void*)0},{&g_944,(void*)0,&g_944},{(void*)0,&g_108,&l_1913},{&l_1913,&g_944,&g_108}},{{&g_1948,&l_1913,&g_1948},{&l_1913,&l_1913,(void*)0},{&g_108,&l_1913,&g_1948},{(void*)0,&g_1948,&g_108},{&g_944,&l_1913,&l_1913},{&g_108,&g_944,(void*)0},{(void*)0,&l_1913,(void*)0}}};
            union U2 *l_2021 = &g_1948;
            int8_t *l_2024 = &g_789[1];
            int32_t l_2025 = 0L;
            int32_t l_2108 = 1L;
            int32_t l_2117 = 0x4EF45A34L;
            int32_t l_2118[1];
            int8_t l_2119 = 0x16L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2118[i] = 0x372B3687L;
            if (p_7)
            {
                for (g_1753 = 18; (g_1753 > (-17)); --g_1753)
                {
                    for (g_360 = 0; (g_360 > 56); g_360 = safe_add_func_int16_t_s_s(g_360, 9))
                    {
                        l_2021 = l_2020[8][0][1];
                    }
                    (*l_1977) = ((l_2025 = (safe_add_func_int32_t_s_s(func_59(l_2024), 9L))) , p_6);
                }

                ((l_2021 == &l_1913 || l_2021 == &g_1948 || l_2021 == 0 || l_2021 == &g_108 || l_2021 == &g_944) ? (void) (0) : __assert_fail ("l_2021 == &l_1913 || l_2021 == &g_1948 || l_2021 == 0 || l_2021 == &g_108 || l_2021 == &g_944", "4.c", 1641, __PRETTY_FUNCTION__));
                for (g_225.f0 = 0; (g_225.f0 > 49); g_225.f0 = safe_add_func_int16_t_s_s(g_225.f0, 4))
                {
                    int32_t *l_2029 = &l_1427;
                    int32_t **l_2030 = &l_1748;
                    int32_t **l_2031 = (void*)0;
                    int32_t **l_2032 = (void*)0;
                    int32_t **l_2033 = &g_871;
                    (*l_2033) = (g_2028 , ((*l_2030) = l_2029));

                    ((g_871 == &l_1427) ? (void) (0) : __assert_fail ("g_871 == &l_1427", "4.c", 1651, __PRETTY_FUNCTION__));
                    ((l_1748 == &l_1427) ? (void) (0) : __assert_fail ("l_1748 == &l_1427", "4.c", 1652, __PRETTY_FUNCTION__));
                }


            }
            else
            {
                uint32_t l_2051 = 18446744073709551614UL;
                int32_t l_2052 = 0x20D4DEE5L;
                int32_t l_2074[4][1] = {{0x437E3B00L},{0xCF82EC38L},{0x437E3B00L},{0xCF82EC38L}};
                int32_t *l_2091[8] = {&g_108.f1,&g_108.f1,&g_108.f1,&g_108.f1,&g_108.f1,&g_108.f1,&g_108.f1,&g_108.f1};
                uint32_t *l_2094[6][1][5] = {{{&l_1764[0],&l_1764[0],&g_1207,&l_1764[0],&l_1764[0]}},{{&l_2015,&l_1764[0],&l_2015,&l_2015,&l_1764[0]}},{{&l_1764[0],&l_2015,&l_2015,&l_1764[0],&l_2015}},{{&l_1764[0],&l_1764[0],&g_1207,&l_1764[0],&l_1764[0]}},{{&l_2015,&l_1764[0],&l_2015,&l_2015,&l_1764[0]}},{{&l_1764[0],&l_2015,&l_2015,&l_1764[0],&l_2015}}};
                uint64_t *l_2095 = &l_2014;
                int32_t *l_2103 = &g_348;
                int32_t **l_2104[9];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_2104[i] = &g_103[5][1][0];
                if (((*l_1934) = p_8))
                {
                    uint64_t *l_2040 = &l_2014;
                    int32_t l_2047 = 1L;
                    uint8_t *l_2050 = &g_637[7];
                    int32_t **l_2053 = &g_103[3][0][2];
                    (*l_2053) = ((l_2052 = (1UL >= (safe_mul_func_int8_t_s_s((*l_1934), ((*g_89) = (0xB2L == (l_2025 , (l_2051 ^= ((*l_2050) = func_31(p_6, (safe_mod_func_uint64_t_u_u(l_2025, func_31(((((((((**l_1834) ^= (((safe_add_func_uint64_t_u_u(((*l_2040) &= p_7), ((safe_mod_func_uint64_t_u_u(((p_7 , ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_1754) = ((*g_951) = ((void*)0 != &g_379[2][0][1]))), 0xFFD924C6L)), p_8)) != l_2047)) && p_7), p_4)) , p_8))) , g_674.f0) >= p_8)) != p_7) , (*g_676)) & l_2047) > (*g_416)) , p_4) || (*l_1977)), l_2048, &g_789[2], (*g_676), p_6))), &l_1941, l_2049, l_2025)))))))))) , &l_2052);


                }
                else
                {
                    const uint8_t l_2054[2][6][2] = {{{0UL,0UL},{1UL,0UL},{0UL,1UL},{0UL,0UL},{1UL,0UL},{0UL,1UL}},{{0UL,0UL},{1UL,0UL},{0UL,1UL},{0UL,0UL},{1UL,0UL},{0UL,1UL}}};
                    union U1 **l_2061 = &g_582;
                    int32_t l_2065 = 0x9A0FCC4CL;
                    uint8_t l_2069 = 0UL;
                    uint8_t *l_2070 = &l_1630;
                    uint8_t *l_2072 = (void*)0;
                    uint8_t *l_2073 = (void*)0;
                    const int32_t *l_2075 = &l_2074[2][0];
                    const int32_t *l_2076 = &l_1958;
                    int8_t l_2077 = (-8L);
                    int i, j, k;
                    if ((l_2054[1][5][1] >= (l_2074[2][0] &= (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(((((*g_676) = 0xCBL) <= (safe_mod_func_int32_t_s_s(((void*)0 != l_2061), func_31(g_2062, func_59(((safe_add_func_int64_t_s_s(func_31(l_2065, l_2051, &g_1592, ((*l_2070) = ((safe_mod_func_uint64_t_u_u((((((p_7 ^= (*l_1934)) , l_2068) == (void*)0) == 0x29711C838F960325LL) < 0xB8L), l_2069)) , 0x49L)), p_8), 0xB64796B0BF7E039DLL)) , (void*)0)), l_2024, l_2054[1][5][1], (*l_1934))))) >= l_2054[0][5][1]), l_2071)) , 65535UL), l_2052)))))
                    {
                        l_2076 = l_2075;

                        (((l_2076 >= &l_2074[0][0] && l_2076 <= &l_2074[3][0])) ? (void) (0) : __assert_fail ("(l_2076 >= &l_2074[0][0] && l_2076 <= &l_2074[3][0])", "4.c", 1697, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        int32_t *l_2078 = (void*)0;
                        int32_t *l_2079[7] = {&g_47[1][6],&g_47[1][6],&g_47[1][6],&g_47[1][6],&g_47[1][6],&g_47[1][6],&g_47[1][6]};
                        uint8_t l_2080 = 8UL;
                        uint32_t l_2084 = 0xE5CECDB4L;
                        int i;
                        --l_2080;
                        l_2084++;
                    }

                    ((l_2076 == &l_1958 || (l_2076 >= &l_2074[0][0] && l_2076 <= &l_2074[3][0])) ? (void) (0) : __assert_fail ("l_2076 == &l_1958 || (l_2076 >= &l_2074[0][0] && l_2076 <= &l_2074[3][0])", "4.c", 1710, __PRETTY_FUNCTION__));
                    if ((((*l_1745) |= (!(*l_2075))) == (*l_1934)))
                    {
                        l_2087 = l_2076;

                        ((l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0])) ? (void) (0) : __assert_fail ("l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0])", "4.c", 1715, __PRETTY_FUNCTION__));
                        (*l_1977) = ((void*)0 != l_2088[5][1][2]);
                    }
                    else
                    {
                        return p_8;



                    }

                    ((l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0])) ? (void) (0) : __assert_fail ("l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0])", "4.c", 1726, __PRETTY_FUNCTION__));
                    for (g_2062 = (-30); (g_2062 <= 16); g_2062 = safe_add_func_uint8_t_u_u(g_2062, 2))
                    {
                        return p_7;



                    }
                }


                ((l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0]) || (l_2087 >= &g_47[0][0] && l_2087 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("l_2087 == &l_1958 || (l_2087 >= &l_2074[0][0] && l_2087 <= &l_2074[3][0]) || (l_2087 >= &g_47[0][0] && l_2087 <= &g_47[1][6])", "4.c", 1737, __PRETTY_FUNCTION__));
                (*l_2103) = (((l_2025 = ((*g_676) ^ l_2051)) , ((safe_mod_func_uint64_t_u_u(((void*)0 != l_2094[1][0][4]), ((*l_2095)--))) , ((safe_mul_func_int16_t_s_s((*l_1977), 0x9DADL)) != ((*l_2024) ^= ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((*l_2095) = g_1181.f0))), ((p_6 > (1L && (*l_1934))) | 0x84D276C6L))) != p_8))))) & g_1660.f0);
                (*g_877) = &l_2074[2][0];


            }



            ((l_2021 == &l_1913 || l_2021 == &g_1948 || l_2021 == 0 || l_2021 == &g_108 || l_2021 == &g_944) ? (void) (0) : __assert_fail ("l_2021 == &l_1913 || l_2021 == &g_1948 || l_2021 == 0 || l_2021 == &g_108 || l_2021 == &g_944", "4.c", 1746, __PRETTY_FUNCTION__));
            if ((+(l_2025 = p_4)))
            {
                int32_t *l_2105 = &l_1430[2];
                int32_t *l_2106 = (void*)0;
                int32_t *l_2107[6][1][4] = {{{&g_47[0][0],&l_1958,&l_1430[0],&l_1426}},{{&l_1958,(void*)0,&l_2083[0][1],&g_47[0][0]}},{{&l_2083[1][3],&g_1753,&g_1753,&l_2083[1][3]}},{{&l_2083[1][3],&l_1426,&l_2083[0][1],&g_47[0][0]}},{{&l_1958,&l_2083[1][3],&l_1430[0],&l_2083[4][0]}},{{&g_47[0][0],&l_2083[3][2],&g_47[0][0],&l_2083[4][0]}}};
                int i, j, k;
                ++l_2110;
                for (g_1895 = 0; (g_1895 >= (-9)); g_1895 = safe_sub_func_uint32_t_u_u(g_1895, 9))
                {
                    int32_t l_2115[6][1] = {{1L},{0xE56F446BL},{1L},{0xE56F446BL},{1L},{0xE56F446BL}};
                    int32_t l_2116[5][1] = {{(-1L)},{9L},{(-1L)},{9L},{(-1L)}};
                    uint8_t l_2121 = 6UL;
                    int i, j;
                    l_2121++;
                    for (g_1092.f0 = 17; (g_1092.f0 < 12); g_1092.f0--)
                    {
                        uint8_t l_2126 = 0x8FL;
                        (*l_2105) = p_7;
                        (*l_2105) = ((*l_1934) = ((1UL == g_1207) > p_6));
                        ++l_2126;
                        (*l_1977) |= ((l_2126 && p_8) , p_4);
                    }
                }
                return p_8;




            }
            else
            {
                return p_6;




            }
        }
    }

    ((g_78 == &g_79 || g_78 == &g_726) ? (void) (0) : __assert_fail ("g_78 == &g_79 || g_78 == &g_726", "4.c", 1787, __PRETTY_FUNCTION__));
    ((l_1745 == &g_79 || l_1745 == &g_726) ? (void) (0) : __assert_fail ("l_1745 == &g_79 || l_1745 == &g_726", "4.c", 1788, __PRETTY_FUNCTION__));
lbl_2441:
    (*g_1600) = &l_1430[1];
    if ((&l_1941 != (((*g_951) = ((((*l_2136) &= ((((((**l_1792) , ((**g_929) <= ((*l_1834) != ((*l_2131) = &p_6)))) , ((l_2133 = &g_907) != &l_1800)) | (safe_mod_func_int64_t_s_s(p_6, g_379[2][1][7]))) & 1UL) ^ (*g_676))) , 0xB42DL) || g_1658.f0)) , (void*)0)))
    {
        int32_t l_2156 = 0x70A4D3A0L;
        int32_t l_2181[3];
        int32_t l_2183 = (-5L);
        union U2 l_2193 = {4294967293UL};
        int8_t *l_2199 = &g_789[0];
        uint8_t **l_2237 = (void*)0;
        uint16_t l_2240 = 0UL;
        uint8_t l_2248[10][3] = {{255UL,255UL,255UL},{0xD7L,4UL,0xD7L},{255UL,255UL,255UL},{0xD7L,4UL,0xD7L},{255UL,255UL,255UL},{0xD7L,4UL,0xD7L},{255UL,255UL,255UL},{0xD7L,4UL,0xD7L},{255UL,255UL,255UL},{0xD7L,4UL,0xD7L}};
        const uint64_t l_2263[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int64_t l_2290 = 2L;
        int32_t l_2307 = 0x0E7D8EAAL;
        const uint32_t l_2310 = 18446744073709551611UL;
        int32_t l_2311 = 0x3ADF689AL;
        int32_t *l_2312 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2181[i] = 0x7E439452L;
lbl_2327:
        if (p_4)
        {
            int32_t **l_2138 = &g_103[3][0][2];
            uint32_t *l_2147 = &l_1764[5];
            int32_t l_2159 = 0x22CA546AL;
            (*l_2138) = l_2137;
            for (l_1428 = 0; (l_1428 < 18); l_1428++)
            {
                for (l_1432 = 0; (l_1432 == 10); l_1432++)
                {
                    for (p_4 = 0; (p_4 != 57); p_4 = safe_add_func_uint32_t_u_u(p_4, 1))
                    {
                        return p_8;





                    }
                }
            }
            for (l_1432 = 5; (l_1432 == (-27)); l_1432 = safe_sub_func_int32_t_s_s(l_1432, 1))
            {
                int32_t l_2155[6][5] = {{0x6049389EL,0xAA31158DL,0x6049389EL,(-3L),(-3L)},{0x6049389EL,0xAA31158DL,0x6049389EL,(-3L),(-3L)},{0x6049389EL,0xAA31158DL,0x6049389EL,(-3L),(-3L)},{0x6049389EL,0xAA31158DL,0x6049389EL,(-3L),(-3L)},{0x6049389EL,0xAA31158DL,0x6049389EL,(-3L),2L},{0xAA31158DL,(-3L),0xAA31158DL,2L,2L}};
                int32_t *l_2157 = &l_1430[2];
                int32_t *l_2158 = &l_1430[0];
                int32_t *l_2160 = (void*)0;
                int32_t *l_2161[1][8];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_2161[i][j] = &l_1428;
                }
                if (((-1L) > (l_2147 != &p_4)))
                {
                    int64_t l_2148 = (-8L);
                    int64_t *l_2153 = &g_793.f2;
                    int64_t *l_2154[7][8] = {{&g_42[0][8],(void*)0,&l_1433,&g_209,&l_1433,(void*)0,&g_42[0][8],&g_209},{(void*)0,(void*)0,(void*)0,(void*)0,&g_618[4],&g_209,&g_209,&g_618[4]},{(void*)0,&g_42[0][8],&g_42[0][8],(void*)0,&g_618[4],(void*)0,&g_209,&g_209},{(void*)0,&g_379[1][0][6],&g_42[0][7],&g_618[4],&l_1433,&g_618[4],&g_42[0][7],&g_379[1][0][6]},{&g_42[0][8],&g_379[1][0][6],&g_209,&g_42[0][7],(void*)0,(void*)0,(void*)0,(void*)0},{&g_209,&g_42[0][8],(void*)0,(void*)0,&g_42[0][8],&g_209,(void*)0,&l_1433},{&g_209,(void*)0,&g_209,(void*)0,&g_42[0][7],(void*)0,&g_42[0][7],(void*)0}};
                    int i, j;
                    (*l_2137) = ((p_6 < (g_379[2][2][9] |= ((*l_2153) = ((l_2148 & ((safe_mod_func_int8_t_s_s(func_59((*g_929)), p_7)) != 254UL)) >= (p_4 , (safe_unary_minus_func_int16_t_s(func_31(((l_2152[1] = (0xA6E6L & l_2148)) && p_8), g_1709.f0, (*g_929), p_7, l_2148)))))))) != l_2155[4][2]);

                                    }
                else
                {
                    (*l_2137) = (*g_1327);
                }
                ++g_2162[7][8][0];
            }
        }
        else
        {
            union U1 ***l_2167 = &g_907;
            int32_t l_2172 = 0x2291D56EL;
            union U1 ****l_2175 = &l_2133;
            uint16_t *l_2176 = &g_1779[8][0];
            int32_t *l_2182 = &g_545;
            int8_t *l_2197 = &g_726;
            const uint32_t * const *l_2207 = &g_416;
            (*l_2137) = (safe_mul_func_uint16_t_u_u(p_6, (l_2183 &= (((*l_2182) = (((l_2181[2] = (((&l_1800 != l_2167) != 0x06AF6D36L) & ((**g_189) = ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((~(l_2172 , ((safe_sub_func_uint16_t_u_u((&g_907 == ((*l_2175) = &g_907)), (l_2156 && (((*l_2176)++) != ((safe_mul_func_uint16_t_u_u((func_59(((*g_929) = (void*)0)) ^ p_7), l_2172)) & l_2172))))) != l_2172))), p_8)), 0x97L)) & 255UL)))) > 0x9503L) , 0x7BA4EC9AL)) , 0x3678L))));
            for (g_79 = (-5); (g_79 != 9); g_79 = safe_add_func_uint32_t_u_u(g_79, 9))
            {
                const uint8_t l_2194 = 250UL;
                uint16_t l_2198[8] = {0x60C0L,0x9372L,0x60C0L,0x60C0L,0x9372L,0x60C0L,0x60C0L,0x9372L};
                int32_t l_2209 = 0x9640CB94L;
                int i;
                if ((safe_add_func_uint64_t_u_u((((--(*l_2176)) , (p_4 > g_583.f0)) | (((g_2192 , l_2183) >= (l_2193 , (l_2172 > ((g_1592 = func_31((l_2194 > (safe_mod_func_uint64_t_u_u((p_8 == func_31((*g_89), p_7, (*g_929), p_8, p_6)), l_2172))), l_2194, l_2197, l_2194, l_2198[1])) || l_2193.f0)))) == l_2172)), p_4)))
                {
                    l_2172 ^= p_8;
                    return l_2172;





                }
                else
                {
                    int32_t l_2204 = 0x7CC505A7L;
                    int32_t l_2208[2];
                    int32_t *l_2211 = &l_1429;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2208[i] = 0xFD6A6394L;
                    for (l_2015 = 0; (l_2015 <= 4); l_2015 += 1)
                    {
                        (*l_2137) |= 0x0272A5CCL;
                    }
                    (*l_2137) ^= func_59(((*g_929) = l_2199));

                    (((g_78 >= &g_789[0] && g_78 <= &g_789[2])) ? (void) (0) : __assert_fail ("(g_78 >= &g_789[0] && g_78 <= &g_789[2])", "4.c", 1901, __PRETTY_FUNCTION__));
                    (*l_2211) = (safe_rshift_func_uint16_t_u_u((l_2181[2] & ((((p_6 > ((*l_2137) &= 0xC02C45C3L)) <= (l_2204 == (l_2209 = (+((*g_951) = (p_6 && (((l_2208[1] &= ((((((((l_2204 , func_12((1UL > func_59((*g_929))), (**g_415))) , &l_2172) != &l_2172) , &l_1754) != l_2207) | (*g_89)) != p_8) , (-1L))) == 3UL) != 0x10A5L))))))) , g_2210) , 0xB991L)), 14));
                }

                (((g_78 >= &g_789[0] && g_78 <= &g_789[2])) ? (void) (0) : __assert_fail ("(g_78 >= &g_789[0] && g_78 <= &g_789[2])", "4.c", 1905, __PRETTY_FUNCTION__));
                return p_4;





            }
            l_2213 = &l_2183;

            ((l_2213 == &l_2183) ? (void) (0) : __assert_fail ("l_2213 == &l_2183", "4.c", 1915, __PRETTY_FUNCTION__));
        }
        for (g_1660.f0 = (-13); (g_1660.f0 > 24); g_1660.f0++)
        {
            union U2 l_2224[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
            int32_t l_2231[8] = {0xDF8150E0L,(-1L),0xDF8150E0L,(-1L),0xDF8150E0L,(-1L),0xDF8150E0L,(-1L)};
            int i;
            if (p_8)
                break;
            for (l_1427 = 0; (l_1427 == (-18)); l_1427--)
            {
                union U2 **l_2218 = &l_1405;
                int32_t * const l_2219[9][5] = {{&g_47[0][0],&l_2181[2],&l_1426,&l_1429,&l_1429},{&l_1429,&g_47[0][0],&l_1429,&g_348,&l_2181[2]},{&l_1429,&l_1429,&l_2181[2],&l_1426,&g_47[0][0]},{(void*)0,&g_348,&g_348,&g_348,&g_348},{&g_348,&g_47[0][0],(void*)0,&g_47[0][0],&l_2181[2]},{&l_1429,&g_47[0][0],&g_47[0][0],&l_1429,(void*)0},{&l_2183,&g_348,&g_348,&l_2183,&l_1429},{&l_1429,&g_348,&l_2181[2],&l_1429,&l_1429},{&g_348,&l_1429,(void*)0,(void*)0,(void*)0}};
                int32_t **l_2221 = &g_103[3][0][2];
                uint8_t **l_2236 = &l_1760;
                int8_t *l_2239[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2239[i] = &g_726;
                (*l_2218) = &l_2193;

                ((l_1405 == &l_2193) ? (void) (0) : __assert_fail ("l_1405 == &l_2193", "4.c", 1936, __PRETTY_FUNCTION__));
                (*l_2221) = l_2219[4][2];
                if (l_2193.f0)
                    break;
                (*l_2137) &= (safe_mul_func_uint16_t_u_u(((func_15(&l_1941, l_2224[0], (((6UL <= func_31((g_1592 = ((*l_2199) = ((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((0x70A56B3DC4FCE251LL == (((((safe_add_func_uint8_t_u_u((++(*g_676)), (safe_div_func_uint32_t_u_u((((l_2236 == (p_7 , l_2237)) , (void*)0) == &g_676), (*g_1327))))) >= p_8) & 0xDAD76E2CL) , g_2238) , 0xBE8D2BFB089C43CBLL)), (*g_89))) == g_944.f0), 18446744073709551615UL)) & 255UL))), p_7, (*g_929), p_8, l_2231[7])) == 0x0AL) , l_2224[3])) , l_2240) || p_8), l_2183));
            }
        }
        if ((6UL ^ (safe_mul_func_int8_t_s_s(((*l_2213) = (p_7 = l_2243)), func_31((l_2240 , ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_2248[8][2], 2)), ((*l_2137) &= 0x73A7C355L))) || (((safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s(l_2156, 0x9DL)))) >= (l_2248[0][1] != (p_4 & l_2240))) , l_2252))), g_1590[0][3][0], &l_1941, p_6, p_6)))))
        {
            return p_4;





        }
        else
        {
            int8_t l_2264[10] = {0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL};
            uint8_t ** const *l_2266 = &g_1547[1][0][0];
            int32_t *l_2271[4] = {&l_2183,&l_2183,&l_2183,&l_2183};
            int8_t l_2315 = (-6L);
            int i;
            for (l_2156 = 0; (l_2156 > 13); ++l_2156)
            {
                union U2 l_2265[2] = {{1UL},{1UL}};
                int32_t *l_2308 = (void*)0;
                int32_t *l_2309 = &l_2193.f1;
                int i;
            }
            for (g_545 = 0; (g_545 <= 2); g_545 += 1)
            {
                int32_t l_2316 = 1L;
                int32_t l_2317 = (-2L);
                int32_t l_2333 = 0xB8B73BD2L;
                int32_t l_2335 = 3L;
                int32_t l_2336 = 0x15FCD0FCL;
                int32_t l_2338 = (-1L);
                uint16_t l_2343 = 65532UL;
                int32_t *l_2347 = &l_1429;
                for (g_348 = 2; (g_348 >= 0); g_348 -= 1)
                {
                    uint32_t l_2318 = 0x7AA8AF20L;
                    int32_t l_2321 = 0L;
                    int i, j;
                    ++l_2318;
                    l_2321 = g_1779[g_545][g_348];
                    for (g_153 = 0; (g_153 <= 1); g_153 += 1)
                    {
                        (*l_2213) = func_31(((safe_rshift_func_int16_t_s_s(p_6, 7)) & 1UL), (p_8 && (g_1236.f0 , (safe_div_func_int16_t_s_s(g_1779[g_545][g_348], p_8)))), &l_2264[5], p_7, p_4);
                        return p_7;





                    }
                }
                for (g_225.f0 = 0; (g_225.f0 <= 1); g_225.f0 += 1)
                {
                    int32_t l_2326 = 0x75CA6D6FL;
                    int32_t l_2330 = 0x822E3465L;
                    int32_t l_2331 = 0L;
                    int32_t l_2334 = 0L;
                    int32_t l_2340 = (-4L);
                    int32_t l_2342 = 0x26CC2BA0L;
                    int i, j;
                    if (g_1779[(g_545 + 3)][g_225.f0])
                        break;
                    for (l_2316 = 1; (l_2316 >= 0); l_2316 -= 1)
                    {
                        int i, j, k;
                        g_103[(g_225.f0 + 4)][g_225.f0][l_2316] = &l_2317;


                        l_2326 ^= (l_1427 = (((*l_2213) = g_1779[(g_545 + 3)][g_225.f0]) & ((*l_2137) = p_6)));
                        return p_7;





                    }
                    for (g_155 = 0; (g_155 <= 2); g_155 += 1)
                    {
                        int32_t l_2328 = 2L;
                        int32_t l_2329 = 5L;
                        int32_t l_2337 = 2L;
                        int32_t l_2339 = 0L;
                        int32_t l_2341 = 1L;
                        if (g_37)
                            goto lbl_2327;
                        ++l_2343;
                        (*l_2213) = (safe_unary_minus_func_int8_t_s(l_2328));
                    }
                }
                l_2312 = &l_2338;

                ((l_2312 == &l_2338) ? (void) (0) : __assert_fail ("l_2312 == &l_2338", "4.c", 2034, __PRETTY_FUNCTION__));
                for (l_2332 = 0; (l_2332 <= 2); l_2332 += 1)
                {
                    (*l_2213) ^= 7L;
                    for (l_2120 = 2; (l_2120 >= 0); l_2120 -= 1)
                    {
                        union U2 * const *l_2349[9] = {&l_1405,&l_1405,&l_1405,&l_1405,&l_1405,&l_1405,&l_1405,&l_1405,&l_1405};
                        int i;
                        (*g_2348) = (l_2347 = l_2271[1]);

                        ((g_871 == 0 || g_871 == &l_2183) ? (void) (0) : __assert_fail ("g_871 == 0 || g_871 == &l_2183", "4.c", 2044, __PRETTY_FUNCTION__));
                        ((l_2347 == 0 || l_2347 == &l_2183) ? (void) (0) : __assert_fail ("l_2347 == 0 || l_2347 == &l_2183", "4.c", 2045, __PRETTY_FUNCTION__));
                        (*g_2350) = l_2349[2];

                        ((g_2351 == &l_1456 || g_2351 == 0 || g_2351 == &l_1405) ? (void) (0) : __assert_fail ("g_2351 == &l_1456 || g_2351 == 0 || g_2351 == &l_1405", "4.c", 2048, __PRETTY_FUNCTION__));
                    }
                }

                ((l_2347 == 0 || l_2347 == &l_2183 || l_2347 == &l_1429) ? (void) (0) : __assert_fail ("l_2347 == 0 || l_2347 == &l_2183 || l_2347 == &l_1429", "4.c", 2052, __PRETTY_FUNCTION__));
            }
        }
    }
    else
    {
        uint32_t l_2366 = 0xC8A2D908L;
        uint32_t l_2376 = 4294967295UL;
        union U2 *l_2395 = &g_1948;
        int64_t *l_2405 = (void*)0;
        int32_t l_2434 = (-6L);
        union U0 *l_2447 = &g_1056[3];
        int32_t l_2451 = 6L;
        int32_t l_2459 = (-10L);
        uint32_t l_2460 = 0x3B5CD870L;
        int32_t l_2474 = 0x90F7A298L;
        int32_t l_2475[2][10][7] = {{{(-1L),0x805870A0L,1L,8L,8L,1L,0x805870A0L},{(-1L),0xB2AA8EF4L,(-1L),8L,0xCDF99276L,(-1L),0x805870A0L},{1L,0x805870A0L,(-1L),0xCDF99276L,8L,(-1L),0xB2AA8EF4L},{(-1L),0x805870A0L,1L,8L,8L,1L,0x805870A0L},{(-1L),0xB2AA8EF4L,(-1L),8L,0xCDF99276L,(-1L),0x805870A0L},{1L,0x805870A0L,(-1L),(-1L),0xB914731AL,0x4A06E641L,0xFA4681D5L},{8L,(-1L),3L,0xB914731AL,0xB914731AL,3L,(-1L)},{8L,0xFA4681D5L,0x4A06E641L,0xB914731AL,(-1L),0x4A06E641L,(-1L)},{0xCDF99276L,(-1L),0x4A06E641L,(-1L),0xB914731AL,0x4A06E641L,0xFA4681D5L},{8L,(-1L),3L,0xB914731AL,0xB914731AL,3L,(-1L)}},{{8L,0xFA4681D5L,0x4A06E641L,0xB914731AL,(-1L),0x4A06E641L,(-1L)},{0xCDF99276L,(-1L),0x4A06E641L,(-1L),0xB914731AL,0x4A06E641L,0xFA4681D5L},{8L,(-1L),3L,0xB914731AL,0xB914731AL,3L,(-1L)},{8L,0xFA4681D5L,0x4A06E641L,0xB914731AL,(-1L),0x4A06E641L,(-1L)},{0xCDF99276L,(-1L),0x4A06E641L,(-1L),0xB914731AL,0x4A06E641L,0xFA4681D5L},{8L,(-1L),3L,0xB914731AL,0xB914731AL,3L,(-1L)},{8L,0xFA4681D5L,0x4A06E641L,0xB914731AL,(-1L),0x4A06E641L,(-1L)},{0xCDF99276L,(-1L),0x4A06E641L,(-1L),0xB914731AL,0x4A06E641L,0xFA4681D5L},{8L,(-1L),3L,0xB914731AL,0xB914731AL,3L,(-1L)},{0L,3L,0xD9F98778L,1L,0xFBA063C7L,0xD9F98778L,0x4A06E641L}}};
        uint64_t l_2524 = 0x3B8FEF30C96FA41BLL;
        uint16_t ***l_2538 = (void*)0;
        int8_t *l_2544 = &l_1941;
        int32_t l_2557 = 0x5332AAEFL;
        int16_t ***l_2590 = &g_257;
        int64_t l_2606 = 0L;
        uint8_t l_2629 = 0xFBL;
        int32_t l_2645[10] = {1L,0x9DF87011L,0x721156F5L,0x721156F5L,0x9DF87011L,1L,0x9DF87011L,0x721156F5L,0x721156F5L,0x9DF87011L};
        int i, j, k;
        for (l_2268 = 0; (l_2268 >= (-19)); --l_2268)
        {
            int64_t l_2372 = (-1L);
            int32_t l_2375 = 0xDB0FF6EAL;
            int32_t *l_2385 = &g_47[0][0];
            union U0 *l_2397 = &g_2238;
            union U2 l_2402 = {0x7389DDB3L};
            int32_t l_2406 = 0x606FBBBFL;
            uint16_t *l_2414 = &g_140[6];
            int32_t l_2472 = 0x84E354DEL;
            int32_t l_2473[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2473[i][j] = (-4L);
            }
            for (g_1113 = 21; (g_1113 >= 10); g_1113--)
            {
                union U0 *l_2369 = &g_2210;
                int32_t l_2389 = 0x948EF61CL;
                int8_t *l_2393 = &g_726;
                int64_t l_2394 = 0xD07B5820ADD79AAALL;
                union U2 **l_2396 = &l_1405;
                if (p_8)
                {
                    for (g_191 = (-29); (g_191 != 26); ++g_191)
                    {
                        int32_t *l_2359 = (void*)0;
                        int32_t *l_2360 = &g_47[0][3];
                        int32_t *l_2361 = &g_47[0][0];
                        int32_t *l_2362 = (void*)0;
                        int32_t *l_2363 = (void*)0;
                        int32_t *l_2364 = &l_1430[2];
                        int32_t *l_2365[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2365[i] = &l_1427;
                        (*l_2213) = p_6;
                        l_2366--;
                    }
                    (*l_1792) = l_2369;
                }
                else
                {
                    int32_t l_2370 = 0x86C0C368L;
                    int32_t *l_2371 = &l_1427;
                    int32_t *l_2373 = &l_1430[2];
                    int32_t *l_2374[7] = {&l_1426,&l_1426,&l_1429,&l_1426,&l_1426,&l_1429,&l_1426};
                    int i;
                    --l_2376;
                }
                for (g_726 = (-12); (g_726 < (-24)); g_726--)
                {
                    int32_t *l_2383 = &l_2375;
                    int8_t *l_2392 = &g_79;
                    for (g_944.f1 = 0; (g_944.f1 > (-30)); g_944.f1 = safe_sub_func_int8_t_s_s(g_944.f1, 1))
                    {
                        int32_t **l_2384[9] = {&g_103[0][0][1],&l_1748,&l_1748,&g_103[0][0][1],&l_1748,&l_1748,&g_103[0][0][1],&l_1748,&l_1748};
                        int i;
                        l_2385 = l_2383;

                        ((l_2385 == &l_2375) ? (void) (0) : __assert_fail ("l_2385 == &l_2375", "4.c", 2140, __PRETTY_FUNCTION__));
                        (*l_2137) = (g_2386 , (safe_sub_func_int32_t_s_s(((l_2389 & (*l_2383)) , (safe_add_func_int8_t_s_s(func_15(l_2393, (*g_1367), (*l_1405)), g_379[2][2][8]))), l_2376)));
                    }

                                        if (l_2394)
                        continue;
                    return p_8;



                }
                (*l_2396) = l_2395;

                ((l_1405 == &g_1948) ? (void) (0) : __assert_fail ("l_1405 == &g_1948", "4.c", 2153, __PRETTY_FUNCTION__));
                (*l_1792) = l_2397;
            }

            ((l_2385 == &l_2375 || (l_2385 >= &g_47[0][0] && l_2385 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("l_2385 == &l_2375 || (l_2385 >= &g_47[0][0] && l_2385 <= &g_47[1][6])", "4.c", 2157, __PRETTY_FUNCTION__));
            if (p_8)
                break;
            (*l_2213) &= (safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(func_15((*g_929), l_2402, (**g_1366)), (l_2366 , 1UL))) <= (safe_lshift_func_int16_t_s_u(((l_2405 != (void*)0) > func_31(l_2406, p_4, &g_1113, p_7, l_2407)), l_2372))) <= p_4), l_2376));
            if ((((safe_div_func_int64_t_s_s(g_637[5], ((safe_rshift_func_uint16_t_u_s((*l_2385), (0x07571FBF9C3EFF65LL < (((0xB8CEL >= ((*l_2414) = (safe_mul_func_int16_t_s_s((!(*l_2385)), (+p_4))))) <= (&g_1846[0][0][0] == &g_1846[0][0][0])) , 0xC9112634DB62FB9CLL)))) ^ 0x51A0FD12L))) , p_6) > p_7))
            {
                int64_t l_2427 = 0L;
                int32_t l_2430 = 0xEDDE1571L;
                int32_t l_2431 = 0xEA04CC7DL;
                int32_t l_2432 = 0L;
                int32_t *l_2450 = &g_47[0][0];
                int32_t *l_2452 = &l_2430;
                int32_t *l_2453 = &l_2432;
                int32_t *l_2454 = &g_47[1][6];
                int32_t *l_2455 = (void*)0;
                int32_t *l_2456 = &l_1429;
                int32_t *l_2457 = &l_1430[2];
                int32_t *l_2458[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*g_2415) = &p_5;

                ((g_2416 == &p_5) ? (void) (0) : __assert_fail ("g_2416 == &p_5", "4.c", 2178, __PRETTY_FUNCTION__));
                for (l_2375 = 0; (l_2375 >= (-5)); l_2375 = safe_sub_func_uint64_t_u_u(l_2375, 2))
                {
                    int32_t l_2428 = 0x1165EBAFL;
                    int32_t l_2429 = 9L;
                    int32_t l_2433 = 1L;
                    for (l_1429 = 2; (l_1429 >= 0); l_1429 -= 1)
                    {
                        int32_t l_2420[3][10] = {{0x47D710FDL,6L,0xAE3235F8L,0x5D694F99L,6L,0x5D694F99L,0xAE3235F8L,6L,0x47D710FDL,0x47D710FDL},{0xEF038EBDL,(-1L),0x551978D0L,6L,6L,0x551978D0L,(-1L),0xEF038EBDL,0x551978D0L,0xEF038EBDL},{6L,0xAE3235F8L,0x5D694F99L,6L,0x5D694F99L,0xAE3235F8L,6L,0x47D710FDL,0x47D710FDL,6L}};
                        int32_t l_2421 = 0L;
                        int32_t *l_2422 = &l_2421;
                        int32_t *l_2423 = (void*)0;
                        int32_t *l_2424 = &g_47[0][1];
                        int32_t *l_2425 = (void*)0;
                        int32_t *l_2426[1][4][2];
                        uint32_t l_2435 = 0x775F8C18L;
                        int32_t **l_2438 = &l_2426[0][3][0];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_2426[i][j][k] = (void*)0;
                            }
                        }
                        l_2435--;
                        (*l_2438) = &l_2432;


                        if (p_8)
                            break;
                    }
                    if ((*l_2213))
                        continue;
                    for (l_2406 = 0; (l_2406 >= (-29)); --l_2406)
                    {
                        union U2 l_2446 = {4294967287UL};
                        if (l_2268)
                            goto lbl_2441;
                        (*l_2137) = ((*l_2213) = p_6);
                        g_11 &= ((*l_2213) &= (l_2431 &= ((*l_2137) = (safe_rshift_func_uint8_t_u_s(func_15(func_64(l_2429, &l_2430, &l_2432, (safe_mul_func_uint16_t_u_u(0xF134L, p_4))), l_2446, ((*l_2395) = (*g_1603))), 2)))));
                    }
                    return l_2434;



                }
                (*l_2213) = func_31((*l_2385), (((*l_1792) = l_2447) != (l_2448 = l_2447)), (*g_929), p_8, l_2366);

                (((l_2448 >= &g_1056[0] && l_2448 <= &g_1056[5])) ? (void) (0) : __assert_fail ("(l_2448 >= &g_1056[0] && l_2448 <= &g_1056[5])", "4.c", 2228, __PRETTY_FUNCTION__));
                ++l_2460;
            }
            else
            {
                int32_t *l_2463 = (void*)0;
                int32_t *l_2466 = &l_2375;
                int32_t *l_2467 = &l_2459;
                int32_t *l_2468 = &l_1426;
                int32_t *l_2469 = (void*)0;
                int32_t *l_2470 = &g_1753;
                int32_t *l_2471[7][4] = {{&l_1427,(void*)0,&l_1427,&l_1427},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1427,&l_1427,(void*)0},{&l_1427,(void*)0,&l_1427,&l_1427},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1427,&l_1427,(void*)0},{&l_1427,(void*)0,&l_1427,&l_1427}};
                uint64_t l_2476 = 1UL;
                int i, j;
                (*g_2465) = l_2463;
                l_2476++;
            }
        }
        if ((0xEFF0L & (l_2474 <= p_8)))
        {
            uint64_t ***l_2489 = &g_2485;
            uint64_t ****l_2488[10];
            union U1 ***l_2491 = &g_907;
            int16_t * const *l_2493 = &l_2132;
            int16_t * const **l_2492[8];
            const int32_t l_2500[8][4] = {{0x6D6FEA29L,(-5L),0xC5B742BDL,0xC7BECFFCL},{0xC5B742BDL,0xC7BECFFCL,0xC7BECFFCL,0xC5B742BDL},{0x6D6FEA29L,0xC7BECFFCL,1L,0xC7BECFFCL},{0xC7BECFFCL,(-5L),1L,1L},{0x6D6FEA29L,0x6D6FEA29L,0xC7BECFFCL,1L},{0xC5B742BDL,(-5L),0xC5B742BDL,0xC7BECFFCL},{0xC5B742BDL,0xC7BECFFCL,0xC7BECFFCL,0xC5B742BDL},{0x6D6FEA29L,0xC7BECFFCL,1L,0xC7BECFFCL}};
            int32_t l_2509 = 4L;
            int32_t l_2511[3][6][9] = {{{0x3F205C8FL,0xC6D4A9DBL,0xB9367CF5L,(-1L),(-2L),(-2L),(-1L),0xB9367CF5L,0xC6D4A9DBL},{0x92CDE73FL,0xB9367CF5L,0x3F205C8FL,(-9L),0xF0291D50L,(-1L),(-1L),0xF0291D50L,(-9L)},{0x92CDE73FL,0L,0x92CDE73FL,(-1L),(-1L),0x3F205C8FL,2L,2L,0x3F205C8FL},{0x3F205C8FL,0xB9367CF5L,0x92CDE73FL,0xB9367CF5L,0x3F205C8FL,(-9L),0xF0291D50L,(-1L),(-1L)},{0xB9367CF5L,0xC6D4A9DBL,0x3F205C8FL,(-1L),0x3F205C8FL,0xC6D4A9DBL,0xB9367CF5L,(-1L),(-2L)},{2L,(-2L),0xB9367CF5L,(-9L),(-1L),(-9L),0xB9367CF5L,(-2L),2L}},{{0xC6D4A9DBL,(-9L),2L,(-1L),0xF0291D50L,0x3F205C8FL,0xF0291D50L,(-1L),2L},{0xF0291D50L,(-9L),0x92CDE73FL,0x3F205C8FL,0L,0xC6D4A9DBL,(-2L),0xC6D4A9DBL,0L},{0x92CDE73FL,(-9L),(-9L),0x92CDE73FL,0x3F205C8FL,0L,0xC6D4A9DBL,(-2L),0xC6D4A9DBL},{(-2L),2L,0x92CDE73FL,0x92CDE73FL,2L,(-2L),0xB9367CF5L,(-9L),(-1L)},{0xF0291D50L,0L,(-2L),0x3F205C8FL,0x3F205C8FL,(-2L),0L,0xF0291D50L,2L},{(-1L),0x92CDE73FL,0xF0291D50L,0xB9367CF5L,0L,0L,0xB9367CF5L,0xF0291D50L,0x92CDE73FL}},{{0x3F205C8FL,0xF0291D50L,(-1L),2L,(-9L),0xC6D4A9DBL,0xC6D4A9DBL,(-9L),2L},{0x3F205C8FL,(-1L),0x3F205C8FL,0xC6D4A9DBL,0xB9367CF5L,(-1L),(-2L),(-2L),(-1L)},{(-1L),0xF0291D50L,0x3F205C8FL,0xF0291D50L,(-1L),2L,(-9L),0xC6D4A9DBL,0xC6D4A9DBL},{0xF0291D50L,0x92CDE73FL,(-1L),0xC6D4A9DBL,(-1L),0x92CDE73FL,0xF0291D50L,0xB9367CF5L,0L},{(-2L),0L,0xF0291D50L,2L,0xB9367CF5L,2L,0xF0291D50L,0L,(-2L)},{0x92CDE73FL,2L,(-2L),0xB9367CF5L,(-9L),(-1L),(-1L),(-2L),0x92CDE73FL}}};
            uint8_t l_2512 = 0x3DL;
            uint16_t ***l_2535 = &g_1009;
            uint16_t ***l_2537[1];
            uint16_t ****l_2536 = &l_2537[0];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_2488[i] = &l_2489;
            for (i = 0; i < 8; i++)
                l_2492[i] = &l_2493;
            for (i = 0; i < 1; i++)
                l_2537[i] = &g_1009;
            (*l_2213) |= p_4;
            if ((((safe_add_func_uint64_t_u_u((&l_1800 != (func_12((*l_2213), func_59(&l_1941)) , ((g_2481 != (g_2490 = (l_2487[2] = g_2484))) , ((**g_189) , l_2491)))), p_8)) , l_2492[4]) == &l_2493))
            {
                uint32_t l_2504 = 0x9694255AL;
                int32_t *l_2507 = (void*)0;
                (*l_2213) &= (safe_mul_func_uint8_t_u_u(1UL, (&g_2485 != (((safe_lshift_func_int16_t_s_u(((**l_1834) = ((*l_2447) , ((((l_2366 | l_2475[0][4][1]) == ((p_8 == (safe_add_func_uint16_t_u_u(p_6, 6UL))) || ((*l_2132) = (*l_2137)))) ^ p_7) >= 5UL))), p_8)) | l_2500[2][2]) , (void*)0))));
                for (g_1658.f0 = 29; (g_1658.f0 != 18); g_1658.f0 = safe_sub_func_uint8_t_u_u(g_1658.f0, 6))
                {
                    int32_t *l_2503[5] = {&l_2475[1][3][3],&l_2475[1][3][3],&l_2475[1][3][3],&l_2475[1][3][3],&l_2475[1][3][3]};
                    int i;
                    l_2504++;
                    (*l_2137) = p_8;
                    (*g_2508) = l_2507;
                }
            }
            else
            {
                int32_t *l_2510[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_2510[i] = &g_1753;
                --l_2512;
                l_2515[0]++;
                if ((l_2451 , p_6))
                {
                    int32_t l_2520 = 1L;
                    union U2 **l_2527[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2527[i][j] = &l_1456;
                    }
                    for (g_1592 = 5; (g_1592 > 11); ++g_1592)
                    {
                        uint16_t l_2521 = 0xD267L;
                        l_2521--;
                        return p_8;



                    }
                    l_2524--;
                    (*g_1602) = (void*)0;

                    ((g_1603 == 0) ? (void) (0) : __assert_fail ("g_1603 == 0", "4.c", 2312, __PRETTY_FUNCTION__));
                    for (l_1427 = 0; (l_1427 != (-20)); --l_1427)
                    {
                        g_2530 = &l_2500[0][1];

                        (((g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3])) ? (void) (0) : __assert_fail ("(g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3])", "4.c", 2317, __PRETTY_FUNCTION__));
                        (*l_2137) &= (*l_2213);
                    }

                    (((g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753) ? (void) (0) : __assert_fail ("(g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753", "4.c", 2321, __PRETTY_FUNCTION__));
                }
                else
                {
                    int32_t * const l_2531 = &l_2459;
                    (*g_2532) = l_2531;


                    return p_6;



                }

                ((g_1603 == 0) ? (void) (0) : __assert_fail ("g_1603 == 0", "4.c", 2335, __PRETTY_FUNCTION__));
                (((g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753) ? (void) (0) : __assert_fail ("(g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753", "4.c", 2336, __PRETTY_FUNCTION__));
            }

            ((g_1603 == 0 || g_1603 == &g_108) ? (void) (0) : __assert_fail ("g_1603 == 0 || g_1603 == &g_108", "4.c", 2339, __PRETTY_FUNCTION__));
            ((g_2490 == &g_2485) ? (void) (0) : __assert_fail ("g_2490 == &g_2485", "4.c", 2340, __PRETTY_FUNCTION__));
            (((g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753) ? (void) (0) : __assert_fail ("(g_2530 >= &l_2500[0][0] && g_2530 <= &l_2500[7][3]) || g_2530 == &g_1753", "4.c", 2341, __PRETTY_FUNCTION__));
            l_2509 = ((*l_2137) |= ((safe_mul_func_uint16_t_u_u((l_2512 || (((*l_2536) = ((*l_2213) , l_2535)) != l_2538)), (p_7 ^ l_2539))) || (safe_mod_func_int8_t_s_s(l_2459, l_2460))));
        }
        else
        {
            uint64_t **l_2542 = &l_2136;
            uint64_t **l_2543 = &l_2136;
            int32_t l_2554 = 0x27B01774L;
            int16_t ***l_2589[4];
            const int32_t l_2605[7][7] = {{0L,6L,6L,0L,0L,6L,6L},{(-4L),0x31EBE2D0L,(-4L),0x31EBE2D0L,(-4L),0x31EBE2D0L,(-4L)},{0L,0L,6L,6L,0L,0L,6L},{0xAAA2E3A4L,0x31EBE2D0L,0xAAA2E3A4L,0x31EBE2D0L,0xAAA2E3A4L,0x31EBE2D0L,0xAAA2E3A4L},{0L,6L,6L,0L,0L,6L,6L},{(-4L),0x31EBE2D0L,(-4L),0x31EBE2D0L,(-4L),0x31EBE2D0L,(-4L)},{0L,0L,6L,6L,0L,0L,6L}};
            int8_t *** const l_2607 = &g_929;
            int32_t *l_2609 = (void*)0;
            uint16_t l_2655 = 0xCB6FL;
            int32_t l_2658[6];
            int64_t l_2659[9][4][7] = {{{5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L,5L},{0L,0L,0x3DA1B3AC975E300FLL,0L,0L,0x3DA1B3AC975E300FLL,0L},{0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL},{0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL}},{{0xFCA8228E54F60D13LL,0xFCA8228E54F60D13LL,0xA0E7972343912F6DLL,0xFCA8228E54F60D13LL,0xFCA8228E54F60D13LL,0xA0E7972343912F6DLL,0xFCA8228E54F60D13LL},{0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL},{0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL},{0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL}},{{5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L},{0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL},{5L,5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L},{0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL}},{{0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL},{0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL},{5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L},{0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL}},{{5L,5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L},{0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL},{0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL},{0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL}},{{5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L},{0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL},{5L,5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L},{0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL}},{{0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL},{0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL},{5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L},{0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL}},{{5L,5L,0xFCA8228E54F60D13LL,5L,5L,0xFCA8228E54F60D13LL,5L},{0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL,0x3DA1B3AC975E300FLL,0x3DA1B3AC975E300FLL,0xC27D94B3EE9793F5LL},{0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL},{0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL,0xC27D94B3EE9793F5LL,0L,0xC27D94B3EE9793F5LL}},{{5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xFCA8228E54F60D13LL,0xA0E7972343912F6DLL},{0L,0x3DA1B3AC975E300FLL,0L,0L,0x3DA1B3AC975E300FLL,0L,0L},{0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL,0xA0E7972343912F6DLL,5L,0xA0E7972343912F6DLL},{0x3DA1B3AC975E300FLL,0L,0L,0x3DA1B3AC975E300FLL,0L,0L,0x3DA1B3AC975E300FLL}}};
            int64_t l_2660 = 5L;
            uint64_t l_2661 = 1UL;
            int32_t **l_2667[2][7][10] = {{{&l_1748,(void*)0,&g_103[4][1][1],(void*)0,(void*)0,&g_103[4][1][1],(void*)0,&l_1748,&l_1748,&g_103[4][1][0]},{&l_2213,&g_871,&g_103[4][1][1],&l_2137,&l_1748,&l_2137,&g_871,&l_1748,&g_103[4][1][0],(void*)0},{&l_2137,&g_103[3][0][2],&g_103[4][1][1],&l_1748,&l_2213,&l_1748,&g_103[3][0][2],&l_1748,&l_2213,&l_1748},{&g_103[4][1][1],&g_103[3][1][1],&g_103[4][1][1],&g_103[4][1][0],&l_2137,&l_2213,&g_103[3][1][1],&l_1748,(void*)0,&l_2213},{&l_2137,(void*)0,&g_103[4][1][1],&l_2213,&g_103[4][1][0],&l_2137,(void*)0,&l_1748,&l_2137,&l_2137},{&l_1748,(void*)0,&g_103[4][1][1],(void*)0,(void*)0,&g_103[4][1][1],(void*)0,&l_1748,&l_1748,&g_103[4][1][0]},{&l_2213,&g_871,&g_103[4][1][1],&l_2137,&l_1748,&l_2137,&g_871,&l_1748,&g_103[4][1][0],(void*)0}},{{&l_2137,&g_103[3][0][2],&g_103[3][0][2],&l_2213,&l_2213,&g_871,&l_1748,&g_871,&l_2213,&l_2213},{&g_103[3][0][2],&l_2137,&g_103[3][0][2],&l_2137,&g_103[3][0][0],&g_103[3][1][1],&l_2137,&g_871,&g_871,&l_2213},{(void*)0,(void*)0,&g_103[3][0][2],&l_2213,&l_2137,(void*)0,(void*)0,&g_871,&g_103[3][0][0],&g_103[3][0][0]},{&g_871,&l_2213,&g_103[3][0][2],&g_871,&g_871,&g_103[3][0][2],&l_2213,&g_871,&l_2213,&l_2137},{&g_103[3][1][1],&g_103[4][1][0],&g_103[3][0][2],&g_103[3][0][0],&l_2213,(void*)0,&g_103[4][1][0],&g_871,&l_2137,&g_871},{(void*)0,&l_1748,&g_103[3][0][2],&l_2213,&l_2213,&g_871,&l_1748,&g_871,&l_2213,&l_2213},{&g_103[3][0][2],&l_2137,&g_103[3][0][2],&l_2137,&g_103[3][0][0],&g_103[3][1][1],&l_2137,&g_871,&g_871,&l_2213}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2589[i] = (void*)0;
            for (i = 0; i < 6; i++)
                l_2658[i] = 0x68C046DCL;
            (*l_2213) = ((l_2543 = l_2542) == (*g_2484));
            if ((*g_1327))
            {
                int8_t *l_2573 = (void*)0;
                int32_t l_2585 = 0x3F3796AEL;
                int32_t l_2586[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2586[i] = 0xBC5371BBL;
                if (func_59(l_2544))
                {
                    const int32_t **l_2545 = &g_2530;
                    uint8_t **l_2560 = (void*)0;
                    (*l_2545) = (void*)0;

                    ((g_2530 == 0) ? (void) (0) : __assert_fail ("g_2530 == 0", "4.c", 2379, __PRETTY_FUNCTION__));
                    (*l_2137) |= (&l_1941 == (p_4 , (**g_2415)));
                    for (l_2120 = 5; (l_2120 >= (-22)); l_2120--)
                    {
                        int8_t *l_2550 = &g_789[2];
                        l_2554 = ((safe_mul_func_int8_t_s_s(((p_7 != (*g_190)) < ((func_59(l_2550) > 0x7811C813L) , 0xE2079396L)), (safe_div_func_int16_t_s_s(func_59((*g_929)), ((*g_416) , p_7))))) == l_2553);
                        (*l_2213) |= ((*l_1405) , ((*l_2137) = (l_2560 != (void*)0)));
                        if (p_6)
                            continue;
                    }
                }
                else
                {
                    uint16_t ***l_2566[2][6];
                    int32_t l_2574 = 0x71C2DDE7L;
                    int32_t l_2575 = 0xFA80EE93L;
                    int8_t * const l_2596[3] = {&g_1113,&g_1113,&g_1113};
                    int16_t l_2604[10][9][2] = {{{2L,(-1L)},{0x6D95L,(-10L)},{(-1L),(-10L)},{0x6D95L,(-1L)},{2L,2L},{2L,(-1L)},{0x6D95L,(-10L)},{(-1L),(-10L)},{0x6D95L,(-1L)}},{{2L,2L},{2L,(-1L)},{0x6D95L,(-10L)},{(-1L),(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)}},{{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)}},{{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L}},{{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)}},{{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L}},{{(-10L),(-10L)},{(-10L),2L},{(-1L),(-3L)},{2L,(-3L)},{(-1L),2L},{(-10L),(-10L)},{(-1L),0x6D95L},{(-3L),2L},{0x6D95L,2L}},{{(-3L),0x6D95L},{(-1L),(-1L)},{(-1L),0x6D95L},{(-3L),2L},{0x6D95L,2L},{(-3L),0x6D95L},{(-1L),(-1L)},{(-1L),0x6D95L},{(-3L),2L}},{{0x6D95L,2L},{(-3L),0x6D95L},{(-1L),(-1L)},{(-1L),0x6D95L},{(-3L),2L},{0x6D95L,2L},{(-3L),0x6D95L},{(-1L),(-1L)},{(-1L),0x6D95L}},{{(-3L),2L},{0x6D95L,2L},{(-3L),0x6D95L},{(-1L),(-1L)},{(-1L),0x6D95L},{(-3L),2L},{0x6D95L,2L},{(-3L),0x6D95L},{(-1L),(-1L)}}};
                    int8_t ***l_2612 = &g_929;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_2566[i][j] = (void*)0;
                    }
                    if (l_2451)
                    {
                        uint16_t l_2563[4];
                        int32_t **l_2576 = &g_103[1][1][0];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_2563[i] = 2UL;
                        l_2575 = (safe_div_func_int32_t_s_s(l_2563[0], ((0xDA82CD8522553AB5LL <= (((safe_div_func_int32_t_s_s(((l_2566[1][3] == &g_1009) , (safe_rshift_func_int8_t_s_s((func_31(((&g_2530 == &g_1327) , func_31(((0x24L & (func_12((*l_2213), (safe_mod_func_uint64_t_u_u(func_31(l_2563[3], g_545, &l_1941, l_2563[0], l_2475[1][3][3]), g_2571[4][0][0]))) , (-3L))) , l_2572), l_2554, l_2573, p_7, l_2574)), l_2554, (*g_929), (*l_2137), l_2554) ^ g_1352), l_2563[1]))), p_7)) != 1UL) <= l_2574)) , 0xE8798CAAL)));
                        (*l_2576) = &l_2575;


                        if (g_1207)
                            goto lbl_2577;

                    }
                    else
                    {
                        int32_t *l_2597 = &g_1948.f1;
                        int32_t *l_2598 = &g_944.f1;
                        int32_t *l_2599 = &g_944.f1;
                        int32_t *l_2600 = &g_108.f1;
                        int32_t *l_2601 = &g_1948.f1;
                        int32_t *l_2602 = (void*)0;
                        int32_t *l_2603[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_545,&g_545,&g_545,&g_545,&g_545},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_545,&g_545,&g_545,&g_545,&g_545},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_545,&g_545,&g_545,&g_545,&g_545}};
                        const int32_t *l_2611 = &l_2605[0][6];
                        const int32_t **l_2610 = &l_2611;
                        int i, j;
                        (*g_1327) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((((*g_416) , func_31((**g_929), (l_2604[9][0][1] |= (((safe_lshift_func_uint8_t_u_s(p_6, (0L == (safe_unary_minus_func_uint16_t_u((g_1247++)))))) , ((p_6 , l_2589[1]) == (l_2590 = &l_2131))) | ((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_2595 && func_59(func_69(&l_2459, l_2575, l_2585, p_4, l_2596[2]))), 1UL)), l_2554)) , l_2474))), (*g_929), l_2605[0][6], l_2605[0][4])) > 0UL) <= p_8) , 0x0B979C6C7AE94968LL), l_2606)), p_8));

                        ((l_2590 == &l_2131) ? (void) (0) : __assert_fail ("l_2590 == &l_2131", "4.c", 2433, __PRETTY_FUNCTION__));
                        (*l_2137) = func_31((l_2607 != (((l_2574 || (g_2608 , (((p_5 = &p_7) == &p_7) <= (((l_2609 = &g_545) != ((*l_2610) = &g_545)) && l_2574)))) || p_8) , l_2612)), l_2605[6][1], l_2573, p_4, p_4);

                        ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2436, __PRETTY_FUNCTION__));
                        ((l_2609 == 0 || l_2609 == &g_545) ? (void) (0) : __assert_fail ("l_2609 == 0 || l_2609 == &g_545", "4.c", 2437, __PRETTY_FUNCTION__));
                        (((l_2611 >= &l_2605[0][0] && l_2611 <= &l_2605[6][6]) || l_2611 == &g_545) ? (void) (0) : __assert_fail ("(l_2611 >= &l_2605[0][0] && l_2611 <= &l_2605[6][6]) || l_2611 == &g_545", "4.c", 2438, __PRETTY_FUNCTION__));
                        l_2574 = func_59((*g_929));
                        (*l_2137) = (-1L);
                    }


                    ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2444, __PRETTY_FUNCTION__));
                    ((l_2590 == &l_2131 || l_2590 == &g_257) ? (void) (0) : __assert_fail ("l_2590 == &l_2131 || l_2590 == &g_257", "4.c", 2445, __PRETTY_FUNCTION__));
                    ((l_2609 == 0 || l_2609 == &g_545) ? (void) (0) : __assert_fail ("l_2609 == 0 || l_2609 == &g_545", "4.c", 2446, __PRETTY_FUNCTION__));
                }

                ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2449, __PRETTY_FUNCTION__));
                ((g_2530 == &g_1753 || g_2530 == 0) ? (void) (0) : __assert_fail ("g_2530 == &g_1753 || g_2530 == 0", "4.c", 2450, __PRETTY_FUNCTION__));
                ((l_2590 == &l_2131 || l_2590 == &g_257) ? (void) (0) : __assert_fail ("l_2590 == &l_2131 || l_2590 == &g_257", "4.c", 2451, __PRETTY_FUNCTION__));
                ((l_2609 == 0 || l_2609 == &g_545) ? (void) (0) : __assert_fail ("l_2609 == 0 || l_2609 == &g_545", "4.c", 2452, __PRETTY_FUNCTION__));
            }
            else
            {
                uint32_t ***l_2613 = (void*)0;
                uint32_t ***l_2614 = &g_950[6][2][1];
                int32_t l_2625 = 0x4F10958BL;
                (*l_2614) = &l_1754;


                (*g_1225) = &l_2475[1][3][3];

                (((g_871 >= &l_2475[0][0][0] && g_871 <= &l_2475[1][9][6])) ? (void) (0) : __assert_fail ("(g_871 >= &l_2475[0][0][0] && g_871 <= &l_2475[1][9][6])", "4.c", 2464, __PRETTY_FUNCTION__));
                for (p_8 = 19; (p_8 > 37); ++p_8)
                {
                    int8_t l_2624 = 0L;
                    (*g_871) ^= (p_8 == ((p_8 == (safe_div_func_int64_t_s_s((g_2619 , ((void*)0 == (**g_1008))), ((safe_add_func_int8_t_s_s(((0UL | (((safe_sub_func_uint16_t_u_u(0xF6ACL, l_2624)) | func_31((0x5BFBCD6D64B420CALL || 0xF33B4BFCCE66E5A7LL), l_2625, &l_2624, (*g_676), l_2554)) & (**g_929))) == (*g_951)), 1UL)) || l_2625)))) , 0x11F7L));
                }
                if ((*l_2213))
                {
                    int32_t *l_2627 = &l_2434;
                    int32_t *l_2628[1][7];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_2628[i][j] = &g_348;
                    }
                    ++l_2629;
                }
                else
                {
                    union U2 l_2632 = {2UL};
                    int32_t **l_2636 = &l_2213;
                    (*l_2137) = func_15(&l_1941, (*l_1405), l_2632);


                    (*l_2137) = (safe_lshift_func_int16_t_s_u(p_7, (((***g_2484) | (((((0xF9EFL != (g_2635 , (**g_189))) | ((l_2625 & (((***l_2607) |= func_31(l_2605[4][4], g_1948.f0, (*g_929), p_4, l_2625)) || (**l_2636))) < l_2625)) == p_4) < 0UL) || 4294967288UL)) | (**l_2636))));
                }


            }



            ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2497, __PRETTY_FUNCTION__));
            ((g_2530 == &g_1753 || g_2530 == 0) ? (void) (0) : __assert_fail ("g_2530 == &g_1753 || g_2530 == 0", "4.c", 2498, __PRETTY_FUNCTION__));
            ((l_2590 == &l_2131 || l_2590 == &g_257) ? (void) (0) : __assert_fail ("l_2590 == &l_2131 || l_2590 == &g_257", "4.c", 2499, __PRETTY_FUNCTION__));
            ((l_2609 == 0 || l_2609 == &g_545) ? (void) (0) : __assert_fail ("l_2609 == 0 || l_2609 == &g_545", "4.c", 2500, __PRETTY_FUNCTION__));
            if (((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((p_8 || (~4294967295UL)) && ((((func_31(l_2605[5][0], g_2192.f0, &l_1941, (func_59((*g_929)) & ((func_31(p_8, l_2460, (*g_929), (*g_676), p_7) || p_6) != (**g_415))), p_8) >= p_7) < 0xA5006D12L) && g_862) , 65530UL)), l_2605[0][6])) && 0xF9C0L), 7)), 9L)) , l_2475[1][3][3]))
            {
                int32_t l_2646 = (-1L);
                int32_t *l_2647 = &g_47[1][5];
                int32_t *l_2648 = &l_1427;
                int32_t *l_2649 = &l_2645[1];
                int32_t *l_2650 = &l_2475[1][3][3];
                int32_t *l_2651 = &l_1429;
                int32_t *l_2652 = &l_2475[1][3][3];
                int32_t *l_2653 = &l_2451;
                int32_t *l_2654[10][9] = {{&l_2554,&l_1430[2],&g_348,&l_1426,(void*)0,&g_47[0][0],(void*)0,&g_47[0][0],&l_1429},{(void*)0,(void*)0,&g_47[0][0],&l_2451,(void*)0,&l_1429,&g_348,&g_47[0][0],&g_47[0][0]},{&l_2554,&g_47[0][0],&l_1429,&l_2451,&l_1429,&g_47[0][0],&l_2554,&l_1429,&g_47[0][0]},{&l_1430[2],(void*)0,&l_2474,(void*)0,&l_1429,&l_2474,&g_348,&l_2474,&l_1429},{&l_1430[2],&l_1429,&l_1429,&l_1430[2],(void*)0,&l_2474,(void*)0,&l_1429,&l_2474},{&l_2554,&l_1429,&g_47[0][0],(void*)0,&g_47[0][0],&g_47[0][0],(void*)0,&g_47[0][0],&l_1429},{(void*)0,(void*)0,&g_47[0][0],&l_2451,(void*)0,&l_1429,&g_348,&g_47[0][0],&g_47[0][0]},{&l_2554,&g_47[0][0],&l_1429,&l_2451,&l_1429,&g_47[0][0],&l_2554,&l_1429,&g_47[0][0]},{&l_1430[2],(void*)0,&l_2474,(void*)0,&l_1429,&l_2474,&g_348,&l_2474,&l_1429},{&l_1430[2],&l_1429,&l_1429,&l_1430[2],(void*)0,&l_2474,(void*)0,&l_1429,&l_2474}};
                int i, j;
                ++l_2655;
                ++l_2661;
            }
            else
            {
                for (g_2062 = 6; (g_2062 != 3); g_2062 = safe_sub_func_uint16_t_u_u(g_2062, 1))
                {
                    uint8_t l_2666 = 0x2FL;
                    (*l_2137) = 0x759BCCABL;
                    return l_2666;





                }
            }
            l_1748 = &l_2658[2];

            (((l_1748 >= &l_2658[0] && l_1748 <= &l_2658[5])) ? (void) (0) : __assert_fail ("(l_1748 >= &l_2658[0] && l_1748 <= &l_2658[5])", "4.c", 2532, __PRETTY_FUNCTION__));
        }



        ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2537, __PRETTY_FUNCTION__));
        ((g_1603 == 0 || g_1603 == &g_108) ? (void) (0) : __assert_fail ("g_1603 == 0 || g_1603 == &g_108", "4.c", 2538, __PRETTY_FUNCTION__));

        ((g_2490 == 0 || g_2490 == &g_2485) ? (void) (0) : __assert_fail ("g_2490 == 0 || g_2490 == &g_2485", "4.c", 2540, __PRETTY_FUNCTION__));

        ((l_2590 == &l_2131 || l_2590 == &g_257) ? (void) (0) : __assert_fail ("l_2590 == &l_2131 || l_2590 == &g_257", "4.c", 2542, __PRETTY_FUNCTION__));
    }

    ((g_78 == &g_79 || g_78 == &g_726 || g_78 == 0) ? (void) (0) : __assert_fail ("g_78 == &g_79 || g_78 == &g_726 || g_78 == 0", "4.c", 2545, __PRETTY_FUNCTION__));


    ((p_5 == 0 || p_5 == &p_7) ? (void) (0) : __assert_fail ("p_5 == 0 || p_5 == &p_7", "4.c", 2548, __PRETTY_FUNCTION__));
    ((g_1603 == 0 || g_1603 == &g_108) ? (void) (0) : __assert_fail ("g_1603 == 0 || g_1603 == &g_108", "4.c", 2549, __PRETTY_FUNCTION__));
    ((g_2351 == &l_1456 || g_2351 == 0 || g_2351 == &l_1405 || (g_2351 >= &g_2352[0] && g_2351 <= &g_2352[0])) ? (void) (0) : __assert_fail ("g_2351 == &l_1456 || g_2351 == 0 || g_2351 == &l_1405 || (g_2351 >= &g_2352[0] && g_2351 <= &g_2352[0])", "4.c", 2550, __PRETTY_FUNCTION__));
    ((g_2490 == 0 || g_2490 == &g_2485) ? (void) (0) : __assert_fail ("g_2490 == 0 || g_2490 == &g_2485", "4.c", 2551, __PRETTY_FUNCTION__));



    ((l_2132 == &p_6) ? (void) (0) : __assert_fail ("l_2132 == &p_6", "4.c", 2555, __PRETTY_FUNCTION__));

    return p_4;





}







static const union U0 func_12(int8_t p_13, const uint32_t p_14)
{
    int64_t l_1300 = 0x266FAC67092D4B49LL;
    uint32_t *l_1301 = (void*)0;
    int8_t *l_1326 = (void*)0;
    int32_t l_1330 = 5L;
    int32_t l_1346[4][7] = {{6L,6L,6L,6L,6L,6L,6L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{6L,6L,6L,6L,6L,6L,6L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
    uint64_t l_1347 = 0x1BC5D4BE971DDEADLL;
    int i, j;
    for (g_225.f0 = 0; (g_225.f0 >= 27); g_225.f0 = safe_add_func_int8_t_s_s(g_225.f0, 3))
    {
        int8_t *l_1293 = &g_789[2];
        int32_t l_1304[1][9] = {{0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L,0x23D75A30L}};
        union U2 l_1308 = {0x71899A94L};
        int8_t l_1314 = 1L;
        uint16_t *l_1324 = &g_140[6];
        int i, j;
        for (g_1170.f0 = 0; (g_1170.f0 >= 25); ++g_1170.f0)
        {
            uint32_t **l_1302 = &g_951;
            uint32_t *l_1303 = &g_153;
            int32_t l_1305[9][5] = {{(-3L),0x509A94BAL,0x509A94BAL,(-3L),(-3L)},{(-3L),0x94975B0AL,2L,2L,0x94975B0AL},{(-3L),0x509A94BAL,2L,0x128D0088L,0x128D0088L},{0x509A94BAL,(-3L),0x509A94BAL,2L,0x128D0088L},{0x94975B0AL,(-3L),0x128D0088L,(-3L),0x94975B0AL},{0x509A94BAL,(-3L),(-3L),0x94975B0AL,(-3L)},{(-3L),(-3L),0x128D0088L,0x94975B0AL,0x5A508E45L},{(-3L),0x509A94BAL,0x509A94BAL,(-3L),(-3L)},{(-3L),0x94975B0AL,2L,2L,0x94975B0AL}};
            uint16_t *l_1306 = &g_140[2];
            const int32_t l_1307 = 0x4F02EDF8L;
            int32_t *l_1309 = &l_1304[0][0];
            int i, j;
            (*l_1309) &= (safe_sub_func_uint32_t_u_u(((((((l_1308 , l_1305[6][3]) & 1UL) , 0x36L) || p_13) || p_14) >= p_13), 0xDB0AD8D3L));
            for (l_1308.f1 = 1; (l_1308.f1 >= 0); l_1308.f1 -= 1)
            {
                int8_t l_1323[7] = {0xBEL,0xE7L,0xBEL,0xBEL,0xE7L,0xBEL,0xBEL};
                int i;
                for (g_1093.f0 = 0; (g_1093.f0 <= 2); g_1093.f0 += 1)
                {
                    int i, j, k;
                    if (l_1308.f1)
                    {
                        return g_1310;


                                            }
                    else
                    {
                        return g_1311;


                                            }
                }
                if (p_14)
                    continue;
                for (g_726 = 0; (g_726 <= 2); g_726 += 1)
                {
                    uint64_t l_1325[4][3] = {{18446744073709551615UL,1UL,0UL},{0xB6C8AC1FBF253DCALL,1UL,0xB6C8AC1FBF253DCALL},{0xBC1804B135EAA5C8LL,18446744073709551615UL,0UL},{0xBC1804B135EAA5C8LL,0xBC1804B135EAA5C8LL,18446744073709551615UL}};
                    int i, j;
                    (*g_1327) = (safe_add_func_int64_t_s_s((l_1314 , func_59(((((*l_1309) < ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((((safe_mod_func_int64_t_s_s(((p_14 == (0x91C9L && (safe_sub_func_int8_t_s_s(0xACL, l_1300)))) == ((l_1323[4] , ((*g_1009) = l_1324)) == (void*)0)), p_14)) == p_13) ^ 0xFA5AD02A5D4378C1LL), p_13)), l_1325[0][0])) <= l_1325[0][2])) >= l_1325[2][2]) , l_1326))), 0xE5DC1DD346A0BECBLL));

                    (((g_1010 >= &g_140[0] && g_1010 <= &g_140[6])) ? (void) (0) : __assert_fail ("(g_1010 >= &g_140[0] && g_1010 <= &g_140[6])", "4.c", 2626, __PRETTY_FUNCTION__));
                }
            }

                    }
    }
    for (g_944.f1 = 0; (g_944.f1 != 12); g_944.f1 = safe_add_func_int64_t_s_s(g_944.f1, 1))
    {
        int32_t *l_1333 = &g_348;
        int32_t **l_1334 = (void*)0;
        int32_t **l_1335 = &g_103[3][0][2];
        int8_t *l_1338 = &g_789[2];
        int64_t l_1343 = 0x2FB9312BF27C1EFDLL;
        int32_t *l_1344 = &g_545;
        int32_t *l_1345[3][7] = {{&l_1330,&l_1330,(void*)0,&l_1330,&l_1330,&l_1330,&g_348},{&g_348,(void*)0,(void*)0,&g_348,(void*)0,(void*)0,&g_348},{(void*)0,&g_348,(void*)0,(void*)0,&g_348,(void*)0,(void*)0}};
        int i, j;
        (*l_1333) &= (l_1300 | ((func_31(((**g_189) ^ (l_1330 = 1L)), ((*l_1344) = ((+(safe_mod_func_uint8_t_u_u(((((p_13 , func_59(l_1338)) , p_14) <= (**g_415)) || g_47[0][0]), 0xDFL))) & (*g_89))), &g_1113, l_1300, g_209) ^ 0xF241L) , 251UL));
        l_1347--;
        return g_1350;


            }

    return g_1351;


    }







static int8_t func_15(int8_t * p_16, union U2 p_17, union U2 p_18)
{
    int32_t *l_947[1];
    uint32_t l_948[10][1] = {{1UL},{1UL},{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{1UL}};
    uint32_t *l_949[3];
    uint32_t **l_953 = &g_951;
    uint32_t ***l_952 = &l_953;
    const int32_t l_956 = 0x5726E4BCL;
    int32_t l_1035 = 0x1F8218D8L;
    union U2 l_1045 = {0x8AFED825L};
    uint64_t l_1048 = 0x19E79B2337547FEALL;
    union U1 ** const *l_1053 = &g_907;
    uint8_t l_1076 = 0x3FL;
    int32_t l_1077 = 0xA2B7AA79L;
    uint32_t l_1080[4][8][8] = {{{1UL,0x73CF8825L,18446744073709551613UL,0xB9D33614L,7UL,18446744073709551614UL,18446744073709551614UL,7UL},{0xC63F3E27L,7UL,7UL,0xC63F3E27L,1UL,0x62F7BD29L,18446744073709551614UL,18446744073709551614UL},{0x73CF8825L,0xC63F3E27L,18446744073709551613UL,18446744073709551614UL,18446744073709551613UL,0xC63F3E27L,0x73CF8825L,18446744073709551613UL},{18446744073709551613UL,0xC63F3E27L,0x73CF8825L,18446744073709551613UL,0x62F7BD29L,0x62F7BD29L,18446744073709551613UL,0x73CF8825L},{7UL,7UL,0xC63F3E27L,1UL,0x62F7BD29L,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL},{18446744073709551613UL,0x73CF8825L,1UL,0x73CF8825L,18446744073709551613UL,0xB9D33614L,7UL,18446744073709551614UL},{0x73CF8825L,0x62F7BD29L,18446744073709551614UL,1UL,1UL,18446744073709551614UL,0x62F7BD29L,0x73CF8825L},{0xC63F3E27L,0xB9D33614L,18446744073709551614UL,18446744073709551613UL,7UL,18446744073709551613UL,7UL,18446744073709551613UL}},{{1UL,8UL,1UL,18446744073709551614UL,18446744073709551613UL,0xB9D33614L,0xC63F3E27L,0xC63F3E27L},{0xC63F3E27L,18446744073709551614UL,0x73CF8825L,0x73CF8825L,18446744073709551614UL,0xC63F3E27L,18446744073709551614UL,8UL},{0xC63F3E27L,1UL,0x62F7BD29L,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,0x62F7BD29L,1UL},{7UL,0x62F7BD29L,0xB9D33614L,18446744073709551614UL,8UL,18446744073709551613UL,18446744073709551613UL,8UL},{0x73CF8825L,8UL,8UL,0x73CF8825L,7UL,1UL,18446744073709551613UL,0xC63F3E27L},{0x62F7BD29L,0x73CF8825L,0xB9D33614L,18446744073709551613UL,0xB9D33614L,0x73CF8825L,0x62F7BD29L,18446744073709551614UL},{0xB9D33614L,0x73CF8825L,0x62F7BD29L,18446744073709551614UL,1UL,1UL,18446744073709551614UL,0x62F7BD29L},{8UL,8UL,0x73CF8825L,7UL,1UL,18446744073709551613UL,0xC63F3E27L,18446744073709551613UL}},{{0xB9D33614L,0x62F7BD29L,7UL,0x62F7BD29L,0xB9D33614L,18446744073709551614UL,8UL,18446744073709551613UL},{0x62F7BD29L,1UL,0xC63F3E27L,7UL,7UL,0xC63F3E27L,1UL,0x62F7BD29L},{0x73CF8825L,18446744073709551614UL,0xC63F3E27L,18446744073709551614UL,8UL,0xB9D33614L,8UL,18446744073709551614UL},{7UL,18446744073709551613UL,7UL,18446744073709551613UL,18446744073709551614UL,0xB9D33614L,0xC63F3E27L,0xC63F3E27L},{0xC63F3E27L,18446744073709551614UL,0x73CF8825L,0x73CF8825L,18446744073709551614UL,1UL,0x62F7BD29L,18446744073709551614UL},{1UL,18446744073709551613UL,8UL,0xC63F3E27L,0x62F7BD29L,0xC63F3E27L,8UL,18446744073709551613UL},{0xB9D33614L,8UL,18446744073709551614UL,0xC63F3E27L,18446744073709551614UL,0x73CF8825L,0x73CF8825L,18446744073709551614UL},{7UL,18446744073709551614UL,18446744073709551614UL,7UL,0xB9D33614L,18446744073709551613UL,0x73CF8825L,1UL}},{{8UL,7UL,18446744073709551614UL,0x73CF8825L,18446744073709551614UL,7UL,8UL,0x62F7BD29L},{18446744073709551614UL,7UL,8UL,0x62F7BD29L,18446744073709551613UL,18446744073709551613UL,0x62F7BD29L,8UL},{18446744073709551614UL,18446744073709551614UL,7UL,0xB9D33614L,18446744073709551613UL,0x73CF8825L,1UL,0x73CF8825L},{18446744073709551614UL,8UL,0xB9D33614L,8UL,18446744073709551614UL,0xC63F3E27L,18446744073709551614UL,0x73CF8825L},{8UL,18446744073709551613UL,1UL,0xB9D33614L,0xB9D33614L,1UL,18446744073709551613UL,8UL},{7UL,0xC63F3E27L,1UL,0x62F7BD29L,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,0x62F7BD29L},{0xB9D33614L,18446744073709551613UL,0xB9D33614L,0x73CF8825L,0x62F7BD29L,18446744073709551614UL,1UL,1UL},{1UL,0xC63F3E27L,7UL,7UL,0xC63F3E27L,1UL,0x62F7BD29L,18446744073709551614UL}}};
    uint16_t **l_1094 = &g_1010;
    const int16_t l_1099 = 0x24E0L;
    int64_t l_1115 = 7L;
    uint32_t l_1120[10][1][5] = {{{18446744073709551615UL,6UL,6UL,18446744073709551615UL,0xB247211BL}},{{4UL,18446744073709551614UL,4UL,4UL,4UL}},{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,6UL,0xB247211BL}},{{18446744073709551615UL,4UL,0UL,4UL,18446744073709551615UL}},{{0xB247211BL,6UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}},{{4UL,4UL,4UL,18446744073709551614UL,4UL}},{{0xB247211BL,18446744073709551615UL,6UL,6UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551614UL,0UL,18446744073709551614UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,6UL,18446744073709551615UL,0xB247211BL}},{{4UL,18446744073709551614UL,4UL,4UL,4UL}}};
    uint16_t l_1191 = 65535UL;
    int32_t **l_1227 = &l_947[0];
    int32_t ***l_1226 = &l_1227;
    union U0 **l_1267[1][8] = {{&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6],&g_220[6]}};
    int8_t ***l_1272 = &g_929;
    uint32_t l_1284[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_947[i] = &g_47[1][4];
    for (i = 0; i < 3; i++)
        l_949[i] = &l_948[6][0];
lbl_1271:
    l_948[6][0] = (safe_rshift_func_uint8_t_u_s(p_18.f0, 4));
    if (func_31(p_18.f0, (!(&g_416 != ((g_360 ^= p_18.f0) , ((*l_952) = g_950[6][2][1])))), ((p_18.f0 & p_17.f0) , func_64(func_59((g_944 , func_69(l_947[0], ((safe_lshift_func_uint8_t_u_u(0xB2L, (*g_676))) ^ (*g_416)), g_286[4].f0, g_726, p_16))), l_949[2], &g_348, g_108.f0)), l_956, p_17.f0))
    {
        int32_t l_969[6];
        uint64_t l_983 = 0xBC258E3C27B4F4C5LL;
        int32_t **l_994 = &g_103[3][0][2];
        int32_t *l_1004 = (void*)0;
        uint16_t *l_1007 = &g_140[2];
        uint16_t **l_1006 = &l_1007;
        int8_t *l_1013 = &g_789[1];
        int32_t l_1019 = 0x609B743DL;
        int32_t l_1021 = 0xCC884B0EL;
        int32_t l_1024[10][4][4] = {{{0x2AC2E2D9L,0x75E81A58L,8L,0x41AE1E87L},{0xF10F5FA5L,0x9B7423EBL,1L,1L},{0x9694DA21L,(-6L),0x8877D84CL,8L},{0x8877D84CL,8L,0x2CFBD2F6L,(-8L)}},{{2L,0xC9E1A522L,0xBEF74842L,0xFC933D8DL},{0x2C57904FL,(-4L),(-6L),0xD4544382L},{0xFDFA54FDL,0x41AE1E87L,(-8L),(-9L)},{1L,(-8L),0xB28DEBC9L,(-4L)}},{{0xD4544382L,0x2C57904FL,0x9694DA21L,1L},{0x003EE875L,(-1L),1L,0xB28DEBC9L},{(-6L),1L,0xC9E1A522L,0x86AD893EL},{0x48BF5399L,(-7L),0x2E28AEC1L,0x1A43F765L}},{{(-4L),0x54C699C4L,0xCB1481B1L,(-4L)},{0x1A43F765L,0x41EF0831L,0xC34FC68AL,(-1L)},{1L,0x08D83029L,0x9694DA21L,0x9694DA21L},{2L,2L,1L,(-1L)}},{{0xC34FC68AL,0x59EF2948L,1L,0x41AE1E87L},{0x8877D84CL,0xF0E06469L,6L,1L},{0x86AD893EL,0xF0E06469L,0x9B7423EBL,0x41AE1E87L},{0xF0E06469L,0x59EF2948L,1L,(-1L)}},{{1L,2L,0xF10F5FA5L,0x9694DA21L},{(-1L),0x08D83029L,0L,(-1L)},{0x29C80B0AL,0x41EF0831L,2L,(-4L)},{0xFDFA54FDL,0x54C699C4L,0x29C80B0AL,0x1A43F765L}},{{0x59EF2948L,(-7L),(-5L),0x86AD893EL},{(-3L),1L,0xFC933D8DL,0xB28DEBC9L},{(-9L),(-1L),(-1L),1L},{0xBEF74842L,6L,0L,0x8487CC84L}},{{1L,1L,0xE8C15E61L,(-8L)},{0xD4544382L,0x2AC2E2D9L,0x2C57904FL,0x2E28AEC1L},{(-7L),0x8487CC84L,0x003EE875L,0x08D83029L},{0x35AEE476L,(-10L),1L,1L}},{{1L,1L,0x041555A7L,0x52015939L},{(-1L),0x75E81A58L,1L,6L},{0x2CFBD2F6L,0x041555A7L,(-7L),0x29C80B0AL},{0x393ECC9BL,0xBEF74842L,(-5L),1L}},{{0x393ECC9BL,0xB28DEBC9L,(-7L),(-1L)},{0x2CFBD2F6L,1L,1L,0x1A43F765L},{(-1L),1L,0x041555A7L,0xF10F5FA5L},{0x2C57904FL,0xB8052B4FL,0x41AE1E87L,0x86AD893EL}}};
        int16_t l_1034 = 0x7481L;
        uint16_t l_1036 = 65535UL;
        uint8_t l_1139 = 247UL;
        const int8_t l_1153 = 0L;
        uint32_t ***l_1184 = &g_950[6][2][1];
        int64_t l_1192[6] = {0x2F2168573986551BLL,0x3E724C4B310F696ELL,0x3E724C4B310F696ELL,0x2F2168573986551BLL,0x3E724C4B310F696ELL,0x3E724C4B310F696ELL};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_969[i] = 0x75F1323AL;
        for (p_17.f1 = 0; (p_17.f1 >= 0); p_17.f1 -= 1)
        {
            uint32_t l_957 = 5UL;
            uint16_t *l_966 = (void*)0;
            uint16_t *l_967 = &g_968;
            int32_t l_982 = 0xAD05A411L;
            int32_t l_984 = (-1L);
            int i;
            l_957++;
            l_969[0] |= (safe_add_func_uint16_t_u_u((((**g_189) = g_140[p_17.f1]) ^ (safe_lshift_func_int16_t_s_s((g_140[(p_17.f1 + 6)] > 0xD807L), ((&p_16 == (void*)0) & (safe_lshift_func_uint16_t_u_s(((*l_967) |= g_140[(p_17.f1 + 3)]), 7)))))), 0x9941L));
            l_984 = (safe_lshift_func_uint16_t_u_s((g_140[(p_17.f1 + 3)] , (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((0UL >= (l_982 = (safe_div_func_uint16_t_u_u(p_17.f0, (safe_add_func_int64_t_s_s((func_31(l_969[0], l_969[5], &g_726, l_969[1], (safe_sub_func_uint16_t_u_u((l_969[0] == p_17.f0), p_17.f0))) , 0x83FD1ECF0558E1EELL), p_18.f0)))))) != 0L), 15)), 1UL))), l_983));
            for (l_983 = 0; (l_983 <= 0); l_983 += 1)
            {
                int32_t *l_985 = &g_47[1][0];
                uint32_t l_986[7][10][3] = {{{0UL,0x9C9F9DC9L,0x641839D4L},{0x641839D4L,0x56CCD863L,18446744073709551615UL},{0x3F6DB93DL,0xCCA10249L,0x1F579433L},{0x9C9F9DC9L,0x56CCD863L,5UL},{0UL,0x9C9F9DC9L,18446744073709551613UL},{1UL,0UL,0x4F4C2CE1L},{18446744073709551615UL,0UL,0x3F6DB93DL},{18446744073709551615UL,2UL,0UL},{18446744073709551610UL,0x514D9CD5L,2UL},{1UL,0x4F4C2CE1L,0x9C03239DL}},{{0xCFB3B326L,0x94D8DC25L,0UL},{18446744073709551613UL,7UL,0UL},{0xEB998474L,0x35047F5BL,0x9C03239DL},{0xCD18FEB3L,0x01153ECBL,2UL},{0UL,0x1F579433L,0UL},{0x7C591E90L,9UL,0x3F6DB93DL},{0x4F4C2CE1L,0x376912EDL,0x4F4C2CE1L},{1UL,0x25C74B9EL,18446744073709551613UL},{0x376912EDL,0xEB998474L,5UL},{0xBD3B9A9EL,0UL,0x1F579433L}},{{0x01153ECBL,9UL,0x1F579433L},{0UL,2UL,0x7C591E90L},{0UL,0x94D8DC25L,0xCFB3B326L},{0UL,0x338457F8L,18446744073709551609UL},{0UL,1UL,0UL},{0x8EB020E4L,0xBD3B9A9EL,0x338457F8L},{18446744073709551609UL,7UL,0xCD18FEB3L},{0x94D8DC25L,0UL,18446744073709551613UL},{0xD2869D77L,5UL,1UL},{18446744073709551615UL,5UL,2UL}},{{0UL,0UL,9UL},{18446744073709551615UL,7UL,18446744073709551606UL},{0xCCA10249L,0xBD3B9A9EL,0x3F6DB93DL},{2UL,1UL,18446744073709551615UL},{0x338457F8L,0x338457F8L,0x641839D4L},{7UL,0x94D8DC25L,18446744073709551610UL},{0x36299263L,2UL,0x01153ECBL},{0x3F6DB93DL,9UL,0UL},{0x9C03239DL,0x36299263L,0x01153ECBL},{0x7C591E90L,0xD2869D77L,18446744073709551610UL}},{{0xEB998474L,1UL,0x641839D4L},{0x7F4D8162L,0UL,18446744073709551615UL},{5UL,0x7DB8D87BL,0x3F6DB93DL},{0UL,18446744073709551608UL,18446744073709551606UL},{18446744073709551613UL,18446744073709551606UL,9UL},{0x9C9F9DC9L,0xCD18FEB3L,2UL},{6UL,9UL,1UL},{6UL,1UL,18446744073709551613UL},{0x9C9F9DC9L,0UL,0xCD18FEB3L},{18446744073709551613UL,18446744073709551610UL,0x338457F8L}},{{0UL,0x40A845AAL,0UL},{5UL,18446744073709551609UL,0xCD18FEB3L},{9UL,5UL,0x7C591E90L},{5UL,18446744073709551615UL,0x514D9CD5L},{0x514D9CD5L,0UL,0UL},{0x338457F8L,0x25C74B9EL,18446744073709551609UL},{18446744073709551615UL,0UL,1UL},{0x376912EDL,18446744073709551615UL,0x9C03239DL},{0x36299263L,5UL,0UL},{18446744073709551615UL,0xCD18FEB3L,0x338457F8L}},{{18446744073709551615UL,0x1F579433L,0xEB998474L},{0UL,0x4F4C2CE1L,0x1F579433L},{18446744073709551613UL,0UL,0xBD3B9A9EL},{0x8EB020E4L,0UL,0x7F4D8162L},{0x9C03239DL,9UL,0x7F4D8162L},{0x9C9F9DC9L,0x40A845AAL,0xBD3B9A9EL},{1UL,7UL,0x1F579433L},{0xCD18FEB3L,18446744073709551609UL,0xEB998474L},{18446744073709551610UL,0x641839D4L,0x338457F8L},{0UL,18446744073709551606UL,0UL}}};
                int i, j, k;
                for (g_209 = 0; (g_209 <= 0); g_209 += 1)
                {
                    (*g_932) = l_985;

                    (((g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6])", "4.c", 2733, __PRETTY_FUNCTION__));
                    return l_986[4][6][0];
                }
            }
        }

                for (g_583.f0 = 0; (g_583.f0 <= 1); g_583.f0 += 1)
        {
            uint32_t *l_1003 = &l_948[6][0];
            int32_t l_1005 = 0x923F207FL;
            uint8_t l_1014 = 0x05L;
            int32_t l_1022[9] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
            int8_t *l_1112[3][6][5] = {{{(void*)0,&g_789[2],&g_789[2],(void*)0,&g_789[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_789[2],(void*)0,&g_789[2],&g_789[2],(void*)0},{(void*)0,&g_789[2],&g_789[2],(void*)0,&g_789[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_789[2],(void*)0,&g_789[2],&g_789[2],(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_789[2],(void*)0},{&g_789[2],&g_789[2],(void*)0,&g_789[2],&g_789[2]},{(void*)0,&g_789[2],(void*)0,(void*)0,&g_789[2]},{&g_789[2],(void*)0,(void*)0,&g_789[2],(void*)0},{&g_789[2],&g_789[2],(void*)0,&g_789[2],&g_789[2]},{(void*)0,&g_789[2],(void*)0,(void*)0,&g_789[2]}},{{&g_789[2],(void*)0,(void*)0,&g_789[2],(void*)0},{&g_789[2],&g_789[2],(void*)0,&g_789[2],&g_789[2]},{(void*)0,&g_789[2],(void*)0,(void*)0,&g_789[2]},{&g_789[2],(void*)0,(void*)0,&g_789[2],(void*)0},{&g_789[2],&g_789[2],(void*)0,&g_789[2],&g_789[2]},{(void*)0,&g_789[2],(void*)0,(void*)0,&g_789[2]}}};
            int32_t l_1125 = 3L;
            int32_t l_1145 = 1L;
            const uint8_t l_1156 = 252UL;
            const uint32_t l_1157 = 0x4B748CCEL;
            int i, j, k;
            l_1005 ^= (safe_mod_func_uint32_t_u_u(g_637[(g_583.f0 + 8)], ((safe_mul_func_int8_t_s_s(l_983, 0x7EL)) || (((safe_mod_func_int16_t_s_s((g_993 , ((((void*)0 == l_994) , (safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((+func_59(p_16)) < 0x18D3D693L), 1)), g_726)), p_18.f0)) <= 0xDC4FL), 0xF976500645D98692LL))) != 0x1033L)), 9UL)) , 1L) != g_993.f0))));
        }
        for (g_191 = 0; (g_191 <= 2); g_191 += 1)
        {
            int32_t l_1193[2];
            uint8_t *l_1198 = &g_637[4];
            const int16_t ** const l_1205 = (void*)0;
            uint64_t *l_1206[7] = {&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236};
            int32_t l_1208[7] = {0L,0x46C93804L,0L,0L,0x46C93804L,0L,0L};
            int i;
            for (i = 0; i < 2; i++)
                l_1193[i] = 0xDA8187F8L;
            (*l_994) = l_949[g_191];


            l_1193[1] ^= 0x934714BCL;
            l_1208[4] = (p_17.f0 || (g_1207 = (g_944.f0 , ((g_236 = (((safe_sub_func_int16_t_s_s(func_31(p_18.f0, (safe_rshift_func_uint8_t_u_s(((*l_1198) &= (+(*g_676))), 5)), l_1013, p_17.f0, (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_209 <= g_379[2][2][0]), (l_1019 = p_18.f0))), l_1193[1])) & p_17.f1) >= p_17.f0), 15))), l_1193[1])) , (void*)0) != l_1205)) ^ g_1092.f0))));
            return l_1208[4];



        }
    }
    else
    {
        uint64_t l_1209 = 5UL;
        int32_t l_1210 = 1L;
        union U1 *l_1214 = &g_227[1];
        union U1 **l_1213 = &l_1214;
        int16_t ****l_1216 = &g_256;
        int8_t ***l_1256 = &g_929;
        int32_t l_1283[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1283[i] = (-1L);
        l_1210 = (l_1209 = p_17.f0);
        (*l_1213) = (**l_1053);

        ((l_1214 == 0 || l_1214 == &g_583) ? (void) (0) : __assert_fail ("l_1214 == 0 || l_1214 == &g_583", "4.c", 2789, __PRETTY_FUNCTION__));
        for (g_153 = 0; (g_153 <= 0); g_153 += 1)
        {
            int64_t l_1222 = 0xD8A007DE092055B6LL;
            int32_t l_1229 = 0L;
            int32_t l_1230 = (-4L);
            uint32_t l_1239 = 0xDD117C04L;
            const int8_t *l_1261 = (void*)0;
            const int8_t **l_1260[3][7][7] = {{{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,(void*)0},{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261,&l_1261},{(void*)0,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261},{&l_1261,(void*)0,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261}},{{&l_1261,&l_1261,&l_1261,(void*)0,&l_1261,(void*)0,&l_1261},{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,(void*)0},{&l_1261,&l_1261,&l_1261,&l_1261,(void*)0,&l_1261,&l_1261},{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,&l_1261,&l_1261,(void*)0,&l_1261,(void*)0},{(void*)0,&l_1261,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261,&l_1261}},{{&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261,&l_1261},{&l_1261,(void*)0,(void*)0,(void*)0,&l_1261,(void*)0,(void*)0},{&l_1261,&l_1261,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261},{&l_1261,&l_1261,(void*)0,&l_1261,&l_1261,(void*)0,&l_1261},{&l_1261,(void*)0,&l_1261,(void*)0,&l_1261,&l_1261,&l_1261},{(void*)0,(void*)0,(void*)0,&l_1261,(void*)0,(void*)0,(void*)0},{&l_1261,&l_1261,&l_1261,(void*)0,&l_1261,(void*)0,&l_1261}}};
            const int8_t ***l_1259 = &l_1260[1][3][2];
            int i, j, k;
            for (g_348 = 0; (g_348 >= 0); g_348 -= 1)
            {
                int16_t ****l_1217[2][4][8] = {{{&g_256,&g_256,(void*)0,&g_256,&g_256,(void*)0,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,(void*)0,&g_256,&g_256,(void*)0,&g_256,&g_256}},{{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,(void*)0,&g_256,&g_256,(void*)0,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256}}};
                int32_t l_1221 = 0x1FFF3724L;
                int32_t l_1231 = 5L;
                uint32_t l_1233 = 0x1A40D4E1L;
                int i, j, k;
                l_1210 = (g_1215 & func_31(((l_1216 = &g_256) == (g_1218 = l_1217[0][0][3])), (safe_mul_func_int8_t_s_s(p_17.f0, (l_1221 <= l_1221))), (l_1222 , p_16), p_18.f0, p_17.f0));
                for (g_1215 = 0; (g_1215 >= 0); g_1215 -= 1)
                {
                    int32_t l_1223 = 0xDFDD25F0L;
                    int32_t *l_1224[6][2] = {{(void*)0,&l_1221},{(void*)0,(void*)0},{&l_1221,(void*)0},{(void*)0,&l_1221},{(void*)0,(void*)0},{&l_1221,(void*)0}};
                    int i, j, k;
                    l_1223 |= (9L <= l_1120[(g_153 + 3)][g_153][(g_348 + 1)]);
                    (*g_1225) = l_1224[0][1];

                    ((g_871 == &l_1077 || g_871 == &l_1221 || (g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6]) || g_871 == 0) ? (void) (0) : __assert_fail ("g_871 == &l_1077 || g_871 == &l_1221 || (g_871 >= &g_47[0][0] && g_871 <= &g_47[1][6]) || g_871 == 0", "4.c", 2816, __PRETTY_FUNCTION__));
                    for (g_583.f0 = 0; (g_583.f0 <= 9); g_583.f0 += 1)
                    {
                        int32_t l_1228 = 0x8449EFC3L;
                        int32_t l_1232 = 0x9ACF17D4L;
                        (***l_1226) = ((void*)0 == l_1226);
                        if (p_18.f0)
                            break;
                        (**l_1227) = l_1221;
                        ++l_1233;
                    }
                }


                l_1230 &= (l_1229 ^= (g_1236 , ((***l_1226) = p_18.f0)));
                for (l_1048 = 0; (l_1048 <= 9); l_1048 += 1)
                {
                    int32_t l_1244 = (-1L);
                    int i, j, k;
                    l_1230 = (((l_1210 |= ((safe_mod_func_int8_t_s_s(((((l_1239 > l_1209) || func_31(p_18.f0, g_1058.f0, p_16, ((safe_mul_func_int16_t_s_s(p_18.f0, l_1209)) <= ((((safe_lshift_func_int8_t_s_u((l_1229 = (l_1239 | ((**l_1227) <= l_1244))), 7)) && p_17.f0) < l_1233) & (*g_951))), p_17.f0)) | l_1244) , l_1244), l_1244)) && (**l_1227))) & (-1L)) || g_140[2]);
                    return l_1222;


                }
            }
            for (g_993.f0 = 0; (g_993.f0 <= 2); g_993.f0 += 1)
            {
                int8_t ***l_1258 = &g_929;
                int8_t ****l_1257 = &l_1258;
                const int8_t ****l_1262 = (void*)0;
                const int8_t ***l_1264 = &l_1260[1][3][2];
                const int8_t ****l_1263 = &l_1264;
                union U0 **l_1265 = &g_220[6];
                int32_t l_1270 = (-9L);
                int32_t l_1277 = 0xA1F48520L;
                (***l_1226) = (l_1230 = (p_17.f0 <= (safe_add_func_uint32_t_u_u((g_1247 , (p_17.f0 , (g_637[8] , 0x0CC20B60L))), (&g_1113 != &g_1131[2])))));
                if ((((*g_89) = (safe_div_func_int16_t_s_s(func_31((l_1229 |= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((**l_1227) = (l_1210 = ((l_1230 <= ((((*l_1257) = l_1256) != ((*l_1263) = l_1259)) && (l_1265 != (g_1266 , l_1267[0][2])))) , (~(*g_190))))), (safe_sub_func_int32_t_s_s((&g_637[4] == &g_155), p_18.f0)))), l_1209)), g_968))), p_18.f0, &g_1113, l_1239, g_209), l_1270))) || 0UL))
                {
                    if (l_1230)
                        goto lbl_1271;
                }
                else
                {
                    uint16_t *l_1274[8][10][3] = {{{&g_140[2],&g_140[2],(void*)0},{&l_1191,&g_140[3],(void*)0},{&l_1191,&g_140[4],(void*)0},{&g_140[5],&g_968,(void*)0},{&g_140[2],&g_1247,(void*)0},{&g_140[5],(void*)0,&g_968},{&l_1191,(void*)0,&g_968},{&l_1191,&g_1247,&g_1247},{&g_140[2],&g_968,&g_968},{&l_1191,&g_140[4],&g_968}},{{&l_1191,&g_140[3],(void*)0},{&g_140[2],&g_140[2],(void*)0},{&l_1191,&g_140[3],(void*)0},{&l_1191,&g_140[4],(void*)0},{&g_140[5],&g_968,(void*)0},{&g_140[2],&g_1247,(void*)0},{&g_140[5],(void*)0,&g_968},{&l_1191,(void*)0,&g_968},{&l_1191,&g_1247,&g_1247},{&g_140[2],&g_968,&g_968}},{{&l_1191,&g_140[4],&g_968},{&l_1191,&g_140[3],(void*)0},{&g_140[2],&g_140[2],(void*)0},{&l_1191,&g_140[3],(void*)0},{&l_1191,&g_140[4],(void*)0},{&g_140[5],&g_968,(void*)0},{&g_140[2],&g_1247,(void*)0},{&g_140[5],(void*)0,&g_968},{&l_1191,&l_1191,&g_1247},{(void*)0,&g_140[2],&g_140[2]}},{{&g_968,&l_1191,&g_1247},{&g_140[4],&l_1191,&l_1191},{&g_140[4],(void*)0,&l_1191},{&g_968,&g_1247,&g_140[2]},{(void*)0,(void*)0,&g_1247},{&g_1247,&l_1191,&g_1247},{&g_140[2],&l_1191,&g_140[2]},{&g_140[3],&g_140[2],&l_1191},{&g_140[2],&l_1191,&l_1191},{&g_1247,&l_1191,&g_1247}},{{(void*)0,&g_140[2],&g_140[2]},{&g_968,&l_1191,&g_1247},{&g_140[4],&l_1191,&l_1191},{&g_140[4],(void*)0,&l_1191},{&g_968,&g_1247,&g_140[2]},{(void*)0,(void*)0,&g_1247},{&g_1247,&l_1191,&g_1247},{&g_140[2],&l_1191,&g_140[2]},{&g_140[3],&g_140[2],&l_1191},{&g_140[2],&l_1191,&l_1191}},{{&g_1247,&l_1191,&g_1247},{(void*)0,&g_140[2],&g_140[2]},{&g_968,&l_1191,&g_1247},{&g_140[4],&l_1191,&l_1191},{&g_140[4],(void*)0,&l_1191},{&g_968,&g_1247,&g_140[2]},{(void*)0,(void*)0,&g_1247},{&g_1247,&l_1191,&g_1247},{&g_140[2],&l_1191,&g_140[2]},{&g_140[3],&g_140[2],&l_1191}},{{&g_140[2],&l_1191,&l_1191},{&g_140[2],&l_1191,(void*)0},{&g_1247,&g_1247,&g_1247},{&g_140[3],&l_1191,(void*)0},{(void*)0,&g_140[2],&l_1191},{(void*)0,&g_140[2],&l_1191},{&g_140[3],&g_1247,&g_140[2]},{&g_1247,&g_140[2],&l_1191},{&g_140[2],&g_140[2],&l_1191},{(void*)0,&l_1191,&g_140[2]}},{{&g_1247,&g_1247,&l_1191},{(void*)0,&l_1191,&l_1191},{&g_140[2],&l_1191,(void*)0},{&g_1247,&g_1247,&g_1247},{&g_140[3],&l_1191,(void*)0},{(void*)0,&g_140[2],&l_1191},{(void*)0,&g_140[2],&l_1191},{&g_140[3],&g_1247,&g_140[2]},{&g_1247,&g_140[2],&l_1191},{&g_140[2],&g_140[2],&l_1191}}};
                    int8_t *l_1280 = (void*)0;
                    uint32_t *l_1281[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1281[i] = &g_225.f0;
                    (**l_1227) ^= ((((void*)0 == l_1272) & p_18.f0) || (((safe_unary_minus_func_uint32_t_u((((l_1270 = 0x7CB9L) , l_1270) | (l_1210 | ((l_1229 = ((((safe_sub_func_int32_t_s_s(l_1209, l_1277)) >= func_59(((((safe_lshift_func_uint16_t_u_s(65526UL, p_18.f0)) , (*g_190)) || 0x549CL) , l_1280))) & (*g_951)) <= p_18.f0)) != 0xC7A2C04CL))))) != 0xD6306A46E1346437LL) & g_618[4]));
                }
                for (g_545 = 2; (g_545 >= 0); g_545 -= 1)
                {
                    int16_t l_1282 = 3L;
                    (***l_1226) = ((p_18.f0 , (l_1277 , l_1209)) | (l_1210 = (l_1282 = 0x1AL)));
                }
            }
        }
        l_1284[2]++;
    }

    ((g_89 == &g_79) ? (void) (0) : __assert_fail ("g_89 == &g_79", "4.c", 2877, __PRETTY_FUNCTION__));
    return p_18.f0;


}







static union U2 func_20(const uint8_t p_21, int32_t p_22, int8_t p_23)
{
    int8_t *l_730 = &g_726;
    uint32_t l_734 = 18446744073709551608UL;
    int32_t l_739 = 0xA3CFFA99L;
    int32_t l_740[10] = {0x754FCD4AL,0x6C46474EL,0x6C46474EL,0x754FCD4AL,0x6C46474EL,0x6C46474EL,0x754FCD4AL,0x6C46474EL,0x6C46474EL,0x754FCD4AL};
    int32_t l_744 = (-6L);
    uint16_t l_745 = 7UL;
    int32_t ***l_759 = (void*)0;
    uint16_t l_775 = 0x46F9L;
    int16_t *l_780 = &g_191;
    int16_t * const *l_779[1];
    int16_t **l_782 = &l_780;
    int8_t *l_784 = &g_79;
    union U2 l_808 = {0UL};
    uint32_t *l_928 = (void*)0;
    int32_t *l_943 = &g_348;
    int i;
    for (i = 0; i < 1; i++)
        l_779[i] = &l_780;
    if ((func_59(l_730) < p_22))
    {
        int8_t l_735 = 0xD6L;
        int32_t l_736 = 1L;
        int16_t l_737 = 0x7B83L;
        int32_t l_738 = 6L;
        int32_t l_741 = (-1L);
        int32_t l_742 = 1L;
        int32_t l_743[2][4][5] = {{{1L,0xB5334BE9L,0xB5334BE9L,1L,(-1L)},{0L,0x3043F458L,0xB5334BE9L,0xB6D076ADL,4L},{0xB6D076ADL,0x23B77C28L,0xEA24ACE4L,0xB843E460L,0xB5334BE9L},{(-1L),0L,0xB6D076ADL,0xB6D076ADL,0L}},{{0x68FEE229L,(-5L),0xB5FA5347L,1L,0L},{0x23B77C28L,0xB843E460L,(-5L),(-9L),4L},{0x68FEE229L,(-9L),0xB5334BE9L,0x23B77C28L,0x23B77C28L},{0xB5FA5347L,(-1L),0xB5FA5347L,0xB5334BE9L,0xFACF5ED1L}}};
        int32_t **l_758[6] = {&g_103[0][0][0],&g_103[0][0][0],(void*)0,&g_103[0][0][0],&g_103[0][0][0],(void*)0};
        int32_t ***l_757[6][6] = {{&l_758[5],&l_758[5],&l_758[4],&l_758[5],&l_758[5],&l_758[4]},{&l_758[5],&l_758[5],&l_758[4],&l_758[2],&l_758[2],&l_758[4]},{&l_758[2],&l_758[2],&l_758[4],&l_758[5],&l_758[5],&l_758[4]},{&l_758[5],&l_758[5],&l_758[4],&l_758[5],&l_758[5],&l_758[4]},{&l_758[5],&l_758[5],&l_758[4],&l_758[2],&l_758[2],&l_758[4]},{&l_758[2],&l_758[2],&l_758[4],&l_758[5],&l_758[5],&l_758[4]}};
        int i, j, k;
        for (g_348 = 0; (g_348 >= 0); g_348 -= 1)
        {
            int32_t * const *l_731[9][1];
            int32_t * const *l_733 = (void*)0;
            int32_t * const **l_732 = &l_733;
            int8_t *l_756 = &g_79;
            union U2 l_765 = {4294967290UL};
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_731[i][j] = (void*)0;
            }
            l_735 |= (l_734 = (((*g_582) , &g_103[3][0][2]) != ((*l_732) = l_731[8][0])));
            ++l_745;
            for (l_735 = 0; (l_735 <= 0); l_735 += 1)
            {
                int i, j;
                for (l_737 = 0; (l_737 <= 0); l_737 += 1)
                {
                    for (g_37 = 0; (g_37 <= 1); g_37 += 1)
                    {
                        int i, j;
                        if (g_42[l_735][(g_37 + 6)])
                            break;
                    }
                }
                l_739 = ((safe_mod_func_int8_t_s_s((!(+((g_42[g_348][(l_735 + 8)] , 0x6B31L) , (((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((g_42[g_348][(l_735 + 5)] < (((*g_676) && ((safe_lshift_func_int16_t_s_s(p_22, func_31(p_23, p_21, l_756, l_743[1][1][4], g_42[g_348][(l_735 + 8)]))) , (*g_89))) ^ p_21)) , l_757[1][1]) == l_759), (*g_676))), p_23)) <= (*g_89)) & 0x39CCL)))), p_23)) , p_22);
                for (p_22 = 0; (p_22 <= 1); p_22 += 1)
                {
                    int i, j, k;
                    if (((safe_sub_func_uint64_t_u_u((~(g_191 == ((safe_rshift_func_int16_t_s_s((g_348 < p_23), 3)) < (l_743[p_22][(g_348 + 2)][(l_735 + 3)] ^= p_22)))), 0x40FC95E3C62D3D2ELL)) | (*g_676)))
                    {
                        union U2 l_764[9] = {{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L},{0xB431FB03L}};
                        int i;
                        return l_764[8];

                                            }
                    else
                    {
                        return l_765;

                                            }
                }
            }
        }
    }
    else
    {
        int16_t ***l_768 = (void*)0;
        int16_t ****l_769 = &g_256;
        int32_t *l_772 = &g_47[0][0];
        int32_t l_804[1];
        int8_t l_807 = 0xF9L;
        union U2 l_817[1][4][7] = {{{{0xBBF0CEB3L},{0xF2845765L},{0x9DFDB427L},{0x9DFDB427L},{0xF2845765L},{0xBBF0CEB3L},{4294967294UL}},{{4294967288UL},{0x04CCBFB6L},{4294967295UL},{4294967295UL},{0x04CCBFB6L},{4294967288UL},{4294967289UL}},{{0xBBF0CEB3L},{0xF2845765L},{0x9DFDB427L},{0x9DFDB427L},{0xF2845765L},{0xBBF0CEB3L},{4294967294UL}},{{4294967288UL},{0x04CCBFB6L},{4294967295UL},{4294967295UL},{0x04CCBFB6L},{4294967288UL},{4294967289UL}}}};
        union U2 *l_866 = &l_817[0][3][4];
        uint64_t *l_899[6] = {&g_236,&g_37,&g_37,&g_236,&g_37,&g_37};
        int8_t *l_924 = &g_79;
        int32_t l_931 = (-2L);
        int32_t **l_942[10][4] = {{&g_103[1][0][2],&g_103[5][1][0],&g_103[3][0][2],&g_103[0][0][2]},{&l_772,(void*)0,&g_871,&g_103[3][0][2]},{&l_772,&g_871,&g_103[3][0][2],&g_103[1][0][2]},{&l_772,&g_871,&g_871,&l_772},{&l_772,&g_103[1][0][2],&g_103[3][0][2],&g_871},{&g_103[1][0][2],&g_871,(void*)0,&g_103[0][0][2]},{(void*)0,&l_772,&g_871,&g_103[0][0][2]},{(void*)0,&g_871,(void*)0,&g_871},{&l_772,&g_103[1][0][2],&g_103[1][0][1],&l_772},{(void*)0,&g_871,&g_103[3][0][2],&g_103[1][0][2]}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_804[i] = 5L;
        if ((safe_div_func_uint32_t_u_u(((((*l_769) = l_768) != &g_189) & g_191), ((*l_772) |= (safe_mod_func_uint16_t_u_u(p_23, (**g_189)))))))
        {
            return g_108;

                    }
        else
        {
            int32_t l_796 = (-3L);
            int8_t *l_819 = &g_79;
            int32_t l_834 = 0xB11F9B60L;
            int32_t l_835 = 1L;
            int32_t l_846 = 0x20C90D98L;
            int32_t l_847 = 0xFC9558DAL;
            int32_t l_849[8][4] = {{0x892434E9L,(-9L),0x1F9716CFL,0x1F9716CFL},{0x34D9DCC4L,0x34D9DCC4L,1L,(-8L)},{1L,0xF59AF63EL,0x19C4C173L,0x00F2C618L},{0x19C4C173L,0x00F2C618L,0x892434E9L,0x19C4C173L},{0x34D9DCC4L,0x00F2C618L,(-8L),0x00F2C618L},{0x00F2C618L,0xF59AF63EL,0x1F9716CFL,(-8L)},{3L,0x34D9DCC4L,0x892434E9L,0x1F9716CFL},{1L,(-9L),(-9L),0x00F2C618L}};
            uint32_t l_855 = 1UL;
            union U2 l_858[10] = {{0x87608C8FL},{1UL},{1UL},{0x87608C8FL},{0x234DAE88L},{0x87608C8FL},{1UL},{1UL},{0x87608C8FL},{0x234DAE88L}};
            uint64_t *l_859 = &g_37;
            int32_t **l_941[6][6][2] = {{{&g_871,&l_772},{&g_103[3][0][2],&g_871},{&g_871,&g_103[3][0][2]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[0][1][0],&l_772},{&g_871,&g_103[3][0][2]}},{{&g_871,&g_103[2][0][1]},{(void*)0,(void*)0},{&l_772,&l_772},{&g_103[2][0][1],&g_871},{&g_103[3][0][2],&g_103[0][1][0]},{(void*)0,&g_871}},{{(void*)0,(void*)0},{&g_103[3][0][2],&g_871},{&g_103[3][0][2],(void*)0},{(void*)0,&g_871},{(void*)0,&g_103[0][1][0]},{&g_103[3][0][2],&g_871}},{{&g_103[2][0][1],&l_772},{&l_772,(void*)0},{(void*)0,&g_103[2][0][1]},{&g_871,&g_103[3][0][2]},{&g_871,&g_103[3][0][2]},{&g_871,&g_103[2][0][1]}},{{(void*)0,(void*)0},{&l_772,&l_772},{&g_103[2][0][1],&g_871},{&g_103[3][0][2],&g_103[0][1][0]},{(void*)0,&g_871},{(void*)0,(void*)0}},{{&g_103[3][0][2],&g_871},{&g_103[3][0][2],(void*)0},{(void*)0,&g_871},{(void*)0,&g_103[0][1][0]},{&g_103[3][0][2],&g_871},{&g_103[2][0][1],&l_772}}};
            int i, j, k;
            for (g_191 = 0; (g_191 >= 23); ++g_191)
            {
                int32_t *l_778 = &l_739;
                int16_t ***l_781[4][3][7] = {{{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,(void*)0,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257}},{{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,(void*)0},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257}},{{&g_257,&g_257,(void*)0,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257}},{{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,(void*)0,&g_257,&g_257,&g_257,&g_257,&g_257}}};
                uint16_t *l_783 = &g_140[2];
                union U1 *l_786 = (void*)0;
                int64_t *l_803[10] = {(void*)0,&g_618[3],(void*)0,&g_674.f2,&g_674.f2,(void*)0,&g_618[3],(void*)0,&g_674.f2,&g_674.f2};
                union U0 *l_809 = &g_514[2];
                int8_t * const l_822 = &g_789[2];
                int32_t l_833 = 0x8017B9E2L;
                int32_t l_845 = 0L;
                int32_t l_850 = 0x65398F91L;
                int32_t l_851 = 0x80343461L;
                int32_t l_852 = 0L;
                int32_t l_853 = 0xD35AE216L;
                int32_t l_854 = 0xAC6C7799L;
                int i, j, k;
                if ((((~(*l_772)) != l_775) , ((func_31(((*l_784) &= ((func_31((*l_772), (((*g_676) = ((((*l_778) = p_21) || ((void*)0 == &g_257)) & ((*l_783) = (l_779[0] != (l_782 = &l_780))))) != (~p_22)), l_784, p_21, (*l_772)) , 1UL) <= (-1L))), p_22, l_784, g_360, g_227[1].f0) != p_22) , 0xA9C60FB5L)))
                {
                    union U2 l_785 = {0x36B346AFL};
                    return l_785;


                                    }
                else
                {
                    const uint32_t * const l_788[7][2][5] = {{{&g_360,(void*)0,&g_360,(void*)0,&g_360},{(void*)0,&l_734,&l_734,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_734,&l_734,(void*)0}},{{&g_360,(void*)0,&g_360,(void*)0,&g_360},{(void*)0,&l_734,&l_734,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_734,&l_734,(void*)0}},{{&g_360,(void*)0,&g_360,(void*)0,&g_360},{(void*)0,&l_734,&l_734,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_734,&l_734,(void*)0}},{{&g_360,(void*)0,&g_360,(void*)0,&g_360},{(void*)0,&l_734,&l_734,(void*)0,(void*)0}}};
                    uint64_t *l_797 = (void*)0;
                    uint64_t *l_798[1][2];
                    int64_t *l_799 = &g_209;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_798[i][j] = (void*)0;
                    }
                    (*l_772) = func_59(&g_726);
                    (*g_787) = l_786;

                    ((g_582 == 0) ? (void) (0) : __assert_fail ("g_582 == 0", "4.c", 3042, __PRETTY_FUNCTION__));
                    (*l_772) = ((((+(l_788[5][0][1] == (((*l_799) &= ((!(g_789[2] , ((p_23 , ((g_236 = ((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((p_22 , (g_793 , (safe_sub_func_uint64_t_u_u(g_618[4], ((g_545 || 0x38EBL) ^ ((*l_778) = ((**g_415) && l_796))))))), (-9L))))) & l_796)) , (-1L))) != p_23))) | (*g_416))) , l_778))) && (*g_676)) && 0xC7L) < p_22);
                }

                ((g_582 == 0) ? (void) (0) : __assert_fail ("g_582 == 0", "4.c", 3046, __PRETTY_FUNCTION__));
                if ((safe_unary_minus_func_int32_t_s((((*l_778) && (*g_676)) <= (((((safe_add_func_int64_t_s_s((+(l_804[0] = ((*l_772) > g_286[4].f0))), ((*l_778) , g_545))) , ((((**g_189) == g_637[4]) ^ ((*l_783)++)) < 4294967287UL)) || l_807) ^ 0x34B3L) & 0x463E858CL)))))
                {
                    union U0 **l_810 = (void*)0;
                    union U0 **l_811 = &g_220[6];
                    int32_t l_814 = 0x91D00F97L;
                    int32_t l_823 = 0x4B1509DBL;
                    int32_t l_844 = 0L;
                    int32_t l_848[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_848[i] = 0xF43BA1C3L;
                    g_103[3][0][2] = (l_808 , &g_47[1][6]);
                    (*l_778) ^= ((*l_772) &= (&g_674 == ((*l_811) = l_809)));
                    if ((l_814 = (safe_lshift_func_uint8_t_u_s(p_22, 5))))
                    {
                        int32_t **l_818 = &g_103[4][1][0];
                        int32_t *l_824 = &l_740[5];
                        int32_t *l_825 = &g_47[0][0];
                        int32_t *l_826 = &l_804[0];
                        int32_t *l_827 = &l_804[0];
                        int32_t *l_828 = &l_804[0];
                        uint16_t l_829 = 0x60EBL;
                        (*l_824) = (0x65BDL < (safe_sub_func_uint8_t_u_u((l_817[0][3][4] , (*g_676)), (((func_59((g_78 = func_69(((*l_818) = l_778), (func_59(l_819) <= ((void*)0 == &p_23)), ((safe_mod_func_int32_t_s_s(((*l_778) = func_59(func_69(&l_814, g_155, p_21, p_21, l_822))), 0x589E186AL)) != (*l_772)), l_823, &g_789[0]))) , 4294967288UL) > p_21) == (*l_772)))));

                        ((g_78 == &g_79) ? (void) (0) : __assert_fail ("g_78 == &g_79", "4.c", 3071, __PRETTY_FUNCTION__));
                        --l_829;
                    }
                    else
                    {
                        int32_t *l_832[8][1][5] = {{{(void*)0,&l_744,(void*)0,&l_823,(void*)0}},{{(void*)0,(void*)0,&l_744,(void*)0,(void*)0}},{{(void*)0,&l_823,(void*)0,&l_744,(void*)0}},{{(void*)0,&l_804[0],&l_804[0],(void*)0,&l_804[0]}},{{(void*)0,&l_823,(void*)0,&l_823,(void*)0}},{{&l_804[0],(void*)0,&l_804[0],&l_804[0],(void*)0}},{{(void*)0,&l_744,(void*)0,&l_823,(void*)0}},{{(void*)0,(void*)0,&l_744,(void*)0,(void*)0}}};
                        uint32_t l_836[7];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_836[i] = 6UL;
                        ++l_836[3];
                        if (p_21)
                            break;
                        if (p_21)
                            break;
                    }
                    if (p_21)
                    {
                        int32_t *l_843[1][8] = {{&l_804[0],&l_739,&l_804[0],&l_739,&l_804[0],&l_739,&l_804[0],&l_739}};
                        int i, j;
                        if (p_23)
                            break;
                        (*l_772) = p_22;
                        (*l_778) = ((*l_772) = (safe_div_func_int8_t_s_s(((*l_819) = func_59(&g_789[2])), (safe_mul_func_uint16_t_u_u(g_140[2], (g_726 ^ p_23))))));
                        l_855--;
                    }
                    else
                    {
                        (*l_778) |= func_59(l_730);
                    }
                }
                else
                {
                    return l_858[0];


                                    }
            }



            ((g_582 == 0 || g_582 == &g_583) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583", "4.c", 3112, __PRETTY_FUNCTION__));
            if (((void*)0 != l_859))
            {
                uint32_t l_864 = 1UL;
                int32_t l_883 = 0L;
                uint64_t l_884 = 0x7B224A2026C205C1LL;
                uint64_t **l_900 = &l_859;
                uint64_t *l_902 = &g_236;
                uint64_t **l_901 = &l_902;
                const union U2 l_916 = {0xEE73F6C5L};
                uint16_t *l_940 = &g_140[5];
                for (l_796 = 9; (l_796 >= 0); l_796 -= 1)
                {
                    uint16_t l_863 = 2UL;
                    for (l_834 = 0; (l_834 <= 9); l_834 += 1)
                    {
                        int32_t *l_865 = &l_740[5];
                        union U2 *l_868 = &g_108;
                        union U2 **l_867 = &l_868;
                        union U0 *l_869 = &g_793;
                        union U0 **l_870 = &g_220[7];
                        int i;
                        (*l_865) &= (((-1L) >= (g_637[l_834] | (*g_190))) || (g_789[2] | (((l_808 , g_47[0][0]) && ((p_23 , (safe_mod_func_uint32_t_u_u((g_862 <= (((*g_676) > p_21) , l_863)), l_863))) > l_864)) | 1L)));
                        (*l_772) ^= (l_866 == ((*l_867) = &g_108));
                        (*l_870) = l_869;
                        (*l_865) ^= (-1L);
                    }
                    for (l_855 = 0; (l_855 <= 1); l_855 += 1)
                    {
                        int64_t *l_874 = (void*)0;
                        int32_t l_875 = 8L;
                        int8_t * const l_876 = &g_79;
                        int i, j;
                        g_103[4][1][0] = ((func_59(func_69((g_871 = &l_804[0]), (g_140[(l_855 + 1)] < (++g_637[(l_855 + 3)])), g_42[0][9], (l_875 = g_379[1][1][9]), l_876)) != (-1L)) , (void*)0);

                        (((g_871 >= &l_804[0] && g_871 <= &l_804[0])) ? (void) (0) : __assert_fail ("(g_871 >= &l_804[0] && g_871 <= &l_804[0])", "4.c", 3147, __PRETTY_FUNCTION__));
                        g_47[l_855][l_855] = (p_23 || 65527UL);
                        (*g_871) = ((*l_772) = p_22);
                        (*g_877) = &l_804[0];
                    }
                    for (l_734 = 0; (l_734 <= 0); l_734 += 1)
                    {
                        int i, j;
                        if (g_42[l_734][(l_734 + 8)])
                            break;
                    }
                    for (g_37 = 2; (g_37 <= 9); g_37 += 1)
                    {
                        int32_t *l_878 = &l_804[0];
                        int32_t *l_879 = &l_740[7];
                        int32_t *l_880 = &l_740[5];
                        int32_t *l_881 = &l_835;
                        int32_t *l_882[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_882[i] = &l_834;
                        (*l_772) = (g_108 , (*g_871));
                        l_884++;
                    }
                }



                (((g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348) ? (void) (0) : __assert_fail ("(g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348", "4.c", 3175, __PRETTY_FUNCTION__));
                if (((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((*g_89), (safe_lshift_func_uint16_t_u_u((((*l_866) , (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_209 | p_22), l_835)), (((*l_901) = ((*l_900) = l_899[4])) == l_899[4]))), p_23))) , 0x65DEL), 10)))) == g_377[0][3][1].f0) ^ 6UL), g_360)) | g_379[0][3][5]))
                {
                    (*l_772) ^= func_59(&g_789[2]);
                }
                else
                {
                    union U1 ** const l_905[10] = {&g_582,&g_582,&g_582,&g_582,&g_582,&g_582,&g_582,&g_582,&g_582,&g_582};
                    int8_t *l_920 = &g_726;
                    int8_t **l_921 = &g_78;
                    int8_t **l_922 = &g_78;
                    int8_t **l_923[5] = {&g_78,&g_78,&g_78,&g_78,&g_78};
                    uint32_t **l_925 = (void*)0;
                    uint32_t *l_927 = &g_153;
                    uint32_t **l_926 = &l_927;
                    int8_t ***l_930 = &l_922;
                    union U2 l_933 = {1UL};
                    int i;
                    for (l_808.f1 = (-6); (l_808.f1 >= 21); l_808.f1++)
                    {
                        (*g_906) = ((p_21 || ((*g_871) = l_796)) , l_905[5]);
                    }

                                        (*l_772) = ((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_22, func_59(&l_807))), (*g_676))) ^ g_726);
                    if ((((((safe_add_func_int32_t_s_s(p_22, (safe_mod_func_uint64_t_u_u(p_22, func_59((((p_23 >= 0L) ^ (l_916 , (g_917[1][2] , (&l_784 != ((*l_930) = ((safe_rshift_func_uint8_t_u_s(((((*l_926) = (func_59((l_924 = (g_89 = l_920))) , (void*)0)) == l_928) && p_21), 2)) , g_929)))))) , (void*)0)))))) | 1UL) >= g_140[2]) <= l_931) < (*l_772)))
                    {
                        (*g_932) = l_927;

                        ((g_871 == 0) ? (void) (0) : __assert_fail ("g_871 == 0", "4.c", 3203, __PRETTY_FUNCTION__));
                        return l_933;


                                            }
                    else
                    {
                        l_772 = l_927;

                        ((l_772 == 0) ? (void) (0) : __assert_fail ("l_772 == 0", "4.c", 3212, __PRETTY_FUNCTION__));
                        (*g_871) ^= (safe_lshift_func_uint8_t_u_u(l_933.f0, (p_21 , (safe_mul_func_uint16_t_u_u((g_140[2]++), 0xE014L)))));
                        return l_933;



                                            }
                }

                ((l_859 == 0 || l_859 == &g_236 || l_859 == &g_37) ? (void) (0) : __assert_fail ("l_859 == 0 || l_859 == &g_236 || l_859 == &g_37", "4.c", 3221, __PRETTY_FUNCTION__));
                ((l_902 == 0 || l_902 == &g_236 || l_902 == &g_37) ? (void) (0) : __assert_fail ("l_902 == 0 || l_902 == &g_236 || l_902 == &g_37", "4.c", 3222, __PRETTY_FUNCTION__));
                (*g_871) = (((((*l_940) = ((*g_932) == &g_47[0][3])) == func_59(((*g_929) = &g_789[2]))) , (&g_618[1] != l_899[2])) , l_849[3][2]);

                (((g_78 >= &g_789[0] && g_78 <= &g_789[2])) ? (void) (0) : __assert_fail ("(g_78 >= &g_789[0] && g_78 <= &g_789[2])", "4.c", 3225, __PRETTY_FUNCTION__));
            }
            else
            {
                return g_108;


                            }

            (((g_78 >= &g_789[0] && g_78 <= &g_789[2])) ? (void) (0) : __assert_fail ("(g_78 >= &g_789[0] && g_78 <= &g_789[2])", "4.c", 3234, __PRETTY_FUNCTION__));


            ((l_859 == 0 || l_859 == &g_236 || l_859 == &g_37) ? (void) (0) : __assert_fail ("l_859 == 0 || l_859 == &g_236 || l_859 == &g_37", "4.c", 3237, __PRETTY_FUNCTION__));
            (((g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348) ? (void) (0) : __assert_fail ("(g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348", "4.c", 3238, __PRETTY_FUNCTION__));
            (*g_877) = &l_931;


        }

        (((g_78 >= &g_789[0] && g_78 <= &g_789[2])) ? (void) (0) : __assert_fail ("(g_78 >= &g_789[0] && g_78 <= &g_789[2])", "4.c", 3244, __PRETTY_FUNCTION__));


        ((g_256 == 0) ? (void) (0) : __assert_fail ("g_256 == 0", "4.c", 3247, __PRETTY_FUNCTION__));
        ((g_582 == 0 || g_582 == &g_583) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583", "4.c", 3248, __PRETTY_FUNCTION__));
        (((g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348) ? (void) (0) : __assert_fail ("(g_871 >= &l_804[0] && g_871 <= &l_804[0]) || g_871 == &g_348", "4.c", 3249, __PRETTY_FUNCTION__));
        l_943 = (*g_932);

        (((l_943 >= &l_804[0] && l_943 <= &l_804[0]) || l_943 == &g_348) ? (void) (0) : __assert_fail ("(l_943 >= &l_804[0] && l_943 <= &l_804[0]) || l_943 == &g_348", "4.c", 3252, __PRETTY_FUNCTION__));
        (*g_871) = 0x23BA614EL;
    }




    ((g_256 == 0 || g_256 == &g_257) ? (void) (0) : __assert_fail ("g_256 == 0 || g_256 == &g_257", "4.c", 3259, __PRETTY_FUNCTION__));
    ((g_582 == 0 || g_582 == &g_583) ? (void) (0) : __assert_fail ("g_582 == 0 || g_582 == &g_583", "4.c", 3260, __PRETTY_FUNCTION__));


    for (g_236 = 0; g_236 < 2; g_236 += 1)
    {
        for (g_79 = 0; g_79 < 7; g_79 += 1)
        {
            g_47[g_236][g_79] = 4L;
        }
    }
    return l_808;


    }







static uint16_t func_31(int8_t p_32, int32_t p_33, int8_t * p_34, const uint8_t p_35, uint32_t p_36)
{
    return p_36;
}







static int8_t * func_38(uint8_t p_39)
{
    int8_t *l_43 = (void*)0;
    int32_t l_48[3];
    uint32_t l_54 = 0x0C255375L;
    int32_t *l_75 = (void*)0;
    int8_t *l_81 = &g_79;
    int8_t **l_80 = &l_81;
    int8_t **l_82 = (void*)0;
    int8_t *l_84 = &g_79;
    int8_t **l_83 = &l_84;
    int8_t *l_86 = &g_79;
    int8_t **l_85 = &l_86;
    int32_t *l_101 = &g_47[1][1];
    const int16_t ****l_271 = (void*)0;
    int16_t *l_312[4];
    int16_t *l_313 = &g_191;
    uint64_t *l_334 = (void*)0;
    uint64_t *l_335 = &g_236;
    uint32_t l_366[1][3][6] = {{{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}}};
    union U0 *l_378 = (void*)0;
    int64_t l_429[2][4];
    int64_t l_502 = 0L;
    int32_t l_537 = 6L;
    int32_t l_551[10] = {0xE8C62A11L,0xE8C62A11L,9L,0xF1F0EF24L,9L,0xE8C62A11L,0xE8C62A11L,9L,0xF1F0EF24L,9L};
    int64_t l_580 = 1L;
    int8_t l_617 = (-2L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_48[i] = 0x7C7A5019L;
    for (i = 0; i < 4; i++)
        l_312[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_429[i][j] = (-1L);
    }
lbl_642:
    for (p_39 = 0; (p_39 <= 0); p_39 += 1)
    {
        return l_43;




    }
lbl_403:
    for (p_39 = 0; (p_39 <= 57); p_39 = safe_add_func_int16_t_s_s(p_39, 5))
    {
        int32_t *l_46 = &g_47[0][0];
        int32_t *l_49 = &l_48[1];
        int32_t *l_50 = &l_48[0];
        int32_t l_51 = 0L;
        int32_t *l_52 = &g_47[0][6];
        int32_t *l_53[4][6];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_53[i][j] = &l_48[0];
        }
        l_54++;
    }
    if (((safe_mod_func_uint8_t_u_u(func_59(l_43), (safe_sub_func_int64_t_s_s(0L, func_59(func_64((func_59(func_69((l_75 = &l_48[0]), ((safe_add_func_uint32_t_u_u((((*l_80) = g_78) == ((*l_85) = ((*l_83) = &g_79))), (((safe_mul_func_uint16_t_u_u((func_59((g_89 = &g_79)) != (((safe_mod_func_int16_t_s_s((+(l_48[0] | 1L)), p_39)) || 0UL) , p_39)), l_48[2])) <= l_48[0]) , l_48[2]))) , g_37), p_39, l_48[0], &g_79)) , 18446744073709551615UL), l_101, l_101, (*l_101))))))) <= p_39))
    {
        int16_t *l_262[5] = {&g_191,&g_191,&g_191,&g_191,&g_191};
        int16_t ** const l_261[5][2] = {{&l_262[3],&l_262[3]},{&l_262[3],&l_262[3]},{&l_262[3],&l_262[3]},{&l_262[3],&l_262[3]},{&l_262[3],&l_262[3]}};
        int32_t l_263 = (-1L);
        int32_t *l_264 = &l_263;
        int32_t *l_265 = &l_48[2];
        int32_t *l_266 = &l_48[0];
        int32_t *l_267[2][7][5] = {{{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&g_47[0][0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&g_47[0][0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]}},{{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&g_47[0][0],&l_48[0],&l_48[0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&l_48[0],&g_47[0][0],&g_47[0][0],&l_48[0],&g_47[0][0]},{&l_48[0],&l_48[0],&l_48[0],&l_48[0],&l_48[0]},{&g_47[0][0],&l_48[0],&g_47[0][0],&g_47[0][0],&l_48[0]},{&l_48[0],&g_47[0][0],&g_47[0][0],&l_48[0],&g_47[0][0]}}};
        uint32_t l_268 = 0x6F412E92L;
        int8_t *l_290 = (void*)0;
        uint64_t l_310 = 0x8187688DBAD35AB4LL;
        int8_t *l_352 = &g_79;
        uint32_t l_357 = 4294967295UL;
        uint32_t **l_417 = (void*)0;
        int32_t l_431 = 0L;
        uint32_t l_452[5][7][5] = {{{0x9EBC3FE0L,1UL,0xB20A22C4L,0xDF060BF4L,0x162A2203L},{4294967289UL,1UL,4294967295UL,0x60DC3D40L,4294967289UL},{4294967286UL,0xC8CCD704L,4294967289UL,0xDF060BF4L,4294967289UL},{4294967286UL,4294967286UL,0xB20A22C4L,0xEC15B7B5L,0xFE2B21BBL},{4294967289UL,0x9EBC3FE0L,4294967289UL,0x60DC3D40L,0xFE2B21BBL},{0x9EBC3FE0L,0xC8CCD704L,4294967295UL,0xD9DA684DL,4294967289UL},{1UL,0x9EBC3FE0L,0xB20A22C4L,0xD9DA684DL,4294967289UL}},{{4294967289UL,4294967286UL,1UL,0x60DC3D40L,0x162A2203L},{1UL,0xC8CCD704L,1UL,0xEC15B7B5L,4294967289UL},{0x9EBC3FE0L,1UL,0xB20A22C4L,0xDF060BF4L,0x162A2203L},{4294967289UL,1UL,4294967295UL,0x60DC3D40L,4294967289UL},{4294967286UL,0xC8CCD704L,4294967289UL,0xDF060BF4L,4294967289UL},{4294967286UL,4294967286UL,0xB20A22C4L,0xEC15B7B5L,0xFE2B21BBL},{4294967289UL,0x9EBC3FE0L,4294967289UL,0x60DC3D40L,0xFE2B21BBL}},{{0x9EBC3FE0L,0xC8CCD704L,4294967295UL,0xD9DA684DL,0x8E7C4E1EL},{4UL,4294967292UL,1UL,1UL,0xDF060BF4L},{5UL,0x6607799EL,1UL,0xC8CCD704L,0xD9DA684DL},{4UL,0UL,1UL,4294967286UL,0x8E7C4E1EL},{4294967292UL,4UL,1UL,0x9EBC3FE0L,0xD9DA684DL},{5UL,4UL,0x60DC3D40L,0xC8CCD704L,0xDF060BF4L},{0x6607799EL,0UL,0x8E7C4E1EL,0x9EBC3FE0L,0x8E7C4E1EL}},{{0x6607799EL,0x6607799EL,1UL,4294967286UL,0xEC15B7B5L},{5UL,4294967292UL,0x8E7C4E1EL,0xC8CCD704L,0xEC15B7B5L},{4294967292UL,0UL,0x60DC3D40L,1UL,0x8E7C4E1EL},{4UL,4294967292UL,1UL,1UL,0xDF060BF4L},{5UL,0x6607799EL,1UL,0xC8CCD704L,0xD9DA684DL},{4UL,0UL,1UL,4294967286UL,0x8E7C4E1EL},{4294967292UL,4UL,1UL,0x9EBC3FE0L,0xD9DA684DL}},{{5UL,4UL,0x60DC3D40L,0xC8CCD704L,0xDF060BF4L},{0x6607799EL,0UL,0x8E7C4E1EL,0x9EBC3FE0L,0x8E7C4E1EL},{0x6607799EL,0x6607799EL,1UL,4294967286UL,0xEC15B7B5L},{5UL,4294967292UL,0x8E7C4E1EL,0xC8CCD704L,0xEC15B7B5L},{4294967292UL,0UL,0x60DC3D40L,1UL,0x8E7C4E1EL},{4UL,4294967292UL,1UL,1UL,0UL},{0x5BC04C2CL,4294967295UL,9UL,0xC7C86226L,0UL}}};
        const uint64_t l_494 = 0xC7EC1F5672462E8CLL;
        int i, j, k;
        for (g_153 = 0; (g_153 != 46); g_153 = safe_add_func_uint8_t_u_u(g_153, 8))
        {
            int16_t l_248 = (-6L);
            int16_t *l_255 = &g_191;
            int16_t **l_254 = &l_255;
            int16_t ***l_253 = &l_254;
            for (g_108.f1 = (-6); (g_108.f1 == 16); g_108.f1 = safe_add_func_int16_t_s_s(g_108.f1, 6))
            {
                int32_t *l_244 = &g_47[0][0];
                (*l_75) &= p_39;
                for (l_54 = 0; (l_54 <= 1); l_54 += 1)
                {
                    int32_t **l_243[6][9][2] = {{{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101}},{{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]}},{{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101}},{{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]}},{{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101}},{{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]},{&g_103[3][0][2],&g_103[1][0][1]},{&g_103[3][0][2],&g_103[3][0][2]},{&g_103[5][1][0],&l_101},{&g_103[3][0][2],&g_103[5][1][0]},{&g_103[3][0][2],&l_101},{&g_103[5][1][0],&g_103[3][0][2]}}};
                    int i, j, k;
                    g_103[5][1][1] = &l_48[(l_54 + 1)];
                    g_47[l_54][(l_54 + 5)] = (-2L);
                    l_244 = &l_48[(l_54 + 1)];

                    (((l_244 >= &l_48[0] && l_244 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_244 >= &l_48[0] && l_244 <= &l_48[2])", "4.c", 3392, __PRETTY_FUNCTION__));
                }

                (((l_244 >= &l_48[0] && l_244 <= &l_48[2]) || (l_244 >= &g_47[0][0] && l_244 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(l_244 >= &l_48[0] && l_244 <= &l_48[2]) || (l_244 >= &g_47[0][0] && l_244 <= &g_47[1][6])", "4.c", 3395, __PRETTY_FUNCTION__));
                for (l_54 = 0; (l_54 <= 9); l_54 += 1)
                {
                    for (g_191 = 0; (g_191 <= 9); g_191 += 1)
                    {
                        const uint32_t l_245 = 0x9FE20B21L;
                        int16_t ***l_259 = &g_257;
                        int16_t ****l_258 = &l_259;
                        int64_t *l_260 = &g_42[0][6];
                        if (l_245)
                            break;
                        (*l_244) = (safe_mul_func_uint16_t_u_u(l_248, ((((((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((*g_78), g_155)), p_39)) , l_253) != ((*l_258) = g_256)) && ((*l_260) = p_39)) , (*g_256)) == l_261[1][0])));
                    }
                }
            }

                    }
lbl_324:
        l_268--;
        if (((void*)0 != l_271))
        {
            int16_t *l_278 = &g_191;
            int32_t l_281 = 0x7DD37DADL;
            union U1 * const l_285 = NULL;
            int8_t *l_333[2];
            uint64_t *l_336[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t *l_342 = &g_79;
            int32_t l_345 = 0x648F370FL;
            int i;
            for (i = 0; i < 2; i++)
                l_333[i] = (void*)0;
            if (p_39)
            {
                int8_t l_279 = (-3L);
                int32_t l_280 = 0xDFA1F455L;
                union U2 l_307 = {4294967295UL};
                int16_t *l_314 = &g_191;
                const int32_t *l_316 = &l_280;
                const int32_t **l_315 = &l_316;
                (*l_75) ^= (p_39 & 0xB5L);
                for (g_153 = (-17); (g_153 >= 8); g_153 = safe_add_func_uint64_t_u_u(g_153, 1))
                {
                    (*l_266) &= (safe_lshift_func_uint16_t_u_u(p_39, 13));
                    (*l_101) |= (safe_sub_func_uint16_t_u_u(g_227[1].f0, p_39));
                    if (p_39)
                        break;
                }
                if ((g_37 > ((void*)0 == l_278)))
                {
                    uint8_t l_282[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    union U1 **l_287 = (void*)0;
                    union U1 *l_289 = (void*)0;
                    union U1 **l_288 = &l_289;
                    int i;
                    l_282[2]++;
                    (*l_288) = l_285;

                    (*l_265) ^= func_59(l_290);
                }
                else
                {
                    int64_t l_299 = 0xF465ACCD9506A2E5LL;
                    uint16_t *l_308 = (void*)0;
                    uint16_t *l_309[9] = {&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2]};
                    uint8_t *l_311 = &g_155;
                    int i;
                    for (g_225.f0 = 1; (g_225.f0 <= 9); g_225.f0 += 1)
                    {
                        (*l_75) = (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((0L && ((*g_89) > (safe_mod_func_uint32_t_u_u((func_59((p_39 , &g_79)) , 0x5D45A269L), (*l_101))))) <= p_39) && (2L != (*g_89))), p_39)), 18446744073709551615UL));
                        (*l_101) &= (*l_75);
                    }
                    for (g_236 = 26; (g_236 != 12); g_236 = safe_sub_func_int8_t_s_s(g_236, 5))
                    {
                        (*l_264) = (18446744073709551615UL > g_42[0][5]);
                        if (g_37)
                            goto lbl_323;
                        if (l_299)
                            continue;
                    }
lbl_323:
                    if ((safe_lshift_func_int8_t_s_s((g_37 <= ((func_59(&g_79) , (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*g_89) != p_39), ((*l_278) = ((((*l_311) = ((safe_unary_minus_func_int32_t_s((func_59((l_307 , ((*l_85) = &l_279))) , (((g_140[2] = ((l_299 == 1UL) | g_209)) || l_299) == l_280)))) > l_310)) ^ g_227[1].f0) < g_153)))), g_79))) || p_39)), 6)))
                    {
                        uint32_t *l_317 = &g_153;
                        int8_t **l_320[9][1][2];
                        int8_t ***l_321 = (void*)0;
                        int8_t ***l_322 = &l_82;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_320[i][j][k] = &l_81;
                            }
                        }
                        (*l_322) = (((l_312[1] = (void*)0) == (l_314 = l_313)) , ((l_315 != (void*)0) , (((*l_317)--) , l_320[3][0][0])));

                        ((l_82 == &l_81) ? (void) (0) : __assert_fail ("l_82 == &l_81", "4.c", 3493, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        return l_290;




                    }

                    ((l_82 == &l_81) ? (void) (0) : __assert_fail ("l_82 == &l_81", "4.c", 3504, __PRETTY_FUNCTION__));
                    ((l_86 == &l_279) ? (void) (0) : __assert_fail ("l_86 == &l_279", "4.c", 3505, __PRETTY_FUNCTION__));
                    for (l_280 = 7; (l_280 >= 0); l_280 -= 1)
                    {
                        if (p_39)
                            break;
                        (*l_315) = &l_281;

                        ((l_316 == &l_281) ? (void) (0) : __assert_fail ("l_316 == &l_281", "4.c", 3512, __PRETTY_FUNCTION__));
                    }

                    ((l_316 == &l_281 || l_316 == &l_280) ? (void) (0) : __assert_fail ("l_316 == &l_281 || l_316 == &l_280", "4.c", 3515, __PRETTY_FUNCTION__));
                }

                ((l_82 == &l_81 || l_82 == 0) ? (void) (0) : __assert_fail ("l_82 == &l_81 || l_82 == 0", "4.c", 3518, __PRETTY_FUNCTION__));
                ((l_86 == &l_279 || l_86 == &g_79) ? (void) (0) : __assert_fail ("l_86 == &l_279 || l_86 == &g_79", "4.c", 3519, __PRETTY_FUNCTION__));
                ((l_316 == &l_281 || l_316 == &l_280) ? (void) (0) : __assert_fail ("l_316 == &l_281 || l_316 == &l_280", "4.c", 3520, __PRETTY_FUNCTION__));
                for (g_236 = 0; g_236 < 4; g_236 += 1)
                {
                    l_312[g_236] = &g_191;
                }

            }
            else
            {
                int16_t l_328 = 0L;
                if (p_39)
                {
                    int32_t l_327 = 0x3040D438L;
                    if (l_54)
                        goto lbl_324;
                    if (((safe_sub_func_int16_t_s_s(((*l_278) = l_327), l_328)) > (0xD1D20C5E9B8A3B8FLL | p_39)))
                    {
                        int64_t *l_337 = &g_209;
                        (*l_264) ^= (safe_sub_func_int64_t_s_s(((((((*l_337) = (safe_div_func_uint32_t_u_u(func_59(l_333[1]), ((p_39 && p_39) & ((l_335 = l_334) != l_336[1]))))) , 0x9F6A1AED2F89BA97LL) < (((*l_265) , ((*l_101) ^= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((*l_266) = (0x98L > (*g_89))), g_140[2])), 2)))) & p_39)) != g_227[1].f0) , 0x10CDD6D677B8B796LL), g_236));

                        ((l_335 == 0) ? (void) (0) : __assert_fail ("l_335 == 0", "4.c", 3540, __PRETTY_FUNCTION__));
                        (*l_266) ^= ((void*)0 == l_333[1]);
                    }
                    else
                    {
                        (*l_265) ^= 0xD4CAE006L;
                        return l_342;




                    }

                    ((l_335 == 0) ? (void) (0) : __assert_fail ("l_335 == 0", "4.c", 3553, __PRETTY_FUNCTION__));
                    for (l_54 = 0; (l_54 <= 1); l_54 += 1)
                    {
                        return &g_79;




                    }
                }
                else
                {
                    int64_t l_351 = 1L;
                    g_348 &= (((func_59(((*l_80) = func_64(((((l_281 = g_140[2]) == g_140[2]) >= p_39) ^ (p_39 | (((p_39 ^ (p_39 <= (p_39 != (safe_mul_func_int8_t_s_s((l_345 = 1L), ((safe_sub_func_uint8_t_u_u(g_155, p_39)) >= 0x32L)))))) & 0x40E1DABCL) >= 1UL))), &l_263, &l_263, g_42[0][6]))) ^ 0x4F16C0DB6F2181AFLL) , g_108) , (*l_75));

                    ((l_81 == &g_79 || l_81 == 0) ? (void) (0) : __assert_fail ("l_81 == &g_79 || l_81 == 0", "4.c", 3568, __PRETTY_FUNCTION__));
                    for (l_263 = (-24); (l_263 != (-3)); ++l_263)
                    {
                        (*l_101) &= (l_351 = l_345);
                    }
                }

                ((l_81 == &g_79 || l_81 == 0) ? (void) (0) : __assert_fail ("l_81 == &g_79 || l_81 == 0", "4.c", 3575, __PRETTY_FUNCTION__));
                ((l_335 == &g_236 || l_335 == 0) ? (void) (0) : __assert_fail ("l_335 == &g_236 || l_335 == 0", "4.c", 3576, __PRETTY_FUNCTION__));
                g_103[5][1][1] = (((*l_101) == func_59(l_352)) , &l_281);


                g_348 &= func_59(func_64((5L >= (((g_37 , ((((l_345 | p_39) < (safe_mod_func_uint16_t_u_u(1UL, 7L))) <= g_209) , 0x44521029L)) , (safe_rshift_func_uint8_t_u_s(248UL, 7))) && l_357)), &l_48[1], &l_48[0], g_209));
            }


            ((l_81 == &g_79 || l_81 == 0) ? (void) (0) : __assert_fail ("l_81 == &g_79 || l_81 == 0", "4.c", 3584, __PRETTY_FUNCTION__));
            ((l_82 == &l_81 || l_82 == 0) ? (void) (0) : __assert_fail ("l_82 == &l_81 || l_82 == 0", "4.c", 3585, __PRETTY_FUNCTION__));


            ((l_335 == &g_236 || l_335 == 0) ? (void) (0) : __assert_fail ("l_335 == &g_236 || l_335 == 0", "4.c", 3588, __PRETTY_FUNCTION__));
            return l_342;




        }
        else
        {
            uint8_t l_363 = 0x17L;
            int8_t *l_396[10][3] = {{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79}};
            int32_t l_399[5];
            union U2 l_408[1][8] = {{{0x78DC329FL},{0UL},{0x78DC329FL},{0UL},{0x78DC329FL},{0UL},{0x78DC329FL},{0UL}}};
            int16_t l_426 = 0x6270L;
            int16_t **l_461 = (void*)0;
            int64_t * const l_496 = &g_42[0][9];
            uint32_t l_534[2][6] = {{0xE7CDDB56L,0xE7CDDB56L,0x86642707L,0xE7CDDB56L,0xE7CDDB56L,0x86642707L},{0xE7CDDB56L,0xE7CDDB56L,0x86642707L,0xE7CDDB56L,0xE7CDDB56L,0x86642707L}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_399[i] = 0xF1AAB589L;
            g_103[3][0][2] = &l_48[1];
lbl_471:
            (*l_75) = p_39;
            if ((func_59(&g_79) , p_39))
            {
                int64_t *l_358 = (void*)0;
                int64_t *l_359[10] = {(void*)0,&g_42[0][3],(void*)0,&g_42[0][3],(void*)0,&g_42[0][3],(void*)0,&g_42[0][3],(void*)0,&g_42[0][3]};
                int32_t *l_364 = (void*)0;
                int64_t l_365 = 0L;
                int32_t l_369 = 0xD99BE668L;
                uint32_t *l_375 = &l_54;
                uint32_t **l_374 = &l_375;
                union U0 *l_376 = NULL;
                uint32_t *l_395 = &g_360;
                const int16_t ***l_398 = (void*)0;
                const int16_t ****l_397[1][8];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_397[i][j] = &l_398;
                }
                (*l_266) &= (((g_360 &= 0x82CBD026F69EA5BFLL) | (g_140[2] , ((safe_div_func_uint16_t_u_u((((~((l_363 && ((func_59(l_352) <= 0x82AD80B1C691B823LL) < 0xE5B0L)) <= p_39)) == (*l_264)) != g_42[0][1]), l_366[0][2][1])) <= 0x0A1505DAFDC3B72ALL))) > 0xC56B6647F29D287ELL);
                (*l_101) ^= (((((((safe_div_func_uint8_t_u_u((l_369 != ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_59(&g_79), 7)), 13)) || (&g_153 != ((*l_374) = l_364)))), (g_379[1][1][9] = ((*l_81) &= (l_376 != l_378))))) & (safe_mod_func_int8_t_s_s(((p_39 && (safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((g_360 >= g_348) ^ p_39) || g_286[4].f0), g_191)), g_348)), p_39))) & 0x41L), 0xABL))) | 0xDA9EA3C6F19C642FLL) , p_39) != 0xD5E242D22643D3D8LL) , l_352) == g_89);

                ((l_375 == &l_54 || l_375 == 0) ? (void) (0) : __assert_fail ("l_375 == &l_54 || l_375 == 0", "4.c", 3633, __PRETTY_FUNCTION__));
                (*l_266) ^= (func_59(&g_79) & ((safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((func_59(l_352) >= (((0L && (safe_unary_minus_func_uint64_t_u((((func_59(l_396[3][1]) | p_39) , &g_256) == l_397[0][7])))) <= 0xB8B5L) ^ 0xDFE6L)), g_191)), p_39)) ^ p_39), p_39)) == 0x9BL));
            }
            else
            {
                uint64_t l_400[3][8] = {{0xA0449377ED88C78ELL,0x553C5E00063A5CB0LL,0xA0449377ED88C78ELL,0UL,0UL,0xA0449377ED88C78ELL,0x553C5E00063A5CB0LL,0xA0449377ED88C78ELL},{8UL,0UL,0x8E9C7C7BED70AD52LL,0UL,8UL,8UL,0UL,0x8E9C7C7BED70AD52LL},{8UL,8UL,0UL,0x8E9C7C7BED70AD52LL,0UL,8UL,8UL,0UL}};
                int8_t *l_418 = &g_79;
                int32_t *l_422[3];
                uint32_t l_433 = 4UL;
                const int32_t *l_437 = &g_47[0][0];
                const int32_t **l_436 = &l_437;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_422[i] = &l_399[3];
                l_399[3] = p_39;
                if (((l_400[0][5] != ((*l_75) || ((0xFF38987CL < p_39) , (&g_257 != &g_257)))) , (((safe_div_func_int16_t_s_s((0xFA9F8671L & g_236), ((*l_75) && (-7L)))) , 0xCA3CL) , p_39)))
                {
                    int32_t *l_421 = (void*)0;
                    if (g_225.f0)
                        goto lbl_403;
                    (*l_264) = (safe_mul_func_uint8_t_u_u(((((*l_75) = ((safe_rshift_func_int8_t_s_s(((*l_86) = ((l_408[0][3] , &g_140[2]) == &g_140[0])), 5)) , (safe_rshift_func_uint16_t_u_s(p_39, (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((g_415 == l_417) , (func_59(l_418) , (((*l_335) ^= (((safe_add_func_int64_t_s_s(0x3083931E081DDCB1LL, p_39)) | p_39) <= 0x01433C09L)) > 0xEB06B7622B5DC714LL))), 0xAAA11424332143F3LL)), (*g_78))))))) , 0xD8A9F2FEL) , (*l_75)), p_39));
                    l_421 = &l_263;

                    ((l_421 == &l_263) ? (void) (0) : __assert_fail ("l_421 == &l_263", "4.c", 3656, __PRETTY_FUNCTION__));
                    if (func_59(l_352))
                    {
                        (*l_266) = func_59(((*l_80) = func_69(l_422[1], (*l_264), ((*l_335)--), g_360, (p_39 , (void*)0))));
                        (*l_75) = ((void*)0 == &l_396[1][0]);
                        (*l_421) |= func_59(&g_79);
                    }
                    else
                    {
                        int8_t *l_425 = &g_79;
                        return l_425;




                    }
                }
                else
                {
                    int16_t l_427 = 0x3764L;
                    int32_t l_428 = (-1L);
                    int32_t l_430 = 0xEE561179L;
                    int32_t l_432[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_432[i] = 0x277DC001L;
                    l_433++;
                }
                if (l_54)
                    goto lbl_438;
lbl_438:
                (*l_436) = (void*)0;

                ((l_437 == 0) ? (void) (0) : __assert_fail ("l_437 == 0", "4.c", 3689, __PRETTY_FUNCTION__));
                l_399[3] |= ((((safe_lshift_func_uint16_t_u_s((p_39 <= (safe_lshift_func_uint8_t_u_u(0x2DL, 6))), ((*l_75) &= func_59(l_418)))) < g_191) , &g_103[1][0][0]) == &l_422[1]);
            }
            if ((+func_59(l_352)))
            {
                int64_t l_449 = (-8L);
                int32_t l_451 = 1L;
                int32_t l_498[10][8][3] = {{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}},{{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)}}};
                int64_t l_501 = (-8L);
                int i, j, k;
                for (l_268 = (-10); (l_268 <= 7); l_268 = safe_add_func_int16_t_s_s(l_268, 5))
                {
                    int8_t l_445 = 0x5AL;
                    uint16_t *l_448 = &g_140[2];
                    int32_t l_450 = 0xD50B8F0FL;
                    union U0 **l_458 = &l_378;
                    int16_t **l_463 = (void*)0;
                    int16_t ***l_462 = &l_463;
                    int32_t l_466 = 0xDA11AFA1L;
                    if ((l_445 ^ (safe_lshift_func_uint16_t_u_u(p_39, ((*l_448) = g_379[0][1][3])))))
                    {
                        int32_t **l_455 = &l_267[1][6][2];
                        --l_452[3][4][4];
                        (*l_455) = &l_48[0];
                        if (p_39)
                            continue;
                        if (l_363)
                            goto lbl_403;
                    }
                    else
                    {
                        int32_t **l_456 = &l_265;
                        (*l_456) = &l_431;

                        ((l_265 == &l_431) ? (void) (0) : __assert_fail ("l_265 == &l_431", "4.c", 3723, __PRETTY_FUNCTION__));
                    }
                    for (g_191 = 3; (g_191 >= 0); g_191 -= 1)
                    {
                        int32_t **l_457 = &l_266;
                        (*l_457) = &g_47[1][6];

                        (((l_266 >= &g_47[0][0] && l_266 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(l_266 >= &g_47[0][0] && l_266 <= &g_47[1][6])", "4.c", 3730, __PRETTY_FUNCTION__));
                    }
                    (*l_458) = (void*)0;
                    if (((*l_264) = ((safe_sub_func_int16_t_s_s(((*l_313) |= ((0x3FL && ((p_39 , ((*g_256) = &l_313)) != ((*l_462) = l_461))) == func_59((*l_83)))), ((*l_101) ^ (g_79 <= ((safe_add_func_int8_t_s_s((*g_78), (*l_75))) | p_39))))) == l_466)))
                    {
                        if (l_451)
                            break;
                    }
                    else
                    {
                        return &g_79;




                    }
                }
                for (l_263 = 16; (l_263 >= (-15)); l_263 = safe_sub_func_uint16_t_u_u(l_263, 4))
                {
                    int8_t *l_474[6][7][6] = {{{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,(void*)0,(void*)0,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0},{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79}},{{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,(void*)0,(void*)0,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,(void*)0,(void*)0},{(void*)0,&g_79,&g_79,&g_79,(void*)0,(void*)0}},{{&g_79,(void*)0,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,(void*)0,(void*)0,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,(void*)0,(void*)0,(void*)0},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79},{(void*)0,&g_79,(void*)0,(void*)0,&g_79,(void*)0},{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,(void*)0,&g_79,&g_79,(void*)0},{&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0}},{{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0},{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}}};
                    uint32_t *l_475 = &g_360;
                    const int32_t l_492 = (-9L);
                    int32_t l_493[7];
                    int16_t l_495 = 0x481BL;
                    int32_t l_497 = 0xEA9BD6D2L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_493[i] = 0x3E17ED84L;
                    for (l_54 = 0; (l_54 >= 27); l_54 = safe_add_func_uint32_t_u_u(l_54, 7))
                    {
                        if (p_39)
                            break;
                        (*l_265) = p_39;
                        if (g_360)
                            goto lbl_471;
                    }
                }
                (*l_75) = p_39;
            }
            else
            {
                uint16_t l_516[6] = {0xBF3CL,0x17C1L,0x17C1L,0xBF3CL,0x17C1L,0x17C1L};
                int32_t l_523 = (-1L);
                int32_t l_532[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_532[i] = (-7L);
                for (l_431 = (-7); (l_431 >= 6); ++l_431)
                {
                    int16_t l_512 = (-10L);
                    union U0 *l_513 = NULL;
                    union U0 **l_515[6] = {&l_378,&l_378,&l_378,&l_378,&l_378,&l_378};
                    int i;
                    l_378 = ((safe_sub_func_int64_t_s_s((l_512 , (*l_75)), ((void*)0 == &l_82))) , l_513);

                }

                l_516[1]--;
                for (l_431 = 0; (l_431 < 17); l_431 = safe_add_func_uint64_t_u_u(l_431, 1))
                {
                    int32_t l_524 = 0x942C7E2EL;
                    int32_t **l_528 = &l_267[1][6][2];
                    int32_t **l_529 = &l_265;
                    int32_t l_530 = 0xADB97D10L;
                    int32_t l_531 = 0xEBF54051L;
                    int32_t l_533 = (-4L);
                    for (g_209 = 0; (g_209 < 24); g_209 = safe_add_func_uint32_t_u_u(g_209, 1))
                    {
                        uint32_t l_525 = 4294967293UL;
                        l_525++;
                    }
                    (*l_529) = (l_408[0][3] , ((*l_528) = &g_47[1][5]));

                    (((l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("(l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6])", "4.c", 3805, __PRETTY_FUNCTION__));
                    l_534[0][0]++;
                }

                (((l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])", "4.c", 3809, __PRETTY_FUNCTION__));
            }

            (((l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])", "4.c", 3813, __PRETTY_FUNCTION__));
        }

        (((l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_265 >= &g_47[0][0] && l_265 <= &g_47[1][6]) || l_265 == &l_431 || (l_265 >= &l_48[0] && l_265 <= &l_48[2])", "4.c", 3817, __PRETTY_FUNCTION__));
        (((l_266 >= &g_47[0][0] && l_266 <= &g_47[1][6]) || (l_266 >= &l_48[0] && l_266 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_266 >= &g_47[0][0] && l_266 <= &g_47[1][6]) || (l_266 >= &l_48[0] && l_266 <= &l_48[2])", "4.c", 3818, __PRETTY_FUNCTION__));
        l_537 &= ((*l_264) = ((*l_266) &= (p_39 , func_59((*l_83)))));
    }
    else
    {
        int8_t l_538 = 0L;
        int32_t l_549 = 1L;
        int32_t l_550 = 0xF9140F10L;
        int32_t l_552 = 0x6B23966FL;
        int32_t l_553 = 1L;
        int32_t l_554 = 6L;
        int32_t l_555 = 0x80514311L;
        int32_t l_556[6] = {0x5E9CA29EL,0x607AD63BL,0x607AD63BL,0x5E9CA29EL,0x607AD63BL,0x607AD63BL};
        int32_t l_581[5][7] = {{0xCACAB670L,(-6L),0x9DF0FCB6L,0x27AB60DCL,0x9DF0FCB6L,(-6L),0xCACAB670L},{(-6L),0x308A9C6CL,0xC80894A6L,1L,1L,0x9DF0FCB6L,1L},{(-6L),1L,1L,(-6L),8L,2L,0x27AB60DCL},{0xCACAB670L,2L,0xC80894A6L,8L,8L,0xC80894A6L,2L},{8L,0xCACAB670L,0x9DF0FCB6L,0x308A9C6CL,1L,0x27AB60DCL,(-6L)}};
        uint16_t l_621 = 0x2E0FL;
        int32_t l_669 = 5L;
        int8_t ***l_694 = &l_80;
        uint32_t l_708 = 0xB4A22908L;
        uint64_t *l_711 = &g_236;
        union U2 *l_721 = &g_108;
        int i, j;
        if ((((((((*l_75) = ((*l_313) |= l_538)) , ((*l_75) ^ func_59(func_69(&g_348, (safe_mul_func_uint8_t_u_u((*l_101), p_39)), g_140[2], ((l_538 & (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_236, 11)), p_39)) < 0UL) <= 0xE4083E208F2278EFLL)) == g_545), &l_538)))) , g_140[2]) | g_236) == 0x6730E471654CB62CLL) < (-1L)))
        {
            int32_t *l_546 = &l_48[1];
            int32_t *l_547 = &l_537;
            int32_t *l_548[1];
            uint8_t l_557 = 255UL;
            int8_t *l_604 = &l_538;
            int64_t *l_605 = &l_429[0][2];
            int16_t *l_633 = &g_191;
            int i;
            for (i = 0; i < 1; i++)
                l_548[i] = &l_48[0];
            l_557--;
            for (l_550 = 0; (l_550 >= 0); l_550 -= 1)
            {
                int8_t *l_569[10][3] = {{&l_538,&l_538,&l_538},{&g_79,&g_79,&l_538},{&l_538,&g_79,&l_538},{(void*)0,&g_79,&l_538},{&l_538,&l_538,&l_538},{&g_79,&g_79,&g_79},{&l_538,&g_79,(void*)0},{&g_79,&g_79,&g_79},{&l_538,&l_538,(void*)0},{(void*)0,(void*)0,&g_79}};
                int32_t *l_575 = &l_556[2];
                int32_t l_587 = 8L;
                int i, j;
                if (p_39)
                    break;
                if (p_39)
                    continue;
                for (g_545 = 0; (g_545 <= 0); g_545 += 1)
                {
                    uint32_t *l_566 = &g_225.f0;
                    uint8_t *l_574 = &l_557;
                    int32_t **l_589 = &g_103[1][0][0];
                    int i, j;
                    if ((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((--(*l_566)) ^ func_59(((*l_83) = l_569[0][1]))), 6)) && (safe_mul_func_int16_t_s_s(g_42[l_550][(l_550 + 5)], (safe_mul_func_uint8_t_u_u(((*l_574) = g_379[0][2][9]), func_59(func_69(l_575, p_39, ((*g_89) | 0x22L), (safe_sub_func_uint64_t_u_u(((*l_335) &= (safe_lshift_func_int8_t_s_s(l_580, (*g_78)))), p_39)), &g_79))))))), p_39)), g_42[l_550][(l_550 + 5)])) <= g_191) <= l_581[0][5]))
                    {
                        int8_t *l_586 = &l_538;
                        l_587 = (((((func_59(func_69(&l_556[5], (((void*)0 != g_582) , (safe_lshift_func_uint16_t_u_s(g_47[0][0], 8))), (g_236 = func_59((g_78 = ((0xF764L <= (l_581[1][2] ^ 0L)) , l_586)))), g_191, &g_79)) >= (*g_416)) == 0x5044L) > (*g_416)) || p_39) , (*l_75));

                        ((g_78 == &l_538) ? (void) (0) : __assert_fail ("g_78 == &l_538", "4.c", 3873, __PRETTY_FUNCTION__));
                        (*l_101) |= p_39;
                        if (g_42[l_550][(l_550 + 5)])
                            continue;
                        return &g_79;





                    }
                    else
                    {
                        int64_t l_588 = (-3L);
                        (*l_75) = p_39;
                        if (l_588)
                            break;
                    }
                    if (l_538)
                        continue;
                    (*l_589) = &g_47[1][2];
                    if ((safe_div_func_uint64_t_u_u(0x7A31D3867C8059DALL, (-7L))))
                    {
                        uint32_t l_592 = 6UL;
                        if (l_592)
                            break;
                    }
                    else
                    {
                        int8_t *l_593 = &l_538;
                        (*l_589) = l_548[0];
                        (*l_101) ^= func_59(l_593);
                    }
                }
            }

            ((g_78 == &l_538 || g_78 == &g_79) ? (void) (0) : __assert_fail ("g_78 == &l_538 || g_78 == &g_79", "4.c", 3909, __PRETTY_FUNCTION__));
            ((l_84 == 0 || l_84 == &g_79 || l_84 == &l_538) ? (void) (0) : __assert_fail ("l_84 == 0 || l_84 == &g_79 || l_84 == &l_538", "4.c", 3910, __PRETTY_FUNCTION__));
            if ((((safe_mod_func_int16_t_s_s(0x40F7L, (safe_mul_func_int8_t_s_s((g_545 ^ (safe_div_func_int64_t_s_s((0x647FL || (*l_101)), g_236))), ((**l_80) = p_39))))) < (safe_sub_func_uint32_t_u_u((((*l_605) &= (safe_lshift_func_int8_t_s_s(func_59(l_604), 1))) == (((p_39 & (*l_75)) != p_39) , (*l_546))), p_39))) || (*l_547)))
            {
                int32_t *l_606 = &l_48[2];
                int32_t **l_607 = &l_547;
                int16_t l_616 = 0x3652L;
                int32_t l_619 = 0x08684959L;
                int32_t l_620[6][1][4] = {{{(-6L),(-6L),(-1L),(-6L)}},{{(-6L),0xB63C3EC0L,0xB63C3EC0L,(-6L)}},{{0xB63C3EC0L,(-6L),0xB63C3EC0L,0xB63C3EC0L}},{{(-6L),(-6L),(-1L),(-6L)}},{{(-6L),0xB63C3EC0L,0xB63C3EC0L,(-6L)}},{{0xB63C3EC0L,(-6L),0xB63C3EC0L,0xB63C3EC0L}}};
                int i, j, k;
lbl_615:
                g_103[3][0][2] = ((*l_607) = (g_79 , l_606));

                (((l_547 >= &l_48[0] && l_547 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_547 >= &l_48[0] && l_547 <= &l_48[2])", "4.c", 3922, __PRETTY_FUNCTION__));
                for (g_108.f1 = 0; (g_108.f1 <= 23); g_108.f1 = safe_add_func_uint32_t_u_u(g_108.f1, 9))
                {
                    uint32_t l_612 = 0x90991429L;
                    if (p_39)
                        break;
                    (*l_75) &= (p_39 | (p_39 & 0x1CEE4F49FDDB92ACLL));
                    for (g_79 = 0; (g_79 != 3); g_79 = safe_add_func_int16_t_s_s(g_79, 9))
                    {
                        (*l_101) |= (*l_75);
                        if (p_39)
                            break;
                        (*l_547) = p_39;
                        l_612++;
                    }
                }

                                if (g_191)
                    goto lbl_615;
                ++l_621;
            }
            else
            {
                const int16_t l_626 = 0x6161L;
                uint64_t l_634 = 0x85E8C0E297089A4BLL;
                uint32_t l_635[1][7][10] = {{{0xF3A70ABFL,0xF3A70ABFL,1UL,1UL,4UL,1UL,4UL,1UL,1UL,0xF3A70ABFL},{4UL,1UL,0x7DB7E098L,4UL,0x16EFA3C0L,0x16EFA3C0L,4UL,0x7DB7E098L,1UL,4UL},{0x7DB7E098L,0xF3A70ABFL,1UL,0x16EFA3C0L,0xF3A70ABFL,0x16EFA3C0L,1UL,0xF3A70ABFL,0x7DB7E098L,0x7DB7E098L},{4UL,1UL,1UL,0xF3A70ABFL,0xF3A70ABFL,1UL,1UL,4UL,1UL,4UL},{4UL,0x7DB7E098L,1UL,4UL,1UL,0x7DB7E098L,4UL,0x16EFA3C0L,0x16EFA3C0L,4UL},{0x16EFA3C0L,1UL,1UL,1UL,1UL,0x16EFA3C0L,0x7DB7E098L,1UL,0x7DB7E098L,0x16EFA3C0L},{0xF3A70ABFL,1UL,1UL,1UL,0xF3A70ABFL,1UL,4UL,4UL,1UL,0xF3A70ABFL}}};
                int32_t l_636 = (-7L);
                int i, j, k;
                (*l_547) = (safe_add_func_uint8_t_u_u(g_191, (func_59(((*l_85) = func_64(l_626, &g_47[0][0], &l_48[0], ((safe_mod_func_int16_t_s_s(((*l_75) | p_39), l_538)) != l_626)))) == 0UL)));

                ((l_86 == &g_79 || l_86 == 0) ? (void) (0) : __assert_fail ("l_86 == &g_79 || l_86 == 0", "4.c", 3952, __PRETTY_FUNCTION__));
                for (g_583.f0 = 0; (g_583.f0 >= 2); g_583.f0 = safe_add_func_uint32_t_u_u(g_583.f0, 3))
                {
                    (*l_546) &= ((((p_39 , ((!g_348) != p_39)) , p_39) , ((((*l_605) &= ((safe_mul_func_int16_t_s_s((((((((void*)0 == l_633) , g_153) , g_108) , &l_80) != (void*)0) , p_39), l_634)) , l_635[0][2][1])) , p_39) , p_39)) == (-1L));
                    l_556[2] = 0x791106CDL;
                }
                --g_637[4];
                (*l_546) = (+l_549);
            }

            ((l_86 == &g_79 || l_86 == 0) ? (void) (0) : __assert_fail ("l_86 == &g_79 || l_86 == 0", "4.c", 3962, __PRETTY_FUNCTION__));
            ((l_547 == &l_537 || (l_547 >= &l_48[0] && l_547 <= &l_48[2])) ? (void) (0) : __assert_fail ("l_547 == &l_537 || (l_547 >= &l_48[0] && l_547 <= &l_48[2])", "4.c", 3963, __PRETTY_FUNCTION__));
        }
        else
        {
            int32_t *l_640 = &g_348;
            int32_t l_648 = 0x6D5A999EL;
            int32_t l_649 = (-1L);
            int32_t l_650 = 0xCE6F159AL;
            int32_t l_651 = 0x77CDE969L;
            int32_t l_665 = 2L;
            int32_t l_666[3];
            int i;
            for (i = 0; i < 3; i++)
                l_666[i] = 4L;
            if (p_39)
            {
                int32_t **l_641 = &g_103[3][0][2];
                int32_t l_664 = 0L;
                int32_t l_667 = 0x3FC2014CL;
                int32_t l_668[5][7][7] = {{{0x947FC749L,0x0FB14C66L,1L,0x816706D9L,0x225F1E23L,(-9L),0x7722B25EL},{0x7072CFBAL,0x3C538C17L,0x3D71D335L,0x3D71D335L,0x3C538C17L,0x7072CFBAL,0x3A8D80A3L},{0xEAB15AE6L,3L,6L,0x00F9321FL,0xC3A51354L,(-7L),0x00F9321FL},{(-3L),3L,(-8L),0xEA2E09FBL,0x3A8D80A3L,0xD5C15016L,0x41CB3F81L},{0x6ECE226BL,3L,1L,(-9L),0xEAB15AE6L,1L,0x6ECE226BL},{1L,0x3C538C17L,0L,(-4L),(-1L),0x17279765L,(-1L)},{3L,0x0FB14C66L,0x0FB14C66L,3L,8L,0x225F1E23L,(-2L)}},{{0x0925CA98L,0x8118B107L,0x7072CFBAL,(-8L),(-3L),0x7072CFBAL,1L},{0x816706D9L,6L,(-10L),0x7C505713L,0x947FC749L,0xED7FCA86L,(-2L)},{0xD0923414L,0x0925CA98L,0x17279765L,0x87BA0916L,0x761881B0L,0L,9L},{(-7L),0xAD926821L,0xA129F85BL,(-1L),0x6ECE226BL,(-1L),0xA129F85BL},{9L,9L,(-3L),0xD5C15016L,3L,1L,1L},{0x225F1E23L,(-1L),(-1L),8L,(-1L),(-7L),0x6ECE226BL},{0x761881B0L,(-8L),0x925A891AL,0xE4A85F6DL,3L,1L,0xE4A85F6DL}},{{1L,(-9L),0xEAB15AE6L,1L,0x6ECE226BL,0x00F9321FL,0x225F1E23L},{0x87BA0916L,0xECD55F9BL,0x761881B0L,0x3D71D335L,0x761881B0L,0xECD55F9BL,0x87BA0916L},{(-1L),0xAFDB0A63L,(-7L),6L,1L,0x76606D9EL,0xBB78880EL},{(-8L),9L,0x3C538C17L,(-8L),0xD5C15016L,0x7228E846L,0x3D71D335L},{0x0FB14C66L,0L,(-7L),1L,(-10L),(-7L),0xAD926821L},{0x17279765L,0x87BA0916L,0x761881B0L,0L,9L,0xF76EBF8CL,0xF76EBF8CL},{(-1L),0x0FB14C66L,0xEAB15AE6L,0x0FB14C66L,(-1L),0x7722B25EL,1L}},{{1L,1L,0x925A891AL,0x7072CFBAL,0xE4A85F6DL,0L,0x87BA0916L},{0xBB78880EL,1L,(-1L),(-10L),0xAD926821L,0xEE7C8750L,(-1L)},{(-8L),0x3D71D335L,(-1L),0x87BA0916L,0x3D71D335L,(-3L),1L},{0xAFDB0A63L,0xA129F85BL,0L,0x225F1E23L,(-10L),(-10L),0x225F1E23L},{0x1819054FL,0x3A8D80A3L,0x1819054FL,0xE4A85F6DL,1L,0L,0xECD55F9BL},{0xAD926821L,0x0FB14C66L,0x7722B25EL,0x6ECE226BL,0xAFDB0A63L,0x947FC749L,0xAD926821L},{0x87BA0916L,0xF76EBF8CL,0xECD55F9BL,1L,0x06BC20EDL,0L,0xE6257C80L}},{{0xA129F85BL,(-9L),0xED7FCA86L,0xA129F85BL,1L,(-10L),6L},{3L,0xD5C15016L,(-3L),9L,9L,(-3L),0xD5C15016L},{1L,0L,(-1L),1L,0xED7FCA86L,6L,0x6ECE226BL},{0L,3L,0x1819054FL,1L,0x7072CFBAL,0xF76EBF8CL,0x06BC20EDL},{8L,1L,1L,1L,0x225F1E23L,3L,0xAD926821L},{0xE6257C80L,0x06BC20EDL,0x925A891AL,9L,0x17279765L,0xE4A85F6DL,(-8L)},{(-1L),1L,0xA129F85BL,0xA129F85BL,1L,(-1L),(-7L)}}};
                int i, j, k;
                (*l_641) = (func_59(&g_79) , l_640);
                if (l_537)
                    goto lbl_642;
                for (l_549 = 0; (l_549 < (-22)); l_549 = safe_sub_func_int32_t_s_s(l_549, 9))
                {
                    uint8_t l_652 = 6UL;
                    int32_t l_655 = (-1L);
                    int32_t l_656 = 0xEDE23F60L;
                    int32_t *l_657 = (void*)0;
                    int32_t *l_658 = &l_537;
                    int32_t *l_659 = &l_537;
                    int32_t *l_660 = &l_649;
                    int32_t *l_661 = &l_655;
                    int32_t *l_662 = (void*)0;
                    int32_t *l_663[9][10][1] = {{{&l_648},{&l_555},{&l_554},{&l_550},{&l_554},{&l_555},{&l_648},{(void*)0},{&g_47[0][3]},{&l_550}},{{&g_47[0][0]},{&l_48[2]},{&l_655},{&l_555},{&g_47[0][3]},{(void*)0},{&l_550},{&l_556[2]},{&l_555},{&g_47[0][0]}},{{&l_549},{&l_552},{&l_552},{&l_549},{&g_47[0][0]},{&l_555},{&l_556[2]},{&l_550},{(void*)0},{&g_47[0][3]}},{{&l_555},{&l_655},{&l_48[2]},{(void*)0},{&l_649},{(void*)0},{(void*)0},{&l_48[0]},{&l_549},{(void*)0}},{{&l_555},{(void*)0},{&l_549},{&l_48[0]},{(void*)0},{(void*)0},{&l_649},{(void*)0},{&l_48[2]},{&l_655}},{{&l_555},{&g_47[0][3]},{(void*)0},{&l_550},{&l_556[2]},{&l_555},{&g_47[0][0]},{&l_549},{&l_552},{&l_552}},{{&l_549},{&g_47[0][0]},{&l_555},{&l_556[2]},{&l_550},{(void*)0},{&g_47[0][3]},{&l_555},{&l_655},{&l_48[2]}},{{(void*)0},{&l_649},{(void*)0},{(void*)0},{&l_48[0]},{&l_549},{(void*)0},{&l_555},{(void*)0},{&l_549}},{{&l_48[0]},{(void*)0},{(void*)0},{&l_649},{(void*)0},{&l_48[2]},{&l_655},{&l_555},{&g_47[0][3]},{(void*)0}}};
                    uint32_t l_670[7] = {0x11A3DBDFL,0x11A3DBDFL,0x11A3DBDFL,0x11A3DBDFL,0x11A3DBDFL,0x11A3DBDFL,0x11A3DBDFL};
                    int i, j, k;
                    (*l_641) = l_640;
                    if (((*l_640) &= (*l_75)))
                    {
                        return &g_79;




                    }
                    else
                    {
                        int32_t *l_645 = &l_553;
                        int32_t *l_646 = (void*)0;
                        int32_t *l_647[8][5] = {{&l_537,&l_48[0],&l_48[0],&l_537,&l_48[0]},{&l_537,&l_537,&l_556[2],&l_537,&l_537},{&l_48[0],&l_537,&l_48[0],&l_48[0],&l_537},{&l_537,&l_48[0],&l_48[0],&l_537,&l_48[0]},{&l_537,&l_537,&l_556[2],&l_537,&l_537},{&l_48[0],&l_537,&l_48[0],&l_48[0],&l_537},{&l_537,&l_48[0],&l_48[0],&l_537,&l_48[0]},{&l_537,&l_537,&l_556[2],&l_537,&l_537}};
                        int i, j;
                        --l_652;
                        (*l_101) = 0xD5EAB6A5L;
                    }
                    --l_670[4];
                    (*l_658) |= 0xD0FCDF7FL;
                }
                (*l_101) = p_39;
            }
            else
            {
                uint8_t *l_677[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_155,(void*)0,(void*)0,&g_155,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                if (g_225.f0)
                    goto lbl_403;
                for (g_348 = 6; (g_348 >= 2); g_348 -= 1)
                {
                    union U0 * const l_673 = NULL;
                    (*l_101) &= p_39;
                    g_220[1] = l_673;
                    for (g_108.f1 = 6; (g_108.f1 >= 0); g_108.f1 -= 1)
                    {
                        uint8_t **l_675[7];
                        int32_t **l_678 = &l_101;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_675[i] = (void*)0;
                    }

                                    }


            }


            for (g_236 = (-5); (g_236 > 9); g_236++)
            {
                uint32_t l_683 = 1UL;
                int32_t l_686 = 5L;
                if ((safe_lshift_func_uint8_t_u_u(l_683, l_581[0][5])))
                {
                    int32_t **l_688 = &g_103[5][0][1];
                    int32_t ***l_687 = &l_688;
                    uint32_t *l_691 = &g_360;
                    (*l_75) = (((((safe_sub_func_int8_t_s_s(((((*g_676) == (l_686 ^= l_683)) != func_59((((func_59(&g_79) < (l_687 == (((*l_691) ^= ((*g_89) , (1L || (&g_676 != (void*)0)))) , (void*)0))) , l_555) , (void*)0))) , 0x01L), 0xB0L)) >= g_191) , (*l_640)) && l_683) && g_225.f0);
                    if (l_669)
                        continue;
                    (*l_75) &= (safe_mul_func_int8_t_s_s(((*l_640) = ((void*)0 != l_694)), (++(*g_676))));
                }
                else
                {
                    int32_t *l_701 = &l_556[2];
                    for (l_538 = 0; (l_538 == (-7)); --l_538)
                    {
                        union U2 *l_700[9];
                        union U2 **l_699 = &l_700[6];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_700[i] = (void*)0;
                        (*l_699) = &g_108;


                    }
                    l_701 = &l_665;

                    ((l_701 == &l_665) ? (void) (0) : __assert_fail ("l_701 == &l_665", "4.c", 4080, __PRETTY_FUNCTION__));
                }
                for (l_54 = (-12); (l_54 > 17); l_54 = safe_add_func_uint32_t_u_u(l_54, 9))
                {
                    (*l_75) = ((*l_640) < func_59(&g_79));
                    (*l_640) = p_39;
                }
            }
        }

        ((g_78 == &l_538 || g_78 == &g_79) ? (void) (0) : __assert_fail ("g_78 == &l_538 || g_78 == &g_79", "4.c", 4090, __PRETTY_FUNCTION__));

        ((l_84 == 0 || l_84 == &g_79 || l_84 == &l_538) ? (void) (0) : __assert_fail ("l_84 == 0 || l_84 == &g_79 || l_84 == &l_538", "4.c", 4092, __PRETTY_FUNCTION__));
        ((l_86 == &g_79 || l_86 == 0) ? (void) (0) : __assert_fail ("l_86 == &g_79 || l_86 == 0", "4.c", 4093, __PRETTY_FUNCTION__));
        for (g_191 = 1; (g_191 == (-4)); --g_191)
        {
            int32_t *l_706 = (void*)0;
            int32_t *l_707[4];
            uint16_t *l_716 = &g_140[2];
            int8_t *l_719 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_707[i] = &l_555;
            l_708--;
            if (((((l_711 != l_334) , (safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(0xF7L, 5)) == (*l_101)), (-4L)))) & 0L) | p_39))
            {
                int8_t * const l_717 = &g_79;
                union U2 **l_720[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_720[i] = (void*)0;
                for (g_79 = 0; (g_79 <= 2); g_79 += 1)
                {
                    int8_t *l_718 = (void*)0;
                    int i;
                    if ((((l_48[g_79] != func_59(func_69((p_39 , &l_551[5]), (0x01839BAA811A5A9ELL ^ ((*g_78) , ((p_39 , l_716) != (void*)0))), p_39, g_348, l_717))) < 0x5F011C9BL) , 0L))
                    {
                        return l_718;





                    }
                    else
                    {
                        return l_719;





                    }
                }
                if (l_553)
                    continue;
                l_721 = &g_108;
                (*l_75) = 0x4D5B80ADL;
            }
            else
            {
                l_554 = p_39;
                for (l_553 = (-29); (l_553 <= 3); l_553 = safe_add_func_int32_t_s_s(l_553, 3))
                {
                    (*l_101) = (-1L);
                }
            }
        }
        (*l_75) &= 1L;
    }



    (((l_75 >= &l_48[0] && l_75 <= &l_48[2])) ? (void) (0) : __assert_fail ("(l_75 >= &l_48[0] && l_75 <= &l_48[2])", "4.c", 4153, __PRETTY_FUNCTION__));

    ((l_86 == &g_79 || l_86 == 0) ? (void) (0) : __assert_fail ("l_86 == &g_79 || l_86 == 0", "4.c", 4155, __PRETTY_FUNCTION__));
    return &g_79;




}







static const uint8_t func_59(int8_t * p_60)
{
    const int64_t l_61 = 0xCF75BAE5BD571E95LL;
    return l_61;
}







static int8_t * func_64(const uint32_t p_65, int32_t * p_66, int32_t * p_67, uint32_t p_68)
{
    int32_t *l_102[2][5][6] = {{{&g_47[1][4],&g_47[0][4],(void*)0,&g_47[0][0],&g_47[0][0],(void*)0},{&g_47[1][4],&g_47[1][4],&g_47[0][0],&g_47[1][4],&g_47[0][0],&g_47[1][4]},{&g_47[0][4],&g_47[1][4],&g_47[0][4],(void*)0,&g_47[0][0],&g_47[0][0]},{&g_47[0][6],&g_47[0][4],&g_47[0][4],&g_47[0][6],&g_47[1][4],&g_47[1][4]},{&g_47[0][0],&g_47[1][4],&g_47[0][0],&g_47[1][4],&g_47[0][0],&g_47[1][4]}},{{&g_47[1][4],&g_47[0][0],&g_47[1][4],&g_47[1][4],&g_47[0][0],&g_47[1][4]},{(void*)0,&g_47[1][4],&g_47[0][6],&g_47[0][0],&g_47[0][6],&g_47[1][4]},{&g_47[0][6],(void*)0,&g_47[1][4],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][6],&g_47[0][6],&g_47[0][0],&g_47[0][0],&g_47[0][4],&g_47[0][0]},{(void*)0,&g_47[0][6],(void*)0,&g_47[1][4],&g_47[0][0],&g_47[0][0]}}};
    int8_t * const l_113[4] = {&g_79,&g_79,&g_79,&g_79};
    int32_t *l_134 = &g_47[0][0];
    int8_t *l_168 = &g_79;
    union U1 *l_224[10];
    uint16_t *l_230 = &g_140[6];
    uint32_t l_234[5][1][3] = {{{0xC4EF4C14L,0UL,0UL}},{{0xC4EF4C14L,0UL,0UL}},{{0xC4EF4C14L,0UL,0UL}},{{0xC4EF4C14L,0UL,0UL}},{{0xC4EF4C14L,0UL,0UL}}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_224[i] = &g_225;
    g_103[3][0][2] = l_102[0][1][4];
    for (p_68 = 4; (p_68 == 13); p_68 = safe_add_func_int8_t_s_s(p_68, 8))
    {
        int32_t *l_109[10];
        int8_t *l_111 = &g_79;
        int8_t l_124[8][6][5] = {{{(-9L),0L,6L,(-2L),(-2L)},{(-9L),2L,2L,(-9L),(-1L)},{(-1L),0x05L,(-9L),(-1L),(-9L)},{0L,(-1L),(-9L),0xB8L,0x31L},{0x31L,(-1L),0xFBL,(-1L),0x05L},{(-9L),8L,(-1L),(-9L),0L}},{{(-1L),0x31L,8L,(-2L),0xA9L},{2L,0x31L,(-1L),0x31L,2L},{0xFBL,(-1L),2L,(-1L),0xB8L},{(-1L),0L,0x90L,(-9L),(-2L)},{0xA9L,0x31L,(-1L),(-1L),0xB8L},{(-2L),(-9L),(-1L),6L,(-1L)}},{{0xB8L,(-1L),1L,0x90L,6L},{(-9L),2L,1L,1L,2L},{0x49L,(-9L),(-1L),0x31L,(-9L)},{0x31L,0xCEL,(-1L),6L,(-9L)},{2L,(-1L),0x90L,(-1L),0xFBL},{0x31L,6L,2L,(-9L),(-1L)}},{{0x49L,0x02L,0L,0L,8L},{(-9L),0x05L,(-1L),0L,(-1L)},{0xB8L,0xB8L,0xA9L,(-9L),0L},{(-2L),(-1L),0x05L,(-1L),0x49L},{0xA9L,0L,0L,6L,(-1L)},{(-1L),(-1L),0x02L,0x31L,(-2L)}},{{0xFBL,0xB8L,(-1L),1L,0x90L},{(-1L),0x05L,0L,0x90L,0x90L},{(-1L),0x02L,(-1L),6L,(-2L)},{0x02L,(-1L),(-1L),(-9L),0x05L},{0L,(-9L),0L,0x31L,(-1L)},{6L,(-1L),(-1L),0x05L,0x49L}},{{0xFBL,6L,0xCEL,0L,(-9L)},{2L,0x90L,0x49L,0xA9L,0L},{2L,1L,1L,2L,(-9L)},{0xFBL,0x31L,(-9L),0x02L,(-2L)},{6L,6L,2L,(-1L),0L},{0L,(-1L),(-1L),0x02L,0x31L}},{{(-9L),(-9L),0x02L,2L,0x90L},{0xCEL,0L,(-9L),0xA9L,0xB8L},{1L,0L,0xFBL,0L,1L},{(-2L),(-9L),0x90L,0x05L,0L},{0L,(-1L),(-2L),0x31L,(-1L)},{0x02L,6L,(-9L),(-9L),0L}},{{(-1L),0x31L,0xA9L,(-1L),1L},{0L,1L,8L,(-2L),0xB8L},{0x31L,0x90L,8L,8L,0x90L},{(-1L),6L,0xA9L,6L,0x31L},{6L,0L,0x02L,0x49L,2L},{1L,0x02L,8L,(-1L),(-1L)}}};
        uint8_t l_130 = 246UL;
        uint32_t l_195 = 0x1596AA2BL;
        union U1 *l_226 = &g_227[1];
        int64_t l_235 = 1L;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_109[i] = &g_47[0][2];
        for (g_79 = 0; (g_79 == 24); ++g_79)
        {
            int16_t l_110 = 1L;
            int8_t *l_112[9] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
            int32_t l_122 = 0L;
            int32_t l_123 = 5L;
            int32_t l_125 = (-1L);
            int32_t l_126 = 0L;
            int32_t l_127 = 1L;
            int32_t l_128[3];
            int32_t l_142 = 0x9AB741B8L;
            uint64_t l_147 = 18446744073709551615UL;
            uint8_t l_185 = 0xFFL;
            uint8_t *l_233 = &l_185;
            int i;
            for (i = 0; i < 3; i++)
                l_128[i] = (-1L);
            if ((*p_67))
                break;
            if (func_59(func_69((g_108 , l_109[6]), ((l_110 = (*p_66)) > (((p_68 , l_111) != (func_59(l_112[2]) , l_111)) > (*g_89))), p_65, g_79, l_113[2])))
            {
                const uint16_t l_116[5] = {0x3169L,0x3169L,0x3169L,0x3169L,0x3169L};
                int32_t **l_119[7] = {&l_109[6],&l_109[6],&l_109[6],&l_109[6],&l_109[6],&l_109[6],&l_109[6]};
                int32_t l_129 = 0x38BB68FCL;
                int8_t *l_137[2];
                uint16_t *l_138 = (void*)0;
                uint16_t *l_139[7] = {&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2],&g_140[2]};
                int64_t *l_141[10][2][6] = {{{&g_42[0][0],&g_42[0][2],&g_42[0][1],&g_42[0][1],&g_42[0][5],&g_42[0][2]},{&g_42[0][5],&g_42[0][7],&g_42[0][1],&g_42[0][7],&g_42[0][5],(void*)0}},{{&g_42[0][8],&g_42[0][2],&g_42[0][5],(void*)0,&g_42[0][5],&g_42[0][7]},{&g_42[0][4],&g_42[0][2],&g_42[0][1],(void*)0,(void*)0,&g_42[0][1]}},{{&g_42[0][5],&g_42[0][8],&g_42[0][5],&g_42[0][5],&g_42[0][1],&g_42[0][5]},{&g_42[0][7],(void*)0,&g_42[0][7],&g_42[0][0],&g_42[0][7],&g_42[0][1]}},{{&g_42[0][2],&g_42[0][2],&g_42[0][6],&g_42[0][2],&g_42[0][5],&g_42[0][9]},{&g_42[0][0],&g_42[0][3],(void*)0,&g_42[0][2],&g_42[0][0],&g_42[0][0]}},{{&g_42[0][2],&g_42[0][7],(void*)0,&g_42[0][0],&g_42[0][2],&g_42[0][6]},{&g_42[0][7],&g_42[0][4],&g_42[0][5],&g_42[0][5],&g_42[0][5],&g_42[0][0]}},{{&g_42[0][6],&g_42[0][0],&g_42[0][8],&g_42[0][6],&g_42[0][6],&g_42[0][2]},{&g_42[0][6],&g_42[0][6],&g_42[0][4],&g_42[0][8],&g_42[0][7],&g_42[0][0]}},{{&g_42[0][2],&g_42[0][6],&g_42[0][7],&g_42[0][1],&g_42[0][2],(void*)0},{&g_42[0][5],&g_42[0][5],&g_42[0][2],&g_42[0][6],&g_42[0][5],&g_42[0][9]}},{{(void*)0,&g_42[0][4],&g_42[0][5],&g_42[0][6],&g_42[0][6],&g_42[0][5]},{&g_42[0][8],&g_42[0][8],(void*)0,&g_42[0][2],&g_42[0][5],&g_42[0][8]}},{{&g_42[0][1],&g_42[0][1],(void*)0,&g_42[0][4],&g_42[0][6],(void*)0},{&g_42[0][0],&g_42[0][1],(void*)0,&g_42[0][5],&g_42[0][8],&g_42[0][8]}},{{&g_42[0][6],&g_42[0][5],(void*)0,&g_42[0][4],&g_42[0][8],&g_42[0][5]},{&g_42[0][4],&g_42[0][8],&g_42[0][5],&g_42[0][5],&g_42[0][8],&g_42[0][9]}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_137[i] = &g_79;
                if ((safe_rshift_func_uint8_t_u_u(0x21L, l_116[4])))
                {
                    int32_t l_117 = (-7L);
                    int8_t *l_118 = &g_79;
                    int32_t **l_121[3];
                    int32_t ***l_120 = &l_121[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_121[i] = &g_103[3][0][2];
                    l_117 = (g_47[1][0] == (func_59(&g_79) == g_108.f0));
                    (*l_120) = (func_59(l_118) , l_119[6]);


                    l_130--;
                }
                else
                {
                    uint32_t l_133 = 0x0B9248A8L;
                    l_133 ^= (g_79 | (0xDF4084801C52B695LL & g_47[0][0]));
                    l_134 = l_102[0][1][4];

                    ((l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])", "4.c", 4259, __PRETTY_FUNCTION__));
                }

                ((l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])", "4.c", 4262, __PRETTY_FUNCTION__));
                l_127 = (((safe_mul_func_uint8_t_u_u((func_59(l_137[0]) & (g_140[2] |= 0UL)), p_65)) == (l_142 = (3UL ^ (*p_67)))) == g_79);
                for (l_127 = 0; (l_127 <= (-23)); l_127 = safe_sub_func_int16_t_s_s(l_127, 7))
                {
                    return &g_79;


                }
                for (l_110 = 0; (l_110 < (-3)); --l_110)
                {
                    int8_t **l_148[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_112[2],&l_112[2],&l_112[2],&l_112[2],&l_112[2]}};
                    int32_t l_154[10][6] = {{0xE2C0D5E5L,6L,(-3L),(-10L),0x1878C3C8L,0xEF6E4D6CL},{0xE2C0D5E5L,0xA8684C55L,(-10L),0x6B3CF8E8L,(-10L),0xA8684C55L},{(-1L),(-3L),0xD56B3A44L,1L,0xA8684C55L,0x8A8A0955L},{4L,0x0F618765L,0x6B3CF8E8L,0xD56B3A44L,0xACD92533L,(-10L)},{0xE2C0D5E5L,4L,0x3B589A2EL,1L,1L,0x3B589A2EL},{(-10L),(-10L),4L,(-1L),0x8A8A0955L,0x138A2B4CL},{0x0F618765L,1L,0xACD92533L,0x1878C3C8L,(-3L),4L},{6L,0x0F618765L,0xACD92533L,0x138A2B4CL,(-10L),0x138A2B4CL},{4L,0x138A2B4CL,4L,4L,0xD56B3A44L,0x3B589A2EL},{4L,0xD56B3A44L,0x3B589A2EL,(-3L),0x6B3CF8E8L,0x8A8A0955L}};
                    int32_t l_156 = (-1L);
                    int i, j;
                    l_156 = (((l_147 = (func_59(l_137[0]) >= g_42[0][2])) | (g_155 = (func_59((l_112[2] = (void*)0)) & ((g_153 = (!(safe_mul_func_uint16_t_u_u((g_140[2] > (safe_add_func_int16_t_s_s((p_65 && func_59(l_137[0])), p_65))), p_68)))) == l_154[8][5])))) , (*p_67));
                }
            }
            else
            {
                int32_t l_163 = 5L;
                int8_t *l_169[9][7] = {{&l_124[6][2][1],&l_124[5][3][0],&l_124[1][2][2],&l_124[6][2][0],&l_124[6][2][0],&l_124[1][2][2],&l_124[5][3][0]},{&l_124[4][2][4],&g_79,&l_124[1][2][3],&l_124[4][2][4],&l_124[0][4][4],&l_124[0][4][4],&l_124[4][2][4]},{&l_124[5][3][0],&l_124[5][3][0],&l_124[5][3][0],&l_124[5][3][0],&l_124[5][3][0],&l_124[2][3][2],&l_124[2][3][2]},{&g_79,&l_124[4][2][4],&l_124[5][3][0],&l_124[4][2][4],&g_79,&l_124[5][3][0],(void*)0},{&l_124[6][2][0],&l_124[2][3][2],&l_124[5][3][0],&l_124[6][2][0],&l_124[5][3][0],&l_124[2][3][2],&l_124[6][2][0]},{&l_124[1][2][3],(void*)0,&g_79,&l_124[0][4][4],(void*)0,&l_124[0][4][4],&g_79},{&l_124[6][2][0],&l_124[6][2][0],&l_124[1][2][2],&l_124[5][3][0],&l_124[6][2][1],&l_124[1][2][2],&l_124[6][2][1]},{&g_79,&g_79,&g_79,&g_79,&l_124[0][4][4],&l_124[1][2][3],&g_79},{&l_124[5][3][0],&l_124[6][2][1],&l_124[5][3][0],&g_79,&l_124[5][3][0],&l_124[1][2][2],&l_124[0][4][1]}};
                int32_t l_170 = 0xE4CE6ED6L;
                uint64_t l_186 = 6UL;
                int32_t l_199 = 0x1C272038L;
                int8_t l_202 = 0L;
                int32_t l_203[1][5][1];
                int16_t l_205 = 0x1507L;
                uint16_t l_213[4][4] = {{0x1948L,0x1948L,0x6A11L,0x1948L},{0x1948L,0x1C64L,0x1C64L,0x1948L},{0x1C64L,0x1948L,0x1C64L,0x1C64L},{0x1948L,0x1948L,0x6A11L,0x1948L}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_203[i][j][k] = 0x3B5E4322L;
                    }
                }
                if (func_59((g_78 = &g_79)))
                {
                    int8_t l_166 = 8L;
                    int16_t *l_181 = (void*)0;
                    int16_t *l_182 = &l_110;
                    for (l_126 = 0; (l_126 >= 29); l_126 = safe_add_func_uint8_t_u_u(l_126, 8))
                    {
                        uint64_t *l_164 = (void*)0;
                        uint64_t *l_165[8] = {&l_147,&l_147,&l_147,&l_147,&l_147,&l_147,&l_147,&l_147};
                        int8_t *l_167 = (void*)0;
                        int i;
                        (*p_67) = (+(safe_mul_func_int8_t_s_s(0x51L, ((p_65 < (l_166 = (g_140[2] , ((safe_lshift_func_uint8_t_u_s((0xDC0556BEL & (func_59(&g_79) || ((l_163 < 0L) && 5UL))), 5)) & p_68)))) , 9UL))));
                        l_170 = (g_155 , (g_47[0][5] > (l_167 != (l_169[1][6] = l_168))));
                    }
                    (*p_67) = ((safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(g_37, (*g_89))) , (safe_rshift_func_int16_t_s_u(((*l_182) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_142, 0)), 4))), 6))), (safe_sub_func_int64_t_s_s(((g_155 != g_153) != l_185), l_163)))) , l_186);
                    if ((*p_66))
                        break;
                    for (l_142 = 0; (l_142 < (-21)); l_142 = safe_sub_func_uint8_t_u_u(l_142, 7))
                    {
                        int16_t * volatile *l_193 = &l_181;
                        int16_t * volatile **l_192 = &l_193;
                        (*l_192) = g_189;

                        ((l_193 == &g_190) ? (void) (0) : __assert_fail ("l_193 == &g_190", "4.c", 4322, __PRETTY_FUNCTION__));
                        return &g_79;


                    }
                }
                else
                {
                    int8_t l_204[7][1][9] = {{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}},{{0x16L,0x16L,0xC7L,2L,0x15L,0xC7L,0x15L,2L,0xC7L}}};
                    int32_t l_207[3];
                    int32_t **l_216 = &l_109[6];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_207[i] = 0xE87846DEL;
                    for (l_123 = 0; (l_123 <= 4); l_123 += 1)
                    {
                        int16_t l_194 = 0xB3CFL;
                        int32_t l_198 = (-1L);
                        int8_t l_200 = 0x04L;
                        int32_t l_201 = 0x8B39EDD3L;
                        int32_t l_206 = 0x3289F9ECL;
                        int32_t l_208 = 0x61AEF186L;
                        int32_t l_210 = (-1L);
                        int32_t l_211 = 6L;
                        int32_t l_212[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_212[i] = 0xF6C3278EL;
                        if (l_124[(l_123 + 1)][l_123][l_123])
                            break;
                        if ((*p_66))
                            continue;
                        ++l_195;
                        ++l_213[2][1];
                    }
                    (*l_216) = &l_207[1];


                }

                ((g_78 == &g_79) ? (void) (0) : __assert_fail ("g_78 == &g_79", "4.c", 4362, __PRETTY_FUNCTION__));

                for (l_199 = 0; (l_199 == (-10)); --l_199)
                {
                    for (l_202 = 0; (l_202 >= 0); l_202 -= 1)
                    {
                        int32_t **l_219[5][7][5] = {{{&l_109[6],&l_109[6],&l_102[0][1][0],&l_109[6],&l_109[6]},{&l_109[6],&l_102[0][1][4],&l_102[0][1][4],&l_109[8],&l_109[6]},{&l_109[6],&l_134,&l_102[0][1][0],&l_134,&l_109[6]},{&g_103[4][0][0],&l_102[0][1][4],&l_102[0][1][5],&l_109[6],&l_109[1]},{&g_103[1][1][1],&g_103[3][0][2],&g_103[3][0][2],&l_109[0],&l_109[0]},{&l_109[6],&l_102[0][1][4],&l_109[6],&l_102[0][1][4],&l_109[1]},{&g_103[4][0][2],&l_109[0],&g_103[3][0][2],&l_109[6],&l_109[6]}},{{&l_109[1],&l_109[6],(void*)0,(void*)0,&l_109[6]},{&g_103[3][0][2],&l_102[0][4][2],&g_103[3][0][2],&l_109[6],&l_109[6]},{&l_102[0][1][4],&l_102[0][3][2],&l_109[6],&l_102[0][1][4],(void*)0},{(void*)0,&g_103[3][0][2],&g_103[3][0][2],(void*)0,&l_134},{&l_102[0][1][4],(void*)0,&l_102[0][1][5],&g_103[4][0][0],&l_102[0][1][4]},{&g_103[3][0][2],&l_109[9],&l_102[0][1][0],&g_103[3][0][2],&l_102[0][1][0]},{&l_109[1],&l_109[1],&l_102[0][1][4],&g_103[4][0][0],&l_102[0][1][5]}},{{&g_103[4][0][2],&l_109[6],&l_134,(void*)0,&g_103[3][0][2]},{&l_109[6],&l_102[0][1][4],(void*)0,&l_102[0][1][4],&l_109[6]},{&g_103[1][1][1],&l_109[6],&l_109[6],&l_109[6],&g_103[3][0][2]},{&g_103[4][0][0],&l_109[1],&l_109[6],(void*)0,(void*)0},{&l_109[6],&l_109[9],&l_109[6],&l_109[6],&g_103[3][0][2]},{&l_109[6],(void*)0,&l_109[1],&l_102[0][1][4],&g_103[4][0][0]},{&l_102[0][1][0],&l_102[0][4][2],&l_109[6],&l_109[6],&l_102[0][4][2]}},{{&l_102[0][3][2],&l_109[8],(void*)0,&g_103[4][0][0],&l_109[1]},{&l_109[6],(void*)0,&g_103[1][1][1],&g_103[4][0][2],&l_134},{&l_102[0][1][5],&l_102[0][3][2],&l_102[0][3][2],&l_102[0][1][5],&l_109[6]},{&l_109[6],&l_109[6],&g_103[3][0][2],&l_109[0],&g_103[4][0][2]},{&l_102[0][3][2],&l_109[6],&l_102[0][1][4],(void*)0,&l_102[0][1][4]},{&l_102[0][1][0],&l_102[0][1][0],&g_103[4][0][2],&l_109[0],&g_103[3][0][2]},{&l_102[0][1][4],&l_109[6],&l_109[6],&l_102[0][1][5],&l_102[0][3][2]}},{{&g_103[1][1][1],&g_103[4][0][2],&l_134,&g_103[4][0][2],&g_103[1][1][1]},{(void*)0,&l_109[6],&l_109[1],&g_103[4][0][0],(void*)0},{&l_109[0],&l_102[0][1][0],&l_102[0][4][2],&l_109[6],&l_109[6]},{&g_103[4][0][0],&l_109[6],&g_103[4][0][0],&l_109[6],(void*)0},{&l_109[9],&l_109[6],&l_102[0][1][0],&g_103[3][0][2],&g_103[1][1][1]},{(void*)0,&l_102[0][3][2],&l_102[0][1][4],&l_102[0][1][4],&l_102[0][3][2]},{&l_102[0][4][2],(void*)0,&l_102[0][1][0],&g_103[1][1][1],&g_103[3][0][2]}}};
                        union U0 *l_223 = (void*)0;
                        union U0 **l_222 = &l_223;
                        int i, j, k;
                        l_109[6] = &l_203[l_202][(l_202 + 2)][l_202];
                        (*l_222) = g_220[6];

                        ((l_223 == &g_221 || l_223 == &g_793 || (l_223 >= &g_514[0] && l_223 <= &g_514[2]) || l_223 == &g_674 || (l_223 >= &g_1056[0] && l_223 <= &g_1056[5]) || l_223 == &g_2210 || l_223 == &g_2238 || l_223 == &g_2635 || (l_223 >= &g_1720[0][0][0] && l_223 <= &g_1720[4][1][8]) || (l_223 >= &g_377[0][0][0] && l_223 <= &g_377[1][5][1]) || (l_223 >= &g_1451[0] && l_223 <= &g_1451[0]) || l_223 == 0) ? (void) (0) : __assert_fail ("l_223 == &g_221 || l_223 == &g_793 || (l_223 >= &g_514[0] && l_223 <= &g_514[2]) || l_223 == &g_674 || (l_223 >= &g_1056[0] && l_223 <= &g_1056[5]) || l_223 == &g_2210 || l_223 == &g_2238 || l_223 == &g_2635 || (l_223 >= &g_1720[0][0][0] && l_223 <= &g_1720[4][1][8]) || (l_223 >= &g_377[0][0][0] && l_223 <= &g_377[1][5][1]) || (l_223 >= &g_1451[0] && l_223 <= &g_1451[0]) || l_223 == 0", "4.c", 4375, __PRETTY_FUNCTION__));
                        l_126 &= (l_128[1] = (*p_67));
                        l_226 = l_224[5];

                        ((l_226 == &g_225) ? (void) (0) : __assert_fail ("l_226 == &g_225", "4.c", 4379, __PRETTY_FUNCTION__));
                    }
                }


                ((l_226 == &g_225 || (l_226 >= &g_227[0] && l_226 <= &g_227[1])) ? (void) (0) : __assert_fail ("l_226 == &g_225 || (l_226 >= &g_227[0] && l_226 <= &g_227[1])", "4.c", 4384, __PRETTY_FUNCTION__));
                return &g_79;


            }

            ((l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])) ? (void) (0) : __assert_fail ("l_134 == 0 || (l_134 >= &g_47[0][0] && l_134 <= &g_47[1][6])", "4.c", 4390, __PRETTY_FUNCTION__));
            l_126 |= ((safe_add_func_int16_t_s_s((((*p_66) = (((*l_233) = ((((l_230 == l_230) , 0x29363A9BL) == (safe_mul_func_int16_t_s_s(p_65, g_140[5]))) , p_65)) , ((l_234[3][0][0] | 0x23D7ECBDB1773738LL) & g_37))) != 0x73A41250L), p_68)) < 246UL);
            return l_112[1];


        }
        g_236--;
        (*p_66) = ((-2L) != (func_59(&g_79) <= 0xEBF90ABBC545F15FLL));
    }
    return l_168;


}







static int8_t * func_69(int32_t * p_70, int32_t p_71, uint64_t p_72, int64_t p_73, int8_t * const p_74)
{
    int32_t *l_92 = &g_47[0][1];
    int32_t *l_94[6][9][4] = {{{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]}},{{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]}},{{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]}},{{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]}},{{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]}},{{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]},{&g_47[1][6],&g_47[0][0],&g_47[1][4],&g_47[1][4]},{&g_47[1][0],&g_47[0][0],&g_47[0][0],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[1][1],&g_47[0][0],&g_47[1][4],&g_47[0][0]},{&g_47[0][5],&g_47[0][0],&g_47[1][3],&g_47[1][4]},{&g_47[0][0],&g_47[0][0],&g_47[0][1],&g_47[0][0]},{&g_47[0][0],&g_47[0][0],&g_47[0][0],&g_47[1][4]},{&g_47[0][3],&g_47[0][0],&g_47[1][2],&g_47[0][0]}}};
    int32_t **l_93 = &l_94[3][2][3];
    int8_t *l_95 = &g_79;
    int8_t **l_96 = &g_89;
    int16_t l_97 = (-4L);
    uint64_t l_98 = 18446744073709551606UL;
    int i, j, k;
    (*l_93) = (l_92 = p_70);



    (*p_70) = ((l_95 != ((*l_96) = l_95)) != p_72);

    ((g_89 == &g_79) ? (void) (0) : __assert_fail ("g_89 == &g_79", "4.c", 4426, __PRETTY_FUNCTION__));
    l_98++;
    return &g_79;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_42[i][j], "g_42[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_47[i][j], "g_47[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_227[i].f0, "g_227[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_236, "g_236", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_286[i].f0, "g_286[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_377[i][j][k].f0, "g_377[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_379[i][j][k], "g_379[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_514[i].f0, "g_514[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_583.f0, "g_583.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_618[i], "g_618[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_637[i], "g_637[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_674.f0, "g_674.f0", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_789[i], "g_789[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_793.f0, "g_793.f0", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_917[i][j].f0, "g_917[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_944.f0, "g_944.f0", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_993.f0, "g_993.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1056[i].f0, "g_1056[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1057.f0, "g_1057.f0", print_hash_value);
    transparent_crc(g_1058.f0, "g_1058.f0", print_hash_value);
    transparent_crc(g_1072.f0, "g_1072.f0", print_hash_value);
    transparent_crc(g_1092.f0, "g_1092.f0", print_hash_value);
    transparent_crc(g_1093.f0, "g_1093.f0", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1131[i], "g_1131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1170.f0, "g_1170.f0", print_hash_value);
    transparent_crc(g_1181.f0, "g_1181.f0", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1236.f0, "g_1236.f0", print_hash_value);
    transparent_crc(g_1247, "g_1247", print_hash_value);
    transparent_crc(g_1266.f0, "g_1266.f0", print_hash_value);
    transparent_crc(g_1310.f0, "g_1310.f0", print_hash_value);
    transparent_crc(g_1311.f0, "g_1311.f0", print_hash_value);
    transparent_crc(g_1350.f0, "g_1350.f0", print_hash_value);
    transparent_crc(g_1351.f0, "g_1351.f0", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1368.f0, "g_1368.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1451[i].f0, "g_1451[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1473.f0, "g_1473.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1590[i][j][k], "g_1590[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1592, "g_1592", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1636[i], "g_1636[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1642.f0, "g_1642.f0", print_hash_value);
    transparent_crc(g_1658.f0, "g_1658.f0", print_hash_value);
    transparent_crc(g_1660.f0, "g_1660.f0", print_hash_value);
    transparent_crc(g_1709.f0, "g_1709.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1720[i][j][k].f0, "g_1720[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1757.f0, "g_1757.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1779[i][j], "g_1779[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1836[i][j].f0, "g_1836[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1851.f0, "g_1851.f0", print_hash_value);
    transparent_crc(g_1895, "g_1895", print_hash_value);
    transparent_crc(g_1948.f0, "g_1948.f0", print_hash_value);
    transparent_crc(g_2028.f0, "g_2028.f0", print_hash_value);
    transparent_crc(g_2062, "g_2062", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2162[i][j][k], "g_2162[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2192.f0, "g_2192.f0", print_hash_value);
    transparent_crc(g_2210.f0, "g_2210.f0", print_hash_value);
    transparent_crc(g_2238.f0, "g_2238.f0", print_hash_value);
    transparent_crc(g_2386.f0, "g_2386.f0", print_hash_value);
    transparent_crc(g_2449.f0, "g_2449.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2571[i][j][k], "g_2571[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2608.f0, "g_2608.f0", print_hash_value);
    transparent_crc(g_2619.f0, "g_2619.f0", print_hash_value);
    transparent_crc(g_2626, "g_2626", print_hash_value);
    transparent_crc(g_2635.f0, "g_2635.f0", print_hash_value);
    transparent_crc(g_2635.f2, "g_2635.f2", print_hash_value);
    transparent_crc(g_2635.f3, "g_2635.f3", print_hash_value);
    transparent_crc(g_2669, "g_2669", print_hash_value);
    transparent_crc(g_2672.f0, "g_2672.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2674[i], "g_2674[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2688, "g_2688", print_hash_value);
    transparent_crc(g_2723.f0, "g_2723.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2749[i].f0, "g_2749[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2820.f0, "g_2820.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2844[i][j], "g_2844[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2896, "g_2896", print_hash_value);
    transparent_crc(g_2906.f0, "g_2906.f0", print_hash_value);
    transparent_crc(g_2983.f0, "g_2983.f0", print_hash_value);
    transparent_crc(g_2990, "g_2990", print_hash_value);
    transparent_crc(g_2991.f0, "g_2991.f0", print_hash_value);
    transparent_crc(g_3004.f0, "g_3004.f0", print_hash_value);
    transparent_crc(g_3027.f0, "g_3027.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3058[i][j].f0, "g_3058[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3118.f0, "g_3118.f0", print_hash_value);
    transparent_crc(g_3142.f0, "g_3142.f0", print_hash_value);
    transparent_crc(g_3170, "g_3170", print_hash_value);
    transparent_crc(g_3180.f0, "g_3180.f0", print_hash_value);
    transparent_crc(g_3221.f0, "g_3221.f0", print_hash_value);
    transparent_crc(g_3298.f0, "g_3298.f0", print_hash_value);
    transparent_crc(g_3317, "g_3317", print_hash_value);
    transparent_crc(g_3320, "g_3320", print_hash_value);
    transparent_crc(g_3376, "g_3376", print_hash_value);
    transparent_crc(g_3380, "g_3380", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3391[i][j], "g_3391[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
