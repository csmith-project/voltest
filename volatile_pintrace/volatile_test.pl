#!/usr/bin/perl

use strict;
use warnings;
use Cwd;
use English;
use Digest::MD5 qw(md5 md5_hex md5_base64);
use File::stat;

my $PIN_HOME = $ENV{"PIN_HOME"};
die "Please set PIN_HOME env!"
  unless defined ($PIN_HOME);

my $CSMITH_HOME = $ENV{"CSMITH_HOME"};
die "Please set CSMITH_HOME env!"
  unless defined ($CSMITH_HOME);

# subject to change based on cmd options
my $PIN_OUTPUT_MODE = "-output_mode checksum";
my $PIN_SEED = "";
my $PIN_RANDOM_READ = "";
my $WORKING_DIR = "work0";
#my $ITERATION = 100000000;
my $ITERATION = 100;
my $USE_SWARM = 1;
my $VERBOSE = 1;
my $CHECKER;
my $GEN_VOLATILE_ADDR;
my $RunSafely;

##########################################################
# compilers under test
my $COMPILER_COMMON_OPTS = "-w -DINLINE= -DCSMITH_MINIMAL -DWRAP_VOLATILES=0";

my @clang_opts = (
    "-O0 ",
    "-O1 ",
    "-O2",
    "-Os ",
    "-O3 ",
    );

my @gcc_opts = (
    "-O0",
    "-O1", 
    "-O2", 
    "-Os", 
    "-O3",
    );

my $Z = "/home/regehr/z/compilers";

my @gcc450 = ("ia32",
              "gcc",
              "$Z/gcc-450/bin/gcc-450",
              \@gcc_opts);

my @gcc440 = ("ia32",
              "gcc",
              "$Z/gcc-440/bin/gcc-440",
              \@gcc_opts);

my @gcc430 = ("ia32",
              "gcc",
              "$Z/gcc-430/bin/gcc-430",
              \@gcc_opts);

my @gcc420 = ("ia32",
              "gcc",
              "$Z/gcc-420/bin/gcc-420",
              \@gcc_opts);

my @gcc410 = ("ia32",
              "gcc",
              "$Z/gcc-410/bin/gcc-410",
              \@gcc_opts);

my @gcc400 = ("ia32",
              "gcc",
              "$Z/gcc-400/bin/gcc-400",
              \@gcc_opts);

my @gcccurrent = ("ia32",
                  "gcc",
                  "gcc",
                  \@gcc_opts);

my @clang = ("ia32",
             "clang",
             "clang",
             \@clang_opts);

my @compilers_to_test = (
    \@clang,
    \@gcccurrent,
);

#########################################################

my @ALL_SWARM_OPTS = (
    "argc",
    "arrays",
    "bitfields",
    #"checksum",
    "comma-operators",
    "compound-assignment",
    "consts",
    "divs",
    "embedded-assigns",
    "incr-decr-operators",
    "jumps",
    "longlong",
    "force-non-uniform-arrays",
    "math64",
    "muls",
    "packed-struct",
    "paranoid",
    "pointers",
    "structs",
    "unions",
    #"volatiles",
    #"volatile-pointers",
    #"return-structs",
    #"arg-structs",
    #"return-unions",
    #"arg-unions",
    #"dangling-global-pointers",
    #"return-dead-pointer",
    #"union-read-type-sensitive",
    );

#########################################################

my $PIN_ADDR_FILE = "vol_addr.txt";
my $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so -vol_input $PIN_ADDR_FILE";
my $CSMITH_BIN = "$CSMITH_HOME/src/csmith";
my $CSMITH_VOL_OPTS = "";

my $MIN_PROGRAM_SIZE = 30000;
my $COMPILER_TIMEOUT = 600;
my $PROG_TIMEOUT = 5;
my $PIN_PROG_TIMEOUT = 30;
my $CSMITH_TIMEOUT = 180; 
my $TIMEOUT_RES = 137;
#on darwin timeout res is 152 instead of 137
$TIMEOUT_RES = 152 if ($OSNAME =~ /darwin/);

my %checksums;

##########################################################

sub print_msg($) {
    my $msg = shift;
    print $msg if ($VERBOSE);
}

sub runit ($) {
  my $cmd = shift;
  if ((system "$cmd") == -1) {
    print "FAIL: system '$cmd': $?";
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

sub read_value_from_file($$) {
  my ($fn, $match) = @_;
  open INF, "<$fn" or die;
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/$match/) {
        close INF;
        return $1;
    }
  }
  close INF;
  return "";
}

sub get_seed($) {
  my ($fn) = @_;
 
  my $seed = read_value_from_file($fn, "Seed:\\s+([0-9]+)\$");
  if ($seed ne "") {
    return $seed; 
  }
  else {
    print STDERR "Can't extract seed from $fn!\n";
    return "";
  }
}

sub run_csmith($$) {
  my ($cfile, $redirect_output) = @_;

  my $SWARM_OPTS = "";
  if ($USE_SWARM) {
    foreach my $opt (@ALL_SWARM_OPTS) {
      if (rand() < 0.5) {
        $SWARM_OPTS .= " --$opt ";
      } else {
        $SWARM_OPTS .= " --no-$opt ";
      }
    }
  }

  my $cmd = "$CSMITH_BIN $SWARM_OPTS $CSMITH_VOL_OPTS --output $cfile";
  my $csmith_cmd = "$RunSafely $CSMITH_TIMEOUT 1 /dev/null csmith_output.txt $cmd";
  my $res = runit($csmith_cmd);
  if (($res != 0) || !(-f "$cfile")) {
    print STDERR "CSMITH FAILED\n";
    system "cat csmith_output.txt" if ($redirect_output);
    if (-f "$cfile") {
      my $seed = get_seed($cfile);
      print STDERR "Seed = $seed\n";
    }
    return -1;
  }

  # for checking pre-reqs
  return if (!$redirect_output);

  my $filesize = stat("$cfile")->size;
  print "$cfile is $filesize bytes\n";
  if ($filesize < $MIN_PROGRAM_SIZE) {
    print "FILE TOO SMALL\n";
    return -1;
  }

  my $seed;
  my $prog = "";
  my $vcount = 0;

  open INF, "<$cfile" or die;
  while (my $line = <INF>) {
    if ($line =~ /volatile/) {
      $vcount++;
    }
    if ($line =~ /Seed:\s+([0-9]+)$/) {
      $seed = $1;
    }
    chomp $line;
    $prog .= "$line ";
  }
  close INF;
  die if (!defined($seed));
  print "regenerate with: '$cmd -s $seed'\n";

  ($prog =~ s/\/\*(.*?)\*\///g);
  my $digest = md5($prog);
  if ($checksums{$digest}) {
    print "BAD PROGRAM: DUPLICATE\n";
    return -1;
  }
  $checksums{$digest} = 1;

  if ($vcount < 1) {
    print "NOT ENOUGH VOLATILES\n";
    return -1;
  }
}

sub compile_cfile($$$$$$) {
  my ($arch, $compiler_cmd, $compiler_opt, $cfile, $exe, $redirect_output) = @_;

  my $compiler_out = "$exe.out";
  my $cmd = "$RunSafely $COMPILER_TIMEOUT 1 /dev/null $compiler_out $compiler_cmd $compiler_opt $COMPILER_COMMON_OPTS -I$CSMITH_HOME/runtime $cfile -o $exe";
  print "[$arch]: $compiler_cmd $compiler_opt: $cmd\n";
  my $res = runit($cmd);
  if ($res || !(-f $exe)) {
    if ($res == $TIMEOUT_RES) {
      print STDERR "COMPILER FAILURE: TIMEOUT\n" if ($redirect_output);
    }
    elsif ($redirect_output) {
      print STDERR "COMPILER FAILURE with return code $res; output is:\n";
      open INF, "<$compiler_out" or die;
      while (my $line = <INF>) { print "  $line"; }
      close INF
    }
  }
  return $res;
}

sub run_exe($$$$) {
  my ($exe, $compiler, $raw_out, $redirect_output) = @_;
 
  my $res = runit("$RunSafely $PROG_TIMEOUT 1 /dev/null $raw_out ./$exe");
  if ($res == 0) {
    my $pin_cmd = "$RunSafely $PIN_PROG_TIMEOUT 1 /dev/null $raw_out $PIN_BIN $PIN_OUTPUT_MODE $PIN_SEED $PIN_RANDOM_READ -- ./$exe";
    print "$pin_cmd\n";
    $res = runit($pin_cmd);
  }

  if ($res == $TIMEOUT_RES) {
    print STDERR "TIMEOUT\n" if ($redirect_output);
  }
  elsif ($res != 0) {
    print STDERR "UNEXPECTED $compiler PROGRAM FAIL, retval = ${res}\n" 
      if ($redirect_output);
  }
  return $res;
}

sub get_exe_filename($$$) {
  my ($root, $compiler, $opt) = @_;

  my $opt_str = $opt;
  ($opt_str =~ s/\ //g);
  ($opt_str =~ s/\://g);
  ($opt_str =~ s/\-//g);
  ($opt_str =~ s/\///g);
  if (length($opt_str)>40) {
    $opt_str = substr ($opt_str, 0, 40);
  }
  my $exe = "${root}${compiler}${opt_str}_exe";
  ($exe =~ s/\.//g);
  ($exe =~ s/\///g);
  return $exe;
}

sub parse_summary_output(*) {
  local *HANDLE = $_[0];

  my $checksum = undef;
  my $vol_str = "";
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "ERROR: duplicated checksum!\n";
        return (undef, undef) 
      }
      $checksum = $1;
    }
    elsif ($line =~ m/&(.+)\s*:\s*([0-9]+)\s*:\s*([0-9]+)\s*reads,\s*([0-9]+)\s*writes/) {
      $vol_str .= "$line\n";
    }
  }
  return ($checksum, $vol_str);
}

sub parse_checksum_output(*) {
  local *HANDLE = $_[0];

  my $checksum = undef;
  my $vol_str = undef;
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/vol_access_checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($vol_str)) {
        print STDERR "ERROR: duplicated vol_access_checksum!\n";
        return (undef, undef) 
      }
      $vol_str = "vol_access_checksum = $1\n";
    }
    elsif ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "ERROR: duplicated checksum!\n";
        return (undef, undef) 
      }
      $checksum = $1;
    }
  }
  return ($checksum, $vol_str);
}

sub parse_verbose_output(*) {
  local *HANDLE = $_[0];

  my $checksum = undef;
  my $vol_str = "";
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "ERROR: duplicated checksum!\n";
        return (undef, undef) 
      }
      $checksum = $1;
    }
    elsif ($line =~ m/name:&(.+),\s*read from addr:\s*([0-9a-fA-F]+),\s*value:\s*([0-9a-fA-F]+)/) {
      $vol_str .= "$line\n";
    }
  }
  return ($checksum, $vol_str);
}

sub parse_output($) {
  my ($out) = @_;

  my $checksum; 
  my $vol_str;
  open INF, "<$out" or die;
  if ($PIN_OUTPUT_MODE =~ m/summary/) {
    ($checksum, $vol_str) = parse_summary_output(*INF);
  }
  elsif ($PIN_OUTPUT_MODE =~ m/checksum/) {
    ($checksum, $vol_str) = parse_checksum_output(*INF);
  }
  elsif ($PIN_OUTPUT_MODE =~ m/verbose/) {
    ($checksum, $vol_str) = parse_verbose_output(*INF);
  }
  else {
    die "Cannot happen: invalid PIN_OUTPUT_MODE[$PIN_OUTPUT_MODE]!";
  }
  close INF;
  return ($checksum, $vol_str);
}

sub test_one_compiler($$$) {
  my ($root, $compiler_ref, $checker_out) = @_;

  my ($arch, undef, $compiler, $optref) = @{$compiler_ref};
  my @OPTS = @{$optref};
  print "--------------------\n";

  my %vol_results;
  my %csums;

  my $success = 0;
  my $compiler_fail = 0;

  foreach my $opt (@OPTS) {
    my $cfile = "$root.c";
    my $exe = get_exe_filename($root, $compiler, $opt);
    if (compile_cfile($arch, $compiler, $opt, $cfile, $exe, 1) != 0) {
      $compiler_fail++;
      next;
    }

    my $res = runit("$GEN_VOLATILE_ADDR --address-file=$checker_out $exe > $PIN_ADDR_FILE 2>&1");
    if ($res != 0) {
      print STDERR "$GEN_VOLATILE_ADDR failed to run\n";
      return (1, undef, undef, undef);
    }

    my $raw_out = "$exe.raw-out";
    $res = run_exe($exe, $compiler, $raw_out, 0);
    if (-f "$PIN_ADDR_FILE") {
      system("mv $PIN_ADDR_FILE ${exe}_vol_addr.txt");
    }
    if ($res == $TIMEOUT_RES) {
      my $timeout = "TIMEOUT";
      $vol_results{$opt} = $timeout;
      $csums{$opt} = $timeout;
      print "$timeout\n";
      next;
    }
    elsif ($res != 0) {
      print STDERR "couldn't compute access summary\n";
      return (1, undef, undef, undef);
    }

    system "grep 'cpu time' ${exe}.raw-out.time";
    $success++;
    my ($checksum, $vol_str) = parse_output($raw_out);
    if (!defined($checksum)) {
      print STDERR "couldn't get checksum!\n";
      return (1, undef, undef, undef);
    }
    print "$vol_str" if (defined($vol_str));
    print "checksum = $checksum\n";

    $vol_results{$opt} = $vol_str;
    $csums{$opt} = $checksum;
  }

  my $vol_result;
  my $csum;
  my $writes;

  if ($compiler_fail > 0) {
    print "COMPILER FAILED $compiler\n";
  }

  if ($success > 0) {
    my $consistent = 1;
    foreach my $opt (keys %vol_results) {
      if (defined($vol_result)) {
        if (($csum ne $csums{$opt}) &&
            ($csum ne "TIMEOUT" && $csums{$opt} ne "TIMEOUT")) {
          print "INTERNAL CHECKSUM FAILURE $compiler $opt\n";
          $consistent = 0;
          last;
        }
        if ($vol_result ne $vol_results{$opt}) {
          print "INTERNAL VOLATILE FAILURE $compiler $opt\n";
          $consistent = 0;
          last;
        }
      }
      else {
        $vol_result = $vol_results{$opt};
        $csum = $csums{$opt};
      }
    }
    return (0, $consistent, $vol_result, $csum);
  }
  else {
    return (0, 0, $vol_result, $csum);
  }
}

sub test_one_program($) {
  my ($root) = @_;

  my $vol_result;
  my $csum;

  my $checker_out = "$root.checker.out";
  my $res = runit("gcc -E -I$CSMITH_HOME/runtime $root.c > ${root}.pre.i 2>&1");
  if ($res) {
    print STDERR "preprocessor FAILED!\n";
    return -1;
  }
  $res = runit("$CHECKER --checker=volatile-address $root.pre.i > $checker_out 2>&1");
  if ($res) {
    print STDERR "volatile_checker FAILURE\n";
    return -1;
  }

  foreach my $compiler_ref (@compilers_to_test) {
    (my $abort_test, my $consistent, my $tmp_vol_result, my $tmp_csum) =
        test_one_compiler ($root, $compiler_ref, $checker_out);

    return -1 if ($abort_test);

    (undef, undef, my $compiler, undef) = @{$compiler_ref};
    print "COMPLETED TEST $compiler\n";

    # ignore internally inconsistent results
    next if (!$consistent);

    if (defined ($vol_result) &&
        defined ($csum)) {

      if ($vol_result ne $tmp_vol_result) {
        print "EXTERNAL VOLATILE FAILURE\n";
      }
      if (($csum ne $tmp_csum) &&
          ($csum ne "TIMEOUT") &&
          ($tmp_csum ne "TIMEOUT")) {
        print "EXTERNAL CHECKSUM FAILURE\n";
      }
    } else {
      $vol_result = $tmp_vol_result;
      $csum = $tmp_csum;
    }
  }
  return 0;
}

my $GOOD = 0;
sub do_one_test($) {
  my ($n) = @_;

  print "------ RANDOM PROGRAM $n ------\n";
  if (($n%100)==0) {
      print "timestamp: ";
      system "date";
  }
  my $nstr = sprintf "%06d", $n;
  my $dir = "$WORKING_DIR/$nstr";

  if (-d $dir) {
    system ("rm -rf $dir/*");
  }
  else {
    system "mkdir $dir";
  }
  chdir $dir;

  my $fn = "rand$nstr";
  my $cfile = "${fn}.c";
  goto out if (run_csmith($cfile, 1) != 0);
  my $res = test_one_program($fn);
  if ($res == 0) {
    print "GOOD PROGRAM: number $GOOD\n";
    $GOOD++;
  }
  else {
    print "BAD PROGRAM: doesn't count towards goal.\n";
  }

out:
  chdir "../..";
  system "rm -rf $dir";
}

sub go_test() {
  for (my $i = 0; $i < $ITERATION; $i++) {
    do_one_test($i);
    print "\n";
  }
}

################################################################################

my $help_msg = '
Usage: volatile_test.pl --work-dir=[dir] --pin-output-mode=[checksum|verbose|summary] --enable-pin-random-read
  Options:
  --work-dir=[dir]: specify the work-dir (default: work0)
  --pin-output-mode=[checksum|verbose|summary]: specify the output mode of the pintool (default: checksum)
  --enable-pin-random-read: enable pintool to inject random values to volatile reads
  --iteration=[num]: specify how many testing runs (default: 100000000)
  --disable-swarm: disable swarm options
  --help: this message
';

sub die_on_invalid_opt($) {
  print "Invalid opt: $1\n";
  die("$help_msg\n");
}

sub check_prereqs() {
  print_msg("------ Start Checking Prereqs ------\n");
  if (!(-d $WORKING_DIR)) {
    print_msg("creating working dir[$WORKING_DIR]...");
    mkdir $WORKING_DIR or die "failed";
    print_msg("succeeded\n");
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
  $RunSafely = "$cwd/RunSafely";
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

  print_msg("testing Csmith...\n");
  my $cmd = "$CSMITH_BIN --help > /dev/null 2>&1";
  $res = runit($cmd);
  die "failed to execute csmith!" if ($res);
  print_msg("succeeded\n");

  my $cfile = "test.c";
  my $exe = "a.out";
  my $tries = 20;
  print_msg("testing test cases generated by Csmith...\n");
  my $csmith_ok = 0;
  my $test_case_ok = 0;
  my $run_exe_ok = 0;
  my $checker_out = "checker.addr.out";
  while ($tries > 0) {
    $tries--;
    next if (run_csmith($cfile, 0));
    $csmith_ok = 1;
    next if (compile_cfile("ia32", "gcc", "-O0", $cfile, $exe, 0));
    next if (runit("$CHECKER --checker=volatile-address $cfile > $checker_out 2>&1"));
    next if (runit("$GEN_VOLATILE_ADDR --address-file=$checker_out $exe > $PIN_ADDR_FILE 2>&1"));
    $test_case_ok = 1;
    my $raw_out = "$exe.raw-out";
    if (run_exe($exe, "gcc", $raw_out, 0) == 0) {
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

  print_msg("chdir $cwd\n");
  chdir $cwd or die;
  print_msg("all prereqs passed!\n");
}

sub main() {
  my $opt;
  my @unused = ();

  while(defined ($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "pin-output-mode") {
        die_on_invalid_opt($opt) if (($2 ne "checksum") && ($2 ne "summary") && ($2 ne "verbose"));
        $PIN_OUTPUT_MODE = "-output_mode $2";
      }
      elsif ($1 eq "pin-seed") {
        $PIN_SEED = $2;
      }
      elsif ($1 eq "work-dir") {
        $WORKING_DIR = $2;
      }
      elsif ($1 eq "iteration") {
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
      elsif ($1 eq "enable-pin-random-read") {
        $PIN_RANDOM_READ = "-random_read";
      }
      elsif ($1 eq "disable-swarm") {
        $USE_SWARM = 0;
      }
      elsif ($1 eq "help") {
        print $help_msg;
        return;
      }
      else {
        die_on_invalid_opt($opt);
      }
    }
    else {
      push @unused, $opt;
    }
  }

  die_on_invalid_opt($unused[0]) if (@unused != 0);
  check_prereqs();
  go_test();
}

main();

