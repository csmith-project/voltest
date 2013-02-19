# 1 "vol1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "vol1.c"
# 10 "vol1.c"
# 1 "../../../csmith/runtime/csmith.h" 1
# 40 "../../../csmith/runtime/csmith.h"
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

# 41 "../../../csmith/runtime/csmith.h" 2


# 1 "../../../csmith/runtime/random_inc.h" 1
# 51 "../../../csmith/runtime/random_inc.h"
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
# 52 "../../../csmith/runtime/random_inc.h" 2



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
# 56 "../../../csmith/runtime/random_inc.h" 2



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



# 60 "../../../csmith/runtime/random_inc.h" 2
# 89 "../../../csmith/runtime/random_inc.h"
# 1 "../../../csmith/runtime/platform_generic.h" 1
# 40 "../../../csmith/runtime/platform_generic.h"
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

# 41 "../../../csmith/runtime/platform_generic.h" 2


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc, int flag)
{



 printf ("checksum = %X\n", crc);
# 117 "../../../csmith/runtime/platform_generic.h"
}
# 90 "../../../csmith/runtime/random_inc.h" 2
# 100 "../../../csmith/runtime/random_inc.h"
# 1 "../../../csmith/runtime/safe_math.h" 1
# 13 "../../../csmith/runtime/safe_math.h"
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
# 101 "../../../csmith/runtime/random_inc.h" 2
# 44 "../../../csmith/runtime/csmith.h" 2

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
# 94 "../../../csmith/runtime/csmith.h"
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
# 11 "vol1.c" 2


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
static int32_t g_81 = 1L;
static int16_t g_88 = 0xB8AFL;
static int8_t g_94 = 0x7EL;
static int32_t * volatile g_96 = &g_81;
static int32_t g_137 = 0x730D59BCL;
static volatile union U3 g_144 = {0xF9DB91B0L};
static union U0 g_160 = {-7L};
static int32_t *g_165 = (void*)0;
static int32_t ** volatile g_164 = &g_165;
static uint32_t g_202 = 6UL;
static uint32_t g_209[3] = {0x9EF2C490L,0x9EF2C490L,0x9EF2C490L};
static int64_t g_211[1][9] = {{0L,0xB3813AB97BF4D477LL,0L,0xB3813AB97BF4D477LL,0L,0xB3813AB97BF4D477LL,0L,0xB3813AB97BF4D477LL,0L}};
static uint8_t g_231 = 0x2EL;
static uint8_t g_233 = 252UL;
static uint16_t g_249 = 0x10C3L;
static int16_t g_258[1] = {0x0697L};
static union U3 g_264 = {4294967295UL};
static uint32_t g_275 = 0x0A182755L;
static int32_t g_279 = 0x976463CAL;
static volatile int16_t g_280 = 0x40D0L;
static uint16_t g_281 = 65534UL;
static union U2 g_308 = {1UL};
static int32_t ** volatile g_327 = (void*)0;
static int32_t * volatile *g_372 = &g_34;
static int32_t * volatile ** volatile g_371 = &g_372;
static union U1 g_412[2] = {{0xFC3104D6L},{0xFC3104D6L}};
static union U1 g_449 = {1UL};
static union U2 g_462 = {0xBE7A1A031D18E55BLL};
static volatile union U1 g_470 = {0x6E749F25L};
static volatile union U1 * volatile g_469[10][5] = {{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{(void*)0,&g_470,&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470}};
static union U1 g_473 = {0UL};
static union U0 g_474 = {0x6C518BF8B18059FELL};
static volatile uint16_t g_480 = 0UL;
static union U2 g_483 = {0xBEE20119565B0B30LL};
static volatile uint16_t g_488 = 0xA1BAL;
static volatile uint16_t * const g_487 = &g_488;
static volatile uint16_t * const *g_486 = &g_487;
static volatile uint16_t * const **g_485[5][1] = {{&g_486},{&g_486},{&g_486},{&g_486},{&g_486}};
static const uint16_t *g_491 = &g_412[1].f1;
static const uint16_t **g_490 = &g_491;
static const uint16_t ***g_489 = &g_490;
static const uint16_t ***g_495 = &g_490;
static volatile union U2 g_498 = {18446744073709551608UL};
static volatile int32_t g_521 = 1L;
static int8_t g_522 = (-6L);
static int32_t g_523 = 0x866DFA88L;
static volatile uint64_t g_524 = 0x500F75CD230955C6LL;
static const uint16_t **g_538 = &g_491;
static const uint16_t *** volatile g_537 = &g_538;
static int16_t *g_575[9][2][10] = {{{(void*)0,&g_88,&g_449.f3,&g_258[0],(void*)0,&g_473.f3,&g_412[1].f3,(void*)0,(void*)0,&g_412[1].f3},{(void*)0,(void*)0,&g_258[0],&g_258[0],(void*)0,(void*)0,(void*)0,&g_258[0],&g_258[0],&g_473.f3}},{{(void*)0,&g_258[0],&g_88,&g_412[1].f3,&g_88,&g_258[0],(void*)0,&g_88,&g_412[1].f3,&g_449.f3},{(void*)0,&g_88,(void*)0,(void*)0,&g_412[1].f3,(void*)0,&g_449.f3,&g_258[0],&g_88,&g_473.f3}},{{(void*)0,&g_449.f3,&g_258[0],&g_88,&g_473.f3,&g_473.f3,&g_88,&g_473.f3,&g_473.f3,&g_88},{(void*)0,&g_258[0],(void*)0,&g_473.f3,&g_412[1].f3,(void*)0,&g_473.f3,&g_412[1].f3,&g_449.f3,&g_412[1].f3}},{{(void*)0,(void*)0,&g_473.f3,(void*)0,(void*)0,&g_88,&g_412[1].f3,&g_412[1].f3,&g_473.f3,&g_258[0]},{&g_473.f3,&g_412[1].f3,&g_412[1].f3,&g_88,(void*)0,&g_473.f3,&g_473.f3,(void*)0,&g_258[0],&g_412[1].f3}},{{&g_412[1].f3,&g_473.f3,(void*)0,&g_473.f3,(void*)0,(void*)0,&g_473.f3,(void*)0,&g_473.f3,&g_412[1].f3},{(void*)0,(void*)0,&g_473.f3,(void*)0,(void*)0,&g_88,(void*)0,&g_88,&g_449.f3,(void*)0}},{{&g_88,(void*)0,&g_258[0],(void*)0,(void*)0,&g_258[0],&g_258[0],(void*)0,&g_412[1].f3,&g_412[1].f3},{(void*)0,(void*)0,&g_412[1].f3,&g_258[0],(void*)0,(void*)0,&g_88,&g_412[1].f3,&g_88,&g_412[1].f3}},{{&g_412[1].f3,&g_473.f3,(void*)0,&g_258[0],(void*)0,&g_473.f3,&g_412[1].f3,(void*)0,&g_473.f3,&g_412[1].f3},{&g_258[0],&g_412[1].f3,&g_473.f3,(void*)0,(void*)0,(void*)0,&g_88,&g_88,&g_258[0],(void*)0}},{{&g_258[0],&g_412[1].f3,&g_258[0],(void*)0,&g_473.f3,&g_412[1].f3,&g_412[1].f3,&g_412[1].f3,&g_473.f3,&g_473.f3},{(void*)0,&g_473.f3,(void*)0,(void*)0,&g_258[0],&g_88,&g_88,&g_88,&g_88,&g_258[0]}},{{&g_412[1].f3,(void*)0,(void*)0,&g_412[1].f3,&g_473.f3,(void*)0,&g_258[0],(void*)0,&g_88,&g_412[1].f3},{&g_473.f3,&g_449.f3,&g_473.f3,(void*)0,&g_88,&g_412[1].f3,&g_412[1].f3,&g_473.f3,&g_88,&g_258[0]}}};
static int16_t * const volatile *g_574 = &g_575[1][1][6];
static int16_t * const volatile **g_573 = &g_574;
static uint16_t g_588[2] = {0xB686L,0xB686L};
static int32_t * volatile g_597 = &g_36;
static uint16_t g_609 = 0xA530L;
static union U2 g_629[1][6] = {{{0x6FC9EE55C389F05DLL},{1UL},{0x6FC9EE55C389F05DLL},{0x6FC9EE55C389F05DLL},{1UL},{0x6FC9EE55C389F05DLL}}};
static int64_t *g_666 = (void*)0;
static volatile uint8_t g_705 = 6UL;
static volatile int8_t g_744[1][4] = {{0xE0L,0xE0L,0xE0L,0xE0L}};
static volatile union U1 g_825[3] = {{0x14CF6733L},{0x14CF6733L},{0x14CF6733L}};
static union U2 g_826 = {0x73BE9CC1C61F4A5CLL};
static volatile int32_t g_855 = (-1L);
static uint32_t g_856[6][1][8] = {{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}},{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}},{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}},{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}},{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}},{{0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL,0xEBFFF38BL,18446744073709551615UL}}};
static union U3 *g_860[3][10] = {{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0,&g_264},{(void*)0,&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0}};
static union U3 ** const volatile g_859 = &g_860[1][6];
static uint32_t *g_866 = &g_55;
static uint32_t **g_865 = &g_866;
static volatile union U1 g_882 = {0x47E9437CL};
static int16_t g_890 = (-1L);
static uint32_t g_891 = 1UL;
static union U1 g_926 = {4294967286UL};
static union U3 **g_934 = &g_860[1][6];
static union U3 *** volatile g_933 = &g_934;
static union U1 *g_951 = (void*)0;
static union U1 ** volatile g_950 = &g_951;
static uint16_t *g_957 = (void*)0;
static uint16_t **g_956 = &g_957;
static uint16_t ***g_955 = &g_956;
static const union U0 g_991 = {-1L};
static volatile union U1 g_996[10] = {{1UL},{0x6BDB0F4FL},{1UL},{0x6BDB0F4FL},{1UL},{0x6BDB0F4FL},{1UL},{0x6BDB0F4FL},{1UL},{0x6BDB0F4FL}};
static volatile union U2 g_1019[10] = {{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}};
static volatile union U0 g_1026[4][6] = {{{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL}},{{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL}},{{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL}},{{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL},{0x36C8A16B24BA446DLL}}};
static volatile union U0 *g_1025 = &g_1026[0][1];
static volatile union U0 **g_1024 = &g_1025;
static volatile union U1 g_1027 = {0UL};
static union U3 *g_1039[5] = {&g_264,&g_264,&g_264,&g_264,&g_264};
static const union U3 ** volatile g_1047 = (void*)0;
static const int32_t *g_1052[5][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_36},{&g_81,&g_81,(void*)0,&g_137,&g_137},{&g_81,&g_81,&g_81,&g_279,(void*)0},{(void*)0,&g_36,&g_81,(void*)0,&g_279},{&g_137,(void*)0,&g_81,&g_81,&g_137},{&g_137,(void*)0,&g_81,&g_81,&g_81},{&g_137,&g_137,(void*)0,(void*)0,(void*)0},{&g_36,&g_81,(void*)0,(void*)0,&g_81},{&g_137,&g_137,&g_279,&g_279,(void*)0},{&g_279,&g_81,(void*)0,&g_81,&g_137}},{{&g_279,(void*)0,&g_36,&g_137,&g_137},{&g_81,&g_137,&g_279,&g_81,(void*)0},{(void*)0,&g_81,&g_36,(void*)0,(void*)0},{(void*)0,&g_137,&g_81,&g_81,&g_137},{&g_81,&g_36,&g_279,&g_36,&g_81},{&g_279,&g_279,&g_137,(void*)0,(void*)0},{&g_279,&g_279,(void*)0,&g_81,&g_36},{&g_137,(void*)0,&g_36,&g_279,(void*)0},{&g_36,&g_81,&g_81,&g_137,&g_81},{(void*)0,&g_36,&g_137,&g_137,&g_137}},{{&g_137,&g_279,&g_81,(void*)0,(void*)0},{&g_137,&g_81,&g_81,(void*)0,(void*)0},{&g_137,(void*)0,&g_137,&g_137,&g_137},{&g_81,(void*)0,&g_81,&g_137,&g_137},{&g_137,&g_81,(void*)0,&g_279,(void*)0},{(void*)0,&g_81,&g_137,&g_81,&g_81},{&g_279,&g_279,(void*)0,&g_36,&g_279},{&g_81,&g_279,&g_81,&g_137,&g_36},{(void*)0,&g_279,(void*)0,(void*)0,&g_81},{&g_279,&g_137,&g_137,&g_279,&g_81}},{{&g_137,&g_137,(void*)0,&g_137,&g_137},{&g_81,&g_279,&g_81,&g_81,&g_279},{&g_137,&g_279,&g_81,(void*)0,(void*)0},{&g_36,&g_279,&g_81,(void*)0,(void*)0},{&g_36,&g_81,&g_137,&g_279,(void*)0},{&g_36,&g_137,(void*)0,(void*)0,&g_137},{&g_137,&g_137,&g_279,&g_279,&g_81},{&g_81,&g_36,(void*)0,&g_279,&g_137},{&g_137,(void*)0,(void*)0,&g_81,&g_137},{&g_279,&g_279,(void*)0,&g_279,&g_81}},{{(void*)0,&g_279,&g_279,(void*)0,&g_137},{&g_81,&g_137,&g_279,&g_137,(void*)0},{&g_279,&g_36,&g_279,(void*)0,(void*)0},{(void*)0,(void*)0,&g_36,&g_137,(void*)0},{&g_279,(void*)0,&g_81,(void*)0,&g_279},{&g_81,&g_279,&g_279,&g_137,(void*)0},{&g_81,&g_279,&g_279,(void*)0,(void*)0},{&g_279,&g_36,&g_279,(void*)0,(void*)0},{(void*)0,&g_81,&g_279,&g_137,&g_279},{(void*)0,(void*)0,(void*)0,&g_137,(void*)0}}};
static const int32_t ** volatile g_1051 = &g_1052[2][8][0];
static uint16_t ****g_1097 = &g_955;
static uint16_t ****g_1099 = &g_955;
static union U1 g_1140 = {4294967289UL};
static const union U1 g_1151[7][3][7] = {{{{0UL},{4294967290UL},{0x95CA7CD7L},{0x9DE11348L},{4294967294UL},{0UL},{0x5B06AA97L}},{{4294967295UL},{0UL},{0x95CA7CD7L},{4294967294UL},{4294967290UL},{4294967295UL},{4294967286UL}},{{4294967295UL},{4294967290UL},{4294967294UL},{0x95CA7CD7L},{0UL},{4294967295UL},{0x5B06AA97L}}},{{{0UL},{4294967294UL},{0x9DE11348L},{0x95CA7CD7L},{4294967290UL},{0UL},{1UL}},{{0x86920269L},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{0x86920269L},{1UL}},{{0UL},{4294967290UL},{0x95CA7CD7L},{0x9DE11348L},{4294967294UL},{0UL},{0x5B06AA97L}}},{{{4294967295UL},{0UL},{0x95CA7CD7L},{4294967294UL},{4294967290UL},{4294967295UL},{4294967286UL}},{{4294967295UL},{4294967290UL},{4294967294UL},{0x95CA7CD7L},{0UL},{4294967295UL},{0x5B06AA97L}},{{0UL},{4294967294UL},{0x9DE11348L},{0x95CA7CD7L},{4294967290UL},{0UL},{1UL}}},{{{0x86920269L},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{0x86920269L},{1UL}},{{0UL},{4294967290UL},{4UL},{4294967294UL},{6UL},{0UL},{4294967294UL}},{{1UL},{0xC60F3969L},{4UL},{0UL},{4294967294UL},{1UL},{0x9DE11348L}}},{{{1UL},{4294967294UL},{0UL},{4UL},{0xC60F3969L},{1UL},{4294967294UL}},{{0UL},{6UL},{4294967294UL},{4UL},{4294967294UL},{0UL},{0x95CA7CD7L}},{{0x4E9CC827L},{6UL},{0UL},{0UL},{6UL},{0x4E9CC827L},{0x95CA7CD7L}}},{{{0UL},{4294967294UL},{4UL},{4294967294UL},{6UL},{0UL},{4294967294UL}},{{1UL},{0xC60F3969L},{4UL},{0UL},{4294967294UL},{1UL},{0x9DE11348L}},{{1UL},{4294967294UL},{0UL},{4UL},{0xC60F3969L},{1UL},{4294967294UL}}},{{{0UL},{6UL},{4294967294UL},{4UL},{4294967294UL},{0UL},{0x95CA7CD7L}},{{0x4E9CC827L},{6UL},{0UL},{0UL},{6UL},{0x4E9CC827L},{0x95CA7CD7L}},{{0UL},{4294967294UL},{4UL},{4294967294UL},{6UL},{0UL},{4294967294UL}}}};
static int32_t g_1156 = 0x1DCDBC7DL;
static uint64_t *g_1164 = &g_30;
static uint64_t **g_1163 = &g_1164;
static uint64_t **g_1167[1][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static uint64_t *** volatile g_1166[7][5] = {{(void*)0,&g_1167[0][0][3],&g_1167[0][0][3],(void*)0,&g_1167[0][0][3]},{&g_1167[0][0][4],&g_1167[0][0][4],&g_1167[0][0][3],&g_1167[0][0][4],&g_1167[0][0][4]},{&g_1167[0][0][3],(void*)0,&g_1167[0][0][3],&g_1167[0][0][3],(void*)0},{(void*)0,&g_1167[0][0][3],&g_1167[0][0][3],(void*)0,&g_1167[0][0][3]},{&g_1167[0][0][3],&g_1167[0][0][3],(void*)0,&g_1167[0][0][3],&g_1167[0][0][3]},{&g_1167[0][0][3],(void*)0,&g_1167[0][0][3],&g_1167[0][0][3],(void*)0},{&g_1167[0][0][3],&g_1167[0][0][3],&g_1167[0][0][3],&g_1167[0][0][3],&g_1167[0][0][3]}};
static uint32_t *g_1242 = &g_264.f0;
static uint32_t ** volatile g_1241 = &g_1242;
static uint8_t *g_1255[8][2][8] = {{{&g_231,&g_231,&g_233,&g_231,(void*)0,&g_233,&g_233,&g_233},{&g_231,&g_233,&g_233,&g_233,&g_233,&g_231,&g_233,&g_231}},{{&g_233,&g_231,&g_231,&g_233,&g_233,(void*)0,&g_233,&g_231},{&g_231,&g_233,&g_233,&g_233,&g_231,&g_233,&g_231,&g_231}},{{&g_233,&g_231,(void*)0,&g_233,&g_231,&g_231,&g_231,&g_233},{&g_233,&g_233,&g_233,&g_231,&g_233,&g_233,&g_233,&g_233}},{{&g_231,(void*)0,&g_233,(void*)0,(void*)0,&g_233,(void*)0,&g_233},{(void*)0,&g_231,&g_233,&g_233,(void*)0,&g_231,&g_231,&g_231}},{{&g_231,&g_231,&g_233,&g_233,&g_233,(void*)0,&g_231,&g_231},{&g_233,(void*)0,&g_233,&g_231,&g_231,&g_233,&g_231,(void*)0}},{{&g_231,&g_231,&g_233,&g_231,&g_231,(void*)0,(void*)0,&g_233},{&g_231,&g_233,(void*)0,(void*)0,&g_231,(void*)0,(void*)0,&g_233}},{{(void*)0,&g_231,&g_233,&g_233,&g_231,&g_233,&g_233,&g_231},{&g_233,&g_231,&g_231,&g_231,&g_233,&g_231,&g_231,&g_231}},{{&g_231,&g_231,(void*)0,&g_231,(void*)0,&g_233,(void*)0,(void*)0},{&g_233,&g_231,&g_233,&g_233,&g_231,&g_233,(void*)0,(void*)0}}};
static uint8_t ** volatile g_1254[5] = {&g_1255[3][1][5],&g_1255[3][1][5],&g_1255[3][1][5],&g_1255[3][1][5],&g_1255[3][1][5]};
static union U0 *g_1306 = &g_160;
static union U0 ** volatile g_1305 = &g_1306;
static volatile union U1 g_1385 = {4294967290UL};
static volatile int32_t g_1392 = 1L;
static int32_t **g_1415[1][6][2] = {{{&g_165,&g_165},{&g_165,&g_165},{&g_165,&g_165},{&g_165,&g_165},{&g_165,&g_165},{&g_165,&g_165}}};
static uint32_t **g_1429[4] = {&g_1242,&g_1242,&g_1242,&g_1242};
static uint32_t ***g_1428 = &g_1429[2];



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
# 180 "vol1.c"
static const uint32_t func_1(void)
{
    int8_t l_2 = 0xBAL;
    int64_t l_1286 = 1L;
    union U3 l_1293 = {4294967289UL};
    int8_t l_1321 = 0x87L;
    int32_t *l_1329 = &g_137;
    int8_t l_1338[6] = {0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL};
    int16_t l_1360 = 0L;
    int32_t *l_1370 = &g_137;
    int32_t *l_1371[2][9][5] = {{{&g_81,&g_36,&g_81,&g_81,&g_81},{&g_81,&g_279,&g_36,&g_36,&g_279},{&g_137,&g_137,&g_36,&g_81,(void*)0},{(void*)0,&g_36,(void*)0,(void*)0,&g_81},{&g_36,&g_279,&g_279,&g_36,(void*)0},{&g_137,&g_81,&g_81,&g_36,&g_81},{&g_279,&g_137,&g_137,(void*)0,&g_81},{(void*)0,(void*)0,(void*)0,&g_36,&g_36},{(void*)0,&g_279,&g_279,&g_36,&g_36}},{{(void*)0,&g_81,&g_137,(void*)0,&g_279},{&g_36,(void*)0,&g_36,&g_279,(void*)0},{&g_36,(void*)0,&g_137,&g_81,&g_81},{(void*)0,&g_137,(void*)0,(void*)0,(void*)0},{(void*)0,&g_279,(void*)0,&g_279,(void*)0},{(void*)0,&g_36,&g_279,&g_81,&g_36},{&g_279,&g_36,(void*)0,(void*)0,&g_81},{&g_137,&g_137,(void*)0,&g_81,&g_137},{&g_36,&g_36,&g_137,&g_36,&g_81}}};
    int16_t l_1372 = (-1L);
    uint64_t **l_1405 = &g_1164;
    int8_t l_1443 = 0xB8L;
    uint8_t l_1452 = 0x9DL;
    const uint64_t l_1458[3] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
    uint32_t l_1465 = 0UL;
    int i, j, k;
    if (l_2)
    {
        uint8_t l_14 = 6UL;
        const uint16_t ****l_492 = (void*)0;
        const uint16_t ***l_494 = (void*)0;
        const uint16_t ****l_493[7] = {&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489};
        int8_t *l_598 = &g_522;
        uint16_t *l_608 = &g_609;
        union U3 l_610 = {5UL};
        uint64_t ***l_1282 = &g_1163;
        int64_t l_1311[1];
        int8_t *l_1324 = &g_412[1].f2;
        int32_t l_1326 = 0xB7376E63L;
        uint32_t l_1357 = 1UL;
        int32_t l_1434[3][2][6] = {{{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L},{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L}},{{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L},{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L}},{{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L},{0xB009B18EL,0xB009B18EL,0L,0xB009B18EL,0xB009B18EL,0L}}};
        const int16_t l_1463 = 0x39A2L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1311[i] = (-1L);
        if (func_3(func_9(l_14, ((*l_608) = func_15(func_21((safe_mul_func_int16_t_s_s(func_26(g_30, l_2, g_30), (((g_474 , g_485[0][0]) == (g_495 = g_489)) , 0x9A99L))), l_2), l_14, &g_522, l_598, &g_522)), l_2, l_610), l_14, &l_2, l_610.f1, g_856[4][0][0]))
        {
            int64_t l_1299 = 0x7C7B8D1B8A26AB12LL;
            int32_t l_1300[3][7][7] = {{{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)}},{{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}},{{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)}}};
            int8_t **l_1314 = (void*)0;
            int8_t *l_1315 = &g_473.f2;
            int8_t **l_1316[2][3] = {{&l_598,&l_598,&l_598},{&l_598,&l_598,&l_598}};
            int16_t *l_1322 = &g_258[0];
            int16_t l_1323 = 0x74B1L;
            int8_t *l_1325 = &g_160.f2;
            int i, j, k;
            if (l_2)
            {
                uint16_t l_1279 = 1UL;
                uint8_t *l_1298[6] = {&g_233,&g_233,&g_233,&g_233,&g_233,&g_233};
                int16_t *l_1301 = (void*)0;
                int16_t *l_1302 = &g_258[0];
                int32_t l_1303[2][7][2] = {{{0x3B19EB3DL,0x3B19EB3DL},{0x3B19EB3DL,0x88B946C7L},{0x4A900321L,1L},{0x88B946C7L,0x88B946C7L},{1L,(-2L)},{0x4A900321L,0x4A900321L},{0x4A900321L,(-2L)}},{{1L,0x88B946C7L},{(-2L),0x88B946C7L},{1L,(-2L)},{0x4A900321L,0x4A900321L},{0x4A900321L,(-2L)},{1L,0x88B946C7L},{(-2L),0x88B946C7L}}};
                union U0 *l_1304 = (void*)0;
                int i, j, k;
                l_1279++;
                if ((l_1282 == ((((safe_unary_minus_func_int16_t_s(((safe_mul_func_int8_t_s_s(l_1286, ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((l_1293 , (safe_mul_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u((l_1299 &= (l_1293.f0 != 6L)), 1L)) | (l_1300[2][5][5] || ((l_14 < 0x0F69F51FL) ^ l_1303[0][0][0]))) && l_1300[2][5][5]) < 0xE4ECD220L), l_1300[0][3][6]))) | (**g_1241)), 3L)), 0x6D22L)), (**g_538))) != l_610.f1))) > l_1303[0][1][1]))) ^ 1L) | l_1279) , (void*)0)))
                {
                    return (*g_1242);
                }
                else
                {
                    (*g_1305) = l_1304;
                }
            }
            else
            {
                union U0 *l_1308 = &g_160;
                union U0 **l_1307 = &l_1308;
                (*l_1307) = (*g_1305);
            }
            l_1326 = ((*g_597) < (safe_div_func_int16_t_s_s(((((*g_1242) ^= l_1311[0]) , &g_1039[3]) == (void*)0), ((1L || (safe_rshift_func_int16_t_s_u((l_1299 > func_15((l_598 = (l_1315 = (g_73 = &g_522))), (l_1293 , (((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((((*l_1322) = ((l_1321 ^ 0x7C0A1F5916AC00D2LL) , (-1L))) , (**g_1163)), 0x972F5E7A01EAF19ALL)), l_1323)) && 0x9653L) , l_1300[2][5][5])), &g_94, l_1324, l_1325)), 6))) | g_473.f2))));
            for (g_609 = 0; (g_609 == 22); g_609 = safe_add_func_uint32_t_u_u(g_609, 4))
            {
                (*g_372) = l_1329;
            }
        }
        else
        {
            uint32_t l_1352 = 0x7C9EC44EL;
            uint32_t l_1356 = 1UL;
            uint8_t *l_1358[5] = {&g_231,&g_231,&g_231,&g_231,&g_231};
            int32_t l_1359 = 0xD27799FEL;
            const union U3 l_1427[8][5] = {{{5UL},{0x833A5B94L},{0x91E409CDL},{5UL},{0x7275FB42L}},{{1UL},{0x833A5B94L},{4294967295UL},{1UL},{0x7275FB42L}},{{5UL},{4294967295UL},{4294967295UL},{5UL},{0x9C6A3317L}},{{5UL},{0x833A5B94L},{0x91E409CDL},{5UL},{0x7275FB42L}},{{1UL},{0x833A5B94L},{4294967295UL},{1UL},{0x7275FB42L}},{{5UL},{4294967295UL},{4294967295UL},{5UL},{0x9C6A3317L}},{{5UL},{0x833A5B94L},{0x91E409CDL},{5UL},{0x7275FB42L}},{{1UL},{0x833A5B94L},{4294967295UL},{1UL},{0x7275FB42L}}};
            uint64_t *l_1441[8];
            union U3 **l_1464 = &g_1039[0];
            int i, j;
            for (i = 0; i < 8; i++)
                l_1441[i] = &g_30;
lbl_1432:
            for (g_275 = 0; (g_275 == 26); ++g_275)
            {
                int32_t *l_1332 = &g_279;
                int32_t *l_1333 = &g_137;
                int32_t *l_1334 = &l_1326;
                int32_t *l_1335 = &g_81;
                int32_t *l_1336 = &g_36;
                int32_t *l_1337 = &g_137;
                int32_t *l_1339 = &g_36;
                int32_t *l_1340 = &g_36;
                int32_t *l_1341 = &g_36;
                int32_t *l_1342 = &l_1326;
                int32_t *l_1343 = &l_1326;
                int32_t *l_1344 = (void*)0;
                int32_t *l_1345 = &l_1326;
                int32_t *l_1346 = &g_36;
                int32_t *l_1347 = &g_279;
                int32_t *l_1348 = &l_1326;
                int32_t *l_1349 = (void*)0;
                int32_t *l_1350 = (void*)0;
                int32_t *l_1351[4][10][3] = {{{&g_279,(void*)0,&g_36},{&g_279,&g_36,&l_1326},{&g_81,&g_279,&g_36},{&g_279,&g_279,&g_36},{&g_81,(void*)0,(void*)0},{&g_279,&g_279,&l_1326},{&g_279,&g_279,(void*)0},{&g_279,&g_36,&g_36},{&g_279,(void*)0,&g_36},{&g_279,&g_36,&g_279}},{{&g_279,&g_279,&g_36},{&g_36,(void*)0,(void*)0},{&g_279,&g_279,&g_279},{&g_279,(void*)0,&g_279},{&g_36,&g_279,&g_279},{&g_36,&g_137,(void*)0},{&g_36,&g_279,&g_36},{&g_279,&g_137,&g_279},{&g_279,&g_279,&g_36},{&g_36,(void*)0,(void*)0}},{{&g_279,&g_279,&g_279},{&g_279,(void*)0,&g_279},{&g_36,&g_279,&g_279},{&g_36,&g_137,(void*)0},{&g_36,&g_279,&g_36},{&g_279,&g_137,&g_279},{&g_279,&g_279,&g_36},{&g_36,(void*)0,(void*)0},{&g_279,&g_279,&g_279},{&g_279,(void*)0,&g_279}},{{&g_36,&g_279,&g_279},{&g_36,&g_137,(void*)0},{&g_36,&g_279,&g_36},{&g_279,&g_137,&g_279},{&g_279,&g_279,&g_36},{&g_36,(void*)0,(void*)0},{&g_279,&g_279,&g_279},{&g_279,(void*)0,&g_279},{&g_36,&g_279,&g_279},{&g_36,&g_137,(void*)0}}};
                union U3 **l_1355 = &g_1039[4];
                int i, j, k;
                ++l_1352;
                (*l_1343) |= ((((*l_1355) = (*g_859)) != (*g_934)) | ((*l_1341) = l_1311[0]));
                if (l_1356)
                    break;
            }
            if (((l_1357 <= (l_1359 = ((*l_1329) = 1UL))) | l_1360))
            {
                uint8_t l_1361 = 0UL;
                int32_t l_1366 = 0x393E2575L;
                int32_t **l_1369[3];
                int8_t *l_1386[10] = {&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1],&l_1338[1]};
                int8_t **l_1387 = (void*)0;
                int8_t **l_1388 = &g_73;
                int8_t *l_1389 = &g_473.f2;
                union U0 l_1406[4][4] = {{{0x467C57CB949A88A5LL},{-2L},{0x44B1DBAA10CC51F5LL},{0x44B1DBAA10CC51F5LL}},{{0L},{0L},{-1L},{-2L}},{{-2L},{0x467C57CB949A88A5LL},{-1L},{0x467C57CB949A88A5LL}},{{0L},{0x1C0BE586ACA70EEBLL},{0x44B1DBAA10CC51F5LL},{-1L}}};
                const int32_t **l_1412 = &g_1052[2][8][0];
                uint32_t ***l_1430[7][5][1] = {{{&g_1429[2]},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{&g_1429[2]},{(void*)0},{&g_1429[2]},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{&g_1429[2]}},{{(void*)0},{&g_1429[2]},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_1429[2]},{(void*)0},{&g_1429[2]}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{&g_1429[2]},{(void*)0},{&g_1429[2]},{(void*)0},{(void*)0}}};
                uint64_t l_1442[4] = {0x227576B76BBAE284LL,0x227576B76BBAE284LL,0x227576B76BBAE284LL,0x227576B76BBAE284LL};
                int8_t l_1444 = 0L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1369[i] = &l_1329;
                if (((l_1352 && (+l_1361)) , (((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*l_608)++) | ((((l_1329 = &g_137) == (l_1371[0][7][2] = l_1370)) == l_1326) ^ l_1372)), (safe_div_func_int64_t_s_s(((*l_1370) < func_15(((*l_1388) = (func_15(&g_522, (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_1385 , (*l_1370)), (-4L))), l_1311[0])), (-2L))), l_1326)), l_1359)), &l_1338[3], l_1386[8], l_598) , &g_522)), l_1326, l_1389, &g_522, &l_1321)), (*l_1370))))), l_1356)) , l_1352) && l_1356)))
                {
                    uint32_t l_1401 = 0xD07BBDE7L;
                    uint64_t **l_1404[3];
                    int64_t *l_1407 = &l_1311[0];
                    const int32_t **l_1414[1][6][4] = {{{(void*)0,&g_1052[2][8][0],&g_1052[2][8][0],(void*)0},{(void*)0,&g_1052[2][8][0],&g_1052[2][8][0],&g_1052[2][8][0]},{&g_1052[2][8][0],&g_1052[2][8][0],&g_1052[2][8][0],&g_1052[2][8][0]},{(void*)0,(void*)0,&g_1052[2][8][0],&g_1052[2][8][0]},{(void*)0,&g_1052[2][8][0],(void*)0,&g_1052[2][8][0]},{(void*)0,&g_1052[2][8][0],&g_1052[2][8][0],(void*)0}}};
                    const int32_t ***l_1413 = &l_1414[0][4][0];
                    int32_t *l_1426 = &g_523;
                    int8_t *l_1431 = (void*)0;
                    int32_t l_1433 = 4L;
                    int32_t l_1440 = (-1L);
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1404[i] = &g_1164;
                    for (g_522 = 0; (g_522 <= (-2)); --g_522)
                    {
                        int8_t **l_1399 = &l_1386[8];
                        uint32_t l_1400 = 0x41EEA52BL;
                        int32_t l_1402 = (-3L);
                        int64_t *l_1403 = &g_211[0][1];
                        g_279 = (g_1392 > (((((*l_1403) &= (safe_add_func_uint16_t_u_u(((*l_1329) & (safe_mod_func_uint64_t_u_u(((**g_1163) = (safe_mul_func_uint16_t_u_u(((&g_73 == l_1399) < (((void*)0 == (*g_865)) && ((+l_1400) <= l_1401))), (l_1359 < l_1402)))), l_1400))), 1L))) , l_1402) || (*g_1242)) >= (-10L)));
                        l_1405 = ((*l_1282) = l_1404[0]);
                    }
                    g_81 = ((~((((func_58(l_1326, g_1151[2][2][4].f1, l_1406[3][2]) , l_1407) != (void*)0) && l_610.f3) , (func_3(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((*l_1413) = l_1412) != (g_1415[0][5][0] = l_1369[1])) , (***g_489)), 15)), 1L)) , l_1358[1]), g_991.f2, &g_94, (**g_865), l_1352) | l_1356))) >= l_610.f3);
                    if (((((++(*g_1164)) != l_1356) ^ ((safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(g_856[4][0][3], (safe_mul_func_uint8_t_u_u(func_15(l_598, (safe_mul_func_int8_t_s_s((l_1326 &= (l_610.f1 & (l_1359 = func_15(&g_522, ((*l_1370) || ((((*l_1426) = g_825[2].f3) , l_1427[2][0]) , ((l_1430[2][2][0] = g_1428) != (void*)0))), &g_94, &g_94, &g_94)))), 0UL)), &g_522, &g_522, l_1431), l_14)))) & l_1427[2][0].f3), l_1311[0])) < 1L)) && (*g_1164)))
                    {
                        uint64_t l_1435 = 18446744073709551608UL;
                        int32_t l_1445 = 0x295BAABFL;
                        if (g_160.f2)
                            goto lbl_1432;
                        l_1435--;
                        (*l_1412) = (void*)0;
                        l_1445 &= ((*l_1329) = ((*g_35) && (*g_597)));
                    }
                    else
                    {
                        (*l_1370) = l_1326;
                        l_1434[0][1][0] &= l_1326;
                    }
                    (*g_597) &= (((safe_add_func_uint32_t_u_u(l_1427[2][0].f0, ((safe_mod_func_uint64_t_u_u(l_1452, (l_1434[0][1][3] , (*g_1164)))) >= func_15(l_1358[2], (l_1359 = ((***g_1428) = ((((((safe_rshift_func_int16_t_s_u(func_15(l_1358[0], l_1427[2][0].f3, &g_522, &g_94, l_1358[1]), (***g_495))) && 0UL) | (*l_1329)) | l_1356) <= l_1326) || l_1311[0]))), &g_522, &g_94, l_1358[1])))) >= l_1427[2][0].f0) == 0UL);
                }
                else
                {
                    const int8_t l_1457 = 7L;
                    for (l_2 = 0; (l_2 != (-30)); l_2 = safe_sub_func_uint8_t_u_u(l_2, 6))
                    {
                        return l_1457;
                    }
                    return l_1458[1];
                }
            }
            else
            {
                return (*l_1329);
            }
            l_1326 = (*g_597);
        }
    }
    else
    {
        (*g_96) = l_1465;
    }
    return (*l_1370);
}







static int32_t func_3(const int8_t * p_4, int32_t p_5, int8_t * p_6, uint32_t p_7, int8_t p_8)
{
    const union U0 l_1145 = {0x07C8F18BBF583F76LL};
    int8_t *l_1158[5];
    int32_t l_1162 = (-1L);
    union U2 *l_1202 = &g_629[0][2];
    union U2 **l_1201 = &l_1202;
    uint64_t *l_1222[1];
    int i;
    for (i = 0; i < 5; i++)
        l_1158[i] = &g_522;
    for (i = 0; i < 1; i++)
        l_1222[i] = &g_30;
lbl_1219:
    for (p_5 = 4; (p_5 >= 0); p_5 -= 1)
    {
        uint64_t *l_1150[1][3];
        int8_t *l_1157 = &g_1140.f2;
        uint32_t *l_1159 = &g_264.f0;
        int32_t l_1160 = 0x7E6803C2L;
        int32_t *l_1161[2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1150[i][j] = &g_30;
        }
        for (i = 0; i < 2; i++)
            l_1161[i] = &g_137;
        l_1162 &= (((safe_mod_func_int32_t_s_s(func_15(&g_522, (l_1145 , l_1145.f1), l_1157, &g_522, l_1158[2]), p_5)) > g_473.f2) || 65534UL);
        for (g_88 = 1; (g_88 <= 4); g_88 += 1)
        {
            uint64_t ***l_1165 = (void*)0;
            uint64_t ***l_1168 = &g_1167[0][0][3];
            int32_t l_1169 = 5L;
            int8_t *l_1177 = &g_160.f2;
            (*l_1168) = g_1163;
            (*g_372) = &l_1160;
            (*g_372) = &l_1160;
            for (g_891 = 0; (g_891 <= 4); g_891 += 1)
            {
                int8_t *l_1175 = &g_94;
                int8_t *l_1176 = (void*)0;
                int32_t l_1179 = 1L;
                int32_t l_1180 = 0xE94FAB6CL;
                if (l_1169)
                {
                    int8_t ** const l_1172 = &g_73;
                    int64_t *l_1178[7][7][5] = {{{&g_211[0][1],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_211[0][0],&g_211[0][1],&g_474.f0,(void*)0},{(void*)0,&g_474.f0,(void*)0,(void*)0,&g_211[0][5]},{&g_474.f0,&g_474.f0,&g_211[0][5],(void*)0,&g_211[0][1]},{(void*)0,&g_211[0][1],&g_211[0][5],&g_211[0][5],&g_211[0][1]},{(void*)0,&g_474.f0,&g_211[0][1],&g_211[0][1],&g_211[0][5]},{&g_474.f0,&g_211[0][1],(void*)0,(void*)0,&g_211[0][6]}},{{&g_211[0][1],&g_474.f0,&g_474.f0,&g_211[0][5],&g_474.f0},{&g_474.f0,&g_474.f0,&g_474.f0,&g_474.f0,&g_474.f0},{(void*)0,(void*)0,(void*)0,&g_474.f0,&g_474.f0},{(void*)0,(void*)0,(void*)0,&g_474.f0,&g_474.f0},{&g_474.f0,&g_474.f0,&g_474.f0,&g_474.f0,&g_211[0][5]},{&g_474.f0,&g_474.f0,&g_211[0][5],&g_211[0][6],(void*)0},{(void*)0,&g_211[0][1],&g_474.f0,&g_211[0][5],&g_211[0][1]}},{{&g_211[0][1],&g_474.f0,(void*)0,&g_211[0][1],&g_211[0][5]},{(void*)0,&g_211[0][1],(void*)0,&g_211[0][1],(void*)0},{&g_211[0][1],&g_474.f0,&g_474.f0,&g_211[0][5],(void*)0},{&g_211[0][6],&g_474.f0,&g_474.f0,&g_211[0][6],&g_474.f0},{&g_211[0][1],&g_474.f0,(void*)0,&g_474.f0,(void*)0},{(void*)0,&g_211[0][6],&g_211[0][1],&g_474.f0,(void*)0},{(void*)0,&g_474.f0,&g_211[0][5],&g_474.f0,&g_211[0][5]}},{{(void*)0,&g_211[0][1],&g_211[0][1],(void*)0,&g_474.f0},{&g_211[0][5],(void*)0,&g_474.f0,&g_474.f0,(void*)0},{&g_211[0][6],(void*)0,(void*)0,(void*)0,&g_474.f0},{&g_474.f0,(void*)0,(void*)0,&g_474.f0,(void*)0},{&g_474.f0,&g_211[0][1],&g_211[0][1],&g_474.f0,&g_211[0][1]},{&g_474.f0,&g_211[0][1],&g_211[0][1],&g_474.f0,&g_474.f0},{&g_474.f0,&g_474.f0,(void*)0,&g_211[0][1],(void*)0}},{{&g_211[0][5],(void*)0,(void*)0,&g_474.f0,&g_474.f0},{(void*)0,&g_211[0][1],&g_474.f0,&g_211[0][1],&g_474.f0},{&g_211[0][1],(void*)0,&g_211[0][1],&g_474.f0,&g_211[0][6]},{&g_211[0][5],&g_211[0][6],&g_474.f0,&g_474.f0,&g_211[0][6]},{(void*)0,(void*)0,&g_474.f0,&g_474.f0,&g_474.f0},{(void*)0,&g_474.f0,(void*)0,(void*)0,&g_474.f0},{&g_474.f0,&g_211[0][1],(void*)0,&g_474.f0,(void*)0}},{{(void*)0,&g_211[0][1],&g_211[0][1],(void*)0,&g_474.f0},{(void*)0,&g_474.f0,(void*)0,&g_211[0][1],&g_211[0][1]},{&g_211[0][5],&g_474.f0,&g_211[0][5],&g_474.f0,(void*)0},{&g_211[0][1],&g_211[0][1],&g_474.f0,(void*)0,&g_474.f0},{(void*)0,&g_211[0][1],&g_211[0][1],&g_474.f0,(void*)0},{&g_211[0][5],&g_474.f0,&g_211[0][1],&g_474.f0,&g_474.f0},{&g_474.f0,(void*)0,(void*)0,(void*)0,&g_474.f0}},{{&g_474.f0,(void*)0,&g_474.f0,(void*)0,&g_474.f0},{&g_211[0][1],(void*)0,&g_211[0][5],&g_474.f0,&g_211[0][1]},{&g_474.f0,&g_211[0][0],(void*)0,&g_474.f0,&g_211[0][1]},{(void*)0,&g_474.f0,&g_474.f0,(void*)0,&g_211[0][1]},{(void*)0,&g_474.f0,&g_211[0][1],&g_211[0][1],&g_474.f0},{&g_211[0][1],&g_211[0][0],&g_474.f0,&g_211[0][1],&g_474.f0},{&g_211[0][1],&g_211[0][1],&g_474.f0,&g_474.f0,&g_474.f0}}};
                    int32_t l_1181 = 0xC44FF7E1L;
                    int32_t l_1182 = 0x314A6D4EL;
                    int32_t l_1183 = (-1L);
                    int i, j, k;
                    if ((safe_mod_func_int16_t_s_s(((((void*)0 == l_1172) & (l_1179 = (safe_lshift_func_uint8_t_u_s(p_8, func_15((l_1175 = (void*)0), g_470.f3, l_1176, l_1177, &p_8))))) & l_1180), p_8)))
                    {
                        return p_7;
                    }
                    else
                    {
                        uint8_t l_1184 = 255UL;
                        l_1181 |= l_1145.f2;
                        --l_1184;
                    }
                    return p_5;
                }
                else
                {
                    if (p_8)
                        break;
                }
            }
        }
    }
    for (g_279 = 0; (g_279 < (-30)); g_279 = safe_sub_func_uint64_t_u_u(g_279, 6))
    {
        int32_t *l_1194[3];
        union U3 l_1205 = {0x828EDCB3L};
        int8_t *l_1208 = &g_1140.f2;
        int8_t *l_1209 = (void*)0;
        const int16_t *l_1215 = &g_473.f3;
        const int16_t **l_1214 = &l_1215;
        int8_t *l_1228[7][9][4] = {{{&g_94,&g_449.f2,(void*)0,&g_160.f2},{(void*)0,&g_449.f2,(void*)0,&g_449.f2},{&g_473.f2,&g_412[1].f2,&g_94,&g_1140.f2},{&g_473.f2,&g_160.f2,(void*)0,(void*)0},{(void*)0,&g_1140.f2,(void*)0,&g_449.f2},{&g_94,&g_1140.f2,&g_412[1].f2,&g_94},{&g_160.f2,&g_160.f2,(void*)0,&g_449.f2},{&g_926.f2,&g_473.f2,&g_926.f2,&g_926.f2},{&g_522,&g_160.f2,&g_449.f2,&g_160.f2}},{{&g_926.f2,&g_1140.f2,&g_412[1].f2,&g_160.f2},{&g_1140.f2,&g_522,&g_94,&g_160.f2},{&g_160.f2,&g_473.f2,&g_926.f2,&g_160.f2},{&g_412[1].f2,&g_94,&g_449.f2,&g_94},{&g_473.f2,&g_94,(void*)0,(void*)0},{(void*)0,&g_522,&g_449.f2,(void*)0},{&g_94,&g_449.f2,&g_94,&g_412[1].f2},{&g_94,(void*)0,&g_94,&g_449.f2},{&g_94,&g_473.f2,&g_94,&g_160.f2}},{{&g_94,&g_1140.f2,&g_1140.f2,&g_412[1].f2},{&g_160.f2,(void*)0,&g_94,&g_473.f2},{&g_926.f2,&g_160.f2,&g_160.f2,&g_926.f2},{&g_449.f2,&g_160.f2,&g_94,&g_449.f2},{&g_412[1].f2,(void*)0,&g_473.f2,&g_1140.f2},{&g_412[1].f2,&g_473.f2,&g_160.f2,&g_1140.f2},{&g_94,(void*)0,(void*)0,&g_449.f2},{&g_449.f2,&g_160.f2,&g_449.f2,&g_926.f2},{&g_160.f2,&g_160.f2,&g_94,&g_473.f2}},{{&g_473.f2,(void*)0,&g_412[1].f2,&g_412[1].f2},{&g_449.f2,&g_1140.f2,&g_449.f2,&g_160.f2},{(void*)0,&g_473.f2,&g_522,&g_449.f2},{&g_449.f2,(void*)0,&g_160.f2,&g_412[1].f2},{&g_473.f2,&g_449.f2,(void*)0,(void*)0},{(void*)0,&g_522,&g_160.f2,(void*)0},{&g_160.f2,&g_94,&g_449.f2,&g_473.f2},{&g_160.f2,&g_473.f2,(void*)0,&g_160.f2},{&g_94,&g_412[1].f2,&g_160.f2,&g_412[1].f2}},{{(void*)0,(void*)0,(void*)0,&g_1140.f2},{&g_1140.f2,&g_94,&g_449.f2,(void*)0},{&g_473.f2,&g_412[1].f2,(void*)0,&g_473.f2},{(void*)0,&g_473.f2,&g_160.f2,&g_473.f2},{&g_473.f2,&g_1140.f2,&g_160.f2,&g_449.f2},{&g_449.f2,&g_522,&g_449.f2,(void*)0},{&g_1140.f2,&g_412[1].f2,&g_1140.f2,&g_94},{&g_412[1].f2,(void*)0,&g_473.f2,&g_412[1].f2},{&g_94,(void*)0,&g_473.f2,&g_473.f2}},{{&g_412[1].f2,&g_160.f2,&g_1140.f2,&g_94},{&g_1140.f2,(void*)0,&g_449.f2,&g_160.f2},{&g_449.f2,&g_160.f2,&g_160.f2,(void*)0},{&g_473.f2,&g_449.f2,&g_160.f2,&g_449.f2},{(void*)0,&g_412[1].f2,(void*)0,&g_94},{&g_473.f2,(void*)0,&g_449.f2,&g_412[1].f2},{&g_1140.f2,(void*)0,&g_160.f2,&g_412[1].f2},{(void*)0,&g_160.f2,&g_94,(void*)0},{&g_412[1].f2,(void*)0,&g_926.f2,&g_449.f2}},{{&g_926.f2,&g_94,(void*)0,(void*)0},{&g_412[1].f2,(void*)0,&g_94,&g_1140.f2},{&g_522,&g_449.f2,(void*)0,&g_160.f2},{&g_473.f2,&g_522,&g_473.f2,&g_926.f2},{(void*)0,&g_449.f2,(void*)0,&g_1140.f2},{&g_160.f2,&g_473.f2,&g_412[1].f2,(void*)0},{&g_160.f2,&g_449.f2,&g_473.f2,&g_160.f2},{&g_449.f2,&g_473.f2,&g_473.f2,&g_473.f2},{&g_94,&g_94,&g_473.f2,&g_412[1].f2}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1194[i] = &g_137;
        for (g_891 = (-12); (g_891 <= 55); ++g_891)
        {
            int32_t *l_1193 = &g_279;
            int8_t *l_1213 = &g_449.f2;
            uint32_t *l_1240 = (void*)0;
            uint32_t **l_1239 = &l_1240;
            int8_t l_1259 = 0L;
            int8_t l_1263 = 0x81L;
            int32_t l_1265 = 3L;
            int32_t l_1266 = (-10L);
            int8_t *l_1276 = &g_522;
            for (g_202 = 0; (g_202 == 12); g_202 = safe_add_func_uint32_t_u_u(g_202, 4))
            {
                if (p_8)
                    break;
            }
            l_1194[0] = l_1193;
            if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_1162 = 2L) && func_15((((((safe_rshift_func_int8_t_s_u((*p_6), ((*g_491) == ((l_1145.f1 > (((void*)0 != l_1201) <= 1L)) , (safe_mod_func_uint16_t_u_u((l_1205 , ((safe_mul_func_uint8_t_u_u(func_15(&g_94, g_264.f0, l_1208, &g_94, l_1209), 3UL)) , p_8)), p_8)))))) | 18446744073709551615UL) <= 0x2EA8L) , p_7) , (void*)0), p_5, &g_94, &g_94, &g_94)), p_5)), 65535UL)))
            {
                int64_t l_1227 = 0xD318CADA8FE4987ELL;
                for (l_1162 = 0; (l_1162 <= (-23)); l_1162--)
                {
                    const int16_t **l_1216 = &l_1215;
                    for (g_137 = 2; (g_137 >= 0); g_137 -= 1)
                    {
                        int8_t l_1212 = 0L;
                        l_1212 = 2L;
                        g_36 ^= func_15(&p_8, func_15(&g_94, g_826.f0, &g_522, l_1213, &p_8), &l_1212, l_1209, &g_94);
                        (*g_372) = &l_1162;
                        if ((*g_597))
                            break;
                    }
                    l_1216 = l_1214;
                    for (g_249 = 21; (g_249 > 48); g_249 = safe_add_func_int64_t_s_s(g_249, 1))
                    {
                        return (*g_35);
                    }
                }
                if (l_1145.f0)
                    goto lbl_1219;
                if ((*g_35))
                    continue;
                if ((((*l_1193) ^ (~(((((*l_1208) = (*p_4)) && func_15(&g_522, ((((*l_1193) >= (safe_mod_func_int16_t_s_s(((void*)0 == l_1222[0]), (safe_div_func_uint32_t_u_u((g_474.f1 = func_15(l_1213, (safe_lshift_func_uint8_t_u_s(255UL, 4)), &g_94, &g_94, &g_94)), l_1162))))) , (*p_4)) == l_1227), l_1228[3][2][1], l_1213, l_1228[1][0][1])) ^ p_5) >= (*l_1193)))) != p_5))
                {
                    uint32_t l_1231 = 1UL;
                    for (g_523 = 21; (g_523 <= (-28)); --g_523)
                    {
                        --l_1231;
                    }
                    for (p_5 = 0; (p_5 > 25); ++p_5)
                    {
                        (*g_372) = l_1194[2];
                    }
                }
                else
                {
                    for (g_474.f1 = 0; (g_474.f1 < 58); g_474.f1 = safe_add_func_uint64_t_u_u(g_474.f1, 6))
                    {
                        if (g_473.f2)
                            goto lbl_1219;
                    }
                }
            }
            else
            {
                int8_t *l_1238 = &g_1140.f2;
                uint32_t **l_1244 = (void*)0;
                uint32_t ** volatile *l_1243 = &l_1244;
                (*l_1243) = (func_15(&p_8, l_1145.f0, l_1238, (((void*)0 != l_1239) , l_1238), &g_522) , g_1241);
            }
            for (g_30 = 0; (g_30 > 29); g_30++)
            {
                uint16_t *l_1262[7];
                int32_t l_1264 = 0xED9FA0BBL;
                int8_t *l_1269[8][2];
                int64_t *l_1274 = &g_211[0][1];
                int8_t *l_1275 = &g_926.f2;
                int32_t l_1277 = 0x18595CBDL;
                int32_t l_1278 = 0xB967345EL;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1262[i] = (void*)0;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1269[i][j] = &g_1140.f2;
                }
                for (g_474.f2 = 0; (g_474.f2 < 21); g_474.f2 = safe_add_func_int32_t_s_s(g_474.f2, 3))
                {
                    int16_t *l_1258 = &g_258[0];
                    for (g_137 = 0; (g_137 >= 4); g_137 = safe_add_func_int32_t_s_s(g_137, 9))
                    {
                        int32_t **l_1251 = &l_1194[0];
                        (*l_1201) = &g_826;
                        (*g_372) = ((*l_1251) = l_1240);
                    }
                    for (g_926.f2 = 0; (g_926.f2 != 18); ++g_926.f2)
                    {
                        g_36 ^= (g_1254[1] == (void*)0);
                    }
                    if (((safe_rshift_func_int16_t_s_s(((*l_1258) |= (-5L)), 8)) & ((*l_1208) ^= ((*g_866) , (*p_6)))))
                    {
                        (*g_372) = l_1194[2];
                    }
                    else
                    {
                        return p_7;
                    }
                }
                if (l_1259)
                    break;
                l_1278 ^= ((safe_mod_func_uint16_t_u_u((++g_281), func_15(&g_94, p_8, &p_8, l_1158[0], l_1269[3][1]))) , (l_1277 |= func_15(l_1158[1], ((safe_mod_func_uint64_t_u_u((*g_1164), (safe_add_func_int64_t_s_s(((*l_1274) = ((p_8 & (*l_1193)) | l_1264)), g_449.f1)))) >= (*l_1193)), l_1275, &g_522, l_1276)));
            }
        }
    }
    return p_5;
}







static const int8_t * func_9(uint64_t p_10, const uint16_t p_11, uint8_t p_12, union U3 p_13)
{
    int32_t *l_611 = &g_279;
    int32_t *l_615 = &g_137;
    int8_t *l_623 = &g_94;
    int32_t l_637 = 0xAD4F1F5FL;
    int32_t l_650 = 0xBB8E9408L;
    uint8_t l_659 = 0x86L;
    uint16_t *l_674 = &g_588[1];
    uint16_t **l_673 = &l_674;
    uint16_t ***l_672 = &l_673;
    union U3 l_688[3][10][2] = {{{{1UL},{4294967295UL}},{{4294967288UL},{0xB0E94A83L}},{{0xB0E94A83L},{0xB0E94A83L}},{{4294967288UL},{4294967295UL}},{{1UL},{0x4D951187L}},{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}},{{4294967295UL},{0UL}},{{0x898D6328L},{4294967288UL}}},{{{0UL},{0x4D951187L}},{{1UL},{4294967295UL}},{{4294967288UL},{0xB0E94A83L}},{{0xB0E94A83L},{0xB0E94A83L}},{{4294967288UL},{4294967295UL}},{{1UL},{0x4D951187L}},{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}},{{4294967295UL},{0UL}}},{{{0x898D6328L},{4294967288UL}},{{0UL},{0x4D951187L}},{{1UL},{4294967295UL}},{{4294967288UL},{0xB0E94A83L}},{{0xB0E94A83L},{0xB0E94A83L}},{{4294967288UL},{4294967295UL}},{{1UL},{0x4D951187L}},{{0UL},{4294967288UL}},{{0x898D6328L},{0UL}},{{4294967295UL},{1UL}}}};
    uint32_t l_693 = 0x93C0E8E7L;
    uint32_t l_708 = 0x47A9B4B6L;
    union U0 l_713 = {2L};
    uint32_t l_788 = 0UL;
    int32_t l_852 = (-1L);
    uint32_t *l_883 = &g_55;
    int32_t l_888 = 0xCD9254ADL;
    int32_t l_889 = 0x96065421L;
    int32_t l_902 = 0x2CA0E5EAL;
    int32_t l_903 = 0x33BF664EL;
    int8_t l_912[10] = {0L,1L,0L,(-1L),(-1L),0L,1L,0L,(-1L),(-1L)};
    uint32_t l_929 = 0UL;
    int32_t l_940 = 0x9DC67909L;
    union U1 *l_949 = (void*)0;
    int32_t **l_986 = &l_611;
    union U3 *l_1038 = &g_264;
    union U2 *l_1041 = (void*)0;
    uint64_t l_1059 = 0x6914E1553A2191CALL;
    uint16_t l_1072 = 0x6A52L;
    int32_t l_1115 = (-1L);
    const int16_t l_1130 = (-1L);
    int i, j, k;
    (*l_611) = p_13.f3;
    for (g_160.f2 = 0; (g_160.f2 == 26); g_160.f2 = safe_add_func_uint64_t_u_u(g_160.f2, 4))
    {
        int32_t * volatile *l_614 = &g_165;
        int8_t *l_618 = &g_94;
        union U1 *l_630[8][2][7] = {{{&g_473,&g_473,&g_473,&g_449,&g_449,&g_412[1],&g_473},{&g_473,&g_412[1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_412[0],&g_412[0],&g_449,&g_473,&g_412[1],&g_473,(void*)0},{&g_412[1],&g_449,&g_412[0],&g_449,&g_473,&g_412[1],&g_412[1]}},{{(void*)0,&g_473,(void*)0,(void*)0,&g_412[1],&g_449,&g_449},{&g_449,(void*)0,&g_412[1],&g_473,(void*)0,&g_449,&g_412[0]}},{{&g_412[1],&g_412[0],&g_412[1],&g_449,&g_449,&g_449,&g_412[1]},{&g_449,&g_412[0],&g_473,&g_412[1],&g_412[1],&g_412[1],&g_412[1]}},{{&g_449,(void*)0,&g_449,&g_449,&g_412[1],(void*)0,&g_412[1]},{&g_412[0],&g_473,&g_473,&g_449,&g_473,&g_449,&g_449}},{{&g_473,&g_449,&g_449,(void*)0,&g_449,(void*)0,&g_412[0]},{(void*)0,&g_473,&g_412[1],(void*)0,&g_449,&g_412[1],&g_473}},{{(void*)0,(void*)0,&g_412[1],(void*)0,&g_473,&g_449,(void*)0},{(void*)0,(void*)0,&g_412[1],&g_449,(void*)0,&g_449,(void*)0}},{{&g_412[1],&g_412[1],&g_412[1],&g_412[1],&g_412[0],&g_449,&g_473},{&g_412[1],&g_449,&g_449,&g_473,&g_449,&g_412[1],&g_412[1]}}};
        int64_t l_631 = (-1L);
        int32_t l_649 = 0x832AFA87L;
        int16_t *l_694 = &g_88;
        uint8_t *l_695 = &g_233;
        int8_t *l_732 = &g_522;
        const int8_t *l_758[9][6] = {{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522}};
        uint64_t l_775 = 1UL;
        uint32_t l_794 = 0x3D0AC58DL;
        union U0 l_820 = {0x7EE179408B1BF8A3LL};
        int32_t l_847 = 0xED26CFDEL;
        int32_t l_848[2];
        union U2 *l_864 = &g_462;
        int32_t l_873 = 0x6538393CL;
        uint64_t l_899 = 0x1DDD2B1E922BEFDELL;
        uint32_t l_904 = 4294967295UL;
        int8_t l_911[6][2];
        int32_t l_913 = (-1L);
        union U3 *l_932 = &g_264;
        uint16_t ***l_965 = &g_956;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_848[i] = 2L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_911[i][j] = 0xCEL;
        }
    }
    (*g_372) = ((*l_986) = (void*)0);
    if (((*g_35) &= (*l_615)))
    {
        const union U0 *l_989 = (void*)0;
        const union U0 *l_990 = &g_991;
        int32_t l_995[4][8][6] = {{{0x8516E0DBL,(-1L),0x71FC1491L,1L,(-1L),0xEF7A5DB7L},{4L,0x4C4B24C6L,0xC85A9F88L,0xC85A9F88L,0x4C4B24C6L,4L},{(-8L),0xEF7A5DB7L,(-5L),0x2C2A355DL,0x867285ABL,0x696128E4L},{1L,(-7L),0xED06EB44L,0x4C4B24C6L,1L,(-4L)},{1L,0xA5796216L,0x4C4B24C6L,0x2C2A355DL,0x8516E0DBL,0L},{(-8L),0x867285ABL,0xCBCCE38DL,0xC85A9F88L,0x899E3291L,(-7L)},{4L,(-4L),0xA5796216L,1L,0xC85A9F88L,0xC370787AL},{0x8247DA65L,0x5A1D790AL,0L,0x2C2A355DL,0L,0x5A1D790AL}},{{0L,0x899E3291L,0x8247DA65L,0xC370787AL,0L,0xCBCCE38DL},{0x2C2A355DL,0xED06EB44L,0x166FBBE0L,0xEF7A5DB7L,0xA5796216L,0x696128E4L},{(-5L),0xED06EB44L,0x193A20E7L,0x71FC1491L,0L,0L},{7L,0x899E3291L,0xEF7A5DB7L,0x716BF5BAL,0L,(-5L)},{0x166FBBE0L,0x5A1D790AL,(-5L),4L,0xC85A9F88L,0x716BF5BAL},{0xED06EB44L,0L,(-7L),1L,1L,(-7L)},{(-7L),(-7L),0x1E471EF8L,0xA5796216L,0x8247DA65L,0xC85A9F88L},{4L,(-1L),0x2C2A355DL,(-1L),0x193A20E7L,0x1E471EF8L}},{{0xD320132BL,4L,0x2C2A355DL,0x166FBBE0L,(-7L),0xC85A9F88L},{0xE57EC125L,0x166FBBE0L,0x1E471EF8L,0L,0x867285ABL,(-7L)},{0L,0x867285ABL,(-7L),(-8L),0x696128E4L,0x716BF5BAL},{0x899E3291L,0x1E471EF8L,(-5L),(-5L),0xEF7A5DB7L,(-5L)},{0xEF7A5DB7L,1L,0xEF7A5DB7L,0xCBCCE38DL,0xE57EC125L,0L},{(-1L),(-8L),0x193A20E7L,(-5L),0L,0x696128E4L},{(-1L),0xA5796216L,0x166FBBE0L,(-5L),0x2C2A355DL,0x4C4B24C6L},{0x1E471EF8L,0x166FBBE0L,0xE57EC125L,0x4C4B24C6L,0L,0xCBCCE38DL}},{{0x166FBBE0L,0x71FC1491L,0xEF7A5DB7L,0xC85A9F88L,0x8247DA65L,0xA5796216L},{1L,7L,0x696128E4L,0xC370787AL,(-4L),(-4L)},{(-1L),0x867285ABL,0x867285ABL,(-1L),0xC370787AL,0x8516E0DBL},{7L,(-5L),(-7L),0L,(-8L),0xEF7A5DB7L},{0x2C2A355DL,(-1L),0x193A20E7L,0x1E471EF8L,(-8L),1L},{(-4L),(-5L),0x8247DA65L,(-1L),0xC370787AL,0L},{4L,0x867285ABL,1L,0L,(-4L),0L},{1L,7L,0xC85A9F88L,(-4L),0x8247DA65L,0x867285ABL}}};
        int16_t *l_999 = &g_449.f3;
        int8_t *l_1014 = &l_912[3];
        union U2 *l_1043[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_462,&g_629[0][1],&g_462,&g_629[0][1],&g_462},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_462,&g_629[0][1],&g_462,&g_629[0][1],&g_462}};
        const union U3 *l_1048 = (void*)0;
        int32_t l_1063 = 0x0FF21C3BL;
        int i, j, k;
        if (p_11)
        {
            int32_t *l_1000 = &l_903;
            int32_t *l_1001 = &g_137;
            int32_t *l_1002 = &g_137;
            int32_t *l_1003 = &g_279;
            int32_t *l_1004 = &l_888;
            uint8_t l_1005 = 0UL;
            int8_t *l_1012[4][1];
            const uint64_t *l_1013 = &g_30;
            union U0 *l_1023 = &g_160;
            union U0 **l_1022 = &l_1023;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1012[i][j] = &g_160.f2;
            }
            l_1005++;
            (*l_1002) &= p_13.f0;
            return l_1012[3][0];
        }
        else
        {
            uint32_t *l_1032[1][4] = {{&l_929,&l_929,&l_929,&l_929}};
            int8_t l_1033 = 0L;
            int32_t l_1034 = (-1L);
            const union U3 *l_1046 = &l_688[0][5][0];
            int i, j;
            if (p_13.f0)
            {
                uint64_t l_1037 = 0x1889A6FC4797DB1BLL;
                (*l_615) = ((p_13.f0 = (safe_lshift_func_int16_t_s_u(((g_474.f1 == g_521) || l_995[1][3][3]), p_12))) ^ g_279);
                g_1039[3] = (l_1038 = (*g_859));
                (*l_615) &= 0x2832093FL;
            }
            else
            {
                const int32_t *l_1050[7] = {&l_995[1][2][1],&l_995[1][2][1],&l_995[1][2][1],&l_995[1][2][1],&l_995[1][2][1],&l_995[1][2][1],&l_995[1][2][1]};
                int32_t l_1053 = 0xDFCE87E1L;
                int8_t *l_1056[9][1][2] = {{{&g_160.f2,&l_713.f2}},{{&g_522,&l_713.f2}},{{&g_160.f2,&g_94}},{{&g_94,&g_160.f2}},{{&g_522,&g_160.f2}},{{&g_522,&g_473.f2}},{{&l_713.f2,&l_713.f2}},{{&g_473.f2,&g_522}},{{&g_160.f2,&g_522}}};
                int i, j, k;
                if (p_10)
                {
                    return &g_522;
                }
                else
                {
                    uint8_t *l_1040 = &g_231;
                    int32_t l_1071 = 3L;
                    (*l_615) = p_11;
                    (*l_615) = 0xE84CA0E3L;
                    if (p_12)
                        goto lbl_1064;
lbl_1064:
                    if ((p_12 > (((*l_1040) = p_13.f1) == g_825[2].f0)))
                    {
                        union U2 **l_1042 = (void*)0;
                        union U2 *l_1045 = &g_308;
                        union U2 **l_1044 = &l_1045;
                        (*l_1044) = (l_1043[0][4] = l_1041);
                        if (g_474.f1)
                            goto lbl_1049;
lbl_1049:
                        l_1048 = l_1046;
                        (*g_1051) = l_1050[5];
                        l_1053 ^= 0xD904C9C6L;
                    }
                    else
                    {
                        union U0 l_1060 = {0xA360B9DF71D0C213LL};
                        union U0 *l_1061 = &l_713;
                        int64_t *l_1062 = &g_474.f0;
                        (*l_615) = (l_1063 = (safe_mod_func_int64_t_s_s((func_15(l_1056[4][0][0], l_995[1][2][1], &g_522, &l_912[8], &l_912[8]) , 0xF2B28BA5F8D0A094LL), 0x0E000C033AC1B117LL)));
                    }
                    l_1072 = (p_12 && (safe_add_func_int64_t_s_s(p_13.f0, (l_1071 != 0L))));
                }
                for (l_1033 = 0; (l_1033 <= 0); l_1033 += 1)
                {
                    (*l_615) ^= l_1034;
                    (*l_615) = (safe_add_func_uint32_t_u_u(g_473.f4, (p_13.f1 && l_1033)));
                    for (g_279 = 0; (g_279 <= 0); g_279 += 1)
                    {
                        (*l_986) = l_1032[0][3];
                    }
                }
            }
        }
        (*g_372) = (*l_986);
        (*g_372) = &l_995[1][2][1];
    }
    else
    {
        int32_t *l_1075 = &g_137;
        int32_t *l_1076 = (void*)0;
        int32_t *l_1077 = &g_137;
        int32_t *l_1078[9][6][4] = {{{&l_650,&g_279,&l_888,(void*)0},{&g_81,&l_650,&l_650,&g_81},{(void*)0,&l_888,&g_279,&l_650},{&g_137,&g_36,&l_852,&l_650},{&g_279,&l_650,&l_902,&l_650},{(void*)0,&g_36,&l_852,&l_650}},{{&g_81,&l_888,(void*)0,&g_81},{&l_650,&l_650,&l_650,(void*)0},{&l_650,&g_279,(void*)0,&g_137},{&l_888,&l_852,&g_137,&g_279},{&l_852,&l_902,&g_137,(void*)0},{&l_888,&l_852,(void*)0,&g_81}},{{&l_650,(void*)0,&l_650,&l_650},{&l_650,&l_650,(void*)0,&l_650},{&g_81,(void*)0,&l_852,&l_888},{(void*)0,&g_137,&l_902,&l_852},{&g_279,&g_137,&l_852,&l_888},{&g_137,(void*)0,&g_279,&l_650}},{{(void*)0,&l_650,&l_650,&l_650},{&g_81,(void*)0,&l_888,&g_81},{&l_650,&l_852,&g_36,(void*)0},{&l_650,&l_902,&l_650,(void*)0},{(void*)0,&g_137,&l_902,(void*)0},{&l_650,(void*)0,&g_279,(void*)0}},{{&l_888,(void*)0,(void*)0,&l_888},{(void*)0,&g_279,(void*)0,&l_650},{(void*)0,&l_902,&g_137,(void*)0},{(void*)0,&l_650,&l_852,(void*)0},{(void*)0,&l_902,&g_81,&l_650},{(void*)0,&g_279,&l_650,&l_888}},{{&g_36,(void*)0,&g_36,(void*)0},{&g_81,(void*)0,&l_650,(void*)0},{&g_279,&g_137,(void*)0,(void*)0},{&g_81,&l_852,(void*)0,(void*)0},{&g_279,&g_81,&l_650,(void*)0},{&g_81,&l_650,&g_36,&g_36}},{{&g_36,&g_36,&l_650,&g_81},{(void*)0,&l_650,&g_81,&g_279},{(void*)0,(void*)0,&l_852,&g_81},{(void*)0,(void*)0,&g_137,&g_279},{(void*)0,&l_650,(void*)0,&g_81},{(void*)0,&g_36,(void*)0,&g_36}},{{&l_888,&l_650,&g_279,(void*)0},{&l_650,&g_81,&l_902,(void*)0},{(void*)0,&l_852,&l_650,(void*)0},{(void*)0,&l_650,&g_137,&l_650},{&g_279,(void*)0,&l_650,&l_852},{&l_650,&g_137,&g_137,&l_650}},{{&l_852,&l_650,(void*)0,&g_279},{&l_650,&g_137,&l_650,&g_137},{(void*)0,(void*)0,(void*)0,&g_137},{(void*)0,&g_137,(void*)0,&g_279},{&g_36,&l_650,&l_650,&l_650},{(void*)0,&g_137,(void*)0,&l_852}}};
        uint8_t l_1079 = 0xC8L;
        int32_t l_1114 = (-1L);
        int i, j, k;
        ++l_1079;
        for (g_473.f3 = 24; (g_473.f3 != (-27)); g_473.f3--)
        {
            uint32_t l_1084 = 5UL;
            uint16_t ****l_1098 = &g_955;
            uint8_t *l_1100[5];
            int32_t l_1104 = (-10L);
            uint16_t l_1141 = 65535UL;
            int32_t ** const *l_1142[6];
            int i;
            for (i = 0; i < 5; i++)
                l_1100[i] = &l_1079;
            for (i = 0; i < 6; i++)
                l_1142[i] = &l_986;
            (*g_597) = (((void*)0 != &l_1041) || l_1084);
            for (l_708 = 4; (l_708 == 15); l_708 = safe_add_func_uint64_t_u_u(l_708, 2))
            {
                uint16_t ****l_1096[7] = {&g_955,&l_672,&g_955,&g_955,&l_672,&g_955,&g_955};
                uint16_t *****l_1095[2][2][3] = {{{&l_1096[3],&l_1096[3],&l_1096[2]},{&l_1096[3],&l_1096[3],&l_1096[3]}},{{&l_1096[3],&l_1096[3],&l_1096[2]},{&l_1096[3],&l_1096[3],&l_1096[3]}}};
                uint8_t *l_1101[9] = {&l_1079,&l_1079,&g_231,&l_1079,&l_1079,&g_231,&l_1079,&l_1079,&g_231};
                uint8_t *l_1103 = (void*)0;
                uint8_t **l_1102 = &l_1103;
                int32_t l_1112 = 0x0BB7FF10L;
                union U0 l_1139 = {6L};
                int i, j, k;
                l_1104 ^= (((safe_rshift_func_uint8_t_u_u((l_1084 ^ (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((&g_951 == (void*)0) == g_991.f2), func_15(&g_94, ((((g_1097 = &g_955) != (g_1099 = l_1098)) ^ ((l_1100[4] = &p_12) != ((*l_1102) = l_1101[0]))) || 0x2FECE078L), l_1101[0], &g_94, &l_912[8]))), l_1084))), g_264.f3)) ^ 8UL) <= p_13.f3);
                for (l_659 = 0; (l_659 == 13); ++l_659)
                {
                    int16_t l_1113 = 0x1002L;
                    int32_t l_1116[2];
                    int32_t l_1134 = 0xCAFFABF8L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1116[i] = 0xB2A2D8BCL;
                    if ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((p_13.f1 != 0x62L), (safe_mod_func_int32_t_s_s(p_13.f1, (~0UL))))))))
                    {
                        uint16_t l_1117 = 0xF6B6L;
                        int32_t * volatile *l_1120 = &l_1078[6][5][1];
                        l_1117++;
                        // Yang:
                        (*l_1120) = (*g_372);
                    }
                    else
                    {
                        uint32_t l_1121[9];
                        const int32_t *l_1123 = (void*)0;
                        const int32_t **l_1122 = &l_1123;
                        uint64_t *l_1131 = &l_1059;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1121[i] = 0UL;
                        (*g_372) = l_1078[1][4][0];
                        if (l_1121[6])
                            continue;
                        (*l_1122) = (*g_1051);
                        (*l_1075) ^= (safe_div_func_int32_t_s_s((((***l_672) = p_13.f1) < ((-6L) == (safe_div_func_int16_t_s_s(p_10, l_1112)))), (-1L)));
                    }
                }
                g_279 ^= (+((((*l_623) = (safe_div_func_int16_t_s_s((g_588[0] , (safe_sub_func_uint8_t_u_u(g_588[0], 0xA4L))), 0x5CD5L))) | (((l_1139 , (p_13.f3 >= (l_1104 = ((*l_1075) = ((g_1140 , l_1141) ^ l_1084))))) , (void*)0) != l_1142[0])) , (*g_35)));
                if ((*l_615))
                    continue;
            }
        }
    }
    return &g_94;
}







static const uint16_t func_15(int8_t * p_16, uint32_t p_17, int8_t * p_18, int8_t * p_19, int8_t * p_20)
{
    int32_t *l_599 = &g_137;
    int32_t *l_600[7][6] = {{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137},{(void*)0,(void*)0,&g_137,(void*)0,(void*)0,&g_137}};
    int16_t l_601 = 9L;
    uint8_t l_602 = 0UL;
    int i, j;
    l_602++;
    for (p_17 = 0; (p_17 > 2); p_17++)
    {
        const uint16_t l_607 = 0x9CD9L;
        return l_607;
    }
    return p_17;
}







static int8_t * func_21(int8_t p_22, int16_t p_23)
{
    int32_t **l_500 = &g_165;
    int32_t ***l_499 = &l_500;
    int64_t *l_502 = &g_474.f0;
    int64_t **l_501 = &l_502;
    int8_t *l_505 = &g_160.f2;
    union U0 l_506 = {1L};
    int32_t l_513 = 0x7BEC60F6L;
    int32_t l_514 = 5L;
    int32_t l_515 = 1L;
    int32_t l_516 = 0xD10D603BL;
    int32_t l_517 = (-5L);
    int32_t l_518 = (-6L);
    int32_t l_519 = 0x75D322E9L;
    int32_t l_520 = 1L;
    uint32_t l_546 = 9UL;
    union U1 *l_548 = &g_473;
    union U1 **l_547[8] = {&l_548,&l_548,&l_548,&l_548,&l_548,&l_548,&l_548,&l_548};
    uint16_t * const l_560 = &g_281;
    int i;
    if ((safe_mul_func_uint32_t_u_u((&g_372 != (g_498 , l_499)), (&g_211[0][5] != ((*l_501) = &g_211[0][2])))))
    {
        const uint8_t l_503 = 0xF3L;
        int8_t *l_504[6];
        union U0 *l_507 = (void*)0;
        union U0 *l_508 = &g_474;
        int32_t l_509 = 0x0A75933EL;
        int i;
        for (i = 0; i < 6; i++)
            l_504[i] = (void*)0;
lbl_510:
        (*g_35) = ((g_160 = ((*l_508) = l_506)) , p_23);
        l_509 = (*g_96);
        if (l_506.f0)
            goto lbl_510;
    }
    else
    {
        int32_t *l_511 = &g_36;
        int32_t *l_512[1][8][9] = {{{&g_137,(void*)0,&g_137,&g_279,(void*)0,&g_36,&g_279,&g_36,&g_36},{&g_36,&g_36,&g_279,&g_36,(void*)0,&g_279,&g_137,(void*)0,&g_137},{&g_279,&g_81,&g_279,&g_279,&g_81,&g_279,&g_36,&g_137,&g_81},{&g_279,&g_36,&g_137,&g_279,(void*)0,&g_81,&g_36,&g_137,&g_137},{&g_36,(void*)0,&g_36,&g_81,&g_279,&g_81,&g_36,(void*)0,&g_36},{&g_137,&g_137,&g_36,&g_81,(void*)0,&g_279,&g_137,&g_36,&g_279},{&g_81,&g_137,&g_36,&g_279,&g_81,&g_279,&g_279,&g_81,&g_279},{&g_137,(void*)0,&g_137,&g_279,(void*)0,&g_36,&g_279,&g_36,&g_36}}};
        union U2 *l_532[4][9] = {{(void*)0,&g_483,(void*)0,&g_308,&g_308,(void*)0,(void*)0,&g_308,(void*)0},{(void*)0,&g_308,(void*)0,(void*)0,&g_308,(void*)0,&g_462,(void*)0,&g_308},{(void*)0,(void*)0,(void*)0,(void*)0,&g_308,&g_308,&g_308,(void*)0,(void*)0},{&g_308,&g_308,&g_462,&g_308,&g_483,&g_308,&g_462,&g_308,&g_308}};
        union U2 ** const l_531[10][7] = {{&l_532[1][4],&l_532[2][5],&l_532[2][1],&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[1][5]},{&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[2][2],&l_532[2][5],&l_532[2][5],&l_532[3][1]},{&l_532[1][5],&l_532[3][3],&l_532[2][5],&l_532[2][5],&l_532[3][3],&l_532[1][5],&l_532[2][5]},{&l_532[1][5],&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[2][5]},{&l_532[2][5],&l_532[3][1],&l_532[2][5],(void*)0,&l_532[1][4],(void*)0,&l_532[2][5]},{&l_532[1][4],&l_532[2][5],&l_532[2][2],&l_532[2][3],&l_532[2][3],&l_532[2][2],&l_532[2][5]},{&l_532[2][5],&l_532[3][3],&l_532[2][2],(void*)0,&l_532[0][6],&l_532[2][3],&l_532[2][5]},{&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[2][5],&l_532[3][3],&l_532[2][1],(void*)0},{&l_532[2][2],&l_532[2][5],&l_532[2][5],(void*)0,&l_532[2][5],&l_532[2][5],(void*)0},{&l_532[2][5],(void*)0,&l_532[2][1],&l_532[2][5],&l_532[2][5],&l_532[3][1],&l_532[2][2]}};
        uint16_t *l_535 = &g_281;
        const uint16_t **l_536 = &g_491;
        int i, j, k;
        (*l_500) = l_511;
        ++g_524;
        for (g_54 = (-6); (g_54 >= 16); g_54++)
        {
            uint64_t l_533 = 18446744073709551615UL;
            int32_t l_534 = 1L;
        }
        if ((func_26(p_22, (*l_511), g_412[1].f3) || (((*l_535) = (*l_511)) & (*l_511))))
        {
            uint32_t l_545 = 0x5A965152L;
            union U1 **l_549 = (void*)0;
            (*g_537) = ((*g_489) = l_536);
            l_516 |= (*g_35);
            (*l_511) = ((((((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_545, g_258[0])), l_546)) || l_545) , p_22) , 0x24ECL) , l_547[1]) == l_549);
            for (l_519 = 0; (l_519 < (-16)); --l_519)
            {
                for (l_515 = 0; (l_515 > 25); ++l_515)
                {
                    for (g_160.f0 = 16; (g_160.f0 > 6); g_160.f0--)
                    {
                        (*l_511) = p_23;
                    }
                }
            }
        }
        else
        {
            int8_t *l_567 = &g_449.f2;
            int32_t l_579 = 0x095FF20CL;
            int32_t l_581 = 0x7ABEDC6EL;
            int32_t l_582 = 0xDFD9B37DL;
            int32_t l_584[8] = {5L,5L,5L,5L,5L,5L,5L,5L};
            int i;
            for (g_36 = 9; (g_36 != (-15)); g_36 = safe_sub_func_uint64_t_u_u(g_36, 5))
            {
                int32_t l_558 = (-1L);
                uint16_t *l_559 = &g_281;
                int32_t l_586 = 3L;
                if (((g_264.f1 && (l_558 >= p_22)) & (l_559 != l_560)))
                {
                    uint16_t l_561[4] = {0UL,0UL,0UL,0UL};
                    int16_t *l_566 = &g_258[0];
                    int32_t l_583 = 0L;
                    int i;
                    if ((((*l_511) != l_561[0]) > (safe_add_func_int16_t_s_s(((*l_566) = (+(safe_rshift_func_uint16_t_u_u((***g_495), 5)))), l_558))))
                    {
                        return l_567;
                    }
                    else
                    {
                        int32_t l_570 = 0x6F0A6F76L;
                        int16_t *** const l_576 = (void*)0;
                        int32_t l_580 = 7L;
                        int32_t l_585 = 5L;
                        int32_t l_587 = 1L;
                        int32_t * volatile *l_591 = (void*)0;
                        int32_t * volatile *l_592 = (void*)0;
                        int32_t * volatile *l_593[6][1] = {{&l_512[0][3][0]},{(void*)0},{&l_512[0][3][0]},{(void*)0},{&l_512[0][3][0]},{(void*)0}};
                        int32_t * volatile *l_594[6][3] = {{(void*)0,&l_512[0][3][0],(void*)0},{(void*)0,&l_512[0][6][1],&l_512[0][3][0]},{&l_512[0][6][1],(void*)0,(void*)0},{&l_512[0][3][0],(void*)0,&g_165},{&l_511,&l_512[0][6][1],&g_165},{&l_512[0][3][0],&l_512[0][3][0],&g_165}};
                        int32_t * volatile *l_595[2];
                        int32_t * volatile *l_596 = &l_512[0][5][5];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_595[i] = &g_165;
                        g_137 = (l_561[2] && (0x25772441L != ((((((safe_lshift_func_int16_t_s_u((g_473.f3 &= l_570), 10)) , p_22) , (safe_div_func_uint16_t_u_u(0UL, (((g_573 == (g_480 , l_576)) < (safe_rshift_func_int16_t_s_s((~0xA688L), 3))) , p_22)))) , l_579) == 65535UL) , l_579)));
                        g_588[0]--;
                        // Yang: 
                        (*l_596) = (*g_372);
                    }
                }
                else
                {
                    l_579 |= p_23;
                }
            }
        }
    }
    (*g_597) = p_23;
    return l_505;
}







static int16_t func_26(uint64_t p_27, int32_t p_28, uint64_t p_29)
{
    int8_t l_33 = (-7L);
    union U3 l_39[4][1][2] = {{{{0xAA08BBD1L},{0xAA08BBD1L}}},{{{0xAA08BBD1L},{0xAA08BBD1L}}},{{{0xAA08BBD1L},{0xAA08BBD1L}}},{{{0xAA08BBD1L},{0xAA08BBD1L}}}};
    int32_t l_48[3][8] = {{0xF402BE2FL,2L,1L,2L,0xF402BE2FL,0x093D7F28L,0x093D7F28L,0xF402BE2FL},{2L,0L,0L,2L,0x17B4D2C2L,0xF402BE2FL,0x17B4D2C2L,2L},{0L,0x17B4D2C2L,0L,0x093D7F28L,1L,1L,0x093D7F28L,0L}};
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
                uint64_t l_484 = 0x7319C4EBD6CA1A1ELL;
                (*l_46) &= (-1L);
                l_484 = (!(func_58(g_54, (func_62(l_65, func_66(func_69(p_28, &l_33, g_73), g_94)) , p_27), g_474) , 1L));
            }
        }
    }
    return l_48[2][0];
}







static union U2 func_58(int16_t p_59, int32_t p_60, union U0 p_61)
{
    int32_t *l_475 = &g_81;
    int32_t *l_476 = (void*)0;
    int32_t *l_477[1][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_478 = 0xE9C3CC93L;
    int32_t l_479 = 0x9653B007L;
    int i, j, k;
    l_476 = l_475;
    g_480++;
    return g_483;
}







static union U1 func_62(int8_t * p_63, union U0 p_64)
{
    uint32_t l_381 = 4294967295UL;
    const uint32_t l_399 = 1UL;
    int32_t l_400 = 7L;
    int64_t l_401 = 0x541CA58404EA0C65LL;
    int32_t l_402 = 0x0CE8B557L;
    int32_t l_403 = 0xD019D291L;
    int32_t l_405 = 0x95F1018CL;
    int32_t l_406 = 0x198F1B2DL;
    int32_t *l_427 = &l_406;
    int16_t **l_458 = (void*)0;
    int64_t *l_463 = (void*)0;
lbl_423:
    for (g_137 = 0; (g_137 < (-26)); g_137 = safe_sub_func_uint64_t_u_u(g_137, 5))
    {
        int32_t *l_375 = &g_36;
        int32_t *l_376 = &g_279;
        int32_t *l_377 = &g_81;
        int32_t *l_378 = (void*)0;
        int32_t *l_379 = &g_36;
        int32_t *l_380[6] = {&g_81,&g_36,&g_279,&g_36,&g_279,&g_279};
        uint32_t l_409[2][9][6] = {{{1UL,18446744073709551615UL,0xC0918418L,0xEB43ED56L,0xC0918418L,18446744073709551615UL},{0xF6BB8693L,18446744073709551615UL,9UL,18446744073709551611UL,0x3A48F00FL,18446744073709551615UL},{1UL,0x9A9F4B68L,0xC0918418L,18446744073709551611UL,0xC0918418L,0x9A9F4B68L},{0xF6BB8693L,0x9A9F4B68L,9UL,0xEB43ED56L,0x3A48F00FL,0x9A9F4B68L},{1UL,18446744073709551615UL,0xC0918418L,0xEB43ED56L,0xC0918418L,18446744073709551615UL},{0xF6BB8693L,18446744073709551615UL,9UL,18446744073709551611UL,0x3A48F00FL,18446744073709551615UL},{1UL,0x9A9F4B68L,0xC0918418L,18446744073709551611UL,0xC0918418L,0x9A9F4B68L},{0xF6BB8693L,0x9A9F4B68L,9UL,0xEB43ED56L,0x3A48F00FL,0x9A9F4B68L},{1UL,18446744073709551615UL,0xC0918418L,0xEB43ED56L,0xC0918418L,18446744073709551615UL}},{{0xF6BB8693L,18446744073709551615UL,9UL,18446744073709551611UL,0x3A48F00FL,18446744073709551615UL},{1UL,0x9A9F4B68L,0xC0918418L,18446744073709551611UL,0xC0918418L,0x9A9F4B68L},{0xF6BB8693L,0x9A9F4B68L,9UL,0xEB43ED56L,0x3A48F00FL,0x9A9F4B68L},{1UL,18446744073709551615UL,0xC0918418L,0xEB43ED56L,0xC0918418L,18446744073709551615UL},{0xF6BB8693L,18446744073709551615UL,9UL,18446744073709551611UL,0x3A48F00FL,18446744073709551615UL},{1UL,0x9A9F4B68L,0xC0918418L,18446744073709551611UL,0xC0918418L,0x9A9F4B68L},{0xF6BB8693L,0x9A9F4B68L,9UL,0xEB43ED56L,0x3A48F00FL,0x9A9F4B68L},{1UL,18446744073709551615UL,0xC0918418L,0xEB43ED56L,0xC0918418L,18446744073709551615UL},{0xF6BB8693L,18446744073709551615UL,9UL,18446744073709551611UL,0x3A48F00FL,18446744073709551615UL}}};
        int i, j, k;
        l_381++;
        for (g_231 = 0; (g_231 == 20); ++g_231)
        {
            int64_t l_397 = 0x86C695DF1CC407AALL;
            uint8_t l_398 = 0xA9L;
            int32_t l_404 = 0L;
            int32_t l_407 = 0x1DFCF9E4L;
            int32_t l_408 = (-1L);
            for (g_81 = 0; (g_81 > 8); g_81++)
            {
                int8_t l_396[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i;
                (*l_379) = ((*l_376) = 0x956E6CDAL);
                (*l_376) = (safe_mod_func_uint64_t_u_u(l_381, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_30 >= g_264.f3), (p_64.f2 < (((l_396[7] = g_211[0][1]) & 0x8FL) , (0xE1F6L || ((l_397 ^ (p_64.f2 && (*l_377))) < l_397)))))), 12)), l_398))));
            }
            (*l_375) &= l_399;
            l_409[1][0][4]--;
        }
        return g_412[1];
    }
    for (g_275 = 0; (g_275 == 52); g_275 = safe_add_func_uint16_t_u_u(g_275, 3))
    {
        int8_t l_431[6][8] = {{1L,0x7DL,1L,1L,1L,1L,0x7DL,1L},{5L,1L,1L,1L,5L,5L,1L,1L},{5L,5L,1L,1L,1L,5L,5L,1L},{1L,1L,1L,1L,0x7DL,1L,1L,1L},{1L,0x7DL,1L,1L,0x7DL,1L,0x7DL,1L},{1L,0x7DL,1L,1L,1L,1L,0x7DL,1L}};
        union U1 *l_468 = &g_412[1];
        union U1 **l_467[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_467[i] = &l_468;
        for (g_160.f2 = (-3); (g_160.f2 > 13); g_160.f2 = safe_add_func_uint64_t_u_u(g_160.f2, 5))
        {
            uint8_t *l_459 = &g_231;
            uint8_t *l_460 = &g_233;
            int64_t *l_461 = &l_401;
            int32_t l_464 = 3L;
            int32_t l_465 = 1L;
            int32_t *l_466 = &g_81;
            for (l_405 = (-21); (l_405 != 21); l_405 = safe_add_func_uint64_t_u_u(l_405, 8))
            {
                (*g_35) |= (safe_add_func_uint8_t_u_u((p_64.f2 < ((g_211[0][8] || 0x7D97D985EBFDEF3ALL) != (safe_lshift_func_uint16_t_u_s(l_401, 6)))), p_64.f2));
                if (l_399)
                    goto lbl_423;
                for (l_400 = (-11); (l_400 <= (-21)); l_400 = safe_sub_func_int8_t_s_s(l_400, 2))
                {
                    uint16_t l_440 = 65535UL;
                    if (p_64.f2)
                        break;
                    if ((p_64.f2 , p_64.f2))
                    {
                        int32_t * volatile *l_426 = (void*)0;
                        int32_t l_430 = 0xD9E034A3L;
                        l_427 = (*g_372);
                        l_430 = ((safe_sub_func_int32_t_s_s(p_64.f2, (*g_96))) & 0x322A8959L);
                        return g_412[1];
                    }
                    else
                    {
                        int32_t *l_432 = &g_81;
                        int32_t *l_433 = (void*)0;
                        int32_t *l_434 = &g_81;
                        int32_t *l_435 = &g_81;
                        int32_t *l_436 = &g_36;
                        int32_t *l_437 = &g_279;
                        int32_t *l_438 = &g_81;
                        int32_t *l_439[7] = {&g_36,(void*)0,(void*)0,&g_36,(void*)0,(void*)0,&g_36};
                        int i;
                        l_431[0][5] |= (l_402 = (g_160 , (!(*l_427))));
                        --l_440;
                        if (g_137)
                            goto lbl_423;
                    }
                    (*l_427) ^= (safe_div_func_int32_t_s_s((g_258[0] , (*g_96)), g_412[1].f0));
                    (*l_427) = (safe_mod_func_int64_t_s_s(p_64.f2, (safe_lshift_func_int8_t_s_u(1L, 5))));
                }
                return g_449;
            }
            (*l_466) = (safe_mod_func_int16_t_s_s(((((0x940CC902525824C1LL ^ (safe_rshift_func_uint8_t_u_u(p_64.f2, ((*l_460) &= ((safe_lshift_func_int16_t_s_u((-9L), 7)) , ((*l_459) = (((safe_mod_func_int8_t_s_s((*l_427), 0xB0L)) , l_458) == (void*)0))))))) , (((*l_461) &= p_64.f2) ^ (l_465 = ((((g_308 , g_462) , (void*)0) != l_463) <= l_464)))) <= l_464) || (-7L)), l_464));
        }
        g_469[9][1] = (void*)0;
        (*l_427) = (g_462 , (safe_rshift_func_uint8_t_u_s(0UL, 2)));
    }
    return g_473;
}







static union U0 func_66(union U0 p_67, uint32_t p_68)
{
    int32_t *l_166 = &g_81;
    int32_t *l_167 = &g_36;
    int32_t *l_168 = &g_137;
    int32_t *l_169 = &g_81;
    int32_t *l_170 = (void*)0;
    int32_t *l_171 = &g_137;
    int32_t *l_172 = (void*)0;
    int32_t *l_173 = &g_36;
    int32_t *l_174 = (void*)0;
    int32_t *l_175 = &g_81;
    int32_t l_176 = (-9L);
    int32_t *l_177 = &l_176;
    int32_t *l_178 = &g_137;
    int32_t *l_179 = &g_81;
    int32_t *l_180 = &g_81;
    int32_t *l_181 = &g_137;
    int32_t *l_182 = &g_81;
    int32_t *l_183 = (void*)0;
    int32_t *l_184 = &g_36;
    int32_t *l_185 = &g_137;
    int32_t *l_186 = &g_81;
    int32_t *l_187 = &g_137;
    int32_t *l_188 = (void*)0;
    int32_t *l_189[1];
    int32_t l_190 = 1L;
    uint64_t l_191 = 0x944A3940A6EEA41BLL;
    int8_t *l_194 = &g_160.f2;
    union U0 l_289 = {0xCE80497F3A2DD5C5LL};
    int16_t **l_334 = (void*)0;
    uint16_t l_347 = 0UL;
    uint16_t *l_356 = &g_281;
    uint16_t **l_355 = &l_356;
    int i;
    for (i = 0; i < 1; i++)
        l_189[i] = &g_81;
lbl_284:
    l_191--;
    if (((*l_169) = (((*l_194) &= (*l_185)) | (p_67.f2 >= (p_67.f2 ^ 0xBD2D33707CAD87FALL)))))
    {
        uint64_t l_207 = 0xDDAD4C5443C59826LL;
        uint32_t l_213 = 18446744073709551609UL;
        int32_t l_234[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t l_243 = 4L;
        int i;
        for (l_191 = 0; (l_191 >= 52); l_191 = safe_add_func_int32_t_s_s(l_191, 5))
        {
            uint32_t *l_201 = &g_202;
            uint32_t *l_208 = &g_209[2];
            int64_t *l_210 = &g_211[0][1];
            int32_t l_241 = 0x4F157AF3L;
            int32_t l_252 = (-2L);
            int32_t l_268 = 1L;
            int32_t l_269 = 0x675844AFL;
            int32_t l_271 = 0L;
            int32_t l_272 = 0L;
            int32_t l_274 = 0xC32A7BFFL;
            (*l_181) = ((p_68 | g_160.f2) > (safe_mod_func_uint64_t_u_u(0x07154B7D5238762ALL, ((*l_210) = (safe_div_func_uint32_t_u_u(((*l_201) ^= (g_144.f1 >= g_88)), ((*l_208) = ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_36, ((l_207 ^ g_94) && 0x88L))), p_68)) && g_160.f2))))))));
            if ((*g_35))
            {
                int32_t l_212 = 0x2D08A2D7L;
                uint64_t *l_226 = &g_30;
                uint8_t *l_229 = (void*)0;
                uint8_t *l_230 = &g_231;
                uint8_t *l_232 = &g_233;
                --l_213;
                (*l_177) = (((l_234[7] = (safe_rshift_func_uint8_t_u_s(((*l_232) &= ((*l_230) |= ((((safe_lshift_func_int8_t_s_u((~((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((*l_178) || (l_207 >= ((*l_226) |= (safe_lshift_func_uint8_t_u_u(l_212, 7))))), p_68)), 0x9B7C7E5BD8F16D91LL)) > (((g_94 , ((g_160 , (safe_rshift_func_uint8_t_u_s(0xD9L, p_67.f2))) , (*l_167))) , g_211[0][1]) <= 0x9EL))), 7)) & 0xC819DA82994EBA6CLL) , p_67.f2) >= g_55))), (*l_169)))) != p_68) | g_137);
            }
            else
            {
                uint8_t *l_242[1][10];
                uint16_t *l_248 = &g_249;
                int16_t *l_257 = &g_258[0];
                const int32_t l_259 = 1L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_242[i][j] = &g_233;
                }
                l_252 = (safe_div_func_int64_t_s_s(g_36, (g_209[2] | ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_241, (-1L))), (l_243 ^= l_234[3]))) || (safe_rshift_func_int8_t_s_u(((++(*l_248)) <= (l_241 < l_213)), 7))))));
                l_252 &= ((((*l_180) | ((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(g_88, ((*l_210) |= p_67.f2))), ((*l_257) = g_144.f1))) | (l_259 , ((safe_sub_func_int32_t_s_s(((*l_185) = p_67.f2), (0x7C3E99366D9D4B4ALL < ((g_55 < ((safe_add_func_uint8_t_u_u((g_264 , p_67.f2), 0L)) > g_264.f0)) ^ p_68)))) < l_213)))) , 0xD3B0C1B5C86E0DFFLL) & l_234[8]);
            }
            if ((*g_96))
            {
                (*l_186) = (-2L);
            }
            else
            {
                int8_t l_265[10] = {0xBDL,0xBDL,0xBDL,0xBDL,0xBDL,0xBDL,0xBDL,0xBDL,0xBDL,0xBDL};
                int32_t l_266 = 0xFA422619L;
                int32_t l_267 = 0x23B1B58FL;
                int16_t l_270 = 0x12C3L;
                int32_t l_273 = 0L;
                int32_t *l_278 = &l_271;
                int i;
                --g_275;
                l_278 = (void*)0;
                g_281--;
            }
            if (g_36)
                goto lbl_284;
        }
        l_234[7] |= (*g_96);
        for (l_176 = 0; (l_176 != (-12)); l_176 = safe_sub_func_uint16_t_u_u(l_176, 6))
        {
            uint8_t l_288 = 255UL;
            const union U3 l_292 = {0xB66DF69DL};
            (*g_96) ^= ((((((safe_unary_minus_func_int64_t_s((*l_173))) < g_258[0]) <= 1L) , (!(p_67.f2 ^ l_288))) , (+(l_289 , (safe_mul_func_int16_t_s_s((l_292 , g_202), p_67.f2))))) , p_67.f2);
            for (g_233 = 0; (g_233 != 34); g_233 = safe_add_func_uint32_t_u_u(g_233, 1))
            {
                uint64_t l_295 = 9UL;
                int64_t *l_300 = &g_211[0][1];
                int32_t *l_303 = &g_137;
                union U2 *l_307[4] = {&g_308,&g_308,&g_308,&g_308};
                int i;
            }
        }
    }
    else
    {
        int32_t l_323 = 1L;
        int32_t l_346 = (-3L);
        uint64_t * const l_367[7][5] = {{&g_30,&g_30,&g_30,&l_191,(void*)0},{&g_30,&l_191,(void*)0,&l_191,&g_30},{(void*)0,&l_191,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&l_191,(void*)0},{&g_30,&l_191,(void*)0,&l_191,&g_30},{(void*)0,&l_191,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&l_191,(void*)0}};
        int i, j;
        if (p_67.f2)
        {
            int32_t *l_329[5][5][3] = {{{&g_137,&l_323,&l_323},{&l_176,&g_137,&g_137},{&l_323,&l_323,&g_81},{(void*)0,&g_137,&l_176},{&g_81,&g_279,(void*)0}},{{&g_137,&g_137,&l_176},{(void*)0,&l_323,&g_137},{&l_323,&g_137,(void*)0},{&g_81,&l_323,&l_323},{(void*)0,&l_323,(void*)0}},{{&g_279,&g_137,&g_137},{&l_323,&g_81,&l_176},{&l_323,(void*)0,(void*)0},{&g_279,&l_176,&l_176},{&l_323,(void*)0,&g_81}},{{&l_323,&g_279,&g_137},{&g_279,&g_81,&l_323},{(void*)0,&l_323,&l_176},{(void*)0,(void*)0,&l_323},{(void*)0,&g_81,&g_137}},{{&g_81,&g_137,&g_279},{&g_137,&g_137,&g_81},{&g_279,&g_81,&g_279},{&g_279,&l_176,&g_137},{(void*)0,&l_323,&l_323}}};
            int16_t **l_335 = (void*)0;
            int i, j, k;
            if (p_68)
            {
lbl_337:
                if (g_137)
                    goto lbl_284;
            }
            else
            {
                int32_t l_322[2][2][3] = {{{1L,1L,0x7C816288L},{1L,1L,0x7C816288L}},{{1L,1L,0x7C816288L},{1L,1L,0x7C816288L}}};
                const int16_t *l_331 = (void*)0;
                const int16_t **l_330 = &l_331;
                union U0 l_336 = {0x6465222BB7B0CE8ALL};
                int i, j, k;
                (*l_178) ^= l_322[1][0][1];
                (*l_186) |= (l_323 != g_279);
                for (g_94 = 0; (g_94 <= 27); g_94 = safe_add_func_int8_t_s_s(g_94, 1))
                {
                    int32_t **l_326 = &l_172;
                    int32_t **l_328[6][5] = {{&l_188,&l_188,&l_177,&l_188,&l_188},{&l_188,(void*)0,&l_188,&l_188,(void*)0},{&l_188,(void*)0,(void*)0,&l_188,(void*)0},{(void*)0,(void*)0,&l_189[0],(void*)0,(void*)0},{(void*)0,&l_188,(void*)0,(void*)0,&l_188},{(void*)0,&l_188,&l_188,(void*)0,&l_188}};
                    const int16_t **l_333 = (void*)0;
                    const int16_t ***l_332 = &l_333;
                    int i, j;
                    (*g_164) = ((*l_326) = (void*)0);
                    (*g_164) = l_329[3][4][1];
                    if ((((*l_332) = l_330) == (l_335 = l_334)))
                    {
                        return l_336;
                    }
                    else
                    {
                        if (g_81)
                            goto lbl_337;
                    }
                }
            }
        }
        else
        {
            int32_t l_340 = (-1L);
            int32_t l_341 = 0L;
            int32_t l_342 = 0L;
            int32_t l_343[5];
            int i;
            for (i = 0; i < 5; i++)
                l_343[i] = 0x5E148245L;
            for (g_137 = 0; (g_137 < 1); g_137 = safe_add_func_int8_t_s_s(g_137, 5))
            {
                int64_t l_344 = 0L;
                int32_t l_345 = 1L;
                uint32_t l_353 = 0UL;
                uint64_t *l_366 = &g_30;
                int16_t *l_368 = &g_258[0];
                l_347++;
                for (l_176 = 0; (l_176 >= (-3)); l_176--)
                {
                    union U0 l_352[7] = {{-7L},{-7L},{1L},{-7L},{-7L},{1L},{-7L}};
                    int32_t l_359 = 0L;
                    int i;
                    for (l_190 = 0; (l_190 >= 0); l_190 -= 1)
                    {
                        return g_160;
                    }
                    if (((*l_184) = (((l_352[3] , 1L) & 0x946EBC1DC1D72FDCLL) , l_353)))
                    {
                        int32_t **l_354[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        uint16_t **l_357 = &l_356;
                        uint16_t ***l_358 = &l_355;
                        int i;
                        (*g_164) = &l_346;
                        l_355 = (void*)0;
                        (*l_358) = l_357;
                        l_359 ^= l_341;
                    }
                    else
                    {
                        int32_t * const l_360[9][4][1] = {{{&l_341},{&l_346},{&g_137},{&l_359}},{{&l_343[4]},{&g_137},{&l_341},{&g_137}},{{&l_343[4]},{&l_359},{&g_137},{&l_346}},{{&l_341},{&l_343[4]},{&l_343[4]},{&l_341}},{{&l_346},{&g_137},{&l_359},{&l_343[4]}},{{&l_176},{(void*)0},{&l_176},{&l_341}},{{(void*)0},{&l_176},{&l_341},{&l_323}},{{&l_341},{&l_341},{&l_323},{&l_341}},{{&l_176},{(void*)0},{&l_341},{&l_176}}};
                        int32_t **l_361 = &l_187;
                        int i, j, k;
                        (*l_361) = l_360[5][3][0];
                    }
                    return l_352[6];
                }
                (*l_179) = ((g_249 = (((l_323 | (safe_rshift_func_uint16_t_u_u(g_88, p_67.f2))) == ((safe_lshift_func_int16_t_s_u(((g_258[0] = g_233) , ((*l_368) &= (l_366 != (l_323 , l_367[0][2])))), 10)) & (++(*l_356)))) > (*g_35))) > p_68);
                if (g_36)
                    goto lbl_284;
            }
            (*l_180) = (*g_35);
            if (g_264.f3)
                goto lbl_284;
            // Yang: (*g_371) = &g_96;
        }
    }
    return l_289;
}







static union U0 func_69(const uint16_t p_70, int8_t * p_71, int8_t * p_72)
{
    uint64_t l_74[1];
    int8_t *l_93 = &g_94;
    uint32_t l_97 = 4294967295UL;
    int16_t *l_102 = &g_88;
    int32_t l_108 = 0L;
    union U0 l_121[3][8][4] = {{{{0xE12964217F86792DLL},{-1L},{0x7D2F2FD2206DCC1ALL},{0x6DB6A2D9A964D50ELL}},{{0x2C3A22099EBF9289LL},{0xE12964217F86792DLL},{0xF0B25D92485D133FLL},{9L}},{{3L},{0x92702ECBAF5A799BLL},{0xDF77CBFDD649878ELL},{0xDF77CBFDD649878ELL}},{{0xDF77CBFDD649878ELL},{0xDF77CBFDD649878ELL},{0x92702ECBAF5A799BLL},{3L}},{{9L},{0xF0B25D92485D133FLL},{0xE12964217F86792DLL},{0x2C3A22099EBF9289LL}},{{0x6DB6A2D9A964D50ELL},{0x7D2F2FD2206DCC1ALL},{-1L},{0xE12964217F86792DLL}},{{0x8DA5B5AAB37417BDLL},{0x7D2F2FD2206DCC1ALL},{-7L},{0x2C3A22099EBF9289LL}},{{0x7D2F2FD2206DCC1ALL},{0xF0B25D92485D133FLL},{0x8DA5B5AAB37417BDLL},{3L}}},{{{5L},{0xDF77CBFDD649878ELL},{0x30A75DB76206065FLL},{0xDF77CBFDD649878ELL}},{{0x21E3D09CE0600665LL},{0x92702ECBAF5A799BLL},{0x2C3A22099EBF9289LL},{9L}},{{1L},{0xE12964217F86792DLL},{2L},{0x6DB6A2D9A964D50ELL}},{{0x30A75DB76206065FLL},{-1L},{2L},{0x8DA5B5AAB37417BDLL}},{{0x30A75DB76206065FLL},{-7L},{2L},{0x7D2F2FD2206DCC1ALL}},{{1L},{0x8DA5B5AAB37417BDLL},{0x2C3A22099EBF9289LL},{5L}},{{0x21E3D09CE0600665LL},{0x30A75DB76206065FLL},{0x30A75DB76206065FLL},{0x21E3D09CE0600665LL}},{{5L},{0x2C3A22099EBF9289LL},{0x8DA5B5AAB37417BDLL},{1L}}},{{{0x7D2F2FD2206DCC1ALL},{2L},{-7L},{0x30A75DB76206065FLL}},{{0x8DA5B5AAB37417BDLL},{2L},{-1L},{0x30A75DB76206065FLL}},{{0x6DB6A2D9A964D50ELL},{2L},{0xE12964217F86792DLL},{1L}},{{9L},{0x2C3A22099EBF9289LL},{0x92702ECBAF5A799BLL},{0x2C3A22099EBF9289LL}},{{2L},{5L},{2L},{0x726552C197979DB4LL}},{{9L},{0x6DB6A2D9A964D50ELL},{0xEC77404BFF72C0FFLL},{0x92702ECBAF5A799BLL}},{{0x8DA5B5AAB37417BDLL},{0xB768FFD6E93423A3LL},{0x92702ECBAF5A799BLL},{0x6DB6A2D9A964D50ELL}},{{0x21E3D09CE0600665LL},{-7L},{0x92702ECBAF5A799BLL},{3L}}}};
    int16_t * const l_156 = &g_88;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_74[i] = 6UL;
    for (g_55 = 0; (g_55 <= 0); g_55 += 1)
    {
        int32_t l_82[4];
        int64_t l_107 = 1L;
        union U0 l_130 = {0x29FA79916B1FF0AALL};
        uint32_t l_133 = 2UL;
        int i;
        for (i = 0; i < 4; i++)
            l_82[i] = 6L;
        if (l_74[g_55])
        {
            uint32_t l_77[3][1][5] = {{{0x000286F3L,1UL,0x000286F3L,0x000286F3L,1UL}},{{1UL,0x000286F3L,0x000286F3L,1UL,0x000286F3L}},{{1UL,1UL,0x497A847EL,1UL,1UL}}};
            int32_t l_95 = 0x819C35E3L;
            int i, j, k;
            if ((safe_sub_func_int16_t_s_s(p_70, l_77[1][0][4])))
            {
                uint64_t l_78 = 6UL;
                int32_t *l_79 = &g_36;
                int32_t *l_80[2][8] = {{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81}};
                int16_t *l_87 = &g_88;
                int i, j;
                (*l_79) ^= l_78;
                l_82[3] = ((((p_70 != (&g_36 != &g_36)) ^ p_70) >= ((+(p_70 ^ (*g_35))) || 1L)) == ((*p_71) || ((l_74[0] | (-1L)) , p_70)));
                l_95 = (+((*g_35) | (safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_s((p_70 , ((*l_87) = 9L)), 12)) , ((safe_lshift_func_int8_t_s_u(g_36, 3)) != l_77[1][0][4])) >= (((0x1321L > (safe_mul_func_uint8_t_u_u((p_70 < ((*l_79) == (!(p_70 , p_70)))), 0x11L))) < 4294967286UL) , 0xF6DEL)) , l_93) == (void*)0), l_74[0]))));
            }
            else
            {
                (*g_96) &= p_70;
            }
            if (p_70)
                break;
        }
        else
        {
            union U3 l_101 = {2UL};
            int8_t **l_103[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_104 = &g_81;
            int32_t *l_105 = (void*)0;
            int32_t *l_106[4][2][4] = {{{(void*)0,&l_82[3],(void*)0,&l_82[3]},{(void*)0,&l_82[3],(void*)0,&l_82[3]}},{{(void*)0,&l_82[3],(void*)0,&l_82[3]},{(void*)0,&l_82[3],(void*)0,&l_82[3]}},{{(void*)0,&l_82[3],(void*)0,&l_82[3]},{(void*)0,&l_82[3],(void*)0,&l_82[3]}},{{(void*)0,&l_82[3],(void*)0,&l_82[3]},{(void*)0,&l_82[3],(void*)0,&l_82[3]}}};
            uint32_t *l_134 = (void*)0;
            uint32_t *l_135 = (void*)0;
            uint32_t *l_136 = &l_97;
            int i, j, k;
            l_108 = (l_107 = ((0xA71D4F06586993EBLL > l_97) != (safe_mod_func_int32_t_s_s((p_70 , (safe_unary_minus_func_uint16_t_u(((l_101 , l_102) != (((g_73 = &g_94) == (void*)0) , &g_53))))), ((*l_104) = 1L)))));
            (*l_104) = ((g_137 = ((*l_136) &= (safe_sub_func_int64_t_s_s(((+((*g_35) = ((l_82[3] = (safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(g_88, (l_74[g_55] = (safe_mod_func_int64_t_s_s(p_70, p_70))))), (l_121[2][0][1] , (safe_add_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(((((l_108 = (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_130 , ((safe_rshift_func_uint8_t_u_u((1UL <= (0x5FD3A0BC11C586F4LL & l_130.f2)), 2)) , (*g_73))), (*g_73))), 0x45L))) | l_121[2][0][1].f2) < g_94) ^ p_70), p_70)) , g_30) & g_94), g_88))))))), 0x177FA41F08C6B94ELL))) != l_130.f2))) && l_133), 0xBB462C2F114C857BLL)))) > 0x11123652L);
            for (l_107 = (-20); (l_107 == (-14)); l_107++)
            {
                uint64_t l_141 = 0x0348559906447CF2LL;
                for (g_30 = 0; (g_30 <= 6); g_30 += 1)
                {
                    uint32_t l_140 = 0x43468661L;
                    int32_t l_150 = (-1L);
                    int16_t *l_151 = &g_88;
                    int16_t **l_152 = (void*)0;
                    int16_t **l_153 = &l_102;
                    uint32_t *l_157 = &l_101.f1;
                    int i;
                    l_82[3] = 1L;
                    if (l_140)
                        break;
                    ++l_141;
                    (*l_104) |= ((g_144 , (((*l_157) = ((+(((*p_71) != (safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s((*g_73), g_53))))) == (p_70 >= ((l_150 = (safe_rshift_func_int8_t_s_s((*g_73), 3))) > (((*l_153) = l_151) == ((safe_lshift_func_int8_t_s_u((*g_73), 2)) , l_156)))))) , p_70)) , &g_81)) != (void*)0);
                }
                for (l_130.f2 = (-7); (l_130.f2 <= 21); l_130.f2 = safe_add_func_int8_t_s_s(l_130.f2, 7))
                {
                    return g_160;
                }
            }
        }
        return l_121[0][2][3];
    }
    for (g_160.f2 = 0; (g_160.f2 != 8); ++g_160.f2)
    {
        int32_t **l_163 = (void*)0;
        (*g_164) = &g_81;
    }
    return g_160;
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
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f3, "g_144.f3", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_209[i], "g_209[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_211[i][j], "g_211[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_264.f1, "g_264.f1", print_hash_value);
    transparent_crc(g_264.f3, "g_264.f3", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_308.f0, "g_308.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_412[i].f0, "g_412[i].f0", print_hash_value);
        transparent_crc(g_412[i].f1, "g_412[i].f1", print_hash_value);
        transparent_crc(g_412[i].f2, "g_412[i].f2", print_hash_value);
        transparent_crc(g_412[i].f3, "g_412[i].f3", print_hash_value);
        transparent_crc(g_412[i].f4, "g_412[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_449.f0, "g_449.f0", print_hash_value);
    transparent_crc(g_449.f1, "g_449.f1", print_hash_value);
    transparent_crc(g_449.f2, "g_449.f2", print_hash_value);
    transparent_crc(g_449.f3, "g_449.f3", print_hash_value);
    transparent_crc(g_449.f4, "g_449.f4", print_hash_value);
    transparent_crc(g_462.f0, "g_462.f0", print_hash_value);
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_470.f3, "g_470.f3", print_hash_value);
    transparent_crc(g_470.f4, "g_470.f4", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_473.f4, "g_473.f4", print_hash_value);
    transparent_crc(g_474.f2, "g_474.f2", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_483.f0, "g_483.f0", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_498.f0, "g_498.f0", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_588[i], "g_588[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_609, "g_609", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_629[i][j].f0, "g_629[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_705, "g_705", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_744[i][j], "g_744[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_825[i].f0, "g_825[i].f0", print_hash_value);
        transparent_crc(g_825[i].f1, "g_825[i].f1", print_hash_value);
        transparent_crc(g_825[i].f2, "g_825[i].f2", print_hash_value);
        transparent_crc(g_825[i].f3, "g_825[i].f3", print_hash_value);
        transparent_crc(g_825[i].f4, "g_825[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_826.f0, "g_826.f0", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_856[i][j][k], "g_856[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_882.f0, "g_882.f0", print_hash_value);
    transparent_crc(g_882.f1, "g_882.f1", print_hash_value);
    transparent_crc(g_882.f2, "g_882.f2", print_hash_value);
    transparent_crc(g_882.f3, "g_882.f3", print_hash_value);
    transparent_crc(g_882.f4, "g_882.f4", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_926.f2, "g_926.f2", print_hash_value);
    transparent_crc(g_926.f4, "g_926.f4", print_hash_value);
    transparent_crc(g_991.f0, "g_991.f0", print_hash_value);
    transparent_crc(g_991.f1, "g_991.f1", print_hash_value);
    transparent_crc(g_991.f2, "g_991.f2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_996[i].f0, "g_996[i].f0", print_hash_value);
        transparent_crc(g_996[i].f1, "g_996[i].f1", print_hash_value);
        transparent_crc(g_996[i].f2, "g_996[i].f2", print_hash_value);
        transparent_crc(g_996[i].f3, "g_996[i].f3", print_hash_value);
        transparent_crc(g_996[i].f4, "g_996[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1019[i].f0, "g_1019[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1026[i][j].f0, "g_1026[i][j].f0", print_hash_value);
            transparent_crc(g_1026[i][j].f1, "g_1026[i][j].f1", print_hash_value);
            transparent_crc(g_1026[i][j].f2, "g_1026[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1027.f0, "g_1027.f0", print_hash_value);
    transparent_crc(g_1027.f1, "g_1027.f1", print_hash_value);
    transparent_crc(g_1027.f2, "g_1027.f2", print_hash_value);
    transparent_crc(g_1027.f3, "g_1027.f3", print_hash_value);
    transparent_crc(g_1027.f4, "g_1027.f4", print_hash_value);
    transparent_crc(g_1140.f2, "g_1140.f2", print_hash_value);
    transparent_crc(g_1140.f4, "g_1140.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1151[i][j][k].f0, "g_1151[i][j][k].f0", print_hash_value);
                transparent_crc(g_1151[i][j][k].f1, "g_1151[i][j][k].f1", print_hash_value);
                transparent_crc(g_1151[i][j][k].f2, "g_1151[i][j][k].f2", print_hash_value);
                transparent_crc(g_1151[i][j][k].f3, "g_1151[i][j][k].f3", print_hash_value);
                transparent_crc(g_1151[i][j][k].f4, "g_1151[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1156, "g_1156", print_hash_value);
    transparent_crc(g_1385.f0, "g_1385.f0", print_hash_value);
    transparent_crc(g_1385.f1, "g_1385.f1", print_hash_value);
    transparent_crc(g_1385.f2, "g_1385.f2", print_hash_value);
    transparent_crc(g_1385.f3, "g_1385.f3", print_hash_value);
    transparent_crc(g_1385.f4, "g_1385.f4", print_hash_value);
    transparent_crc(g_1392, "g_1392", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
