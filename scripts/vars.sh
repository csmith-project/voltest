#!/bin/sh
##

###############################################################################

PROJECT=randtest
PROJECT_HOME="/proj/$PROJECT"

# Where do we find the package that goes along with this script?
# VOLTEST_HOME="$PROJECT_HOME/voltest"

##

WORK_DIR="$PROJECT"
WORK_HOME="/local/$WORK_DIR"
WORK_RUN_HOME="$WORK_HOME/run"
WORK_SRC_HOME="$WORK_HOME/src"

## CSMITH

CSMITH_DIR=csmith

# Where to download Csmith from, via Git.
CSMITH_GIT=git@github.com:csmith-project/csmith.git

CSMITH_HOME="$WORK_SRC_HOME/$CSMITH_DIR"

# What Csmith commit to use?
# XXX Not yet implemented.
CSMITH_REV=HEAD

## PIN

PIN_DIR=pin-2.12-55942-gcc.4.4.7-linux

PIN_HOME="$WORK_SRC_HOME/$PIN_DIR"

PIN_TGZ=pin-2.12-55942-gcc.4.4.7-linux.tar.gz
PIN_URL="http://software.intel.com/sites/landingpage/pintool/downloads/$PIN_TGZ"

## VOLATILE_PINTRACE

VOLATILE_PINTRACE_DIR=volatile_pintrace
VOLATILE_PINTRACE_HOME="$WORK_SRC_HOME/$VOLATILE_PINTRACE_DIR"

# What volatile_pintrace revision to use?
# XXX Not yet implemented.
VOLATILE_PINTRACE_REV=

# Where to download volatile_pintrace from, via SVN.
VOLATILE_PINTRACE_SVN=svn+ssh://shell.cs.utah.edu/uusoc/res/embed/users/regehr/embedded_code_repo/yang/volatile_pintrace

###############################################################################

## End of file.
