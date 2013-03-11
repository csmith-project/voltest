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

export CSMITH_HOME
export PIN_HOME

# Old driver:
#   PATH="$CSMITH_HOME/utah/scripts/old_john_driver:$PATH"
# New driver:
PATH="$VOLATILE_PINTRACE_HOME:$PATH"
export PATH

###############################################################################

## End of file.
