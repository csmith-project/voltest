#!/usr/bin/perl -w

# add options to backup or delete existing data

use strict;
use warnings;
use Sys::CPU;

my $NICE = "";

sub usage () {
    die "usage: launchn.pl [number] [seedfile]\n";
}

my $SEEDFILE = "";
my $CPUS;
my $argc = scalar (@ARGV);

if ($argc == 0) {
    $CPUS = Sys::CPU::cpu_count();    
    print "looks like we have $CPUS cpus\n";
} elsif ($argc >= 1) {
    $CPUS = $ARGV[0];
    usage() if (!($CPUS =~ /^[0-9]+$/));
    if ($argc == 2) {
	$SEEDFILE = $ARGV[1];
    }
} else {
    usage();
}

open INF, "ps axu |" or die;
while (<INF>) {
    if (/volatile\_test/) {
	print "oops-- kill existing volatile_test.pl processes first!\n";
	exit;
    }
}
close INF;

system "rm -rf work*";

for (my $i=0; $i<$CPUS; $i++) {
    my $dir = "work$i";
    system "mkdir $dir";
    system "$NICE nohup volatile_test.pl --work-dir=$dir > $dir/output.txt 2>&1 &";
}

