# 1 "9.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "9.c"
# 10 "9.c"
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
# 11 "9.c" 2


static long __undefined;


struct S0 {
   unsigned f0 : 16;
   signed f1 : 5;
   const int8_t f2;
};


static int32_t g_4 = 0L;
static int16_t g_10 = 9L;
static volatile uint32_t g_11 = 5UL;
static int16_t g_25 = 0xF9A8L;
static uint32_t g_28[7][4][9] = {{{0UL,0UL,0xBC906383L,18446744073709551611UL,18446744073709551611UL,0xBC906383L,0UL,0UL,18446744073709551613UL},{0x3B91359AL,18446744073709551608UL,0UL,2UL,0UL,18446744073709551608UL,0x3B91359AL,2UL,0x3B91359AL},{0UL,0UL,0UL,0UL,0UL,0UL,0xBC906383L,0UL,18446744073709551613UL},{0xC23988F1L,0xA32987C8L,0UL,0xA32987C8L,0xC23988F1L,2UL,0UL,2UL,0xC23988F1L}},{{18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,18446744073709551613UL,0UL,0xBC906383L,0UL,0UL},{0UL,2UL,0UL,18446744073709551608UL,0x3B91359AL,2UL,0x3B91359AL,18446744073709551608UL,0UL},{0UL,0UL,0UL,18446744073709551615UL,18446744073709551613UL,0UL,0UL,0xBC906383L,18446744073709551611UL},{0xC23988F1L,0x79BDD86BL,0UL,18446744073709551608UL,0xC23988F1L,18446744073709551608UL,0UL,0x79BDD86BL,0xC23988F1L}},{{18446744073709551613UL,0UL,0UL,18446744073709551611UL,0UL,0xBC906383L,18446744073709551615UL,0UL,0UL},{0x3B91359AL,0x79BDD86BL,0UL,0xA32987C8L,0UL,0x79BDD86BL,0x3B91359AL,0xA32987C8L,0x3B91359AL},{18446744073709551613UL,0UL,18446744073709551615UL,0UL,18446744073709551611UL,0UL,0UL,0UL,0UL},{0xC23988F1L,2UL,0UL,2UL,0xC23988F1L,0xA32987C8L,0UL,0xA32987C8L,0xC23988F1L}},{{0UL,18446744073709551615UL,0UL,18446744073709551611UL,0UL,0UL,0UL,0UL,18446744073709551611UL},{0UL,0xA32987C8L,0UL,0x79BDD86BL,0x3B91359AL,0xA32987C8L,0x3B91359AL,0x79BDD86BL,0UL},{18446744073709551611UL,0UL,0xBC906383L,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0xBC906383L,0UL},{0xC23988F1L,18446744073709551608UL,0UL,0x79BDD86BL,0xC23988F1L,0x79BDD86BL,0UL,18446744073709551608UL,0xC23988F1L}},{{0UL,0UL,0xBC906383L,18446744073709551611UL,18446744073709551611UL,0xBC906383L,0UL,0UL,18446744073709551613UL},{0x3B91359AL,18446744073709551608UL,0UL,2UL,0UL,18446744073709551608UL,0x3B91359AL,2UL,0x3B91359AL},{0UL,0UL,0UL,0UL,0UL,0UL,0xBC906383L,0UL,18446744073709551613UL},{0xC23988F1L,0xA32987C8L,0UL,0xA32987C8L,0xC23988F1L,2UL,0UL,2UL,0xC23988F1L}},{{18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,18446744073709551613UL,0UL,0xBC906383L,0UL,0UL},{0UL,2UL,0UL,18446744073709551608UL,0x3B91359AL,2UL,0x3B91359AL,18446744073709551608UL,0UL},{0UL,0UL,0UL,18446744073709551615UL,18446744073709551613UL,0UL,0UL,0xBC906383L,18446744073709551611UL},{0xC23988F1L,0x79BDD86BL,0UL,18446744073709551608UL,0xC23988F1L,18446744073709551608UL,0UL,0x79BDD86BL,0xC23988F1L}},{{18446744073709551613UL,0UL,0UL,18446744073709551611UL,0UL,0xBC906383L,18446744073709551615UL,0UL,0UL},{0x3B91359AL,0x79BDD86BL,0UL,0xA32987C8L,0UL,0x79BDD86BL,0x3B91359AL,0xA32987C8L,0x3B91359AL},{18446744073709551613UL,0UL,18446744073709551615UL,0UL,18446744073709551611UL,0UL,0UL,0UL,0UL},{0xC23988F1L,2UL,0UL,2UL,0xC23988F1L,0xA32987C8L,0UL,0xA32987C8L,0xC23988F1L}}};
static int32_t *g_35 = &g_4;
static int32_t ** volatile g_34 = &g_35;
static volatile int32_t g_52[7] = {0x86CB52F5L,0x4EE8E20EL,0x86CB52F5L,0x86CB52F5L,0x4EE8E20EL,0x86CB52F5L,0x86CB52F5L};
static int32_t g_53 = (-1L);
static int32_t g_54 = 1L;
static int64_t g_55 = 0xA5FF0F9AB13FD1FALL;
static int32_t g_57 = 0L;
static struct S0 g_109 = {199,0,0x08L};
static uint8_t g_159[4][8][4] = {{{255UL,0x2AL,0x8EL,0xF7L},{0x2AL,246UL,255UL,0UL},{0xF8L,0x9BL,0xB6L,0x66L},{0x1AL,0UL,0x16L,6UL},{1UL,0x01L,255UL,0UL},{0xB6L,255UL,0x37L,0xFFL},{0x9BL,0x30L,0x16L,0xDFL},{255UL,0xE2L,0xE2L,255UL}},{{0xF8L,0x1AL,0x01L,0x40L},{0x30L,0x9BL,0x8EL,0x79L},{0xF7L,0x0DL,6UL,0x79L},{255UL,0x9BL,255UL,0x40L},{0UL,0x1AL,0xA8L,255UL},{1UL,0xE2L,0x66L,0xDFL},{1UL,0x30L,0xF8L,0xFFL},{0x2AL,255UL,1UL,0UL}},{{0x30L,0x01L,0xE2L,6UL},{1UL,0UL,0UL,0x66L},{0UL,8UL,9UL,0x30L},{0x30L,0x5FL,0x66L,0UL},{255UL,255UL,0x0DL,0UL},{0x66L,0xF7L,255UL,255UL},{0xF7L,0x5FL,0xB3L,0x2AL},{0xFFL,0xDFL,0xFFL,0x0DL}},{{0UL,253UL,1UL,0UL},{0xDFL,0x37L,6UL,253UL},{0xB6L,0x66L,6UL,5UL},{0xDFL,255UL,1UL,6UL},{0UL,1UL,0xFFL,0UL},{0xFFL,0UL,0xB3L,0xE2L},{0xF7L,9UL,255UL,0UL},{0x66L,0xF8L,0x0DL,0UL}}};
static uint32_t g_164 = 0x66E8CD0CL;
static uint16_t g_166[3][8][10] = {{{0x8BFFL,1UL,0x2C8BL,0xA8E6L,0x1295L,1UL,65535UL,0UL,1UL,65531UL},{65535UL,65535UL,65535UL,1UL,1UL,0x8927L,2UL,65531UL,65531UL,2UL},{1UL,65535UL,0x56BCL,0x56BCL,65535UL,1UL,65527UL,65535UL,0UL,65535UL},{65527UL,9UL,1UL,0x2C8BL,1UL,0UL,6UL,0UL,9UL,0x8E17L},{0x29F0L,0x56BCL,9UL,0x5EDCL,65532UL,1UL,1UL,0x8E17L,0UL,0xB85DL},{1UL,1UL,0x8E17L,0UL,0xB85DL,0x5CE4L,1UL,0UL,0UL,0UL},{0UL,65535UL,0x9915L,0xB5C5L,0xA8E6L,65532UL,0x56BCL,1UL,0x300FL,65531UL},{65530UL,65535UL,65535UL,0x6ACBL,0x5EDCL,0x6ACBL,65535UL,65535UL,65530UL,9UL}},{{0UL,65535UL,0x5EDCL,0x300FL,65530UL,65527UL,6UL,0x9915L,1UL,1UL},{0x56BCL,5UL,0x2AB0L,0x300FL,1UL,0x8E17L,65535UL,0xB5C5L,65530UL,0UL},{0x3DAEL,0x9915L,65527UL,0x6ACBL,0xBD8DL,2UL,1UL,0UL,0x300FL,1UL},{0x2AB0L,0UL,0UL,0xB5C5L,5UL,65530UL,65531UL,0x2C8BL,0UL,1UL},{65535UL,1UL,0xBD8DL,0UL,1UL,1UL,1UL,1UL,0UL,0xBD8DL},{0x8E17L,0x8E17L,0x275CL,0x5EDCL,65531UL,1UL,0xA8E6L,0x2AB0L,65535UL,1UL},{0x8E17L,65535UL,65530UL,0xBD8DL,1UL,1UL,0xA8E6L,0x5EDCL,0UL,1UL},{0UL,0x6ACBL,0UL,0x8E17L,1UL,65535UL,9UL,65535UL,1UL,1UL}},{{0x56BCL,0UL,0UL,0UL,1UL,1UL,0x1295L,0x9915L,1UL,0xC1DAL},{0x2AB0L,0xBD8DL,1UL,1UL,0xB85DL,0x2C8BL,65535UL,0x8E17L,65535UL,0x2C8BL},{0x8927L,65535UL,2UL,65535UL,0x8927L,65535UL,0UL,9UL,0x8BFFL,65535UL},{5UL,65535UL,0x8BFFL,0x9915L,0x56BCL,0xBD8DL,0x8E17L,0x1295L,0UL,65535UL},{1UL,0x9915L,1UL,0xB5C5L,0x8927L,0x5CE4L,1UL,6UL,1UL,0x2C8BL},{0xB5C5L,65530UL,0UL,0UL,0xB85DL,1UL,65532UL,2UL,0x275CL,0xC1DAL},{6UL,0UL,1UL,0x2C8BL,1UL,9UL,65527UL,0UL,1UL,1UL},{0x3DAEL,0x2C8BL,0x8E17L,0UL,0UL,0x8E17L,0x2C8BL,65535UL,0x8927L,65532UL}}};
static int32_t *g_171 = &g_54;
static struct S0 *g_184 = (void*)0;
static struct S0 ** volatile g_183 = &g_184;
static struct S0 g_189 = {139,4,1L};
static int8_t g_198 = 0x60L;
static int32_t g_211 = 0x95090B88L;
static const volatile uint64_t g_219 = 0x5E8067396CAC7BB5LL;
static const volatile uint64_t * const g_218[5] = {&g_219,&g_219,&g_219,&g_219,&g_219};
static const uint64_t g_272 = 18446744073709551611UL;
static const uint64_t *g_271 = &g_272;
static const uint64_t **g_270[7][4][4] = {{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}},{{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}}};
static int64_t g_277 = 0x0BD3261207DE155ALL;
static int32_t ** volatile g_297 = &g_171;
static struct S0 ** volatile g_299 = &g_184;
static int16_t g_318 = 0xB1FBL;
static int32_t g_322 = 0L;
static int32_t * volatile g_352 = &g_322;
static const int32_t *g_354 = &g_53;
static const int32_t * const *g_353[3][5][1] = {{{&g_354},{&g_354},{&g_354},{&g_354},{&g_354}},{{&g_354},{&g_354},{&g_354},{&g_354},{&g_354}},{{&g_354},{&g_354},{&g_354},{&g_354},{&g_354}}};
static const int32_t g_359 = 0x54F028AAL;
static int32_t * volatile g_363[9] = {&g_54,&g_322,&g_54,&g_322,&g_54,&g_322,&g_54,&g_322,&g_54};
static const int32_t ** volatile g_366 = (void*)0;
static const int32_t *g_368 = &g_4;
static const int32_t ** const volatile g_367 = &g_368;
static uint64_t g_416 = 2UL;
static uint64_t *g_415 = &g_416;
static uint64_t **g_414 = &g_415;
static uint64_t **g_419 = &g_415;
static const int32_t ** volatile g_427 = &g_368;
static struct S0 g_450 = {28,3,1L};
static uint16_t g_452 = 65535UL;
static const int32_t ** volatile g_476 = &g_368;
static volatile uint8_t g_485 = 0x34L;
static const int32_t ** volatile g_493 = (void*)0;
static uint16_t g_526 = 0x1F79L;
static int64_t g_533 = 5L;
static int32_t * volatile g_541 = &g_322;
static volatile int32_t g_626 = 2L;
static volatile int32_t *g_625 = &g_626;
static volatile int32_t * volatile *g_624 = &g_625;
static volatile int32_t * volatile *g_628 = &g_625;
static volatile int32_t * volatile ** volatile g_627 = &g_628;
static int64_t *g_652 = &g_277;
static int64_t **g_651 = &g_652;
static int64_t ***g_650 = &g_651;
static int64_t ****g_649 = &g_650;
static int64_t ****g_654 = &g_650;
static int16_t *g_690 = &g_25;
static int16_t * volatile *g_689 = &g_690;
static struct S0 ** volatile g_707 = &g_184;
static uint8_t g_737 = 0x50L;
static int16_t g_740 = 1L;
static int8_t g_742 = (-10L);
static int8_t g_744 = 0xBCL;
static volatile uint32_t g_749 = 1UL;
static uint8_t *** volatile g_782 = (void*)0;
static uint8_t *g_785[1] = {(void*)0};
static uint8_t **g_784[1] = {&g_785[0]};
static uint8_t *** volatile g_783 = &g_784[0];
static int32_t g_846 = 0L;
static uint32_t g_868 = 0xDF53B593L;
static uint32_t g_900 = 0x87647DC5L;
static struct S0 **g_920 = &g_184;
static struct S0 **g_921 = &g_184;
static uint32_t *g_930 = (void*)0;
static uint32_t **g_929 = &g_930;
static int32_t g_935 = 0x282D07EBL;
static int32_t * const g_934[1][3] = {{&g_935,&g_935,&g_935}};
static int32_t * const *g_933[2] = {&g_934[0][0],&g_934[0][0]};
static uint32_t g_988 = 0xF107DD52L;
static const int32_t g_1110 = 0x01380860L;
static int8_t g_1133[7] = {0L,0L,0x76L,0L,0L,0x76L,0L};
static uint64_t g_1139 = 18446744073709551612UL;
static volatile uint16_t g_1213 = 0x85E1L;
static uint32_t g_1249[3] = {1UL,1UL,1UL};
static uint32_t g_1267 = 1UL;
static int32_t ** volatile g_1277 = (void*)0;
static int32_t * const * const *g_1291 = &g_933[1];
static int32_t * const * const **g_1290 = &g_1291;
static int32_t ****g_1295 = (void*)0;
static int32_t g_1372 = 0xE09AC927L;
static volatile int16_t g_1389 = (-5L);
static uint16_t g_1423 = 0x2C0EL;
static volatile uint64_t g_1424 = 0UL;
static volatile int32_t g_1442 = 0x83D8161EL;
static uint8_t g_1464 = 255UL;
static uint32_t g_1505 = 0x0C1E2FB0L;
static int8_t *g_1512 = &g_1133[3];
static int8_t * volatile * volatile g_1511 = &g_1512;
static const int8_t *g_1644 = (void*)0;
static const int8_t **g_1643[8][9][3] = {{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}},{{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644},{&g_1644,&g_1644,&g_1644}}};
static int32_t g_1722 = (-9L);
static int32_t g_1723 = (-10L);
static int32_t g_1724 = 0x8F1FC704L;
static int32_t g_1725 = 0x4EB65092L;
static int32_t g_1726[9] = {0xC1CA5095L,0xA0ACE2E0L,0xA0ACE2E0L,0xC1CA5095L,0xA0ACE2E0L,0xA0ACE2E0L,0xC1CA5095L,0xA0ACE2E0L,0xA0ACE2E0L};
static int32_t g_1727 = 0L;
static int32_t g_1728 = 3L;
static const volatile uint16_t *g_1773 = (void*)0;
static const volatile uint16_t **g_1772 = &g_1773;
static int32_t **g_1867 = (void*)0;
static int32_t ***g_1866 = &g_1867;
static int32_t *g_1904 = &g_211;
static int32_t **g_1903 = &g_1904;
static int32_t g_1924[3] = {0x2FE61CFFL,0x2FE61CFFL,0x2FE61CFFL};
static volatile uint8_t g_1925[10] = {0UL,253UL,0UL,253UL,0UL,253UL,0UL,253UL,0UL,253UL};
static volatile int64_t g_1982 = (-6L);
static volatile int8_t g_2071 = 0x8DL;
static volatile int32_t g_2309 = 0x2A05044EL;
static int32_t ** volatile g_2391[5][1][5] = {{{&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171}}};
static int32_t ** volatile g_2392 = &g_35;
static int32_t ** volatile g_2394 = &g_171;
static int32_t *g_2424[3] = {&g_1722,&g_1722,&g_1722};
static uint16_t g_2444 = 0UL;
static struct S0 g_2481[2] = {{128,-4,1L},{128,-4,1L}};
static const uint8_t *g_2520[4] = {&g_1464,&g_1464,&g_1464,&g_1464};
static const uint8_t **g_2519 = &g_2520[1];
static const uint8_t ***g_2518 = &g_2519;
static volatile int8_t g_2569 = 0x83L;
static volatile int16_t g_2621 = 0x94F1L;
static int32_t *** volatile g_2666 = &g_1903;
static volatile uint8_t g_2671 = 0x10L;
static volatile int64_t g_2692[9][3][8] = {{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)},{(-7L),9L,9L,(-7L),9L,9L,(-7L),9L}},{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)},{(-7L),9L,9L,(-7L),9L,9L,(-7L),9L}},{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)},{(-7L),9L,9L,(-7L),9L,9L,(-7L),9L}},{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)},{(-7L),9L,9L,(-7L),9L,9L,(-7L),9L}},{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)},{(-7L),9L,9L,(-7L),9L,9L,(-7L),9L}},{{(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L),0x01E06412DC1AB3D5LL,(-7L),(-7L)},{9L,(-7L),9L,9L,(-7L),0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L},{9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL}},{{9L,9L,(-7L),9L,9L,(-7L),9L,9L},{0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L},{9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL}},{{9L,9L,(-7L),9L,9L,(-7L),9L,9L},{0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L},{9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL}},{{9L,9L,(-7L),9L,9L,(-7L),9L,9L},{0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L},{9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL,0x01E06412DC1AB3D5LL,9L,0x01E06412DC1AB3D5LL}}};
static int16_t g_2725 = (-1L);
static uint8_t ****g_2758[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static const int32_t * const *g_2760 = &g_368;
static struct S0 ***g_2804 = &g_920;
static const uint32_t g_2844 = 18446744073709551607UL;
static int32_t ** volatile g_2858[6] = {&g_171,&g_2424[2],&g_171,&g_171,&g_2424[2],&g_171};
static int64_t g_2876 = 0x1E2FD6E81FD77A77LL;
static int32_t g_2895 = 0xF8003CFBL;
static volatile uint64_t g_2903[10] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
static uint16_t g_2925 = 0x235EL;



static int32_t func_1(void);
static int32_t * func_17(int32_t * p_18);
static int32_t * func_40(int16_t p_41, uint64_t p_42, int32_t * p_43, uint32_t p_44);
static int8_t func_46(int32_t ** p_47, uint32_t p_48, const int8_t p_49);
static int32_t ** func_50(uint8_t p_51);
static int32_t func_58(int32_t ** p_59, int64_t p_60, int32_t * p_61, int32_t ** p_62);
static int32_t ** func_63(int16_t p_64, const int32_t * const * p_65, int32_t * p_66, int64_t p_67);
static const int32_t * const * func_69(int64_t p_70, int8_t p_71, struct S0 p_72, struct S0 p_73);
static uint8_t func_77(int32_t * const * p_78, const int64_t p_79, int32_t * p_80, int16_t p_81);
static int32_t func_86(uint16_t p_87, struct S0 p_88, uint16_t p_89, int32_t p_90);
# 193 "9.c"
static int32_t func_1(void)
{
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &g_4;
    int32_t *l_5 = &g_4;
    int32_t *l_6 = &g_4;
    int32_t *l_7 = &g_4;
    int32_t *l_8 = &g_4;
    int32_t *l_9[7] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
    int32_t **l_2556 = &l_2;
    int32_t *l_2557 = (void*)0;
    int32_t l_2575 = 0xBB3A1DDCL;
    uint32_t l_2605[4];
    int16_t l_2637 = 0x8930L;
    uint16_t l_2645 = 0x5ABCL;
    uint16_t * const *l_2646 = (void*)0;
    int16_t l_2648 = 0xD205L;
    int16_t l_2649 = 0x88BFL;
    int16_t l_2652 = 0L;
    int8_t l_2654 = 0x4AL;
    int32_t **l_2665 = &g_1904;
    struct S0 l_2681 = {5,4,0x22L};
    uint16_t l_2688 = 0x404FL;
    int32_t l_2721 = 0xB11A8CFDL;
    uint32_t l_2749 = 1UL;
    uint8_t ****l_2759[1][7];
    const int32_t *l_2829[5] = {&g_1722,&g_1722,&g_1722,&g_1722,&g_1722};
    int32_t l_2830 = 0xFA148861L;
    int32_t l_2852 = 0x53217FD1L;
    int32_t *l_2877 = &g_1372;
    uint16_t l_2924 = 1UL;
    int16_t l_2946 = (-10L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_2605[i] = 6UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_2759[i][j] = (void*)0;
    }
    ++g_11;
    if ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((((*l_2556) = func_17(&g_4)) != (l_2557 = l_9[0])))), 4)))
    {
        int16_t l_2572 = 0x20F6L;
        int32_t l_2576 = 0x4A9E5EDCL;
        int32_t l_2577 = (-4L);
        int32_t l_2585 = 0x14A6A1F8L;
        int32_t l_2586 = (-1L);
        int32_t l_2587[9] = {2L,2L,2L,2L,2L,2L,2L,2L,2L};
        uint32_t l_2595[5][8] = {{0x8C82CEDDL,8UL,0UL,0UL,8UL,0x8C82CEDDL,8UL,0UL},{0x5DB9BDD2L,8UL,0x5DB9BDD2L,0x8C82CEDDL,0x8C82CEDDL,0x5DB9BDD2L,8UL,0x5DB9BDD2L},{18446744073709551614UL,0x8C82CEDDL,0UL,0x8C82CEDDL,18446744073709551614UL,18446744073709551614UL,0x8C82CEDDL,0UL},{18446744073709551614UL,18446744073709551614UL,0x8C82CEDDL,0UL,0x8C82CEDDL,18446744073709551614UL,18446744073709551614UL,0x8C82CEDDL},{0x5DB9BDD2L,0x8C82CEDDL,0x8C82CEDDL,0x5DB9BDD2L,8UL,0x5DB9BDD2L,0x8C82CEDDL,0x8C82CEDDL}};
        int8_t l_2598[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int i, j;
        for (g_526 = (-4); (g_526 == 29); g_526 = safe_add_func_uint64_t_u_u(g_526, 7))
        {
            uint8_t l_2571 = 1UL;
            int32_t l_2590 = 1L;
            int32_t l_2591 = (-1L);
            for (g_1723 = 0; (g_1723 <= 0); g_1723 += 1)
            {
                uint8_t l_2573[7][6][4] = {{{0xD6L,255UL,0xD6L,0xBAL},{0xB4L,0xBAL,0xBAL,0xB4L},{255UL,0xBAL,0xD6L,0xBAL},{0xBAL,0x3EL,0xD6L,0xD6L},{255UL,255UL,0xBAL,0xD6L},{0xB4L,0x3EL,0xB4L,0xBAL}},{{0xB4L,0xBAL,0xBAL,0xB4L},{255UL,0xBAL,0xD6L,0xBAL},{0xBAL,0x3EL,0xD6L,0xD6L},{255UL,255UL,0xBAL,0xD6L},{0xB4L,0x3EL,0xB4L,0xBAL},{0xB4L,0xBAL,0xBAL,0xB4L}},{{255UL,0xBAL,0xD6L,0xBAL},{0xBAL,0x3EL,0xD6L,0xD6L},{255UL,255UL,0xBAL,0xD6L},{0xB4L,0x3EL,0xB4L,0xBAL},{0xB4L,0xBAL,0xBAL,0xB4L},{255UL,0xBAL,0xD6L,0xBAL}},{{0xBAL,0x3EL,0xD6L,0xD6L},{255UL,255UL,0xBAL,0xD6L},{0xB4L,0x3EL,0xB4L,0xBAL},{0xB4L,0xBAL,0xBAL,0xB4L},{255UL,0xBAL,0xD6L,0xBAL},{0xBAL,0x3EL,0xD6L,0xD6L}},{{255UL,255UL,0xD6L,255UL},{0x3EL,0xBAL,0x3EL,0xD6L},{0x3EL,0xD6L,0xD6L,0x3EL},{0xB4L,0xD6L,255UL,0xD6L},{0xD6L,0xBAL,255UL,255UL},{0xB4L,0xB4L,0xD6L,255UL}},{{0x3EL,0xBAL,0x3EL,0xD6L},{0x3EL,0xD6L,0xD6L,0x3EL},{0xB4L,0xD6L,255UL,0xD6L},{0xD6L,0xBAL,255UL,255UL},{0xB4L,0xB4L,0xD6L,255UL},{0x3EL,0xBAL,0x3EL,0xD6L}},{{0x3EL,0xD6L,0xD6L,0x3EL},{0xB4L,0xD6L,255UL,0xD6L},{0xD6L,0xBAL,255UL,255UL},{0xB4L,0xB4L,0xD6L,255UL},{0x3EL,0xBAL,0x3EL,0xD6L},{0x3EL,0xD6L,0xD6L,0x3EL}}};
                int32_t l_2574 = (-8L);
                int32_t l_2579 = 0L;
                int32_t l_2580 = (-1L);
                int32_t l_2582 = 0x58C8B1C9L;
                int32_t l_2592 = 0x5870076CL;
                int32_t l_2594[7] = {0x8D4CB77AL,0x8D4CB77AL,0x8D4CB77AL,0x8D4CB77AL,0x8D4CB77AL,0x8D4CB77AL,0x8D4CB77AL};
                int i, j, k;
                l_2574 = ((****g_1290) == (((safe_div_func_int32_t_s_s((l_2573[6][5][1] = (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(4L)), (((((**g_689) = (safe_mod_func_int32_t_s_s(0x0C0B2188L, (safe_rshift_func_int8_t_s_s((g_2569 == (**g_419)), ((*l_2557) = (safe_unary_minus_func_int32_t_s(l_2571)))))))) < l_2572) >= 18446744073709551615UL) && (*l_2557))))), 0xF0B5EB35L)) >= (*g_271)) , l_2572));
                for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                {
                    int32_t l_2578 = 1L;
                    int8_t l_2581 = 0L;
                    int32_t l_2583 = 1L;
                    int32_t l_2584 = 8L;
                    int32_t l_2588 = 0xA748C7CFL;
                    int32_t l_2589 = 0xD659675EL;
                    int32_t l_2593 = 0x76D09D18L;
                    int i, j, k;
                    (*l_8) = g_159[g_1723][(g_1723 + 4)][g_53];
                    l_2595[0][3]--;
                    if ((*g_354))
                    {
                        l_2598[4] &= ((*l_6) = ((****g_1290) = l_2573[6][5][1]));
                        (***g_1291) |= ((**g_651) <= 0x5345C23D96603A82LL);
                        l_2591 = (***g_1291);
                    }
                    else
                    {
                        return l_2573[6][5][1];
                    }
                    for (g_25 = 0; (g_25 <= 2); g_25 += 1)
                    {
                        int i;
                        (*l_2556) = g_2424[g_1723];

                        ((l_2 == &g_1722) ? (void) (0) : __assert_fail ("l_2 == &g_1722", "9.c", 288, __PRETTY_FUNCTION__));
                        (*l_2557) |= 1L;
                    }
                    for (g_868 = 0; (g_868 <= 0); g_868 += 1)
                    {
                        return l_2579;
                    }
                }
                for (g_744 = 0; (g_744 <= 0); g_744 += 1)
                {
                    (*l_2556) = (void*)0;

                    ((l_2 == 0) ? (void) (0) : __assert_fail ("l_2 == 0", "9.c", 300, __PRETTY_FUNCTION__));
                }
            }
        }

        ((l_2 == 0 || l_2 == &g_1722 || l_2 == &g_4 || l_2 == &g_54) ? (void) (0) : __assert_fail ("l_2 == 0 || l_2 == &g_1722 || l_2 == &g_4 || l_2 == &g_54", "9.c", 305, __PRETTY_FUNCTION__));
    }
    else
    {
        uint8_t l_2599 = 0x93L;
        (*l_5) |= l_2599;
        for (g_900 = 21; (g_900 > 20); g_900 = safe_sub_func_int32_t_s_s(g_900, 5))
        {
            return (**g_628);
        }
    }

    ((l_2 == 0 || l_2 == &g_1722 || l_2 == &g_4 || l_2 == &g_54) ? (void) (0) : __assert_fail ("l_2 == 0 || l_2 == &g_1722 || l_2 == &g_4 || l_2 == &g_54", "9.c", 317, __PRETTY_FUNCTION__));



    ((l_2557 == &g_4) ? (void) (0) : __assert_fail ("l_2557 == &g_4", "9.c", 321, __PRETTY_FUNCTION__));
    for (g_2444 = 0; (g_2444 <= 1); g_2444 += 1)
    {
        int16_t l_2608[2];
        int32_t l_2611[9][10][2] = {{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}},{{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)},{0x4D4FD862L,(-5L)},{0x536E23A1L,(-5L)}}};
        uint8_t l_2625[2];
        int32_t l_2640 = 0x200321B2L;
        int64_t l_2641[6][4];
        int16_t l_2644 = 0xC198L;
        uint16_t l_2662 = 4UL;
        int16_t l_2684[4] = {0xBB6FL,0xBB6FL,0xBB6FL,0xBB6FL};
        uint32_t l_2689[2][8] = {{18446744073709551614UL,18446744073709551607UL,18446744073709551607UL,18446744073709551614UL,18446744073709551615UL,18446744073709551614UL,18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL}};
        struct S0 l_2694 = {203,0,0xE9L};
        int16_t l_2699 = (-1L);
        int8_t l_2704 = 0xCAL;
        int8_t l_2705[9][2][8] = {{{0xEEL,0x42L,0x82L,0x71L,0x44L,0x82L,0x80L,0x02L},{0x2BL,0x2BL,0xBEL,(-1L),1L,0x35L,(-2L),0L}},{{0x54L,(-10L),(-1L),(-8L),(-1L),(-10L),0x54L,0L},{0L,0xC3L,0x86L,0x59L,3L,0x44L,0xC3L,0x2BL}},{{0L,3L,0x82L,0xBEL,3L,(-1L),0xE4L,(-8L)},{0L,0xE4L,1L,0x2BL,(-1L),0x7BL,0x0BL,1L}},{{0x54L,7L,0xEEL,0xC3L,1L,0x18L,0x2BL,0x6FL},{0x35L,(-2L),0L,0xBEL,0xC3L,(-10L),(-10L),0xC3L}},{{1L,(-2L),(-2L),1L,4L,1L,0xC3L,0L},{0xC3L,0x0BL,0xEEL,0L,0x6CL,0x86L,3L,(-8L)}},{{1L,0x0BL,0x7BL,(-1L),0x2BL,1L,0xE4L,0L},{0x54L,(-2L),0xBEL,7L,0xD9L,(-10L),7L,0x82L}},{{1L,(-2L),0x86L,(-8L),7L,0x18L,(-2L),0x2BL},{1L,0L,0x82L,0xE4L,0x2BL,0xE4L,0x82L,0L}},{{0x6FL,0L,0xD9L,(-2L),(-2L),0x82L,0xC3L,0xD9L},{0x0BL,0x2BL,1L,(-8L),0x6FL,1L,0xC3L,3L}},{{0x7BL,(-8L),0xD9L,0x82L,0x59L,1L,0x82L,0x54L},{0x59L,1L,0x82L,0x54L,0x82L,0x7BL,0x59L,0xBEL}}};
        uint32_t l_2707 = 0xC492E02EL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2608[i] = 1L;
        for (i = 0; i < 2; i++)
            l_2625[i] = 0xE8L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 4; j++)
                l_2641[i][j] = 0xA680B75BB9EE5C84LL;
        }
        for (g_164 = 0; (g_164 <= 2); g_164 += 1)
        {
            int64_t l_2602 = (-1L);
            int16_t l_2616[3][1][9] = {{{(-6L),0xE6C0L,0xE6C0L,(-6L),1L,1L,1L,(-6L),0xE6C0L}},{{1L,1L,0xBE64L,1L,1L,1L,0xBE64L,1L,1L}},{{0xE6C0L,(-6L),1L,1L,1L,(-6L),0xE6C0L,0xE6C0L,(-6L)}}};
            uint32_t l_2617 = 18446744073709551613UL;
            int32_t l_2622 = 0L;
            int32_t l_2624 = (-7L);
            int64_t l_2690 = 0x40CCAD6EE3501E7CLL;
            uint64_t l_2696[2];
            int32_t l_2703[2];
            int32_t l_2706 = 0xED5DD142L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2696[i] = 0x09AAD69F7C933316LL;
            for (i = 0; i < 2; i++)
                l_2703[i] = (-1L);
        }
        for (g_1727 = 1; (g_1727 >= 0); g_1727 -= 1)
        {
            int32_t l_2712 = 0L;
            uint8_t *l_2719 = &l_2625[1];
            int i;
            l_2694.f1 = (safe_rshift_func_uint16_t_u_s(((l_2712 , ((safe_rshift_func_int16_t_s_s((((****g_649) = l_2705[2][0][2]) < (safe_mod_func_int8_t_s_s(0x5DL, (safe_mul_func_int16_t_s_s((((g_2444 , (!(*l_2557))) > (l_2719 != (**g_2518))) , l_2611[6][2][0]), (0x3E641E715E7A4B88LL >= 0xB6F7C837F71C8953LL)))))), (*g_690))) ^ l_2712)) != (*g_541)), (**g_689)));
        }
    }
    for (g_1423 = 0; (g_1423 <= 3); g_1423 += 1)
    {
        int32_t l_2724 = 0x45DAF74CL;
        struct S0 l_2726 = {117,-1,-1L};
        const int32_t * const *l_2764 = &g_368;
        uint32_t l_2795 = 0x6B71B8B7L;
        int32_t **l_2813 = &g_171;
        uint8_t l_2822[7] = {0xBCL,0xBCL,2UL,0xBCL,0xBCL,2UL,0xBCL};
        const int32_t **l_2825 = &g_354;
        const int32_t **l_2826 = &g_368;
        const int32_t *l_2828 = &g_4;
        const int32_t **l_2827[4][8][8] = {{{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,(void*)0},{&l_2828,&l_2828,&l_2828,(void*)0,(void*)0,&l_2828,&l_2828,&l_2828},{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,(void*)0,(void*)0,(void*)0,&l_2828,&l_2828,&l_2828,(void*)0},{&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,(void*)0,&l_2828},{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828}},{{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,(void*)0,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{(void*)0,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,(void*)0,(void*)0,(void*)0},{&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828}},{{&l_2828,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,(void*)0},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828},{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,(void*)0,(void*)0},{(void*)0,&l_2828,&l_2828,(void*)0,&l_2828,(void*)0,&l_2828,&l_2828},{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,(void*)0,&l_2828},{(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828}},{{&l_2828,&l_2828,&l_2828,(void*)0,&l_2828,(void*)0,&l_2828,&l_2828},{&l_2828,(void*)0,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,(void*)0},{&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828,&l_2828},{&l_2828,(void*)0,&l_2828,&l_2828,(void*)0,&l_2828,&l_2828,&l_2828}}};
        uint32_t l_2836 = 18446744073709551609UL;
        int64_t l_2849[2][8][1] = {{{9L},{(-1L)},{(-1L)},{(-1L)},{9L},{(-1L)},{(-1L)},{(-1L)}},{{9L},{(-1L)},{(-1L)},{(-1L)},{9L},{(-1L)},{(-1L)},{(-1L)}}};
        const uint32_t l_2854 = 0xDD2D9E17L;
        uint32_t l_2860[3][9][2] = {{{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL}},{{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL}},{{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL},{8UL,6UL},{0UL,6UL},{8UL,0UL}}};
        struct S0 l_2875 = {59,3,0x28L};
        uint32_t l_2894[2][7][5] = {{{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL}},{{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L},{0x5BD503CEL,0x8F9FE064L,0x5BD503CEL,0x8F9FE064L,0x5BD503CEL},{0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L,0x35FE3104L}}};
        uint16_t *l_2920 = &l_2645;
        uint16_t **l_2919[5];
        int8_t * const l_2933 = &g_1133[4];
        int8_t l_2940 = 0xDCL;
        int32_t l_2944 = 0xE177FC70L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2919[i] = &l_2920;
    }
    return (***g_627);
}







static int32_t * func_17(int32_t * p_18)
{
    int32_t l_23 = 0L;
    int64_t l_27[5][4] = {{0x2249687FD074DEFCLL,0L,0L,0x2249687FD074DEFCLL},{0L,0x2249687FD074DEFCLL,0L,0xD8720725FC1C5751LL},{0L,0L,0x2249687FD074DEFCLL,0L},{0L,0xD8720725FC1C5751LL,0xD8720725FC1C5751LL,0L},{0xD8720725FC1C5751LL,0L,0xD8720725FC1C5751LL,0xD8720725FC1C5751LL}};
    int32_t *l_1900[4] = {&g_211,&g_211,&g_211,&g_211};
    int32_t **l_1899[1][7][1] = {{{&l_1900[3]},{&l_1900[3]},{&l_1900[3]},{&l_1900[3]},{&l_1900[3]},{&l_1900[3]},{&l_1900[3]}}};
    uint8_t l_1966[9][1];
    int32_t *l_2441 = &g_54;
    int32_t l_2452[7];
    int64_t l_2453 = 0x7EDC80D18D4FF945LL;
    const int32_t * const *l_2484 = (void*)0;
    const struct S0 * const l_2487 = (void*)0;
    uint8_t ***l_2523[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_2527 = 0x34L;
    uint16_t l_2537 = 0xF9A5L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_1966[i][j] = 0x8DL;
    }
    for (i = 0; i < 7; i++)
        l_2452[i] = 0xAB22E038L;
lbl_2477:
    for (g_10 = 24; (g_10 < 0); g_10 = safe_sub_func_uint8_t_u_u(g_10, 2))
    {
        int32_t *l_21 = &g_4;
        int32_t *l_22 = &g_4;
        int32_t *l_24[8] = {&l_23,&l_23,&l_23,&l_23,&l_23,&l_23,&l_23,&l_23};
        int32_t l_26 = 0x80EE91B7L;
        uint16_t *l_1898[5][5][3] = {{{&g_1423,&g_166[0][0][2],(void*)0},{&g_1423,&g_1423,(void*)0},{&g_1423,&g_1423,&g_166[0][0][2]},{&g_166[2][2][3],&g_166[0][0][2],&g_166[1][5][6]},{&g_1423,(void*)0,&g_526}},{{(void*)0,&g_526,&g_526},{&g_166[0][0][2],&g_1423,&g_526},{(void*)0,(void*)0,&g_166[1][5][6]},{&g_166[0][0][2],(void*)0,&g_166[0][0][2]},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_166[0][0][2],(void*)0},{&g_166[0][0][2],&g_166[1][5][6],(void*)0},{(void*)0,&g_526,&g_1423},{&g_166[0][0][2],&g_526,&g_526},{(void*)0,&g_526,(void*)0}},{{&g_1423,&g_166[1][5][6],&g_166[0][0][2]},{&g_166[2][2][3],&g_166[0][0][2],&g_1423},{&g_1423,(void*)0,&g_1423},{&g_1423,(void*)0,&g_166[0][0][2]},{&g_526,(void*)0,&g_526}},{{&g_1423,&g_166[0][0][2],&g_526},{(void*)0,&g_526,&g_166[0][0][2]},{&g_1423,&g_526,(void*)0},{&g_526,&g_166[0][0][2],&g_166[0][0][2]},{&g_166[0][0][2],(void*)0,&g_1423}}};
        uint16_t **l_1897[3][6] = {{&l_1898[2][0][1],&l_1898[2][4][0],&l_1898[2][0][1],&l_1898[2][4][0],&l_1898[2][0][1],&l_1898[2][4][0]},{(void*)0,&l_1898[2][4][0],(void*)0,&l_1898[2][4][0],(void*)0,&l_1898[2][4][0]},{&l_1898[2][0][1],&l_1898[2][4][0],&l_1898[2][0][1],&l_1898[2][4][0],&l_1898[2][0][1],&l_1898[2][4][0]}};
        int32_t **l_1905 = &g_1904;
        uint64_t l_2450 = 0x719B0D282F2EF46DLL;
        uint64_t l_2454[7][8][4] = {{{0x155E913BD871CE82LL,0xE971CF5606E767E9LL,0x729430D32746ECAELL,1UL},{0x6305BEE7F681EE9FLL,0x4ADFB37DABB7DA61LL,18446744073709551612UL,0x4D62B09BBA11847BLL},{0x6305BEE7F681EE9FLL,18446744073709551607UL,0x729430D32746ECAELL,0xC11E78E7425D5478LL},{0x155E913BD871CE82LL,0x4D62B09BBA11847BLL,0x6305BEE7F681EE9FLL,0xE971CF5606E767E9LL},{0x6B3BA6228D5D7FD0LL,0x0386EFFDCA653AD7LL,0x8852D2942EF681F6LL,18446744073709551607UL},{18446744073709551609UL,0x0386EFFDCA653AD7LL,18446744073709551609UL,0xE971CF5606E767E9LL},{0xC0FFF45ADE37D8CBLL,0x4D62B09BBA11847BLL,0x0B22A28919436804LL,0xC11E78E7425D5478LL},{18446744073709551608UL,18446744073709551607UL,0x6B3BA6228D5D7FD0LL,0x4D62B09BBA11847BLL}},{{18446744073709551615UL,0x4ADFB37DABB7DA61LL,0x6B3BA6228D5D7FD0LL,1UL},{18446744073709551608UL,0xE971CF5606E767E9LL,0x0B22A28919436804LL,0x134FDFF48FA7C774LL},{0xC0FFF45ADE37D8CBLL,18446744073709551615UL,18446744073709551609UL,8UL},{18446744073709551609UL,8UL,0x8852D2942EF681F6LL,8UL},{0x6B3BA6228D5D7FD0LL,18446744073709551615UL,0x6305BEE7F681EE9FLL,0x134FDFF48FA7C774LL},{0x155E913BD871CE82LL,0xE971CF5606E767E9LL,0x729430D32746ECAELL,1UL},{0x6305BEE7F681EE9FLL,0x4ADFB37DABB7DA61LL,0x54A08F677261913ELL,0xE971CF5606E767E9LL},{0x8852D2942EF681F6LL,0x160F4641B69F4221LL,0x155E913BD871CE82LL,0x4D62B09BBA11847BLL}},{{0xC0FFF45ADE37D8CBLL,0xE971CF5606E767E9LL,0x8852D2942EF681F6LL,0x4ADFB37DABB7DA61LL},{0xF13B5213F1542493LL,0x134FDFF48FA7C774LL,0x729430D32746ECAELL,0x160F4641B69F4221LL},{18446744073709551608UL,0x134FDFF48FA7C774LL,18446744073709551608UL,0x4ADFB37DABB7DA61LL},{18446744073709551609UL,0xE971CF5606E767E9LL,0x6305BEE7F681EE9FLL,0x4D62B09BBA11847BLL},{18446744073709551612UL,0x160F4641B69F4221LL,0xF13B5213F1542493LL,0xE971CF5606E767E9LL},{0x0B22A28919436804LL,18446744073709551615UL,0xF13B5213F1542493LL,18446744073709551615UL},{18446744073709551612UL,0x4ADFB37DABB7DA61LL,0x6305BEE7F681EE9FLL,0xC11E78E7425D5478LL},{18446744073709551609UL,1UL,18446744073709551608UL,0x785B5CB3F321D1D7LL}},{{18446744073709551608UL,0x785B5CB3F321D1D7LL,0x729430D32746ECAELL,0x785B5CB3F321D1D7LL},{0xF13B5213F1542493LL,1UL,0x8852D2942EF681F6LL,0xC11E78E7425D5478LL},{0xC0FFF45ADE37D8CBLL,0x4ADFB37DABB7DA61LL,0x155E913BD871CE82LL,18446744073709551615UL},{0x8852D2942EF681F6LL,18446744073709551615UL,0x54A08F677261913ELL,0xE971CF5606E767E9LL},{0x8852D2942EF681F6LL,0x160F4641B69F4221LL,0x155E913BD871CE82LL,0x4D62B09BBA11847BLL},{0xC0FFF45ADE37D8CBLL,0xE971CF5606E767E9LL,0x8852D2942EF681F6LL,0x4ADFB37DABB7DA61LL},{0xF13B5213F1542493LL,0x134FDFF48FA7C774LL,0x729430D32746ECAELL,0x160F4641B69F4221LL},{18446744073709551608UL,0x134FDFF48FA7C774LL,18446744073709551608UL,0x4ADFB37DABB7DA61LL}},{{18446744073709551609UL,0xE971CF5606E767E9LL,0x6305BEE7F681EE9FLL,0x4D62B09BBA11847BLL},{18446744073709551612UL,0x160F4641B69F4221LL,0xF13B5213F1542493LL,0xE971CF5606E767E9LL},{0x0B22A28919436804LL,18446744073709551615UL,0xF13B5213F1542493LL,18446744073709551615UL},{18446744073709551612UL,0x4ADFB37DABB7DA61LL,0x6305BEE7F681EE9FLL,0xC11E78E7425D5478LL},{18446744073709551609UL,1UL,18446744073709551608UL,0x785B5CB3F321D1D7LL},{18446744073709551608UL,0x785B5CB3F321D1D7LL,0x729430D32746ECAELL,0x785B5CB3F321D1D7LL},{0xF13B5213F1542493LL,1UL,0x729430D32746ECAELL,0x4D62B09BBA11847BLL},{18446744073709551609UL,18446744073709551615UL,0xC0FFF45ADE37D8CBLL,18446744073709551607UL}},{{0x729430D32746ECAELL,1UL,0x6B3BA6228D5D7FD0LL,0x4ADFB37DABB7DA61LL},{0x729430D32746ECAELL,8UL,0xC0FFF45ADE37D8CBLL,0xE971CF5606E767E9LL},{18446744073709551609UL,0x4ADFB37DABB7DA61LL,0x729430D32746ECAELL,18446744073709551615UL},{18446744073709551615UL,0xC11E78E7425D5478LL,0x155E913BD871CE82LL,8UL},{18446744073709551612UL,0xC11E78E7425D5478LL,18446744073709551612UL,18446744073709551615UL},{18446744073709551608UL,0x4ADFB37DABB7DA61LL,0x8852D2942EF681F6LL,0xE971CF5606E767E9LL},{0x54A08F677261913ELL,8UL,18446744073709551615UL,0x4ADFB37DABB7DA61LL},{0x6305BEE7F681EE9FLL,1UL,18446744073709551615UL,18446744073709551607UL}},{{0x54A08F677261913ELL,18446744073709551615UL,0x8852D2942EF681F6LL,0x4D62B09BBA11847BLL},{18446744073709551608UL,18446744073709551615UL,18446744073709551612UL,0x0386EFFDCA653AD7LL},{18446744073709551612UL,0x0386EFFDCA653AD7LL,0x155E913BD871CE82LL,0x0386EFFDCA653AD7LL},{18446744073709551615UL,18446744073709551615UL,0x729430D32746ECAELL,0x4D62B09BBA11847BLL},{18446744073709551609UL,18446744073709551615UL,0xC0FFF45ADE37D8CBLL,18446744073709551607UL},{0x729430D32746ECAELL,1UL,0x6B3BA6228D5D7FD0LL,0x4ADFB37DABB7DA61LL},{0x729430D32746ECAELL,8UL,0xC0FFF45ADE37D8CBLL,0xE971CF5606E767E9LL},{18446744073709551609UL,0x4ADFB37DABB7DA61LL,0x729430D32746ECAELL,18446744073709551615UL}}};
        int i, j, k;
        ++g_28[5][1][0];
        for (l_26 = (-8); (l_26 <= (-12)); --l_26)
        {
            int32_t **l_33 = (void*)0;
            if (g_25)
                break;
            (*g_34) = l_24[3];

            ((g_35 == &l_23) ? (void) (0) : __assert_fail ("g_35 == &l_23", "9.c", 453, __PRETTY_FUNCTION__));
            if ((*p_18))
                break;
        }
        for (l_23 = 0; (l_23 <= 14); ++l_23)
        {
            uint32_t l_1890 = 0UL;
            int32_t l_1892 = (-3L);
            int16_t l_1967 = 0xE26CL;
            int32_t *l_2425 = (void*)0;
            int64_t ** const l_2435 = &g_652;
            for (g_25 = 0; (g_25 > 23); g_25++)
            {
                int32_t l_45[10][1] = {{(-1L)},{0xE7924A04L},{(-1L)},{0xE7924A04L},{(-1L)},{0xE7924A04L},{(-1L)},{0xE7924A04L},{(-1L)},{0xE7924A04L}};
                uint16_t *l_1891[1];
                int32_t **l_1902 = &l_1900[0];
                int32_t ***l_1901[8] = {&l_1902,&l_1902,&l_1902,&l_1902,&l_1902,&l_1902,&l_1902,&l_1902};
                int32_t **l_2423[8][8] = {{&l_24[5],&l_21,&l_21,(void*)0,(void*)0,&l_21,&l_21,&l_21},{&l_21,(void*)0,(void*)0,&l_21,(void*)0,&l_24[5],&l_24[5],&l_24[2]},{(void*)0,&l_21,&l_21,&l_24[5],&l_24[5],(void*)0,&l_21,(void*)0},{&l_24[2],&l_21,(void*)0,&l_22,&l_21,&l_24[5],&l_24[5],&l_24[5]},{&l_21,(void*)0,&l_22,&l_21,&l_22,(void*)0,&l_21,&l_24[5]},{&l_21,&l_24[5],&l_21,&l_21,(void*)0,&l_21,(void*)0,(void*)0},{&l_24[5],&l_21,&l_24[5],&l_22,(void*)0,(void*)0,(void*)0,&l_21},{&l_21,&l_24[5],&l_24[2],(void*)0,&l_22,&l_22,(void*)0,&l_24[2]}};
                uint16_t l_2434 = 0UL;
                const uint32_t l_2437 = 0x067016B7L;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1891[i] = &g_1423;
            }
            (*l_22) = 0x52649CF7L;
        }
        l_2454[2][4][2]++;
    }
    for (l_23 = 0; (l_23 >= 19); l_23 = safe_add_func_int8_t_s_s(l_23, 2))
    {
        int32_t l_2462 = 0xFA62CFF0L;
        int32_t l_2472[2];
        uint16_t *l_2473[10] = {&g_2444,&g_2444,(void*)0,&g_2444,&g_2444,(void*)0,&g_2444,&g_2444,(void*)0,&g_2444};
        struct S0 l_2474[7] = {{205,1,1L},{205,1,1L},{205,1,1L},{205,1,1L},{205,1,1L},{205,1,1L},{205,1,1L}};
        uint64_t l_2493 = 0xAAAEC3275AE7D44ALL;
        const uint8_t ***l_2522 = &g_2519;
        struct S0 l_2535 = {138,3,0x3DL};
        int32_t *l_2555 = &g_53;
        int i;
        for (i = 0; i < 2; i++)
            l_2472[i] = (-1L);
        (*p_18) = ((g_2444 &= ((*l_2441) > ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_u(l_2462, ((*l_2441) < (+(l_2472[0] = ((safe_rshift_func_uint8_t_u_u(l_2462, (safe_lshift_func_int8_t_s_u(1L, 2)))) , (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_s(2L, 6)) < (*l_2441)))), (*l_2441))))))))))) >= l_2462))) <= 8L);
        if (((**g_689) <= ((l_2472[0] , l_2474[6]) , (*l_2441))))
        {
            (*g_171) = (*p_18);
        }
        else
        {
            struct S0 *l_2480 = &g_2481[0];
            int32_t l_2491[10][10] = {{7L,(-10L),0x2EB6EF39L,0x2EB6EF39L,(-10L),7L,0xFF12C0E0L,0x02787227L,0L,(-9L)},{0xB2293EACL,1L,0xFF12C0E0L,0x88F6A2BCL,0x9AD06BF9L,(-10L),2L,(-5L),(-1L),0x0FCF6223L},{0xB2293EACL,2L,(-5L),(-1L),0x0FCF6223L,(-1L),(-5L),2L,(-10L),0x9AD06BF9L},{(-1L),(-5L),2L,(-10L),0x9AD06BF9L,0x88F6A2BCL,0xFF12C0E0L,1L,0xB2293EACL,5L},{0x0083D493L,1L,(-3L),(-10L),0xB2293EACL,(-9L),(-9L),0xB2293EACL,(-10L),(-3L)},{1L,1L,7L,(-1L),1L,8L,0x9AD06BF9L,0x2EB6EF39L,0xCD205C72L,0L},{(-5L),0x2EB6EF39L,0xFF12C0E0L,0x0083D493L,(-9L),0xCD205C72L,0x9AD06BF9L,(-1L),0x9AD06BF9L,0xCD205C72L},{0L,1L,0x0083D493L,1L,0L,0xFF12C0E0L,(-9L),0L,1L,7L},{0x0FCF6223L,1L,(-10L),(-5L),0x0083D493L,2L,0xFF12C0E0L,(-3L),7L,7L},{(-9L),(-5L),0x0FCF6223L,0L,0L,0x0FCF6223L,(-5L),(-9L),1L,0xCD205C72L}};
            int32_t l_2534[8][9][3] = {{{1L,1L,(-1L)},{0x41063FFCL,0xF24C00B0L,0x416277F1L},{3L,0x7873C34BL,0L},{0x534CDDE1L,0x39C07FE9L,0L},{0L,0x1F0C4A30L,0x1F0C4A30L},{0x86E2ABACL,(-9L),0xF24C00B0L},{0xADD25DBEL,0x1F0C4A30L,0x7BE47E17L},{(-1L),0x6BB33D46L,0x41063FFCL},{0x360C12D8L,(-1L),0xF3E760C6L}},{{0xEA5BCE0DL,0x6BB33D46L,0x2355203CL},{1L,0x1F0C4A30L,1L},{0x4FB1E732L,0x721CCAA8L,0x2C55C63CL},{(-9L),0x360C12D8L,0xADD25DBEL},{0x56251DADL,(-7L),4L},{(-1L),(-1L),0xD906D7E8L},{(-8L),0L,0x17D2DF1CL},{0L,0xF5FF457DL,(-1L)},{0x721CCAA8L,0xD4DDB0D0L,0x416277F1L}},{{(-1L),9L,(-1L)},{(-2L),(-1L),0L},{0xD906D7E8L,8L,9L},{0L,0x534CDDE1L,0xEA5BCE0DL},{0L,(-1L),3L},{0L,0L,0xD057E6FFL},{0xD906D7E8L,0L,0x85F6EE60L},{(-2L),(-1L),0x7F033F42L},{(-1L),0x85F6EE60L,0L}},{{0x721CCAA8L,(-8L),0xB0FB2068L},{0L,(-1L),0x0FA6598AL},{(-8L),4L,(-2L)},{(-1L),0xD5C63EBDL,0xF5FF457DL},{0x56251DADL,0xF24C00B0L,0x4C2EF131L},{(-9L),(-9L),(-1L)},{0x4FB1E732L,1L,(-1L)},{1L,0L,0x605D63E9L},{0xEA5BCE0DL,(-1L),(-1L)}},{{0x360C12D8L,1L,0x605D63E9L},{(-1L),0x4C2EF131L,(-8L)},{0x6999FD66L,(-1L),(-1L)},{0L,1L,(-1L)},{0x98C6DE7FL,0xD5C63EBDL,0x360C12D8L},{1L,0x7F033F42L,(-5L)},{1L,0xFF3D50CBL,0x605D63E9L},{0L,0x17D2DF1CL,0x4C2EF131L},{0L,9L,(-1L)}},{{0x4C2EF131L,0x721CCAA8L,0x721CCAA8L},{0L,(-9L),0xF3E760C6L},{9L,(-9L),0xAB1650B2L},{0L,0xADD25DBEL,0x85F6EE60L},{0x721CCAA8L,(-2L),0x4FB1E732L},{0xF5FF457DL,0xADD25DBEL,1L},{(-1L),(-9L),0x6BB33D46L},{0x360C12D8L,(-9L),6L},{(-8L),0x721CCAA8L,9L}},{{3L,9L,0x7873C34BL},{0x2C55C63CL,0x17D2DF1CL,0xCB70769AL},{(-2L),0xFF3D50CBL,(-1L)},{0x39C07FE9L,0x7F033F42L,0x56251DADL},{(-9L),0xD5C63EBDL,0x6999FD66L},{(-2L),1L,(-2L)},{7L,(-1L),0xFF3D50CBL},{0xCB70769AL,0x4C2EF131L,1L},{0x7BE47E17L,7L,0xF5FF457DL}},{{0x2355203CL,(-7L),0xF24C00B0L},{0x7BE47E17L,(-6L),0x4D31DD73L},{0xCB70769AL,0x41063FFCL,0xEA5BCE0DL},{7L,(-1L),0L},{(-2L),0xEA5BCE0DL,4L},{(-9L),(-2L),0x98C6DE7FL},{(-7L),(-8L),1L},{0L,(-1L),7L},{0xAB1650B2L,(-9L),9L}}};
            const int32_t * const *l_2552 = &g_368;
            int i, j, k;
            if ((*p_18))
            {
                for (g_2444 = (-9); (g_2444 > 49); ++g_2444)
                {
                    struct S0 *l_2479[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 **l_2478[8][5] = {{&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6],&l_2479[6]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*l_2441) = (*p_18);
                    if (g_2444)
                        goto lbl_2477;
                    l_2480 = (*g_920);

                    ((l_2480 == 0) ? (void) (0) : __assert_fail ("l_2480 == 0", "9.c", 518, __PRETTY_FUNCTION__));
                    return (*g_2394);



                }
            }
            else
            {
                int16_t l_2488 = 0xDB84L;
                int16_t l_2492 = (-7L);
                int16_t l_2494 = 1L;
                uint8_t *l_2495 = (void*)0;
                uint8_t *l_2496 = &l_1966[8][0];
                int32_t l_2500 = 1L;
                int32_t l_2501 = 0x9E8653A0L;
                int32_t l_2502 = 0x759B57FFL;
                int32_t l_2503 = (-1L);
                int16_t l_2504 = 1L;
                int32_t **l_2542[4][5][5] = {{{&g_171,(void*)0,&g_171,&l_2441,&g_171},{&g_171,&g_35,&g_171,&l_2441,(void*)0},{&g_171,(void*)0,&g_2424[2],&g_171,&g_35},{&g_2424[2],(void*)0,&g_171,(void*)0,&g_2424[0]},{&g_35,&g_2424[2],&g_171,&g_2424[2],&l_2441}},{{(void*)0,&g_171,&g_35,(void*)0,&g_35},{&g_2424[2],&g_171,(void*)0,(void*)0,&g_2424[0]},{&l_2441,&g_2424[2],&g_2424[2],&g_2424[2],&g_35},{(void*)0,&g_35,&g_2424[0],&g_2424[2],&g_2424[0]},{(void*)0,&g_35,&g_35,&l_2441,(void*)0}},{{&g_35,&g_2424[2],(void*)0,&g_35,&g_2424[0]},{(void*)0,&l_2441,&g_171,&g_171,&g_35},{&g_2424[0],&g_171,&l_2441,(void*)0,&g_2424[2]},{&g_171,(void*)0,&g_2424[2],&g_2424[2],&g_2424[2]},{&g_171,&l_2441,&g_171,(void*)0,&g_171}},{{&g_2424[0],&g_2424[0],(void*)0,(void*)0,&g_171},{(void*)0,(void*)0,&g_2424[2],(void*)0,&g_171},{&g_35,&g_2424[2],&g_35,(void*)0,&g_2424[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_35},{(void*)0,&g_2424[0],&g_171,&l_2441,(void*)0}}};
                uint32_t l_2543 = 0xDBF9C377L;
                int64_t * const *l_2549 = &g_652;
                int i, j, k;
                if ((safe_mul_func_uint16_t_u_u((g_166[2][1][4] = l_2492), l_2472[0])))
                {
                    uint16_t l_2505 = 0x79E3L;
                    if ((**g_2394))
                    {
                        int32_t *l_2497 = (void*)0;
                        int32_t *l_2498 = (void*)0;
                        int32_t *l_2499[1];
                        const uint8_t ****l_2521 = (void*)0;
                        uint8_t ***l_2525[8][5] = {{(void*)0,&g_784[0],&g_784[0],&g_784[0],&g_784[0]},{&g_784[0],&g_784[0],&g_784[0],&g_784[0],(void*)0},{&g_784[0],&g_784[0],&g_784[0],&g_784[0],&g_784[0]},{(void*)0,&g_784[0],&g_784[0],&g_784[0],&g_784[0]},{&g_784[0],(void*)0,&g_784[0],&g_784[0],(void*)0},{&g_784[0],&g_784[0],&g_784[0],&g_784[0],&g_784[0]},{&g_784[0],&g_784[0],&g_784[0],&g_784[0],(void*)0},{&g_784[0],&g_784[0],(void*)0,&g_784[0],(void*)0}};
                        uint8_t ****l_2524 = &l_2525[0][0];
                        int64_t ***l_2526 = &g_651;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_2499[i] = &g_1725;
                        --l_2505;
                        if ((*l_2441))
                            break;
                        (***g_1291) = (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((*g_271) & (func_77(&p_18, ((safe_add_func_uint8_t_u_u(((*l_2496) |= l_2488), (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(0x8AL, 1UL)), (((!((l_2522 = g_2518) == ((*l_2524) = l_2523[2]))) , (((*g_649) = l_2526) == (void*)0)) , l_2505))))) >= 0xB963BABEL), (*g_2394), (**g_689)) , (-1L))) ^ l_2491[1][8]), l_2527)), l_2474[6].f2));



                    }
                    else
                    {
                        int16_t *l_2536 = (void*)0;
                        int32_t l_2538 = 0x984D9CEDL;
                        (*g_352) = (-4L);
                        (***g_1291) &= ((safe_mul_func_int8_t_s_s(0x2EL, (*l_2441))) && ((*p_18) & (((safe_rshift_func_uint16_t_u_s(((l_2505 <= ((*l_2441) || (l_2491[3][7] < ((((l_2491[9][8] | (safe_mod_func_int16_t_s_s((g_318 = ((*g_690) == func_86((l_2534[5][1][2] = (l_2500 > l_2488)), l_2535, l_2504, (*g_1904)))), g_450.f2))) < l_2537) >= 65531UL) ^ l_2538)))) || l_2505), 6)) >= l_2491[1][8]) != l_2501)));


                    }



                }
                else
                {
                    uint8_t l_2548 = 0x9AL;
                    for (g_868 = 0; (g_868 > 16); g_868 = safe_add_func_uint16_t_u_u(g_868, 4))
                    {
                        int32_t **l_2541 = &g_35;
                        (*l_2541) = p_18;

                        ((g_35 == &g_4) ? (void) (0) : __assert_fail ("g_35 == &g_4", "9.c", 585, __PRETTY_FUNCTION__));
                        (***g_1291) &= ((**l_2552) & l_2474[6].f1);
                    }
                    l_2555 = ((safe_sub_func_uint16_t_u_u(0xB12BL, g_28[5][1][0])) , (*g_34));

                    ((l_2555 == &l_23 || l_2555 == &g_4) ? (void) (0) : __assert_fail ("l_2555 == &l_23 || l_2555 == &g_4", "9.c", 590, __PRETTY_FUNCTION__));
                    if ((*p_18))
                        continue;
                }



                ((l_2555 == &l_23 || l_2555 == &g_4 || l_2555 == &g_53) ? (void) (0) : __assert_fail ("l_2555 == &l_23 || l_2555 == &g_4 || l_2555 == &g_53", "9.c", 597, __PRETTY_FUNCTION__));
                return p_18;



            }
        }
    }
    return (*g_297);



}







static int32_t * func_40(int16_t p_41, uint64_t p_42, int32_t * p_43, uint32_t p_44)
{
    int32_t l_1968 = 3L;
    int32_t **l_1975 = &g_35;
    struct S0 l_1976 = {99,2,2L};
    int32_t l_2085 = 0x02F61F2FL;
    int32_t l_2086 = 0x94A38E42L;
    uint8_t **l_2096 = &g_785[0];
    uint8_t **l_2097 = (void*)0;
    int32_t l_2125 = 0x1C28B6D1L;
    int32_t l_2127[5][1];
    int64_t l_2141 = 0xFFE8F03DDF8E7594LL;
    uint16_t l_2204[7][2] = {{65535UL,0UL},{0UL,65535UL},{0UL,0UL},{65535UL,0UL},{0UL,65535UL},{0UL,0UL},{65535UL,0UL}};
    const int8_t **l_2206[6];
    const int16_t ***l_2318 = (void*)0;
    int32_t l_2320 = 0x1C68BEFEL;
    int64_t ** const l_2332 = &g_652;
    uint16_t l_2384 = 0x2DE7L;
    int32_t *l_2422 = &g_4;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_2127[i][j] = 0xBC200396L;
    }
    for (i = 0; i < 6; i++)
        l_2206[i] = &g_1644;
    if (((l_1968 & (((l_1968 <= l_1968) & (*g_690)) , (safe_div_func_uint32_t_u_u(4294967295UL, (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(func_58(l_1975, (!func_46(func_63(p_44, func_69(((void*)0 == &g_184), (**l_1975), l_1976, l_1976), p_43, (**l_1975)), g_1924[0], (**l_1975))), p_43, l_1975), l_1968)) ^ (**g_689)) != p_44), p_41)))))) == p_44))
    {
        int32_t **l_1977 = &g_171;
        uint32_t *l_1983 = &g_988;
        (*p_43) &= ((***g_650) , (**l_1977));
        if (((**l_1975) | 0x26L))
        {
            (*l_1977) = (*l_1975);


        }
        else
        {
            int16_t *l_1990 = &g_318;
            uint8_t * const *l_1994 = (void*)0;
            uint8_t * const **l_1993 = &l_1994;
            uint8_t ***l_1995 = &g_784[0];
            uint8_t ***l_1997 = &g_784[0];
            uint8_t ****l_1996 = &l_1997;
            int32_t l_2002 = (-1L);
            uint16_t *l_2005 = (void*)0;
            uint16_t *l_2006 = &g_452;
            (****g_1290) = ((((*g_652) , (p_41 == (safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((*l_1990) = (safe_mod_func_uint16_t_u_u((**l_1975), p_41))), 0x6349L)) < (safe_lshift_func_uint16_t_u_u(((l_1993 == ((*l_1996) = l_1995)) , ((*l_2006) = ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_2002, (safe_div_func_int16_t_s_s((**g_689), p_42)))), (**l_1977))) && p_44))), 2))), (**l_1975))))) , (**l_1977)) && (**g_414));
            (*l_1977) = &l_2002;

            ((g_171 == &l_2002) ? (void) (0) : __assert_fail ("g_171 == &l_2002", "9.c", 669, __PRETTY_FUNCTION__));
            for (g_1727 = 0; (g_1727 >= 13); g_1727 = safe_add_func_int8_t_s_s(g_1727, 9))
            {
                uint32_t l_2009 = 0x62F88E59L;
                if (l_2009)
                    break;
                for (g_322 = (-5); (g_322 != (-29)); g_322 = safe_sub_func_uint8_t_u_u(g_322, 3))
                {
                    for (g_4 = 0; (g_4 <= 3); g_4 += 1)
                    {
                    }
                    (*g_171) &= (**l_1975);
                    if ((**l_1977))
                        break;
                }
            }
        }


        (*l_1977) = p_43;


        for (g_318 = 13; (g_318 <= (-28)); g_318--)
        {
            uint64_t l_2028 = 18446744073709551615UL;
            for (g_277 = 9; (g_277 < (-3)); g_277 = safe_sub_func_int8_t_s_s(g_277, 6))
            {
                int32_t *l_2016 = &g_1726[3];
                int32_t *l_2017 = &g_1724;
                int32_t *l_2018 = &g_846;
                int32_t *l_2019 = &g_1727;
                int32_t *l_2020 = &g_54;
                int32_t *l_2021 = &g_1728;
                int32_t *l_2022 = &g_846;
                int32_t *l_2023 = &g_4;
                int32_t *l_2024 = &g_846;
                int32_t *l_2025 = &g_1728;
                int32_t *l_2026 = &g_935;
                int32_t *l_2027[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2027[i] = &g_1724;
                l_2028--;
            }
        }
    }
    else
    {
        uint32_t l_2063[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        uint64_t l_2074 = 0x809E4529563E55B3LL;
        int32_t l_2087 = 0x71F19196L;
        int32_t l_2088[3];
        uint64_t **l_2150 = &g_415;
        int16_t l_2161[4][1];
        uint32_t l_2190 = 0xE3832DA7L;
        uint16_t l_2279 = 0xBFF2L;
        struct S0 l_2285[10][8] = {{{255,0,0x61L},{213,1,0x0AL},{133,4,1L},{67,-1,0xABL},{133,4,1L},{213,1,0x0AL},{255,0,0x61L},{247,-0,0xDBL}},{{66,0,0x5DL},{67,-1,0xABL},{100,-0,-1L},{124,-3,0xD6L},{81,-4,0L},{213,1,0x0AL},{71,3,0x8FL},{213,1,0x0AL}},{{81,-4,0L},{213,1,0x0AL},{71,3,0x8FL},{213,1,0x0AL},{81,-4,0L},{124,-3,0xD6L},{100,-0,-1L},{67,-1,0xABL}},{{66,0,0x5DL},{247,-0,0xDBL},{255,0,0x61L},{213,1,0x0AL},{133,4,1L},{67,-1,0xABL},{133,4,1L},{213,1,0x0AL}},{{255,0,0x61L},{90,0,0L},{255,0,0x61L},{124,-3,0xD6L},{71,3,0x8FL},{81,0,1L},{100,-0,-1L},{247,-0,0xDBL}},{{133,4,1L},{90,0,0L},{71,3,0x8FL},{67,-1,0xABL},{118,-1,1L},{67,-1,0xABL},{71,3,0x8FL},{90,0,0L}},{{133,4,1L},{247,-0,0xDBL},{100,-0,-1L},{81,0,1L},{71,3,0x8FL},{124,-3,0xD6L},{255,0,0x61L},{90,0,0L}},{{255,0,0x61L},{213,1,0x0AL},{133,4,1L},{67,-1,0xABL},{133,4,1L},{213,1,0x0AL},{255,0,0x61L},{247,-0,0xDBL}},{{66,0,0x5DL},{67,-1,0xABL},{100,-0,-1L},{124,-3,0xD6L},{255,0,0x61L},{42,-3,0L},{100,-0,-1L},{42,-3,0L}},{{255,0,0x61L},{42,-3,0L},{100,-0,-1L},{42,-3,0L},{255,0,0x61L},{67,-1,0xABL},{81,-4,0L},{247,-0,0xDBL}}};
        uint32_t l_2288 = 2UL;
        int8_t *l_2295 = &g_1133[6];
        uint64_t l_2306 = 18446744073709551609UL;
        int8_t l_2310 = 0xF1L;
        uint32_t **l_2317[2];
        int32_t *l_2412 = &g_53;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2088[i] = 1L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_2161[i][j] = 0x792CL;
        }
        for (i = 0; i < 2; i++)
            l_2317[i] = &g_930;
lbl_2215:
        for (g_322 = 13; (g_322 == 17); g_322 = safe_add_func_uint64_t_u_u(g_322, 9))
        {
            const struct S0 **l_2039 = (void*)0;
            const struct S0 ***l_2038 = &l_2039;
            int64_t l_2065[6][7][1] = {{{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L}},{{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)}},{{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL}},{{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)}},{{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L}},{{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)},{4L},{(-1L)},{0x01BD8A7EDADFDC2CLL},{(-1L)}}};
            int32_t l_2066 = 0xD113ABCCL;
            int32_t l_2070 = (-1L);
            int32_t l_2089 = (-1L);
            int32_t l_2090 = 0xCAC84448L;
            int32_t l_2091 = 4L;
            int32_t l_2092 = (-4L);
            int32_t l_2120 = 0x72869173L;
            int32_t l_2122[9][9][3] = {{{0x56EBF278L,(-1L),(-9L)},{(-6L),1L,0xD844ECBAL},{0L,0x67FA648FL,0x756FDE4DL},{(-1L),0L,1L},{0x4FFF85FDL,1L,0xD2E98AF7L},{0x7C7B4790L,0x6C929C7DL,0xF0BD553DL},{0x3ABC9FEAL,(-1L),8L},{0x15E732C7L,(-1L),(-6L)},{0x8EE33DA4L,(-6L),(-7L)}},{{(-1L),0x8EE33DA4L,(-1L)},{1L,(-9L),0L},{0L,0xB344ED01L,7L},{0x756FDE4DL,(-1L),5L},{0xE0F5A603L,0xAF97A20DL,0x95EE0DDEL},{0xBA8CE425L,0xB344ED01L,0x7C7B4790L},{5L,(-8L),0x022DD3A4L},{(-1L),(-7L),(-7L)},{(-1L),1L,0xE0F5A603L}},{{1L,0xE19AA062L,0L},{1L,0x8EE33DA4L,0xD844ECBAL},{0x95245E62L,0L,1L},{1L,(-1L),0x4FFF85FDL},{(-1L),0x4F858A42L,1L},{(-8L),0x7C7B4790L,1L},{0x50782A9CL,0x7883952FL,1L},{7L,1L,0L},{0L,(-4L),(-1L)}},{{0xF0BD553DL,(-4L),0x296FDCCBL},{1L,1L,0x914C187AL},{0xC691B99FL,0x7883952FL,0L},{0xE19AA062L,0x7C7B4790L,0x15DBC05FL},{0xFBE28BD4L,0x4F858A42L,0x95245E62L},{0x914C187AL,(-1L),0x95EE0DDEL},{0x15DBC05FL,0L,(-8L)},{0x4BC399F1L,0x8EE33DA4L,5L},{0x67FA648FL,0xE19AA062L,0x705D8F5FL}},{{1L,1L,(-5L)},{(-7L),(-7L),(-6L)},{8L,(-8L),(-1L)},{0x022DD3A4L,0xB344ED01L,0x51B6F7D6L},{1L,(-5L),(-4L)},{0L,0x022DD3A4L,0x51B6F7D6L},{(-1L),1L,(-1L)},{(-9L),0L,(-6L)},{0x3ABC9FEAL,1L,(-5L)}},{{(-1L),7L,0x3ABC9FEAL},{1L,0x4F858A42L,1L},{0x95245E62L,(-1L),1L},{0x15E732C7L,(-9L),5L},{1L,1L,0L},{0x88766C23L,0xD844ECBAL,0xE19AA062L},{(-1L),1L,7L},{0xE0F5A603L,(-1L),0xBA8CE425L},{(-7L),7L,0x4BC399F1L}},{{0x705D8F5FL,0x95EE0DDEL,1L},{0x705D8F5FL,(-1L),0xE0F5A603L},{(-7L),0x7C7B4790L,0xF0BD553DL},{0xE0F5A603L,0xE19AA062L,0x7C7B4790L},{(-1L),0xEF0EEAA5L,(-1L)},{0x88766C23L,0x756FDE4DL,0x51B6F7D6L},{1L,0xAF97A20DL,1L},{0x15E732C7L,(-4L),0x95245E62L},{0x95245E62L,0x50782A9CL,(-1L)}},{{1L,0L,0x296FDCCBL},{0x756FDE4DL,0xD2E98AF7L,0xD2E98AF7L},{0xB15E0FCAL,(-1L),(-5L)},{1L,0L,0x15E732C7L},{0xAF97A20DL,0L,(-1L)},{(-1L),0x56EBF278L,(-6L)},{0L,0L,7L},{(-5L),0L,0L},{(-1L),(-1L),0x4F858A42L}},{{(-7L),0xD2E98AF7L,(-4L)},{0L,0L,0xEF6882FAL},{0xB344ED01L,0x50782A9CL,(-8L)},{(-1L),(-4L),0L},{0xE19AA062L,0xAF97A20DL,0L},{0xBA8CE425L,0xBA8CE425L,1L},{0x3ABC9FEAL,0xB15E0FCAL,0x7883952FL},{0x88766C23L,0xB344ED01L,(-4L)},{0x7C7B4790L,1L,(-2L)}}};
            int64_t l_2133 = 2L;
            int i, j, k;
            for (g_744 = 0; (g_744 <= (-18)); g_744 = safe_sub_func_uint32_t_u_u(g_744, 4))
            {
                int32_t *l_2035 = (void*)0;
                uint8_t *l_2040 = &g_1464;
                uint32_t *l_2064[2];
                int32_t **l_2067 = &l_2035;
                int32_t l_2084[4][7] = {{0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L,0xD674DFE6L},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
                uint64_t l_2102 = 18446744073709551615UL;
                int8_t **l_2103 = &g_1512;
                uint16_t l_2134 = 0UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2064[i] = &g_988;
                (*l_1975) = l_2035;

                ((g_35 == 0) ? (void) (0) : __assert_fail ("g_35 == 0", "9.c", 773, __PRETTY_FUNCTION__));
                (*l_2067) = (((((((*l_2040) = (safe_rshift_func_int8_t_s_s(((void*)0 != l_2038), 6))) && ((*l_2040)--)) != (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((l_2065[0][2][0] = ((safe_add_func_uint16_t_u_u((p_42 < (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((*p_43), (safe_mul_func_uint8_t_u_u(p_44, ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_44, (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0xAE1EL, ((((l_2063[5] ^ (*g_690)) < p_42) != p_41) && (*g_271)))), l_2063[1])))), (**g_651))) | p_42))))), l_2063[6]))), p_42)) != p_42)), l_2066)) , (-1L)), 4))) ^ l_2063[2]) , 9UL) , (*l_1975));
                for (g_53 = (-11); (g_53 >= 15); g_53 = safe_add_func_int16_t_s_s(g_53, 2))
                {
                    int32_t l_2072[6][7] = {{0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L},{0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL},{0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L},{0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL},{0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L,0xFD75BDF0L},{0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL,0L,0xDBF6A40FL}};
                    int32_t l_2073 = 0xEE993A2CL;
                    int32_t l_2083[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2083[i] = 0L;
                    l_2074--;
                    if ((p_44 >= (l_2065[0][2][0] & ((****g_654) ^= l_2063[4]))))
                    {
                        uint32_t l_2077 = 1UL;
                        int32_t l_2078 = (-3L);
                        int32_t *l_2079 = &g_935;
                        int32_t *l_2080 = (void*)0;
                        int32_t *l_2081 = &g_57;
                        int32_t *l_2082[2];
                        uint32_t l_2093 = 0x0DEEA4F7L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2082[i] = &g_1726[3];
                        (*p_43) = l_2077;
                        ++l_2093;
                    }
                    else
                    {
                        (*p_43) ^= (&l_2040 != ((l_2096 != (l_2097 = &l_2040)) , (*g_783)));

                        ((l_2097 == &l_2040) ? (void) (0) : __assert_fail ("l_2097 == &l_2040", "9.c", 803, __PRETTY_FUNCTION__));
                        if (l_2066)
                            continue;
                    }
                    (*l_2067) = (void*)0;
                }


                for (g_900 = 0; (g_900 <= 2); g_900 += 1)
                {
                    int32_t l_2111 = 0x19B83874L;
                    int32_t l_2119 = 7L;
                    int32_t l_2121 = 0xD662DE33L;
                    int32_t l_2123 = 0xC86F2542L;
                    int32_t l_2124 = 1L;
                    int32_t l_2126 = (-6L);
                    int32_t l_2128 = 0x5E12D76FL;
                    int32_t l_2129 = 0xADC8EF0CL;
                    int32_t l_2130 = 0xA802CF01L;
                    int32_t l_2131 = 0xC77783C9L;
                    int32_t l_2132[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_2132[i] = (-1L);
                    if (g_1249[g_900])
                        break;
                    for (g_533 = 2; (g_533 >= 0); g_533 -= 1)
                    {
                        int8_t ***l_2104 = (void*)0;
                        int32_t *l_2105 = &l_2084[0][2];
                        int32_t *l_2106 = &g_1728;
                        int32_t *l_2107 = &g_1722;
                        int32_t *l_2108 = &g_57;
                        int32_t *l_2109 = &g_1728;
                        int32_t *l_2110 = &g_1726[3];
                        int32_t *l_2112 = &g_846;
                        int32_t *l_2113 = &l_2087;
                        int32_t *l_2114 = &l_2092;
                        int32_t *l_2115 = &g_1728;
                        int32_t *l_2116 = (void*)0;
                        int32_t *l_2117 = &g_1723;
                        int32_t *l_2118[6][3][8] = {{{(void*)0,&g_322,&g_1722,(void*)0,&g_1723,(void*)0,&g_1722,&g_322},{(void*)0,&g_1723,&g_935,&g_1372,(void*)0,(void*)0,(void*)0,&g_935},{(void*)0,&l_2070,(void*)0,(void*)0,&g_57,&g_322,&g_322,&g_57}},{{&g_1728,(void*)0,(void*)0,&g_1728,(void*)0,&g_1372,(void*)0,(void*)0},{(void*)0,&g_1372,(void*)0,(void*)0,&g_1723,(void*)0,&g_57,&l_2070},{&l_2087,&g_1372,(void*)0,&g_1722,(void*)0,&g_1372,&l_2087,(void*)0}},{{&g_1723,(void*)0,(void*)0,&g_1372,&g_1728,&g_322,&g_935,(void*)0},{(void*)0,&l_2070,&g_1722,&g_1723,&g_1728,&g_1728,&g_1723,&g_1722},{&g_1723,&g_1723,(void*)0,(void*)0,(void*)0,&l_2087,&g_1722,(void*)0}},{{&l_2087,(void*)0,&g_1723,(void*)0,&g_1723,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1728,(void*)0,(void*)0,(void*)0,(void*)0,&g_1722},{&g_1728,&g_935,&l_2070,&g_1723,&g_57,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_2070,&g_1372,&g_1372,&l_2070,(void*)0,(void*)0},{&g_57,&l_2087,&g_1728,&g_1722,&g_1723,&g_935,&g_1723,(void*)0},{&l_2087,&g_1722,(void*)0,&g_57,&g_1372,(void*)0,&g_1372,&g_57}},{{(void*)0,&g_1728,(void*)0,(void*)0,(void*)0,(void*)0,&g_1722,(void*)0},{&g_57,(void*)0,&g_1372,&g_1723,&l_2087,&g_322,(void*)0,(void*)0},{&g_57,(void*)0,(void*)0,(void*)0,(void*)0,&g_57,&g_1728,(void*)0}}};
                        int i, j, k;
                        (*l_1975) = &l_2088[g_533];

                        (((g_35 >= &l_2088[0] && g_35 <= &l_2088[2])) ? (void) (0) : __assert_fail ("(g_35 >= &l_2088[0] && g_35 <= &l_2088[2])", "9.c", 848, __PRETTY_FUNCTION__));
                        (*g_171) = ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*g_1512) &= g_1249[g_900]), (**l_1975))), l_2102)) , (((***g_650) |= l_2087) || p_42));
                        g_1511 = l_2103;
                        ++l_2134;
                    }
                    l_2087 = ((safe_div_func_int64_t_s_s(7L, (****g_649))) <= 255UL);
                }

                (((g_35 >= &l_2088[0] && g_35 <= &l_2088[2]) || g_35 == 0) ? (void) (0) : __assert_fail ("(g_35 >= &l_2088[0] && g_35 <= &l_2088[2]) || g_35 == 0", "9.c", 856, __PRETTY_FUNCTION__));
            }
            for (g_53 = 15; (g_53 > (-10)); g_53 = safe_sub_func_uint8_t_u_u(g_53, 7))
            {
                uint64_t l_2142 = 2UL;
                int32_t **l_2145 = (void*)0;
                int32_t **l_2146 = &g_35;
                int32_t *l_2147 = &g_1723;
                l_2142++;
                (*l_2146) = (**g_1291);

                ((g_35 == &g_935) ? (void) (0) : __assert_fail ("g_35 == &g_935", "9.c", 867, __PRETTY_FUNCTION__));
                (*l_2146) = l_2147;

                ((g_35 == &g_1723) ? (void) (0) : __assert_fail ("g_35 == &g_1723", "9.c", 870, __PRETTY_FUNCTION__));
            }
            (***g_1291) |= l_2074;
        }
        if ((*p_43))
        {
            int32_t * const **l_2151 = &g_933[0];
            int32_t * const *l_2153 = (void*)0;
            int32_t * const **l_2152 = &l_2153;
            uint32_t *l_2160[4];
            int32_t l_2162 = (-1L);
            uint32_t l_2183 = 0x297505B5L;
            int8_t **l_2207 = &g_1512;
            int64_t l_2223 = 0x67BD9386BB024709LL;
            int32_t l_2236 = 0xFDF921DCL;
            int32_t l_2239 = 1L;
            int32_t l_2240 = 0x26E274AFL;
            uint16_t l_2242[1];
            struct S0 l_2290[6][2][8] = {{{{137,0,0xBCL},{78,2,-7L},{137,0,0xBCL},{19,0,0x4AL},{250,4,0xFEL},{76,-3,5L},{245,0,-10L},{85,-2,0L}},{{173,-1,0x1EL},{78,2,0x3EL},{191,0,-1L},{237,-1,0L},{152,1,-1L},{153,-0,0xC1L},{250,4,0xFEL},{164,3,4L}}},{{{173,-1,0x1EL},{222,-1,0xCDL},{121,-4,0xF7L},{87,-1,8L},{250,4,0xFEL},{189,0,7L},{164,3,4L},{245,4,0xB1L}},{{137,0,0xBCL},{173,-1,0x1EL},{74,4,0xECL},{126,3,1L},{126,3,1L},{74,4,0xECL},{173,-1,0x1EL},{137,0,0xBCL}}},{{{115,-0,0L},{138,2,-5L},{137,0,2L},{245,0,-10L},{19,0,0x4AL},{122,-0,0x1EL},{245,4,0xB1L},{191,0,-1L}},{{78,2,0x3EL},{167,-4,9L},{173,-1,0x1EL},{250,4,0xFEL},{245,0,-10L},{122,-0,0x1EL},{1,-1,1L},{121,-4,0xF7L}}},{{{245,4,0xB1L},{138,2,-5L},{152,1,-1L},{164,3,4L},{195,3,0x8BL},{74,4,0xECL},{137,0,2L},{74,4,0xECL}},{{121,-4,0xF7L},{173,-1,0x1EL},{195,3,0x8BL},{173,-1,0x1EL},{121,-4,0xF7L},{222,-1,0xCDL},{87,-1,8L},{245,4,0xB1L}}},{{{167,-4,9L},{87,-1,8L},{173,-1,0x1EL},{19,0,0x4AL},{138,2,-5L},{164,3,4L},{122,-0,0x1EL},{78,2,0x3EL}},{{245,0,-10L},{250,4,0xFEL},{173,-1,0x1EL},{167,-4,9L},{78,2,0x3EL},{195,3,0x8BL},{87,-1,8L},{115,-0,0L}}},{{{138,2,-5L},{85,-2,0L},{137,0,0xBCL},{245,4,0xB1L},{173,-1,0x1EL},{173,-1,0x1EL},{245,4,0xB1L},{137,0,0xBCL}},{{191,0,-1L},{191,0,-1L},{115,-0,0L},{87,-1,8L},{195,3,0x8BL},{78,2,0x3EL},{167,-4,9L},{173,-1,0x1EL}}}};
            uint32_t l_2321[2][5][3] = {{{0xFD2B61DDL,0xFD2B61DDL,0xD287DC1AL},{1UL,4294967295UL,1UL},{0xFD2B61DDL,0xD287DC1AL,0xD287DC1AL},{0UL,4294967295UL,0UL},{0xFD2B61DDL,0xFD2B61DDL,0xD287DC1AL}},{{1UL,4294967295UL,1UL},{0xFD2B61DDL,0xD287DC1AL,0xD287DC1AL},{0UL,4294967295UL,0UL},{0xFD2B61DDL,0xFD2B61DDL,0xD287DC1AL},{1UL,4294967295UL,1UL}}};
            int32_t ***** const l_2331 = &g_1295;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2160[i] = &g_988;
            for (i = 0; i < 1; i++)
                l_2242[i] = 1UL;
            if ((*p_43))
            {
                int32_t *l_2163 = (void*)0;
                int32_t l_2164 = 1L;
                int32_t *l_2165 = &g_1724;
                int32_t *l_2166 = &l_2125;
                int32_t *l_2167 = &l_2125;
                int32_t *l_2168[10][6][4] = {{{&l_2088[1],&l_2127[4][0],(void*)0,&g_1372},{&l_2088[1],&g_1725,&g_322,&g_53},{&l_2162,&g_1372,(void*)0,(void*)0},{&l_2088[0],&g_322,&l_2127[2][0],&l_2127[1][0]},{&g_1722,(void*)0,(void*)0,&g_1725},{&g_1725,(void*)0,&g_1726[3],&l_2088[0]}},{{&l_2127[1][0],(void*)0,&l_2088[0],&g_1372},{(void*)0,&g_53,&l_2085,&g_1726[3]},{&l_2127[2][0],&l_2127[2][0],&l_2127[4][0],&l_2162},{&g_1726[3],&g_846,(void*)0,&g_1372},{(void*)0,&g_4,&g_1725,(void*)0},{(void*)0,&g_4,&g_1372,&g_1372}},{{&g_4,&g_846,&g_1725,&l_2162},{&l_2127[4][0],&l_2127[2][0],(void*)0,&g_1726[3]},{&l_2087,&g_1372,&l_2085,&g_1727},{&l_2127[4][0],&l_2127[4][0],&l_2127[4][0],(void*)0},{(void*)0,&g_1727,&l_2127[4][0],&l_2087},{&l_2162,(void*)0,(void*)0,&l_2088[0]}},{{&l_2087,&l_2088[1],&l_2087,&g_53},{&l_2085,&g_1723,&l_2127[2][0],&g_1372},{&g_846,&l_2087,&l_2127[1][0],&g_1723},{(void*)0,&g_1724,&l_2127[1][0],&l_2127[4][0]},{&g_846,&l_2087,&l_2127[2][0],&l_2127[4][0]},{&l_2085,&l_2088[0],&l_2087,&g_4}},{{&l_2087,&g_4,(void*)0,&l_2127[1][0]},{&l_2162,&l_2085,&l_2127[4][0],&l_2088[0]},{(void*)0,&g_1725,&l_2127[4][0],&l_2162},{&l_2127[4][0],(void*)0,&l_2085,&l_2088[1]},{&l_2087,(void*)0,(void*)0,&l_2087},{&l_2127[4][0],&g_1372,&g_1725,&l_2085}},{{&g_4,&l_2127[4][0],&g_1372,(void*)0},{(void*)0,&l_2087,&l_2085,&l_2162},{(void*)0,(void*)0,&g_1722,(void*)0},{&g_53,&g_1724,&l_2087,&l_2162},{&l_2127[4][0],&l_2088[0],&g_53,&g_1727},{&l_2127[2][0],(void*)0,&l_2162,&l_2127[4][0]}},{{&g_1725,&l_2087,&g_1372,&l_2127[2][0]},{(void*)0,(void*)0,(void*)0,&g_4},{&l_2162,&g_1725,&l_2127[4][0],&g_1725},{&l_2127[4][0],&l_2127[2][0],&g_1725,&g_1726[3]},{&g_1726[3],&l_2162,&g_1727,(void*)0},{&l_2085,(void*)0,&g_1724,&l_2127[1][0]}},{{&l_2085,&g_1726[3],&g_1727,(void*)0},{&g_1726[3],&l_2127[1][0],&g_1725,&l_2087},{&l_2127[4][0],&g_1727,&l_2127[4][0],&g_1725},{&l_2162,&l_2088[1],(void*)0,&g_1726[3]},{(void*)0,(void*)0,&g_1372,&l_2127[4][0]},{&g_1725,&l_2127[4][0],&l_2162,&g_846}},{{&l_2127[2][0],(void*)0,&g_53,&g_53},{&l_2127[4][0],&l_2127[4][0],&l_2087,&g_1723},{&g_53,(void*)0,&g_1722,&g_1724},{(void*)0,&g_1372,&l_2085,&g_1722},{&l_2088[0],&g_1372,(void*)0,&g_1724},{&g_1372,(void*)0,&l_2087,&g_1723}},{{(void*)0,&l_2127[4][0],&l_2088[0],&g_53},{&l_2162,&g_846,&g_53,(void*)0},{&g_1722,&l_2087,&l_2127[4][0],&g_1724},{(void*)0,&l_2127[4][0],&g_1372,&g_322},{&g_1726[3],&g_1725,&l_2127[2][0],&l_2127[4][0]},{&g_4,&l_2085,&g_4,(void*)0}}};
                uint32_t l_2169[3][5] = {{9UL,0x62475B77L,0x7093D8D0L,0x0BA8F733L,0x7093D8D0L},{0x7093D8D0L,0x7093D8D0L,1UL,0x0BA8F733L,0x06EFA51FL},{0x62475B77L,9UL,9UL,0x62475B77L,0x7093D8D0L}};
                struct S0 l_2199 = {251,4,0x9CL};
                int i, j, k;
                l_2169[0][1]++;
                for (g_1464 = 1; (g_1464 <= 8); g_1464 += 1)
                {
                    uint16_t l_2180 = 0UL;
                    int16_t **l_2184 = &g_690;
                    int32_t l_2187 = 0x7F8A76B2L;
                    int32_t l_2188 = 0x025F4A42L;
                    int32_t l_2189 = (-1L);
                    int i;
                    g_1726[g_1464] = (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((!(((safe_sub_func_int32_t_s_s((!(safe_sub_func_int16_t_s_s((l_2180 < l_2161[1][0]), l_2180))), ((safe_lshift_func_int16_t_s_s(0x8229L, (l_2183 || p_44))) , (-9L)))) , l_2184) != ((safe_div_func_uint32_t_u_u(l_2180, l_2074)) , (void*)0))) , 0x3A9638E3L), 0x92CBC7C7L)), (***l_2151)));
                    ++l_2190;
                    for (g_740 = 5; (g_740 >= 0); g_740 -= 1)
                    {
                        uint16_t *l_2200[8];
                        int32_t l_2201[2];
                        int32_t l_2202[4][2];
                        int8_t *l_2203 = &g_744;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_2200[i] = &g_452;
                        for (i = 0; i < 2; i++)
                            l_2201[i] = 0xE7D3BF67L;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_2202[i][j] = (-1L);
                        }
                        (*p_43) = (p_41 < l_2088[1]);
                        if ((*g_352))
                            break;
                    }
                }
            }
            else
            {
                const int8_t ***l_2205 = &g_1643[5][4][2];
                int32_t l_2210 = (-5L);
                int32_t l_2227 = (-4L);
                int32_t l_2234[9];
                int16_t l_2305[10][6] = {{0xF89AL,(-1L),0xB3B7L,0xEA60L,(-7L),0xEA60L},{0xB3B7L,0xF89AL,0xB3B7L,(-1L),(-1L),(-5L)},{0xB9B4L,(-1L),0xEA60L,1L,0xB6BCL,0xB6BCL},{1L,0xB6BCL,0xB6BCL,1L,0xEA60L,(-1L)},{0xB9B4L,(-5L),(-1L),(-1L),0xB3B7L,0xF89AL},{0xB3B7L,0xEA60L,(-7L),0xEA60L,0xB3B7L,(-1L)},{0xF89AL,(-5L),0xC954L,0L,0xEA60L,(-1L)},{(-1L),0xB6BCL,(-5L),(-5L),0xB6BCL,(-1L)},{0L,(-1L),0xC954L,0xB3B7L,(-1L),(-1L)},{0xB6BCL,0xF89AL,(-7L),(-1L),(-7L),0xF89AL}};
                int16_t *** const l_2316 = (void*)0;
                int i, j;
                for (i = 0; i < 9; i++)
                    l_2234[i] = 1L;
                if (((l_2206[0] = ((*l_2205) = &g_1644)) == l_2207))
                {
                    uint16_t l_2212 = 0UL;
                    for (g_1505 = (-15); (g_1505 < 56); g_1505 = safe_add_func_uint32_t_u_u(g_1505, 1))
                    {
                        int32_t *l_2211[7][7] = {{&g_1727,(void*)0,(void*)0,(void*)0,&g_1727,&g_1722,&g_1727},{&g_846,&g_54,&g_54,&g_846,&l_2162,&g_846,&g_54},{&g_1372,&g_1372,&g_1722,(void*)0,&g_1722,&g_1372,&g_1372},{&g_54,&g_54,&g_322,&g_54,&g_54,&g_54,&g_54},{(void*)0,&g_1727,(void*)0,&g_1722,&g_1722,(void*)0,&g_1727},{&g_54,&l_2162,&g_322,&g_322,&l_2162,&g_54,&l_2162},{(void*)0,&g_1722,&g_1722,(void*)0,&g_1727,(void*)0,&g_1722}};
                        int i, j;
                        (*p_43) |= ((***l_2151) &= (-1L));
                        --l_2212;
                        (*g_541) &= 5L;
                    }
                }
                else
                {
                    if (g_53)
                        goto lbl_2215;
                    for (g_988 = (-28); (g_988 == 40); g_988++)
                    {
                        if ((**g_367))
                            break;
                        (*g_171) = (*g_354);
                        (****g_1290) |= (*g_354);
                    }
                }
                if (((*g_171) = (*p_43)))
                {
                    int32_t *l_2218 = &g_1727;
                    int32_t l_2233 = 9L;
                    int64_t l_2235 = 0x3B7F7716D6E779A5LL;
                    int32_t l_2237 = 1L;
                    int32_t l_2238 = 0x3DC47023L;
                    int32_t l_2241[8] = {0x87726264L,0x87726264L,0x87726264L,0x87726264L,0x87726264L,0x87726264L,0x87726264L,0x87726264L};
                    uint32_t l_2249 = 0x43E96841L;
                    int8_t l_2254 = 0x0BL;
                    int i;
                    l_2218 = p_43;


                    for (g_416 = 0; (g_416 <= 2); g_416 += 1)
                    {
                        int i;
                        if (g_1924[g_416])
                            break;
                        return p_43;



                    }
                    for (g_1728 = 0; (g_1728 <= (-4)); --g_1728)
                    {
                        int32_t l_2224[2][7][2] = {{{1L,1L},{1L,1L},{1L,(-9L)},{0x91B5679EL,0xCFCA1CD9L},{0L,1L},{0x67D888DDL,0L},{0L,0x9B49E667L}},{{0L,0L},{0x67D888DDL,1L},{0L,0xCFCA1CD9L},{0x91B5679EL,(-9L)},{1L,1L},{1L,1L},{1L,(-9L)}}};
                        int32_t *l_2225 = &l_2210;
                        int32_t *l_2226 = &g_1725;
                        int32_t *l_2228 = (void*)0;
                        int32_t *l_2229 = &l_2127[4][0];
                        int32_t *l_2230 = &l_2162;
                        int32_t *l_2231 = &g_935;
                        int32_t *l_2232[6];
                        uint8_t *l_2252 = (void*)0;
                        uint8_t *l_2253[6][9][3] = {{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}},{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}},{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}},{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}},{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}},{{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737},{&g_737,&g_737,&g_737}}};
                        uint32_t l_2255 = 0x300B2803L;
                        struct S0 l_2258 = {159,-4,0x9AL};
                        uint16_t *l_2268 = &l_2204[3][1];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_2232[i] = &g_54;
                        (*l_2218) ^= (safe_rshift_func_uint16_t_u_s(0xA050L, 11));
                        l_2242[0]--;
                        (*l_1975) = p_43;


                        (***l_2151) = ((((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((((l_2249 < ((safe_mul_func_uint8_t_u_u((++l_2255), func_86(p_44, l_2258, l_2234[5], (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((l_2210 ^ (((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(func_86((safe_unary_minus_func_uint32_t_u((p_44 , (l_2074 == (((*l_2268) = (*l_2218)) || l_2088[0]))))), l_1976, (**l_1975), (*l_2226)), 1)), p_42)) >= p_42) == p_42) != 1UL) || 0x43L)), p_42)), 4))))) , p_44)) , 0xA2AD85F2C9D3B0F6LL) >= 0x98C1AEC895C6FB01LL) < (*g_652)) , (**g_419)), p_42)), 1L)) >= (**l_1975)) & l_2234[3]) , (*p_43));
                    }
                }
                else
                {
                    int32_t **l_2287 = &g_35;
                    for (g_416 = 0; (g_416 <= 1); g_416 += 1)
                    {
                        int16_t l_2269 = 0x674BL;
                        uint8_t *l_2280[4][2] = {{&g_737,&g_737},{&g_159[2][4][3],&g_737},{&g_737,&g_159[2][4][3]},{&g_737,&g_737}};
                        uint16_t *l_2286 = &g_166[1][6][6];
                        uint64_t *l_2289[4] = {&l_2074,&l_2074,&l_2074,&l_2074};
                        int i, j;
                        l_2269 &= 0xCF46ABAEL;
                        if ((*p_43))
                            continue;
                        (*p_43) ^= (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((g_1139 = ((((safe_rshift_func_int16_t_s_u((l_2288 <= 0x19B8L), 14)) , (void*)0) == (*g_1772)) == 0x0EBBCC68L)) , (*g_690)), (*g_690))) , (***l_2151)), (**g_689)));
                        if ((*p_43))
                            break;
                    }
                }
                if ((*p_43))
                {
                    int32_t *l_2296 = &l_2088[1];
                    int32_t *l_2297 = &g_1724;
                    int32_t *l_2298 = &g_846;
                    int32_t *l_2299 = &g_1727;
                    int32_t *l_2300 = &l_2088[2];
                    int32_t *l_2301 = &l_2125;
                    int32_t *l_2302 = (void*)0;
                    int32_t *l_2303 = &l_2127[4][0];
                    int32_t *l_2304[1][2];
                    uint8_t l_2311 = 0x57L;
                    struct S0 l_2319[2][1] = {{{233,-0,9L}},{{233,-0,9L}}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2304[i][j] = &l_2227;
                    }
                    --l_2306;
                    l_2311++;
                    (*l_2298) &= (*p_43);
                    l_2321[0][0][2]++;
                }
                else
                {
                    if ((p_42 & p_41))
                    {
                        (*l_1975) = &l_2087;

                        ((g_35 == &l_2087) ? (void) (0) : __assert_fail ("g_35 == &l_2087", "9.c", 1073, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        return p_43;



                    }

                    ((g_35 == &l_2087) ? (void) (0) : __assert_fail ("g_35 == &l_2087", "9.c", 1083, __PRETTY_FUNCTION__));
                }


                (*l_1975) = p_43;


            }
            l_2285[0][2].f1 = 1L;
            if (((65530UL ^ 0L) | l_2088[0]))
            {
                int32_t *****l_2330[2];
                struct S0 *l_2340 = &l_1976;
                int i;
                for (i = 0; i < 2; i++)
                    l_2330[i] = &g_1295;
                (***l_2151) = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(p_41, (((((l_2161[2][0] >= 0x9CFBD21D51FF333FLL) == 0x1BL) , (l_2330[1] != l_2331)) , l_2332) == (void*)0))) , ((((safe_add_func_uint32_t_u_u((((*g_929) = (void*)0) == (void*)0), (*p_43))) , p_41) <= l_2087) , (*g_271))), p_41));
                if (l_1976.f1)
                    goto lbl_2215;
                for (g_322 = 0; (g_322 < (-19)); g_322--)
                {
                    int64_t l_2339 = 1L;
                    for (g_54 = 0; (g_54 == (-19)); --g_54)
                    {
                        (*p_43) &= ((****g_1290) = l_2339);
                        (***l_2151) = (*p_43);
                    }
                }
                for (g_1464 = 0; (g_1464 <= 2); g_1464 += 1)
                {
                    int i;
                    p_43 = (*l_1975);


                    (*g_921) = l_2340;

                    ((g_184 == &l_1976) ? (void) (0) : __assert_fail ("g_184 == &l_1976", "9.c", 1119, __PRETTY_FUNCTION__));
                    p_43 = (void*)0;

                    ((p_43 == 0) ? (void) (0) : __assert_fail ("p_43 == 0", "9.c", 1122, __PRETTY_FUNCTION__));
                    if (g_1924[g_1464])
                        break;
                }



            }
            else
            {
                uint64_t l_2344[2][9][4] = {{{0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL,0x686643F2508B60DBLL},{18446744073709551610UL,18446744073709551610UL,0x58A36A5115EEBD62LL,18446744073709551610UL},{18446744073709551610UL,0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL},{0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL,0x686643F2508B60DBLL},{18446744073709551610UL,18446744073709551610UL,0x58A36A5115EEBD62LL,18446744073709551610UL},{18446744073709551610UL,0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL},{0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL,0x58A36A5115EEBD62LL},{0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL},{0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL,0x686643F2508B60DBLL}},{{0x58A36A5115EEBD62LL,0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL},{0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL},{0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL,0x686643F2508B60DBLL},{0x58A36A5115EEBD62LL,0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL},{0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL},{0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL,0x686643F2508B60DBLL},{0x58A36A5115EEBD62LL,0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL},{0x686643F2508B60DBLL,0x686643F2508B60DBLL,18446744073709551610UL,0x686643F2508B60DBLL},{0x686643F2508B60DBLL,0x58A36A5115EEBD62LL,0x58A36A5115EEBD62LL,0x686643F2508B60DBLL}}};
                int i, j, k;
                for (g_198 = (-30); (g_198 == 3); g_198 = safe_add_func_uint64_t_u_u(g_198, 7))
                {
                    int32_t *l_2343 = &g_1726[3];
                    l_2344[1][1][2]++;
                    for (g_1267 = 0; (g_1267 <= 8); g_1267 += 1)
                    {
                        int i;
                        g_1726[g_1267] = (*p_43);
                        (*p_43) ^= 1L;
                    }
                    (*l_2343) |= (*p_43);
                    (*l_2343) = (safe_mul_func_int16_t_s_s((**g_689), (safe_rshift_func_uint16_t_u_u(65530UL, 3))));
                }
            }



            return p_43;




        }
        else
        {
            int16_t l_2378 = 0x0CF5L;
            int32_t l_2380 = 0xE61A66B8L;
            int32_t l_2383 = (-2L);
            int32_t l_2397[3];
            uint8_t l_2400 = 255UL;
            int32_t l_2413[1][8][8] = {{{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)},{0xC59A2A4FL,0xF14439E0L,0xF14439E0L,0xC59A2A4FL,(-1L),0x691C9699L,0x691C9699L,(-1L)}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2397[i] = 0L;
            for (g_4 = 0; (g_4 <= 2); g_4 += 1)
            {
                int32_t l_2381 = 0L;
                int32_t l_2382 = 1L;
                int32_t **l_2388 = (void*)0;
                int32_t *l_2404 = (void*)0;
                int32_t *l_2405 = &l_2381;
                int32_t *l_2406 = (void*)0;
                int32_t *l_2407[3][10] = {{&l_2381,&g_1723,(void*)0,&g_1722,(void*)0,&g_1723,&l_2381,&l_2087,(void*)0,&g_1726[3]},{&l_2087,&l_2087,&l_2127[2][0],(void*)0,&l_2381,&l_2381,(void*)0,&l_2127[2][0],&l_2087,&l_2087},{&g_4,&l_2087,(void*)0,&g_846,&g_1722,&g_1726[3],&l_2381,&g_1726[3],&g_1722,&g_846}};
                uint16_t l_2408 = 65535UL;
                int i, j;
                if (g_1133[(g_4 + 2)])
                {
                    uint64_t l_2355 = 0x0E40C0B71DD49C8DLL;
                    int64_t *l_2364 = &g_55;
                    int32_t l_2374 = (-1L);
                    int32_t l_2376 = (-1L);
                    int32_t l_2377 = 0x9963EF87L;
                    int32_t l_2379[3][4][5] = {{{0x9E6FECCFL,(-4L),0x655668FAL,(-5L),(-5L)},{0xA956A734L,0x7885F24CL,0xA956A734L,1L,0x308822BFL},{0x655668FAL,(-4L),0x9E6FECCFL,(-8L),(-1L)},{0x13A4333DL,1L,1L,0x13A4333DL,0xA956A734L}},{{(-8L),0x413093C4L,0x9E6FECCFL,(-1L),(-4L)},{0x201BA51EL,0L,0xA956A734L,0L,0x201BA51EL},{0x413093C4L,(-8L),0x655668FAL,(-1L),0x4EF7DB56L},{0x29108F75L,1L,0x13A4333DL,0x13A4333DL,1L}},{{(-5L),0x9E6FECCFL,(-8L),(-8L),0x4EF7DB56L},{0L,0x13A4333DL,0x201BA51EL,1L,0x201BA51EL},{0x4EF7DB56L,(-8L),(-5L),(-8L),0xDFA11A07L},{1L,0x7885F24CL,(-5L),0x201BA51EL,0x201BA51EL}}};
                    int32_t **l_2393[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_2393[i] = &g_171;
                    if ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((l_2355 > (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((**g_414), (p_42 , (****g_649)))), p_44))) > p_44), 7)), 0xC295L)))
                    {
                        int32_t *l_2365 = &l_2088[g_4];
                        int32_t *l_2366 = &g_322;
                        int32_t *l_2367 = (void*)0;
                        int32_t *l_2368 = &l_2088[g_4];
                        int32_t *l_2369 = &g_1728;
                        int32_t *l_2370 = &g_935;
                        int32_t *l_2371 = &l_2087;
                        int32_t *l_2372 = &l_2127[3][0];
                        int32_t *l_2373 = &l_2127[4][0];
                        int32_t *l_2375[8][3][1];
                        int32_t ***l_2387[5];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_2375[i][j][k] = &g_1728;
                            }
                        }
                        for (i = 0; i < 5; i++)
                            l_2387[i] = &g_1903;
                        if ((*p_43))
                            break;
                        ++l_2384;
                        (***g_1291) = (-2L);
                        l_2388 = (void*)0;
                    }
                    else
                    {
                        (*l_1975) = p_43;


                        if ((*p_43))
                            continue;
                        (****g_1290) = (safe_lshift_func_int8_t_s_u(p_41, 1));
                        (*g_2392) = (***g_1290);

                        ((g_35 == &g_935) ? (void) (0) : __assert_fail ("g_35 == &g_935", "9.c", 1231, __PRETTY_FUNCTION__));
                    }


                    p_43 = (*l_1975);


                }
                else
                {
                    int64_t l_2396 = (-10L);
                    int32_t l_2398 = 0x12DBB542L;
                    int32_t l_2399 = 0xC11BC0E2L;
                    for (g_988 = 0; (g_988 <= 3); g_988 += 1)
                    {
                        int32_t *l_2395[3][5];
                        int32_t l_2403[3][3] = {{0xF75CD1C5L,0xF75CD1C5L,0xF75CD1C5L},{(-3L),0x607BF202L,(-3L)},{0xF75CD1C5L,0xF75CD1C5L,0xF75CD1C5L}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_2395[i][j] = (void*)0;
                        }
                        (*g_2394) = (*l_1975);
                        ++l_2400;
                        p_43 = ((*l_1975) = (*g_297));
                        l_2403[2][2] &= l_2397[0];
                    }



                }




                --l_2408;
                if (((****g_1290) ^= (-5L)))
                {
                    int32_t *l_2411 = &g_935;
                    return l_2411;




                }
                else
                {
                    uint64_t l_2414 = 18446744073709551615UL;
                    l_2412 = ((*l_1975) = p_43);


                    for (l_2380 = 0; (l_2380 <= 3); l_2380 += 1)
                    {
                        uint16_t l_2417 = 6UL;
                        l_2414--;
                        if (l_2417)
                            continue;
                        (***g_1291) = (safe_mod_func_uint64_t_u_u((l_2383 || p_42), (safe_lshift_func_int16_t_s_u(p_44, 5))));
                        if ((****g_1290))
                            break;
                    }
                    return l_2422;




                }
            }
            (***g_1291) &= ((*l_2412) = 0x5E6FC3CFL);
        }
    }




    ((g_354 == &g_4 || g_354 == &g_53) ? (void) (0) : __assert_fail ("g_354 == &g_4 || g_354 == &g_53", "9.c", 1307, __PRETTY_FUNCTION__));

    (*g_921) = &l_1976;

    ((g_184 == &l_1976) ? (void) (0) : __assert_fail ("g_184 == &l_1976", "9.c", 1311, __PRETTY_FUNCTION__));
    return p_43;



}







static int8_t func_46(int32_t ** p_47, uint32_t p_48, const int8_t p_49)
{
    int8_t l_1910[5][10][5] = {{{0x1FL,(-2L),0x01L,0x96L,0x36L},{0L,0xE4L,0x47L,(-10L),0xE2L},{0x1FL,0x76L,0xBAL,0x69L,0xBAL},{0xF1L,0xF1L,0x80L,0xE2L,0x14L},{0x76L,0x1FL,(-9L),0x76L,(-2L)},{0xE4L,0L,(-1L),0x09L,0L},{(-2L),0x1FL,1L,0x36L,0x36L},{0x95L,0xF1L,0x95L,(-1L),(-10L)},{0x69L,0x76L,0x41L,0x66L,(-1L)},{0x2BL,0xE4L,0xD9L,0xE2L,0xF1L}},{{0xBAL,(-2L),0x41L,(-1L),4L},{0xE4L,0x95L,0x95L,0xE4L,0x9FL},{0x66L,0x69L,1L,0x96L,0x69L},{0x9FL,0x2BL,(-1L),0x47L,(-10L)},{0x1FL,0xBAL,(-9L),0x96L,0x41L},{0xE2L,0xE4L,0x07L,0x14L,0x2BL},{0x76L,4L,0x41L,(-9L),0x36L},{(-10L),0x47L,(-1L),0x2BL,0x9FL},{4L,0x66L,0x53L,4L,0x36L},{0L,0x2BL,0L,0L,0x2BL}},{{0x36L,0x76L,(-1L),0x96L,0L},{0xE4L,(-10L),0x64L,0xE2L,0x09L},{(-9L),4L,0L,0x62L,0x1FL},{0xE4L,0L,0x47L,0x2BL,0x47L},{0x36L,0x36L,1L,0x1FL,(-2L)},{0L,0xE4L,(-10L),0L,(-10L)},{4L,(-9L),(-1L),0x69L,(-9L)},{(-10L),0xE4L,2L,0x09L,0x09L},{0x76L,0x36L,0x76L,(-1L),0x96L},{0x2BL,0L,(-1L),0x14L,0x95L}},{{0x66L,4L,0x93L,0x1FL,0x36L},{0x47L,(-10L),(-1L),0x95L,0xF1L},{4L,0x76L,0x76L,4L,0x41L},{0x14L,0x2BL,2L,0xE2L,0x2BL},{0x41L,0x66L,(-1L),(-1L),0xBAL},{0L,0L,2L,0x47L,0xD9L},{0L,(-9L),(-2L),(-9L),0L},{2L,0x95L,0L,0x07L,0L},{0x62L,0xEFL,(-1L),0L,0x53L},{0x95L,0L,0xE2L,0x95L,0L}},{{0x01L,0L,0x93L,0x93L,0L},{0L,2L,0x80L,0x9FL,0xD9L},{(-1L),0x62L,0x69L,0x41L,0xBAL},{0x07L,0x95L,0xD9L,0xB1L,(-1L)},{(-1L),0x01L,0xEFL,0L,0xEFL},{0L,0L,0xF1L,(-1L),(-10L)},{0x01L,(-1L),0L,0x01L,0x62L},{0x95L,0x07L,0x80L,0x47L,0x07L},{0x62L,(-1L),0x36L,0xBAL,0xBAL},{2L,0L,2L,0x80L,0x9FL}}};
    int32_t l_1920 = (-6L);
    int32_t l_1921 = (-4L);
    int32_t l_1922[7][5] = {{(-1L),0x5543D0BEL,5L,(-1L),5L},{(-1L),(-1L),0xEC447347L,(-1L),0x896E94AAL},{0x9D8EEB6EL,0x896E94AAL,5L,5L,0x896E94AAL},{0x896E94AAL,0x5543D0BEL,0x9D8EEB6EL,(-1L),0x5543D0BEL},{(-1L),(-1L),0x781368C2L,(-1L),(-1L)},{5L,0x896E94AAL,0x9D8EEB6EL,0x5543D0BEL,0x896E94AAL},{(-1L),0x9D8EEB6EL,0x9D8EEB6EL,(-1L),0x5543D0BEL}};
    int32_t *l_1929 = &l_1921;
    int32_t l_1944 = 1L;
    uint8_t l_1945 = 0UL;
    int8_t l_1962 = 0xE8L;
    struct S0 l_1963 = {111,-3,8L};
    int32_t *l_1965 = &g_4;
    int32_t **l_1964 = &l_1965;
    int i, j, k;
    for (g_742 = (-4); (g_742 != (-15)); g_742 = safe_sub_func_uint64_t_u_u(g_742, 5))
    {
        uint32_t l_1913 = 0xA7D3CB66L;
        int32_t l_1914 = 4L;
        int32_t l_1915 = 0L;
        int32_t l_1923[8] = {(-1L),(-1L),0x94375017L,(-1L),(-1L),0x94375017L,(-1L),(-1L)};
        int32_t *l_1930 = &g_1726[3];
        int32_t *l_1931 = &g_1727;
        int32_t *l_1932 = &l_1920;
        int32_t *l_1933 = &l_1923[5];
        int32_t *l_1934 = &g_322;
        int32_t *l_1935 = &g_846;
        int32_t *l_1936 = &g_1726[3];
        int32_t *l_1937 = (void*)0;
        int32_t *l_1938 = &g_1726[7];
        int32_t *l_1939 = &l_1921;
        int32_t *l_1940 = (void*)0;
        int32_t l_1941 = 0x3F936594L;
        int32_t *l_1942[6];
        int8_t l_1943[8] = {0xFFL,0x4EL,0xFFL,0xFFL,0x4EL,0xFFL,0xFFL,0x4EL};
        int i;
        for (i = 0; i < 6; i++)
            l_1942[i] = &g_1727;
        for (g_164 = 0; (g_164 >= 9); g_164 = safe_add_func_uint8_t_u_u(g_164, 8))
        {
            int32_t *l_1916 = &g_1726[3];
            int32_t *l_1917 = &g_846;
            int32_t l_1918 = (-1L);
            int32_t *l_1919[10][3][8] = {{{&g_1728,(void*)0,&g_1726[4],&g_1723,&g_322,&g_57,(void*)0,&g_322},{&g_1726[4],&g_322,&g_57,&g_1726[4],&g_1728,&g_1726[3],(void*)0,(void*)0},{(void*)0,&g_1726[4],&g_1726[4],&g_57,&g_1723,&g_1727,(void*)0,&g_57}},{{&g_1723,&g_1727,(void*)0,&g_57,&g_322,&g_322,&g_57,(void*)0},{&g_322,&g_322,&g_1726[6],&g_1728,&l_1914,&l_1918,(void*)0,(void*)0},{&g_1726[4],&g_1725,&g_54,(void*)0,&g_1723,&g_53,&g_322,(void*)0}},{{&g_1725,&g_322,&l_1915,&g_1728,&g_54,&l_1915,&l_1914,(void*)0},{&g_1726[4],&g_1723,(void*)0,&g_57,&g_322,(void*)0,&g_53,(void*)0},{(void*)0,&g_57,(void*)0,&g_1726[6],(void*)0,&g_322,&g_1726[3],&g_322}},{{&g_322,(void*)0,&l_1918,&g_54,(void*)0,&g_1726[3],(void*)0,&g_54},{&g_322,&g_1724,&g_322,&l_1915,(void*)0,(void*)0,&g_322,&g_1724},{(void*)0,&g_322,&g_322,(void*)0,&g_53,&g_1726[6],&g_1726[6],&g_53}},{{&g_54,&g_54,&g_54,&g_54,(void*)0,&g_54,&g_1727,&g_1726[3]},{&g_322,&g_54,&g_57,&g_1727,&g_1725,&g_1728,&g_322,(void*)0},{&g_322,&g_54,&g_57,&g_53,&g_1724,&g_54,&g_53,&g_322}},{{&g_53,&g_54,&l_1918,&g_1726[4],&g_54,&g_1726[6],&g_322,&g_1726[6]},{&g_1725,&g_322,&g_1723,&g_322,&g_1725,(void*)0,&g_53,&g_1727},{&g_57,&g_1724,&g_1726[3],(void*)0,&g_1726[4],&g_1726[3],&g_54,&g_322}},{{&g_54,(void*)0,&g_1726[3],(void*)0,&g_54,&g_322,&g_53,&g_53},{&g_1726[4],&g_57,&g_1723,&g_1727,(void*)0,&g_57,&g_54,&g_54},{&l_1918,&g_1727,&g_57,&g_57,&g_1727,&l_1918,&g_1726[3],&g_57}},{{&g_54,(void*)0,&g_54,&g_1727,&g_1726[3],&g_1726[6],&g_1724,(void*)0},{&g_53,&g_1724,(void*)0,&g_1727,&g_57,&g_1725,(void*)0,&g_57},{&g_57,&g_57,&l_1918,&g_57,&g_53,(void*)0,&g_53,&g_54}},{{&g_1724,&g_57,(void*)0,(void*)0,(void*)0,&g_57,&g_1724,&g_1726[3]},{&l_1915,&g_322,&g_4,&g_322,&g_1726[4],&g_1723,&g_322,&g_1724},{&l_1918,&g_57,&g_57,&g_54,&g_1726[4],&g_53,&l_1918,(void*)0}},{{&l_1915,&g_54,&g_54,&g_1724,(void*)0,&g_1726[6],&g_57,&g_53},{&g_1724,&g_1726[4],&g_1728,&g_53,&g_53,&g_1728,&g_1726[4],&g_1724},{&g_57,&g_1727,&l_1918,&g_1726[3],&g_57,(void*)0,&l_1918,&g_322}}};
            int32_t **l_1928 = &l_1919[2][2][0];
            int i, j, k;
            l_1910[1][0][1] |= (**p_47);
            (*g_171) ^= (safe_rshift_func_int8_t_s_u(l_1913, 7));
            g_1925[6]--;
            (*l_1928) = (*g_297);
        }
        l_1929 = (*g_34);


        ++l_1945;
    }


    (*l_1964) = ((func_86(((safe_lshift_func_uint16_t_u_s((((****g_1290) = (safe_sub_func_uint16_t_u_u((*l_1929), (((void*)0 != (**g_783)) <= (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0L, (safe_mul_func_int8_t_s_s(p_48, (safe_add_func_int8_t_s_s(l_1962, (*l_1929))))))), (**p_47))), (p_48 , (**g_689)))))))) && (**p_47)), (**g_689))) & (**p_47)), l_1963, g_57, (*l_1929)) & p_48) , &l_1920);

    ((l_1965 == &l_1920) ? (void) (0) : __assert_fail ("l_1965 == &l_1920", "9.c", 1383, __PRETTY_FUNCTION__));
    return p_49;
}







static int32_t ** func_50(uint8_t p_51)
{
    struct S0 l_97[9][7][4] = {{{{35,-2,0L},{238,-4,0xA1L},{238,-4,0xA1L},{35,-2,0L}},{{32,-3,0x6DL},{36,4,2L},{128,1,0L},{82,-4,-1L}},{{20,0,0xA1L},{78,2,0x32L},{59,1,-1L},{46,-4,0x87L}},{{231,-4,0xCBL},{109,4,0xBAL},{239,-0,0x10L},{84,2,4L}},{{1,0,0x5DL},{128,1,0L},{246,2,0x8EL},{56,-0,-7L}},{{82,-4,-1L},{122,1,0xDEL},{149,-1,1L},{82,-4,-1L}},{{188,-4,0xD1L},{239,-0,0x10L},{56,2,0xA1L},{32,-3,0x6DL}}},{{{56,-0,-7L},{128,1,0L},{56,2,0xA1L},{69,0,-7L}},{{188,-4,0xD1L},{32,-1,-1L},{149,-1,1L},{84,2,4L}},{{82,-4,-1L},{59,1,-1L},{246,2,0x8EL},{32,-3,0x6DL}},{{1,0,0x5DL},{122,1,0xDEL},{239,-0,0x10L},{1,0,0x5DL}},{{188,-4,0xD1L},{122,1,0xDEL},{25,2,0xC2L},{32,-3,0x6DL}},{{32,-3,0x6DL},{59,1,-1L},{56,2,0xA1L},{84,2,4L}},{{219,0,8L},{32,-1,-1L},{239,-0,0x10L},{69,0,-7L}}},{{{82,-4,-1L},{128,1,0L},{36,4,2L},{32,-3,0x6DL}},{{82,-4,-1L},{239,-0,0x10L},{239,-0,0x10L},{82,-4,-1L}},{{219,0,8L},{122,1,0xDEL},{56,2,0xA1L},{56,-0,-7L}},{{32,-3,0x6DL},{128,1,0L},{25,2,0xC2L},{84,2,4L}},{{188,-4,0xD1L},{109,4,0xBAL},{239,-0,0x10L},{84,2,4L}},{{1,0,0x5DL},{128,1,0L},{246,2,0x8EL},{56,-0,-7L}},{{82,-4,-1L},{122,1,0xDEL},{149,-1,1L},{82,-4,-1L}}},{{{188,-4,0xD1L},{239,-0,0x10L},{56,2,0xA1L},{32,-3,0x6DL}},{{56,-0,-7L},{128,1,0L},{56,2,0xA1L},{69,0,-7L}},{{188,-4,0xD1L},{32,-1,-1L},{149,-1,1L},{84,2,4L}},{{82,-4,-1L},{59,1,-1L},{246,2,0x8EL},{32,-3,0x6DL}},{{1,0,0x5DL},{122,1,0xDEL},{239,-0,0x10L},{1,0,0x5DL}},{{188,-4,0xD1L},{122,1,0xDEL},{25,2,0xC2L},{32,-3,0x6DL}},{{84,2,4L},{239,-0,0x10L},{109,4,0xBAL},{188,-4,0xD1L}}},{{{1,0,0x5DL},{238,-4,0xA1L},{56,2,0xA1L},{219,0,8L}},{{254,0,-8L},{122,1,0xDEL},{50,2,0x74L},{84,2,4L}},{{254,0,-8L},{56,2,0xA1L},{56,2,0xA1L},{254,0,-8L}},{{1,0,0x5DL},{251,-1,-10L},{109,4,0xBAL},{69,0,-7L}},{{84,2,4L},{122,1,0xDEL},{78,2,0x32L},{188,-4,0xD1L}},{{82,-4,-1L},{246,2,0x8EL},{56,2,0xA1L},{188,-4,0xD1L}},{{51,-4,0xE1L},{122,1,0xDEL},{59,1,-1L},{69,0,-7L}}},{{{254,0,-8L},{251,-1,-10L},{25,2,0xC2L},{254,0,-8L}},{{82,-4,-1L},{56,2,0xA1L},{109,4,0xBAL},{84,2,4L}},{{69,0,-7L},{122,1,0xDEL},{109,4,0xBAL},{219,0,8L}},{{82,-4,-1L},{238,-4,0xA1L},{25,2,0xC2L},{188,-4,0xD1L}},{{254,0,-8L},{239,-0,0x10L},{59,1,-1L},{84,2,4L}},{{51,-4,0xE1L},{251,-1,-10L},{56,2,0xA1L},{51,-4,0xE1L}},{{82,-4,-1L},{251,-1,-10L},{78,2,0x32L},{84,2,4L}}},{{{84,2,4L},{239,-0,0x10L},{109,4,0xBAL},{188,-4,0xD1L}},{{1,0,0x5DL},{238,-4,0xA1L},{56,2,0xA1L},{219,0,8L}},{{254,0,-8L},{122,1,0xDEL},{50,2,0x74L},{84,2,4L}},{{254,0,-8L},{56,2,0xA1L},{56,2,0xA1L},{254,0,-8L}},{{1,0,0x5DL},{251,-1,-10L},{109,4,0xBAL},{69,0,-7L}},{{84,2,4L},{122,1,0xDEL},{78,2,0x32L},{188,-4,0xD1L}},{{82,-4,-1L},{246,2,0x8EL},{56,2,0xA1L},{188,-4,0xD1L}}},{{{51,-4,0xE1L},{122,1,0xDEL},{59,1,-1L},{69,0,-7L}},{{254,0,-8L},{251,-1,-10L},{25,2,0xC2L},{254,0,-8L}},{{56,-0,-7L},{36,4,2L},{50,2,0x74L},{1,0,0x5DL}},{{20,0,0xA1L},{109,4,0xBAL},{50,2,0x74L},{46,-4,0x87L}},{{56,-0,-7L},{239,-0,0x10L},{238,-4,0xA1L},{51,-4,0xE1L}},{{69,0,-7L},{78,2,0x32L},{25,2,0xC2L},{1,0,0x5DL}},{{35,-2,0L},{246,2,0x8EL},{36,4,2L},{35,-2,0L}}},{{{56,-0,-7L},{246,2,0x8EL},{128,1,0L},{1,0,0x5DL}},{{1,0,0x5DL},{78,2,0x32L},{50,2,0x74L},{51,-4,0xE1L}},{{231,-4,0xCBL},{239,-0,0x10L},{36,4,2L},{46,-4,0x87L}},{{69,0,-7L},{109,4,0xBAL},{251,-1,-10L},{1,0,0x5DL}},{{69,0,-7L},{36,4,2L},{36,4,2L},{69,0,-7L}},{{231,-4,0xCBL},{246,2,0x8EL},{50,2,0x74L},{20,0,0xA1L}},{{1,0,0x5DL},{109,4,0xBAL},{128,1,0L},{51,-4,0xE1L}}}};
    int32_t *l_278 = &g_4;
    uint8_t **l_1733 = (void*)0;
    int32_t l_1735 = 0L;
    int32_t l_1738 = 0xB9074BC7L;
    int32_t l_1740 = (-8L);
    int32_t l_1747 = 0xEC9D84B1L;
    int32_t l_1748[10];
    int32_t **l_1775 = (void*)0;
    int32_t *l_1786 = &l_1748[7];
    uint32_t l_1790 = 18446744073709551615UL;
    uint16_t **l_1797 = (void*)0;
    int32_t **l_1829 = &l_278;
    int32_t l_1838 = 8L;
    int32_t **l_1889 = &g_35;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1748[i] = 0x4806473CL;
    if ((*g_35))
    {
        int16_t l_74 = 0xBE67L;
        uint8_t **l_1732 = &g_785[0];
        uint8_t **l_1734 = &g_785[0];
        int32_t l_1737 = 0x9CEE28C9L;
        int32_t l_1744 = 0x93700861L;
        int32_t l_1745 = 0xD993EA59L;
        int32_t l_1751 = 1L;
        int32_t l_1753 = 0L;
        int32_t l_1754 = 0L;
        int32_t l_1756 = 1L;
        int32_t l_1757 = (-1L);
        int32_t l_1759 = (-1L);
        int32_t l_1762 = (-4L);
        int32_t l_1763[6][1] = {{0xF529A5E1L},{(-10L)},{0xF529A5E1L},{0xF529A5E1L},{(-10L)},{0xF529A5E1L}};
        int32_t **l_1774[1][1];
        uint32_t l_1789 = 0x090D0453L;
        uint16_t l_1801[4] = {0x2E9EL,0x2E9EL,0x2E9EL,0x2E9EL};
        struct S0 *l_1810 = &l_97[5][4][2];
        int32_t *l_1832 = &g_211;
        uint8_t l_1841 = 0x82L;
        uint64_t l_1845 = 0xCE6966006FFA6133LL;
        const int64_t *l_1849 = &g_533;
        const int64_t **l_1848 = &l_1849;
        const int64_t ***l_1847 = &l_1848;
        const int64_t ****l_1846 = &l_1847;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1774[i][j] = &l_278;
        }
        for (p_51 = 0; (p_51 <= 3); p_51 += 1)
        {
            int64_t l_68 = (-5L);
            int32_t l_96 = 0xF6575EB9L;
            int32_t l_98 = 0x089D5723L;
            int32_t *l_570 = &g_4;
            int32_t l_1741 = 1L;
            int32_t l_1743 = (-2L);
            int32_t l_1750[3][3] = {{1L,1L,1L},{0x36845AF8L,0x08959090L,0x36845AF8L},{1L,1L,1L}};
            int64_t l_1758 = 1L;
            int32_t l_1760[3][4][1];
            uint8_t l_1764 = 0xB9L;
            const int32_t * const *l_1777 = &g_354;
            uint32_t l_1785[8][5][6] = {{{0xBC67A94FL,0xC0136009L,18446744073709551613UL,1UL,18446744073709551613UL,0xC0136009L},{0x6BFA9C18L,0x46EC25E2L,0x3A0FE8ACL,1UL,0xA2A0E692L,1UL},{0xBFC735E5L,1UL,0xBBC8EBB6L,0xC0136009L,18446744073709551615UL,0xE7A048C9L},{9UL,1UL,18446744073709551615UL,0x797750E5L,0xA2A0E692L,0UL},{18446744073709551613UL,0x46EC25E2L,0x1D8A4D54L,0x46EC25E2L,18446744073709551615UL,1UL}},{{18446744073709551606UL,0x46EC25E2L,0x7D1C9BA8L,0xE7A048C9L,0x6BFA9C18L,0UL},{0xBC67A94FL,0x26D5CE32L,1UL,0x46EC25E2L,0xC579EE3DL,0UL},{9UL,0UL,0x7D1C9BA8L,1UL,18446744073709551615UL,1UL},{0xC579EE3DL,0UL,0xC579EE3DL,0x797750E5L,0xBFC735E5L,1UL},{0x7D1C9BA8L,0UL,9UL,0x37019865L,0xA2A0E692L,0xC0136009L}},{{1UL,0x26D5CE32L,0xBC67A94FL,0x37019865L,0x1D8A4D54L,0x797750E5L},{0x7D1C9BA8L,0x46EC25E2L,18446744073709551606UL,0x797750E5L,18446744073709551606UL,0x46EC25E2L},{0xC579EE3DL,0x4250A066L,18446744073709551615UL,1UL,1UL,0x797750E5L},{9UL,1UL,18446744073709551615UL,0x46EC25E2L,0UL,0xC0136009L},{0xBC67A94FL,1UL,0xBBC8EBB6L,0xE7A048C9L,1UL,1UL}},{{18446744073709551606UL,0x4250A066L,0xA2A0E692L,0x4250A066L,18446744073709551606UL,1UL},{18446744073709551615UL,0x46EC25E2L,1UL,0xE7A048C9L,0x1D8A4D54L,0UL},{18446744073709551615UL,0x26D5CE32L,0x4FD7878FL,0x46EC25E2L,0xA2A0E692L,0UL},{0xBBC8EBB6L,0UL,1UL,1UL,0xBFC735E5L,1UL},{0xA2A0E692L,0UL,0xA2A0E692L,0x797750E5L,18446744073709551615UL,1UL}},{{1UL,0UL,0xBBC8EBB6L,1UL,18446744073709551615UL,0UL},{0UL,1UL,0xA2A0E692L,1UL,0x3A0FE8ACL,0x46EC25E2L},{1UL,0x37019865L,0xBFC735E5L,0x46EC25E2L,0xBFC735E5L,0x37019865L},{18446744073709551606UL,0x26D5CE32L,18446744073709551615UL,0xC0136009L,0UL,0x46EC25E2L},{0x1D8A4D54L,0xC0136009L,0xC579EE3DL,0x37019865L,0xBBC8EBB6L,0UL}},{{0xA2A0E692L,0xC0136009L,0x6BFA9C18L,0x4250A066L,0UL,0xE7A048C9L},{0xBFC735E5L,0x26D5CE32L,18446744073709551615UL,0x26D5CE32L,0xBFC735E5L,0xC0136009L},{18446744073709551615UL,0x37019865L,0x4FD7878FL,0x4250A066L,0x3A0FE8ACL,0UL},{0xC579EE3DL,1UL,1UL,0x37019865L,18446744073709551615UL,0UL},{0x6BFA9C18L,0UL,0x4FD7878FL,0xC0136009L,0x7D1C9BA8L,0xC0136009L}},{{18446744073709551615UL,0x797750E5L,18446744073709551615UL,0x46EC25E2L,1UL,0xE7A048C9L},{0x4FD7878FL,0UL,0x6BFA9C18L,1UL,18446744073709551606UL,0UL},{1UL,1UL,0xC579EE3DL,1UL,18446744073709551613UL,0x46EC25E2L},{0x4FD7878FL,0x37019865L,18446744073709551615UL,0x46EC25E2L,18446744073709551615UL,0x37019865L},{18446744073709551615UL,0x26D5CE32L,0xBFC735E5L,0xC0136009L,1UL,0x46EC25E2L}},{{0x6BFA9C18L,0xC0136009L,0xA2A0E692L,0x37019865L,9UL,0UL},{0xC579EE3DL,0xC0136009L,0x1D8A4D54L,0UL,0xF2C05DE9L,0xC0136009L},{9UL,0UL,0UL,0UL,9UL,0x46EC25E2L},{0xBBC8EBB6L,0x26D5CE32L,18446744073709551613UL,0UL,18446744073709551615UL,1UL},{0x4FD7878FL,0x797750E5L,18446744073709551615UL,0x26D5CE32L,0UL,1UL}}};
            uint16_t **l_1807 = (void*)0;
            int32_t *l_1837 = &l_1750[0][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1760[i][j][k] = 1L;
                }
            }
            for (g_4 = 0; (g_4 <= 3); g_4 += 1)
            {
                int64_t *l_95[10][7][1] = {{{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68}},{{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55}},{{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68}},{{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55}},{{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68}},{{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55}},{{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68}},{{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55}},{{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68}},{{&g_55},{&l_68},{&g_55},{&l_68},{&g_55},{&l_68},{&g_55}}};
                int32_t *l_321 = &g_322;
                int32_t *l_324 = &g_322;
                int32_t **l_323 = &l_324;
                int32_t * const l_1721[1][3][6] = {{{&g_1725,&g_1723,&g_1725,&g_1723,&g_1725,&g_1723},{(void*)0,&g_1723,(void*)0,&g_1723,(void*)0,&g_1723},{&g_1725,&g_1723,&g_1725,&g_1723,&g_1725,&g_1723}}};
                int32_t * const *l_1720 = &l_1721[0][0][0];
                int i, j, k;
                for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                {
                    for (g_54 = 3; (g_54 >= 0); g_54 -= 1)
                    {
                        int32_t *l_56 = &g_57;
                        int i, j, k;
                        (*l_56) = (g_55 = g_28[(g_53 + 2)][p_51][(p_51 + 3)]);
                    }
                }
            }
            for (g_533 = 0; (g_533 <= 3); g_533 += 1)
            {
                uint64_t *l_1794[1];
                int32_t l_1804 = 0x11DAF7CFL;
                int32_t l_1805 = 0x6BA7860AL;
                struct S0 l_1827[1][9] = {{{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L},{56,0,9L}}};
                int32_t l_1839 = 1L;
                int32_t l_1840 = 0x5794F23AL;
                int64_t *l_1858 = &l_1758;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1794[i] = &g_416;
                for (g_277 = 0; (g_277 <= 3); g_277 += 1)
                {
                    int32_t l_1800[3][5][8] = {{{0L,0L,0xC999DDE4L,0x662E38B1L,0x01BBB9A0L,0x9302B8BCL,0x3788C7B8L,0L},{(-10L),0xC69AD0F9L,(-5L),9L,0x3788C7B8L,(-5L),0x73D8B2EFL,0L},{0xC69AD0F9L,(-1L),(-10L),0x662E38B1L,(-10L),(-1L),0xC69AD0F9L,0x73D8B2EFL},{9L,0x662E38B1L,1L,0x7C41504BL,0x662E38B1L,0L,0x3788C7B8L,9L},{0xB5496BFDL,9L,9L,(-1L),0x662E38B1L,(-5L),(-5L),0x662E38B1L}},{{9L,0x73D8B2EFL,0x73D8B2EFL,9L,(-10L),0xB5496BFDL,0L,(-1L)},{0xC69AD0F9L,0L,0xE2F85012L,0x7C41504BL,0x3788C7B8L,0xC999DDE4L,0x7C41504BL,0xC69AD0F9L},{(-10L),0L,9L,0xB5496BFDL,0x01BBB9A0L,0xB5496BFDL,9L,0L},{0L,0x73D8B2EFL,(-5L),0x3788C7B8L,9L,(-5L),0xC69AD0F9L,(-10L)},{9L,0x01BBB9A0L,0xC999DDE4L,0xC69AD0F9L,0x3788C7B8L,0x1C921EBFL,9L,9L}},{{(-2L),0xC69AD0F9L,0xB5496BFDL,0xB5496BFDL,0xC69AD0F9L,(-2L),(-5L),0x01BBB9A0L},{0xC69AD0F9L,(-2L),(-5L),0x01BBB9A0L,0x73D8B2EFL,0xB5496BFDL,0x662E38B1L,0x73D8B2EFL},{0x01BBB9A0L,9L,0L,0x01BBB9A0L,0x3788C7B8L,0xE2F85012L,0x3788C7B8L,0x01BBB9A0L},{(-1L),0x3788C7B8L,(-1L),0xB5496BFDL,0x7C41504BL,(-5L),0xB5496BFDL,9L},{0x3788C7B8L,9L,(-5L),0xC69AD0F9L,(-10L),0x73D8B2EFL,0x7C41504BL,9L}}};
                    int16_t *l_1802 = (void*)0;
                    int16_t *l_1803[7][4][1] = {{{&g_318},{&g_318},{&g_740},{&g_25}},{{&g_318},{&g_740},{&g_25},{&g_25}},{{&g_740},{&g_318},{&g_25},{&g_740}},{{&g_318},{&g_318},{&g_318},{&g_740}},{{&g_25},{&g_318},{&g_740},{&g_25}},{{&g_25},{&g_740},{&g_318},{&g_25}},{{&g_740},{&g_318},{&g_318},{&g_318}}};
                    uint16_t *l_1806 = &g_452;
                    int32_t **l_1830 = &l_278;
                    int32_t *l_1844 = &g_935;
                    int i, j, k;
                    if ((safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_int64_t_s(((void*)0 == l_1794[0]))) | ((safe_mod_func_int16_t_s_s((l_1797 == (((safe_rshift_func_uint16_t_u_s(((*l_1806) = (((l_1804 ^= ((((l_1800[1][1][7] = g_28[(p_51 + 2)][g_277][(g_533 + 1)]) == (0xC3CFL ^ (*l_570))) > p_51) , ((l_1801[3] > (((*g_171) & (-1L)) == 0L)) <= 0x94EE3061L))) < l_1805) ^ l_1805)), 12)) != 0xAD3ABC28L) , l_1807)), p_51)) > p_51)) > (**g_297)), p_51)))
                    {
                        uint32_t l_1808 = 0x242E0239L;
                        struct S0 l_1809 = {145,3,4L};
                        uint16_t l_1828 = 0xF73AL;
                        if (l_1805)
                            break;
                        if ((*g_354))
                            break;
                        l_1805 = func_86(l_1808, l_1809, func_86((l_1810 != (*g_299)), ((safe_rshift_func_int8_t_s_s((p_51 < (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((l_1808 ^ (((p_51 , (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((p_51 < (((safe_add_func_uint32_t_u_u(4294967291UL, p_51)) || p_51) >= p_51)), (*l_1786))) == p_51), p_51)), 18446744073709551610UL))) == p_51) , 0xC4EAL)) , p_51) , p_51), 5)), g_1726[3]))), 1)) , l_1827[0][1]), g_988, l_1828), g_744);
                        return &g_171;


                    }
                    else
                    {
                        uint16_t l_1831 = 65526UL;
                        int32_t *l_1834[2];
                        int32_t **l_1833 = &l_1834[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1834[i] = &g_211;
                        (*l_1786) = func_86(p_51, ((((~l_1831) <= ((**g_367) , p_51)) || ((**l_1829) = (l_1832 == ((*l_1833) = &g_211)))) , l_97[8][5][1]), g_868, ((safe_mod_func_uint64_t_u_u(p_51, l_1831)) , 1L));
                        (*g_476) = (*l_1830);
                        l_1837 = (*l_1829);

                        ((l_1837 == &g_4) ? (void) (0) : __assert_fail ("l_1837 == &g_4", "9.c", 1537, __PRETTY_FUNCTION__));
                    }

                    ((l_1837 == &g_4) ? (void) (0) : __assert_fail ("l_1837 == &g_4", "9.c", 1540, __PRETTY_FUNCTION__));
                    l_1841++;
                    (*g_427) = (l_1844 = (*l_1830));

                    ((l_1844 == &g_4) ? (void) (0) : __assert_fail ("l_1844 == &g_4", "9.c", 1544, __PRETTY_FUNCTION__));
                }


                ((l_1837 == &g_4 || (l_1837 >= &l_1750[0][0] && l_1837 <= &l_1750[2][2])) ? (void) (0) : __assert_fail ("l_1837 == &g_4 || (l_1837 >= &l_1750[0][0] && l_1837 <= &l_1750[2][2])", "9.c", 1548, __PRETTY_FUNCTION__));
                (***g_1291) |= (((l_1845 != ((&g_650 != l_1846) , ((*l_1858) = ((safe_sub_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(((p_51 || (((safe_rshift_func_uint16_t_u_s(65535UL, p_51)) >= (((l_1840 <= (*g_1512)) && (safe_mod_func_int8_t_s_s(((*g_1512) = (0x51F5BEE5L != (**g_476))), l_1839))) & p_51)) <= p_51)) > 8L), 8L)) <= (**g_651)) && p_51) , (*l_570)) , 0x4F5DL), (**l_1777))) , (-6L))))) <= l_1839) ^ (*g_690));
                return &g_171;


            }
        }
        (*l_1786) = (0L | (((((void*)0 != &l_1846) || (*l_278)) | (***g_650)) | p_51));
    }
    else
    {
        int32_t **l_1859 = &l_278;
        return &g_171;


    }
    for (l_1838 = 0; (l_1838 != 7); ++l_1838)
    {
        uint32_t l_1864 = 0xD0A2FDD5L;
        int32_t * const **l_1865 = &g_933[0];
        int32_t ***l_1869 = &l_1829;
        int32_t ****l_1868 = &l_1869;
        struct S0 l_1874 = {153,4,0xD6L};
        uint32_t l_1886 = 0x66553E57L;
        uint32_t l_1887 = 0x8D2B1262L;
    }
    (*l_1829) = (void*)0;

    ((l_278 == 0) ? (void) (0) : __assert_fail ("l_278 == 0", "9.c", 1576, __PRETTY_FUNCTION__));
    return l_1889;


}







static int32_t func_58(int32_t ** p_59, int64_t p_60, int32_t * p_61, int32_t ** p_62)
{
    int32_t *l_571 = &g_57;
    int32_t *l_572 = (void*)0;
    int32_t l_573 = (-10L);
    uint8_t *l_576 = &g_159[2][4][3];
    uint64_t l_579 = 0x6B2CA10CD24804C6LL;
    int32_t l_584[8][4] = {{0x9F281066L,0x1B87B7E8L,0x1B87B7E8L,0x9F281066L},{0x1B87B7E8L,0x9F281066L,0x1B87B7E8L,0x1B87B7E8L},{0x9F281066L,0x9F281066L,0x0A220296L,0x9F281066L},{0x9F281066L,0x1B87B7E8L,0x1B87B7E8L,0x9F281066L},{0x1B87B7E8L,0x9F281066L,0x1B87B7E8L,0x1B87B7E8L},{0x1B87B7E8L,0x1B87B7E8L,0x9F281066L,0x1B87B7E8L},{0x1B87B7E8L,0x0A220296L,0x0A220296L,0x1B87B7E8L},{0x0A220296L,0x1B87B7E8L,0x0A220296L,0x0A220296L}};
    int32_t *l_587 = &g_211;
    int32_t l_588 = 0x46DE238CL;
    int64_t *l_602[1];
    int64_t **l_601 = &l_602[0];
    int64_t ** const *l_600 = &l_601;
    struct S0 l_622 = {57,0,0x6FL};
    int32_t l_634[10];
    int64_t l_639 = 0L;
    uint64_t **l_658 = &g_415;
    int16_t *l_668 = &g_10;
    int16_t **l_667 = &l_668;
    int32_t **l_675 = &g_35;
    int32_t ***l_674 = &l_675;
    int32_t l_752 = 0x06CFE3D6L;
    uint64_t l_778 = 1UL;
    uint8_t l_931 = 0xF7L;
    int8_t l_960 = 1L;
    int16_t l_1069 = 0xF09FL;
    struct S0 l_1125[5] = {{66,0,0L},{66,0,0L},{66,0,0L},{66,0,0L},{66,0,0L}};
    int64_t l_1275 = 0L;
    int32_t l_1328 = (-1L);
    int16_t l_1360 = 8L;
    int64_t l_1373 = 0L;
    uint8_t l_1374 = 0x87L;
    uint32_t l_1412[3][1];
    int8_t l_1443 = (-1L);
    int32_t l_1453 = (-1L);
    int32_t l_1475 = (-1L);
    uint64_t l_1479 = 1UL;
    uint32_t l_1524[5][3][3] = {{{18446744073709551615UL,0xEB10B8EAL,0UL},{0x09E31176L,0x9D2A06FCL,0x9D2A06FCL},{0UL,0x32624452L,0x9D2A06FCL}},{{0x13F14C07L,18446744073709551615UL,0UL},{6UL,0x13F14C07L,0x80B0F711L},{0x16132F73L,0x43C055B8L,0x32624452L}},{{0x2304B3C7L,0x13F14C07L,0x78C5A82FL},{0xA897E13CL,18446744073709551615UL,0x09E31176L},{0x32624452L,0x32624452L,0x13F14C07L}},{{0x32624452L,0x9D2A06FCL,0x2304B3C7L},{0xA897E13CL,0xEB10B8EAL,0x94B6E75DL},{0x2304B3C7L,0x78C5A82FL,0xA897E13CL}},{{0x16132F73L,0xA897E13CL,0x94B6E75DL},{6UL,18446744073709551612UL,0x2304B3C7L},{0x13F14C07L,18446744073709551615UL,0x13F14C07L}}};
    const struct S0 *l_1556 = &l_1125[3];
    const struct S0 **l_1555 = &l_1556;
    struct S0 **l_1569 = &g_184;
    struct S0 ***l_1581 = (void*)0;
    int32_t l_1603 = 0x0F6B96B3L;
    int32_t *l_1604[1];
    uint32_t l_1628 = 0xBA0DBAD1L;
    uint16_t l_1635 = 0x9986L;
    int8_t l_1665 = 0L;
    uint64_t l_1718 = 18446744073709551609UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_602[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_634[i] = (-1L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1412[i][j] = 0UL;
    }
    for (i = 0; i < 1; i++)
        l_1604[i] = &l_1328;
    if ((((*l_576) = ((l_573 = ((*l_571) = (*p_61))) ^ (safe_mul_func_int16_t_s_s(p_60, 0x1DC6L)))) < (safe_mod_func_int32_t_s_s((l_579 = (*p_61)), (safe_add_func_int8_t_s_s((0x54L >= ((((*l_587) &= (safe_add_func_uint16_t_u_u(((*g_354) | ((l_584[6][3] , 5UL) && (safe_lshift_func_uint16_t_u_u(0x13A8L, 0)))), g_198))) , g_272) != l_588)), g_11))))))
    {
        const uint8_t l_591 = 249UL;
        int32_t l_607 = 0xF65A1DE8L;
        for (p_60 = (-8); (p_60 <= 17); p_60++)
        {
            (*p_59) = (*p_62);


            (*p_62) = (*g_297);
        }



        for (g_53 = 3; (g_53 >= 0); g_53 -= 1)
        {
            int64_t *l_595 = &g_277;
            int64_t *l_596 = (void*)0;
            int64_t *l_597[4] = {&g_533,&g_533,&g_533,&g_533};
            int32_t l_598 = (-3L);
            int16_t *l_599 = &g_318;
            int64_t *l_606[9][2] = {{&g_533,&g_533},{(void*)0,&g_533},{&g_533,(void*)0},{&g_533,&g_533},{(void*)0,&g_533},{&g_533,(void*)0},{&g_533,&g_533},{(void*)0,&g_533},{&g_533,(void*)0}};
            int64_t ** const l_605 = &l_606[5][1];
            int64_t ** const *l_604 = &l_605;
            int64_t ** const **l_603 = &l_604;
            int i, j;
            (*l_571) ^= l_591;
            l_607 = (0x0A3FL ^ (safe_unary_minus_func_int64_t_s(((((safe_sub_func_uint32_t_u_u((((g_533 &= ((*l_595) &= p_60)) == p_60) >= ((*l_599) = ((p_60 , l_598) <= l_598))), p_60)) == (*l_571)) , (((*l_587) = (((*l_603) = l_600) == &l_605)) , g_533)) == 8L))));

            ((l_604 == &l_601) ? (void) (0) : __assert_fail ("l_604 == &l_601", "9.c", 1677, __PRETTY_FUNCTION__));
            return (*l_571);
        }
    }
    else
    {
        int32_t *l_621 = &g_4;
        int32_t l_630[1][6][1];
        int64_t l_635 = 0x11FEC8EB4CCA9569LL;
        uint16_t l_644 = 5UL;
        struct S0 l_735[2][10] = {{{210,-0,0xDDL},{210,-0,0xDDL},{63,3,2L},{210,-0,0xDDL},{210,-0,0xDDL},{63,3,2L},{210,-0,0xDDL},{210,-0,0xDDL},{63,3,2L},{210,-0,0xDDL}},{{210,-0,0xDDL},{206,3,1L},{206,3,1L},{210,-0,0xDDL},{206,3,1L},{206,3,1L},{210,-0,0xDDL},{206,3,1L},{206,3,1L},{210,-0,0xDDL}}};
        int32_t l_775 = 4L;
        uint64_t *l_792[1][5][8] = {{{&l_579,&l_579,&l_579,&l_579,&g_416,&g_416,&l_579,&l_579},{&l_579,&l_579,&g_416,(void*)0,(void*)0,(void*)0,&g_416,&l_579},{&l_579,&l_579,&l_579,&g_416,&g_416,&l_579,&l_579,&l_579},{&l_579,&l_778,&l_579,(void*)0,&l_579,&l_778,&l_579,&l_579},{&l_778,(void*)0,&l_579,&l_579,(void*)0,&l_778,&g_416,&l_778}}};
        int32_t **l_802 = (void*)0;
        int64_t l_814[1][4] = {{0x04D67435E3746280LL,0x04D67435E3746280LL,0x04D67435E3746280LL,0x04D67435E3746280LL}};
        int8_t l_815 = 0xDCL;
        uint64_t l_816 = 0xC5A5CA7719826E3DLL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_630[i][j][k] = 0xB93F4A34L;
            }
        }
        for (g_526 = 0; (g_526 <= 3); g_526 += 1)
        {
            int32_t * const *l_618 = &l_572;
            int8_t *l_623 = &g_198;
            int32_t l_631 = 0x00776DD9L;
            int32_t l_632 = 0x0AE18A82L;
            int32_t l_633 = 4L;
            int32_t l_636 = 1L;
            int32_t l_637 = 0x54602D2BL;
            int32_t l_638 = 1L;
            int32_t l_640 = 0L;
            int32_t l_641 = 1L;
            int32_t l_642 = 0x65C19015L;
            int32_t l_643[10][7][3] = {{{0x87574572L,(-1L),1L},{(-1L),0xEB43F573L,1L},{0L,0x87574572L,1L},{7L,(-7L),0x763DFE1EL},{(-6L),0x10912565L,(-1L)},{0x49EADD6BL,(-1L),(-1L)},{0xA44F9F11L,(-1L),0x10912565L}},{{(-6L),0x763DFE1EL,(-7L)},{0x10912565L,1L,0x87574572L},{(-4L),1L,0xEB43F573L},{(-1L),1L,(-1L)},{8L,0x763DFE1EL,(-4L)},{0x8E58CA41L,(-1L),1L},{0x7FE25AB3L,(-1L),0x7FE25AB3L}},{{0xD1797D31L,3L,(-1L)},{7L,(-6L),0xD86E9498L},{7L,0x688038FCL,0x87574572L},{(-6L),8L,1L},{7L,0x42592626L,(-6L)},{7L,(-1L),0x92ECED17L},{0xD1797D31L,0x5DB79FF8L,1L}},{{0L,0L,0L},{7L,(-1L),(-1L)},{1L,0xD86E9498L,0x4E87B34CL},{1L,0x87574572L,0L},{(-1L),1L,0x4E87B34CL},{3L,(-6L),(-1L)},{0x7FE25AB3L,0x92ECED17L,0L}},{{0xA4A3A7B0L,1L,1L},{0x763DFE1EL,0L,0x92ECED17L},{1L,(-1L),(-6L)},{0x92ECED17L,0x4E87B34CL,1L},{(-1L),0L,0x87574572L},{(-9L),0x4E87B34CL,0xD86E9498L},{0x688038FCL,(-1L),(-1L)}},{{1L,0L,0L},{0x5DB79FF8L,1L,0x5DB79FF8L},{0xE6563EDFL,0x92ECED17L,(-1L)},{0x10912565L,(-6L),0x42592626L},{0x35CC5037L,1L,8L},{(-6L),0x87574572L,0x688038FCL},{0x35CC5037L,0xD86E9498L,(-6L)}},{{0x10912565L,(-1L),3L},{0xE6563EDFL,0L,(-9L)},{0x5DB79FF8L,0x5DB79FF8L,0x1ECCEBEAL},{1L,(-1L),0x18FF968DL},{0x1ECCEBEAL,0x87574572L,0x8E58CA41L},{0xE6563EDFL,0x4E87B34CL,0L},{7L,0x1ECCEBEAL,0x8E58CA41L}},{{(-1L),0x763DFE1EL,0xEB43F573L},{(-1L),(-1L),7L},{0x92ECED17L,0xE6563EDFL,0xE6563EDFL},{3L,7L,(-1L)},{0x18FF968DL,0xEB43F573L,0x763DFE1EL},{(-1L),0x8E58CA41L,0x1ECCEBEAL},{0x35CC5037L,0L,0x4E87B34CL}},{{0xD1797D31L,0x8E58CA41L,0x87574572L},{0L,0xEB43F573L,0x35CC5037L},{1L,7L,0x42592626L},{0xD86E9498L,0xE6563EDFL,0xD86E9498L},{0L,(-1L),7L},{(-4L),0x763DFE1EL,8L},{0L,0x1ECCEBEAL,(-1L)}},{{0x763DFE1EL,0x4E87B34CL,0L},{0L,0x87574572L,0xA4A3A7B0L},{(-4L),0x35CC5037L,(-1L)},{0L,0x42592626L,0xD1797D31L},{0xD86E9498L,0xD86E9498L,1L},{1L,7L,0L},{0L,8L,0x31627A40L}}};
            int32_t l_671 = (-1L);
            int32_t *l_676 = &l_573;
            uint32_t l_697 = 0x57C563C2L;
            struct S0 *l_706[1][8][5] = {{{&g_109,&g_109,&g_450,&g_189,&l_622},{&g_109,&l_622,&g_109,&g_189,&g_189},{&g_189,&g_189,&g_189,&l_622,&g_450},{&g_109,&l_622,&g_109,&g_189,&g_450},{&g_450,&g_109,&g_109,&g_189,&g_189},{&g_450,&g_189,&g_109,&g_109,&g_189},{&g_450,&g_109,&g_189,&g_109,&g_450},{&g_189,&g_109,&l_622,&g_109,&g_189}}};
            int16_t **l_708 = &l_668;
            int32_t l_712 = 0L;
            int32_t l_747 = 0x26418138L;
            int64_t l_760[2][10] = {{1L,(-1L),1L,(-3L),(-1L),(-1L),(-3L),1L,(-1L),1L},{1L,0x99421BF8A430E99FLL,(-1L),0L,(-1L),0x99421BF8A430E99FLL,1L,1L,0x99421BF8A430E99FLL,(-1L)}};
            int i, j, k;
            g_322 ^= (safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(((**g_476) || (*g_35)), 0)) <= (*l_621)) ^ 0xEF3EA9F7B3B897CFLL) >= (*g_415)), 0x22L));
            (*g_627) = ((*l_621) , g_624);
            for (g_452 = 0; (g_452 <= 3); g_452 += 1)
            {
                int32_t *l_629[5][1][5] = {{{&g_57,&l_588,&g_322,&g_57,&g_322}},{{&g_57,&g_57,&g_57,(void*)0,&l_588}},{{&g_57,&l_588,&g_322,&g_322,&l_588}},{{&l_588,&l_588,&g_57,&l_588,&g_322}},{{(void*)0,&l_588,&g_57,&l_588,(void*)0}}};
                int i, j, k;
                (*l_571) |= l_584[(g_526 + 3)][g_526];
                l_644--;
                for (l_639 = 0; (l_639 >= 0); l_639 -= 1)
                {
                    int64_t *****l_653[4];
                    int32_t *l_655 = &l_633;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_653[i] = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_s(g_526, g_626)))
                    {
                        return (*l_621);


                    }
                    else
                    {
                        int i, j, k;
                        (*l_571) = (0xD6ABL | ((void*)0 == l_658));
                    }
                    (*l_571) ^= ((**g_476) ^ (safe_lshift_func_int16_t_s_u(1L, (safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(2L, (safe_rshift_func_uint16_t_u_s(((((*l_655) &= ((void*)0 == l_667)) == (((void*)0 == &g_270[4][2][2]) , (safe_lshift_func_int16_t_s_s((l_671 , ((safe_sub_func_uint8_t_u_u((l_674 == (void*)0), g_359)) >= p_60)), g_109.f2)))) , 65535UL), 10)))), (***g_650))))));
                }
            }
            (*l_676) = (*l_571);
            for (g_54 = 0; (g_54 <= 3); g_54 += 1)
            {
                int32_t l_702 = 0x8B9125A1L;
                uint8_t l_703 = 0xEEL;
                int32_t l_710 = 0x5CE6F22CL;
                int32_t l_711 = 0x254C99C7L;
                int32_t l_713 = 1L;
                int32_t l_716 = 1L;
                int32_t l_717[3];
                struct S0 l_736 = {203,-3,0xD7L};
                int8_t l_745 = 0xFBL;
                uint64_t l_762[9] = {0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL,0x943E11E79BADD4A3LL};
                int i;
                for (i = 0; i < 3; i++)
                    l_717[i] = 2L;
                for (g_55 = 0; (g_55 <= 3); g_55 += 1)
                {
                    int16_t * const *l_686 = &l_668;
                    int32_t l_696 = 0x8B87BD76L;
                    int32_t l_714 = 6L;
                    int32_t l_715 = 0x92475A62L;
                    int32_t l_718 = 1L;
                    int i, j;
                    (*l_676) &= l_584[(g_526 + 4)][g_54];
                    for (l_640 = 0; (l_640 <= 3); l_640 += 1)
                    {
                        uint16_t *l_679 = &g_166[1][3][3];
                        int16_t * const *l_688 = (void*)0;
                        int16_t * const **l_687 = &l_688;
                        int32_t l_695 = 0xBC6826B8L;
                        int32_t *l_698 = &l_638;
                        int32_t *l_699 = (void*)0;
                        int32_t *l_700 = (void*)0;
                        int32_t *l_701[9] = {(void*)0,&l_671,(void*)0,(void*)0,&l_671,(void*)0,(void*)0,&l_671,(void*)0};
                        int i, j;
                        g_189.f1 ^= (l_696 = ((~(safe_rshift_func_uint16_t_u_s(((*l_679)--), (l_695 = (l_584[(g_54 + 4)][g_54] , ((((*l_676) = (**g_476)) < (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((**g_651) == (((*l_687) = l_686) == g_689)), 1L)), (**g_689)))) && ((*g_690) > (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_4, (*g_690))), p_60)) , 255UL) ^ g_318)))))))) & g_272));

                        ((l_688 == &l_668) ? (void) (0) : __assert_fail ("l_688 == &l_668", "9.c", 1793, __PRETTY_FUNCTION__));
                        l_697 ^= l_584[(g_54 + 4)][g_54];
                        --l_703;
                    }
                    for (l_702 = 0; (l_702 <= 3); l_702 += 1)
                    {
                        int i, j;
                        (*g_707) = l_706[0][4][2];

                        ((g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109) ? (void) (0) : __assert_fail ("g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109", "9.c", 1802, __PRETTY_FUNCTION__));
                        (*l_676) = (l_708 == &l_668);
                        if (l_584[(l_702 + 3)][g_55])
                            break;
                        if (l_584[(g_55 + 3)][g_526])
                            continue;
                    }
                    for (g_277 = 0; (g_277 >= 0); g_277 -= 1)
                    {
                        int32_t *l_709[10][6] = {{&l_633,&l_573,&l_633,&l_633,&g_53,&g_53},{(void*)0,&l_633,&l_633,(void*)0,&l_573,&l_631},{&l_631,(void*)0,&g_53,&l_671,&l_633,&l_631},{&l_671,&l_633,&l_631,&l_631,&l_633,&l_671},{(void*)0,&l_671,&g_53,&l_633,&g_53,&l_671},{&g_53,(void*)0,&l_631,&l_633,&l_633,&l_631},{&g_53,&g_53,&l_633,&l_633,&l_573,&l_633},{(void*)0,&g_53,(void*)0,&l_631,&l_633,&l_633},{&l_671,(void*)0,(void*)0,&l_671,&g_53,&l_633},{&l_633,&l_671,&l_633,&l_671,&l_633,&l_631}};
                        uint64_t l_719 = 0x2ECD5D3C56514931LL;
                        int8_t l_732 = 0xE6L;
                        int16_t *l_738 = (void*)0;
                        int16_t *l_739 = &g_740;
                        int8_t *l_741 = &g_742;
                        int8_t *l_743 = &g_744;
                        int i, j, k;
                        ++l_719;
                        (*l_676) = (safe_lshift_func_int8_t_s_s(((*l_743) = ((*l_741) = ((p_60 >= (p_60 , (((((*l_739) = (g_737 = (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((((****g_649) >= p_60) , func_69(((***g_650) , (**g_651)), ((*l_623) &= (safe_mul_func_uint8_t_u_u(p_60, (l_732 | (safe_rshift_func_int16_t_s_s(p_60, (*g_690))))))), l_735[1][1], l_736)) != g_353[(g_277 + 2)][g_277][g_277]), (*g_690))) < 0xBFL), 0xC85AL)))) != p_60) < (*g_652)) >= (*g_415)))) , 6L))), 0));
                    }
                }
                for (l_632 = 3; (l_632 >= 0); l_632 -= 1)
                {
                    int32_t l_748[7] = {0xD71FF595L,0L,0xD71FF595L,0xD71FF595L,0L,0xD71FF595L,0xD71FF595L};
                    int i, j, k;
                    (*l_676) = (p_60 | ((***g_650) = p_60));
                    if ((*g_541))
                    {
                        int32_t *l_746[9] = {&l_636,&l_636,&l_636,&l_636,&l_636,&l_636,&l_636,&l_636,&l_636};
                        int i;
                        --g_749;
                    }
                    else
                    {
                        (*l_571) = (**g_427);
                    }
                    l_752 = (p_60 || (*l_571));
                }
                for (l_710 = 0; (l_710 <= 3); l_710 += 1)
                {
                    int32_t l_761 = 0xAC3E9C38L;
                    struct S0 l_765 = {167,3,0x61L};
                    int32_t l_776 = 0xE91F8FECL;
                    int32_t l_777 = 0x4C8D976DL;
                    uint8_t ** const l_781 = &l_576;
                }
            }
        }

        ((g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109 || g_184 == 0 || (g_184 >= &g_2481[0] && g_184 <= &g_2481[1])) ? (void) (0) : __assert_fail ("g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109 || g_184 == 0 || (g_184 >= &g_2481[0] && g_184 <= &g_2481[1])", "9.c", 1851, __PRETTY_FUNCTION__));
        for (g_322 = (-10); (g_322 <= 10); ++g_322)
        {
            uint32_t *l_795 = (void*)0;
            uint32_t *l_796 = &g_164;
            int32_t l_799 = 0xB1217144L;
            int32_t l_800 = 0L;
            int16_t *l_801 = &g_740;
            const int32_t *l_804 = (void*)0;
            const int32_t **l_803 = &l_804;
            (*l_571) ^= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((l_622 , ((((l_792[0][0][7] == (*l_658)) & (((l_799 = ((*l_796)++)) < (l_800 > (((*l_801) = ((*g_271) > (*l_621))) >= (*g_690)))) , (*l_621))) , l_802) != l_803)) < (***l_674)), p_60)), (**g_689)));
            for (l_752 = 0; (l_752 <= 2); l_752 += 1)
            {
                int32_t *l_806 = &g_54;
                int32_t *l_807 = &l_588;
                int32_t *l_808 = &l_634[9];
                int32_t *l_809 = (void*)0;
                int32_t *l_810 = &l_799;
                int32_t *l_811 = &g_54;
                int32_t *l_812 = &l_634[7];
                int32_t *l_813[10] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
                int i;
                for (g_318 = 2; (g_318 >= 0); g_318 -= 1)
                {
                    int32_t l_805 = 1L;
                    int i, j, k;
                    for (g_53 = 0; (g_53 <= 2); g_53 += 1)
                    {
                        int i, j, k;
                        return g_166[g_318][(l_752 + 2)][(g_53 + 6)];


                    }
                    if (g_166[l_752][(l_752 + 1)][(g_318 + 7)])
                        break;
                    l_805 &= (*p_61);
                    if ((**p_62))
                        continue;
                }
                if ((*g_354))
                    continue;
                if ((**p_62))
                    break;
                l_816++;
            }
            if ((*p_61))
                continue;
            if (l_799)
                break;
        }
    }



    ((g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109 || g_184 == 0 || (g_184 >= &g_2481[0] && g_184 <= &g_2481[1])) ? (void) (0) : __assert_fail ("g_184 == &g_450 || g_184 == &l_622 || g_184 == &g_189 || g_184 == &g_109 || g_184 == 0 || (g_184 >= &g_2481[0] && g_184 <= &g_2481[1])", "9.c", 1905, __PRETTY_FUNCTION__));
    for (g_533 = 0; (g_533 < 25); ++g_533)
    {
        int8_t *l_823 = &g_198;
        int32_t l_830 = (-9L);
        struct S0 l_835 = {236,4,0x83L};
        int32_t l_863 = 0x68B8BDFFL;
        int32_t l_864 = 0x97906C6EL;
        int32_t l_865 = 0L;
        int32_t l_866 = 0x7C079556L;
        int32_t l_867[8];
        int32_t ***l_874 = &l_675;
        uint64_t l_886 = 5UL;
        int16_t ***l_896[8][4] = {{&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667},{&l_667,(void*)0,&l_667,&l_667},{&l_667,&l_667,&l_667,(void*)0},{&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667}};
        int64_t l_1047[3];
        int32_t *l_1048 = &l_588;
        int32_t l_1082 = 0x049F89A9L;
        int8_t *l_1153[8][7] = {{&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3]},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3]},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3]},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3],&g_1133[3]},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198,&g_198}};
        uint16_t l_1231[8] = {0x6EB3L,0x6EB3L,0x6EB3L,0x6EB3L,0x6EB3L,0x6EB3L,0x6EB3L,0x6EB3L};
        int8_t l_1265[6] = {0xDCL,0x20L,0x20L,0xDCL,0x20L,0x20L};
        int i, j;
        for (i = 0; i < 8; i++)
            l_867[i] = 5L;
        for (i = 0; i < 3; i++)
            l_1047[i] = 7L;
    }
    for (g_53 = 0; (g_53 <= 2); g_53 += 1)
    {
        int32_t l_1317 = 6L;
        int32_t l_1325 = 0x817093C2L;
        int32_t l_1326 = 1L;
        int32_t l_1329 = 0xD42C65A1L;
        int32_t l_1331 = 1L;
        int32_t l_1343[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t **l_1369 = (void*)0;
        int32_t ***l_1378[7] = {&l_675,(void*)0,&l_675,&l_675,(void*)0,&l_675,&l_675};
        uint32_t l_1404 = 0x47487A10L;
        uint64_t l_1428 = 18446744073709551615UL;
        struct S0 l_1430 = {119,-1,0x28L};
        int32_t l_1440 = 0xB8FF06BCL;
        uint32_t l_1455 = 0UL;
        uint16_t *l_1523 = &g_1423;
        uint8_t l_1599[8][2] = {{1UL,1UL},{0xC1L,1UL},{1UL,0xC1L},{1UL,1UL},{0xC1L,1UL},{1UL,0xC1L},{1UL,1UL},{0xC1L,1UL}};
        int16_t ***l_1620[4][5][8] = {{{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667}},{{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667}},{{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667}},{{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667}}};
        uint32_t **l_1627 = (void*)0;
        uint64_t l_1654 = 18446744073709551609UL;
        int32_t l_1666 = 0x5425A80EL;
        const int32_t l_1674[8][6][5] = {{{0x1F13110EL,0xF3D189EEL,(-3L),3L,0L},{0xBD129AC0L,0x416C0119L,0x416C0119L,0xBD129AC0L,0x5A815809L},{1L,0x5B4E60D2L,0x6833E1ABL,0xF3D189EEL,0L},{0x0F592B02L,0xBD129AC0L,0x0F592B02L,0x416C0119L,(-1L)},{1L,(-2L),(-3L),0L,(-3L)},{1L,1L,1L,(-1L),0xBD129AC0L}},{{(-3L),0x5B4E60D2L,(-3L),0x9C84D8BCL,1L},{0xBD129AC0L,0x0F592B02L,0x5A815809L,0xBD129AC0L,0x416C0119L},{0L,0x5B4E60D2L,0x7745DDB3L,0x5B4E60D2L,0L},{0x5A815809L,1L,0x0F592B02L,0x416C0119L,1L},{0L,(-2L),0x1F13110EL,0xF3D189EEL,(-3L)},{0xBD129AC0L,(-1L),1L,1L,1L}},{{(-3L),0xF3D189EEL,(-3L),0x9C84D8BCL,0L},{1L,0x0F592B02L,0x416C0119L,1L,0x416C0119L},{1L,0L,0x7745DDB3L,0xF3D189EEL,1L},{0x5A815809L,0xBD129AC0L,0x416C0119L,0x416C0119L,0xBD129AC0L},{1L,(-2L),(-3L),0x5B4E60D2L,(-3L)},{(-1L),0xBD129AC0L,1L,0xBD129AC0L,(-1L)}},{{(-3L),0L,0x1F13110EL,0x9C84D8BCL,1L},{(-1L),0x0F592B02L,0x0F592B02L,(-1L),0x416C0119L},{1L,0xF3D189EEL,0x7745DDB3L,0L,1L},{0x5A815809L,(-1L),0x5A815809L,0x416C0119L,(-1L)},{1L,(-2L),(-3L),0L,(-2L)},{0x0F592B02L,0x0F592B02L,(-1L),0x416C0119L,0x5A815809L}},{{0x7745DDB3L,3L,(-2L),6L,(-3L)},{0x5A815809L,0xDB59559CL,1L,0x5A815809L,0x12237EEBL},{(-3L),3L,0L,3L,(-3L)},{1L,0x0F592B02L,0xDB59559CL,0x12237EEBL,0x0F592B02L},{(-3L),0xA8E8C099L,0x6833E1ABL,0x9C84D8BCL,(-2L)},{0x5A815809L,0x416C0119L,(-1L),0x0F592B02L,0x0F592B02L}},{{0x7745DDB3L,0x9C84D8BCL,0x7745DDB3L,6L,(-3L)},{0x0F592B02L,0xDB59559CL,0x12237EEBL,0x0F592B02L,0x12237EEBL},{0x1F13110EL,(-2L),0L,0x9C84D8BCL,(-3L)},{1L,0x5A815809L,0x12237EEBL,0x12237EEBL,0x5A815809L},{(-3L),0xA8E8C099L,0x7745DDB3L,3L,(-2L)},{0x416C0119L,0x5A815809L,(-1L),0x5A815809L,0x416C0119L}},{{0x7745DDB3L,(-2L),0x6833E1ABL,6L,0x1F13110EL},{0x416C0119L,0xDB59559CL,0xDB59559CL,0x416C0119L,0x12237EEBL},{(-3L),0x9C84D8BCL,0L,(-2L),0x1F13110EL},{1L,0x416C0119L,1L,0x12237EEBL,0x416C0119L},{0x1F13110EL,0xA8E8C099L,(-2L),(-2L),(-2L)},{0x0F592B02L,0x0F592B02L,(-1L),0x416C0119L,0x416C0119L}},{{(-2L),0x9C84D8BCL,0x6833E1ABL,0xA8E8C099L,(-3L)},{0x416C0119L,1L,0x12237EEBL,0x416C0119L,0xDB59559CL},{0x1F13110EL,0x9C84D8BCL,1L,0x9C84D8BCL,0x1F13110EL},{0x12237EEBL,0x5A815809L,1L,0xDB59559CL,0x5A815809L},{0x1F13110EL,(-7L),0x7745DDB3L,(-2L),0x6833E1ABL},{0x416C0119L,0x0F592B02L,1L,0x5A815809L,0x5A815809L}}};
        int i, j, k;
    }
    for (g_1464 = 0; (g_1464 <= 1); g_1464 += 1)
    {
        int i;
        if (l_1718)
            break;
    }
    return (*l_571);


}







static int32_t ** func_63(int16_t p_64, const int32_t * const * p_65, int32_t * p_66, int64_t p_67)
{
    int16_t l_362[9] = {0x9063L,0x9063L,0x9063L,0x9063L,0x9063L,0x9063L,0x9063L,0x9063L,0x9063L};
    struct S0 *l_373 = (void*)0;
    int32_t l_381[9][10] = {{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x12498838L,4L,0xA413F0ADL,4L,0x12498838L},{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x12498838L,4L,0xA413F0ADL,4L,0x12498838L},{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x12498838L,4L,0xA413F0ADL,4L,0x12498838L},{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x12498838L,4L,0xA413F0ADL,4L,0x12498838L},{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x12498838L,4L,0xA413F0ADL,4L,0x12498838L},{0x12498838L,4L,0xA413F0ADL,4L,0x12498838L,0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L},{0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L,0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L},{0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L,0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L},{0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L,0x264661F2L,0x12498838L,0x3BACB4DBL,0x12498838L,0x264661F2L}};
    uint64_t l_430 = 7UL;
    uint8_t l_443 = 0UL;
    int16_t l_516 = 1L;
    const uint64_t **l_523 = (void*)0;
    uint64_t **l_524[2];
    uint8_t l_535 = 0xB0L;
    uint32_t l_543[4][4] = {{0x1B9530F1L,0xE911923BL,1UL,0xE911923BL},{0xE911923BL,18446744073709551615UL,1UL,1UL},{0x1B9530F1L,0x1B9530F1L,0xE911923BL,1UL},{0x5485F1F7L,18446744073709551615UL,0x5485F1F7L,0xE911923BL}};
    int32_t *l_546 = &g_53;
    int32_t *l_547 = &g_53;
    int32_t *l_548 = &l_381[3][4];
    int32_t *l_549 = (void*)0;
    int32_t *l_550 = &l_381[3][9];
    int32_t *l_551 = &g_57;
    int32_t *l_552 = &l_381[3][4];
    int32_t *l_553 = &g_57;
    int32_t *l_554 = &g_322;
    int32_t *l_555 = &l_381[2][7];
    int32_t *l_556 = &g_53;
    int32_t *l_557 = &g_53;
    int32_t *l_558 = &g_57;
    int32_t *l_559 = &g_53;
    int32_t *l_560 = &g_57;
    int32_t *l_561 = &g_57;
    int32_t *l_562 = &g_322;
    int32_t *l_563 = (void*)0;
    int32_t *l_564 = &g_54;
    int32_t *l_565[7][2] = {{&l_381[4][1],&l_381[4][1]},{(void*)0,&l_381[4][1]},{&l_381[4][1],(void*)0},{&l_381[4][1],&l_381[4][1]},{(void*)0,&l_381[4][1]},{&l_381[4][1],(void*)0},{&l_381[4][1],&l_381[4][1]}};
    int32_t l_566 = (-3L);
    uint16_t l_567[6] = {6UL,0xFF85L,6UL,6UL,0xFF85L,6UL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_524[i] = &g_415;
    for (p_64 = 0; (p_64 < (-2)); p_64 = safe_sub_func_int16_t_s_s(p_64, 3))
    {
        const int32_t *l_357 = &g_4;
        const int32_t *l_358[6][7] = {{&g_359,&g_359,&g_359,&g_359,&g_359,&g_359,&g_359},{&g_359,&g_359,&g_359,&g_359,&g_359,&g_359,&g_359},{&g_359,&g_359,&g_359,&g_359,&g_359,&g_359,&g_359},{(void*)0,&g_359,(void*)0,&g_359,&g_359,&g_359,&g_359},{&g_359,&g_359,&g_359,&g_359,&g_359,&g_359,&g_359},{&g_359,&g_359,&g_359,&g_359,&g_359,&g_359,&g_359}};
        const int32_t **l_360 = &g_354;
        int32_t l_364 = 0x6A42A3F2L;
        int32_t l_385 = (-1L);
        int32_t l_386 = 0xFD10C4AFL;
        int32_t l_389 = 7L;
        int32_t l_391 = (-10L);
        int64_t l_393 = (-1L);
        int32_t l_396 = (-1L);
        int32_t l_397 = 0xB1E33C11L;
        int32_t l_398 = 0L;
        int32_t l_399 = 0L;
        struct S0 l_449 = {199,0,0x6FL};
        int32_t ** const *l_470 = (void*)0;
        int32_t **l_495 = &g_171;
        int32_t *l_506 = &l_389;
        int32_t *l_507 = &l_364;
        int32_t *l_508 = &l_364;
        int32_t *l_509 = &g_54;
        int32_t *l_510 = &g_53;
        int32_t *l_511 = &l_381[6][7];
        int32_t *l_512 = &l_386;
        int32_t *l_513 = &g_57;
        int32_t *l_514 = &l_389;
        int32_t *l_515[2];
        uint64_t l_517 = 0xB4908072E4C4BF1ELL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_515[i] = &l_398;
        (*l_360) = (l_358[1][1] = l_357);

        ((g_354 == &g_4) ? (void) (0) : __assert_fail ("g_354 == &g_4", "9.c", 2043, __PRETTY_FUNCTION__));

        for (g_53 = 0; (g_53 <= 2); g_53 += 1)
        {
            uint64_t l_361 = 0x71EDB14AAD210111LL;
            struct S0 * const l_374[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int32_t l_375 = 0L;
            int32_t l_384[7][1][5] = {{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}},{{0x4A938395L,0x9A6D18FBL,0x4A938395L,0x1A2D1802L,0x1A2D1802L}}};
            uint32_t l_400[10][2][10] = {{{9UL,0x2BBFD7ABL,9UL,8UL,8UL,9UL,0x2BBFD7ABL,9UL,8UL,8UL},{9UL,0x2BBFD7ABL,9UL,8UL,8UL,9UL,0x2BBFD7ABL,9UL,8UL,8UL}},{{9UL,0x2BBFD7ABL,9UL,8UL,8UL,9UL,0x2BBFD7ABL,9UL,8UL,8UL},{9UL,0x2BBFD7ABL,9UL,8UL,8UL,9UL,0x2BBFD7ABL,9UL,8UL,7UL}},{{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL},{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL}},{{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL},{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL}},{{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL},{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL}},{{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL},{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL}},{{8UL,0x3DEF646BL,8UL,7UL,7UL,8UL,0x3DEF646BL,8UL,7UL,7UL},{8UL,0x3DEF646BL,8UL,7UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL}},{{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL},{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL}},{{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL},{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL}},{{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL},{0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL,0x3DEF646BL,7UL,0x3DEF646BL,9UL,9UL}}};
            uint8_t l_441[9][6][4] = {{{0xCCL,0xC5L,2UL,6UL},{0x8DL,251UL,251UL,0x8DL},{0UL,0UL,7UL,0xF2L},{0x63L,0UL,0x74L,247UL},{0x43L,1UL,0UL,247UL},{2UL,0UL,2UL,0xF2L}},{{255UL,0UL,255UL,0x8DL},{0x09L,251UL,0xE4L,0x89L},{0x15L,0x5CL,255UL,0xF7L},{250UL,0UL,0x15L,2UL},{249UL,0x74L,255UL,0x15L},{0x04L,0x43L,0UL,251UL}},{{0x86L,0x89L,2UL,0xCEL},{0xCEL,0x5CL,251UL,0xE4L},{0x40L,0UL,0x49L,0UL},{6UL,0xB8L,255UL,0UL},{0xF2L,254UL,0UL,0x61L},{0x07L,247UL,0x1AL,247UL}},{{0x49L,1UL,0x55L,0xCCL},{250UL,0x16L,247UL,0UL},{0UL,249UL,0UL,0x89L},{0UL,0x15L,247UL,6UL},{250UL,0x89L,0x55L,9UL},{0x49L,0x74L,0x1AL,0x55L}},{{0x07L,0x86L,0UL,2UL},{0xF2L,0x97L,255UL,0xCEL},{6UL,0x15L,0x49L,0UL},{0x40L,0x49L,251UL,1UL},{0xCEL,0xB8L,2UL,0xCCL},{0x86L,0xA1L,0UL,255UL}},{{0x04L,246UL,255UL,247UL},{249UL,0UL,0x1AL,0x48L},{0xF2L,251UL,250UL,2UL},{0x1AL,254UL,0x16L,0x16L},{255UL,255UL,0x9FL,0UL},{0x74L,9UL,247UL,251UL}},{{1UL,0xCCL,255UL,247UL},{6UL,0xCCL,0x2CL,251UL},{0xCCL,9UL,0x64L,0UL},{0UL,255UL,0x8DL,0x16L},{0xB7L,254UL,1UL,2UL},{0x97L,251UL,0x55L,0x48L}},{{0x04L,0UL,0x2CL,0x9FL},{0xF7L,253UL,0x9AL,250UL},{1UL,0xF8L,0x1AL,0x2CL},{0x74L,0x49L,4UL,2UL},{247UL,0x8DL,2UL,0xB8L},{255UL,0x1AL,250UL,0xE4L}},{{251UL,9UL,248UL,0UL},{1UL,0x04L,255UL,248UL},{0x48L,0UL,0x48L,251UL},{0UL,2UL,0x55L,0x97L},{0UL,0x1AL,0xA1L,2UL},{2UL,254UL,0xA1L,0xC5L}}};
            int32_t ** const l_467 = &g_171;
            int32_t ** const *l_466[7][6] = {{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467},{&l_467,&l_467,&l_467,&l_467,&l_467,&l_467}};
            uint8_t l_490 = 0x0FL;
            int i, j, k;
        }
        l_517++;
    }
    for (l_430 = (-8); (l_430 >= 42); l_430 = safe_add_func_uint64_t_u_u(l_430, 8))
    {
        const uint64_t ***l_522[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_525 = 1L;
        int32_t * const *l_527 = (void*)0;
        int8_t *l_532 = &g_198;
        struct S0 l_534[7] = {{107,-2,0x2DL},{107,-2,0x2DL},{107,-2,0x2DL},{107,-2,0x2DL},{107,-2,0x2DL},{107,-2,0x2DL},{107,-2,0x2DL}};
        int32_t l_536 = 0x30CA5B47L;
        const int32_t l_537 = (-1L);
        uint32_t *l_538 = (void*)0;
        uint32_t *l_539 = &g_164;
        int32_t *l_540 = &g_53;
        int32_t *l_542[7][6][6] = {{{(void*)0,(void*)0,&l_536,&g_54,&l_381[4][8],&l_381[3][4]},{&g_54,(void*)0,&l_536,&g_54,&l_536,(void*)0},{&g_4,&g_54,&l_381[3][4],&g_322,(void*)0,&l_381[3][4]},{&g_322,(void*)0,&l_381[3][4],&l_536,&g_54,&g_4},{(void*)0,(void*)0,&l_381[4][5],&l_381[4][5],(void*)0,(void*)0},{(void*)0,&g_54,(void*)0,(void*)0,&l_536,&g_54}},{{&l_381[4][5],(void*)0,&g_54,&g_54,&l_381[4][8],&l_536},{&l_381[4][5],(void*)0,&l_536,(void*)0,&l_536,(void*)0},{&l_381[3][4],(void*)0,(void*)0,&l_536,&g_54,&g_322},{&g_54,&l_381[3][4],&g_54,(void*)0,&g_322,&g_322},{&g_54,(void*)0,(void*)0,&g_54,(void*)0,(void*)0},{&g_322,&g_4,&l_536,&g_54,(void*)0,&g_54}},{{&l_536,&g_54,&l_381[4][8],&l_381[3][4],(void*)0,&l_381[3][4]},{&l_381[4][5],&g_4,&l_381[4][5],&g_4,(void*)0,&g_54},{(void*)0,(void*)0,&l_536,&g_54,&g_322,(void*)0},{&g_54,&l_381[3][4],&g_4,&g_54,&g_54,&g_4},{(void*)0,(void*)0,&g_4,&g_4,&l_536,&l_381[4][5]},{&l_381[4][5],(void*)0,(void*)0,&l_381[3][4],(void*)0,&g_4}},{{&l_536,&l_381[4][5],(void*)0,&g_54,(void*)0,&l_381[4][5]},{&g_322,&g_54,&g_4,&g_54,&l_381[3][4],&g_4},{&g_54,&l_381[3][4],&g_4,(void*)0,&l_381[4][8],(void*)0},{&g_54,&l_381[3][4],&l_536,&l_536,&l_381[3][4],&g_54},{&l_381[3][4],&g_54,&l_381[4][5],(void*)0,(void*)0,&l_381[3][4]},{&l_536,&l_381[4][5],&l_536,&g_54,&g_54,&l_381[4][5]}},{{(void*)0,&l_536,&g_54,&l_536,(void*)0,&g_54},{&l_381[4][8],&g_54,&g_54,(void*)0,&l_381[4][5],&l_381[3][4]},{(void*)0,(void*)0,&l_381[4][5],&g_54,&l_381[3][4],&l_381[3][4]},{&g_4,&g_54,&g_54,&g_4,&l_381[3][4],&g_54},{&l_381[3][4],&g_54,&g_54,&g_322,&l_536,&l_381[4][5]},{&g_54,(void*)0,&l_536,(void*)0,&l_536,(void*)0}},{{&g_4,&g_54,&g_4,(void*)0,&l_381[3][4],(void*)0},{&g_54,&g_54,(void*)0,&l_381[4][5],&l_381[3][4],&l_381[3][4]},{&g_322,(void*)0,(void*)0,&l_381[4][5],&l_381[4][5],(void*)0},{&g_54,&g_54,&g_54,(void*)0,(void*)0,&g_4},{&g_4,&l_536,&g_54,(void*)0,&g_54,&g_54},{&g_54,&g_4,&g_54,&g_322,&g_54,&g_4}},{{&l_381[3][4],&g_322,&g_54,&g_4,&l_381[4][8],(void*)0},{&g_4,&l_381[4][8],(void*)0,&g_54,&l_536,&l_381[3][4]},{(void*)0,&l_381[4][8],(void*)0,(void*)0,&l_381[4][8],(void*)0},{&l_381[4][8],&g_54,(void*)0,(void*)0,&l_536,&g_54},{&l_381[4][5],(void*)0,&g_54,&g_54,&l_381[4][8],&l_536},{&l_381[4][5],(void*)0,&g_54,(void*)0,&l_381[4][5],&l_536}}};
        int i, j, k;
        (*l_540) |= (((+((*l_539) = ((g_526 |= (l_525 = ((**g_419) |= ((l_523 = &g_271) == l_524[1])))) && g_359))) > l_362[2]) , (-1L));

        ((l_523 == &g_271) ? (void) (0) : __assert_fail ("l_523 == &g_271", "9.c", 2076, __PRETTY_FUNCTION__));
        (*g_541) = ((*l_540) | g_28[5][1][0]);
        ++l_543[2][3];
    }

    ((l_523 == &g_271 || l_523 == 0) ? (void) (0) : __assert_fail ("l_523 == &g_271 || l_523 == 0", "9.c", 2081, __PRETTY_FUNCTION__));
    ++l_567[1];
    return &g_171;


}







static const int32_t * const * func_69(int64_t p_70, int8_t p_71, struct S0 p_72, struct S0 p_73)
{
    int32_t l_327 = 0x02A736D7L;
    int16_t *l_328 = &g_318;
    int16_t *l_330 = &g_318;
    int16_t **l_329 = &l_330;
    int32_t * const *l_331 = (void*)0;
    int32_t **l_332 = (void*)0;
    int32_t **l_333 = &g_35;
    const struct S0 l_346[3][7] = {{{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL}},{{130,-4,0L},{107,-3,-6L},{130,-4,0L},{107,-3,-6L},{130,-4,0L},{107,-3,-6L},{130,-4,0L}},{{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL},{34,4,0xAFL}}};
    int64_t l_351 = 0x62EE9CCE46AA00ACLL;
    int i, j;
    p_73.f1 |= (safe_add_func_uint16_t_u_u(l_327, ((**l_329) = g_28[5][1][0])));
    (*g_352) ^= (p_72.f0 >= (safe_mod_func_int16_t_s_s(g_189.f1, ((0x99L != g_159[1][4][1]) , 0xFC63L))));
    p_72.f1 &= p_72.f0;
    return g_353[2][4][0];


}







static uint8_t func_77(int32_t * const * p_78, const int64_t p_79, int32_t * p_80, int16_t p_81)
{
    int8_t l_280 = 0xA4L;
    struct S0 *l_298 = (void*)0;
    struct S0 l_308[5][9] = {{{59,-1,-5L},{131,3,-4L},{175,4,1L},{84,-2,0x65L},{103,-4,0x46L},{103,-4,0x46L},{84,-2,0x65L},{175,4,1L},{131,3,-4L}},{{103,-4,0x46L},{30,2,0xE3L},{115,2,0x9AL},{250,1,3L},{23,3,0xB8L},{131,3,-4L},{150,-3,-4L},{150,-3,-4L},{131,3,-4L}},{{250,1,3L},{175,4,1L},{68,2,4L},{175,4,1L},{250,1,3L},{30,2,0xE3L},{162,-0,0x3AL},{115,2,0x9AL},{84,-2,0x65L}},{{162,-0,0x3AL},{30,2,0xE3L},{250,1,3L},{175,4,1L},{68,2,4L},{175,4,1L},{250,1,3L},{30,2,0xE3L},{162,-0,0x3AL}},{{150,-3,-4L},{131,3,-4L},{23,3,0xB8L},{250,1,3L},{115,2,0x9AL},{30,2,0xE3L},{103,-4,0x46L},{30,2,0xE3L},{115,2,0x9AL}}};
    int32_t l_319 = 0x2C124EF3L;
    int i, j;
    for (g_55 = 0; (g_55 <= 3); g_55 += 1)
    {
        int32_t *l_279 = (void*)0;
        int32_t l_291 = 0xB8A39D3BL;
        int32_t l_293[5];
        int i;
        for (i = 0; i < 5; i++)
            l_293[i] = 0x0E8E4600L;
        l_279 = (void*)0;
        for (g_277 = 3; (g_277 >= 0); g_277 -= 1)
        {
            uint32_t l_294[6][6] = {{4294967295UL,1UL,0x36BD2E50L,0x76200000L,0xE44EC54BL,0xA051C5BFL},{0x76200000L,0xE44EC54BL,0xA051C5BFL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,1UL},{4294967295UL,4294967295UL,0x36BD2E50L,4294967295UL,1UL,4294967295UL},{4294967295UL,0x36BD2E50L,0UL,0x76200000L,3UL,1UL},{4294967295UL,4294967295UL,0x76200000L,4294967295UL,4294967295UL,1UL}};
            int i, j;
            for (g_164 = 0; (g_164 <= 3); g_164 += 1)
            {
                int32_t l_292 = 0x287025BAL;
                int i, j, k;
                (*g_171) ^= (g_159[g_277][g_55][g_277] < l_280);
                for (g_53 = 0; (g_53 <= 2); g_53 += 1)
                {
                    for (g_54 = 3; (g_54 >= 0); g_54 -= 1)
                    {
                        int32_t **l_281[6] = {&g_171,&g_171,&g_171,&g_171,&g_171,&g_171};
                        int32_t *l_282 = &g_57;
                        const int64_t *l_285 = &g_277;
                        const int64_t **l_284 = &l_285;
                        const int64_t ***l_283 = &l_284;
                        int32_t ***l_286 = &l_281[2];
                        int i;
                        l_282 = (*g_34);


                        (*l_283) = (void*)0;

                        ((l_284 == 0) ? (void) (0) : __assert_fail ("l_284 == 0", "9.c", 2161, __PRETTY_FUNCTION__));
                        (*l_286) = &p_80;


                    }
                }
                if ((**g_34))
                {
                    for (g_57 = 0; (g_57 <= 3); g_57 += 1)
                    {
                        int32_t **l_287 = &l_279;
                        (*l_287) = p_80;

                        ((l_279 == &g_4 || l_279 == &g_54) ? (void) (0) : __assert_fail ("l_279 == &g_4 || l_279 == &g_54", "9.c", 2174, __PRETTY_FUNCTION__));
                    }

                    ((l_279 == &g_4 || l_279 == 0 || l_279 == &g_54) ? (void) (0) : __assert_fail ("l_279 == &g_4 || l_279 == 0 || l_279 == &g_54", "9.c", 2177, __PRETTY_FUNCTION__));
                    return p_81;


                }
                else
                {
                    int32_t *l_288 = &g_57;
                    int32_t *l_289 = &g_57;
                    int32_t *l_290[9][10] = {{&g_53,&g_53,(void*)0,&g_54,&g_53,&g_54,&g_4,&g_57,&g_53,&g_4},{&g_54,&g_54,&g_53,&g_57,&g_54,&g_57,&g_53,&g_54,&g_54,&g_54},{&g_54,&g_53,&g_54,&g_4,&g_53,&g_57,&g_53,&g_53,&g_54,&g_57},{&g_57,(void*)0,&g_4,&g_4,&g_4,(void*)0,&g_57,&g_57,&g_54,&g_4},{&g_54,&g_53,&g_53,&g_57,&g_4,&g_53,&g_57,&g_54,&g_53,&g_54},{&g_53,&g_54,&g_53,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_53},{&g_4,&g_4,(void*)0,&g_57,(void*)0,(void*)0,(void*)0,&g_53,&g_53,&g_4},{&g_54,&g_54,&g_4,&g_54,&g_57,&g_57,(void*)0,&g_4,&g_4,&g_4},{&g_53,&g_57,&g_53,&g_54,&g_4,&g_53,(void*)0,&g_4,&g_54,&g_53}};
                    int i, j;
                    l_294[5][4]--;
                    (*g_297) = &l_291;

                    ((g_171 == &l_291) ? (void) (0) : __assert_fail ("g_171 == &l_291", "9.c", 2191, __PRETTY_FUNCTION__));
                }

                ((g_171 == &l_291) ? (void) (0) : __assert_fail ("g_171 == &l_291", "9.c", 2194, __PRETTY_FUNCTION__));
            }

            ((g_171 == &l_291 || g_171 == &g_54) ? (void) (0) : __assert_fail ("g_171 == &l_291 || g_171 == &g_54", "9.c", 2197, __PRETTY_FUNCTION__));
            return g_52[3];


        }
    }
    (*g_299) = l_298;
    for (g_211 = 23; (g_211 > 17); --g_211)
    {
        uint8_t *l_309 = (void*)0;
        uint8_t *l_310 = &g_159[2][4][3];
        int32_t l_313 = (-1L);
        int16_t *l_316 = (void*)0;
        int16_t *l_317[7][7] = {{&g_10,&g_10,&g_25,&g_25,&g_25,&g_25,&g_10},{&g_25,&g_10,&g_25,&g_25,&g_25,&g_25,&g_10},{&g_25,&g_10,&g_10,&g_25,&g_25,&g_10,&g_25},{&g_25,&g_10,&g_318,&g_10,&g_318,&g_10,&g_25},{&g_25,&g_10,&g_25,&g_25,&g_10,&g_10,&g_25},{&g_10,&g_25,&g_25,&g_25,&g_25,&g_10,&g_25},{&g_10,&g_25,&g_25,&g_25,&g_25,&g_10,&g_10}};
        int32_t *l_320 = &g_53;
        int i, j;
        (*g_171) = (safe_lshift_func_uint8_t_u_s(g_109.f1, 4));
        (*l_320) = ((l_319 = ((safe_sub_func_uint32_t_u_u((func_86((~(safe_lshift_func_uint8_t_u_u((((p_81 < ((*l_310) = (!func_86(p_81, l_308[1][4], g_25, l_308[1][4].f0)))) || (safe_rshift_func_uint16_t_u_u(l_280, l_313))) <= (safe_mod_func_int16_t_s_s((g_318 = (1L != g_25)), p_79))), 4))), g_189, l_313, l_313) <= l_308[1][4].f2), l_313)) >= g_189.f1)) <= p_79);
        if ((*l_320))
            break;
    }
    (*g_171) |= (l_319 || ((g_189.f0 = (g_159[2][4][3] , p_81)) , l_308[1][4].f0));
    return p_81;
}







static int32_t func_86(uint16_t p_87, struct S0 p_88, uint16_t p_89, int32_t p_90)
{
    int64_t l_104 = 0xF33B7E8F3380028DLL;
    uint64_t l_112 = 18446744073709551613UL;
    int32_t l_134 = 0L;
    int32_t l_137 = 0xD91CD6C8L;
    int32_t l_138 = 9L;
    int32_t l_139 = (-6L);
    int32_t l_143 = 1L;
    int32_t l_145[10][4][6] = {{{1L,0xD524B970L,(-4L),(-1L),0xBDE13CD0L,(-1L)},{(-4L),0xEFA52C41L,0x392A451EL,1L,0xD524B970L,0x2A123F68L},{0x035E637FL,0L,(-1L),0x2209DD69L,2L,1L},{1L,0xE49781EEL,0xD524B970L,0xDEC8B57BL,0xEFA52C41L,0xEFA52C41L}},{{9L,0xEE6CD1A5L,0xEE6CD1A5L,9L,(-4L),0x035E637FL},{0xBF5146F7L,(-1L),(-8L),0x036E8254L,0L,2L},{0xEE6CD1A5L,0x5431BED7L,0x9F51DABAL,0xE49781EEL,0L,0xED9186F8L},{0x035E637FL,(-1L),0xBDE13CD0L,(-1L),(-4L),0xD524B970L}},{{0x392A451EL,0xEE6CD1A5L,0xBF5146F7L,2L,0xEFA52C41L,0xDEC8B57BL},{0xEA11651AL,0x0B5F74D8L,(-1L),0xED9186F8L,0x9F51DABAL,0x2209DD69L},{0x2A123F68L,0L,(-4L),1L,9L,1L},{0x5431BED7L,2L,0x5431BED7L,0x3FCD2A79L,0x2A123F68L,(-1L)}},{{(-1L),9L,2L,0x2A123F68L,0xED9186F8L,0x036E8254L},{0x14B9FDE9L,(-6L),1L,0x2A123F68L,0xE5196A25L,0x3FCD2A79L},{(-1L),0x10E11215L,0x6F053ABDL,0x3FCD2A79L,0xE49781EEL,0x14B9FDE9L},{0x5431BED7L,0x6F053ABDL,0x2209DD69L,1L,0xD308A82EL,0x9F51DABAL}},{{0x2A123F68L,(-4L),0xEFA52C41L,0xED9186F8L,2L,0x392A451EL},{0xEA11651AL,1L,0L,2L,2L,0L},{0x392A451EL,0x392A451EL,0xEA11651AL,(-1L),(-6L),0L},{0x035E637FL,0x2A123F68L,0xDEC8B57BL,(-1L),0xEFA52C41L,0x5431BED7L}},{{0xD524B970L,0x036E8254L,1L,(-6L),0x0B5F74D8L,(-1L)},{0x3FCD2A79L,(-6L),0x5431BED7L,0xD308A82EL,1L,0xEE6CD1A5L},{0xD308A82EL,1L,0xEE6CD1A5L,(-1L),0x2209DD69L,0x0B5F74D8L},{0xBDE13CD0L,0xE5196A25L,0xDEC8B57BL,0x392A451EL,0x10E11215L,0L}},{{0x10E11215L,2L,(-4L),0xBDE13CD0L,(-4L),2L},{0x2A123F68L,0x392A451EL,0x9F51DABAL,(-1L),(-8L),9L},{0x2209DD69L,0xBF5146F7L,0x6F053ABDL,1L,(-4L),(-6L)},{0L,0xBF5146F7L,0L,1L,(-8L),0x10E11215L}},{{0xEE6CD1A5L,0x392A451EL,0x192B7464L,0x9F51DABAL,(-4L),0x6F053ABDL},{(-1L),2L,0xE49781EEL,0xBF5146F7L,0x10E11215L,(-4L)},{(-1L),0xE5196A25L,(-1L),0xEA11651AL,0x2209DD69L,1L},{0x392A451EL,1L,0x3FCD2A79L,0x3FCD2A79L,1L,0x392A451EL}},{{0xED9186F8L,(-6L),0xE5196A25L,0xEE6CD1A5L,0x0B5F74D8L,0x2A123F68L},{(-8L),0x036E8254L,0L,2L,0xEFA52C41L,0x035E637FL},{(-8L),0x5C00A655L,2L,0xEE6CD1A5L,0x14B9FDE9L,0x036E8254L},{0xED9186F8L,0x0B5F74D8L,9L,0xDEC8B57BL,0L,0L}},{{0xD308A82EL,0x2209DD69L,(-1L),(-8L),(-1L),0x2A123F68L},{0x2209DD69L,0x0B5F74D8L,0x036E8254L,0xEFA52C41L,(-8L),0x6F053ABDL},{(-1L),0xE5196A25L,(-8L),0xE5196A25L,(-1L),9L},{0x3FCD2A79L,(-4L),0xEA11651AL,(-1L),0xEFA52C41L,0x5C00A655L}}};
    int32_t l_147[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_185 = 0x2741B67AL;
    int32_t **l_195[7][1][9] = {{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}},{{&g_35,&g_171,&g_35,&g_35,&g_171,&g_35,&g_35,&g_171,&g_35}}};
    const uint16_t *l_251 = &g_166[0][3][7];
    uint32_t *l_264 = &g_164;
    const int16_t *l_274[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
    const int16_t **l_273 = &l_274[0][3];
    const int16_t **l_276 = (void*)0;
    const int16_t ***l_275 = &l_276;
    int i, j, k;
    if ((**g_34))
    {
        int64_t *l_103[7][8] = {{&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55,(void*)0,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,&g_55,(void*)0,&g_55,&g_55,&g_55},{(void*)0,&g_55,&g_55,&g_55,(void*)0,&g_55,&g_55,(void*)0},{&g_55,&g_55,&g_55,&g_55,&g_55,(void*)0,&g_55,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55,(void*)0,&g_55,(void*)0,&g_55,&g_55}};
        int32_t l_105 = 0x455DCD8BL;
        int32_t *l_106 = &g_54;
        struct S0 *l_108[8][8][1] = {{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}},{{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109},{&g_109}}};
        struct S0 **l_107 = &l_108[2][3][0];
        int32_t l_140 = (-1L);
        int32_t l_141 = (-3L);
        int32_t l_142 = 0xDD43B544L;
        int32_t l_144 = (-1L);
        int32_t l_146 = 0x5C2BE574L;
        int32_t l_148 = 0x91F7684EL;
        int32_t l_149 = 0L;
        int32_t l_150 = 0L;
        int32_t l_151[1];
        int64_t l_172 = 0L;
        const uint8_t l_208[9][2][8] = {{{0xD3L,0x6EL,0x66L,0xFAL,0xCCL,8UL,255UL,0UL},{0x66L,0xB3L,0x19L,255UL,0xFAL,8UL,1UL,0xFFL}},{{8UL,0x6EL,0xEEL,249UL,0xEEL,0x6EL,8UL,0x00L},{0xFFL,0x66L,0x03L,0UL,1UL,255UL,0x19L,0xCCL}},{{1UL,0x19L,0UL,0UL,1UL,0xD3L,249UL,249UL},{0xFFL,0xEEL,0xCCL,0xCCL,0xEEL,0xFFL,1UL,1UL}},{{8UL,0x03L,1UL,0x6EL,0xFAL,0xB7L,255UL,4UL},{0x66L,0UL,1UL,0x6EL,0xCCL,1UL,0xB3L,1UL}},{{0xD3L,0xCCL,0xD3L,0xB7L,1UL,1UL,0xB3L,0x6EL},{0xB3L,249UL,0x19L,0x00L,0x6EL,255UL,8UL,0xB7L}},{{0xD3L,0UL,0x19L,0xEEL,0UL,0xB3L,0xB3L,0UL},{0x6EL,0xD3L,0xD3L,0x6EL,0x66L,0xFAL,0xCCL,8UL}},{{0xEEL,0x19L,0UL,0xD3L,0xFAL,0xFFL,255UL,0x00L},{0x00L,0x19L,249UL,0xB3L,0UL,0xFAL,0UL,0xB3L}},{{0xB7L,0xD3L,0xB7L,1UL,1UL,0xB3L,0x6EL,0UL},{0x66L,0UL,0xEEL,0UL,0xD3L,255UL,1UL,0x19L}},{{0x66L,249UL,255UL,0x03L,1UL,1UL,0x03L,255UL},{0xB7L,0xB7L,0xFFL,8UL,0UL,249UL,4UL,0xCCL}}};
        uint32_t l_230 = 4294967295UL;
        const int32_t l_254[7] = {0x15F5AF96L,0x15F5AF96L,0x15F5AF96L,0x15F5AF96L,0x15F5AF96L,0x15F5AF96L,0x15F5AF96L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_151[i] = 0xDAAAC5D9L;
        (*l_106) = (safe_div_func_int16_t_s_s((g_4 , (p_88.f1 == 1UL)), ((safe_sub_func_uint64_t_u_u(p_88.f0, (l_104 = p_88.f1))) , (l_105 , (~0x8F02L)))));
        (*l_107) = &p_88;


        if ((safe_add_func_int32_t_s_s(((l_112 = g_109.f2) & ((g_109 , g_28[5][1][0]) < ((+(p_88.f0 && (safe_mul_func_uint8_t_u_u(g_52[3], g_54)))) && (-1L)))), 2L)))
        {
            int8_t l_135 = 3L;
            int32_t l_136[4] = {0x636E33FDL,0x636E33FDL,0x636E33FDL,0x636E33FDL};
            uint64_t l_158 = 0xB1884F5BA48F3C6CLL;
            int16_t *l_161[10][5][2] = {{{(void*)0,(void*)0},{(void*)0,&g_10},{&g_10,(void*)0},{&g_10,(void*)0},{(void*)0,(void*)0}},{{&g_10,(void*)0},{&g_25,(void*)0},{&g_10,(void*)0},{(void*)0,(void*)0},{&g_25,(void*)0}},{{&g_25,&g_25},{(void*)0,&g_10},{(void*)0,&g_25},{&g_25,&g_10},{&g_10,&g_25}},{{(void*)0,&g_25},{(void*)0,&g_25},{&g_10,&g_10},{&g_25,&g_25},{(void*)0,&g_10}},{{(void*)0,&g_25},{&g_25,(void*)0},{&g_25,(void*)0},{(void*)0,(void*)0},{&g_10,(void*)0}},{{&g_25,(void*)0},{&g_10,(void*)0},{(void*)0,(void*)0},{&g_25,(void*)0},{&g_25,&g_25}},{{(void*)0,&g_10},{(void*)0,&g_25},{&g_25,&g_10},{&g_10,&g_25},{(void*)0,&g_25}},{{(void*)0,&g_25},{&g_10,&g_10},{&g_25,&g_25},{(void*)0,&g_10},{(void*)0,&g_25}},{{&g_25,(void*)0},{&g_25,(void*)0},{(void*)0,(void*)0},{&g_10,(void*)0},{&g_25,(void*)0}},{{&g_10,(void*)0},{(void*)0,(void*)0},{&g_25,(void*)0},{&g_25,&g_25},{(void*)0,&g_10}}};
            uint32_t l_169[10] = {0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL,0x29E9668BL};
            struct S0 *l_188[5] = {&g_189,&g_189,&g_189,&g_189,&g_189};
            int32_t **l_194 = (void*)0;
            int i, j, k;
            for (g_55 = 0; (g_55 <= 6); g_55 += 1)
            {
                int32_t *l_115 = &g_53;
                int32_t *l_116 = &g_53;
                int32_t *l_117 = &g_57;
                int32_t *l_118 = &l_105;
                int32_t *l_119 = &g_54;
                int32_t *l_120 = &l_105;
                int32_t *l_121 = &g_53;
                int32_t *l_122 = &g_53;
                int32_t *l_123 = &g_57;
                int32_t l_124 = (-9L);
                int32_t *l_125 = (void*)0;
                int32_t *l_126 = &g_57;
                int32_t *l_127 = &g_54;
                int32_t *l_128 = &g_53;
                int32_t *l_129 = &g_54;
                int32_t *l_130 = &l_124;
                int32_t *l_131 = &g_54;
                int32_t *l_132 = &l_124;
                int32_t *l_133[6][5][8] = {{{(void*)0,&l_124,&g_57,&g_57,&g_54,&g_4,(void*)0,&l_105},{&g_54,&g_4,(void*)0,&l_105,&g_53,&g_53,&g_53,&l_105},{&g_53,(void*)0,&g_53,&g_57,&g_4,(void*)0,&g_57,&g_53},{&l_105,&l_105,&g_53,&l_124,(void*)0,&g_57,&g_4,&g_4},{&l_105,&l_105,&g_53,&l_105,&g_4,&l_124,(void*)0,(void*)0}},{{&g_53,&g_4,(void*)0,&g_53,&g_53,(void*)0,&g_53,(void*)0},{&g_54,&g_4,(void*)0,&g_4,&g_54,&l_124,&l_105,&g_54},{(void*)0,&l_105,&g_54,&g_53,&g_54,&g_57,&g_54,&g_4},{&g_53,&l_105,&g_54,&g_54,&l_124,(void*)0,&l_105,&g_4},{&g_54,(void*)0,(void*)0,&g_54,&g_54,&g_53,&g_53,&l_124}},{{(void*)0,&g_4,(void*)0,&g_4,(void*)0,(void*)0,&l_105,&l_105},{(void*)0,&g_54,&g_57,&g_57,&g_53,&l_105,&g_57,&l_105},{&g_54,&g_4,&g_53,&g_4,&g_53,&l_105,&g_54,&g_4},{(void*)0,&g_4,&g_57,&l_105,(void*)0,&g_4,&g_57,(void*)0},{&l_105,&l_124,&g_54,&g_4,(void*)0,&g_4,&g_54,&l_124}},{{&l_124,&g_4,&g_53,&g_57,(void*)0,&l_105,(void*)0,&g_54},{(void*)0,&g_4,&g_53,&g_54,&l_124,&l_105,(void*)0,&g_4},{(void*)0,&g_54,&g_53,&l_105,&g_4,(void*)0,&g_54,&l_105},{&g_4,(void*)0,&g_54,&l_105,&g_57,&g_4,&g_57,&l_105},{&g_57,(void*)0,&g_57,&l_105,&g_57,&l_124,&g_54,&g_4}},{{&g_53,&g_4,&g_53,&g_54,&g_54,&g_53,&g_57,&g_54},{&g_53,&g_53,&g_57,&g_57,&g_57,&g_54,&l_105,&l_124},{&g_57,&l_124,(void*)0,(void*)0,(void*)0,&g_53,&g_54,&g_53},{&g_53,&l_124,(void*)0,&l_124,&g_53,&l_105,&g_54,&l_105},{(void*)0,&g_4,&g_53,&g_54,&g_53,(void*)0,(void*)0,&l_124}},{{&g_54,&l_105,&g_53,&g_4,&g_53,&g_4,&g_54,&g_57},{&g_53,&g_53,(void*)0,&l_105,(void*)0,&g_54,&g_54,&l_105},{(void*)0,&g_57,(void*)0,&l_105,(void*)0,&g_57,(void*)0,&g_57},{&g_53,&l_105,(void*)0,&g_4,&g_54,&g_57,&g_57,&l_124},{&l_105,(void*)0,&l_124,&g_54,&g_54,&l_105,&g_53,&l_105}}};
                uint8_t l_152 = 251UL;
                const int16_t * const l_162 = (void*)0;
                struct S0 * const *l_182[9];
                uint16_t *l_196 = &g_166[0][0][2];
                uint64_t *l_197[1];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_182[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_197[i] = (void*)0;
                --l_152;
            }
        }
        else
        {
            for (l_139 = (-24); (l_139 > (-4)); l_139 = safe_add_func_uint64_t_u_u(l_139, 6))
            {
                p_88.f1 = (*l_106);
                (*g_171) |= p_89;
            }
            return (**g_34);
        }
        l_150 &= (((*l_106) > (safe_add_func_uint32_t_u_u(p_88.f2, (safe_sub_func_int8_t_s_s(((0x91415BD81919B3D7LL && (safe_sub_func_uint16_t_u_u((65535UL >= (((((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((*l_106), (safe_add_func_uint8_t_u_u(g_189.f1, (&g_166[0][0][2] == l_251))))) > (l_144 = (safe_add_func_uint32_t_u_u(((l_254[5] || (*l_106)) , 0xF07088B2L), (**g_34))))), 0x2092L)) & g_198) || p_88.f1) || (*l_106)) & 0UL)), 0UL))) , p_88.f2), p_88.f0))))) >= g_10);
    }
    else
    {
        struct S0 **l_267 = &g_184;
        const uint64_t *l_269 = &l_112;
        const uint64_t **l_268[3];
        int i;
        for (i = 0; i < 3; i++)
            l_268[i] = &l_269;
        g_57 = (((safe_unary_minus_func_int8_t_s((p_88.f2 & (((*g_171) = ((safe_sub_func_uint32_t_u_u((p_88.f2 == 1L), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_88.f1, g_52[3])), ((l_264 == l_264) , g_4))))) || (safe_mod_func_int8_t_s_s(g_55, g_55)))) != 0x57E145B0L)))) <= 1UL) ^ p_87);
        (*l_267) = (void*)0;

        ((g_184 == 0) ? (void) (0) : __assert_fail ("g_184 == 0", "9.c", 2341, __PRETTY_FUNCTION__));
        g_270[4][2][2] = l_268[0];


    }
    (*l_275) = l_273;

    (((l_276 >= &l_274[0][0] && l_276 <= &l_274[0][3])) ? (void) (0) : __assert_fail ("(l_276 >= &l_274[0][0] && l_276 <= &l_274[0][3])", "9.c", 2348, __PRETTY_FUNCTION__));
    return g_277;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_28[i][j][k], "g_28[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_166[i][j][k], "g_166[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_450.f0, "g_450.f0", print_hash_value);
    transparent_crc(g_450.f1, "g_450.f1", print_hash_value);
    transparent_crc(g_450.f2, "g_450.f2", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1133[i], "g_1133[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1249[i], "g_1249[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1267, "g_1267", print_hash_value);
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1389, "g_1389", print_hash_value);
    transparent_crc(g_1423, "g_1423", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1464, "g_1464", print_hash_value);
    transparent_crc(g_1505, "g_1505", print_hash_value);
    transparent_crc(g_1722, "g_1722", print_hash_value);
    transparent_crc(g_1723, "g_1723", print_hash_value);
    transparent_crc(g_1724, "g_1724", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1726[i], "g_1726[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1727, "g_1727", print_hash_value);
    transparent_crc(g_1728, "g_1728", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1924[i], "g_1924[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1925[i], "g_1925[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1982, "g_1982", print_hash_value);
    transparent_crc(g_2071, "g_2071", print_hash_value);
    transparent_crc(g_2309, "g_2309", print_hash_value);
    transparent_crc(g_2444, "g_2444", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2481[i].f0, "g_2481[i].f0", print_hash_value);
        transparent_crc(g_2481[i].f1, "g_2481[i].f1", print_hash_value);
        transparent_crc(g_2481[i].f2, "g_2481[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2569, "g_2569", print_hash_value);
    transparent_crc(g_2621, "g_2621", print_hash_value);
    transparent_crc(g_2671, "g_2671", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_2692[i][j][k], "g_2692[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2725, "g_2725", print_hash_value);
    transparent_crc(g_2844, "g_2844", print_hash_value);
    transparent_crc(g_2876, "g_2876", print_hash_value);
    transparent_crc(g_2895, "g_2895", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2903[i], "g_2903[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2925, "g_2925", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
