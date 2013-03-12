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

###############################################################################

## Information about the test setup: the compilers under test and the
## environment for compiling and validating test programs.

CCUT1="gcc-4.4 -O0"
CCUT2="gcc-4.4 -O2"

CPPFLAGS="-DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0 -I/local/randtest/src/csmith/runtime"

# PIN_HOME: inherit this from the environment.

###############################################################################

## Environment configuration.

CLANG=/local/randtest/src/llvm-install/bin/clang
CMP=cmp
GCC=gcc
GREP=grep
RM=rm

###############################################################################

## Options.

# If `quiet' is true, this script is silent when the mutant is found to be
# uninteresting --- i.e., uncompilable, sematically suspect, or without the
# behavior we're looking for.
quiet=1

# If `neat' is true, this script deletes the temporary files it creates.
neat=1

# If `debug' is true, this script prints debugging output.
debug=0

###############################################################################

## Parse and validate the command-line arguments.

if [ $# -ne 1 ]; then
  echo "usage: $0 filename"
  exit 1
fi

filename="$1"

if test ! -e "$filename"; then
  echo "$0: file \"$filename\" does not exist"
  exit 1
fi
if test ! -f "$filename"; then
  echo "$0: \"$filename\" is not a regular file"
  exit 1
fi
if test ! -r "$filename"; then
  echo "$0: file \"$filename\" is not readable"
  exit 1
fi

###############################################################################

## Validate the environment.

if test -z "$PIN_HOME"; then
  echo "$0: environment variable \$PIN_HOME is not set"
  exit 1
fi
if test ! -e "$PIN_HOME/pin.sh"; then
  echo "$0: \"\$PIN_HOME/pin.sh\" does not exist"
  exit 1
fi

###############################################################################

## Initialization.

DEBUG_ECHO=echo
if [ $debug -eq 0 ]; then
  DEBUG_ECHO=:
fi

QUIET_ECHO=echo
if [ $quiet -eq 0 ]; then
  QUIET_ECHO=:
fi

NEAT_RM_OUTS="$RM -f *out*.exe *out*.txt"
if [ $neat -eq 0 ]; then
  NEAT_RM_OUTS=:
fi

ulimit -t 1
ulimit -v 2000000

# Remove any lingering temporary files.
$NEAT_RM_OUTS

###############################################################################

## Use Clang to weed out "broken" programs.

clang_out=clang-out.txt

$CLANG -c -pedantic -Wall -O0 $CPPFLAGS "$filename" > "$clang_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: clang could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

$GREP -q \
  -e 'incompatible redeclaration' \
  -e 'ordered comparison between pointer' \
  -e 'eliding middle term' \
  -e 'end of non-void function' \
  -e 'invalid in C99' \
  -e 'specifies type' \
  -e 'should return a value' \
  -e 'too few argument' \
  -e 'too many argument' \
  -e "return type of 'main" \
  -e 'uninitialized' \
  -e 'incompatible pointer to' \
  -e 'incompatible integer to' \
  -e 'type specifier missing' \
  "$clang_out"
if [ $? -ne 1 ]; then
  $QUIET_ECHO "$0: unacceptable output warning from clang"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Use GCC to weed out "broken" programs.

gcc_out=gcc-out.txt

$GCC -c -Wall -Wextra -O1 $CPPFLAGS "$filename" > "$gcc_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: gcc could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

$GREP -q \
  -e 'uninitialized' \
  -e 'control reaches end' \
  -e 'no semicolon at end' \
  -e 'incompatible pointer' \
  -e 'cast from pointer to integer' \
  -e 'ordered comparison of pointer with integer' \
  -e 'declaration does not declare anything' \
  -e 'expects type' \
  -e 'assumed to have one element' \
  -e 'division by zero' \
  -e 'pointer from integer' \
  -e 'incompatible implicit' \
  -e 'excess elements in struct initializer' \
  -e 'comparison between pointer and integer' \
  "$gcc_out"
if [ $? -ne 1 ]; then
  $QUIET_ECHO "$0: unacceptable output warning from gcc"
  $NEAT_RM_OUTS
  exit 1
fi
  
###############################################################################

## Compile and run the mutant using first compiler under test.

# The outputs of the first compiler under test.
ccut1_exe=ccut1-out.exe
ccut1_out=ccut1-out.txt

$CCUT1 \
  -w $CPPFLAGS \
  "$filename" \
  -o "$ccut1_exe" \
  > "$ccut1_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1 could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

# The output of the program produced by the first compiler under test.
ccut1_exe_out=ccut1-exe-out.txt

"$PIN_HOME/pin.sh" \
  -injection child \
  -t "$PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so" \
  -vol_input vol_addr.txt \
  -output_mode checksum \
  -- "$ccut1_exe" \
  > "$ccut1_exe_out"
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: the program produced by $CCUT1 failed to run correctly"
  $NEAT_RM_OUTS
  exit 1
fi

# The regular and volatile checksums of the program produced by the first
# compiler under test.
ccut1_exe_chk=ccut1-exe-out-chk.txt
ccut1_exe_vchk=ccut-exe-out-vchk.txt

$GREP -e "^checksum" "$ccut1_exe_out" > "$ccut1_exe_chk"
# $? is 0 is lines were matched; 1 if no lines matched; >1 if error.
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: compiled program produced no checksum"
  $NEAT_RM_OUTS
  exit 1
fi

$GREP -e "^vol_access_checksum" "$ccut1_exe_out" > "$ccut1_exe_vchk"
# $? is 0 is lines were matched; 1 if no lines matched; >1 if error.
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: compiled program produced no volatile checksum"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Compile and run the mutant using second compiler under test.

# The outputs of the second compiler under test.
ccut2_exe=ccut2-out.exe
ccut2_out=ccut2-out.txt

$CCUT2 \
  -w $CPPFLAGS \
  "$filename" \
  -o "$ccut2_exe" \
  > "$ccut2_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2 could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

# The output of the program produced by the second compiler under test.
ccut2_exe_out=ccut2-exe-out.txt

"$PIN_HOME/pin.sh" \
  -injection child \
  -t "$PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so" \
  -vol_input vol_addr.txt \
  -output_mode checksum \
  -- "$ccut2_exe" \
  > "$ccut2_exe_out"
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: the program produced by $CCUT2 failed to run correctly"
  $NEAT_RM_OUTS
  exit 1
fi

# The regular and volatile checksums of the program produced by the second
# compiler under test.
ccut2_exe_chk=ccut2-exe-out-chk.txt
ccut2_exe_vchk=ccut-exe-out-vchk.txt

$GREP -e "^checksum" "$ccut2_exe_out" > "$ccut2_exe_chk"
# $? is 0 is lines were matched; 1 if no lines matched; >1 if error.
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: compiled program produced no checksum"
  $NEAT_RM_OUTS
  exit 1
fi

$GREP -e "^vol_access_checksum" "$ccut2_exe_out" > "$ccut2_exe_vchk"
# $? is 0 is lines were matched; 1 if no lines matched; >1 if error.
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: compiled program produced no volatile checksum"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Compare the regular and volatile checksums of the two compiled programs.

# If the regular checksums differ, this mutant is bad.
$CMP -s "$ccut1_exe_chk" "$ccut2_exe_chk"
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: compiled programs output different checksums"
  exit 1
fi

# If the volatile checksums are *not* different, this mutant is bad.
$CMP -s "$ccut1_exe_chk" "$ccut2_exe_chk"
if [ $? -eq 0 ]; then
  $QUIET_ECHO "$0: compiled programs yield the same volatile checksum"
  exit 1
fi

###############################################################################

$QUIET_ECHO "$0: \"$filename\" is good"
$NEAT_RM_OUTS

exit 0

## End of file.
