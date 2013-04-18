#!/usr/bin/perl -w

# add options to backup or delete existing data

use strict;
use warnings;
use Sys::CPU;

my $NICE = "";

open INF, "ps axu |" or die;
while (<INF>) {
  if (/volatile\_test/) {
    print "oops-- kill existing volatile_test.pl processes first!\n";
    exit;
  }
}
close INF;

sub usage () {
  die "usage: launchn.pl [--not-print-checksum] [--cpus=number] [--nice=number]\n";
}

my $NOT_PRINT_CHECKSUM = "";
my $CPUS = undef;

my $opt;

while(defined ($opt = shift @ARGV)) {
  if ($opt =~ m/^--(.+)=(.+)$/) {
    if ($1 eq "cpus") {
      $CPUS = $2;
      usage() if ($CPUS !~ m/^[0-9]+$/);
    }
    elsif ($1 eq "nice") {
      $NICE = "nice -$2";
      usage() if ($2 !~ m/^[0-9]+$/);
    }
    else {
      usage();
    }
  }
  elsif ($opt =~ m/^--(.+)$/) {
    if ($1 eq "not-print-checksum") {
      usage() if ($1 !~ m/not-print-checksum/);
      $NOT_PRINT_CHECKSUM = "--not-print-checksum";
    }
    else {
      usage();
    }
  }
  else {
    usage();
  }
}

if (!defined($CPUS)) {
  $CPUS = Sys::CPU::cpu_count();    
  print "looks like we have $CPUS cpus\n";
}

system "rm -rf work*";

for (my $i=0; $i<$CPUS; $i++) {
  my $dir = "work$i";
  system "mkdir $dir";
  system "$NICE nohup volatile_test.pl $NOT_PRINT_CHECKSUM --work-dir=$dir > $dir/output.txt 2>&1 &";
}

