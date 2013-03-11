#!/bin/bash
##
## Copyright (c) 2013 The University of Utah
## All rights reserved.
##
## This is a predicate script for C-Reduce, for reducing programs that reveal
## "volatile defects" in C compilers.
##
## This script judges that the file named by its argument is interesting if:
##
##   + it appears to be a valid, strictly conforming C program
##   + the program compiles with both "gcc -O0" and "gcc -O2"
##   + the output of the two compiled programs is the same
##   + the "volatile access checksums" of the two compiled programs are
##     different
##
## XXX --- As reductions happen, what happens to `vol_addr.txt'?
## XXX --- Does creduce handle the vol_addr.txt file at all?
## XXX --- Check that the checksum output is not reduced away?
## XXX --- Clean up temporary files.

###############################################################################

CLANG=/local/randtest/src/llvm-install/bin/clang

CPPFLAGS="-DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0 -I/local/randtest/src/csmith/runtime"

###############################################################################

filename="$1"

rm -f out*.txt

ulimit -t 1
ulimit -v 2000000

###############################################################################

## If Clang says the program is broken...
if 
  $CLANG -pedantic -Wall -O0 -c $CPPFLAGS "$filename" > out.txt 2>&1 &&\
  ! grep 'incompatible redeclaration' out.txt &&\
  ! grep 'ordered comparison between pointer' out.txt &&\
  ! grep 'eliding middle term' out.txt &&\
  ! grep 'end of non-void function' out.txt &&\
  ! grep 'invalid in C99' out.txt &&\
  ! grep 'specifies type' out.txt &&\
  ! grep 'should return a value' out.txt &&\
  ! grep 'too few argument' out.txt &&\
  ! grep 'too many argument' out.txt &&\
  ! grep "return type of 'main" out.txt &&\
  ! grep 'uninitialized' out.txt &&\
  ! grep 'incompatible pointer to' out.txt &&\
  ! grep 'incompatible integer to' out.txt &&\
  ! grep 'type specifier missing' out.txt
then
  true
else
  exit 1
fi

###############################################################################

## If GCC says that the program is broken...
if
  gcc -c -Wall -Wextra -O1 $CPPFLAGS "$filename" > outa.txt 2>&1 &&\
  ! grep uninitialized outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'no semicolon at end' outa.txt &&\
  ! grep 'incompatible pointer' outa.txt &&\
  ! grep 'cast from pointer to integer' outa.txt &&\
  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
  ! grep 'declaration does not declare anything' outa.txt &&\
  ! grep 'expects type' outa.txt &&\
  ! grep 'assumed to have one element' outa.txt &&\
  ! grep 'division by zero' outa.txt &&\
  ! grep 'pointer from integer' outa.txt &&\
  ! grep 'incompatible implicit' outa.txt &&\
  ! grep 'excess elements in struct initializer' outa.txt &&\
  ! grep 'comparison between pointer and integer' outa.txt
then
  true
else
  exit 1
fi

###############################################################################

## Compile and run the -O0 version, and get the output.

gcc-4.4 -O0 \
  -w $CPPFLAGS \
  "$filename" \
  -o gcc_O0_exe

$PIN_HOME/pin.sh \
  -injection child \
  -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so \
  -vol_input vol_addr.txt \
  -output_mode checksum \
  -- ./gcc_O0_exe \
  > gcc_O0_exe.out

grep ^checksum gcc_O0_exe.out > gcc_O0_exe.chk
grep ^vol_access_checksum gcc_O0_exe.out > gcc_O0_exe.vchk

## Compile and run the -O2 version, and get the output.

gcc-4.4 -O2 \
  -w $CPPFLAGS \
  "$filename" \
  -o gcc_O2_exe

$PIN_HOME/pin.sh \
  -injection child \
  -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so \
  -vol_input vol_addr.txt \
  -output_mode checksum \
  -- ./gcc_O2_exe \
  > gcc_O2_exe.out

grep ^checksum gcc_O2_exe.out > gcc_O2_exe.chk
grep ^vol_access_checksum gcc_O2_exe.out > gcc_O2_exe.vchk

## If the regular checksums differ, this mutant is bad.
cmp -s gcc_O0_exe.chk gcc_O2_exe.chk
if [ $? -ne 0 ]; then
  exit 1
fi

## If the volatile checksums are *not* different, this mutant is bad.
cmp -s gcc_O0_exe.vchk gcc_O2_exe.vchk
if [ $? -eq 0 ]; then
  exit 1
fi

###############################################################################

# echo "Program is good!"

exit 0

## End of file.
