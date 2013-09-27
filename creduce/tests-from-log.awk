#!/bin/awk
#
# grab.awk --- extract a script from a volatile-testing log file
#
# Run: awk -f grab.awk <log>
#

###############################################################################

BEGIN {
    print "#!/bin/sh"
}

END {
    print ""
    print "# End of file."
}

/^------ RANDOM PROGRAM [0-9]+ ------$/ {
    test_num = $4
    test_timeout = 0
}

/^regenerate with: '.*'$/ {
    split($0,x,/'/)
    test_cmdline = x[2]
}

/^TIMEOUT/ {
    test_timeout = 1
}

/^INTERNAL VOLATILE FAILURE/ {
    print ""
    print "# random program", test_num
    print "#", $0
    if (test_timeout) {
	print "# timed out"
    } else {
	print test_cmdline
    }
}

###############################################################################

## End of file.
