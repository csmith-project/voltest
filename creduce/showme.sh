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

###############################################################################

## Information about the test setup: the compilers under test and the
## environment for compiling and validating test programs.

CCUT1="gcc-4.4 -O0"
CCUT2="gcc-4.4 -O2"

CPPFLAGS="-DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0 -DNOT_PRINT_CHECKSUM -I/disk2/randtest/src/csmith/runtime"

# PIN_HOME: inherit this from the environment.

TIMEOUT=5

TIMEOUT_FRAMAC=125

###############################################################################

## Environment configuration.

CLANG=/disk2/randtest/src/llvm-install/bin/clang
CMP=cmp
FRAMAC=/usr/bin/frama-c
GCC=gcc
GREP=grep
RM=rm

RUNSAFELY=RunSafely

VOL_CHECKER=/disk2/randtest/src/volatile_checker/volatile_checker
VOL_ADDR_GEN=/disk2/randtest/src/volatile_pintrace/gen_volatile_addr.pl

###############################################################################

## Options.

# If `quiet' is true, this script is silent when the mutant is found to be
# uninteresting --- i.e., uncompilable, sematically suspect, or without the
# behavior we're looking for.
quiet=0

# If `neat' is true, this script deletes the temporary files it creates.
neat=0

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
if [ $debug -ne 0 ]; then
  DEBUG_ECHO=:
fi

QUIET_ECHO=echo
if [ $quiet -ne 0 ]; then
  QUIET_ECHO=:
fi

NEAT_RM_OUTS="$RM -f *out*.exe *out*.txt framac-prog.c"
if [ $neat -eq 0 ]; then
  NEAT_RM_OUTS=:
fi

# ulimit -t 1
# ulimit -v 2000000

# Remove any lingering temporary files.
$NEAT_RM_OUTS

###############################################################################

## Use Clang to weed out "broken" programs.

clang_out=clang-out.txt

$CLANG -c -pedantic -Wall -O0 $CPPFLAGS \
  "$filename" \
  -o /dev/null \
  > "$clang_out" 2>&1
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
  -e 'discards qualifiers' \
  "$clang_out"
if [ $? -ne 1 ]; then
  $QUIET_ECHO "$0: unacceptable output warning from clang"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Use GCC to weed out "broken" programs.

gcc_out=gcc-out.txt

$GCC -c -Wall -Wextra -O1 $CPPFLAGS \
  "$filename" \
  -o /dev/null \
  > "$gcc_out" 2>&1
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
  -e "discards '.*' qualifier" \
  "$gcc_out"
if [ $? -ne 1 ]; then
  $QUIET_ECHO "$0: unacceptable output warning from gcc"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Use our volatile_checker tool to weed out "broken" programs.

checker_out=checker-out.txt

$VOL_CHECKER --checker=volatile-reorder "$filename" > "$checker_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: \"$filename\" contains ill-ordered volatile accesses"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Use Clang's address sanitizer to weed out "broken" programs.

asan_exe=clang-asan-out.exe
asan_out=clang-asan-out.txt

$CLANG -O0 -fsanitize=address $CPPFLAGS \
  "$filename" \
  -o "$asan_exe" \
  > "$asan_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: clang -fsanitize=address could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

# The output of the program produced by clang -fsanitize=address.
asan_exe_out=clang-asan-exe-out.txt

$RUNSAFELY $TIMEOUT 1 /dev/null "$asan_exe_out" \
"$asan_exe" \
  > /dev/null 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: clang -fsanitize=address: program is unsanitary"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Use Frama-C to weed out "broken" programs.

framac_filename=framac-prog.c
framac_out=framac-out.txt

# For whatever reason, Frama-C does not like `main' to have arguments!
#
cp "$filename" "$framac_filename"
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: failed to copy \"$filename\" for Frama-C"
  $NEAT_RM_OUTS
  exit 1
fi

perl -pi \
  -e 's/int main \(int argc, char\* argv\[\]\)/int argc; char **argv; int main (void)/' \
  "$framac_filename"
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: failed to edit \"$framac_filename\" for Frama-C"
  $NEAT_RM_OUTS
  exit 1
fi

# XXX: `RunSafely' has some serious problems with shell quoting!
# Note the funky (basically, wrong) quoting of the -cpp-command value, which is
# needed to get it through RunSafely.  Fix RunSafely.
#
$RUNSAFELY $TIMEOUT_FRAMAC 1 /dev/null "$framac_out" \
$FRAMAC \
  -cpp-command \"gcc -C -Dvolatile= -E -I.\" \
  -val-signed-overflow-alarms -val -stop-at-first-alarm -no-val-show-progress \
  -machdep x86_64 \
  -obviously-terminates \
  -precise-unions \
  "$framac_filename" \
  > /dev/null 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: Frama-C failed to vet the program"
  $NEAT_RM_OUTS
  exit 1
fi

$GREP -q \
  -e 'user error' \
  -e 'assert' \
  "$framac_out"
if [ $? -ne 1 ]; then
  $QUIET_ECHO "$0: unacceptable output warning from Frama-C"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Extract information about the volatiles (and all variables) in the program.

all_vars=all-vars-out.txt
vol_vars=vol-vars-out.txt

$VOL_CHECKER \
  --checker=volatile-address \
  --all-vars-output="$all_vars" \
  "$filename" \
  > "$vol_vars" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: volatile-variable extractor failed"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Compile the mutant using first compiler under test.

# The outputs of the first compiler under test.
ccut1_exe=ccut1-out.exe
ccut1_out=ccut1-out.txt

$CCUT1 \
  -w $CPPFLAGS \
  "$filename" \
  -o "$ccut1_exe" \
  > "$ccut1_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

# The addresses of volatile objects (and normal objects, too) in the program
# produced by the first compiler under test.
ccut1_exe_all_addrs=ccut1-exe-all-addrs-out.txt
ccut1_exe_vol_addrs=ccut1-exe-vol-addrs-out.txt

$VOL_ADDR_GEN \
  --vars-file="$vol_vars" \
  --all-vars-file="$all_vars" \
  --all-var-addrs-output="$ccut1_exe_all_addrs" \
  "$ccut1_exe" \
  > "$ccut1_exe_vol_addrs" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: volatile-address extractor failed"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Compile the mutant using second compiler under test.

# The outputs of the second compiler under test.
ccut2_exe=ccut2-out.exe
ccut2_out=ccut2-out.txt

$CCUT2 \
  -w $CPPFLAGS \
  "$filename" \
  -o "$ccut2_exe" \
  > "$ccut2_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: could not compile \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

# The addresses of volatile objects (and normal objects, too) in the program
# produced by the second compiler under test.
ccut2_exe_all_addrs=ccut2-exe-all-addrs-out.txt
ccut2_exe_vol_addrs=ccut2-exe-vol-addrs-out.txt

$VOL_ADDR_GEN \
  --vars-file="$vol_vars" \
  --all-vars-file="$all_vars" \
  --all-var-addrs-output="$ccut2_exe_all_addrs" \
  "$ccut2_exe" \
  > "$ccut2_exe_vol_addrs" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: volatile-address extractor failed"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Find the set of globals that are visible in both compiled programs.
## Pin can compute the value checksum only over the state that is visible
## in both programs.

ccut1_exe_all_addrs_sorted=ccut1-exe-all-addrs-sorted-out.txt
ccut2_exe_all_addrs_sorted=ccut2-exe-all-addrs-sorted-out.txt

# The addresses of "common" objects in each compiled program.  A "common"
# object is one that appears in both of the compiled programs, although it
# might have different locations across the two programs.
ccut1_exe_com_addrs=ccut1-exe-com-addrs-out.txt
ccut2_exe_com_addrs=ccut2-exe-com-addrs-out.txt

# Fancy shell scripting!  Use of obscure utilities!

sort "$ccut1_exe_all_addrs" > "$ccut1_exe_all_addrs_sorted" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: unable to sort list of all objects"
  $NEAT_RM_OUTS
  exit 1
fi

sort "$ccut2_exe_all_addrs" > "$ccut2_exe_all_addrs_sorted" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: unable to sort list of all objects"
  $NEAT_RM_OUTS
  exit 1
fi

join -t \; -o 1.1,1.2,1.3,1.4 \
  "$ccut1_exe_all_addrs_sorted" \
  "$ccut2_exe_all_addrs_sorted" \
  > "$ccut1_exe_com_addrs" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: common-object extractor failed"
  $NEAT_RM_OUTS
  exit 1
fi

join -t \; -o 2.1,2.2,2.3,2.4 \
  "$ccut1_exe_all_addrs_sorted" \
  "$ccut2_exe_all_addrs_sorted" \
  > "$ccut2_exe_com_addrs" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: common-object extractor failed"
  $NEAT_RM_OUTS
  exit 1
fi

###############################################################################

## Run the mutant using the first compiler under test.

# The output of the program produced by the first compiler under test.
ccut1_exe_out=ccut1-exe-out.txt

$RUNSAFELY $TIMEOUT 1 /dev/null "$ccut1_exe_out" \
"$PIN_HOME/pin.sh" \
  -injection child \
  -t "$PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so" \
  -vol_input "$ccut1_exe_vol_addrs" \
  -all_vars_input "$ccut1_exe_com_addrs" \
  -output_mode checksum \
  -- "$ccut1_exe" \
  > /dev/null 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: compiled program failed to run correctly"
  $NEAT_RM_OUTS
  exit 1
fi

# The regular and volatile checksums of the program produced by the first
# compiler under test.
ccut1_exe_chk=ccut1-exe-out-chk.txt
ccut1_exe_vchk=ccut1-exe-out-vchk.txt

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

## Run the mutant using the second compiler under test.

# The output of the program produced by the second compiler under test.
ccut2_exe_out=ccut2-exe-out.txt

$RUNSAFELY $TIMEOUT 1 /dev/null "$ccut2_exe_out" \
"$PIN_HOME/pin.sh" \
  -injection child \
  -t "$PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so" \
  -vol_input "$ccut2_exe_vol_addrs" \
  -all_vars_input "$ccut2_exe_com_addrs" \
  -output_mode checksum \
  -- "$ccut2_exe" \
  > /dev/null 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT2: compiled program failed to run correctly"
  $NEAT_RM_OUTS
  exit 1
fi

# The regular and volatile checksums of the program produced by the second
# compiler under test.
ccut2_exe_chk=ccut2-exe-out-chk.txt
ccut2_exe_vchk=ccut2-exe-out-vchk.txt

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
$CMP -s "$ccut1_exe_vchk" "$ccut2_exe_vchk"
if [ $? -eq 0 ]; then
  $QUIET_ECHO "$0: compiled programs yield the same volatile checksum"
  exit 1
fi

###############################################################################

$QUIET_ECHO "$0: \"$filename\" is good"
$NEAT_RM_OUTS

exit 0

## End of file.
