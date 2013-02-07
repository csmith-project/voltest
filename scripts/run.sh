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
# . "$VOLTEST_HOME/scripts/vars.sh"
. "$VOLTEST_HOME/scripts/env.sh"

###############################################################################

# Abort this script when any command fails.
set -e
# Abort this script when any unbound variable is used.
set -u

###############################################################################

cd "$WORK_RUN_HOME"
launchn.pl

# To stop the madness
#
# kill_random.pl

###############################################################################

## End of file.
