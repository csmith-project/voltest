#!/usr/bin/perl

use Cwd;
use strict;
use warnings;

my $LLVM_PATH = $ENV{"LLVM_PATH"};
die "Please setup LLVM_PATH...\n" unless (defined($LLVM_PATH));

my $PIN_HOME = "pin-2.12-55942-gcc.4.4.7-linux";
my $SCRIPT_HOME = "volatile_pintrace";
my $CHECKER_HOME = "volatile_checker";

sub abort_if_fail ($) {
  my $cmd = shift;
  print("  runit:$cmd\n");
  if ((system "$cmd") == -1) {
      die "FAILED: system '$cmd': $?";
  }
  my $exit_value  = $? >> 8;
  die "FAIL: system '$cmd': $exit_value" if ($exit_value);
}

sub chdir_or_die($) {
  my ($dir) = @_;
  print "  cd $dir\n";
  chdir $dir or die "failed to chdir $dir";
}

sub setup_volatile_checker() {
  print "* Start building volatile_checker...\n";
  my $cwd = cwd();
  chdir_or_die($CHECKER_HOME);
  abort_if_fail("LLVM_PATH=$LLVM_PATH make > /dev/null 2>&1");
  chdir_or_die($cwd);
  print "- Successfully built volatile_checker\n\n";
}

sub setup_pintool() {
  print "* Start building pintool...\n";
  my $pin_package = "$PIN_HOME.tar.gz";
  if (!(-f $pin_package)) {
    abort_if_fail("wget http://software.intel.com/sites/landingpage/pintool/downloads/$pin_package > /dev/null 2>&1");
  }
  if (!(-d $PIN_HOME)) {
    abort_if_fail("tar zxvf $pin_package > /dev/null 2>&1");
  }
  my $cwd = cwd();
  my $pin_dir = "$PIN_HOME/source/tools/ManualExamples";
  abort_if_fail("cp -f $SCRIPT_HOME/pinatrace.cpp $pin_dir/");
  chdir_or_die($pin_dir);
  abort_if_fail("make > /dev/null 2>&1");
  chdir_or_die("$cwd");
  abort_if_fail("cp -f $SCRIPT_HOME/pin.sh $PIN_HOME/");
  print "- Successfully built pin\n\n";
}

sub main() {
  setup_pintool();
  setup_volatile_checker();
}
main();
