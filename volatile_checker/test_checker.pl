#!/usr/bin/perl

use Cwd;
use strict;
use warnings;

my %tests_dir = (
  "reorder_test_dir" => "volatile-reorder",
  "volatile_address_test_dir" => "volatile-address"
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

sub do_one_csmith_test($$$) {
  my ($checker, $csmith_home, $n) = @_;

  my $strict = "";
  if ($checker eq "volatile-reorder") {
    $strict = "--strict-volatile-rule --paranoid";
  }
  my $subdir = sprintf "%05d", $n;
  mkdir "$subdir" or die;
  chdir $subdir or die;
  my $csmith_cmd = "$csmith_home/src/csmith $strict --output $n.c";
  die "Csmith crashed!" if runit($csmith_cmd);

  my $gcc_cmd = "gcc $n.c -I$csmith_home/runtime -o $n.exe > /dev/null 2>&1";
  if (runit($gcc_cmd)) {
    die "iteration [$n] failed: cannot compile $n.exe\n";
  }

  my $res = runit("RunSafely.sh 10 1 /dev/null $n.run.out $n.exe");
  if ($res == 137) {
    print "iteration [$n] timeout\n";
  }
  elsif ($res != 0) {
    die "failed to run exe!";
  }

  die "preprocessing failed" if (runit("gcc -E -I$csmith_home/runtime $n.c > $n.preprocessed.c"));
  my $checker_cmd = "../../volatile_checker --checker=$checker $n.preprocessed.c > $n.checker.out 2>&1";
  print "$checker_cmd\n";
  die "checker failed!" if (runit($checker_cmd));
  print "iteration [$n] succeeded\n";

out:
  chdir ".." or die;
  system "rm -rf $subdir" unless ($SAVE_TEMP);
}

sub test_against_csmith($$) {
  my ($test, $iteration) = @_;

  my $checker = $tests_dir{$test};
  die unless defined($checker);
  my $csmith_home = $ENV{"CSMITH_HOME"};
  die "please set CSMITH_HOME env first!" unless (defined($csmith_home));
  print "Starting testing $checker checker with Csmith...\n";

  my $working_dir = "tmp_csmith_testing";
  if (-d $working_dir) {
    system "rm -rf $working_dir/*";
  }
  else {
    mkdir $working_dir or die;
  }
  chdir $working_dir or die;
  for (my $i = 0; $i < $iteration; $i++) {
    do_one_csmith_test($checker, $csmith_home, $i);
  }
  chdir ".." or die;
  print "cwd: " . cwd() . "\n";
  print "All $iteration tests passed!\n";
}

sub test_one_dir($$$) {
  my ($dir, $checker, $regenerate) = @_;

  my @test_files = glob("*.c");
  for (my $i = 0; $i < @test_files; $i++) {
    my $test = $test_files[$i];
    print "  [$i]: $test ...";
    my $out = $test;
    $out =~ s/\.c$/\.out/;
    if ($regenerate) {
      runit("../volatile_checker --checker=$checker $test > $out 2>&1");
      print "done\n";
      next;
    }
 
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

sub do_unit_test($$) {
  my ($test, $regenerate) = @_;

  my $msg;
  if ($regenerate) {
    $msg = "regenerating";
  }
  else {
    $msg = "testing";
  }
  print "Start $msg...\n";

  my $cwd = cwd();
  foreach my $dir (keys %tests_dir) {
    if (defined($test)) {
      next if ($dir ne $test);
    }
    print "[*]$msg dir $dir\n";
    chdir $dir or die;
    my $checker = $tests_dir{$dir};
    test_one_dir($dir, $checker, $regenerate);
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
  --regenerate-test-output: re-generate test output
  --test=[test-dir]: do unit test for one test dir
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
  my $regenerate = 0;
  my $iteration = 100;
  my $test = undef;

  while(defined ($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "iteration") {
        $iteration = $2;
      }
      elsif ($1 eq "test") {
        $test = $2;
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
      elsif ($1 eq "regenerate-test-output") {
        $regenerate = 1;
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
  if (defined($test)) {
    die "Invalid test dir[$test]!" unless defined($tests_dir{$test});
  }

  if ($with_csmith) {
    $test = "reorder_test_dir" if (!defined($test));
    test_against_csmith($test, $iteration);
  }
  else {
    do_unit_test($test, $regenerate);
  }
}

main();
