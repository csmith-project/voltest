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
# CCUT2="gcc-4.4 -O2"

CPPFLAGS="-DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0 -DNOT_PRINT_CHECKSUM -I/local/randtest/src/csmith/runtime"

###############################################################################

## Environment configuration.

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

## Initialization.

DEBUG_ECHO=echo
if [ $debug -ne 0 ]; then
  DEBUG_ECHO=:
fi

QUIET_ECHO=echo
if [ $quiet -ne 0 ]; then
  QUIET_ECHO=:
fi

NEAT_RM_OUTS="$RM -f *out*.exe *out*.txt"
if [ $neat -eq 0 ]; then
  NEAT_RM_OUTS=:
fi

# ulimit -t 1
# ulimit -v 2000000

# Remove any lingering temporary files.
$NEAT_RM_OUTS

###############################################################################

## Preprocess the input file using the compiler under test.

filename_E="$filename-out.i"
ccut1_out=ccut1-out.txt

$CCUT1 -E \
  $CPPFLAGS \
  "$filename" \
  -o "$filename_E"
  > "$ccut1_out" 2>&1
if [ $? -ne 0 ]; then
  $QUIET_ECHO "$0: $CCUT1: could not preprocess \"$filename\""
  $NEAT_RM_OUTS
  exit 1
fi

mv "$filename" "$filename.orig"
mv "$filename_E" "$filename"

###############################################################################

$QUIET_ECHO "$0: \"$filename\" successfully preprocessed"
$NEAT_RM_OUTS

exit 0

## End of file.
