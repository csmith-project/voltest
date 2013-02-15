#!/usr/bin/perl

use Cwd;
use strict;
use warnings;

my %tests_dir = (
  "reorder_test_dir" => "volatile-reorder"
);

my @failed_tests;
my $SAVE_TEMP = 0;

sub runit ($) {
  my $cmd = shift;
  if ((system "$cmd") == -1) {
    print "FAIL: system '$cmd': $?";
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub do_one_csmith_test($$) {
  my ($csmith_home, $n) = @_;

  my $subdir = sprintf "%05d", $n;
  mkdir "$subdir" or die;
  chdir $subdir or die;
  my $csmith_cmd = "$csmith_home/src/csmith --strict-volatile-rule --paranoid --output $n.c";
  die "Csmith crashed!" if runit($csmith_cmd);

  my $gcc_cmd = "gcc $n.c -I$csmith_home/runtime -o $n.exe > /dev/null 2>&1";
  if (runit($gcc_cmd)) {
    die "iteration [$n] failed: cannot compile $n.exe\n";
  }

  my $res = runit("RunSafely.sh 10 1 /dev/null $n.run.out $n.exe");
  if ($res == 137) {
    print "iteration [$n] timeout\n";
    goto out;
  }
  elsif ($res != 0) {
    die "failed to run exe!";
  }

  die "preprocessing failed" if (runit("gcc -E -I$csmith_home/runtime $n.c > $n.preprocessed.c"));
  my $checker_cmd = "../../volatile_checker --checker=volatile-reorder $n.preprocessed.c > $n.checker.out 2>&1";
  die "checker failed!" if (runit($checker_cmd));
  print "iteration [$n] succeeded\n";

out:
  chdir ".." or die;
  system "rm -rf $subdir" unless ($SAVE_TEMP);
}

sub test_against_csmith($) {
  my ($iteration) = @_;

  my $csmith_home = $ENV{"CSMITH_HOME"};
  die "please set CSMITH_HOME env first!" unless (defined($csmith_home));
  print "Starting testing volatile-reorder checker with Csmith...\n";

  my $working_dir = "tmp_csmith_testing";
  if (-d $working_dir) {
    system "rm -rf $working_dir/*";
  }
  else {
    mkdir $working_dir or die;
  }
  chdir $working_dir or die;
  for (my $i = 0; $i < $iteration; $i++) {
    do_one_csmith_test($csmith_home, $i);
  }
  chdir ".." or die;
  print "cwd: " . cwd() . "\n";
  print "All $iteration tests passed!\n";
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

sub do_unit_test() {
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

my $help_msg = '
Usage: test_checker.pl
  options:
  --with-csmith: test checkers agains csmith with --strict-volatile-rules
  --iteration: only work with --with-csmith option, determine the number of testing iteration (default: 100)
  --save-temp: only work with --with-csmith option, save temp files.
';

sub die_with_help($) {
  my ($opt) = @_;

  print "Invalid option: $opt";
  print $help_msg;
  die;
}

sub main() {
  my $opt;
  my @unused = ();
  my $with_csmith = 0;
  my $iteration = 100;

  while(defined ($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "iteration") {
        $iteration = $2;
      }
      else {
        die_with_help($opt);
      }
    }
    elsif ($opt =~ m/^--(.+)$/) {
      if ($1 eq "with-csmith") {
        $with_csmith = 1;
      }
      elsif ($1 eq "save-temp") {
        $SAVE_TEMP = 1;
      }
      elsif ($1 eq "help") {
        print $help_msg;
        return;
      }
      else {
        die_with_help($opt);
      }
    }
    else {
      push @unused, $opt;
    }
  }

  die_with_help("$ARGV[0]") if (@ARGV != 0);
  if ($with_csmith) {
    test_against_csmith($iteration);
  }
  else {
    do_unit_test();
  }
}

main();
