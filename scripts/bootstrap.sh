#!/bin/sh
##
## bootstrap.sh --- Bootstrap an Emulab node for volatile testing.
##
## This script is designed to be run as a node start-up command.  It gets the
## `voltest' git repository onto the node; it may do more in the future.
##
## The NS files for volatile testing are written to expect that this file is
## copied to Emulab and renamed as described in this repo's top-level README.
## 

###############################################################################

if [ $# -ne 1 ]; then
  echo "usage: $0 <work-home-dir>"
  exit 1
fi

work_home="$1"

if test -e "$work_home"; then
  echo "$0: \"$work_home\" already exists"
  exit 1
fi

###############################################################################

## Validate the environment.

if test -z "$PID"; then
  echo "$0: environment variable \$PID is not set"
  exit 1
fi

###############################################################################

# Abort this script when any command fails.
set -e
# Abort this script when any unbound variable is used.
set -u

# If you want a bunch of noise, set "quiet=".
quiet=-q

work_src_home="$work_home/src"
work_run_home="$work_home/run"

#####

VOLTEST_DIR=voltest

# Where to download voltest from, via Git.
VOLTEST_GIT=https://github.com/csmith-project/voltest.git
#
## The following is unlikely to work, since a node startcmd probably does not
## have access to any SSH private key useful for authenticating to GitHub.
#
# VOLTEST_GIT=git@github.com:csmith-project/voltest.git

VOLTEST_HOME="$work_src_home/$VOLTEST_DIR"

# What voltest branch, tag, or commit to use?
VOLTEST_REV=master

###############################################################################

## SET UP WORK DIRECTORIES

time=`date +%H:%M:%S`
echo "*** [$time]" "Setting up work directories..."

umask 002

sudo mkdir -p "$work_home"
sudo chown "$USER:$PID" "$work_home"
chmod ug+rwx "$work_home"

mkdir "$work_src_home"

mkdir "$work_run_home"

###############################################################################

## SET UP VOLTEST

# Get voltest.
#
time=`date +%H:%M:%S`
echo "*** [$time]" "Acquiring voltest sources (@ $VOLTEST_REV)..."
#
git clone $quiet "$VOLTEST_GIT" --no-checkout "$VOLTEST_HOME"
cd "$VOLTEST_HOME"
git checkout $quiet --detach "$VOLTEST_REV"

###############################################################################

time=`date +%H:%M:%S`
echo "*** [$time]" "Bootstrap complete."

###############################################################################

## End of file.
