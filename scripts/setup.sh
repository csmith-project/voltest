#!/bin/sh
##

###############################################################################

if test -z "$VOLTEST_HOME"; then
  echo $0: '$VOLTEST_HOME' is not set
  exit 1
fi
if test ! -e "$VOLTEST_HOME/scripts/vars.sh"; then
  echo $0: '$VOLTEST_HOME/scripts/vars.sh' does not exist
  exit 1
fi
. "$VOLTEST_HOME/scripts/vars.sh"

###############################################################################

# Abort this script when any command fails.
set -e
# Abort this script when any unbound variable is used.
set -u

# If you want a bunch of noise, set "quiet=" and "silent=".
quiet=-q
silent=-s

###############################################################################

## SET UP WORK DIRECTORIES

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up work directories..."

umask 002

sudo mkdir "$WORK_HOME"
sudo chown "$USER:$PROJECT" "$WORK_HOME"
chmod ug+rwx "$WORK_HOME"

mkdir "$WORK_SRC_HOME"

mkdir "$WORK_RUN_HOME"

###############################################################################

## SET UP CSMITH

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up Csmith..."

# Get Cmith.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring Csmith..."
#
git clone $quiet "$CSMITH_GIT" "$CSMITH_HOME"

# Install things required by test driver scripts.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Installing Csmith dependencies..."
#
sudo apt-get $quiet -y install libsys-cpu-perl
sudo apt-get $quiet -y install liblockfile-simple-perl

# Building in a separate object tree sets up a failure later on because
# the `evaluate_program.pl' script expects to find `csmith.h' and whatnot in
# $CSMITH_HOME/runtime'.
#
# Installing into a separate directory is also a failure, because the
# `random_test.pl' script looks for "$CSMITH_HOME/src/csmith".
#
# Just do it solution: build and run in the source tree.
#
# Ultimate solution: set a CSMITH envvar, which can find things in bin or src
# then point to the installed tree.
#
# cd ..
# mkdir obj
# cd obj
# mkdir csmith
# cd csmith

time=`date +%H:%M:%S`
echo "*** [$time]" "  Configuring Csmith..."
#
cd "$CSMITH_HOME"
./configure > Configure.errs

time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling Csmith..."
#
make > Make.errs 2>&1
# make install

# Issue: important scripts are not installed? evaluate_program.pl?  Everything
# in utah/scripts/old_john_driver?

###############################################################################

## SET UP PIN and VOLATILE_PINTRACE

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up volatile_pintrace..."

# Get volatile_pintrace.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring volatile_pintrace..."

svn co $quiet "$VOLATILE_PINTRACE_SVN" "$VOLATILE_PINTRACE_HOME"

# Get Pin.  Assumes that PIN_HOME == "$WORK_SRC_DIR/$PIN_DIR".
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring Pin..."
#
cd "$WORK_SRC_HOME"
wget $quiet "$PIN_URL"
tar zxf "$PIN_TGZ"

# Install files as directed by `volatile_pintrace/README.txt'.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Patching Pin..."
#
cp -p "$VOLATILE_PINTRACE_HOME/pin.sh" \
  "$PIN_HOME"
cp -p "$VOLATILE_PINTRACE_HOME/pinatrace.cpp" \
  "$PIN_HOME/source/tools/ManualExamples/"

# Compile as directed by `volatile_pintrace/README.txt'.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling volatile_pintrace..."
#
cd "$PIN_HOME/source/tools/ManualExamples"
make > Make.errs 2>&1

# Edit Csmith driver scripts as directed by `volatile_pintrace/README.txt'.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Patching Csmith driver for volatile_pintrace..."
#
patch $silent -d "$CSMITH_HOME/utah/scripts/old_john_driver" < \
  "$VOLTEST_HOME/patches/csmith/volatile_pintrace.patch"

###############################################################################

## SET UP TEST DRIVER

time=`date +%H:%M:%S`
echo "*** [$time]" "Patching Csmith test driver to configure targets..."

# Edit `evaluate_program.pl' to describe what you want to test.
#
patch $silent -d "$CSMITH_HOME/utah/scripts/old_john_driver" < \
  "$VOLTEST_HOME/patches/csmith/test-targets.patch"

# Edit `kill_random.pl' so that it works correctly on Ubuntu 12.
#
patch $silent -d "$CSMITH_HOME/utah/scripts/old_john_driver" < \
  "$VOLTEST_HOME/patches/csmith/kill_random.patch"

###############################################################################

time=`date +%H:%M:%S`
echo "*** [$time]" "Setup complete."

###############################################################################

## End of file.
