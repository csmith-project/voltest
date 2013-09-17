#!/usr/bin/perl -w

use strict;
use warnings;

#my $GCC = "/scratch/chenyang/compilers/compiler-install/gcc-481/bin/gcc -O2";
my $GCC = "/scratch/chenyang/compilers/compiler-install/gcc-r202631-install/bin/gcc";
#my $OPT = "-O3 -Werror=uninitialized -fno-zero-initialized-in-bss -g -gdwarf-2";
my $OPT = "-O0";
my $SCRATCH = "/scratch/chenyang";
my $PIN_HOME = "$SCRATCH/programs/pin-2.12-55942-gcc.4.4.7-linux";
my $CHECKER = "$SCRATCH/volatile_checker/volatile_checker";
my $GEN_VOLATILE_ADDR = "$SCRATCH/volatile_pintrace/gen_volatile_addr.pl";
my $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so";
# summary, checksum, verbose
my $PIN_OUTPUT_MODE = "-output_mode checksum";
#my $PIN_RANDOM_READ = "-random_read";
my $PIN_RANDOM_READ = "";

sub runit ($) {
  my ($cmd) = @_;
  print "runit: $cmd\n";
  if ((system "$cmd") != 0) {
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub abort_if_fail($) {
  my ($cmd) = @_;
  die "Fatal error!" if (runit($cmd));
}

die "Usage: do_all.pl <cfile>" unless (@ARGV == 1);

my $cfile = $ARGV[0];
my $base = $cfile;
$base =~ s/.c$//;
my $preprocessed_cfile = "$base.pre.i";
my $clang_addr_file = "$base.clang.addr";
my $clang_all_addr_file = "$base.clang.all.addr";
my $addr_file = "$base.addr";
my $all_addr_file = "$base.all.addr";
my $exe_file = "$base.out";

abort_if_fail("$GCC -E $cfile > $preprocessed_cfile");
abort_if_fail("$CHECKER --checker=volatile-address --all-vars-output=$clang_all_addr_file > $clang_addr_file $preprocessed_cfile 2>&1");
abort_if_fail("$GCC $OPT $preprocessed_cfile -o $exe_file");
abort_if_fail("$GEN_VOLATILE_ADDR --vars-file=$clang_addr_file --all-vars-file=$clang_all_addr_file --all-var-addrs-output=$all_addr_file $exe_file > $addr_file 2>&1");
abort_if_fail("$PIN_BIN -vol_input $addr_file $PIN_OUTPUT_MODE $PIN_RANDOM_READ -- ./$exe_file");

