#!/bin/sh
##
## TODOs:
## + Move downloaded tarballs to a downloads directory?
## + Delete the downloaded tarballs?
## + Remove the llvm-build directory?
## + Build less of LLVM+Clang?

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
#
# Note: To make `apt-get' really quiet, one must use "-q -q".  This script
# does not do that, mostly.
#
quiet=-q
silent=-s

ncpus=1
if test -e /proc/cpuinfo; then
  # Get the number of (virtual) CPUs on Linux.
  ncpus=`cat /proc/cpuinfo | grep processor | wc -l`
fi

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

## SET UP APT-GET

time=`date +%H:%M:%S`
echo "*** [$time]" "Running \`apt-get update'..."

# Make sure that this node's package lists are up to date.
# Avoid very boring output by being very quiet ($quiet $quiet).
#
sudo apt-get $quiet $quiet -y update

###############################################################################

## SET UP CSMITH

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up Csmith..."

# Get Csmith.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring Csmith sources (@ $CSMITH_REV)..."
#
git clone $quiet "$CSMITH_GIT" --no-checkout "$CSMITH_HOME"
cd "$CSMITH_HOME"
git checkout $quiet --detach "$CSMITH_REV"

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

# Configure.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Configuring Csmith..."
#
cd "$CSMITH_HOME"
./configure > Configure.errs

# Compile.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling Csmith..."
#
make > Make.errs 2>&1
# make install

# Issue: important scripts are not installed? evaluate_program.pl?  Everything
# in utah/scripts/old_john_driver?

###############################################################################

## SET UP PIN AND VOLATILE_PINTRACE

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up volatile_pintrace..."

# Get volatile_pintrace.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring volatile_pintrace sources (@ $VOLATILE_PINTRACE_REV)..."
#
svn co $quiet --revision "$VOLATILE_PINTRACE_REV" \
  "$VOLATILE_PINTRACE_SVN" "$VOLATILE_PINTRACE_HOME"

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
echo "*** [$time]" "  Patching Csmith test driver for volatile_pintrace..."
#
patch $silent -d "$CSMITH_HOME/utah/scripts/old_john_driver" < \
  "$VOLTEST_HOME/patches/csmith/volatile_pintrace.patch"

###############################################################################

## SET UP LLVM/CLANG (FOR C-REDUCE)

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up LLVM/Clang..."

# Get LLVM.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring LLVM sources..."
#
cd "$WORK_SRC_HOME"
wget $quiet "$LLVM_URL"
tar zxf "$LLVM_TGZ"

# Get Clang.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring Clang sources..."
#
cd "$WORK_SRC_HOME"
wget $quiet "$LLVM_CLANG_URL"
tar zxf "$LLVM_CLANG_TGZ"
# Move this into the LLVM source tree; part of the LLVM/Clang build procedure.
# See <http://clang.llvm.org/get_started.html>.
mv "$LLVM_CLANG_DIR" "$LLVM_SRC_HOME/tools/clang"

# Get Compiler RT.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring Compiler RT sources..."
#
cd "$WORK_SRC_HOME"
wget $quiet "$LLVM_COMPILER_RT_URL"
tar zxf "$LLVM_COMPILER_RT_TGZ"
# Move into the LLVM source tree; part of the LLVM/Clang build procedure.
# See <http://clang.llvm.org/get_started.html>.
mv "$LLVM_COMPILER_RT_DIR" "$LLVM_SRC_HOME/projects/compiler-rt"

# Make LLVM+Clang+Compiler-RT build tree.
#
mkdir "$LLVM_OBJ_HOME"

# Configure.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Configuring LLVM+Clang+Compiler-RT..."
#
cd "$LLVM_OBJ_HOME"
"$LLVM_SRC_HOME"/configure --prefix="$LLVM_HOME" > Configure.errs

# Compile.
## LLVM 3.2
# make      : This takes about 120   minutes on a pc3000.
# make -j2  : This takes about  82   minutes on a pc3000.
# make      : This takes about  50   minutes on a d710.
# make -j4  : This takes about  15   minutes on a d710.
# make -j8  : This takes about  12   minutes on a d710.
# make -j64 : This takes about   3.5 minutes on a d820.
## LLVM 3.3
# make -j64 : This takes about   4 minutes on a d820.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling LLVM+Clang+Compiler-RT (-j$ncpus)..."
#
make -j"$ncpus" > Make.errs 2>&1

# Install.
# The C-Reduce build system only works against an installed LLVM/Clang,
# not an LLVM+Clang build tree.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Installing LLVM+Clang+Compiler-RT..."
#
make install > Make-install.errs 2>&1

###############################################################################

## SET UP C-REDUCE

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up C-Reduce..."

# Get C-Reduce.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring C-Reduce sources (@ $CREDUCE_REV)..."
#
git clone $quiet "$CREDUCE_GIT" --no-checkout "$CREDUCE_HOME"
cd "$CREDUCE_HOME"
git checkout $quiet --detach "$CREDUCE_REV"

# Install things required by C-Reduce.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Installing C-Reduce dependencies..."
#
sudo apt-get $quiet -y install \
  astyle \
  delta \
  indent \
  libbenchmark-timer-perl \
  libexporter-lite-perl \
  libfile-which-perl \
  libgetopt-tabular-perl \
  libregexp-common-perl \
  libsys-cpu-perl

# Configure.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Configuring C-Reduce..."
#
cd "$CREDUCE_HOME"
./configure --with-llvm="$LLVM_HOME" > Configure.errs

# Compile.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling C-Reduce..."
#
make > Make.errs 2>&1
# make install

###############################################################################

## SET UP FRAMA-C

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up Frama-C..."

# Install Frama-C.  The "frama-c" package has many, many dependencies.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Installing Frama-C..."
#
sudo apt-get $quiet -y install frama-c

###############################################################################

## SET UP VOLATILE_CHECKER

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up volatile_checker..."

# Get volatile_checker.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Acquiring volatile_checker sources (@ $VOLATILE_CHECKER_REV)..."
#
svn co $quiet  --revision "$VOLATILE_CHECKER_REV" \
  "$VOLATILE_CHECKER_SVN" "$VOLATILE_CHECKER_HOME"

# Compile as directed by `volatile_checker/README.txt'.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "  Compiling volatile_checker..."
#
cd "$VOLATILE_CHECKER_HOME"
make LLVM_PATH="$LLVM_HOME" > Make.errs 2>&1

###############################################################################

## SET UP TEST DRIVER

time=`date +%H:%M:%S`
echo "*** [$time]" "Patching Csmith test driver to configure targets..."

# Edit `evaluate_program.pl' to describe what you want to test.
#
patch $silent -d "$CSMITH_HOME/utah/scripts/old_john_driver" < \
  "$VOLTEST_HOME/patches/csmith/test-targets.patch"

time=`date +%H:%M:%S`
echo "*** [$time]" "Patching volatile_pintrace test driver to configure targets..."

# Edit `volatile_test.pl' to describe what you want to test.
#
patch $silent -d "$VOLATILE_PINTRACE_HOME" < \
  "$VOLTEST_HOME/patches/volatile_pintrace/volatile_test.patch"

###############################################################################

time=`date +%H:%M:%S`
echo "*** [$time]" "Setup complete."

###############################################################################

## End of file.
