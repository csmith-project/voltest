# 1 "16.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "16.c"
# 10 "16.c"
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
# 11 "16.c" 2


static long __undefined;



static int32_t g_3 = 0xCA4F833FL;
static uint8_t g_25 = 255UL;
static const int32_t *g_75 = &g_3;
static const int32_t * volatile *g_74 = &g_75;
static uint32_t g_84 = 0x3E85184BL;
static volatile uint8_t g_86 = 247UL;
static int64_t g_87 = (-1L);
static volatile int32_t g_88 = 0x164D14C5L;
static int32_t g_90 = (-8L);
static volatile int32_t g_96 = 0L;
static volatile int32_t g_97 = 0x804E0369L;
static uint32_t g_98 = 0UL;
static int32_t **g_103 = (void*)0;
static int16_t g_132 = 0xE564L;
static uint16_t g_137 = 0xCB07L;
static int16_t *g_142 = (void*)0;
static uint64_t g_144 = 18446744073709551614UL;
static int64_t g_148[8] = {0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL,0x6F03D6BE2EA708A1LL};
static int32_t g_153[1] = {0x28B08085L};
static int64_t g_186 = 0L;
static int8_t g_216 = 0x9DL;
static int8_t g_218 = 0x0FL;
static uint64_t * volatile g_291 = (void*)0;
static uint64_t * volatile * volatile g_290 = &g_291;
static int8_t g_325 = 1L;
static int32_t *g_327 = &g_153[0];
static const int32_t g_343 = 0x05980179L;
static uint32_t g_365 = 4294967288UL;
static int32_t *g_393 = &g_90;
static uint64_t g_395 = 0UL;
static int16_t g_396 = 5L;
static int32_t g_460 = 0x20F205E0L;
static uint32_t g_494 = 0xFFE4577FL;
static const int32_t g_507 = 0xB6F005CBL;
static volatile int32_t g_524 = (-7L);
static uint32_t g_525 = 5UL;
static uint8_t g_560 = 0x58L;
static const int32_t *g_561[9] = {&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90};
static volatile uint32_t g_591 = 1UL;
static uint8_t * volatile g_601 = (void*)0;
static uint8_t * volatile *g_600 = &g_601;
static uint16_t g_630 = 0UL;
static int32_t g_644[4] = {0xA82EB70DL,0xA82EB70DL,0xA82EB70DL,0xA82EB70DL};
static uint8_t *g_705 = (void*)0;
static uint8_t **g_704 = &g_705;
static int32_t ****g_855 = (void*)0;
static uint8_t g_874 = 0UL;
static int64_t g_876 = 0x3F36310C6C2AAE00LL;
static uint16_t g_877 = 7UL;
static uint32_t g_930 = 4294967287UL;
static uint16_t g_1005 = 7UL;
static int32_t ** volatile g_1011 = &g_327;
static int8_t g_1078[4] = {0L,0L,0L,0L};
static int32_t ** volatile g_1161 = &g_327;
static int32_t ** volatile g_1203 = &g_327;
static int8_t *g_1206 = &g_218;
static int8_t **g_1205[3][3] = {{&g_1206,&g_1206,&g_1206},{(void*)0,(void*)0,(void*)0},{&g_1206,&g_1206,&g_1206}};
static int32_t *g_1217[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t **g_1216[2][4][6] = {{{&g_1217[6],&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6]},{&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6],(void*)0},{&g_1217[6],&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6]},{&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6],(void*)0}},{{&g_1217[6],&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6]},{&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6],(void*)0},{&g_1217[6],&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6]},{&g_1217[6],(void*)0,(void*)0,&g_1217[6],&g_1217[6],(void*)0}}};
static int32_t *** volatile g_1215[5] = {&g_1216[0][0][3],&g_1216[0][0][3],&g_1216[0][0][3],&g_1216[0][0][3],&g_1216[0][0][3]};
static int32_t ** volatile g_1291 = &g_393;
static const int32_t g_1418 = 0L;
static uint64_t g_1449 = 0UL;
static int32_t ** volatile g_1458 = &g_327;
static uint64_t *g_1476[5][2][5] = {{{&g_1449,&g_1449,&g_395,&g_395,&g_395},{(void*)0,&g_144,&g_395,(void*)0,(void*)0}},{{&g_144,&g_395,&g_144,&g_1449,&g_395},{(void*)0,&g_395,&g_1449,&g_144,&g_395}},{{&g_1449,&g_395,&g_1449,&g_395,&g_1449},{&g_395,&g_144,&g_1449,&g_395,(void*)0}},{{&g_395,&g_1449,&g_144,&g_395,&g_144},{(void*)0,(void*)0,&g_395,&g_144,(void*)0}},{{&g_395,&g_395,&g_395,&g_1449,&g_1449},{(void*)0,&g_1449,&g_1449,(void*)0,&g_395}}};
static uint64_t **g_1475[10] = {&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4],&g_1476[4][1][4]};
static uint64_t **g_1477 = &g_1476[4][1][4];
static int32_t g_1536 = 1L;
static volatile uint64_t g_1605 = 18446744073709551615UL;
static int32_t * const *g_1622 = &g_327;
static int32_t * const ** const g_1621[7][7][5] = {{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,(void*)0},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,(void*)0},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{(void*)0,&g_1622,&g_1622,&g_1622,&g_1622}},{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,(void*)0},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{(void*)0,&g_1622,(void*)0,&g_1622,(void*)0},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622}},{{&g_1622,&g_1622,&g_1622,&g_1622,(void*)0},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,(void*)0,&g_1622,(void*)0,(void*)0},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622}},{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,(void*)0,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622}},{{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,(void*)0,&g_1622,(void*)0,(void*)0},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622}},{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{(void*)0,&g_1622,(void*)0,&g_1622,&g_1622},{&g_1622,(void*)0,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{(void*)0,&g_1622,(void*)0,&g_1622,&g_1622},{&g_1622,(void*)0,&g_1622,&g_1622,&g_1622}},{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,(void*)0,(void*)0,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,(void*)0,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{(void*)0,&g_1622,(void*)0,&g_1622,&g_1622}}};
static int32_t * const ** const *g_1620 = &g_1621[0][5][3];
static int32_t g_1627 = (-9L);
static uint32_t *g_1695 = &g_930;
static int32_t *** volatile g_1723 = &g_1216[0][0][3];
static const volatile int64_t *g_1741 = (void*)0;
static const volatile int64_t ** volatile g_1740 = &g_1741;



static const uint8_t func_1(void);
static int32_t func_6(uint16_t p_7, int32_t * const p_8, uint64_t p_9, const int8_t p_10);
static int8_t func_11(uint32_t p_12, int32_t * p_13, int32_t * p_14, int32_t p_15);
static uint8_t func_32(const int32_t * p_33, int32_t p_34, int32_t * p_35, int64_t p_36);
static int32_t * func_37(int32_t * p_38, uint32_t p_39, uint64_t p_40, int32_t * p_41, int32_t * p_42);
static uint32_t func_45(const int32_t * p_46, const int32_t * p_47, uint8_t p_48, const int32_t * p_49);
static int32_t * func_51(int32_t p_52, int32_t p_53, int8_t p_54, uint64_t p_55);
static uint32_t func_61(int64_t p_62, int32_t * p_63, int32_t * p_64, int64_t p_65);
static uint32_t func_78(uint64_t p_79, uint64_t p_80, uint32_t p_81, int32_t * p_82);
static int32_t * func_106(uint64_t p_107, uint64_t p_108, int32_t p_109, int32_t * p_110);
# 115 "16.c"
static const uint8_t func_1(void)
{
    int32_t *l_2 = &g_3;
    uint16_t l_28 = 0xF6CCL;
    int32_t *l_645 = &g_3;
    (*l_2) = 0L;
    for (g_3 = (-9); (g_3 != (-26)); g_3--)
    {
        int32_t l_16 = 0x471DFD94L;
        int32_t l_31 = 0x6123D4A1L;
        int32_t **l_642 = &l_2;
        int32_t *l_643 = &g_644[2];
        uint8_t *l_872 = (void*)0;
        uint8_t *l_873[1];
        int64_t *l_875[10][8] = {{(void*)0,&g_876,(void*)0,&g_876,&g_876,&g_876,&g_876,&g_876},{&g_876,(void*)0,&g_876,&g_876,(void*)0,&g_876,&g_876,&g_876},{&g_876,&g_876,&g_876,(void*)0,&g_876,(void*)0,&g_876,&g_876},{(void*)0,&g_876,&g_876,&g_876,(void*)0,&g_876,&g_876,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_876,&g_876,&g_876,&g_876},{&g_876,(void*)0,&g_876,&g_876,&g_876,(void*)0,&g_876,&g_876},{&g_876,(void*)0,&g_876,&g_876,&g_876,&g_876,&g_876,&g_876},{(void*)0,(void*)0,(void*)0,&g_876,&g_876,&g_876,&g_876,&g_876},{&g_876,&g_876,&g_876,&g_876,&g_876,&g_876,(void*)0,&g_876},{&g_876,&g_876,&g_876,&g_876,&g_876,&g_876,&g_876,&g_876}};
        uint16_t l_878 = 0UL;
        int32_t l_879 = 0xAB457C23L;
        uint16_t *l_1004[3][1];
        int32_t l_1996 = 0x6E8C10E0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_873[i] = &g_874;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1004[i][j] = &g_1005;
        }
    }
    return (*l_2);
}







static int32_t func_6(uint16_t p_7, int32_t * const p_8, uint64_t p_9, const int8_t p_10)
{
    int32_t l_1035 = 0L;
    int32_t l_1082 = 0xB721D94BL;
    int32_t l_1086 = 0x8444C723L;
    int32_t l_1089 = 3L;
    int32_t l_1092[2];
    uint32_t l_1132 = 0xA007F87CL;
    int8_t *l_1183 = &g_1078[1];
    int32_t *l_1191 = &l_1092[1];
    int32_t *****l_1192 = &g_855;
    const int32_t *l_1200[5][8] = {{&l_1086,&l_1092[1],(void*)0,&g_343,&l_1092[1],&g_343,(void*)0,&l_1092[1]},{&l_1082,(void*)0,&l_1086,&l_1082,&g_343,&g_343,&l_1082,&l_1086},{&l_1092[1],&l_1092[1],(void*)0,&g_343,&l_1082,(void*)0,&l_1082,&g_343},{&l_1086,&g_343,&l_1086,&g_343,&g_343,(void*)0,(void*)0,&g_343},{&g_343,(void*)0,(void*)0,&g_343,&g_343,&l_1086,&g_343,&l_1086}};
    int64_t l_1236 = 1L;
    uint32_t l_1250 = 0xEAEE5483L;
    int32_t l_1285 = 0x44AEB7B0L;
    uint64_t l_1306 = 5UL;
    uint32_t l_1320 = 18446744073709551615UL;
    const int32_t **l_1350 = &l_1200[1][5];
    uint64_t l_1359 = 0xA9EEA71B5250E89DLL;
    uint64_t *l_1413[8][8][4] = {{{&g_144,&l_1359,&g_144,&g_144},{&l_1306,&l_1359,&l_1306,&g_144},{&l_1359,(void*)0,&g_144,(void*)0},{(void*)0,&g_144,&l_1359,(void*)0},{&l_1359,&l_1359,&l_1359,&l_1359},{(void*)0,&g_144,&g_144,&l_1306},{&l_1359,&l_1359,&l_1306,&l_1359},{&l_1306,&l_1359,&l_1359,&l_1359}},{{&l_1359,&l_1359,&g_144,&l_1306},{&l_1359,&g_144,&l_1359,&l_1359},{&g_144,&l_1359,(void*)0,(void*)0},{&g_144,&g_144,&l_1359,(void*)0},{&l_1359,(void*)0,&g_144,&g_144},{&l_1359,&l_1359,&l_1359,&g_144},{&l_1306,&l_1359,&l_1306,&g_144},{&l_1359,(void*)0,&g_144,(void*)0}},{{(void*)0,&g_144,&l_1359,(void*)0},{&l_1359,&l_1359,&l_1359,&l_1359},{(void*)0,&g_144,&g_144,&l_1306},{&l_1359,&l_1359,&l_1306,&l_1359},{&l_1306,&l_1359,&l_1359,&l_1359},{&l_1359,&l_1359,&g_144,&l_1306},{&l_1359,&g_144,&l_1359,&l_1359},{&g_144,&l_1359,(void*)0,(void*)0}},{{&g_144,&g_144,&l_1359,(void*)0},{&l_1359,&g_144,&l_1359,&l_1359},{&l_1359,&l_1306,&l_1359,&l_1359},{(void*)0,&l_1306,(void*)0,&l_1359},{&l_1306,&g_144,&g_144,(void*)0},{(void*)0,&l_1359,&l_1359,&g_144},{&g_144,&l_1359,&l_1359,&g_144},{(void*)0,&l_1359,&g_144,(void*)0}},{{&l_1306,&l_1359,(void*)0,&l_1359},{(void*)0,&l_1359,&l_1359,&l_1359},{&l_1359,&l_1359,&l_1359,(void*)0},{&l_1359,&l_1359,&l_1359,&g_144},{&l_1359,&l_1359,&g_144,&g_144},{&l_1359,&l_1359,&l_1359,(void*)0},{&l_1359,&g_144,&l_1359,&l_1359},{&l_1359,&l_1306,&l_1359,&l_1359}},{{(void*)0,&l_1306,(void*)0,&l_1359},{&l_1306,&g_144,&g_144,(void*)0},{(void*)0,&l_1359,&l_1359,&g_144},{&g_144,&l_1359,&l_1359,&g_144},{(void*)0,&l_1359,&g_144,(void*)0},{&l_1306,&l_1359,(void*)0,&l_1359},{(void*)0,&l_1359,&l_1359,&l_1359},{&l_1359,&l_1359,&l_1359,(void*)0}},{{&l_1359,&l_1359,&l_1359,&g_144},{&l_1359,&l_1359,&l_1359,&l_1359},{&l_1359,&l_1359,&l_1359,&g_144},{&l_1306,&l_1359,&l_1359,&l_1359},{&l_1359,(void*)0,&l_1359,&l_1359},{(void*)0,(void*)0,(void*)0,&l_1359},{(void*)0,&l_1359,&l_1359,&g_144},{&g_144,&l_1359,&l_1359,&l_1359}},{{&g_144,&l_1359,&l_1359,&g_144},{&g_144,&l_1359,&l_1359,(void*)0},{(void*)0,&g_144,(void*)0,&l_1359},{(void*)0,&l_1359,&l_1359,&l_1359},{&l_1359,&g_144,&l_1359,(void*)0},{&l_1306,&l_1359,&l_1359,&g_144},{&l_1359,&l_1359,&l_1359,&l_1359},{&l_1359,&l_1359,&l_1359,&g_144}}};
    uint64_t **l_1412 = &l_1413[0][7][1];
    uint32_t l_1419[6] = {0xD8B2FCFFL,0x317921FDL,0x317921FDL,0xD8B2FCFFL,0x317921FDL,0x317921FDL};
    int16_t *l_1426 = &g_396;
    int32_t l_1429 = 0x3D079EE7L;
    int8_t l_1443[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint8_t l_1450 = 0x8BL;
    int32_t *l_1472 = (void*)0;
    int32_t **l_1489 = (void*)0;
    int64_t l_1537 = 1L;
    uint16_t *l_1548 = &g_630;
    uint16_t *l_1549[5];
    int32_t l_1550 = 0xA9C8F626L;
    uint32_t *l_1551 = (void*)0;
    uint32_t *l_1552 = (void*)0;
    uint32_t *l_1553 = &g_494;
    uint8_t l_1554 = 0x0AL;
    int32_t l_1596 = 0x8490C685L;
    uint64_t l_1651 = 8UL;
    int32_t l_1652 = (-7L);
    uint32_t l_1679[4] = {0x8D11E8E1L,0x8D11E8E1L,0x8D11E8E1L,0x8D11E8E1L};
    uint64_t l_1680 = 1UL;
    uint32_t l_1684[8][10] = {{0x1E9AD3EEL,0x7593EB6BL,0x7593EB6BL,0x1E9AD3EEL,4UL,7UL,0UL,0xEEF59DFFL,0UL,7UL},{8UL,7UL,4UL,7UL,0x5B6CC60AL,0xEEF59DFFL,4294967295UL,0x1E9AD3EEL,0x1E9AD3EEL,4294967295UL},{7UL,0xEEF59DFFL,4UL,4UL,0xEEF59DFFL,7UL,7UL,4294967295UL,0x5B6CC60AL,4294967295UL},{0x7593EB6BL,4UL,0x5B6CC60AL,0x1E9AD3EEL,0x5B6CC60AL,4UL,0x7593EB6BL,7UL,4294967290UL,4294967290UL},{0x7593EB6BL,4294967290UL,7UL,8UL,8UL,7UL,4294967290UL,0x7593EB6BL,0xEEF59DFFL,7UL},{7UL,4294967290UL,0x7593EB6BL,0xEEF59DFFL,7UL,0xEEF59DFFL,0x7593EB6BL,4294967290UL,7UL,8UL},{0x5B6CC60AL,4UL,0x7593EB6BL,7UL,4294967290UL,4294967290UL,7UL,0x7593EB6BL,4UL,0x5B6CC60AL},{4UL,0xEEF59DFFL,7UL,7UL,4294967295UL,0x5B6CC60AL,4294967295UL,7UL,7UL,0xEEF59DFFL}};
    uint8_t ***l_1688 = &g_704;
    uint8_t ***l_1691 = &g_704;
    const int8_t *l_1700 = &g_218;
    const int8_t **l_1699 = &l_1700;
    int32_t *l_1742 = (void*)0;
    int8_t l_1744 = 0x05L;
    uint32_t l_1745 = 0x2B3FC87BL;
    int32_t **l_1772[4][1];
    int32_t **l_1800 = &l_1472;
    int32_t *** const l_1799[4] = {&l_1800,&l_1800,&l_1800,&l_1800};
    int32_t *** const *l_1798 = &l_1799[2];
    int32_t l_1834 = 0L;
    int32_t *l_1873 = &l_1082;
    uint64_t l_1975 = 0xD75A008977415C45LL;
    const int32_t *l_1994 = &g_3;
    uint32_t l_1995[2][6] = {{0x5DF50837L,7UL,0x5DF50837L,7UL,0x5DF50837L,7UL},{0x5DF50837L,7UL,0x5DF50837L,7UL,0x5DF50837L,7UL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1092[i] = (-6L);
    for (i = 0; i < 5; i++)
        l_1549[i] = &g_1005;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1772[i][j] = (void*)0;
    }
lbl_1973:
    for (g_216 = (-9); (g_216 != 15); g_216 = safe_add_func_int16_t_s_s(g_216, 1))
    {
        uint32_t l_1012 = 4294967295UL;
        const int32_t *l_1031 = &g_90;
        int8_t l_1074 = (-1L);
        int32_t l_1076[10][1][1] = {{{1L}},{{(-1L)}},{{(-1L)}},{{1L}},{{(-1L)}},{{(-1L)}},{{1L}},{{(-1L)}},{{(-1L)}},{{1L}}};
        uint32_t l_1093 = 0xC4A063BFL;
        int8_t l_1110 = 0x82L;
        int32_t ***l_1114[7];
        int32_t **l_1126 = &g_327;
        int32_t *l_1134[1];
        int32_t *l_1137 = &g_153[0];
        int32_t *****l_1198 = &g_855;
        int16_t l_1226 = 0x0A66L;
        uint16_t l_1237 = 0x269BL;
        int32_t *l_1253[10][7] = {{&g_153[0],&g_153[0],&g_3,&g_153[0],&g_3,&g_460,&g_3},{&g_153[0],&l_1076[9][0][0],&l_1076[9][0][0],&g_153[0],&l_1086,&l_1089,&g_153[0]},{&l_1089,&g_3,&l_1086,&l_1086,&g_3,&l_1089,&l_1076[9][0][0]},{&g_3,&g_153[0],&g_460,&l_1092[1],&l_1092[1],&g_460,&g_153[0]},{&g_3,&l_1076[9][0][0],&l_1089,&g_3,&l_1086,&l_1086,&g_3},{&l_1089,&g_153[0],&l_1089,&l_1086,&g_153[0],&l_1076[9][0][0],&l_1076[9][0][0]},{&g_153[0],&g_3,&g_460,&g_3,&g_153[0],&g_460,&l_1092[1]},{&l_1092[1],&l_1076[9][0][0],&l_1086,&l_1092[1],&l_1086,&l_1076[9][0][0],&l_1092[1]},{&l_1089,&l_1092[1],&l_1076[9][0][0],&l_1086,&l_1092[1],&l_1086,&l_1076[9][0][0]},{&l_1092[1],&l_1092[1],&g_460,&g_153[0],&g_3,&g_460,&g_3}};
        uint64_t *l_1255 = (void*)0;
        uint64_t **l_1254[10][3][4] = {{{(void*)0,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,&l_1255,&l_1255},{(void*)0,&l_1255,(void*)0,(void*)0}},{{&l_1255,&l_1255,&l_1255,(void*)0},{&l_1255,(void*)0,&l_1255,&l_1255},{(void*)0,&l_1255,&l_1255,&l_1255}},{{&l_1255,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,&l_1255,&l_1255}},{{&l_1255,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,&l_1255,(void*)0},{&l_1255,(void*)0,(void*)0,&l_1255}},{{(void*)0,&l_1255,&l_1255,&l_1255},{(void*)0,(void*)0,&l_1255,(void*)0},{&l_1255,&l_1255,(void*)0,&l_1255}},{{&l_1255,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,&l_1255,&l_1255},{(void*)0,&l_1255,(void*)0,(void*)0}},{{&l_1255,&l_1255,&l_1255,&l_1255},{(void*)0,&l_1255,&l_1255,&l_1255},{&l_1255,&l_1255,(void*)0,&l_1255}},{{&l_1255,&l_1255,&l_1255,&l_1255},{&l_1255,(void*)0,(void*)0,&l_1255},{&l_1255,&l_1255,&l_1255,&l_1255}},{{&l_1255,&l_1255,(void*)0,&l_1255},{&l_1255,&l_1255,&l_1255,(void*)0},{&l_1255,&l_1255,(void*)0,(void*)0}},{{&l_1255,&l_1255,&l_1255,&l_1255},{(void*)0,&l_1255,&l_1255,(void*)0},{&l_1255,&l_1255,(void*)0,&l_1255}}};
        uint64_t l_1259[2][1];
        uint32_t l_1351[1];
        int64_t l_1358 = 0x12717DFC3A508865LL;
        uint64_t l_1384[9][5] = {{8UL,18446744073709551615UL,9UL,18446744073709551610UL,0x8F1F5FE97D0CB0FFLL},{18446744073709551610UL,0x03946C29A7D1C01BLL,18446744073709551608UL,18446744073709551613UL,8UL},{9UL,8UL,0xF60035CF8572BDACLL,0x8F1F5FE97D0CB0FFLL,0xD19850B64EA06463LL},{0x03946C29A7D1C01BLL,18446744073709551615UL,18446744073709551615UL,0x03946C29A7D1C01BLL,9UL},{0x03946C29A7D1C01BLL,18446744073709551613UL,0UL,8UL,18446744073709551613UL},{9UL,18446744073709551610UL,5UL,0xF60035CF8572BDACLL,18446744073709551615UL},{18446744073709551610UL,9UL,18446744073709551615UL,8UL,0xF60035CF8572BDACLL},{18446744073709551613UL,0x03946C29A7D1C01BLL,9UL,0x03946C29A7D1C01BLL,18446744073709551613UL},{18446744073709551615UL,0x03946C29A7D1C01BLL,9UL,0x8F1F5FE97D0CB0FFLL,8UL}};
        uint8_t *l_1434[10] = {&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25};
        int64_t *l_1448 = &l_1358;
        uint16_t *l_1463 = (void*)0;
        uint32_t l_1505 = 9UL;
        uint64_t l_1510 = 0xCDADD595796EF388LL;
        int32_t **l_1525 = &g_1217[6];
        int32_t *l_1527 = &l_1089;
        const int32_t *l_1528 = &l_1089;
        uint64_t l_1535 = 0x29F8FCDD1D115860LL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1114[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1134[i] = (void*)0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1259[i][j] = 1UL;
        }
        for (i = 0; i < 1; i++)
            l_1351[i] = 4294967292UL;
    }
    l_1554 &= (((*l_1553) = (safe_mul_func_uint16_t_u_u((g_877 = (((*l_1191) > (((safe_div_func_uint16_t_u_u(g_507, ((*l_1548) = (safe_mul_func_int8_t_s_s((0xDCL < (safe_lshift_func_int8_t_s_u(p_9, 5))), (((safe_lshift_func_int8_t_s_u(7L, p_7)) & (0L != p_9)) && g_325)))))) >= 65535UL) || (-1L))) , p_9)), l_1550))) & 4294967295UL);
    if (((void*)0 != l_1549[1]))
    {
        int64_t l_1561[6] = {(-1L),0x93573E75A77902B7LL,(-1L),(-1L),0x93573E75A77902B7LL,(-1L)};
        int32_t l_1572 = 0L;
        int32_t l_1583 = 0xE2AAD49AL;
        int32_t l_1586 = (-6L);
        int32_t l_1590[1];
        int32_t l_1655[8][4] = {{(-2L),0xD1BFF0A1L,0xCD612E5AL,(-1L)},{(-1L),0xC87A5F73L,0x9396A856L,0xD1BFF0A1L},{0xBB83E3AFL,0x9396A856L,0x9396A856L,0xBB83E3AFL},{(-1L),1L,0xCD612E5AL,0x2DC64707L},{(-2L),0x199D8D18L,0x2DC64707L,1L},{0x2DC64707L,1L,(-1L),1L},{0x9396A856L,0x199D8D18L,0xC87A5F73L,0x2DC64707L},{0x9863BBFDL,1L,1L,0xBB83E3AFL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1590[i] = 0x6EFF7EADL;
lbl_1630:
        for (g_90 = 5; (g_90 >= (-29)); g_90 = safe_sub_func_uint32_t_u_u(g_90, 8))
        {
            (*l_1191) = (**g_1203);
        }
        for (g_395 = 0; (g_395 <= 46); ++g_395)
        {
            int8_t l_1573 = 0x45L;
            int16_t l_1587 = 0xCDCDL;
            int32_t l_1588[2][4][8] = {{{(-1L),(-1L),0x90432337L,0x52A3A9D2L,0xF9089DB8L,0x21C40FB3L,0x21C40FB3L,0x4FF34D08L},{0x490865A1L,0xFE02A621L,0x490865A1L,0xF9089DB8L,0x952307A1L,(-5L),3L,(-1L)},{(-1L),0x90432337L,0xF9089DB8L,0x82A5C1BEL,(-1L),0x952307A1L,0x952307A1L,(-1L)},{(-1L),0x21C40FB3L,0x21C40FB3L,(-1L),0x952307A1L,0x82A5C1BEL,0x4FF34D08L,(-5L)}},{{0x490865A1L,0x52A3A9D2L,0x82A5C1BEL,3L,0x21C40FB3L,0xFE02A621L,(-5L),0xFE02A621L},{5L,0x52A3A9D2L,0x4FF34D08L,0x52A3A9D2L,5L,0x82A5C1BEL,(-1L),(-4L)},{0x82A5C1BEL,0x21C40FB3L,5L,(-1L),0x0DC84E00L,0x952307A1L,0x52A3A9D2L,0x52A3A9D2L},{(-5L),0x90432337L,5L,5L,0x90432337L,(-5L),(-1L),0x0DC84E00L}}};
            int32_t l_1591[2][1][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}}};
            uint32_t l_1593 = 0x9681B844L;
            int8_t ** const l_1619 = (void*)0;
            int32_t ***l_1639[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1639[i] = &l_1489;
            for (l_1089 = (-30); (l_1089 <= (-8)); l_1089 = safe_add_func_int8_t_s_s(l_1089, 8))
            {
                uint32_t l_1562 = 6UL;
                int32_t **** const *l_1567 = &g_855;
                int32_t l_1584 = 0x12710B56L;
                int32_t l_1585[10][7] = {{0L,(-1L),0x17CE4387L,(-2L),0xB911259DL,0xDCC28428L,0x36F34A58L},{0L,0xFCDEC5DFL,4L,0x36F34A58L,4L,0xFCDEC5DFL,0L},{0xDCC28428L,0xFCDEC5DFL,0x6A0DFF07L,(-1L),(-5L),0L,0x0702BCD2L},{0x0702BCD2L,0xF793EF42L,(-5L),(-2L),0xFCDEC5DFL,0x0702BCD2L,0x848780D4L},{4L,0x848780D4L,(-2L),0L,0x6A0DFF07L,0L,(-2L)},{0x224E60D4L,0x224E60D4L,(-1L),0L,0x182BFE1AL,0x36F34A58L,0xCB48A0C6L},{0x6A0DFF07L,0x182BFE1AL,4L,(-2L),0xDCC28428L,0x848780D4L,0xF793EF42L},{0xFA8A05FEL,(-1L),0x36F34A58L,0L,0x182BFE1AL,(-1L),0x182BFE1AL},{0xFCDEC5DFL,0xDCC28428L,0xDCC28428L,0xFCDEC5DFL,0x6A0DFF07L,(-1L),(-5L)},{0L,0x36F34A58L,(-1L),0xFA8A05FEL,0xFCDEC5DFL,0x848780D4L,0L}};
                int16_t l_1597 = 0L;
                int64_t l_1603[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint64_t l_1611[2];
                int32_t * const l_1626 = &g_1627;
                int32_t * const *l_1625 = &l_1626;
                int32_t * const ** const l_1624 = &l_1625;
                int32_t * const ** const *l_1623 = &l_1624;
                int32_t ***l_1638 = &g_1216[0][0][5];
                const int32_t *l_1656[10][8] = {{&l_1590[0],&l_1585[5][2],&l_1585[5][2],&l_1584,&l_1585[5][2],&l_1585[5][2],&l_1590[0],&g_90},{&l_1585[5][2],&l_1585[5][2],&l_1590[0],&g_90,&g_460,&g_460,&g_90,&l_1590[0]},{(void*)0,(void*)0,&l_1585[5][2],&g_1418,&g_460,&l_1584,&l_1655[5][2],&l_1584},{&l_1585[5][2],&l_1590[0],&g_1418,&l_1590[0],&l_1585[5][2],&l_1588[0][3][5],(void*)0,&l_1584},{&l_1590[0],&g_460,&l_1655[5][2],&g_1418,&g_1418,&l_1655[5][2],&g_460,(void*)0},{&g_1418,&l_1655[5][2],&g_460,&l_1590[0],&l_1588[0][3][5],&g_90,&l_1588[0][3][5],&l_1590[0]},{&l_1585[5][2],&l_1584,&l_1585[5][2],&l_1585[5][2],&l_1590[0],&g_90,&g_460,&g_460},{&g_460,&l_1655[5][2],&g_1418,&g_1418,&l_1655[5][2],&g_460,&l_1590[0],&l_1588[0][3][5]},{&g_460,&l_1586,(void*)0,&l_1655[5][2],&l_1590[0],&l_1655[5][2],(void*)0,&l_1586},{&l_1585[5][2],(void*)0,&g_90,&l_1655[5][2],&l_1588[0][3][5],&l_1585[5][2],&l_1585[5][2],&l_1588[0][3][5]}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1611[i] = 0x40E8580861A457D5LL;
                (*g_327) |= (l_1562 = l_1561[2]);
                for (g_84 = 16; (g_84 > 31); ++g_84)
                {
                    int16_t l_1570[10][2][10] = {{{0xAC30L,8L,0xDD33L,0x9BD5L,0xB536L,0L,0x6249L,0xDABBL,0xDD8DL,0xB536L},{0xDD8DL,0xDCC3L,8L,0x9BD5L,(-1L),0x9BD5L,8L,0xDCC3L,0xDD8DL,(-1L)}},{{5L,0xDD33L,0xDABBL,0x9BD5L,0x8CA0L,0xAC30L,0xDCC3L,0x6249L,0xDD8DL,0x8CA0L},{0L,0xDABBL,0xDCC3L,0x9BD5L,0x873AL,0xDD8DL,0xDD33L,0xDD33L,0xDD8DL,0x873AL}},{{0x9BD5L,0x6249L,0x6249L,0x9BD5L,7L,5L,0xDABBL,8L,0xDD8DL,7L},{0xAC30L,8L,0xDD33L,0x9BD5L,0x6249L,0xB536L,0xCAB9L,1L,(-1L),0x6249L}},{{(-1L),(-1L),0x7327L,0x8CA0L,0xDCC3L,0x8CA0L,0x7327L,(-1L),(-1L),0xDCC3L},{0x873AL,0xFD78L,1L,0x8CA0L,0xDABBL,7L,(-1L),0xCAB9L,(-1L),0xDABBL}},{{0xB536L,1L,(-1L),0x8CA0L,8L,(-1L),0xFD78L,0xFD78L,(-1L),8L},{0x8CA0L,0xCAB9L,0xCAB9L,0x8CA0L,0xDD33L,0x873AL,1L,0x7327L,(-1L),0xDD33L}},{{7L,0x7327L,0xFD78L,0x8CA0L,0x6249L,0xB536L,0xCAB9L,1L,(-1L),0x6249L},{(-1L),(-1L),0x7327L,0x8CA0L,0xDCC3L,0x8CA0L,0x7327L,(-1L),(-1L),0xDCC3L}},{{0x873AL,0xFD78L,1L,0x8CA0L,0xDABBL,7L,(-1L),0xCAB9L,(-1L),0xDABBL},{0xB536L,1L,(-1L),0x8CA0L,8L,(-1L),0xFD78L,0xFD78L,(-1L),8L}},{{0x8CA0L,0xCAB9L,0xCAB9L,0x8CA0L,0xDD33L,0x873AL,1L,0x7327L,(-1L),0xDD33L},{0xFD78L,0L,0xDD8DL,1L,0xC2F2L,0xCAB9L,0x9BD5L,0xAC30L,(-1L),0xC2F2L}},{{(-1L),5L,0L,1L,1L,1L,0L,5L,(-1L),1L},{0x7327L,0xDD8DL,0xAC30L,1L,1L,0xFD78L,5L,0x9BD5L,(-1L),1L}},{{0xCAB9L,0xAC30L,5L,1L,(-1L),(-1L),0xDD8DL,0xDD8DL,(-1L),(-1L)},{1L,0x9BD5L,0x9BD5L,1L,1L,0x7327L,0xAC30L,0L,(-1L),1L}}};
                    int32_t *l_1571 = &l_1082;
                    int i, j, k;
                    if (((*g_327) = (*p_8)))
                    {
                        int32_t **l_1576 = &l_1472;
                        l_1572 &= ((l_1562 == (-10L)) , ((func_78((safe_add_func_uint32_t_u_u((p_10 || (l_1567 != (void*)0)), g_874)), l_1561[2], ((safe_sub_func_int32_t_s_s(((l_1561[1] >= ((*g_1206) = p_9)) | p_7), l_1570[1][0][9])) || p_9), l_1571) <= p_7) & 3UL));
                        if (l_1573)
                            break;
                        (*g_74) = ((*l_1576) = &l_1572);

                        ((g_75 == &l_1572) ? (void) (0) : __assert_fail ("g_75 == &l_1572", "16.c", 326, __PRETTY_FUNCTION__));
                        ((l_1472 == &l_1572) ? (void) (0) : __assert_fail ("l_1472 == &l_1572", "16.c", 327, __PRETTY_FUNCTION__));
                    }
                    else
                    {
                        int32_t l_1577 = 1L;
                        return l_1577;


                    }

                    ((g_75 == &l_1572) ? (void) (0) : __assert_fail ("g_75 == &l_1572", "16.c", 337, __PRETTY_FUNCTION__));
                    ((l_1472 == &l_1572) ? (void) (0) : __assert_fail ("l_1472 == &l_1572", "16.c", 338, __PRETTY_FUNCTION__));
                }
                for (l_1132 = (-11); (l_1132 > 45); l_1132 = safe_add_func_uint16_t_u_u(l_1132, 5))
                {
                    int8_t l_1580 = 0L;
                    int32_t l_1582 = 0x6EBBBF39L;
                    int32_t l_1589 = 6L;
                    int32_t l_1592 = (-8L);
                    int32_t l_1598 = 0xC743498FL;
                    int8_t l_1599 = 0x50L;
                    int32_t l_1600 = (-4L);
                    int32_t l_1601 = (-1L);
                    int32_t l_1602 = 0L;
                    int32_t l_1604 = 2L;
                    int32_t **l_1608 = &l_1191;
                    int8_t **l_1616 = &g_1206;
                    int8_t l_1631 = 0L;
                    for (g_1536 = 0; (g_1536 <= 3); g_1536 += 1)
                    {
                        int32_t *l_1581[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1581[i] = &g_90;
                        ++l_1593;
                        --g_1605;
                    }
                    if (((l_1561[1] <= (l_1591[1][0][0] && 0x24L)) || func_61(g_494, &l_1601, ((*l_1608) = (*g_1011)), p_9)))
                    {
                        int32_t *l_1609 = &l_1584;
                        int32_t *l_1610[10] = {&l_1589,&l_1589,&l_1589,&l_1589,&l_1589,&l_1589,&l_1589,&l_1589,&l_1589,&l_1589};
                        int i;
                        --l_1611[0];
                        (**g_1458) = 0xB2562B1BL;
                    }
                    else
                    {
                        int64_t *l_1628[4][1];
                        int32_t *l_1629[2][9][9] = {{{&l_1086,&l_1086,&l_1589,&l_1086,&l_1086,&l_1588[0][1][4],&l_1596,&l_1604,(void*)0},{(void*)0,&g_3,&l_1589,&l_1572,&l_1572,&g_153[0],&l_1572,&g_153[0],&l_1572},{&l_1596,&l_1588[1][0][7],&l_1588[1][0][7],&l_1596,&l_1590[0],&l_1588[0][1][4],&l_1589,&g_153[0],&l_1602},{&l_1592,&l_1592,(void*)0,(void*)0,&l_1588[0][0][7],&g_460,(void*)0,&g_90,&l_1082},{&l_1086,&l_1590[0],&l_1086,&l_1585[1][3],&g_90,(void*)0,&l_1582,&l_1602,&l_1086},{(void*)0,(void*)0,&l_1572,(void*)0,&l_1082,&g_90,&l_1082,(void*)0,&l_1572},{&l_1086,&l_1086,&l_1590[0],&l_1585[1][3],&l_1585[2][6],&l_1086,&l_1588[1][0][7],&l_1588[0][1][4],(void*)0},{&l_1590[0],&g_153[0],&l_1588[0][0][7],&g_3,&l_1592,(void*)0,&l_1082,&g_90,&g_153[0]},{&l_1596,&l_1589,&l_1590[0],&l_1604,&l_1589,&l_1585[1][3],&l_1086,&l_1588[1][0][7],&g_90}},{{&l_1589,&l_1572,&l_1572,&g_153[0],&l_1572,&g_153[0],&l_1572,&l_1572,&l_1589},{&l_1589,&l_1589,&l_1086,&g_153[0],&l_1086,&l_1582,(void*)0,&l_1590[0],(void*)0},{(void*)0,&g_153[0],&l_1582,&g_90,&l_1588[0][0][7],(void*)0,&g_153[0],&l_1572,(void*)0},{&l_1589,&l_1086,(void*)0,&l_1585[2][6],&l_1602,&l_1596,&g_90,&g_153[0],&g_153[0]},{&l_1589,(void*)0,&l_1082,&l_1572,&l_1082,(void*)0,&l_1589,(void*)0,(void*)0},{&l_1596,&l_1590[0],&l_1588[0][1][4],&l_1589,&l_1588[0][1][4],&l_1086,&l_1086,&l_1589,&l_1086},{&l_1082,&g_3,(void*)0,(void*)0,&l_1572,&g_3,&l_1582,&l_1590[0],(void*)0},{&l_1589,&l_1602,&g_90,&l_1086,&l_1589,&l_1582,&l_1588[0][1][4],&l_1588[0][1][4],&l_1582},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1572,&l_1582,(void*)0,&l_1572}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1628[i][j] = &g_87;
                        }
                        (*l_1191) = func_61(l_1591[1][0][0], &l_1584, (*g_1161), p_9);
                        if (g_395)
                            goto lbl_1630;
                    }
                    if (((l_1631 | p_7) != (safe_add_func_int16_t_s_s((((p_7 == ((**l_1608) = p_7)) && func_78(p_10, (***l_1624), ((*l_1553) = (safe_rshift_func_int16_t_s_u(7L, (l_1590[0] = 0xAFB2L)))), (*g_1458))) != 3UL), g_343))))
                    {
                        return (**g_1622);


                    }
                    else
                    {
                        int32_t ***l_1641 = &g_1216[0][2][3];
                        int32_t ****l_1640 = &l_1641;
                        int32_t l_1650 = 0xCA405460L;
                        (**l_1625) = (~(safe_sub_func_int8_t_s_s((l_1638 == ((*l_1640) = l_1639[2])), (safe_mul_func_uint16_t_u_u((p_7 || l_1593), 0L)))));

                        ((l_1641 == &l_1489) ? (void) (0) : __assert_fail ("l_1641 == &l_1489", "16.c", 399, __PRETTY_FUNCTION__));
                        (****l_1623) = (safe_lshift_func_uint16_t_u_s(((**l_1608) || p_10), l_1655[0][3]));
                        (**l_1625) ^= (*p_8);
                        l_1588[0][0][7] |= l_1650;
                    }
                    for (l_1600 = (-17); (l_1600 < 28); l_1600 = safe_add_func_int32_t_s_s(l_1600, 1))
                    {
                        return (**g_1622);


                    }
                }
            }
        }
    }
    else
    {
        int32_t *l_1659 = &g_460;
        int32_t *l_1660[1][5][9] = {{{&g_1627,&g_1627,&l_1596,&l_1092[1],&g_3,&l_1092[1],&l_1596,&g_1627,&g_1627},{(void*)0,&l_1086,&g_1627,&l_1092[1],&g_1627,&l_1086,(void*)0,(void*)0,&l_1086},{&l_1092[1],&l_1086,&l_1596,&l_1086,&l_1092[1],&l_1596,&l_1596,&l_1092[1],&l_1086},{(void*)0,&g_1627,(void*)0,&l_1596,&l_1596,&l_1596,&l_1596,(void*)0,&g_1627},{&g_1627,(void*)0,&l_1596,&l_1596,&l_1596,&l_1596,(void*)0,&g_1627,(void*)0}}};
        uint8_t l_1661[5] = {0xFAL,0xFAL,0xFAL,0xFAL,0xFAL};
        int i, j, k;
        ++l_1661[3];
        (*l_1659) = (*p_8);
        for (g_1005 = 19; (g_1005 <= 9); g_1005--)
        {
            int32_t **l_1666 = &g_393;
            int32_t l_1667 = 0x006986D6L;
            int32_t l_1668 = (-1L);
            int32_t l_1669 = (-1L);
            uint64_t l_1670 = 1UL;
            (**g_1622) = 0x83DC0E3EL;
            (*l_1666) = p_8;


            l_1670--;
        }


        return (**g_1622);
    }
    if ((((((+(*l_1191)) & p_9) || 0xA3C8L) , 0x4A3CE577L) | (*p_8)))
    {
        int32_t **l_1681 = &l_1191;
        uint8_t ***l_1683[3];
        uint8_t ****l_1682 = &l_1683[1];
        uint32_t *l_1685 = (void*)0;
        uint32_t *l_1686[10][6][4] = {{{&l_1679[0],&l_1320,(void*)0,&g_525},{&l_1419[1],&l_1419[1],&l_1419[1],&g_525},{&l_1419[2],&l_1320,&l_1419[1],&l_1419[5]},{&l_1320,&l_1419[2],&g_525,&l_1419[1]},{&l_1419[1],&l_1320,&l_1419[2],&g_525},{&l_1419[1],&g_525,(void*)0,&l_1320}},{{&l_1679[1],&l_1419[1],(void*)0,&l_1419[1]},{&l_1419[1],&l_1679[2],&l_1419[2],&l_1419[2]},{&l_1419[1],&l_1419[1],&g_525,&l_1679[1]},{&g_525,&l_1679[1],&l_1679[0],&g_525},{&g_525,&l_1320,&l_1419[1],&l_1679[0]},{&l_1679[0],&l_1320,&l_1419[1],&g_525}},{{&l_1320,&l_1679[1],&l_1419[1],&l_1679[1]},{&l_1419[5],&l_1419[1],&l_1320,&l_1419[2]},{&l_1419[1],&l_1679[2],&l_1419[1],&l_1419[1]},{&l_1419[2],&l_1419[1],&l_1320,&l_1320},{&l_1419[2],&g_525,&l_1419[1],&g_525},{&l_1419[1],&l_1320,&l_1320,&l_1419[1]}},{{&l_1419[5],&g_525,&l_1419[1],(void*)0},{&l_1320,&g_525,&l_1419[1],&l_1419[1]},{&l_1679[0],&l_1419[1],&l_1419[1],&l_1419[1]},{&g_525,&g_525,&l_1679[0],(void*)0},{&g_525,&g_525,&g_525,&l_1419[1]},{&l_1419[1],&l_1320,&l_1419[2],&g_525}},{{&l_1419[1],&g_525,(void*)0,&l_1320},{&l_1679[1],&l_1419[1],(void*)0,&l_1419[1]},{&l_1419[1],&l_1679[2],&l_1419[2],&l_1419[2]},{&l_1419[1],&l_1419[1],&l_1679[1],&l_1679[2]},{&l_1679[1],&l_1679[2],&l_1679[0],&l_1419[1]},{&l_1419[1],(void*)0,&l_1419[1],&l_1679[0]}},{{&g_525,(void*)0,&l_1419[2],&l_1419[1]},{(void*)0,&l_1679[2],&l_1320,&l_1679[2]},{&l_1320,&l_1419[1],&l_1419[1],&l_1679[0]},{&l_1320,&l_1419[1],&g_525,(void*)0},{&l_1679[0],&g_525,(void*)0,&l_1419[1]},{&l_1679[0],&l_1679[1],&g_525,&l_1419[1]}},{{&l_1320,&l_1419[1],&l_1419[1],&l_1320},{&l_1320,&l_1419[1],&l_1320,&g_525},{(void*)0,&l_1419[1],&l_1419[2],&l_1419[5]},{&g_525,(void*)0,&l_1419[1],&l_1419[5]},{&l_1419[1],&l_1419[1],&l_1679[0],&g_525},{&l_1679[1],&l_1419[1],&l_1679[1],&l_1320}},{{&l_1419[1],&l_1419[1],&l_1679[0],&l_1419[1]},{&l_1419[5],&l_1679[1],&g_525,&l_1419[1]},{&l_1679[2],&g_525,&g_525,(void*)0},{&l_1419[5],&l_1419[1],&l_1679[0],&l_1679[0]},{&l_1419[1],&l_1419[1],&l_1679[1],&l_1679[2]},{&l_1679[1],&l_1679[2],&l_1679[0],&l_1419[1]}},{{&l_1419[1],(void*)0,&l_1419[1],&l_1679[0]},{&g_525,(void*)0,&l_1419[2],&l_1419[1]},{(void*)0,&l_1679[2],&l_1320,&l_1679[2]},{&g_525,&l_1679[0],&l_1419[1],&l_1419[1]},{&g_525,&l_1419[1],&l_1419[1],&l_1419[1]},{&l_1419[1],&l_1419[1],&l_1679[1],&l_1419[1]}},{{&l_1419[1],&l_1419[5],&l_1419[1],&l_1679[0]},{&g_525,&l_1419[1],&l_1419[1],&g_525},{&g_525,&l_1419[1],&g_525,&l_1419[2]},{&l_1679[1],&l_1679[0],&g_525,(void*)0},{(void*)0,&l_1419[1],&l_1679[0],(void*)0},{&l_1419[1],&l_1679[0],&l_1320,&l_1419[2]}}};
        int32_t l_1687 = (-2L);
        uint8_t ***l_1690 = &g_704;
        uint8_t ****l_1689[1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1683[i] = &g_704;
        for (i = 0; i < 1; i++)
            l_1689[i] = &l_1690;
        if ((*p_8))
        {
            int32_t l_1692[9][3][3] = {{{0x5DEC46B6L,0xBA84720AL,1L},{3L,1L,1L},{0x82661162L,0x0D43E6B0L,0x3F3F2C75L}},{{(-1L),0x68D18E14L,3L},{(-1L),1L,(-1L)},{(-10L),0xBA84720AL,0xEE192EF5L}},{{0xF1A37C05L,1L,0xB569F134L},{0x82661162L,0x68D18E14L,0L},{1L,0x0D43E6B0L,3L}},{{0xBA84720AL,1L,9L},{0xBA84720AL,0xBA84720AL,0x82661162L},{1L,0xEE192EF5L,1L}},{{0x82661162L,0xB62C3DCCL,0xF4D75DB0L},{0xF1A37C05L,(-1L),3L},{(-10L),0x82661162L,0xF4D75DB0L}},{{(-1L),0xBA84720AL,1L},{(-1L),0xB569F134L,0x82661162L},{0x82661162L,0xAE94942BL,9L}},{{3L,0xAE94942BL,3L},{0x5DEC46B6L,0xB569F134L,0L},{(-1L),0x68D18E14L,0xBA84720AL}},{{0xEE192EF5L,0x04B5A03FL,0x5DEC46B6L},{0x04B5A03FL,0x3F3F2C75L,0xE9A86F21L},{0xEE192EF5L,(-1L),1L}},{{(-1L),0x5DEC46B6L,3L},{0xAE94942BL,0x68D18E14L,(-10L)},{1L,(-10L),(-10L)}}};
            int i, j, k;
            return l_1692[3][1][2];
        }
        else
        {
            const int32_t *l_1696 = &l_1086;
            int32_t *l_1716 = &g_644[0];
            int64_t l_1724 = 0x68BC58D0DBADF696LL;
            (*p_8) = (safe_rshift_func_uint8_t_u_u((&l_1684[3][5] == (g_1695 = l_1686[4][3][3])), func_78((**l_1681), (p_9 = (func_45(l_1696, (*l_1681), (*l_1696), l_1696) < 4294967292UL)), (*l_1696), (*g_1011))));

            ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 467, __PRETTY_FUNCTION__));
            ((g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525) ? (void) (0) : __assert_fail ("g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525", "16.c", 468, __PRETTY_FUNCTION__));
            (*p_8) = (**g_1622);
            for (l_1285 = 0; (l_1285 > (-14)); --l_1285)
            {
                const int8_t **l_1702[8] = {&l_1700,&l_1700,&l_1700,&l_1700,&l_1700,&l_1700,&l_1700,&l_1700};
                const int8_t ***l_1701 = &l_1702[3];
                int8_t l_1707 = 0xCCL;
                uint16_t *l_1714 = (void*)0;
                int32_t *l_1715 = &l_1082;
                int i;
                (*p_8) = (((((*l_1548) &= g_98) == ((*l_1426) = (((*l_1696) < (((*l_1701) = l_1699) == (((safe_div_func_int32_t_s_s((func_78(((safe_div_func_uint32_t_u_u(l_1707, (**g_1622))) , (safe_rshift_func_uint16_t_u_u((((*l_1696) & (safe_rshift_func_uint16_t_u_s(65526UL, 10))) || (&g_1215[0] != (((void*)0 == l_1714) , &g_1215[0]))), l_1707))), (**l_1681), g_560, l_1715) == 0x949DEFB7L), 0x8D452736L)) ^ (*l_1696)) , &g_1206))) , (**l_1681)))) && 0x5865EE8129AC59B5LL) & p_7);
            }
            for (l_1086 = 0; (l_1086 <= 3); l_1086 += 1)
            {
                int32_t **l_1717 = (void*)0;
                int32_t **l_1718 = &g_1217[6];
                int32_t l_1725 = (-1L);
                int i;
                if (((+g_1078[l_1086]) != g_1078[l_1086]))
                {
                    return (*p_8);


                }
                else
                {
                    if ((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((*l_1696), p_10)), 8L)))
                    {
                        (*g_1723) = l_1489;
                        if ((*l_1696))
                            break;
                        (*p_8) ^= ((**g_1622) = ((*l_1696) , (p_7 || ((!p_7) != g_97))));
                    }
                    else
                    {
                        (*g_327) = (*l_1696);
                        if (l_1724)
                            continue;
                        l_1725 |= g_1078[l_1086];
                    }
                    return (**g_1011);


                }
            }
        }

        ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 515, __PRETTY_FUNCTION__));
        ((g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525) ? (void) (0) : __assert_fail ("g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525", "16.c", 516, __PRETTY_FUNCTION__));
        (*l_1350) = ((*g_1161) = (g_644[0] , (*l_1681)));

        (((g_327 >= &l_1092[0] && g_327 <= &l_1092[1]) || (g_327 >= &g_153[0] && g_327 <= &g_153[0])) ? (void) (0) : __assert_fail ("(g_327 >= &l_1092[0] && g_327 <= &l_1092[1]) || (g_327 >= &g_153[0] && g_327 <= &g_153[0])", "16.c", 519, __PRETTY_FUNCTION__));

    }
    else
    {
        int8_t *l_1728 = &l_1443[7];
        const int32_t *l_1729 = (void*)0;
        int32_t l_1743 = (-1L);
        int8_t ***l_1746 = (void*)0;
        int32_t *l_1777 = &g_460;
        int32_t l_1821 = (-6L);
        int32_t l_1825 = (-1L);
        int32_t l_1830 = (-4L);
        int32_t l_1832 = (-10L);
        int32_t l_1833[10][4] = {{(-6L),(-1L),0x2A71F94CL,0xFAE4A955L},{0xC8D7BDB8L,(-1L),(-1L),0xC8D7BDB8L},{(-1L),0xC8D7BDB8L,(-6L),1L},{(-1L),(-6L),(-1L),0x2A71F94CL},{0xC8D7BDB8L,1L,0x2A71F94CL,0x2A71F94CL},{(-6L),(-6L),0xFAE4A955L,1L},{1L,0xC8D7BDB8L,0xFAE4A955L,0xC8D7BDB8L},{(-6L),(-1L),0x2A71F94CL,0xFAE4A955L},{0xC8D7BDB8L,(-1L),(-1L),0xC8D7BDB8L},{(-1L),0xC8D7BDB8L,(-6L),1L}};
        int8_t l_1839 = 0x07L;
        uint32_t l_1841 = 0xDFEAA06FL;
        int32_t *l_1872 = &g_153[0];
        uint64_t l_1906 = 0x6A7D9B40C2BD2269LL;
        uint32_t l_1918 = 0x0E244A54L;
        uint32_t l_1921 = 0x8A96D113L;
        int16_t l_1972 = 0xE180L;
        int i, j;
        if ((((safe_div_func_uint64_t_u_u(p_10, p_7)) > ((((*l_1728) |= ((*l_1183) = (*g_1206))) , &l_1699) == (p_9 , (void*)0))) , 0L))
        {
            int64_t l_1755 = (-1L);
            const int32_t *l_1762 = &g_1418;
            int32_t *l_1764 = &l_1089;
            uint8_t l_1774 = 0x2BL;
            int8_t l_1778[8] = {1L,0xE8L,1L,0xE8L,1L,0xE8L,1L,0xE8L};
            uint32_t l_1781[3][3];
            int16_t **l_1789[1][9][4] = {{{&l_1426,&l_1426,&g_142,&l_1426},{&l_1426,&g_142,&g_142,&g_142},{&l_1426,&g_142,&l_1426,&g_142},{&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&l_1426},{&l_1426,&g_142,&l_1426,&l_1426},{&g_142,&g_142,&l_1426,&g_142},{&g_142,&l_1426,&l_1426,&l_1426}}};
            int32_t ***l_1796 = &l_1772[3][0];
            int32_t *** const *l_1795 = &l_1796;
            uint64_t l_1803 = 18446744073709551614UL;
            int32_t l_1816 = 0x1C2E01EBL;
            int32_t l_1817 = 0x01D69776L;
            int32_t l_1818 = (-10L);
            int32_t l_1822 = 0xDB131245L;
            int32_t l_1823 = 0x249701AEL;
            int32_t l_1824 = 0x468399CCL;
            int32_t l_1828 = (-9L);
            int32_t l_1829[4];
            int16_t l_1835 = 0x34A3L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1781[i][j] = 0xB0DACAF3L;
            }
            for (i = 0; i < 4; i++)
                l_1829[i] = 0x4DE0A3D1L;
            (*p_8) |= ((void*)0 == l_1746);
            for (l_1429 = (-30); (l_1429 != (-21)); l_1429++)
            {
                uint16_t l_1751 = 0x6EEDL;
                int16_t l_1758 = 0x47BFL;
                const int32_t *l_1761 = (void*)0;
                int32_t l_1773 = 0xE49BDC69L;
                uint32_t l_1776[1][9];
                int8_t l_1814 = 0x70L;
                int32_t l_1815 = 0x75C9EA91L;
                int32_t l_1819 = 0xBA9923A2L;
                int32_t l_1820 = 0x2254FA02L;
                int32_t l_1826 = 0xDFA8F231L;
                int32_t l_1827 = 0xED1BE1ECL;
                int32_t l_1831 = 0L;
                int32_t l_1836 = 0xF75B0E39L;
                int32_t l_1837 = 1L;
                int32_t l_1838[6] = {0x506B647CL,0x506B647CL,0x506B647CL,0x506B647CL,0x506B647CL,0x506B647CL};
                int16_t l_1840 = 1L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_1776[i][j] = 0xD7A26FF3L;
                }
                if (((*l_1191) ^= (*p_8)))
                {
                    uint8_t l_1763 = 0x7BL;
                    int32_t *l_1779[9][5] = {{&g_90,&g_90,&l_1092[1],&g_460,(void*)0},{&g_460,&g_3,&g_1627,&g_460,&g_90},{(void*)0,&g_3,&g_153[0],&l_1773,&g_3},{&g_90,&g_3,&g_3,(void*)0,(void*)0},{&g_1627,&g_90,&g_1627,&g_153[0],(void*)0},{&g_460,&g_460,&g_3,(void*)0,&g_3},{&g_3,(void*)0,(void*)0,&g_460,&g_90},{&g_460,&g_90,&g_3,&g_3,(void*)0},{(void*)0,&g_1627,&g_1627,(void*)0,&g_460}};
                    int16_t **l_1788 = &g_142;
                    int32_t *l_1790[6][5][8] = {{{&l_1089,&g_3,&l_1092[1],(void*)0,&l_1596,&g_90,&g_460,&g_3},{&g_1627,&g_460,(void*)0,&g_90,(void*)0,&g_3,&g_3,(void*)0},{&l_1089,&l_1596,&l_1596,&l_1089,&g_1627,&l_1092[1],&g_3,&g_90},{&g_460,&l_1089,&l_1596,&l_1743,(void*)0,&g_90,&l_1596,&g_3},{&g_3,&g_1627,&l_1596,&l_1092[1],(void*)0,&g_3,&l_1092[1],&l_1596}},{{&g_90,&g_90,&l_1092[1],(void*)0,&g_3,&l_1082,&l_1092[1],&l_1082},{(void*)0,&l_1596,&g_460,&l_1596,(void*)0,&l_1089,&g_90,&l_1743},{&l_1596,(void*)0,&g_1627,&g_90,(void*)0,&g_1627,&g_3,&l_1596},{&g_1627,&l_1082,&g_1627,&g_3,&g_90,&g_3,&g_90,&l_1092[1]},{(void*)0,&g_3,&g_460,&l_1743,&g_3,&l_1596,&l_1092[1],&l_1092[1]}},{{&g_1627,&g_90,&l_1092[1],&l_1092[1],&g_90,&g_1627,&l_1092[1],&g_90},{&l_1092[1],&g_3,&l_1596,&g_90,&l_1092[1],&l_1082,&l_1596,&g_3},{(void*)0,&l_1596,&l_1596,&g_90,&g_90,&l_1089,&l_1743,&g_90},{&l_1092[1],&g_90,&g_90,&l_1092[1],(void*)0,&g_3,&l_1082,&l_1092[1]},{&l_1596,&l_1092[1],&g_3,&l_1743,&g_3,&l_1092[1],&l_1596,&l_1092[1]}},{{(void*)0,&g_1627,&l_1092[0],&l_1092[1],(void*)0,&g_460,&l_1092[1],(void*)0},{&l_1743,&g_3,&l_1596,&g_90,(void*)0,&l_1092[1],&l_1092[1],&g_3},{&g_90,&g_3,&g_90,(void*)0,&l_1082,&l_1082,&g_3,&l_1092[1]},{(void*)0,(void*)0,&g_90,&g_90,&g_90,&g_90,(void*)0,(void*)0},{&l_1596,&l_1743,&l_1092[1],&g_1627,&g_3,&l_1082,&l_1743,&l_1092[1]}},{{&g_90,&g_3,&g_90,&g_3,&g_1627,&l_1082,&g_1627,&l_1092[1]},{&g_1627,&l_1743,(void*)0,&l_1596,&l_1743,&g_90,&l_1092[1],&g_3},{&l_1092[1],(void*)0,&g_3,&l_1082,&l_1092[1],&l_1082,&g_3,(void*)0},{&g_90,&g_3,&l_1082,&l_1743,&l_1743,&l_1092[1],&g_3,&l_1743},{&l_1596,&g_3,&g_3,&l_1596,&g_90,&g_460,&g_3,&g_1627}},{{&g_3,&l_1596,&l_1082,&l_1092[1],&g_90,&l_1596,&g_3,&l_1092[1]},{&g_90,&l_1596,&g_3,&l_1092[1],&g_90,&g_90,&l_1092[1],&g_3},{&g_3,&l_1082,&g_90,&l_1082,&g_3,&l_1596,&g_90,&l_1596},{&g_3,&l_1743,&l_1089,&g_3,&g_1627,&g_90,&l_1089,&l_1596},{&l_1743,&l_1596,&g_460,&l_1082,&l_1089,&g_460,&g_3,&g_3}}};
                    int i, j, k;
                    if ((*p_8))
                    {
                        uint16_t l_1754 = 0xF340L;
                        (*l_1764) &= func_61(p_10, (*g_1203), l_1764, g_1536);
                    }
                    else
                    {
                        const int32_t *l_1767[8];
                        uint16_t l_1775 = 0x317FL;
                        int32_t *l_1780 = &l_1596;
                        int64_t *l_1782 = &l_1755;
                        int64_t *l_1783 = &g_148[6];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1767[i] = (void*)0;
                        (**g_1622) = (p_7 < ((*l_1783) = (safe_sub_func_int64_t_s_s(((*l_1782) = l_1781[0][2]), (*l_1762)))));
                    }
                    (**g_1622) &= ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((*l_1548) ^= g_644[3]), g_325)) | 65535UL), 0x6BL)) < 0xC5638F8F8D087CFFLL);
                    for (g_90 = (-19); (g_90 != (-4)); ++g_90)
                    {
                        int32_t *** const **l_1797 = (void*)0;
                        int64_t *l_1804 = &g_876;
                        uint8_t *l_1807 = &l_1774;
                        if ((**g_1161))
                            break;
                        l_1743 = ((safe_lshift_func_int16_t_s_s((*l_1777), 5)) , ((*p_8) &= func_78(p_7, p_9, (((*l_1804) = (((p_10 , (l_1798 = l_1795)) == &g_1621[6][2][1]) <= (func_78((*l_1777), (safe_lshift_func_int16_t_s_s((p_9 | (l_1803 |= func_78(p_7, p_9, (*g_1695), (*g_1458)))), 4)), p_7, &l_1773) == 1UL))) >= 0xA33CA8335178E21ELL), &l_1743)));

                        ((l_1798 == &l_1796) ? (void) (0) : __assert_fail ("l_1798 == &l_1796", "16.c", 630, __PRETTY_FUNCTION__));
                        (*l_1191) = ((+((safe_lshift_func_uint8_t_u_s(((((*l_1807) = (p_10 ^ (0L <= ((void*)0 == &l_1804)))) >= p_7) > ((*l_1548) = (safe_div_func_uint16_t_u_u(((void*)0 == p_8), (safe_lshift_func_uint16_t_u_u(1UL, 0)))))), 0)) , g_1449)) != p_9);
                        (*l_1191) &= (p_9 >= (&g_132 == (g_142 = l_1549[1])));

                        ((g_142 == &g_1005) ? (void) (0) : __assert_fail ("g_142 == &g_1005", "16.c", 634, __PRETTY_FUNCTION__));
                    }

                    ((g_142 == &g_1005 || g_142 == 0) ? (void) (0) : __assert_fail ("g_142 == &g_1005 || g_142 == 0", "16.c", 637, __PRETTY_FUNCTION__));
                    ((l_1798 == &l_1796 || (l_1798 >= &l_1799[0] && l_1798 <= &l_1799[3])) ? (void) (0) : __assert_fail ("l_1798 == &l_1796 || (l_1798 >= &l_1799[0] && l_1798 <= &l_1799[3])", "16.c", 638, __PRETTY_FUNCTION__));
                    (**g_1622) = (*p_8);
                }
                else
                {
                    int32_t l_1812 = (-2L);
                    int32_t l_1813[10][5][5] = {{{0L,0x0DEFB85FL,(-10L),0x95F5A7FCL,0x95F5A7FCL},{0x02F24D46L,(-4L),0x02F24D46L,5L,0x1092BAF1L},{0L,1L,(-2L),0x95F5A7FCL,0x379E6733L},{0x2E1E1440L,(-4L),(-9L),(-1L),0x1092BAF1L},{(-2L),0x0DEFB85FL,(-2L),0x379E6733L,0x95F5A7FCL}},{{0x2E1E1440L,0x23710272L,0x02F24D46L,(-1L),0xD6B8E888L},{0L,0x0DEFB85FL,(-10L),0x95F5A7FCL,0x95F5A7FCL},{0x02F24D46L,(-4L),0x02F24D46L,5L,0x1092BAF1L},{0L,1L,(-2L),0x95F5A7FCL,0x379E6733L},{0x2E1E1440L,(-4L),(-9L),(-1L),0x1092BAF1L}},{{(-2L),0x0DEFB85FL,(-2L),0x379E6733L,0x95F5A7FCL},{0x2E1E1440L,0x23710272L,0x02F24D46L,(-1L),0xD6B8E888L},{0L,0x0DEFB85FL,(-10L),0x95F5A7FCL,0x95F5A7FCL},{0x02F24D46L,(-4L),0x02F24D46L,5L,0x1092BAF1L},{0L,1L,(-2L),0xCA00625DL,0xCA6D3C6DL}},{{0x0CC7F17FL,(-1L),(-10L),0xC908283CL,0xEACF7F05L},{1L,0x95F5A7FCL,1L,0xCA6D3C6DL,0xCA00625DL},{0x0CC7F17FL,5L,(-2L),0xC908283CL,0xC2ECA86FL},{0x0DEFB85FL,0x95F5A7FCL,0xA45ED285L,0xCA00625DL,0xCA00625DL},{(-2L),(-1L),(-2L),(-1L),0xEACF7F05L}},{{0x0DEFB85FL,0x379E6733L,1L,0xCA00625DL,0xCA6D3C6DL},{0x0CC7F17FL,(-1L),(-10L),0xC908283CL,0xEACF7F05L},{1L,0x95F5A7FCL,1L,0xCA6D3C6DL,0xCA00625DL},{0x0CC7F17FL,5L,(-2L),0xC908283CL,0xC2ECA86FL},{0x0DEFB85FL,0x95F5A7FCL,0xA45ED285L,0xCA00625DL,0xCA00625DL}},{{(-2L),(-1L),(-2L),(-1L),0xEACF7F05L},{0x0DEFB85FL,0x379E6733L,1L,0xCA00625DL,0xCA6D3C6DL},{0x0CC7F17FL,(-1L),(-10L),0xC908283CL,0xEACF7F05L},{1L,0x95F5A7FCL,1L,0xCA6D3C6DL,0xCA00625DL},{0x0CC7F17FL,5L,(-2L),0xC908283CL,0xC2ECA86FL}},{{0x0DEFB85FL,0x95F5A7FCL,0xA45ED285L,0xCA00625DL,0xCA00625DL},{(-2L),(-1L),(-2L),(-1L),0xEACF7F05L},{0x0DEFB85FL,0x379E6733L,1L,0xCA00625DL,0xCA6D3C6DL},{0x0CC7F17FL,(-1L),(-10L),1L,0x02F24D46L},{0xACB9D27FL,0x2B0F9EBFL,0xACB9D27FL,(-10L),(-2L)}},{{0xC2ECA86FL,0xF2FE66C5L,0xBB8CB34AL,1L,(-9L)},{0xCA6D3C6DL,0x2B0F9EBFL,0xCA00625DL,(-2L),(-2L)},{0xBB8CB34AL,(-3L),0xBB8CB34AL,3L,0x02F24D46L},{0xCA6D3C6DL,5L,0xACB9D27FL,(-2L),(-10L)},{0xC2ECA86FL,(-3L),0xEACF7F05L,1L,0x02F24D46L}},{{0xACB9D27FL,0x2B0F9EBFL,0xACB9D27FL,(-10L),(-2L)},{0xC2ECA86FL,0xF2FE66C5L,0xBB8CB34AL,1L,(-9L)},{0xCA6D3C6DL,0x2B0F9EBFL,0xCA00625DL,(-2L),(-2L)},{0xBB8CB34AL,(-3L),0xBB8CB34AL,3L,0x02F24D46L},{0xCA6D3C6DL,5L,0xACB9D27FL,(-2L),(-10L)}},{{0xC2ECA86FL,(-3L),0xEACF7F05L,1L,0x02F24D46L},{0xACB9D27FL,0x2B0F9EBFL,0xACB9D27FL,(-10L),(-2L)},{0xC2ECA86FL,0xF2FE66C5L,0xBB8CB34AL,1L,(-9L)},{0xCA6D3C6DL,0x2B0F9EBFL,0xCA00625DL,(-2L),(-2L)},{0xBB8CB34AL,(-3L),0xBB8CB34AL,3L,0x02F24D46L}}};
                    int i, j, k;
                    l_1841--;
                    for (l_1755 = 0; (l_1755 < (-24)); l_1755--)
                    {
                        int64_t l_1848 = 0xE26F982CBEC50A47LL;
                        (*l_1777) ^= (safe_mod_func_uint32_t_u_u(l_1848, 0x71FB4261L));
                        return (**g_1203);
                    }
                }

                ((g_142 == &g_1005 || g_142 == 0) ? (void) (0) : __assert_fail ("g_142 == &g_1005 || g_142 == 0", "16.c", 655, __PRETTY_FUNCTION__));
                ((l_1798 == &l_1796 || (l_1798 >= &l_1799[0] && l_1798 <= &l_1799[3])) ? (void) (0) : __assert_fail ("l_1798 == &l_1796 || (l_1798 >= &l_1799[0] && l_1798 <= &l_1799[3])", "16.c", 656, __PRETTY_FUNCTION__));
                return (*p_8);
            }
        }
        else
        {
            int32_t l_1851 = 0x186833A7L;
            int64_t *l_1868 = &l_1236;
            (*p_8) &= (safe_mod_func_uint64_t_u_u(l_1851, (safe_add_func_uint64_t_u_u((*l_1777), ((*l_1868) = ((func_78(l_1851, ((l_1851 , l_1851) <= (safe_mod_func_uint64_t_u_u((((*l_1183) = (safe_rshift_func_uint8_t_u_s(0x27L, ((l_1851 != (((0xA379538BAE10A693LL & ((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_10, (*g_1206))), 0xC73C4E1CL)), 1UL)) && 0UL)) , 1UL) <= p_10)) && (*l_1777))))) & p_9), 0xE4E9D23C24342D21LL))), (*g_1695), (*g_1011)) >= 1L) == p_9))))));
        }
        if ((*p_8))
        {
            int8_t l_1869 = (-9L);
            int32_t ***l_1877 = &l_1489;
            int32_t ****l_1876 = &l_1877;
            int32_t l_1878 = 1L;
            l_1878 = ((l_1869 = p_7) , ((p_10 & 1UL) , ((*p_8) = (((((safe_rshift_func_uint8_t_u_s(((func_61(l_1869, l_1872, (l_1873 = &l_1821), ((((1L & ((**g_1622) <= (safe_div_func_int32_t_s_s(((-9L) ^ p_9), (*l_1191))))) | g_343) & p_10) ^ p_9)) , &g_1215[0]) == l_1876), 3)) | g_148[6]) || (*l_1777)) , p_9) & 0x84L))));

            ((l_1873 == &l_1821) ? (void) (0) : __assert_fail ("l_1873 == &l_1821", "16.c", 674, __PRETTY_FUNCTION__));
        }
        else
        {
            uint8_t l_1881 = 0x24L;
            int32_t ** const *l_1886[4];
            int32_t ** const **l_1885 = &l_1886[3];
            int32_t ** const ** const * const l_1884 = &l_1885;
            int64_t l_1903[9];
            uint8_t l_1917 = 0x1DL;
            int i;
            for (i = 0; i < 4; i++)
                l_1886[i] = &l_1772[2][0];
            for (i = 0; i < 9; i++)
                l_1903[i] = (-4L);
            if (((*g_1695) > (safe_lshift_func_uint16_t_u_u(((*l_1548) = g_365), l_1881))))
            {
                int32_t *** const **l_1888 = &l_1798;
                int32_t *** const ***l_1887 = &l_1888;
                int32_t l_1894[5] = {0x4AB8BC22L,0x4AB8BC22L,0x4AB8BC22L,0x4AB8BC22L,0x4AB8BC22L};
                int i;
                (*p_8) = ((*l_1777) = ((safe_div_func_int8_t_s_s((l_1884 != ((*l_1887) = &l_1798)), p_10)) && ((safe_add_func_int16_t_s_s((*l_1872), ((p_7 < 0L) || 0x2ED709FBD1D4A285LL))) > p_9)));
                if ((*l_1872))
                {
                    int32_t l_1891 = 6L;
                    int32_t l_1892 = 0x0E0BC994L;
                    int32_t l_1893 = 4L;
                    int32_t l_1895 = 1L;
                    int32_t l_1896 = 1L;
                    int32_t l_1897 = 0xE0BA2815L;
                    int32_t l_1898 = 0x98685D49L;
                    int32_t l_1899 = 0x46CD342EL;
                    int32_t l_1900 = 3L;
                    int32_t l_1901 = 0L;
                    int32_t l_1902 = (-1L);
                    int32_t l_1904 = 0xE1828F07L;
                    int32_t l_1905[9][7][4] = {{{1L,0x6749C93BL,0x9E5E86A3L,(-1L)},{0x0B099E0FL,0xE68FD10FL,0x8F62102EL,(-1L)},{1L,(-2L),0x93D1445CL,(-2L)},{0x2B11D2D3L,0L,0x7DCBCBD4L,0xE50EE939L},{(-1L),0xC51A4926L,1L,1L},{0xCBF2E0B0L,5L,(-1L),1L},{0xCBF2E0B0L,0x77AB9C8DL,1L,0x6749C93BL}},{{(-1L),1L,0x7DCBCBD4L,0x927F4D01L},{0x2B11D2D3L,0xE68FD10FL,0x93D1445CL,0x395C168AL},{1L,0xC51A4926L,0x2B11D2D3L,0x9D866347L},{0xBA8C76FBL,0xDFE5B9B1L,(-1L),4L},{0x346220F1L,0x927F4D01L,(-10L),0x6749C93BL},{0x9E5E86A3L,0x927F4D01L,(-7L),4L},{0x2B11D2D3L,0xDFE5B9B1L,4L,0x9D866347L}},{{0x0B099E0FL,0xC51A4926L,0L,0x395C168AL},{(-1L),0xE68FD10FL,(-1L),0x927F4D01L},{0x6DC7ABB0L,1L,1L,0x6749C93BL},{1L,0x77AB9C8DL,1L,1L},{0x2B11D2D3L,5L,1L,1L},{1L,0xC51A4926L,1L,0xE50EE939L},{0x6DC7ABB0L,0L,(-1L),(-2L)}},{{(-1L),(-2L),0L,0x6749C93BL},{0x0B099E0FL,4L,4L,0x77AB9C8DL},{0x2B11D2D3L,(-1L),(-7L),0x0EDEA336L},{0x9E5E86A3L,0xC51A4926L,(-10L),0x0EDEA336L},{0x346220F1L,(-1L),(-1L),0x77AB9C8DL},{1L,0xC51A4926L,(-1L),0x77AB9C8DL},{0x8F62102EL,(-1L),0xBA8C76FBL,(-1L)}},{{(-1L),0x395C168AL,(-1L),1L},{0x3DFA6528L,0xDFE5B9B1L,1L,0x4B9347F5L},{0L,0x9D866347L,1L,0x2597D13EL},{0L,(-1L),1L,0x77AB9C8DL},{0x3DFA6528L,0x2597D13EL,(-1L),6L},{(-1L),1L,0xBA8C76FBL,0x10F6D491L},{0x8F62102EL,0xDFE5B9B1L,(-1L),0x6749C93BL}},{{1L,0xE50EE939L,1L,0xC51A4926L},{(-10L),6L,0x0B099E0FL,0x77AB9C8DL},{0x6F3A4997L,6L,0x6DC7ABB0L,0xC51A4926L},{(-1L),0xE50EE939L,0xCBF2E0B0L,0x6749C93BL},{(-1L),0xDFE5B9B1L,0x9E5E86A3L,0x10F6D491L},{1L,1L,1L,6L},{0x2B11D2D3L,0x2597D13EL,1L,0x77AB9C8DL}},{{(-1L),(-1L),0x346220F1L,0x2597D13EL},{(-1L),0x9D866347L,0x346220F1L,0x4B9347F5L},{(-1L),0xDFE5B9B1L,1L,1L},{0x2B11D2D3L,0x395C168AL,1L,(-1L)},{1L,(-1L),0x9E5E86A3L,0x77AB9C8DL},{(-1L),0xC51A4926L,0xCBF2E0B0L,(-1L)},{(-1L),0x0EDEA336L,0x6DC7ABB0L,0xE7F7B458L}},{{0x6F3A4997L,0xDFE5B9B1L,0x0B099E0FL,0L},{0x93D1445CL,(-1L),1L,0xE7F7B458L},{(-7L),0x4B9347F5L,0xCBF2E0B0L,0x0EDEA336L},{0x2B11D2D3L,0x6749C93BL,(-1L),0x6749C93BL},{0xCBF2E0B0L,0x2597D13EL,0x6F3A4997L,5L},{0L,0x927F4D01L,0x6DC7ABB0L,0xDFE5B9B1L},{0x7DCBCBD4L,(-1L),1L,0x10F6D491L}},{{0x7DCBCBD4L,0xE7F7B458L,0x6DC7ABB0L,0x0EDEA336L},{0L,0x10F6D491L,0x6F3A4997L,1L},{0xCBF2E0B0L,0xC51A4926L,(-1L),0xE68FD10FL},{0x2B11D2D3L,0x927F4D01L,0xCBF2E0B0L,(-1L)},{(-7L),6L,1L,0x4B9347F5L},{0x93D1445CL,1L,0xBA8C76FBL,0x0EDEA336L},{1L,1L,0x8F62102EL,0x4B9347F5L}}};
                    int i, j, k;
                    --l_1906;
                    for (g_494 = 0; (g_494 <= 39); g_494 = safe_add_func_uint64_t_u_u(g_494, 1))
                    {
                        (*l_1873) &= 0x4BFC4913L;
                    }
                    (*p_8) &= (0x5641L < (((--p_9) && ((((*l_1777) ^ ((*l_1191) |= (~p_10))) != p_7) || (safe_lshift_func_uint16_t_u_u(((func_78(func_45(&l_1833[7][1], &l_1897, p_7, &l_1743), p_7, (*g_1695), &l_1898) >= 1L) , g_186), g_153[0])))) | (*g_1206)));
                }
                else
                {
                    return (*p_8);
                }
                --l_1918;
            }
            else
            {
                return l_1921;
            }
            for (g_186 = 8; (g_186 >= 0); g_186 -= 1)
            {
                int32_t l_1923[2][4][4] = {{{1L,1L,0x4BB87E1DL,1L},{1L,(-2L),(-2L),1L},{(-2L),1L,(-2L),(-2L)},{1L,1L,0x4BB87E1DL,1L}},{{1L,(-2L),(-2L),1L},{(-2L),1L,(-2L),(-2L)},{1L,1L,0x4BB87E1DL,1L},{1L,(-2L),(-2L),1L}}};
                uint8_t l_1930[4];
                int32_t l_1940 = 0L;
                uint32_t l_1978 = 0x27CB2103L;
                const uint16_t *l_1982 = &g_1005;
                int32_t **l_1990[8];
                int32_t **l_1991 = &l_1191;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1930[i] = 0x7DL;
                for (i = 0; i < 8; i++)
                    l_1990[i] = &g_327;
                g_561[g_186] = &l_1833[2][3];
                for (g_84 = 0; (g_84 <= 3); g_84 += 1)
                {
                    int64_t l_1922 = 0x9C3D2AE5B18AD5DALL;
                    int32_t l_1924 = 0x51C2A7CCL;
                    int32_t l_1925 = 0xE11EE539L;
                    int32_t l_1926 = 9L;
                    int32_t l_1927 = 0xAB5433FBL;
                    int32_t l_1928 = 0x975156FEL;
                    int32_t l_1929[2];
                    uint8_t l_1935 = 0xF7L;
                    const int32_t ***l_1953[2];
                    const uint32_t *l_1960 = &l_1132;
                    uint8_t l_1971 = 0x5CL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1929[i] = (-5L);
                    for (i = 0; i < 2; i++)
                        l_1953[i] = &l_1350;
                    ++l_1930[0];
                    (**g_1622) = (*p_8);
                    (*p_8) ^= (safe_mod_func_uint16_t_u_u(g_874, (((l_1903[g_186] = l_1935) , (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((++(*l_1548)), 3)) >= (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((-1L), (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((~((l_1350 = &g_561[g_186]) == (void*)0)), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_1960 != &l_1918), (1UL >= (l_1925 = ((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((&g_561[g_186] == &p_8), 0x6EL)) , p_7) , 0x6DL), l_1971)), p_9)), g_153[0])), 0x38DF57FC7AC5DB4ELL)) <= (-1L)))))) , p_10), 2)), (*l_1872))))) , 0UL), 0x14L)), l_1972)))), p_10))), 0x5EF87184BEA50376LL))) & (*l_1872))));

                    (((l_1350 >= &g_561[0] && l_1350 <= &g_561[8])) ? (void) (0) : __assert_fail ("(l_1350 >= &g_561[0] && l_1350 <= &g_561[8])", "16.c", 766, __PRETTY_FUNCTION__));
                    if (g_460)
                        goto lbl_1973;

                    for (l_1306 = 0; (l_1306 <= 3); l_1306 += 1)
                    {
                        int64_t l_1974 = 0x971F73798F15B548LL;
                        if ((**g_1622))
                            break;
                        --l_1975;
                        l_1978 = l_1974;
                        (*p_8) &= (!(*g_327));
                    }
                }
                for (l_1429 = 0; (l_1429 <= 3); l_1429 += 1)
                {
                    uint8_t l_1979 = 249UL;
                    int32_t ***l_1988 = &l_1489;
                    for (g_132 = 3; (g_132 >= 0); g_132 -= 1)
                    {
                        const uint16_t *l_1984[2];
                        const uint16_t **l_1983 = &l_1984[0];
                        uint16_t **l_1985 = &l_1548;
                        int32_t l_1989 = 0xABF06D18L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1984[i] = (void*)0;
                        l_1979++;
                        (*l_1872) = func_78(((((*l_1983) = l_1982) != ((*l_1985) = &g_137)) ^ (*p_8)), (((((safe_mod_func_uint64_t_u_u((l_1923[1][0][3] = p_10), p_7)) , (l_1988 == &l_1489)) == p_10) , 0x0613L) & p_7), l_1989, (*g_1458));

                        ((l_1548 == &g_137) ? (void) (0) : __assert_fail ("l_1548 == &g_137", "16.c", 796, __PRETTY_FUNCTION__));

                    }
                    l_1991 = ((**l_1798) = (l_1990[2] = (void*)0));

                    ((l_1800 == 0) ? (void) (0) : __assert_fail ("l_1800 == 0", "16.c", 801, __PRETTY_FUNCTION__));
                    ((l_1991 == 0) ? (void) (0) : __assert_fail ("l_1991 == 0", "16.c", 802, __PRETTY_FUNCTION__));
                    for (l_1320 = 0; (l_1320 <= 3); l_1320 += 1)
                    {
                        if ((*p_8))
                            break;
                    }
                }


                ((l_1991 == 0 || l_1991 == &l_1191) ? (void) (0) : __assert_fail ("l_1991 == 0 || l_1991 == &l_1191", "16.c", 811, __PRETTY_FUNCTION__));
            }


        }


        ((l_1873 == &l_1082 || l_1873 == &l_1821) ? (void) (0) : __assert_fail ("l_1873 == &l_1082 || l_1873 == &l_1821", "16.c", 818, __PRETTY_FUNCTION__));
        (*l_1873) = func_45((*g_1203), l_1994, p_7, &l_1743);

        ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 821, __PRETTY_FUNCTION__));
    }

    ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 824, __PRETTY_FUNCTION__));
    (((g_327 >= &l_1092[0] && g_327 <= &l_1092[1]) || (g_327 >= &g_153[0] && g_327 <= &g_153[0])) ? (void) (0) : __assert_fail ("(g_327 >= &l_1092[0] && g_327 <= &l_1092[1]) || (g_327 >= &g_153[0] && g_327 <= &g_153[0])", "16.c", 825, __PRETTY_FUNCTION__));

    ((g_1695 == &g_930 || g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525) ? (void) (0) : __assert_fail ("g_1695 == &g_930 || g_1695 == &l_1320 || g_1695 == 0 || (g_1695 >= &l_1419[0] && g_1695 <= &l_1419[5]) || (g_1695 >= &l_1679[0] && g_1695 <= &l_1679[3]) || g_1695 == &g_525", "16.c", 827, __PRETTY_FUNCTION__));

    return l_1995[1][3];




}







static int8_t func_11(uint32_t p_12, int32_t * p_13, int32_t * p_14, int32_t p_15)
{
    int32_t *l_880 = (void*)0;
    int32_t *l_881 = &g_153[0];
    int32_t *l_882 = &g_460;
    int32_t *l_883[2][2][8] = {{{&g_90,&g_153[0],&g_90,&g_153[0],&g_3,&g_153[0],&g_90,&g_153[0]},{&g_3,&g_153[0],&g_153[0],&g_153[0],&g_153[0],&g_153[0],&g_90,&g_153[0]}},{{&g_90,&g_153[0],&g_3,&g_153[0],&g_90,&g_153[0],&g_90,&g_153[0]},{&g_153[0],&g_153[0],&g_153[0],&g_153[0],&g_90,&g_153[0],&g_153[0],&g_153[0]}}};
    uint32_t l_884 = 1UL;
    uint8_t *l_887 = &g_25;
    uint16_t *l_899[1];
    int64_t *l_900 = &g_876;
    uint64_t *l_901 = (void*)0;
    uint64_t *l_902[8];
    int64_t l_903 = (-1L);
    int8_t l_929 = (-9L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_899[i] = &g_877;
    for (i = 0; i < 8; i++)
        l_902[i] = &g_144;
lbl_925:
    --l_884;
    if (func_78(((((*l_887) = (1L && p_15)) | ((0x53A722607CAACF9FLL & (8L && (-1L))) == p_15)) , func_78((l_903 |= (safe_sub_func_uint64_t_u_u(p_12, (safe_add_func_int64_t_s_s(g_148[6], ((g_630 = ((((*l_900) = (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((*l_881) ^= func_45(l_880, l_881, p_12, l_881)) < p_15), 0x28L)), 0x2AL)) , (*l_882)), g_84))))) != g_591) & (*l_882))) & p_15)))))), p_15, g_365, &g_90)), p_15, g_3, l_881))
    {
        int8_t l_914 = 0xF5L;
        int32_t l_916[10];
        uint16_t l_923 = 0x2D2FL;
        int i;
        for (i = 0; i < 10; i++)
            l_916[i] = 0L;
        for (g_25 = 4; (g_25 > 30); ++g_25)
        {
            int64_t l_915 = (-9L);
            int32_t ***l_919 = (void*)0;
            int32_t ***l_921[5];
            int32_t ****l_920 = &l_921[1];
            uint32_t *l_922 = &g_494;
            uint16_t l_924[4];
            int i;
            for (i = 0; i < 5; i++)
                l_921[i] = &g_103;
            for (i = 0; i < 4; i++)
                l_924[i] = 0x7825L;
            (*g_393) &= (p_15 < p_12);
            (*g_327) ^= ((((*p_13) <= g_97) ^ ((g_630 = ((safe_add_func_int32_t_s_s((*p_13), (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((p_15 | (l_914 > (++g_877))) | (((*l_922) = (((*l_920) = l_919) != (l_916[5] , &g_74))) , (func_45(&p_15, &l_916[8], p_15, l_880) ^ p_12))), l_924[2])) == g_874), l_916[3])))) , 1UL)) | p_12)) < 0xEF5721ABL);


        }
        if (l_903)
            goto lbl_925;
    }
    else
    {
        int32_t l_926 = 0x62A5AA38L;
        int32_t l_927 = 0x42666DB5L;
        int32_t l_928[10][5][5] = {{{0xFEF184ABL,0xF0C05DE3L,0xBA88BEF1L,(-10L),0x08D0DFC5L},{0x56B65A69L,1L,0x45A65126L,0L,0x45A65126L},{0x08D0DFC5L,(-8L),1L,0L,0L},{0x56B65A69L,(-3L),6L,0xD4DB2AA9L,0xD4DB2AA9L},{0xFEF184ABL,6L,0xFEF184ABL,0x6F4A2128L,0x794B6DF4L}},{{6L,(-3L),0x56B65A69L,(-10L),4L},{1L,(-8L),0x08D0DFC5L,3L,0xFEF184ABL},{0x45A65126L,1L,0x56B65A69L,4L,(-3L)},{0xBA88BEF1L,0xF0C05DE3L,0xFEF184ABL,0xF0C05DE3L,0xBA88BEF1L},{1L,(-10L),6L,4L,4L}},{{0x5E522EEDL,(-10L),1L,3L,(-8L)},{0xD4DB2AA9L,0x56B65A69L,0x45A65126L,(-10L),4L},{0x9A794C32L,3L,0xBA88BEF1L,0x6F4A2128L,0xBA88BEF1L},{4L,4L,1L,0xD4DB2AA9L,(-3L)},{0x9A794C32L,0x90FEC03DL,0x5E522EEDL,0L,0x08D0DFC5L}},{{4L,0x45A65126L,4L,4L,6L},{1L,0L,0L,0x6F4A2128L,0x5E522EEDL},{0x56B65A69L,0xE85A0B26L,0xE85A0B26L,0x56B65A69L,4L},{(-8L),0xF0C05DE3L,0L,0xDF60FFF9L,0xFEF184ABL},{(-10L),(-3L),4L,(-3L),(-10L)}},{{0x9A794C32L,0x6F4A2128L,1L,0xDF60FFF9L,(-2L)},{1L,0L,0x56B65A69L,0x56B65A69L,0L},{0x08D0DFC5L,0x90FEC03DL,(-8L),0x6F4A2128L,(-2L)},{(-3L),0x56B65A69L,(-10L),4L,(-10L)},{(-2L),6L,0x9A794C32L,(-8L),0xFEF184ABL}},{{(-3L),0xD4DB2AA9L,1L,4L,4L},{0x08D0DFC5L,0x69E42FB3L,0x08D0DFC5L,0x2D62274BL,0x5E522EEDL},{1L,0xD4DB2AA9L,(-3L),0L,6L},{0x9A794C32L,6L,(-2L),0xF0C05DE3L,0x08D0DFC5L},{(-10L),0x56B65A69L,(-3L),6L,0xD4DB2AA9L}},{{(-8L),0x90FEC03DL,0x08D0DFC5L,0x90FEC03DL,(-8L)},{0x56B65A69L,0L,1L,6L,0xE85A0B26L},{1L,0x6F4A2128L,0x9A794C32L,0xF0C05DE3L,(-3L)},{4L,(-3L),(-10L),0L,0L},{(-2L),(-8L),0x5E522EEDL,0xF0C05DE3L,0x5E522EEDL}},{{0L,0L,4L,(-10L),0x45A65126L},{(-2L),0x69E42FB3L,0xFEF184ABL,(-10L),(-8L)},{(-10L),4L,(-10L),0x56B65A69L,(-3L)},{0xFEF184ABL,0x69E42FB3L,(-2L),3L,0L},{4L,0L,0L,4L,(-10L)}},{{0x5E522EEDL,(-8L),(-2L),0x90FEC03DL,0xBA88BEF1L},{6L,0xE85A0B26L,(-10L),0xE85A0B26L,6L},{0x08D0DFC5L,3L,0xFEF184ABL,0x90FEC03DL,(-3L)},{0xD4DB2AA9L,1L,4L,4L,1L},{(-8L),6L,0x5E522EEDL,3L,(-3L)}},{{0xE85A0B26L,4L,6L,0x56B65A69L,6L},{(-3L),0x6F4A2128L,0x08D0DFC5L,(-10L),0xBA88BEF1L},{0xE85A0B26L,0x45A65126L,0xD4DB2AA9L,(-10L),(-10L)},{(-8L),0x2D62274BL,(-8L),0xF0C05DE3L,0L},{0xD4DB2AA9L,0x45A65126L,0xE85A0B26L,1L,(-3L)}}};
        int16_t l_939 = 6L;
        uint8_t *l_942 = &g_25;
        int32_t l_943 = 0L;
        const uint64_t l_946 = 0x29007706081FB5BELL;
        uint16_t l_961 = 0xDE76L;
        int8_t *l_974 = &g_216;
        uint8_t l_975 = 255UL;
        int32_t *l_1001 = (void*)0;
        int32_t l_1002 = 1L;
        int8_t l_1003 = 0x6CL;
        int i, j, k;
        ++g_930;
        for (l_903 = 0; (l_903 != (-6)); --l_903)
        {
            uint64_t l_936 = 0xD0253197AEC1209DLL;
            int32_t **l_944[8] = {&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7],&l_883[1][1][7]};
            int32_t *l_945 = (void*)0;
            int8_t *l_955 = &g_325;
            int8_t *l_956 = &l_929;
            int i;
            for (g_144 = 0; (g_144 <= 3); g_144 += 1)
            {
                int8_t l_935 = 0x0DL;
                ++l_936;
            }
            (*l_882) = (((func_61(l_939, (g_393 = &p_15), l_945, g_132) == p_12) < 0x474ACD73C584FEFBLL) , (*p_14));

            ((g_393 == &p_15) ? (void) (0) : __assert_fail ("g_393 == &p_15", "16.c", 924, __PRETTY_FUNCTION__));
            (*g_327) ^= ((p_15 , (l_946 || ((func_61(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((0x2CE9647FL && 0x71D9BC8BL), l_946)), p_12)), ((*l_956) = ((*l_955) |= (p_15 <= ((safe_div_func_uint16_t_u_u((p_12 , (((2UL ^ p_12) || (-10L)) , p_12)), p_15)) <= p_15)))))) ^ 0L), l_882, l_880, l_926) && 0UL) | p_15))) && p_12);
            if ((*p_14))
                continue;
        }

        ((g_393 == &p_15 || g_393 == &g_90) ? (void) (0) : __assert_fail ("g_393 == &p_15 || g_393 == &g_90", "16.c", 930, __PRETTY_FUNCTION__));
        (*g_393) &= (safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_524 , l_928[1][2][2]), (g_460 && func_45(&l_928[9][4][2], l_880, l_961, &p_15)))), (safe_mod_func_uint16_t_u_u((g_460 > p_12), (*l_882)))));
        l_1003 |= ((*l_882) = ((g_218 = (((*l_887)--) == (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((g_137++), p_12)) , (safe_sub_func_int8_t_s_s(((*l_974) ^= p_12), p_15))) , (-1L)), g_343)))) == ((~(l_928[1][1][0] = l_975)) , (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u((((*l_900) = 1L) & (safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(func_78((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(p_12, 10)) || (safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(g_86)), g_153[0])) , (*p_13)) > (*p_13)), p_12)), l_946)), p_15))), p_15)), g_148[6], p_12, l_1001), 5)) || 0x681F1DDFL) > p_15), g_874))), 18446744073709551615UL)) >= 1UL), 12)) || l_1002), 7)), g_877)))));
    }

    ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 935, __PRETTY_FUNCTION__));
    ((g_393 == &p_15 || g_393 == &g_90) ? (void) (0) : __assert_fail ("g_393 == &p_15 || g_393 == &g_90", "16.c", 936, __PRETTY_FUNCTION__));
    (*l_881) |= (*p_13);
    return p_12;


}







static uint8_t func_32(const int32_t * p_33, int32_t p_34, int32_t * p_35, int64_t p_36)
{
    int32_t l_648 = 2L;
    int32_t l_653[10];
    uint64_t l_656 = 0xB6711C1E7B1A1250LL;
    int32_t ***l_663 = (void*)0;
    uint8_t l_669 = 0x80L;
    int32_t l_670[10][7] = {{(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L)},{(-1L),(-7L),(-7L),(-1L),(-1L),(-7L),(-7L)},{9L,0xE221019EL,9L,0xE221019EL,9L,0xE221019EL,9L},{(-1L),(-1L),(-7L),(-7L),(-1L),(-1L),(-7L)},{(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L)},{(-1L),(-7L),(-7L),(-1L),(-1L),(-7L),(-7L)},{9L,0xE221019EL,9L,0xE221019EL,9L,0xE221019EL,9L},{(-1L),(-1L),(-7L),(-7L),(-1L),(-1L),(-7L)},{(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L),0xE221019EL,(-1L)},{(-1L),(-7L),(-7L),(-1L),(-1L),(-7L),(-7L)}};
    uint32_t l_671 = 0x968C6B2DL;
    const uint8_t l_692 = 0x64L;
    uint64_t *l_701 = &l_656;
    uint64_t **l_700 = &l_701;
    uint8_t *l_703 = &g_560;
    uint8_t **l_702 = &l_703;
    int16_t *l_826 = &g_132;
    int16_t l_835 = 0x25DFL;
    int i, j;
    for (i = 0; i < 10; i++)
        l_653[i] = 0L;
    for (g_560 = 0; (g_560 < 18); g_560 = safe_add_func_int64_t_s_s(g_560, 3))
    {
        int32_t *l_649 = &g_153[0];
        int32_t *l_650 = &g_153[0];
        int32_t *l_651 = &g_153[0];
        int32_t *l_652[6][8] = {{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3},{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3},{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3},{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3},{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3},{(void*)0,&g_3,&g_90,&g_3,(void*)0,&g_3,&g_90,&g_3}};
        int32_t l_654[7][1];
        int32_t l_655[8][3][5] = {{{0xEE9978D6L,0x362E33CBL,1L,0x3EA1E788L,(-1L)},{3L,0x02A58883L,0xFDEE6C4DL,0x64670D83L,0x09E47E0AL},{0xEE474B83L,0x32996981L,1L,(-1L),(-1L)}},{{0x6931A96EL,7L,0xEE9978D6L,(-3L),(-1L)},{0x8900ABF5L,0xD759A560L,0x02A58883L,0L,0x09E47E0AL},{(-1L),0L,0xD4F66207L,0x6F6A3A3EL,(-1L)}},{{0x7CADED07L,1L,0x278952AAL,0x278952AAL,1L},{(-9L),0x6931A96EL,0x6EE7526EL,3L,(-1L)},{0xDEDDBA23L,0x32996981L,0x376697E6L,0x6F6A3A3EL,0L}},{{(-3L),0x003E2567L,0xB4A31506L,0xE9CD4A66L,0x8900ABF5L},{0xDEDDBA23L,(-3L),(-3L),0x362E33CBL,0xFDEE6C4DL},{(-9L),0xEE474B83L,(-3L),(-1L),7L}},{{0x7CADED07L,0L,0xB4A31506L,0x6EE7526EL,(-1L)},{(-1L),0xFDEE6C4DL,0xD7B7CDC8L,0xEE474B83L,0x6931A96EL},{0x8900ABF5L,0x64670D83L,0x5F48342AL,0x8900ABF5L,0xDEDDBA23L}},{{0x6931A96EL,0x64670D83L,0x278952AAL,(-1L),0x003E2567L},{0xA6D4D47CL,0xEE9978D6L,1L,0x8900ABF5L,0x6931A96EL},{0xEE474B83L,0x6F6A3A3EL,0xCD4BBC95L,3L,3L}},{{0x7CADED07L,0xA6D4D47CL,0x7CADED07L,0x02A58883L,0x64670D83L},{0x6F6A3A3EL,0x09E47E0AL,(-3L),0xA6D4D47CL,0xD7B7CDC8L},{0xEE474B83L,1L,0L,0x32996981L,(-1L)}},{{0x99F29A07L,3L,(-3L),0xD7B7CDC8L,0x8900ABF5L},{(-1L),1L,0x7CADED07L,(-9L),(-3L)},{0x003E2567L,0x64670D83L,0xCD4BBC95L,7L,(-1L)}}};
        int16_t *l_668[6] = {&g_396,&g_396,&g_396,&g_396,&g_396,&g_396};
        int16_t *l_672 = &g_132;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_654[i][j] = 0x07FCAEFBL;
        }
        --l_656;
        for (g_365 = 2; (g_365 <= 7); g_365 += 1)
        {
            int32_t ***l_665 = &g_103;
            int32_t ****l_664 = &l_665;
            const int16_t *l_673 = &g_132;
            l_670[1][1] &= ((((*l_649) = ((l_653[2] , 0xF6A40E170DE54F15LL) && (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((p_36 , (void*)0) != ((*l_664) = l_663)), func_61(g_325, &l_655[3][1][3], p_35, g_186))), p_36)))) >= g_507) < l_669);

            ((l_665 == &g_103 || l_665 == 0) ? (void) (0) : __assert_fail ("l_665 == &g_103 || l_665 == 0", "16.c", 992, __PRETTY_FUNCTION__));
            if (l_671)
                continue;
            for (g_98 = 0; (g_98 <= 7); g_98 += 1)
            {
                (*l_649) &= (l_672 != ((!p_34) , l_673));
            }
        }
        for (p_36 = (-23); (p_36 <= 23); ++p_36)
        {
            return (*l_651);
        }
    }
    for (g_630 = 0; (g_630 > 14); g_630 = safe_add_func_int16_t_s_s(g_630, 5))
    {
        uint64_t *l_680 = &g_144;
        int32_t l_685[9][3] = {{0xB5DB0E0EL,3L,0xD70A836EL},{0xB5DB0E0EL,(-5L),0L},{0xB5DB0E0EL,0x85C38FDFL,0xB5DB0E0EL},{0xB5DB0E0EL,3L,0xD70A836EL},{0xB5DB0E0EL,(-5L),0L},{0xB5DB0E0EL,0x85C38FDFL,0xB5DB0E0EL},{0xB5DB0E0EL,3L,0xD70A836EL},{0xB5DB0E0EL,(-5L),0L},{0xB5DB0E0EL,0x85C38FDFL,0xB5DB0E0EL}};
        uint16_t l_697 = 2UL;
        int16_t *l_698[3];
        int32_t l_699 = 1L;
        uint8_t **l_707 = &g_705;
        uint8_t ***l_706 = &l_707;
        const int32_t **l_708 = &g_561[7];
        int8_t *l_748 = (void*)0;
        uint16_t l_761 = 0x3248L;
        int16_t l_814 = 0x378EL;
        uint32_t l_816 = 0xA9719400L;
        int16_t l_836 = 0L;
        const int32_t l_866 = 0x3931FCBBL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_698[i] = &g_132;
        if (((safe_rshift_func_uint8_t_u_s(((~((*l_680)--)) ^ ((safe_lshift_func_uint8_t_u_u(l_685[4][1], (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((g_343 != (g_98 = (safe_add_func_uint16_t_u_u(l_692, (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((l_699 = l_697), (l_700 != &g_291))), func_45(((*l_708) = p_33), &g_343, l_653[2], p_33))))))), p_36)), 1)))) == p_34)), 3)) || g_153[0]))
        {
            uint8_t l_711 = 0xC2L;
            for (g_460 = (-20); (g_460 >= 2); g_460++)
            {
                int32_t l_729 = 0x5E11110DL;
                uint64_t *l_735 = &l_656;
                if (l_711)
                {
                    int64_t l_728 = (-8L);
                    for (g_525 = 0; (g_525 >= 51); g_525 = safe_add_func_uint8_t_u_u(g_525, 9))
                    {
                        uint32_t l_727 = 0x8EE0015BL;
                        int32_t *l_730 = &l_653[2];
                        if (l_711)
                            break;
                        (*g_327) ^= (safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_144, ((safe_lshift_func_int8_t_s_u(p_34, (func_61(p_36, l_730, p_35, p_34) && (*l_730)))) && 0L))), p_34)) || 0x1562L), p_36)) , l_711)));
                    }
                }
                else
                {
                    (*g_393) = ((void*)0 != &p_36);
                }
                if (l_711)
                    break;
                (*g_327) = (safe_mul_func_int8_t_s_s(g_343, (safe_add_func_uint8_t_u_u(((l_735 == (*l_700)) < ((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((*p_35), (*g_393))), (safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(0xABL, 5L)) | (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((l_711 | (l_748 == l_703)) , p_34), p_34)) || l_729), 5))), g_644[2])))) | (-9L))), p_34))));
            }
        }
        else
        {
            uint32_t l_750 = 1UL;
            uint64_t l_757 = 2UL;
            const uint16_t * const l_767[1] = {&l_697};
            int8_t l_779 = 0xB5L;
            uint64_t **l_781 = (void*)0;
            int32_t l_788 = (-1L);
            int32_t l_790[3][7] = {{0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L,0xD9B69628L}};
            uint64_t l_871 = 18446744073709551615UL;
            int i, j;
            for (g_132 = 0; (g_132 <= 9); g_132 += 1)
            {
                uint8_t **l_756 = &l_703;
                uint16_t *l_760 = &g_137;
                int64_t l_780 = 0x433FC7A64926BE9FLL;
                int32_t l_789 = 0xA4BD0839L;
                int16_t l_796 = 0x6585L;
                int32_t l_815 = (-1L);
                uint16_t l_818 = 0x3DB0L;
                int32_t l_827 = (-8L);
                int32_t l_838 = 0L;
                int32_t l_839 = 0xD67A530AL;
                int32_t l_840[2][5][3] = {{{(-4L),0x70D4E7AAL,(-9L)},{(-1L),(-1L),(-9L)},{0x70D4E7AAL,(-4L),(-9L)},{(-4L),0x70D4E7AAL,(-9L)},{(-1L),(-1L),(-9L)}},{{0x70D4E7AAL,(-4L),(-9L)},{(-4L),0x70D4E7AAL,(-9L)},{(-1L),(-1L),(-9L)},{0x70D4E7AAL,(-4L),(-9L)},{(-4L),0x70D4E7AAL,(-9L)}}};
                uint8_t l_841[10] = {246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL};
                int i, j, k;
                if (l_653[g_132])
                {
                    for (g_90 = 2; (g_90 <= 6); g_90 += 1)
                    {
                        int i;
                        return g_148[(g_90 + 1)];


                    }
                    for (g_560 = 0; (g_560 <= 7); g_560 += 1)
                    {
                        int i;
                        (*g_327) |= g_148[g_560];
                    }
                }
                else
                {
                    uint32_t l_749 = 0x38C86F29L;
                    uint32_t l_753 = 0x2568F8C0L;
                    if (l_749)
                    {
                        return l_750;


                    }
                    else
                    {
                        (*g_393) = ((l_685[4][1] = l_653[g_132]) >= g_396);
                        (*l_708) = (*g_74);
                        return p_36;


                    }
                }
                if ((safe_lshift_func_int16_t_s_u(func_45((*l_708), &l_653[g_132], ((g_365 ^= p_36) , ((l_699 = ((*l_760) = l_653[g_132])) | l_761)), p_35), (l_757 , (l_697 | (-6L))))))
                {
                    uint32_t l_766 = 0UL;
                    int32_t l_777 = 1L;
                    int64_t l_778 = 1L;
                    uint32_t l_802[1][3][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_802[i][j][k] = 0x69290373L;
                        }
                    }
                    if ((((((safe_rshift_func_uint8_t_u_u((l_766 = ((**l_702)++)), (((p_36 , l_767[0]) == ((safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((l_653[g_132] = p_34), (safe_sub_func_uint16_t_u_u(l_750, (((safe_add_func_int32_t_s_s((g_153[0] | ((*l_760) = 0x5968L)), (p_36 <= ((safe_unary_minus_func_int8_t_s(l_777)) , (g_98 && l_778))))) && p_36) | 0xD03D70C1E0AB1A75LL))))) ^ l_777) || (*g_327)), l_779)) , (void*)0)) , p_36))) & g_460) , l_780) , l_781) != &g_291))
                    {
                        int32_t *l_782 = (void*)0;
                        int32_t *l_783 = &l_777;
                        int32_t *l_784 = (void*)0;
                        int32_t *l_785 = &l_685[4][1];
                        int32_t *l_786 = &l_670[1][1];
                        int32_t *l_787[8][7] = {{&l_653[2],&g_90,&l_670[9][2],&l_670[9][2],&g_90,&l_653[2],&g_90},{(void*)0,&l_653[2],&l_653[2],(void*)0,&g_90,(void*)0,&l_653[2]},{&l_670[1][1],&l_670[1][1],&l_653[2],&l_670[9][2],&l_653[2],&l_670[1][1],&l_670[1][1]},{&l_670[1][1],&l_653[2],&l_670[9][2],&l_653[2],&l_670[1][1],&l_670[1][1],&l_653[2]},{(void*)0,&g_90,(void*)0,&l_653[2],&l_653[2],(void*)0,&g_90},{&l_653[2],&g_90,&l_670[9][2],&l_670[9][2],&g_90,&l_653[2],&g_90},{(void*)0,&l_653[2],&l_653[2],(void*)0,&g_90,(void*)0,&l_653[2]},{&l_670[1][1],&l_670[1][1],&l_653[2],&l_670[9][2],&l_653[2],&l_670[1][1],(void*)0}};
                        uint32_t l_791 = 0x12E617C0L;
                        int i, j;
                        --l_791;
                        return l_778;


                    }
                    else
                    {
                        const int32_t *l_797 = &l_670[0][6];
                        const int32_t **l_813 = &l_797;
                        (*g_327) ^= (((*g_393) = (safe_rshift_func_int16_t_s_u(l_796, 2))) == func_45(&l_788, ((*l_708) = l_797), l_766, ((safe_lshift_func_uint16_t_u_u(l_789, l_790[2][4])) , &l_789)));
                        (*g_327) = 0xA7E6D61FL;
                        (*g_393) = ((--(*l_703)) == l_802[0][2][0]);
                        (*g_327) ^= func_78((((!((safe_mul_func_uint16_t_u_u(func_45((g_75 = p_35), &l_790[0][3], p_34, (*l_813)), p_34)) <= 0x90L)) == 0x63E8L) == 1L), l_816, p_34, p_35);
                    }
                    if ((*p_35))
                    {
                        int8_t l_817 = 1L;
                        (*g_327) |= l_817;
                    }
                    else
                    {
                        (*g_327) = (4294967287UL < p_34);
                        return p_34;


                    }
                }
                else
                {
                    uint32_t *l_821 = &g_98;
                    const int32_t l_824 = 0xBD98953EL;
                    int32_t *l_830 = (void*)0;
                    int32_t *l_831 = (void*)0;
                    int32_t *l_832 = &l_653[1];
                    int32_t *l_833 = &g_460;
                    int32_t *l_834[1][2];
                    int32_t l_837[4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_834[i][j] = &l_699;
                    }
                    for (i = 0; i < 4; i++)
                        l_837[i] = 0L;
                    if (func_78(l_818, p_36, ((*l_821) = ((*g_327) , (safe_add_func_int32_t_s_s(l_779, p_34)))), &l_685[4][1]))
                    {
                        int16_t *l_825[10];
                        int64_t l_828 = 1L;
                        int32_t *l_829 = (void*)0;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_825[i] = (void*)0;
                        l_828 = ((0x659FL | (-2L)) , func_78((safe_lshift_func_int16_t_s_s(l_824, p_36)), (((l_825[8] == l_826) <= g_644[1]) , l_827), l_815, &l_653[g_132]));
                        (*l_708) = l_829;
                    }
                    else
                    {
                        return p_36;


                    }
                    ++l_841[2];
                }
                (*l_706) = &g_705;
                for (g_365 = 3; (g_365 < 37); g_365 = safe_add_func_uint8_t_u_u(g_365, 9))
                {
                    (*g_327) = (-8L);
                }
            }


            for (l_757 = 0; (l_757 <= 8); l_757 = safe_add_func_uint64_t_u_u(l_757, 1))
            {
                uint64_t l_864 = 0xE29605EA60B8E78FLL;
                int32_t *l_867 = &l_653[6];
                (*g_327) = (*p_35);
                for (g_365 = 0; (g_365 == 40); g_365++)
                {
                    uint64_t l_854 = 0x087A8FDE1B6D369BLL;
                    int32_t ****l_857 = &l_663;
                    int32_t *****l_856 = &l_857;
                    uint32_t *l_865 = &g_494;
                    (*l_708) = l_867;
                }
                for (g_365 = 0; (g_365 != 3); g_365 = safe_add_func_int32_t_s_s(g_365, 4))
                {
                    int16_t l_870 = 0x799CL;
                    return l_870;


                }
            }


            return l_871;


        }

        ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 1237, __PRETTY_FUNCTION__));
        l_699 |= (*g_393);
        (*l_708) = p_35;
    }


    return p_36;
}







static int32_t * func_37(int32_t * p_38, uint32_t p_39, uint64_t p_40, int32_t * p_41, int32_t * p_42)
{
    int16_t l_50 = 0x9339L;
    int32_t * const l_58 = &g_3;
    int16_t l_329 = 0L;
    const int32_t **l_341[9];
    const int32_t *l_342[5][7][7] = {{{&g_343,&g_343,(void*)0,(void*)0,&g_343,&g_343,&g_343},{(void*)0,&g_343,(void*)0,(void*)0,&g_343,&g_343,&g_343},{&g_343,(void*)0,&g_343,&g_343,(void*)0,(void*)0,&g_343},{&g_343,(void*)0,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0,&g_343,(void*)0},{(void*)0,(void*)0,(void*)0,&g_343,&g_343,(void*)0,(void*)0}},{{(void*)0,&g_343,&g_343,&g_343,(void*)0,&g_343,&g_343},{(void*)0,&g_343,&g_343,(void*)0,&g_343,&g_343,(void*)0},{&g_343,&g_343,(void*)0,&g_343,&g_343,&g_343,(void*)0},{(void*)0,(void*)0,&g_343,&g_343,(void*)0,(void*)0,(void*)0},{(void*)0,&g_343,(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343}},{{&g_343,&g_343,&g_343,&g_343,&g_343,(void*)0,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343,&g_343,(void*)0},{(void*)0,&g_343,(void*)0,(void*)0,&g_343,(void*)0,&g_343},{&g_343,(void*)0,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0,(void*)0,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0,&g_343,&g_343},{&g_343,&g_343,&g_343,(void*)0,(void*)0,(void*)0,&g_343}},{{&g_343,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,(void*)0,(void*)0,(void*)0,&g_343,&g_343,&g_343},{&g_343,&g_343,(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,(void*)0,(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343,(void*)0,&g_343},{&g_343,(void*)0,&g_343,(void*)0,(void*)0,&g_343,(void*)0},{&g_343,(void*)0,(void*)0,&g_343,(void*)0,&g_343,&g_343}},{{&g_343,&g_343,&g_343,(void*)0,&g_343,&g_343,(void*)0},{&g_343,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,(void*)0,(void*)0,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343,&g_343,(void*)0},{&g_343,(void*)0,&g_343,&g_343,&g_343,(void*)0,&g_343}}};
    int32_t l_346 = 0xC214BE47L;
    int32_t l_429 = (-10L);
    int8_t l_430 = 2L;
    int32_t l_431 = (-1L);
    int32_t l_432[4];
    const int32_t *l_455 = &g_90;
    const int32_t *l_456 = &g_153[0];
    int32_t *l_458 = &l_432[3];
    uint64_t *l_480 = (void*)0;
    uint64_t **l_479 = &l_480;
    int32_t l_488 = 0x769216BDL;
    uint32_t l_538 = 18446744073709551614UL;
    int32_t *l_564 = (void*)0;
    int8_t l_636 = 1L;
    int32_t *l_637[3];
    uint32_t l_638 = 1UL;
    int32_t *l_641 = &l_432[0];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_341[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_432[i] = 0x7600BFB7L;
    for (i = 0; i < 3; i++)
        l_637[i] = &l_429;
    if ((safe_div_func_uint32_t_u_u(func_45((l_50 , (void*)0), (l_342[1][5][2] = func_51(g_3, (((!((safe_add_func_uint16_t_u_u(0x4698L, ((((((l_58 == &g_3) & 0xDEL) < (safe_mod_func_uint32_t_u_u(func_61((safe_rshift_func_int16_t_s_s((((*l_58) >= 0xAEC701401CEA0262LL) | g_3), g_3)), p_41, p_38, p_40), (*l_58)))) >= (*l_58)) , g_153[0]) <= 0x49L))) || (*l_58))) , 0UL) <= (*l_58)), (*l_58), l_329)), g_132, p_41), (*l_58))))
    {
        int64_t l_350[2][9] = {{(-7L),1L,(-5L),1L,(-7L),(-7L),1L,(-5L),1L},{1L,0L,(-5L),(-5L),0L,1L,0L,(-5L),(-5L)}};
        uint8_t *l_359[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_360 = 0xD39C973EL;
        uint64_t *l_362 = &g_144;
        uint64_t **l_361 = &l_362;
        int64_t *l_363 = &g_186;
        uint32_t *l_364 = &g_365;
        int32_t l_399 = 0L;
        int32_t l_414[1];
        int16_t l_433 = 0x1826L;
        uint32_t l_468[10] = {0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L,0x4AF2F7A7L};
        int i, j;
        for (i = 0; i < 1; i++)
            l_414[i] = 2L;
        for (l_329 = 0; (l_329 > (-11)); l_329 = safe_sub_func_int8_t_s_s(l_329, 1))
        {
            uint32_t l_347 = 0x6C807AA6L;
            l_347++;
        }
        (*g_327) |= (((*l_364) |= (func_61((l_350[0][8] , ((*l_363) = (safe_add_func_int8_t_s_s(func_78((func_61(g_97, p_42, p_41, p_39) > g_137), l_350[1][2], p_39, &l_360), p_40)))), &l_346, p_42, p_39) , g_218)) != (*p_38));
        for (l_360 = 0; (l_360 >= 8); l_360 = safe_add_func_int64_t_s_s(l_360, 5))
        {
            int64_t l_376 = 0xBBF3BCAA90B541A9LL;
            int32_t l_411 = (-1L);
            int32_t l_424[10] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
            int64_t l_472 = 0x40D6200C5CE82AB1LL;
            int i;
            for (g_144 = (-5); (g_144 >= 52); ++g_144)
            {
                const int32_t *l_391 = &g_90;
                int16_t l_397 = 0xE34BL;
                int32_t l_402 = 0x761F9B6BL;
                int32_t l_426 = (-5L);
                int32_t l_427 = 8L;
                int32_t l_434 = 0L;
                int32_t l_435[9][5][4] = {{{0xFD2C66E9L,0x0C64BFB1L,0x3333EA2AL,(-1L)},{0xBF82385BL,0xFD2C66E9L,0xFD2C66E9L,0xBF82385BL},{0x71DBE118L,(-2L),5L,(-4L)},{0x6BB51FACL,(-7L),(-1L),9L},{0x5F30D093L,0x3333EA2AL,0xBF82385BL,9L}},{{0xC39E7E52L,(-7L),0xDFF37D52L,(-4L)},{(-1L),(-2L),0x5F30D093L,0xBF82385BL},{0xE0AE3E09L,0xFD2C66E9L,1L,(-1L)},{(-1L),0x0C64BFB1L,(-2L),0x3333EA2AL},{(-7L),(-1L),(-7L),(-9L)}},{{0xDE9CFCA3L,(-1L),(-1L),0x5F30D093L},{0x687D776EL,(-9L),(-1L),(-1L)},{5L,(-1L),(-1L),0x687D776EL},{0x687D776EL,(-1L),(-1L),0x6BB51FACL},{0xDE9CFCA3L,0xC39E7E52L,(-7L),0x4E2C4A65L}},{{(-7L),0x4E2C4A65L,(-2L),(-1L)},{(-1L),5L,1L,1L},{0xE0AE3E09L,0xE0AE3E09L,0x5F30D093L,0xC39E7E52L},{(-1L),(-9L),0xDFF37D52L,(-2L)},{0xC39E7E52L,0x6BB51FACL,0xBF82385BL,0xDFF37D52L}},{{0x5F30D093L,0x6BB51FACL,(-1L),(-2L)},{0x6BB51FACL,(-9L),5L,0xC39E7E52L},{0x71DBE118L,0xE0AE3E09L,0xFD2C66E9L,(-7L)},{0L,0xFD2C66E9L,5L,0x6BB51FACL},{(-7L),0xBF82385BL,(-4L),0xBF82385BL}},{{(-1L),0x71DBE118L,0x6BB51FACL,0x4E2C4A65L},{(-1L),0x6BB51FACL,(-1L),(-9L)},{0xBF82385BL,0x5F30D093L,(-2L),(-1L)},{0xBF82385BL,0xC39E7E52L,(-1L),9L},{(-1L),(-1L),0x6BB51FACL,(-8L)}},{{(-1L),0xE0AE3E09L,(-4L),5L},{(-7L),(-1L),5L,1L},{0L,(-7L),(-7L),0L},{0x0C64BFB1L,0xDE9CFCA3L,0xFD2C66E9L,(-1L)},{0x4E2C4A65L,0x687D776EL,0x5F30D093L,0x3333EA2AL}},{{9L,5L,0L,0x3333EA2AL},{0x71DBE118L,0x687D776EL,(-1L),(-1L)},{0xE0AE3E09L,0xDE9CFCA3L,9L,0L},{0xDFF37D52L,(-7L),(-7L),1L},{(-1L),(-1L),0xDE9CFCA3L,5L}},{{(-9L),0xE0AE3E09L,(-9L),(-8L)},{(-4L),(-1L),0xE0AE3E09L,9L},{(-9L),0xC39E7E52L,1L,(-1L)},{0xFD2C66E9L,0x5F30D093L,1L,(-9L)},{(-9L),0x6BB51FACL,0xE0AE3E09L,0x4E2C4A65L}}};
                uint64_t l_436[1][7][7] = {{{0xB6BC49F3CD458C39LL,0x6C7E572716CB6BA4LL,1UL,0x2C573505EB7875D7LL,0x27C9C7FD8766B66ELL,0x27C9C7FD8766B66ELL,0x7119536F7F8E900ALL},{1UL,0x89DBB7E0F2C44509LL,1UL,0x0DEB2BAB7EF2F296LL,18446744073709551608UL,0xB6BC49F3CD458C39LL,1UL},{0xF623C638F7676CE6LL,0x266E282D16277DAALL,0x9CA67752D08F2848LL,0x89DBB7E0F2C44509LL,0x1D2F6DC7A6227AADLL,0x3D30E0754B226926LL,0x27C9C7FD8766B66ELL},{0x89DBB7E0F2C44509LL,0x9CA67752D08F2848LL,0x266E282D16277DAALL,0xF623C638F7676CE6LL,18446744073709551612UL,0xB6BC49F3CD458C39LL,0xB6BC49F3CD458C39LL},{0x0DEB2BAB7EF2F296LL,1UL,0x89DBB7E0F2C44509LL,1UL,0x0DEB2BAB7EF2F296LL,18446744073709551608UL,0xB6BC49F3CD458C39LL},{0x7119536F7F8E900ALL,6UL,0x2C573505EB7875D7LL,0x47A6DD702B05BA6BLL,0xB6BC49F3CD458C39LL,0x266E282D16277DAALL,0x27C9C7FD8766B66ELL},{0x2C573505EB7875D7LL,18446744073709551608UL,0xF623C638F7676CE6LL,0x99353283B95BE742LL,0x6C7E572716CB6BA4LL,0x0DEB2BAB7EF2F296LL,1UL}}};
                uint64_t **l_457 = (void*)0;
                uint64_t ***l_481 = &l_361;
                int8_t *l_482 = (void*)0;
                int8_t *l_483 = &g_216;
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_s(l_350[0][8], 11)))
                {
                    for (g_216 = 9; (g_216 > 14); ++g_216)
                    {
                        (*g_327) &= (4294967295UL == 4294967294UL);
                    }
                }
                else
                {
                    uint32_t l_392 = 0x96331427L;
                    uint64_t *l_394 = &g_395;
                    int32_t l_423 = 0x5D87785CL;
                    int32_t l_425[4][6] = {{0x53882F06L,(-6L),0x53882F06L,0x53882F06L,(-6L),0x53882F06L},{0x53882F06L,(-6L),0x53882F06L,0x53882F06L,(-6L),0x53882F06L},{0x53882F06L,(-6L),0x53882F06L,0x53882F06L,(-6L),0x53882F06L},{0x53882F06L,(-6L),0x53882F06L,0x53882F06L,(-6L),0x53882F06L}};
                    int32_t ***l_444 = &g_103;
                    int32_t ****l_443 = &l_444;
                    int32_t ****l_447 = &l_444;
                    int32_t *l_459 = (void*)0;
                    int16_t *l_461[2][3][9] = {{{&l_329,&l_397,&l_397,&l_329,&l_329,&l_397,&l_397,&l_329,&l_329},{&l_329,&l_397,&l_329,&l_397,&l_329,&l_397,&l_329,&l_397,&l_329},{&l_329,&l_329,&l_397,&l_397,&l_329,&l_329,&l_397,&l_397,&l_329}},{{&l_433,&l_397,&l_433,&l_397,&l_433,&l_397,&l_433,&l_397,&l_433},{&l_329,&l_397,&l_397,&l_329,&l_329,&l_397,&l_397,&l_329,&l_329},{&l_329,&l_397,&l_329,&l_397,&l_329,&l_397,&l_329,&l_397,&l_329}}};
                    uint16_t *l_469 = &g_137;
                    int i, j, k;
                    if (((((*l_363) = (safe_add_func_uint16_t_u_u(l_376, ((g_396 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((*p_38), l_350[0][5])) <= (safe_sub_func_int16_t_s_s((p_39 , ((safe_mul_func_uint8_t_u_u(l_350[1][8], (safe_sub_func_int32_t_s_s((((*l_394) = (safe_mod_func_uint16_t_u_u(func_78((func_45((l_350[0][8] , p_42), p_38, (safe_sub_func_int64_t_s_s((((p_39 != 0x4CL) , g_84) <= l_360), l_350[0][8])), l_391) , (*l_391)), p_39, l_392, g_393), p_39))) , 0x057FC3E1L), g_343)))) , 0L)), l_392))), g_84))) != l_397)))) <= p_39) & 1L))
                    {
                        int32_t *l_398 = &l_346;
                        int32_t l_400 = 0x20455CA0L;
                        int32_t *l_401 = &l_400;
                        int32_t *l_403 = (void*)0;
                        int32_t *l_404 = &g_153[0];
                        int32_t *l_405 = &g_153[0];
                        int32_t *l_406 = &l_346;
                        int32_t *l_407 = &l_399;
                        int32_t *l_408 = &l_402;
                        int32_t *l_409 = (void*)0;
                        int32_t *l_410 = &l_399;
                        int32_t *l_412 = &g_153[0];
                        int32_t *l_413 = &l_399;
                        int32_t *l_415 = &l_411;
                        int32_t *l_416 = &l_346;
                        int32_t *l_417 = &g_153[0];
                        int32_t *l_418 = (void*)0;
                        int32_t *l_419 = &l_414[0];
                        int32_t *l_420 = &g_153[0];
                        int32_t *l_421 = &l_411;
                        int32_t *l_422[4][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_402,&l_414[0],&l_402,&l_414[0],&l_402}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_402,&l_414[0],&l_402,&l_414[0],&l_402}}};
                        int64_t l_428 = 0x43B4997CFD824F17LL;
                        int32_t ****l_446 = (void*)0;
                        int32_t *****l_445[7][8] = {{&l_443,&l_443,&l_443,&l_446,&l_446,&l_446,&l_443,&l_443},{&l_443,&l_446,(void*)0,&l_443,&l_446,&l_443,&l_443,&l_443},{&l_443,&l_446,(void*)0,&l_443,&l_443,&l_443,&l_443,(void*)0},{&l_443,&l_443,(void*)0,&l_443,&l_443,&l_446,&l_443,&l_443},{&l_443,&l_446,&l_443,&l_443,&l_443,(void*)0,&l_443,&l_443},{&l_446,(void*)0,&l_446,&l_443,(void*)0,&l_443,&l_446,(void*)0},{&l_443,&l_446,&l_443,&l_446,&l_443,&l_446,&l_446,&l_443}};
                        int64_t *l_450 = &g_186;
                        int i, j, k;
                        l_436[0][4][3]++;
                        (*l_401) = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((l_447 = l_443) != (void*)0) && (safe_lshift_func_uint16_t_u_s((l_394 == l_450), g_90))), p_39)) || (safe_rshift_func_uint16_t_u_s(((((((((p_40 || (((safe_rshift_func_int8_t_s_s(func_45(l_455, p_38, (*l_391), l_456), 3)) , &g_291) == l_457)) , 0UL) , p_40) , g_137) , p_40) >= p_40) , g_216) && 3L), 8))), 1));
                    }
                    else
                    {
                        (*g_393) |= 0x12F94678L;
                        return l_459;


                    }

                    ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 1386, __PRETTY_FUNCTION__));
                    (*g_74) = p_42;

                    ((g_75 == &g_3) ? (void) (0) : __assert_fail ("g_75 == &g_3", "16.c", 1389, __PRETTY_FUNCTION__));
                }
                for (g_396 = 0; (g_396 < (-8)); g_396 = safe_sub_func_int32_t_s_s(g_396, 1))
                {
                    (*g_327) = (*g_393);
                }
                (*g_327) |= (l_472 & ((l_472 , ((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((p_39 && ((*l_483) = (((*l_481) = l_479) != &l_362))), g_395)) < 0x2060326EL) <= ((p_39 ^ (safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(p_40, (*p_41))), g_137))) > l_488)), (*l_391))), p_39)) | (*l_455))) , 0x3671L));
            }
        }

        ((g_75 == &g_3 || g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == &g_3 || g_75 == 0", "16.c", 1399, __PRETTY_FUNCTION__));
        ((l_361 == &l_362 || l_361 == &l_480) ? (void) (0) : __assert_fail ("l_361 == &l_362 || l_361 == &l_480", "16.c", 1400, __PRETTY_FUNCTION__));
        for (g_144 = 0; (g_144 <= 8); g_144 += 1)
        {
            return p_42;


        }
    }
    else
    {
        int16_t l_493 = (-6L);
        int64_t *l_495 = &g_148[6];
        uint32_t *l_500[7] = {&g_365,&g_365,&g_365,&g_365,&g_365,&g_365,&g_365};
        int32_t l_514 = 7L;
        int32_t l_515[10] = {0x3E4963C7L,1L,0L,0L,1L,0x3E4963C7L,1L,0L,0L,1L};
        int32_t l_522 = 0xFA3B8FBCL;
        int32_t l_523 = 0L;
        uint64_t l_633[9][10] = {{6UL,1UL,0x1437AA2DBB78714CLL,1UL,0x52AD50BDFCC0DE37LL,18446744073709551606UL,6UL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL},{0xEE243C58BECE7B40LL,0x64BDF6EB65165603LL,0x8B482D4E873422A2LL,2UL,2UL,0x8B482D4E873422A2LL,0x64BDF6EB65165603LL,0xEE243C58BECE7B40LL,0x2AE0224F565B7F31LL,18446744073709551610UL},{0UL,18446744073709551615UL,6UL,2UL,18446744073709551615UL,0UL,0xEE243C58BECE7B40LL,18446744073709551615UL,0xAFA66DD6F48D1CE5LL,2UL},{0x1437AA2DBB78714CLL,1UL,6UL,18446744073709551615UL,0x64BDF6EB65165603LL,18446744073709551615UL,18446744073709551615UL,0xEE243C58BECE7B40LL,18446744073709551606UL,0x1437AA2DBB78714CLL},{1UL,2UL,0x8B482D4E873422A2LL,18446744073709551610UL,0xDB59A5E24CE386A2LL,18446744073709551613UL,0xDB59A5E24CE386A2LL,18446744073709551610UL,0x8B482D4E873422A2LL,2UL},{2UL,6UL,0x1437AA2DBB78714CLL,2UL,0xC712BB3FA2FBD65FLL,1UL,8UL,0xC712BB3FA2FBD65FLL,0UL,0x52AD50BDFCC0DE37LL},{0xC712BB3FA2FBD65FLL,0xDB59A5E24CE386A2LL,18446744073709551606UL,18446744073709551608UL,0x64BDF6EB65165603LL,1UL,0xAFA66DD6F48D1CE5LL,8UL,18446744073709551615UL,18446744073709551608UL},{2UL,0x8A6860CF8677C8B0LL,18446744073709551613UL,18446744073709551610UL,0UL,0x2AE0224F565B7F31LL,1UL,1UL,0x2AE0224F565B7F31LL,0UL},{0xEE243C58BECE7B40LL,0x7BE1A576D51F29D0LL,0x7BE1A576D51F29D0LL,0xEE243C58BECE7B40LL,0xC712BB3FA2FBD65FLL,18446744073709551608UL,18446744073709551610UL,18446744073709551606UL,18446744073709551615UL,2UL}};
        int i, j;
        if (((((*l_458) |= (*g_327)) && 0UL) == func_78((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(0x5BL, (func_61(((*l_495) ^= func_78(l_493, g_494, p_40, p_38)), &l_346, p_41, g_365) || 0x81L))) , 0x9AA9E102L) , p_39), 6)), g_325, l_493, p_38)))
        {
            return p_42;


        }
        else
        {
            int8_t *l_499 = &g_218;
            int8_t **l_498 = &l_499;
            int32_t *l_505 = &l_432[3];
            const int32_t *l_506[4] = {&g_507,&g_507,&g_507,&g_507};
            int32_t l_513 = 0x0068A6B8L;
            int32_t l_516 = 1L;
            int32_t l_517 = 3L;
            int32_t l_518 = 0xC261FC00L;
            int32_t l_519 = 0xCA2F4B49L;
            int32_t l_520 = 0xB4EE2C29L;
            int32_t l_521[5][5][9] = {{{0L,0L,0x00B5322BL,0xD5D52FD6L,1L,(-3L),0xFA1641CCL,0xFA1641CCL,(-3L)},{0xD35776B8L,(-1L),(-1L),(-1L),0xD35776B8L,1L,0x71B3A631L,0xFC24DB18L,(-9L)},{0xD5D52FD6L,0xBAECFB9EL,1L,0xD806E890L,0x5569ED23L,0xC966CC5AL,0x7F01DB36L,0xB813DAEFL,0L},{0xFC24DB18L,(-1L),0L,(-1L),0xEFEB6988L,1L,5L,0xD286FEB0L,0x71B3A631L},{6L,0x486B5046L,1L,0x03EB7CF0L,0x40004323L,(-3L),0xD806E890L,0x2D5BF486L,0xD806E890L}},{{(-1L),0x4860CEB2L,(-1L),(-1L),0x4860CEB2L,(-1L),1L,0x320A656EL,0xD286FEB0L},{0xD806E890L,0x7F01DB36L,0x5569ED23L,0x00B5322BL,0x968D2B08L,0x40004323L,0xB813DAEFL,(-3L),0L},{(-1L),(-5L),0x4860CEB2L,0x320A656EL,5L,0x92309BA2L,1L,0x973927A2L,0xEFEB6988L},{0xE01653E0L,(-3L),0xE01653E0L,1L,0x2D5BF486L,0x550F8A0FL,0xC966CC5AL,1L,1L},{0xEFEB6988L,0L,0x98BF08B0L,0x320A656EL,0x98BF08B0L,0L,0xEFEB6988L,0x0D1E6449L,(-1L)}},{{0xCAFF5EA9L,0x440506F4L,1L,0x968D2B08L,0x7F01DB36L,0xE01653E0L,0L,0x9CE3203EL,(-6L)},{0xAB678E71L,1L,(-9L),0x71B3A631L,3L,0x92309BA2L,0xB28CCF54L,0x0D1E6449L,0L},{0xD5D52FD6L,0x486B5046L,0L,6L,0L,0x968D2B08L,1L,1L,0xB813DAEFL},{1L,0x98BF08B0L,2L,1L,1L,2L,0x98BF08B0L,1L,0xA88EB3A8L},{(-3L),0L,6L,0x440506F4L,1L,0xFA1641CCL,0xCAFF5EA9L,0xFE65436BL,0x3FF36CC1L}},{{0xFC24DB18L,(-1L),0x320A656EL,0x0D1E6449L,2L,(-1L),0x71B3A631L,(-1L),0xA88EB3A8L},{0x00B5322BL,0x7F01DB36L,(-6L),0x6D9E5D8FL,0L,0x486B5046L,0xFE65436BL,0x34B32C46L,0xB813DAEFL},{0L,0x0A7E7F12L,0xAB678E71L,0xB28CCF54L,0xD35776B8L,0xB28CCF54L,0xAB678E71L,0x0A7E7F12L,0L},{0x550F8A0FL,0x968D2B08L,0x2D5BF486L,0x7F01DB36L,0xD5D52FD6L,0xB813DAEFL,0x486B5046L,0xFA1641CCL,0xE01653E0L},{0x973927A2L,1L,0x92309BA2L,5L,0x320A656EL,0x4860CEB2L,(-5L),(-1L),0x8A5D5AACL}},{{0xBAECFB9EL,0L,1L,6L,0xD806E890L,(-6L),0x00B5322BL,0x6D9E5D8FL,0xD5D52FD6L},{1L,(-1L),0x973927A2L,0x8A5D5AACL,(-6L),(-6L),0x8A5D5AACL,0x973927A2L,(-1L)},{0x9CE3203EL,6L,0xCAFF5EA9L,0xBAECFB9EL,0xC966CC5AL,0x486B5046L,0x3FF36CC1L,0L,0xD806E890L},{0x320A656EL,0xD286FEB0L,(-9L),0x0A7E7F12L,0xA88EB3A8L,3L,0x0D1E6449L,0x98BF08B0L,(-1L)},{0xFE65436BL,6L,0x968D2B08L,0x440506F4L,0L,0x3AC786D2L,0x34B32C46L,0xBAECFB9EL,0x03EB7CF0L}}};
            int32_t *l_537[3];
            uint16_t *l_547 = &g_137;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_537[i] = &l_520;
            if ((g_132 > (((*l_498) = &g_216) == &g_216)))
            {
                int64_t l_501 = 0x648D0FC2AB59CE29LL;
                if ((0L <= (*p_42)))
                {
                    return p_42;


                }
                else
                {
                    uint32_t *l_504[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_504[i] = &g_98;
lbl_508:
                    for (g_395 = 0; (g_395 <= 3); g_395 += 1)
                    {
                        int i;
                        (*g_393) ^= (l_500[6] != (l_432[g_395] , l_504[0]));
                        (*g_74) = l_505;

                        (((g_75 >= &l_432[0] && g_75 <= &l_432[3])) ? (void) (0) : __assert_fail ("(g_75 >= &l_432[0] && g_75 <= &l_432[3])", "16.c", 1465, __PRETTY_FUNCTION__));
                    }

                    (((g_75 >= &l_432[0] && g_75 <= &l_432[3]) || g_75 == &g_90 || g_75 == 0) ? (void) (0) : __assert_fail ("(g_75 >= &l_432[0] && g_75 <= &l_432[3]) || g_75 == &g_90 || g_75 == 0", "16.c", 1468, __PRETTY_FUNCTION__));
                    (*g_74) = (l_506[3] = &g_90);

                    ((g_75 == &g_90) ? (void) (0) : __assert_fail ("g_75 == &g_90", "16.c", 1471, __PRETTY_FUNCTION__));
                    if (g_90)
                        goto lbl_508;
                }

                ((g_75 == &g_90) ? (void) (0) : __assert_fail ("g_75 == &g_90", "16.c", 1476, __PRETTY_FUNCTION__));

            }
            else
            {
                int32_t *l_509 = &l_431;
                int32_t *l_510 = (void*)0;
                int32_t *l_511 = &l_431;
                int32_t *l_512[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_512[i] = &l_429;
                g_525--;
                for (l_523 = (-23); (l_523 == 8); l_523 = safe_add_func_uint16_t_u_u(l_523, 8))
                {
                    int32_t *l_532[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_532[i][j] = (void*)0;
                    }
                    for (l_522 = (-5); (l_522 != (-22)); l_522 = safe_sub_func_int8_t_s_s(l_522, 5))
                    {
                        (*l_505) = (-4L);
                        return p_41;


                    }
                    return l_532[0][1];


                }
                (*g_74) = (void*)0;
                for (l_518 = 5; (l_518 != 6); ++l_518)
                {
                    for (g_186 = 0; (g_186 < (-3)); g_186 = safe_sub_func_uint64_t_u_u(g_186, 5))
                    {
                        return p_41;


                    }
                }
            }

            ((g_75 == 0 || g_75 == &g_90) ? (void) (0) : __assert_fail ("g_75 == 0 || g_75 == &g_90", "16.c", 1521, __PRETTY_FUNCTION__));
            ((l_499 == &g_216) ? (void) (0) : __assert_fail ("l_499 == &g_216", "16.c", 1522, __PRETTY_FUNCTION__));

            l_538--;
            (*g_327) = (safe_rshift_func_uint8_t_u_s(((void*)0 != &g_396), (safe_mul_func_int16_t_s_s((((*l_547) ^= 0x0242L) != (&l_430 != &l_430)), (safe_div_func_uint64_t_u_u(l_514, (0x785BA6F9L ^ (((*l_495) = (g_96 != (*l_505))) != (*l_458)))))))));
        }

        ((g_75 == 0 || g_75 == &g_90) ? (void) (0) : __assert_fail ("g_75 == 0 || g_75 == &g_90", "16.c", 1528, __PRETTY_FUNCTION__));
        for (g_395 = 0; (g_395 <= 18); ++g_395)
        {
            int32_t l_554 = 1L;
            int64_t l_566 = 1L;
            int32_t l_580[7] = {0x6D8FB8B8L,0x6D8FB8B8L,(-10L),0x6D8FB8B8L,0x6D8FB8B8L,(-10L),0x6D8FB8B8L};
            int i;
            for (l_431 = (-17); (l_431 != (-12)); l_431++)
            {
                uint16_t l_555 = 0x1C71L;
                uint32_t l_558 = 0x2CFF1D72L;
                uint8_t *l_559 = &g_560;
                int32_t l_572 = 0x9990502BL;
                int32_t l_577 = 0xC0EA4C4FL;
                int32_t l_578 = 0x73685E80L;
                int32_t l_579 = 0xA3210717L;
                int32_t l_582 = 0x835E6036L;
                int32_t l_583 = 0xC4113232L;
                int32_t l_585 = 1L;
                int32_t l_587 = (-1L);
                int32_t l_588 = (-1L);
                int32_t l_590[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_590[i] = 0x83C09A7AL;
                l_555--;
                g_561[7] = (*g_74);
                for (l_538 = 0; (l_538 == 44); l_538 = safe_add_func_int64_t_s_s(l_538, 5))
                {
                    uint32_t l_565 = 0x7F809B3BL;
                    int32_t *l_567 = &g_153[0];
                    int32_t l_574 = 4L;
                    int32_t l_575 = 0x19BC83F0L;
                    int32_t l_576 = (-4L);
                    int32_t l_581 = (-1L);
                    int32_t l_584 = 0L;
                    int32_t l_586 = 2L;
                    int32_t l_589 = 0x6A8B8DCCL;
                    if (func_61((0x57L && p_40), &g_153[0], &g_460, func_61(g_460, p_41, l_564, l_565)))
                    {
                        int32_t *l_568 = &g_153[0];
                        int32_t *l_569 = &g_153[0];
                        int32_t *l_570 = &l_515[1];
                        int32_t *l_571 = &l_432[3];
                        int32_t *l_573[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_573[i] = (void*)0;
                        if ((*l_58))
                            break;
                        l_566 = (*p_42);
                        l_567 = &l_514;

                        ((l_567 == &l_514) ? (void) (0) : __assert_fail ("l_567 == &l_514", "16.c", 1581, __PRETTY_FUNCTION__));
                        ++g_591;
                    }
                    else
                    {
                        if ((*p_42))
                            break;
                    }

                    (((l_567 >= &g_153[0] && l_567 <= &g_153[0]) || l_567 == &l_514) ? (void) (0) : __assert_fail ("(l_567 >= &g_153[0] && l_567 <= &g_153[0]) || l_567 == &l_514", "16.c", 1590, __PRETTY_FUNCTION__));
                }
            }


            return &g_3;


        }
        for (g_98 = (-23); (g_98 > 9); g_98 = safe_add_func_int16_t_s_s(g_98, 9))
        {
            const uint32_t l_599 = 0x431EB5B9L;
            int32_t l_631 = 0L;
            int32_t *l_632[9];
            int i;
            for (i = 0; i < 9; i++)
                l_632[i] = &l_432[3];
            for (g_494 = 0; (g_494 <= 3); g_494 += 1)
            {
                int16_t *l_598[3];
                uint8_t * volatile *l_603 = &g_601;
                uint8_t * volatile **l_602 = &l_603;
                int32_t l_604 = (-4L);
                int i;
                for (i = 0; i < 3; i++)
                    l_598[i] = &g_132;
                (*l_602) = (((0xD7BBL && l_432[g_494]) || ((safe_rshift_func_int16_t_s_u((l_515[2] = p_39), 4)) == (l_599 == (*g_327)))) , g_600);
                p_42 = ((l_604 ^ g_90) , (void*)0);

                ((p_42 == 0) ? (void) (0) : __assert_fail ("p_42 == 0", "16.c", 1619, __PRETTY_FUNCTION__));
            }
            if ((*g_327))
                continue;
            for (g_494 = 0; (g_494 != 57); g_494 = safe_add_func_uint64_t_u_u(g_494, 5))
            {
                int32_t *l_620 = &l_515[3];
                int8_t *l_624 = &g_218;
                for (g_218 = 7; (g_218 >= 0); g_218 -= 1)
                {
                    int16_t *l_613[5][8][6] = {{{&g_396,(void*)0,&g_396,&g_396,&g_396,&g_396},{&l_329,&l_493,&l_493,&l_329,&g_132,&l_50},{&g_132,&l_50,&l_329,(void*)0,(void*)0,&l_329},{&g_132,&g_396,(void*)0,&l_329,(void*)0,&l_329},{&g_396,&l_50,&g_396,&g_396,&g_132,&g_396},{&g_396,&l_493,&g_132,&g_132,&l_50,(void*)0},{&g_396,&g_396,&l_329,(void*)0,&l_329,(void*)0},{&l_493,&g_396,(void*)0,&g_396,&g_396,(void*)0}},{{&g_132,&l_50,&l_329,&l_329,&g_396,(void*)0},{&g_396,&g_396,&g_132,&g_132,&g_396,&g_396},{(void*)0,&g_396,&l_329,&l_329,&l_50,&g_132},{(void*)0,&g_396,&g_396,(void*)0,&g_396,&l_493},{(void*)0,&l_329,(void*)0,&l_329,&g_396,&g_396},{(void*)0,&l_50,&g_132,&g_132,&g_132,&l_50},{&g_396,&g_132,&l_329,&l_329,&g_396,&g_396},{&g_132,&l_329,&g_396,&g_396,&l_50,&g_132}},{{&l_493,&l_329,&g_396,(void*)0,&g_396,(void*)0},{&g_396,&g_132,(void*)0,&g_132,&g_132,(void*)0},{&l_50,&l_50,&g_396,&l_329,&g_396,&l_50},{&g_396,&l_329,&l_50,&g_396,&g_396,&g_396},{&g_132,&g_396,&l_50,&g_396,&l_50,&l_50},{(void*)0,&l_50,&l_329,&l_329,&g_396,&l_329},{&l_329,&g_396,&l_329,&l_329,&l_50,&g_396},{&l_493,&g_396,&l_50,&l_50,&l_329,(void*)0}},{{&l_329,&g_132,&g_132,&l_50,&l_329,&l_329},{&l_493,&g_132,&g_132,&l_329,&g_396,&g_396},{&l_329,&l_329,&l_329,&l_329,&g_396,&g_396},{&g_396,&g_396,&l_329,&l_50,&g_396,&g_396},{(void*)0,&g_396,&g_132,&g_132,&g_396,(void*)0},{&l_329,&g_396,&l_50,&g_132,&g_396,&l_329},{&g_396,&l_329,(void*)0,&l_329,&g_396,(void*)0},{&g_396,&g_132,&g_396,&l_329,&l_329,&g_132}},{{&g_396,&g_132,&l_329,&g_132,&l_329,&g_132},{(void*)0,&g_396,&g_396,&l_50,&l_50,(void*)0},{&l_329,&g_396,(void*)0,(void*)0,&g_396,&l_329},{(void*)0,&l_50,&l_50,&g_396,&g_396,(void*)0},{&g_132,&l_329,&g_132,&l_329,&g_132,&g_396},{&g_132,&g_132,&g_396,(void*)0,(void*)0,&l_329},{&g_396,&g_396,(void*)0,&g_396,(void*)0,&g_396},{&l_493,(void*)0,&l_329,&g_396,&l_50,&l_493}}};
                    uint64_t *l_618 = (void*)0;
                    uint64_t *l_619 = &g_395;
                    uint16_t *l_623 = &g_137;
                    uint16_t *l_629 = &g_630;
                    int i, j, k;
                    p_42 = p_41;

                    ((p_42 == &g_3) ? (void) (0) : __assert_fail ("p_42 == &g_3", "16.c", 1637, __PRETTY_FUNCTION__));
                    (*l_620) = g_148[g_218];
                    l_631 &= (safe_div_func_int16_t_s_s((p_39 , (((*l_623) = (+l_514)) == 0x3B68L)), (((*l_629) = (((g_591 < (l_624 == l_624)) || ((safe_rshift_func_uint8_t_u_s((p_39 && (safe_lshift_func_uint8_t_u_u((l_523 = ((((*l_619) = (g_144 ^= func_78(g_148[g_218], (p_40 ^ g_507), p_39, &l_346))) < 0xBBEE78590E66F689LL) || p_40)), 7))), 0)) , 1L)) > p_39)) && 0xD3A1L)));
                }
                (*g_327) = 1L;
            }
            --l_633[8][4];
        }

        ((p_42 == 0 || p_42 == &g_3) ? (void) (0) : __assert_fail ("p_42 == 0 || p_42 == &g_3", "16.c", 1646, __PRETTY_FUNCTION__));
    }

    ((p_42 == 0 || p_42 == &g_3) ? (void) (0) : __assert_fail ("p_42 == 0 || p_42 == &g_3", "16.c", 1649, __PRETTY_FUNCTION__));
    ((g_75 == 0 || g_75 == &g_90 || g_75 == &g_3) ? (void) (0) : __assert_fail ("g_75 == 0 || g_75 == &g_90 || g_75 == &g_3", "16.c", 1650, __PRETTY_FUNCTION__));

    (*g_327) ^= (*p_38);
    l_638--;
    return p_41;


}







static uint32_t func_45(const int32_t * p_46, const int32_t * p_47, uint8_t p_48, const int32_t * p_49)
{
    (*g_74) = (void*)0;

    ((g_75 == 0) ? (void) (0) : __assert_fail ("g_75 == 0", "16.c", 1669, __PRETTY_FUNCTION__));
    return p_48;
}







static int32_t * func_51(int32_t p_52, int32_t p_53, int8_t p_54, uint64_t p_55)
{
    uint32_t l_334 = 0x57469ACDL;
    uint64_t *l_337[4][10][6] = {{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,(void*)0,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,(void*)0,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,(void*)0,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}},{{&g_144,&g_144,(void*)0,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,(void*)0,&g_144,(void*)0,&g_144},{(void*)0,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,(void*)0,(void*)0,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,&g_144,(void*)0,&g_144}},{{&g_144,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,(void*)0,&g_144,(void*)0,&g_144},{(void*)0,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,(void*)0,(void*)0,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,&g_144,(void*)0,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}},{{(void*)0,&g_144,&g_144,&g_144,&g_144,(void*)0},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,(void*)0},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,(void*)0},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,&g_144,&g_144,&g_144,(void*)0}}};
    uint64_t *l_339 = &g_144;
    uint64_t **l_338 = &l_339;
    int32_t *l_340 = &g_90;
    int i, j, k;
    (*g_327) &= (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(l_334, l_334)) , 0x9096216EL), ((**g_74) <= ((+(safe_add_func_int8_t_s_s(p_54, (((((p_55 = p_52) != (0UL && ((l_337[0][8][2] == ((*l_338) = &g_144)) == l_334))) >= 0x44907AA9L) && 0x4827DB0E1B3107ACLL) <= 0x60L)))) , p_53))));
    return l_340;


}







static uint32_t func_61(int64_t p_62, int32_t * p_63, int32_t * p_64, int64_t p_65)
{
    int32_t l_68[10] = {0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L,0xD4463028L};
    int32_t *l_73 = &g_3;
    int32_t **l_72 = &l_73;
    int32_t l_95[3];
    uint32_t l_307[2];
    int16_t l_324 = 0x4E84L;
    int32_t *l_328[9][3][3] = {{{&g_90,&g_153[0],&l_95[1]},{(void*)0,&g_90,&l_95[0]},{&g_3,&l_95[1],&g_90}},{{&l_95[1],&g_153[0],&g_90},{&l_95[1],&l_95[1],&g_90},{&g_3,&g_90,&g_153[0]}},{{&g_90,&l_95[2],&g_3},{&g_90,&l_95[2],&l_95[1]},{&g_3,&g_153[0],&g_3}},{{&g_90,(void*)0,&l_95[0]},{&g_90,&g_90,&g_153[0]},{&l_95[2],&l_95[1],&g_153[0]}},{{(void*)0,&g_153[0],&g_153[0]},{&l_95[2],(void*)0,&g_90},{&g_90,(void*)0,&l_95[1]}},{{&g_90,&g_90,&l_95[2]},{&g_3,&g_153[0],&g_90},{&g_90,&g_90,(void*)0}},{{&g_153[0],(void*)0,&l_95[1]},{&l_95[1],(void*)0,&g_153[0]},{&l_95[1],&g_153[0],(void*)0}},{{&g_153[0],&l_95[1],&g_153[0]},{&g_153[0],&g_90,&l_95[1]},{&g_3,(void*)0,(void*)0}},{{&g_153[0],&g_153[0],&g_90},{&g_153[0],&l_95[2],&l_95[2]},{&g_153[0],&l_95[2],&l_95[1]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_95[i] = 0x603386B4L;
    for (i = 0; i < 2; i++)
        l_307[i] = 18446744073709551615UL;
    for (p_65 = 9; (p_65 >= 0); p_65 -= 1)
    {
        int32_t *l_71 = &g_3;
        int32_t **l_70 = &l_71;
        int32_t ***l_69 = &l_70;
        uint32_t *l_83[9][4][5] = {{{(void*)0,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,(void*)0,&g_84,&g_84,(void*)0}},{{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,(void*)0},{(void*)0,&g_84,(void*)0,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,(void*)0,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,(void*)0,(void*)0,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,(void*)0,(void*)0,&g_84,&g_84},{&g_84,(void*)0,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,&g_84,&g_84,(void*)0,&g_84}},{{&g_84,&g_84,(void*)0,(void*)0,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,(void*)0,(void*)0,&g_84,&g_84}},{{&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,(void*)0,&g_84,&g_84,(void*)0},{&g_84,&g_84,&g_84,&g_84,(void*)0}},{{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,(void*)0,&g_84,&g_84,(void*)0}}};
        int32_t *l_85 = &g_3;
        int32_t *l_89 = &g_90;
        int32_t *l_91 = (void*)0;
        int32_t *l_92 = &g_90;
        int32_t *l_93 = &g_90;
        int32_t *l_94[3][2][10] = {{{(void*)0,(void*)0,(void*)0,&g_90,&g_90,&g_90,(void*)0,(void*)0,(void*)0,(void*)0},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0,&g_90,&g_90,&g_90}},{{(void*)0,(void*)0,(void*)0,&g_90,(void*)0,(void*)0,&g_90,(void*)0,(void*)0,(void*)0},{(void*)0,&g_90,(void*)0,&g_90,(void*)0,&g_90,(void*)0,(void*)0,&g_90,(void*)0}},{{&g_90,(void*)0,(void*)0,&g_90,&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,(void*)0,&g_90,&g_90,(void*)0,&g_90,&g_90,&g_90,(void*)0}}};
        uint16_t l_105 = 0xBA6FL;
        uint32_t l_282 = 0xE0EACEF5L;
        int16_t l_322 = 5L;
        int i, j, k;
        l_72 = ((*l_69) = &p_64);

        ((l_72 == &p_64) ? (void) (0) : __assert_fail ("l_72 == &p_64", "16.c", 1731, __PRETTY_FUNCTION__));
        ((l_70 == &p_64) ? (void) (0) : __assert_fail ("l_70 == &p_64", "16.c", 1732, __PRETTY_FUNCTION__));
        g_87 ^= ((g_74 == &g_75) <= (safe_add_func_uint32_t_u_u(func_78(l_68[p_65], l_68[p_65], (g_84 = 0x9D0E131AL), l_85), (*p_63))));
        g_98++;
        for (g_90 = (-24); (g_90 <= 12); g_90 = safe_add_func_uint8_t_u_u(g_90, 3))
        {
            int32_t **l_104 = &l_71;
            uint64_t l_280 = 5UL;
            uint64_t l_286 = 0xB839793986B405DDLL;
            int32_t *l_287 = (void*)0;
            int32_t l_294[7][7] = {{8L,0x62F8696AL,8L,8L,0x62F8696AL,8L,8L},{0x62F8696AL,0x62F8696AL,(-1L),0x62F8696AL,0x62F8696AL,(-1L),0x62F8696AL},{0x62F8696AL,8L,8L,0x62F8696AL,8L,8L,0x62F8696AL},{8L,0x62F8696AL,8L,8L,0x62F8696AL,8L,8L},{0x62F8696AL,0x62F8696AL,(-1L),0x62F8696AL,0x62F8696AL,(-1L),0x62F8696AL},{0x62F8696AL,8L,8L,0x62F8696AL,8L,8L,0x62F8696AL},{8L,0x62F8696AL,8L,8L,0x62F8696AL,8L,8L}};
            int i, j;
            l_105 = ((l_104 = g_103) != (void*)0);

            ((l_104 == 0) ? (void) (0) : __assert_fail ("l_104 == 0", "16.c", 1745, __PRETTY_FUNCTION__));
            for (g_87 = 1; (g_87 >= 0); g_87 -= 1)
            {
                uint64_t *l_281[4][9][5] = {{{&g_144,(void*)0,&g_144,&l_280,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&l_280,&g_144,(void*)0},{&l_280,&g_144,&g_144,&g_144,&g_144},{(void*)0,&g_144,(void*)0,(void*)0,&g_144},{&g_144,&g_144,(void*)0,&g_144,&g_144},{&l_280,(void*)0,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&l_280,&g_144},{&g_144,(void*)0,&g_144,&g_144,&l_280}},{{&g_144,&g_144,&g_144,&g_144,&g_144},{(void*)0,&l_280,&g_144,&l_280,(void*)0},{&g_144,&l_280,(void*)0,&g_144,&g_144},{&g_144,&l_280,&g_144,&l_280,(void*)0},{&g_144,&g_144,(void*)0,&g_144,&g_144},{(void*)0,&l_280,&l_280,(void*)0,&l_280},{(void*)0,(void*)0,&g_144,&l_280,&g_144},{&g_144,&g_144,&g_144,&l_280,&g_144},{&g_144,(void*)0,(void*)0,&g_144,&l_280}},{{&g_144,&g_144,&g_144,&g_144,&l_280},{(void*)0,(void*)0,&l_280,&l_280,(void*)0},{&g_144,&l_280,&l_280,&g_144,&g_144},{&g_144,&g_144,&g_144,(void*)0,&l_280},{&g_144,&l_280,(void*)0,&g_144,&g_144},{&l_280,&l_280,&g_144,(void*)0,&l_280},{(void*)0,&l_280,&g_144,&g_144,&g_144},{&g_144,(void*)0,&l_280,&l_280,(void*)0},{&g_144,&g_144,&g_144,(void*)0,&l_280}},{{&g_144,(void*)0,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&l_280,(void*)0},{&g_144,&l_280,&l_280,&g_144,&l_280},{&g_144,&l_280,&g_144,&g_144,&g_144},{&g_144,&l_280,&g_144,&l_280,&g_144},{&g_144,&l_280,&l_280,(void*)0,&l_280},{(void*)0,&g_144,&g_144,&g_144,&g_144},{&g_144,(void*)0,&l_280,&l_280,(void*)0},{(void*)0,&g_144,&g_144,(void*)0,&l_280}}};
                int32_t l_283 = (-3L);
                int8_t *l_323 = &g_218;
                int32_t **l_326[8][10] = {{&l_94[0][0][3],(void*)0,&l_94[g_87][g_87][p_65],&l_73,&l_73,&l_92,&l_94[0][0][3],&l_94[0][0][3],&l_92,&l_73},{(void*)0,&l_287,&l_287,(void*)0,&l_91,&l_73,&l_73,&l_73,&l_287,&l_94[0][0][3]},{&l_91,&l_94[0][0][3],&l_287,&l_71,&l_92,&l_287,&l_287,&l_73,&l_287,&l_287},{&l_73,(void*)0,&l_94[g_87][g_87][p_65],(void*)0,&l_73,&l_71,&l_94[g_87][g_87][p_65],&l_73,&l_92,&l_92},{&l_73,&l_71,&l_287,&l_94[0][0][3],&l_91,&l_287,&l_94[g_87][g_87][p_65],&l_71,&l_71,&l_94[g_87][g_87][p_65]},{&l_89,&l_94[0][0][3],&l_73,&l_73,&l_94[0][0][3],&l_89,&l_287,(void*)0,&l_287,&l_73},{(void*)0,&l_92,&l_92,&l_73,&l_94[g_87][g_87][p_65],&l_71,&l_73,(void*)0,&l_94[g_87][g_87][p_65],(void*)0},{(void*)0,&l_89,&l_71,&l_94[0][0][3],&l_71,&l_89,(void*)0,&l_73,&l_89,&l_92}};
                int i, j, k;
                for (g_86 = 0; g_86 < 10; g_86 += 1)
                {
                    l_68[g_86] = 0x3DE64C94L;
                }
            }
        }
    }

    ((l_72 == &p_64 || l_72 == &l_73) ? (void) (0) : __assert_fail ("l_72 == &p_64 || l_72 == &l_73", "16.c", 1761, __PRETTY_FUNCTION__));
    return p_65;
}







static uint32_t func_78(uint64_t p_79, uint64_t p_80, uint32_t p_81, int32_t * p_82)
{
    g_86 |= 0L;
    return g_86;
}







static int32_t * func_106(uint64_t p_107, uint64_t p_108, int32_t p_109, int32_t * p_110)
{
    const int32_t **l_122 = (void*)0;
    const int32_t ** const *l_121 = &l_122;
    const int32_t ** const **l_123 = (void*)0;
    const int32_t ** const **l_124 = (void*)0;
    const int32_t ** const *l_126 = (void*)0;
    const int32_t ** const **l_125 = &l_126;
    int16_t *l_131 = &g_132;
    int16_t l_133[6];
    int32_t l_134 = 0x7461B67BL;
    int32_t l_149 = 5L;
    int32_t l_151 = (-10L);
    int64_t l_154[8] = {0xEC4CFB6E6AAC493ELL,(-7L),0xEC4CFB6E6AAC493ELL,(-7L),0xEC4CFB6E6AAC493ELL,(-7L),0xEC4CFB6E6AAC493ELL,(-7L)};
    int32_t l_158[10] = {(-4L),1L,1L,(-4L),1L,1L,(-4L),1L,1L,(-4L)};
    int32_t l_190 = 0x7FF8EE6FL;
    uint8_t l_198[10][1][10];
    int8_t l_227 = 0x47L;
    int16_t l_234[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    int64_t l_256 = 1L;
    int32_t *l_259 = &g_153[0];
    int32_t *l_260 = &l_158[7];
    int32_t *l_261 = &l_149;
    int32_t *l_262 = &l_151;
    int32_t *l_263 = (void*)0;
    int32_t *l_264 = &g_153[0];
    int32_t *l_265 = &l_158[1];
    int32_t *l_266 = (void*)0;
    int32_t *l_267 = &l_151;
    int32_t *l_268 = &l_151;
    int32_t *l_269 = &l_134;
    int32_t *l_270[8][1] = {{&g_153[0]},{&l_158[0]},{&g_153[0]},{&l_158[0]},{&g_153[0]},{&l_158[0]},{&g_153[0]},{&l_158[0]}};
    uint32_t l_271 = 0xEBA5CBCEL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_133[i] = 0x6FB9L;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
                l_198[i][j][k] = 0xB1L;
        }
    }
lbl_246:
    if ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((*l_131) = (p_107 , ((g_98 &= 0xFCA77B68L) , ((g_3 != 0xDFF1806AL) ^ func_78((safe_add_func_uint32_t_u_u((((*l_125) = l_121) != &g_74), (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_86, (~((((p_107 , p_108) ^ p_108) | p_108) , 0x93L)))), p_109)))), g_87, g_3, &g_90))))), p_108)), g_90)) < 3L), 13)))
    {
        int32_t l_136 = 0x56B39C3AL;
        int32_t ***l_181 = &g_103;
        int32_t ****l_180[2][2];
        int32_t *****l_179 = &l_180[0][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_180[i][j] = &l_181;
        }
        for (g_84 = 0; (g_84 <= 5); g_84 += 1)
        {
            uint32_t l_159 = 1UL;
            int32_t l_162 = 5L;
            int32_t ***l_170 = &g_103;
            int32_t ****l_169[3];
            uint32_t l_171 = 0x78386D6AL;
            const uint8_t l_240 = 0xC5L;
            int i;
            for (i = 0; i < 3; i++)
                l_169[i] = &l_170;
            for (g_98 = 1; (g_98 <= 5); g_98 += 1)
            {
                uint8_t l_147 = 0xDCL;
                int32_t l_152 = 4L;
                int32_t l_156 = (-1L);
                int32_t l_157 = 0x8BC76B67L;
                int32_t ****l_165 = (void*)0;
                int32_t ***l_168 = &g_103;
                int32_t ****l_167 = &l_168;
                int32_t *****l_166[9][10] = {{&l_165,&l_167,&l_167,&l_165,&l_167,&l_167,&l_167,&l_165,&l_167,&l_167},{&l_165,&l_167,&l_167,&l_167,&l_167,&l_165,&l_167,&l_167,&l_167,&l_167},{&l_167,(void*)0,&l_167,&l_165,&l_167,&l_167,(void*)0,&l_165,&l_167,&l_167},{&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_165,(void*)0},{&l_165,&l_165,&l_165,&l_167,&l_167,&l_167,&l_167,(void*)0,&l_167,&l_167},{&l_167,&l_167,&l_165,&l_167,&l_167,(void*)0,&l_165,&l_167,&l_167,&l_167},{&l_165,&l_167,&l_167,(void*)0,&l_165,&l_167,&l_167,&l_165,(void*)0,&l_167},{(void*)0,(void*)0,&l_165,&l_167,&l_167,&l_167,&l_165,&l_165,&l_165,&l_167},{&l_165,&l_167,&l_165,&l_167,&l_167,&l_167,&l_165,&l_167,&l_165,(void*)0}};
                int i, j;
                for (p_109 = 0; (p_109 <= 5); p_109 += 1)
                {
                    int32_t *l_135[10] = {&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134};
                    int i;
                    --g_137;
                    l_134 = (safe_rshift_func_uint8_t_u_s((&l_133[g_98] != (g_142 = &g_132)), 2));

                    ((g_142 == &g_132) ? (void) (0) : __assert_fail ("g_142 == &g_132", "16.c", 1869, __PRETTY_FUNCTION__));
                    for (l_134 = 1; (l_134 <= 5); l_134 += 1)
                    {
                        uint64_t *l_143 = &g_144;
                        int32_t l_150 = (-1L);
                        int32_t l_155[9][5][4] = {{{0x939D135AL,0xFF3CA177L,(-5L),(-9L)},{0xC513462EL,9L,1L,8L},{0L,0xEE986691L,0x9AE2E44FL,1L},{3L,1L,7L,0x4BE705B1L},{(-1L),0xAD7A1A6EL,(-4L),0xF05BDE44L}},{{0xFCCBCFC5L,(-1L),0L,0L},{9L,8L,1L,0L},{(-1L),0x4166F292L,(-1L),0xA71AB258L},{3L,0xBB8F8D56L,3L,7L},{7L,(-5L),0x2621DCD0L,8L}},{{0x7FE7CF91L,(-1L),0x13A33BA3L,0L},{1L,1L,0xAD7A1A6EL,(-1L)},{(-9L),4L,(-1L),7L},{1L,(-6L),0xFF3CA177L,(-6L)},{0x13A33BA3L,0xA64C687DL,0x1C5E8018L,0x2435984AL}},{{0xFCCBCFC5L,0xC513462EL,(-6L),0L},{0x85CC4140L,1L,(-2L),0xBB8F8D56L},{0x85CC4140L,0L,(-6L),1L},{0xFCCBCFC5L,0xBB8F8D56L,0x1C5E8018L,0L},{0x13A33BA3L,8L,0xFF3CA177L,0x1C5E8018L}},{{1L,3L,(-1L),0L},{(-9L),0xEE986691L,0xAD7A1A6EL,7L},{1L,0L,0x13A33BA3L,(-2L)},{0x7FE7CF91L,0x13A33BA3L,0x2621DCD0L,0xF311E796L},{7L,1L,3L,0x2435984AL}},{{3L,1L,(-1L),(-4L)},{(-1L),0x226CAE36L,1L,(-6L)},{9L,4L,0L,(-1L)},{0xFCCBCFC5L,0L,0L,1L},{0x4BDB83C0L,0xAE9534DBL,0xA71AB258L,0xA71AB258L}},{{0x9AE2E44FL,0x9AE2E44FL,0xFCCBCFC5L,(-2L)},{0x4166F292L,0L,(-9L),(-1L)},{4L,1L,0L,(-9L)},{0x4BE705B1L,1L,1L,(-1L)},{1L,0L,0x85CC4140L,(-2L)}},{{0xEE986691L,0x9AE2E44FL,1L,0xA71AB258L},{1L,0xAE9534DBL,4L,1L},{0xBB8F8D56L,(-1L),0x3317BB98L,7L},{2L,0x7FE7CF91L,1L,0xFCCBCFC5L},{0x3256DFF3L,0x978726BCL,7L,0L}},{{0xA64C687DL,0x68AEAC46L,0x4BDB83C0L,1L},{0x4166F292L,0x2621DCD0L,0L,1L},{(-9L),1L,0xC513462EL,0L},{0x9AE2E44FL,0x4BDB83C0L,0L,(-1L)},{3L,0L,1L,9L}}};
                        int i, j, k;
                        g_148[6] |= (&l_133[g_98] == (func_78(((*l_143)++), g_137, (l_147 ^ p_107), &p_109) , &l_133[g_98]));
                        --l_159;
                        if ((*g_75))
                            break;
                        l_162 = 0x23DBE8D7L;
                    }
                }
                if ((safe_add_func_int8_t_s_s((p_109 , (0x147FA4D0L ^ 0UL)), ((l_169[0] = l_165) == (l_171 , &l_170)))))
                {
                    for (p_109 = 0; (p_109 <= 5); p_109 += 1)
                    {
                        l_134 = (*p_110);
                    }
                }
                else
                {
                    (*g_74) = &l_136;

                    ((g_75 == &l_136) ? (void) (0) : __assert_fail ("g_75 == &l_136", "16.c", 1894, __PRETTY_FUNCTION__));
                    g_74 = &g_75;
                }
                for (l_136 = 5; (l_136 >= 0); l_136 -= 1)
                {
                    uint32_t l_174 = 0x8CF68AE1L;
                    int32_t l_191 = (-1L);
                    int32_t l_193 = (-1L);
                    int32_t l_195 = (-9L);
                    int32_t l_197[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_197[i] = 0xD6C705CDL;
                    if (((safe_sub_func_int16_t_s_s(l_174, 0xAE72L)) , ((&g_144 != &g_144) && ((~p_107) <= l_174))))
                    {
                        int32_t l_182 = 0x2DDD70F1L;
                        int64_t *l_183 = &g_148[6];
                        uint8_t *l_187 = &l_147;
                        g_153[0] = ((((+g_86) != p_107) == (safe_div_func_int64_t_s_s(((void*)0 != l_179), ((*l_183) &= l_182)))) <= ((void*)0 != &g_103));
                        l_190 = (!(safe_add_func_uint8_t_u_u(((*l_187)--), p_107)));
                        return &g_90;



                    }
                    else
                    {
                        int16_t l_192[3][2][9] = {{{0x7CE1L,9L,0xD089L,0x17BCL,0x17BCL,0xD089L,9L,0x7CE1L,0xE1DAL},{(-5L),(-1L),0xCFC6L,(-4L),7L,7L,(-4L),0xCFC6L,(-1L)}},{{0x17BCL,0x7CE1L,(-3L),0xE1DAL,(-1L),0L,0L,(-1L),0xE1DAL},{0xBCBEL,0x2D4EL,0xF1B1L,(-4L),0x515CL,0x03C5L,(-1L),(-1L),0x03C5L}},{{0xE1DAL,9L,(-1L),9L,0xE1DAL,0L,(-1L),0xFDDEL,0xFDDEL},{7L,0xCFC6L,0x03C5L,(-4L),0x03C5L,0xCFC6L,7L,0x515CL,0xBCBEL}}};
                        int32_t l_194 = 0L;
                        int32_t l_196[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_196[i] = (-1L);
                        l_198[1][0][9]--;
                        return &g_153[0];



                    }
                }
                if ((*p_110))
                    continue;
            }

            ((g_75 == &l_136 || g_75 == &g_3 || g_75 == &l_151) ? (void) (0) : __assert_fail ("g_75 == &l_136 || g_75 == &g_3 || g_75 == &l_151", "16.c", 1938, __PRETTY_FUNCTION__));

            for (l_134 = 5; (l_134 >= 1); l_134 -= 1)
            {
                int32_t *l_214 = (void*)0;
                int32_t l_222[8][5] = {{0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L},{0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL},{0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L},{0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL},{0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L},{0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL},{0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L,0x2AD14520L},{0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL,0x10FD701AL}};
                int32_t l_241 = 0xD622A883L;
                int i, j;
                for (g_98 = 0; (g_98 <= 5); g_98 += 1)
                {
                    uint8_t l_201 = 1UL;
                    uint64_t *l_208 = &g_144;
                    uint8_t *l_213 = &l_198[1][0][9];
                    int8_t *l_215 = &g_216;
                    int8_t *l_217[9] = {&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218};
                    int32_t l_219 = (-5L);
                    int32_t l_220 = 9L;
                    int32_t l_221 = (-1L);
                    int i;
                    l_201 ^= ((void*)0 == &l_123);
                    if (l_133[l_134])
                        break;
                    l_221 ^= (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_153[0] >= (+(l_220 |= (g_218 &= (((*l_208) = (safe_sub_func_uint32_t_u_u((g_97 != l_133[l_134]), 0x5A123660L))) , ((p_108 , (safe_lshift_func_int8_t_s_u((l_149 &= ((l_219 = ((*l_215) = (safe_sub_func_uint64_t_u_u(func_78(l_201, g_90, (func_78(p_107, (((*l_213) = l_201) | p_108), p_108, l_214) >= g_3), &l_158[7]), p_108)))) , g_84)), p_109))) > (**g_74))))))), p_109)), g_153[0]));
                }
                l_222[3][3] = func_78(g_148[5], g_88, p_107, &g_3);
                for (l_151 = (-1); (l_151 > 18); l_151++)
                {
                    const int32_t l_239 = (-7L);
                    l_222[3][3] = (p_109 == (~(safe_sub_func_uint64_t_u_u((0x3FL | l_227), p_109))));
                    l_222[5][4] &= (g_153[0] < (safe_sub_func_uint64_t_u_u((g_97 >= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_234[1] != (safe_rshift_func_uint16_t_u_u((g_186 > (safe_mul_func_uint16_t_u_u(0x0E51L, ((g_87 != (&l_126 == &l_126)) >= ((l_239 , p_108) , l_239))))), 11))), l_240)), l_241))), 1UL)));
                }
            }
            (*g_74) = (p_110 = &l_151);

            ((g_75 == &l_151) ? (void) (0) : __assert_fail ("g_75 == &l_151", "16.c", 1972, __PRETTY_FUNCTION__));
            ((p_110 == &l_151) ? (void) (0) : __assert_fail ("p_110 == &l_151", "16.c", 1973, __PRETTY_FUNCTION__));
            (*p_110) = 0L;
        }
    }
    else
    {
        int32_t *l_242 = (void*)0;
        (*g_74) = &p_109;

        ((g_75 == &p_109) ? (void) (0) : __assert_fail ("g_75 == &p_109", "16.c", 1982, __PRETTY_FUNCTION__));
        return l_242;



    }

    ((l_126 == &l_122) ? (void) (0) : __assert_fail ("l_126 == &l_122", "16.c", 1989, __PRETTY_FUNCTION__));
    for (p_108 = 0; (p_108 < 1); p_108 = safe_add_func_uint8_t_u_u(p_108, 2))
    {
        int32_t *l_247 = &l_151;
        int8_t *l_249[9];
        uint32_t l_252 = 0xA95A07C6L;
        int32_t l_257 = (-8L);
        int32_t *l_258 = &l_134;
        int i;
        for (i = 0; i < 9; i++)
            l_249[i] = &g_218;
        if ((*p_110))
        {
            int32_t *l_245 = &l_149;
            (*l_245) |= 1L;
        }
        else
        {
            if (p_109)
                goto lbl_246;
        }
        (*l_258) ^= ((((l_247 != (g_96 , (void*)0)) && (safe_unary_minus_func_int8_t_s(((l_158[0] = (-1L)) <= ((((func_78((safe_mod_func_uint32_t_u_u(func_78(((l_252 == ((*l_247) < ((safe_unary_minus_func_int32_t_s((*p_110))) , (safe_sub_func_uint16_t_u_u(0x3652L, p_107))))) , g_153[0]), g_144, l_256, &g_153[0]), (**g_74))), p_107, l_257, l_247) >= p_107) < g_3) | (**g_74)) > p_109))))) != p_107) , (*g_75));
    }
    ++l_271;
    return &g_153[0];



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_644[i], "g_644[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1078[i], "g_1078[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1449, "g_1449", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1627, "g_1627", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
