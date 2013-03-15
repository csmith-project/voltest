#!/bin/bash

PIN_CMD="/scratch/chenyang/programs/pin-2.12-55942-gcc.4.4.7-linux/pin.sh -injection child -t /scratch/chenyang/programs/pin-2.12-55942-gcc.4.4.7-linux/source/tools/ManualExamples/obj-intel64/pinatrace.so -output_mode checksum"

rm -f out*.txt

if 
  clang -pedantic -Wall -O0 -c small.c  >out.txt 2>&1 &&\
  ! grep 'conversions than data arguments' out.txt &&\
  ! grep 'incompatible redeclaration' out.txt &&\
  ! grep 'ordered comparison between pointer' out.txt &&\
  ! grep 'eliding middle term' out.txt &&\
  ! grep 'end of non-void function' out.txt &&\
  ! grep 'invalid in C99' out.txt &&\
  ! grep 'specifies type' out.txt &&\
  ! grep 'should return a value' out.txt &&\
  ! grep 'uninitialized' out.txt &&\
  ! grep 'incompatible pointer to' out.txt &&\
  ! grep 'incompatible integer to' out.txt &&\
  ! grep 'type specifier missing' out.txt &&\
  gcc -Wall -Wextra -O2 small.c -o smallz >outa.txt 2>&1 &&\
  ! grep uninitialized outa.txt &&\
  ! grep 'without a cast' outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'null argument' outa.txt &&\
  ! grep 'return type defaults' outa.txt &&\
  ! grep 'useless type name in empty declaration' outa.txt &&\
  ! grep 'no semicolon at end' outa.txt &&\
  ! grep 'type defaults to' outa.txt &&\
  ! grep 'format' outa.txt &&\
  ! grep 'incompatible pointer' outa.txt &&\
  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
  ! grep 'declaration does not declare anything' outa.txt &&\
  ! grep 'expects type' outa.txt &&\
  ! grep 'pointer from integer' outa.txt &&\
  ! grep 'incompatible implicit' outa.txt &&\
  ! grep 'excess elements in struct initializer' outa.txt &&\
  ! grep 'comparison between pointer and integer' outa.txt &&\
  /scratch/chenyang/embedded_code_repo/yang/volatile_checker/volatile_checker --checker=volatile-address small.c > checker.out.txt 2>&1 &&\
   clang -O0  -w small.c -o small1 > cc_out1.txt 2>&1 &&\
  /scratch/chenyang/embedded_code_repo/yang/volatile_pintrace/gen_volatile_addr.pl --vars-file=checker.out.txt small1 > vol_addr_out1.txt 2>&1 &&\
  RunSafely.sh 3 1 /dev/null out1.txt ${PIN_CMD} -vol_input vol_addr_out1.txt -- ./small1 >/dev/null 2>&1 &&\
   clang -O1 small.c -o small2 > cc_out2.txt 2>&1 &&\
  /scratch/chenyang/embedded_code_repo/yang/volatile_pintrace/gen_volatile_addr.pl --vars-file=checker.out.txt small2 > vol_addr_out2.txt 2>&1 &&\
  RunSafely.sh 3 1 /dev/null out2.txt ${PIN_CMD} -vol_input vol_addr_out2.txt -- ./small2 >/dev/null 2>&1 &&\
  ! diff -I "Pin child" out1.txt out2.txt &&\
  cp small.c small-framac.c &&\
  perl -pi.bak -e 's/int main \(int argc, char\* argv\[\]\)/int argc; char **argv; int main (void)/' small-framac.c &&\
  RunSafely.sh 20 1 /dev/null out_framac.txt frama-c -cpp-command \"gcc -C -Dvolatile= -E -I.\" -val-signed-overflow-alarms -val -stop-at-first-alarm -no-val-show-progress -machdep x86_64 -obviously-terminates -precise-unions small-framac.c &&\
  ! egrep -i '(user error|assert)' out_framac.txt >/dev/null 2>&1
then
  exit 0
else
  exit 1
fi
