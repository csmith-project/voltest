#!/bin/sh
##

###############################################################################

PROJECT=randtest
PROJECT_HOME="/proj/$PROJECT"

# Where do we find the package that goes along with this script?
# VOLTEST_HOME="$PROJECT_HOME/voltest"

##

WORK_DIR="$PROJECT"
WORK_HOME="/disk2/$WORK_DIR"
WORK_RUN_HOME="$WORK_HOME/run"
WORK_SRC_HOME="$WORK_HOME/src"

###############################################################################

## C-REDUCE

CREDUCE_DIR=creduce

# Where to download C-Reduce from, via Git.
CREDUCE_GIT=git@github.com:csmith-project/creduce.git

CREDUCE_HOME="$WORK_SRC_HOME/$CREDUCE_DIR"

# What C-Reduce branch, tag, or commit to use?
CREDUCE_REV=master

###############################################################################

## CSMITH

CSMITH_DIR=csmith

# Where to download Csmith from, via Git.
CSMITH_GIT=git@github.com:csmith-project/csmith.git

CSMITH_HOME="$WORK_SRC_HOME/$CSMITH_DIR"

# What Csmith branch, tag, or commit to use?
CSMITH_REV=master

###############################################################################

## LLVM AND ITS PARTS

LLVM_DIR=llvm-3.3.src
LLVM_TGZ=llvm-3.3.src.tar.gz
LLVM_URL="http://llvm.org/releases/3.3/$LLVM_TGZ"
#
LLVM_CLANG_DIR=cfe-3.3.src
LLVM_CLANG_TGZ=cfe-3.3.src.tar.gz
LLVM_CLANG_URL="http://llvm.org/releases/3.3/$LLVM_CLANG_TGZ"
#
LLVM_COMPILER_RT_DIR=compiler-rt-3.3.src
LLVM_COMPILER_RT_TGZ=compiler-rt-3.3.src.tar.gz
LLVM_COMPILER_RT_URL="http://llvm.org/releases/3.3/$LLVM_COMPILER_RT_TGZ"

# Somehwat confusing.
# LLVM_SRC_HOME is the source tree; LLVM_OBJ_HOME is the build tree;
#  LLVM_HOME is the install tree.
# This is not entirely naming-consistent with $WORK_SRC_HOME, say, but it
# mean that $LLVM_HOME is naming-consistent with CSMITH_HOME and so on.
#
LLVM_SRC_HOME="$WORK_SRC_HOME/$LLVM_DIR"
LLVM_OBJ_HOME="$WORK_SRC_HOME/llvm-build"
LLVM_HOME="$WORK_SRC_HOME/llvm-install"

###############################################################################

## PIN

PIN_DIR=pin-2.12-55942-gcc.4.4.7-linux

PIN_HOME="$WORK_SRC_HOME/$PIN_DIR"

PIN_TGZ=pin-2.12-55942-gcc.4.4.7-linux.tar.gz
PIN_URL="http://software.intel.com/sites/landingpage/pintool/downloads/$PIN_TGZ"

###############################################################################

## VOLTEST

VOLTEST_DIR=voltest

# Where to download voltest from, via Git.
VOLTEST_GIT=git@github.com:csmith-project/voltest.git

VOLTEST_HOME="$WORK_SRC_HOME/$VOLTEST_DIR"

# What voltest branch, tag, or commit to use?
VOLTEST_REV=master

###############################################################################

## VOLATILE_CHECKER, now a part of voltest

VOLATILE_CHECKER_DIR=volatile_checker

VOLATILE_CHECKER_HOME="$VOLTEST_HOME/$VOLATILE_CHECKER_DIR"

###############################################################################

## VOLATILE_PINTRACE, now a part of voltest

VOLATILE_PINTRACE_DIR=volatile_pintrace

VOLATILE_PINTRACE_HOME="$VOLTEST_HOME/$VOLATILE_PINTRACE_DIR"

###############################################################################

## End of file.
