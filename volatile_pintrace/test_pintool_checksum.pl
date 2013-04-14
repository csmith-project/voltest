#!/usr/bin/perl

use strict;
use warnings;
use Cwd;
use English;

# this script is used to check checksums computed by 
# the pintool and csmith are the same

my $PIN_HOME = $ENV{"PIN_HOME"};
die "Please set PIN_HOME env!"
  unless defined ($PIN_HOME);

my $CSMITH_HOME = $ENV{"CSMITH_HOME"};
die "Please set CSMITH_HOME env!"
  unless defined ($CSMITH_HOME);

my $VERBOSE = 1;
my $KEEP_TEMPS = 0;
my $ITERATION = 100;
my $WORKING_DIR = "tmp_test_pintool_checksum";
my $UNITTEST_DIR = "all_addrs_unittest_dir";

my $CHECKER;
my $GEN_VOLATILE_ADDR;
my $RunSafely;

my $COMPILER_TIMEOUT = 600;
my $PROG_TIMEOUT = 5;
my $PIN_PROG_TIMEOUT = 30;
my $CSMITH_TIMEOUT = 180; 
my $TIMEOUT_RES = 137;
#on darwin timeout res is 152 instead of 137
$TIMEOUT_RES = 152 if ($OSNAME =~ /darwin/);

my $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so";
my $CSMITH_BIN = "$CSMITH_HOME/src/csmith";
my $CSMITH_VOL_OPTS = "";

my %all_vars = ();
my %all_addrs_files = ();

########################################################################
sub print_msg($) {
    my $msg = shift;
    print $msg if ($VERBOSE);
}

sub runit ($) {
  my $cmd = shift;
  if ((system "$cmd") == -1) {
    print "FAIL: system '$cmd': $?\n";
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub abort_if_fail ($) {
  my $cmd = shift;
  my $res = runit ($cmd);
  exit -1 if ($res != 0);
}

my $CSMITH_FAILED = -2;
my $COMPILER_TIMEOUT_RV = -3;
my $COMPILER_FAILED = -4;
my $EXE_TIMEOUT_RV = -5;
my $EXE_FAILED = -6;

sub run_csmith($$) {
  my ($cfile, $redirect_output) = @_;

  my $cmd = "$CSMITH_BIN $CSMITH_VOL_OPTS --output $cfile";
  my $csmith_cmd = "$RunSafely $CSMITH_TIMEOUT 1 /dev/null csmith_output.txt $cmd";
  my $res = runit($csmith_cmd);
  if (($res != 0) || !(-f "$cfile")) {
    return $CSMITH_FAILED;
  }
  return 0;
}

sub run_checker($$$$) {
  my ($root, $checker_out, $all_vars_out, $for_unittest) = @_;

  my $opt;
  if ($for_unittest) {
    $opt = "-I$UNITTEST_DIR";
  }
  else {
    $opt = "-I$CSMITH_HOME/runtime";
  }
  my $res = runit("gcc -E $opt $root.c > ${root}.pre.i 2>&1");
  if ($res) {
    die "preprocessor failed!";
  }
  return runit("$CHECKER --checker=volatile-address --all-vars-output=$all_vars_out $root.pre.i > $checker_out 2>&1");
}

sub compile_cfile($$$$$$) {
  my ($compiler_cmd, $compiler_opt, $cfile, $exe, $no_print_checksum, $for_unittest) = @_;

  my $COMPILER_COMMON_OPTS;
  if ($for_unittest) {
    $COMPILER_COMMON_OPTS = "-I$UNITTEST_DIR";
  }
  else {
    $COMPILER_COMMON_OPTS = "-w -DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0 -I$CSMITH_HOME/runtime";
  }
  ($COMPILER_COMMON_OPTS .= " -DNOT_PRINT_CHECKSUM") if ($no_print_checksum);
  my $compiler_out = "$exe.out";
  my $cmd = "$RunSafely $COMPILER_TIMEOUT 1 /dev/null $compiler_out $compiler_cmd $compiler_opt $COMPILER_COMMON_OPTS $cfile -o $exe";
  print_msg("$compiler_cmd $compiler_opt: $cmd\n");
  my $res = runit($cmd);
  if ($res || !(-f $exe)) {
    if ($res == $TIMEOUT_RES) {
      $res = $COMPILER_TIMEOUT_RV;
    }
    else {
      $res = $COMPILER_FAILED;
    }
  }
  return $res;
}

sub run_exe_with_pin($$$$$) {
  my ($exe, $compiler, $raw_out, $pin_vol_addrs_file, $pin_all_addrs_file) = @_;
 
  my $res = runit("$RunSafely $PROG_TIMEOUT 1 /dev/null $raw_out ./$exe");
  if ($res == 0) {
    my $pin_cmd = "$RunSafely $PIN_PROG_TIMEOUT 1 /dev/null $raw_out $PIN_BIN -vol_input $pin_vol_addrs_file -all_vars_input $pin_all_addrs_file -- ./$exe";
    print_msg("$pin_cmd\n");
    $res = runit($pin_cmd);
  }

  if ($res == $TIMEOUT_RES) {
    return $EXE_TIMEOUT_RV;
  }
  elsif ($res != 0) {
    die "pintool failed to run exe: $res!";
  }
  return $res;
}

sub run_exe($$$) {
  my ($exe, $compiler, $raw_out) = @_;
 
  my $res = runit("$RunSafely $PROG_TIMEOUT 1 /dev/null $raw_out ./$exe");
  if ($res == $TIMEOUT_RES) {
    return $EXE_TIMEOUT_RV;
  }
  elsif ($res != 0) {
    return $EXE_FAILED;
  }
  return $res;
}

sub parse_output($) {
  my ($out) = @_;

  my $checksum = undef;
  my $vol_str = undef;

  open INF, "<$out" or die;
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/vol_access_checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($vol_str)) {
        die "duplicated vol_access_checksum!";
        return (undef, undef) 
      }
      $vol_str = "vol_access_checksum = $1\n";
    }
    elsif ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        die "ERROR: duplicated checksum!";
        return (undef, undef) 
      }
      $checksum = uc($1);
    }
  }
  close INF;
  return ($checksum, $vol_str);
}

sub get_full_name($) {
  my ($line) = @_;

  my @a = split(';', $line);
  die "bad line:$line" unless((@a == 4) || (@a == 5));
  my $name = $a[0];
  $name =~ s/[\s\t]//g;
  return $name;
}

sub add_one_var($) {
  my ($line) = @_;

  my $name = get_full_name($line);
  my $count = $all_vars{$name};
  if (defined($count)) {
    $all_vars{$name} = $count+1;
  }
  else {
    $all_vars{$name} = 1;
  }
}

sub filter_globals($$) {
  my ($fname, $for_unittest) = @_;

  my @all_lines = ();
  my $s = "";
  open INF, "<$fname" or die "cannot open $fname!";
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/^[(\s\t]*g_/) {
      $s .= "$line\n";
      add_one_var($line);
      push @all_lines, $line;
    }
  }
  close INF;
  if (!$for_unittest) {
    @all_lines = sort @all_lines;
  }
  $all_addrs_files{$fname} = \@all_lines;
=comment
  open OUT, ">$fname" or die "cannot open $fname!";
  print OUT $s;
  close OUT;
=cut
}

sub get_addrs_file($$$$$$) {
  my ($compiler, $root, $cfile, $checker_out, $all_vars_out, $for_unittest) = @_;

  my $res;
  my $exe = "$root.$compiler.out";
  die "compile_cfile failed!" if (($res = compile_cfile($compiler, "-O0", $cfile, $exe, 1, $for_unittest)) != 0);

  my $all_addrs_file = "${exe}_all_var_addrs.txt";
  my $vol_addrs_file = "${exe}_vol_addr.txt";
  die "gen_volatile_addr.pl failed!" if runit("$GEN_VOLATILE_ADDR --vars-file=$checker_out --all-vars-file=$all_vars_out --all-var-addrs-output=$all_addrs_file $exe > $vol_addrs_file 2>&1");
  die "no all_addrs_file!" unless (-f $all_addrs_file);
  die "no vol_addrs_file!" unless (-f $vol_addrs_file);
  filter_globals($all_addrs_file, $for_unittest);
  return ($exe, $vol_addrs_file, $all_addrs_file);
}

sub get_checksum($$$$) {
  my ($compiler, $exe, $pin_vol_addrs_file, $pin_all_addrs_file) = @_;

  my $raw_out = "$exe.raw-out";
  my $res;
  die "run exe failed!" if (($res = run_exe_with_pin($exe, $compiler, $raw_out, $pin_vol_addrs_file, $pin_all_addrs_file)) != 0);

  my ($pin_checksum, $vol_str) = parse_output($raw_out);
  die "Invalid checksum" unless (defined($pin_checksum));
  die "Invalid vol_str" unless (defined($vol_str));
  return $pin_checksum;
}

# compilers may not emit globals in an object, e.g.
# static const int g_1 = 0;
# the object code generated by clang won't have reference
# to g_1; however, gcc does. 
# Therefore, we only keep common vars appearing all objects.
# also, we need to sort these common vars
sub uniq_all_addrs_files() {
  my $num_files = scalar(keys %all_addrs_files);

  foreach my $file (keys %all_addrs_files) {
    my $file_lines = $all_addrs_files{$file};
    my $s = "";
    foreach my $line (@$file_lines) {
      my $name = get_full_name($line);  
      my $count = $all_vars{$name};
      die "undef name:$name!" unless (defined($count));
      # print "$name, $count, $num_files\n";
      if ($count == $num_files) {
        $s .= "$line\n";
      }
    }
    close INF;
    open OUT, ">$file" or die "cannot open $file!";
    print OUT $s;
    close OUT;
  }
}

sub do_one_test($$) {
  my ($n, $root) = @_;

  my $for_unittest = 0;
  my $nstr;
  $nstr = sprintf "%06d", $n;
  my $dir = $nstr;

  if (-d $dir) {
    system ("rm -rf $dir/*");
  }
  else {
    system "mkdir $dir";
  }
  chdir $dir;
  %all_vars = ();
  %all_addrs_files = ();

  my $res = 0;
  my $cfile;
  $root = "rand$nstr";
  $cfile = "${root}.c";
  goto out if (($res = run_csmith($cfile, 1)) != 0);

  my $normal_exe = "$root.normal.gcc.out";
  goto out if (($res = compile_cfile("gcc", "-O0", $cfile, $normal_exe, 0, $for_unittest)) != 0);
  my $normal_raw_out = "$normal_exe.raw-out";
  goto out if (($res = run_exe($normal_exe, "gcc", $normal_raw_out)) != 0);
  my ($normal_checksum, undef) = parse_output($normal_raw_out);
  die "Invalid checksum" unless (defined($normal_checksum));

  my $checker_out = "$root.checker.out";
  my $all_vars_out = "$root.checker.all.vars.out";
  die "checker failed!" if (($res = run_checker($root, $checker_out, $all_vars_out, $for_unittest)) != 0);
  
  my ($gcc_exe, $gcc_vol_addrs_file, $gcc_all_addrs_file) = get_addrs_file("gcc", $root, $cfile, $checker_out, $all_vars_out, $for_unittest);
  my ($clang_exe, $clang_vol_addrs_file, $clang_all_addrs_file) = get_addrs_file("clang", $root, $cfile, $checker_out, $all_vars_out, $for_unittest);
  uniq_all_addrs_files();

  my $gcc_checksum = get_checksum("gcc", $gcc_exe, $gcc_vol_addrs_file, $gcc_all_addrs_file);
  my $clang_checksum = get_checksum("clang", $clang_exe, $clang_vol_addrs_file, $clang_all_addrs_file);
  die "unmatched checksums[$gcc_checksum, $clang_checksum]!" unless ($gcc_checksum eq $clang_checksum);
  print_msg("checksum matched: [$gcc_checksum, $clang_checksum] ");

out:
  chdir "..";
  return $res if ($KEEP_TEMPS);
  system "rm -rf $dir" unless ($for_unittest && $res);
  return $res;
}

sub do_one_unittest($) {
  my ($root) = @_;

  my $nstr;
  my $for_unittest = 1;
  $nstr = $root;
  my $dir = $nstr;

  if (-d $dir) {
    system ("rm -rf $dir/*");
  }
  else {
    system "mkdir $dir";
  }
  chdir $dir;
  %all_vars = ();
  %all_addrs_files = ();

  my $res = 0;
  my $cfile;
  $cfile = "${root}.c";
  die "failed to copy test: [$cfile]" if (runit("cp $UNITTEST_DIR/$cfile ."));

  my $normal_exe = "$root.normal.gcc.out";
  goto out if (($res = compile_cfile("gcc", "-O0", $cfile, $normal_exe, 0, $for_unittest)) != 0);
  my $normal_raw_out = "$normal_exe.raw-out";
  goto out if (($res = run_exe($normal_exe, "gcc", $normal_raw_out)) != 0);
  my ($normal_checksum, undef) = parse_output($normal_raw_out);
  die "Invalid checksum" unless (defined($normal_checksum));

  my $checker_out = "$root.checker.out";
  my $all_vars_out = "$root.checker.all.vars.out";
  die "checker failed!" if (($res = run_checker($root, $checker_out, $all_vars_out, $for_unittest)) != 0);
  
  my ($gcc_exe, $gcc_vol_addrs_file, $gcc_all_addrs_file) = get_addrs_file("gcc", $root, $cfile, $checker_out, $all_vars_out, $for_unittest);
  uniq_all_addrs_files();
  my $gcc_checksum = get_checksum("gcc", $gcc_exe, $gcc_vol_addrs_file, $gcc_all_addrs_file);
  die "unmatched checksums[$normal_checksum, $gcc_checksum]!" unless ($gcc_checksum eq $normal_checksum);
  print_msg("checksum matched: [$normal_checksum, $gcc_checksum] ");

out:
  chdir "..";
  return $res if ($KEEP_TEMPS);
  system "rm -rf $dir" unless ($for_unittest && $res);
  return $res;
}

sub test_with_csmith() {
  chdir $WORKING_DIR or die;
  for (my $i = 0; $i < $ITERATION; $i++) {
    print "[test $i]...";
    my $res = do_one_test($i, 0);
    if ($res == $CSMITH_FAILED) {
      print "Csmith failed\n";
    }
    elsif ($res == $COMPILER_TIMEOUT_RV) {
      print "compiler timeout\n";
    }
    elsif ($res == $COMPILER_FAILED) {
      print "compiler failed\n";
    }
    elsif ($res == $EXE_TIMEOUT_RV) {
      print "exe timeout\n";
    }
    elsif ($res == $EXE_FAILED) {
      print "exe failed\n";
    }
    elsif ($res != 0) {
      die "uncaught res: $res";
    }
    print "succeeded!\n";
  }

  print "------------------------------\n";
  print "All $ITERATION tests were successful!\n\n";
}

sub do_unittest() {
  my $cwd = cwd();
  chdir $UNITTEST_DIR or die;
  my @all_tests = glob("*.c");
  chdir $cwd or die;

  my @failed = ();
  $UNITTEST_DIR = "$cwd/$UNITTEST_DIR";
  chdir $WORKING_DIR or die;

  print "\nStart unittest...\n";
  print "---------------------------\n\n";
  foreach my $cfile (@all_tests) {
    my $root = $cfile;
    $root =~ s/\.c$//;
    print "Testing [$cfile]...";
    if (do_one_unittest($root) == 0) {
      print "Succeeded\n";
    }
    else {
      print "Failed\n";
      push @failed, $cfile;
    }
  }

  print "\n-------------------------\n";
  if (@failed == 0) {
    print "All tests were successful\n\n";
    return;
  }

  print "Failed tests:\n";
  foreach my $f (@failed) {
    print "  $f\n";
  }
  print "\n";
}

########################################################################

my $help_msg = '
Usage: ./test_pintool_checksum
  where
    --with-csmith: test the pintool using programs generated by Csmith
    --iteration=<num>: how many runs of testing the pintool [default: 100]
    --help: this message
    --quiet: disables verbose message
';

sub die_on_invalid_opt($) {
  print "Invalid opt: $1\n";
  die("$help_msg\n");
}

sub check_prereqs($) {
  my ($with_csmith) = @_;

  print_msg("------ Start Checking Prereqs ------\n");
  if (!(-d $WORKING_DIR)) {
    print_msg("creating working dir[$WORKING_DIR]...");
    mkdir $WORKING_DIR or die "failed";
    print_msg("succeeded\n");
  }
  else {
    system ("rm -rf $WORKING_DIR/*");
  }

  my $cwd = cwd();
  print_msg("chdir to $WORKING_DIR...");
  chdir $WORKING_DIR or die "failed";
  print_msg("succeeded\n");

  my $tmp_dir = "check_prereqs_tmp";
  if (-d $tmp_dir) {
    print_msg("rm -rf $tmp_dir/*");
    system ("rm -rf $tmp_dir/*");
  }
  else {
    print_msg("creating tmp dir[$tmp_dir] for checking Csmith and Pintool...");
    mkdir $tmp_dir or die;
    print_msg("succeeded\n");
  }
 
  print_msg("chdir to $tmp_dir...");
  chdir $tmp_dir or die;
  print_msg("succeeded\n");

  print_msg("checking RunSafely...\n");
  $RunSafely = "RunSafely";
  my $res = runit("$RunSafely 10 1 /dev/null ls_output.txt ls");
  die "failed: is $RunSafely in the PATH env?" if ($res);
  print_msg("succeeded\n");

  print_msg("checking volatile_checker...\n");
  $CHECKER = "volatile_checker";
  if (runit("$CHECKER --help > /dev/null 2>&1")) {
    print_msg("volatile_checker is not in PATH env\n");
    print_msg("one more try...\n");
    $CHECKER = "$cwd/../volatile_checker/volatile_checker";
    if (runit("$CHECKER --help > /dev/null 2>&1")) {
      die "cannot find volatile_checker!";
    }
  }
  print_msg("succeeded: $CHECKER\n");

  print_msg("checking gen_volatile_addr.pl...\n");
  $GEN_VOLATILE_ADDR = "$cwd/gen_volatile_addr.pl";
  if (runit("$GEN_VOLATILE_ADDR --help > /dev/null 2>&1")) {
    die "failed to run $GEN_VOLATILE_ADDR!";
  }
  print_msg("succedded\n");
  goto prereqs_out if (!$with_csmith);

  print_msg("testing Csmith...\n");
  my $cmd = "$CSMITH_BIN --help > /dev/null 2>&1";
  $res = runit($cmd);
  die "failed to execute csmith!" if ($res);
  print_msg("succeeded\n");

  my $cfile = "test.c";
  my $preprocessed_cfile = "test.pre.i";
  my $exe = "a.out";
  my $tries = 20;
  print_msg("testing test cases generated by Csmith...\n");
  my $csmith_ok = 0;
  my $test_case_ok = 0;
  my $run_exe_ok = 0;
  my $checker_out = "checker.addr.out";
  my $all_addr_file = "checker.all.var.addr.out";
  my $pin_vol_addrs_file = "checker.pin.vol.var.addr.out";
  my $pin_all_addrs_file = "checker.pin.all.var.addr.out";
  while ($tries > 0) {
    $tries--;
    next if (run_csmith($cfile, 0));
    $csmith_ok = 1;
    my $res = runit("gcc -E -I$CSMITH_HOME/runtime $cfile > $preprocessed_cfile 2>&1");
    next if (compile_cfile("gcc", "-O0", $preprocessed_cfile, $exe, 1, 0));
    next if (runit("$CHECKER --checker=volatile-address --all-vars-output=$all_addr_file $preprocessed_cfile > $checker_out 2>&1"));
    next if (runit("$GEN_VOLATILE_ADDR --vars-file=$checker_out --all-vars-file=$all_addr_file --all-var-addrs-output=$pin_all_addrs_file $exe > $pin_vol_addrs_file 2>&1"));
    $test_case_ok = 1;
    my $raw_out = "$exe.raw-out";
    if (run_exe_with_pin($exe, "gcc", $raw_out, $pin_vol_addrs_file, $pin_all_addrs_file) == 0) {
      $run_exe_ok = 1;
      last;
    }
  }
  if (!$csmith_ok) {
    die "csmith did not work!\n";
  }
  elsif (!$test_case_ok) {
    die "no working test cases!\n";
  }
  elsif (!$run_exe_ok) {
    die "cannot run generated test cases!\n";
  }

prereqs_out:
  print_msg("chdir $cwd\n");
  chdir $cwd or die;
  print_msg("all prereqs passed!\n");
}

sub main() {
  my $opt;
  my @unused = ();
  my $with_csmith = 0;

  while(defined ($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "iteration") {
        $ITERATION = $2;
      }
      else {
        die_on_invalid_opt($opt);
      }
    }
    elsif ($opt =~ m/^--(.+)$/) {
      if ($1 eq "quiet") {
        $VERBOSE = 0;
      }
      elsif ($1 eq "with-csmith") {
        $with_csmith = 1;
      }
      elsif ($1 eq "keep-temps") {
        $KEEP_TEMPS = 1;
      }
      elsif ($1 eq "help") {
        print $help_msg;
        return;
      }
      else {
        die_on_invalid_opt($opt);
      }
    }
  }

  die_one_invalid_opt($unused[0]) if (@unused != 0);
  check_prereqs($with_csmith);
  if ($with_csmith) {
    test_with_csmith();
  }
  else {
    do_unittest();
  }
}

main();
