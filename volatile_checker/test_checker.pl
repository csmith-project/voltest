#!/usr/bin/perl

use Cwd;
use strict;
use warnings;

my %tests_dir = (
  "reorder_test_dir" => "volatile-reorder"
);

my @failed_tests;

sub runit ($) {
  my $cmd = shift;
  if ((system "$cmd") == -1) {
    print "FAIL: system '$cmd': $?";
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub test_one_dir($$) {
  my ($dir, $checker) = @_;

  my @test_files = glob("*.c");
  for (my $i = 0; $i < @test_files; $i++) {
    my $test = $test_files[$i];
    print "  [$i]: $test ...";
    my $out = $test;
    $out =~ s/\.c$/\.out/;
    if (!(-e $out)) {
      push @failed_tests, $test;
      print "failed\n";
      next;
    }

    my $new_out = "$out.new";
    runit("../volatile_checker --checker=$checker $test > $new_out 2>&1");
    if (runit("diff $new_out $out")) {
      push @failed_tests, $test;
      print "failed\n";
    }
    else {
      print "succeeded\n";
    }
    system ("rm -rf $new_out");
  }
}

sub main() {
  print "Start testing...\n";
  my $cwd = cwd();
  foreach my $dir (keys %tests_dir) {
    print "[*]testing dir $dir\n";
    chdir $dir or die;
    my $checker = $tests_dir{$dir};
    test_one_dir($dir, $checker);
    chdir $cwd or die;
  }

  print "-------------------------------\n";
  print "Testing result:\n";
  if (@failed_tests == 0) {
    print "All tests passed!\n";
  }
  else {
    print "failed tests:\n";
    foreach my $test (@failed_tests) {
      print "  $test\n";
    }
  }
}

main();
