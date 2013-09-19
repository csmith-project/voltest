#!/usr/bin/perl -w

use strict;
use warnings;

my $VOLATILE_TOOL_HOME = $ENV{"VOLATILE_TOOL_HOME"};
die "Please setup VOLATILE_TOOL_HOME...\n"
  unless (defined($VOLATILE_TOOL_HOME));
my $CSMITH_INCLUDE_DIR = $ENV{"CSMITH_INCLUDE_DIR"};
die "Please setup CSMITH_INCLUDE_DIR...\n"
  unless (defined($CSMITH_INCLUDE_DIR));

my $GCC = "gcc";
if (defined($ENV{"CC"})) {
  $GCC = $ENV{"CC"};
}

my $PIN_HOME = "$VOLATILE_TOOL_HOME/pin-2.12-55942-gcc.4.4.7-linux";
my $CHECKER = "$VOLATILE_TOOL_HOME/volatile_checker/volatile_checker";
my $GEN_VOLATILE_ADDR = "$VOLATILE_TOOL_HOME/volatile_pintrace/gen_volatile_addr.pl";
my $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so";

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

die "Usage: do_all.pl <pin-mode> <cfile> <opt>" unless (@ARGV == 3);

my $mode = $ARGV[0];
my $cfile = $ARGV[1];
my $OPT = "-$ARGV[2]";
# summary, checksum, verbose
my $PIN_OUTPUT_MODE = "-output_mode $mode";
my $base = $cfile;
$base =~ s/.c$//;
my $preprocessed_cfile = "$base.pre.i";
my $gcc_compile_output = "$base.gcc.compile.out";
my $clang_addr_file = "$base.clang.addr";
my $clang_all_addr_file = "$base.clang.all.addr";
my $addr_file = "$base.addr";
my $all_addr_file = "$base.all.addr";
my $exe_file = "$base.out";
my $pin_output = "$base.pin.out";

abort_if_fail("$GCC -I$CSMITH_INCLUDE_DIR -E $cfile > $preprocessed_cfile");
abort_if_fail("$CHECKER --checker=volatile-address --all-vars-output=$clang_all_addr_file > $clang_addr_file $preprocessed_cfile 2>&1");
abort_if_fail("$GCC $OPT $preprocessed_cfile -o $exe_file > $gcc_compile_output 2>&1");
abort_if_fail("$GEN_VOLATILE_ADDR --vars-file=$clang_addr_file --all-vars-file=$clang_all_addr_file --all-var-addrs-output=$all_addr_file $exe_file > $addr_file 2>&1");
abort_if_fail("$PIN_BIN -vol_input $addr_file $PIN_OUTPUT_MODE -- ./$exe_file > $pin_output 2>&1");

