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
my $ITERATION = 500;
my $USE_SWARM = 1;
my $VERBOSE = 1;
my $TARGET_M32 = 0;
my $TARGET_M32_OPT = "";
my $SKIP_TIMEOUT = 1;
my $KEEP_TEMPS = 0;
my $USE_PIN_CHECKSUMS = 0;
my $USE_SEQUENTIAL_SEEDS = 0;
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
    "pre-incr-operator",
    "pre-decr-operator",
    "post-incr-operator",
    "post-decr-operator",
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

my $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so";
my $CSMITH_BIN = "$CSMITH_HOME/src/csmith";
my $CSMITH_VOL_OPTS = "";

my $MIN_PROGRAM_SIZE = 30000;
my $COMPILER_TIMEOUT = 600;
my $PROG_TIMEOUT = 30;
my $PIN_PROG_TIMEOUT = 300;
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
  # print "runit: $cmd\n";
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

sub run_csmith($$$) {
  my ($cfile, $n, $check_size) = @_;

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

  my $seed_opts = "";
  if ($USE_SEQUENTIAL_SEEDS && ($n >= 0)) {
    $seed_opts = "--seed $n";
  }
  my $cmd = "$CSMITH_BIN $SWARM_OPTS $CSMITH_VOL_OPTS $seed_opts --output $cfile";
  my $csmith_cmd = "$RunSafely $CSMITH_TIMEOUT 1 /dev/null csmith_output.txt $cmd";
  my $res = runit($csmith_cmd);
  if (($res != 0) || !(-f "$cfile")) {
    print STDERR "CSMITH FAILED\n";
    print STDERR "$cmd\n";
    system "cat csmith_output.txt";
    if (-f "$cfile") {
      my $seed = get_seed($cfile);
      print STDERR "Seed = $seed\n";
    }
    return -1;
  }

  # for checking pre-reqs
  return 0 if (!$check_size);

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

sub compile_cfile($$$$$) {
  my ($arch, $compiler_cmd, $compiler_opt, $cfile, $exe) = @_;

  my $compiler_out = "$exe.out";
  my $target_opt = "";
  $target_opt = "-m32" if ($TARGET_M32);
  my $cmd = "$RunSafely $COMPILER_TIMEOUT 1 /dev/null $compiler_out $compiler_cmd $compiler_opt $target_opt $COMPILER_COMMON_OPTS -I$CSMITH_HOME/runtime $cfile -o $exe";
  print "[$arch]: $compiler_cmd $compiler_opt: $cmd\n";
  my $res = runit($cmd);
  if ($res || !(-f $exe)) {
    if ($res == $TIMEOUT_RES) {
      print STDERR "COMPILER FAILURE: TIMEOUT\n";
    }
    else {
      print STDERR "COMPILER FAILURE with return code $res; output is:\n";
      open INF, "<$compiler_out" or die;
      while (my $line = <INF>) { print "  $line"; }
      close INF
    }
  }
  return $res;
}

sub run_exe_with_pin($$$$) {
  my ($pin_cmd, $exe, $compiler, $raw_out) = @_;

  my $res = runit("$RunSafely $PROG_TIMEOUT 1 /dev/null $raw_out ./$exe");
  if ($res == 0) {
    my $cmd = "$RunSafely $PIN_PROG_TIMEOUT 1 /dev/null $raw_out $pin_cmd -- ./$exe";
    print "$cmd\n";
    $res = runit($cmd);
  }

  if ($res == $TIMEOUT_RES) {
    print STDERR "TIMEOUT\n";
  }
  elsif ($res != 0) {
    print STDERR "UNEXPECTED $compiler PROGRAM FAIL, retval = ${res}\n";
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
  my $pintool_seed = undef;
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "ERROR: duplicated checksum!\n";
        return (undef, undef, undef); 
      }
      $checksum = $1;
    }
    elsif ($line =~ m/pintool_seed[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($pintool_seed)) {
        print STDERR "ERROR: duplicated pintool_seed!\n";
        return (undef, undef, undef); 
      }
      $pintool_seed = $1;
    }
    elsif ($line =~ m/&(.+)\s*:\s*([0-9]+)\s*:\s*([0-9]+)\s*reads,\s*([0-9]+)\s*writes/) {
      $vol_str .= "$line\n";
    }
  }
  return ($checksum, $vol_str, $pintool_seed);
}

sub parse_checksum_output(*$) {
  local *HANDLE = $_[0];
  my $vol_checksum_str = $_[1];

  my $checksum = undef;
  my $vol_str = undef;
  my $pintool_seed = undef;
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/$vol_checksum_str[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($vol_str)) {
        print STDERR "ERROR: duplicated vol_access_checksum!\n";
        return (undef, undef, undef); 
      }
      $vol_str = "$vol_checksum_str = $1\n";
    }
    elsif ($line =~ m/pintool_seed[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($pintool_seed)) {
        print STDERR "ERROR: duplicated pintool_seed!\n";
        return (undef, undef, undef); 
      }
      $pintool_seed = $1;
    }
    elsif ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "ERROR: duplicated checksum!\n";
        return (undef, undef, undef);
      }
      $checksum = $1;
    }
  }
  return ($checksum, $vol_str, $pintool_seed);
}

sub parse_verbose_output(*) {
  local *HANDLE = $_[0];

  my $checksum = undef;
  my $vol_str = "";
  my $pintool_seed = undef;
  while (my $line = <HANDLE>) {
    chomp $line;
    if ($line =~ m/checksum[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($checksum)) {
        print STDERR "POSSIBLE PINTOOL FAILURE: duplicated checksum!\n";
        return (undef, undef, undef) 
      }
      $checksum = $1;
    }
    elsif ($line =~ m/pintool_seed[\s\t]*=[\s\t]*([0-9a-fA-F]+)/) {
      if (defined($pintool_seed)) {
        print STDERR "ERROR: duplicated pintool_seed!\n";
        return (undef, undef, undef); 
      }
      $pintool_seed = $1;
    }
    elsif ($line =~ m/name:&(.+),\s*read from addr:\s*([0-9a-fA-F]+),\s*value:\s*([0-9a-fA-F]+)/) {
      $vol_str .= "$line\n";
    }
  }
  return ($checksum, $vol_str, $pintool_seed);
}

sub parse_output($) {
  my ($out) = @_;

  my $checksum; 
  my $vol_str;
  my $pintool_seed;
  my $mode = $PIN_OUTPUT_MODE;
  $mode =~ s/-output_mode[\s\t]+//g;
  open INF, "<$out" or die;
  if ($mode eq "summary") {
    ($checksum, $vol_str, $pintool_seed) = parse_summary_output(*INF);
  }
  elsif ($mode eq "checksum") {
    ($checksum, $vol_str, $pintool_seed) = parse_checksum_output(*INF, "vol_access_checksum");
  }
  elsif ($mode eq "ordered-checksum") {
    ($checksum, $vol_str, $pintool_seed) = parse_checksum_output(*INF, "ordered_access_checksum");
  }
  elsif ($mode eq "verbose") {
    ($checksum, $vol_str, $pintool_seed) = parse_verbose_output(*INF);
  }
  elsif ($mode eq "ordered-verbose") {
    ($checksum, $vol_str, $pintool_seed) = parse_verbose_output(*INF);
  }
  else {
    die "Cannot happen: invalid PIN_OUTPUT_MODE[$PIN_OUTPUT_MODE]!";
  }
  close INF;
  return ($checksum, $vol_str, $pintool_seed);
}

sub run_exe($$$$$$$) {
  my ($pin_cmd, $exe, $compiler, $opt, $vol_results_ref, $csums_ref, $pintool_seeds_ref) = @_;

  my $raw_out = "$exe.raw-out";
  my $res = run_exe_with_pin($pin_cmd, $exe, $compiler, $raw_out);

  if ($res == $TIMEOUT_RES) {
    my $timeout = "TIMEOUT";
    $vol_results_ref->{$opt} = $timeout;
    $csums_ref->{$opt} = $timeout;
    # print "$timeout\n";
    return $res;
  }
  elsif ($res != 0) {
    print STDERR "couldn't compute access summary\n";
    return -1;
  }

  system "grep 'cpu time' ${exe}.raw-out.time";
  my ($checksum, $vol_str, $pintool_seed) = parse_output($raw_out);
  if (!defined($checksum)) {
    print STDERR "couldn't get checksum!\n";
    return -1;
  }
  print "$vol_str" if (defined($vol_str));
  print "checksum = $checksum\n";
  print "pintool_seed = $pintool_seed\n" if (defined($pintool_seed));

  $vol_results_ref->{$opt} = $vol_str;
  $csums_ref->{$opt} = $checksum;
  $pintool_seeds_ref->{$opt} = $pintool_seed;
  return 0;
}

sub check_internal_consistency($$$) {
  my ($compiler, $vol_results_ref, $csums_ref) = @_;
  my $consistent = 1;
  my $vol_result;
  my $csum;

  foreach my $opt (keys %$vol_results_ref) {
    if (defined($vol_result)) {
      my $curr_sum = $csums_ref->{$opt};
      if (($csum ne $curr_sum) &&
          ($csum ne "TIMEOUT" && $curr_sum ne "TIMEOUT")) {
        print "INTERNAL CHECKSUM FAILURE $compiler $opt\n";
        $consistent = 0;
        last;
      }
      if ($vol_result ne $vol_results_ref->{$opt}) {
        print "INTERNAL VOLATILE FAILURE $compiler $opt\n";
        $consistent = 0;
        last;
      }
    }
    else {
      $vol_result = $vol_results_ref->{$opt};
      $csum = $csums_ref->{$opt};
    }
  }
  return ($consistent, $vol_result, $csum);
}

sub check_external_consistency($$$$) {
  my ($vol_result, $tmp_vol_result, $csum, $tmp_csum) = @_;

  if ($vol_result ne $tmp_vol_result) {
    print "EXTERNAL VOLATILE FAILURE\n";
  }
  if (($csum ne $tmp_csum) &&
      ($csum ne "TIMEOUT") &&
      ($tmp_csum ne "TIMEOUT")) {
    print "EXTERNAL CHECKSUM FAILURE\n";
  }
}

sub test_one_compiler($$$) {
  my ($root, $compiler_ref, $checker_vols_out) = @_;

  my ($arch, undef, $compiler, $optref) = @{$compiler_ref};
  my @OPTS = @{$optref};
  print "--------------------\n";

  my $success = 0;
  my $compiler_fail = 0;

  my %vol_results;
  my %csums;
  my %pintool_seeds;
  my $first = 1;
  my $pintool_seed = undef;
  foreach my $opt (@OPTS) {
    my $cfile = "$root.c";
    my $exe = get_exe_filename($root, $compiler, $opt);
    if (compile_cfile($arch, $compiler, $opt, $cfile, $exe) != 0) {
      $compiler_fail++;
      next;
    }

    my $vol_addrs_out = "${exe}.vols.addrs.out";
    my $res = runit("$GEN_VOLATILE_ADDR --vars-file=$checker_vols_out $exe > $vol_addrs_out 2>&1");
    if ($res != 0) {
      print STDERR "$GEN_VOLATILE_ADDR failed to run\n";
      return (1, undef, undef, undef);
    }

    my $pin_cmd = "$PIN_BIN -vol_input $vol_addrs_out $PIN_OUTPUT_MODE $PIN_SEED $PIN_RANDOM_READ";
    $res = run_exe($pin_cmd, $exe, $compiler, $opt, \%vol_results, \%csums, \%pintool_seeds);
    if (($PIN_RANDOM_READ ne "") && ($PIN_SEED eq "") && $first) {
      $PIN_SEED = "-seed $pintool_seeds{$opt}";
    }
    $first = 0;
    if ($res == $TIMEOUT_RES) {
      if ($SKIP_TIMEOUT) {
        return (1, undef, undef, undef);
      }
      else {
        next;
      }
    }
    return (1, undef, undef, undef) if ($res);
    $success++;
  }

  if ($compiler_fail > 0) {
    print "COMPILER FAILED $compiler\n";
  }

  if ($success > 0) {
    my ($consistent, $vol_result, $csum) = check_internal_consistency($compiler, \%vol_results, \%csums);
    return (0, $consistent, $vol_result, $csum);
  }
  else {
    return (0, 0, undef, undef);
  }
}

sub do_normal_test($$) {
  my ($root, $checker_vols_out) = @_;

  my $vol_result;
  my $csum;

  foreach my $compiler_ref (@compilers_to_test) {
    (my $abort_test, my $consistent, my $tmp_vol_result, my $tmp_csum) =
        test_one_compiler ($root, $compiler_ref, $checker_vols_out);

    return -1 if ($abort_test);

    (undef, undef, my $compiler, undef) = @{$compiler_ref};
    print "COMPLETED TEST $compiler\n";

    # ignore internally inconsistent results
    next if (!$consistent);

    if (defined ($vol_result) &&
        defined ($csum)) {
      check_external_consistency($vol_result, $tmp_vol_result, 
                                 $csum, $tmp_csum);
    }
    else {
      $vol_result = $tmp_vol_result;
      $csum = $tmp_csum;
    }
  }
}

sub get_full_name($) {
  my ($line) = @_;

  my @a = split(';', $line);
  die "bad line:$line" unless((@a == 4) || (@a == 5));
  my $name = $a[0];
  $name =~ s/[\s\t]//g;
  return $name;
}

sub add_one_var($$$) {
  my ($line, $visited_names_ref, $all_vars_ref) = @_;

  my $name = get_full_name($line);

  # we have something like the following due to bitfields:
  # (g_93+0).f0; 0x40c188; 2; non-pointer
  # (g_93+0).f0; 0x40c18a; 1; non-pointer; e0
  # only need to count the name once for this case,
  # otherwise, uniq_all_addrs_files will be broken
  my $visited = $visited_names_ref->{$name};
  return if (defined($visited));

  $visited_names_ref->{$name} = 1;
  my $count = $all_vars_ref->{$name};
  if (defined($count)) {
    $all_vars_ref->{$name} = $count+1;
  }
  else {
    $all_vars_ref->{$name} = 1;
  }
}

sub filter_globals($$$) {
  my ($fname, $all_addrs_files_ref, $all_vars_ref) = @_;

  # print "file:$fname\n";
  my %visited_names = ();
  my @all_lines = ();
  my $s = "";
  open INF, "<$fname" or die "cannot open $fname!";
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/^[(\s\t]*g_/) {
      $s .= "$line\n";
      add_one_var($line, \%visited_names, $all_vars_ref);
      push @all_lines, $line;
    }
  }
  close INF;
  @all_lines = sort @all_lines;
  $all_addrs_files_ref->{$fname} = \@all_lines;
=comment
  open OUT, ">$fname" or die "cannot open $fname!";
  print OUT $s;
  close OUT;
=cut
}

# compilers may not emit globals in an object, e.g.
# static const int g_1 = 0;
# the object code generated by clang won't have reference
# to g_1; however, gcc does. 
# Therefore, we only keep common vars appearing all objects.
# also, we need to sort these common vars
sub uniq_all_addrs_files($$) {
  my ($all_addrs_files_ref, $all_vars_ref) = @_;

  my $num_files = scalar(keys %$all_addrs_files_ref);

  foreach my $file (keys %$all_addrs_files_ref) {
    my $file_lines = $all_addrs_files_ref->{$file};
    my $s = "";
    foreach my $line (@$file_lines) {
      my $name = get_full_name($line);  
      my $count = $all_vars_ref->{$name};
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

# only invoke one compiler;
# delay the process of running exes
sub invoke_one_compiler($$$$$$$) {
  my ($root, $compiler_ref, $checker_vols_out, 
      $checker_all_addrs_out, $all_addrs_files_ref, 
      $all_pin_cmds_ref, $all_vars_ref) = @_;

  my ($arch, undef, $compiler, $optref) = @{$compiler_ref};
  my @all_cmds = ();
  my @OPTS = @{$optref};
  my $compiler_fail = 0;

  foreach my $opt (@OPTS) {
    my $cfile = "$root.c";
    my $exe = get_exe_filename($root, $compiler, $opt);
    if (compile_cfile($arch, $compiler, $opt, $cfile, $exe) != 0) {
      $compiler_fail++;
      next;
    }

    my $vol_addrs_out = "${exe}.vols.addrs.out";
    my $all_addrs_out = "${exe}.all.addrs.out";
    my $res = runit("$GEN_VOLATILE_ADDR --vars-file=$checker_vols_out --all-vars-file=$checker_all_addrs_out --all-var-addrs-output=$all_addrs_out $exe > $vol_addrs_out 2>&1");
    if ($res != 0) {
      print STDERR "$GEN_VOLATILE_ADDR failed to run\n";
      return -1;
    }

    filter_globals($all_addrs_out, $all_addrs_files_ref, $all_vars_ref);
    my $pin_cmd = "$PIN_BIN -vol_input $vol_addrs_out -all_vars_input $all_addrs_out $PIN_OUTPUT_MODE $PIN_SEED $PIN_RANDOM_READ";
    push @all_cmds, [$pin_cmd, $exe, $opt];
  }

  if ($compiler_fail > 0) {
    print "COMPILER FAILED $compiler\n";
  }

  $all_pin_cmds_ref->{$compiler} = \@all_cmds;
  return 0;
}

sub run_one_compiler_exes($$) {
  my ($compiler, $exes_array_ref) = @_;

  my $success = 0;
  my %vol_results = ();
  my %csums = ();
  my %pintool_seeds = ();

  my $first = 1;
  foreach my $elem (@$exes_array_ref) {
    my ($pin_cmd, $exe, $opt) = @$elem;
    my $res = run_exe($pin_cmd, $exe, $compiler, $opt, \%vol_results, \%csums, \%pintool_seeds);
    if (($PIN_RANDOM_READ ne "") && ($PIN_SEED eq "") && $first) {
      $PIN_SEED = "-seed $pintool_seeds{$opt}";
    }
    $first = 0;
    if ($res == $TIMEOUT_RES) {
      if ($SKIP_TIMEOUT) {
        return (1, undef, undef, undef);
      }
      else {
        next;
      }
    }
    return (1, undef, undef, undef) if ($res);
    $success++;
  }

  if ($success > 0) {
    my ($consistent, $vol_result, $csum) = check_internal_consistency($compiler, \%vol_results, \%csums);
    return (0, $consistent, $vol_result, $csum);
  }
  else {
    return (0, 0, undef, undef);
  }
}

=comment
First compile the cfile with all compilers,
then grab common vars which appear in 
all of the nm outputs.
The reason is that a compiler could simply 
*not* generate an unused (literally unused or
by its analysis) into the object code.  
If we pass all vars to the pin runtime,
we will `wrongfully' compute checksums.
=cut
sub do_test_without_printing_checksum($$$) {
  my ($root, $checker_vols_out, $checker_all_addrs_out) = @_;

  my %all_addrs_files = ();
  my %all_vars = ();
  my %all_pin_cmds = ();

  foreach my $compiler_ref (@compilers_to_test) {
    invoke_one_compiler($root, $compiler_ref, $checker_vols_out, 
                    $checker_all_addrs_out, \%all_addrs_files, 
                    \%all_pin_cmds, \%all_vars);
  }
  uniq_all_addrs_files(\%all_addrs_files, \%all_vars);

  my $vol_result;
  my $csum;
  foreach my $compiler (keys %all_pin_cmds) {
    my $exes = $all_pin_cmds{$compiler};
    (my $abort_test, my $consistent, my $tmp_vol_result, my $tmp_csum) =
      run_one_compiler_exes($compiler, $exes);

    return -1 if ($abort_test);
    print "COMPLETED TEST $compiler\n";
    # ignore internally inconsistent results
    next if (!$consistent);

    if (defined ($vol_result) &&
        defined ($csum)) {
      check_external_consistency($vol_result, $tmp_vol_result, 
                                 $csum, $tmp_csum);
    } 
    else {
      $vol_result = $tmp_vol_result;
      $csum = $tmp_csum;
    }
  }
}

sub test_one_program($) {
  my ($root) = @_;

  my $vol_result;
  my $csum;

  my $checker_vols_out = "$root.checker.vols.out";
  my $checker_all_addrs_out = "";
  my $extra_checker_opt = "";
  if ($USE_PIN_CHECKSUMS) {
    $checker_all_addrs_out = "$root.checker.all.out";
    $extra_checker_opt = "--all-vars-output=$checker_all_addrs_out";
  }

  my $res = runit("gcc -E -I$CSMITH_HOME/runtime $root.c > ${root}.pre.i 2>&1");
  if ($res) {
    print STDERR "preprocessor FAILED!\n";
    return -1;
  }
  $res = runit("$CHECKER $TARGET_M32_OPT --checker=volatile-address $extra_checker_opt $root.pre.i > $checker_vols_out 2>&1");
  if ($res) {
    print STDERR "volatile_checker FAILURE\n";
    return -1;
  }

  if ($USE_PIN_CHECKSUMS) {
    do_test_without_printing_checksum($root, $checker_vols_out, $checker_all_addrs_out);
  }
  else {
    do_normal_test($root, $checker_vols_out);
  }

  return 0;
}

sub test_one_file($) {
  my ($test_file) = @_;

  my @a = split('/', $test_file);
  my $fn = $a[-1];
  die "bad sub_dir" unless (defined $fn);
  $fn =~ s/\.c$//;
  my $dir = "$WORKING_DIR/$fn";
  if (-d $dir) {
    system ("rm -rf $dir/*");
  }
  else {
    system "mkdir $dir";
  }
  chdir $dir or die;
  abort_if_fail("cp $test_file $fn.c");
  my $res = test_one_program($fn);
  if ($res) {
    print "Success!\n";
  }
  else {
    print "Failed!\n";
  }

  chdir "../..";
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
  goto out if (run_csmith($cfile, $n, 1) != 0);
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
  if (!$KEEP_TEMPS) {
    system "rm -rf $dir";
  }
}

sub go_test($) {
  my ($test_file) = @_;
  if (defined($test_file)) {
    test_one_file($test_file);
    print "\n";
    return;
  }

  for (my $i = 0; $i < $ITERATION; $i++) {
    do_one_test($i);
    print "\n";
  }
}

################################################################################

my $help_msg = '
Usage: volatile_test.pl --work-dir=[dir] --pin-output-mode=[checksum|verbose|summary|ordered-checksum|ordered-verbose]
  Options:
  --work-dir=[dir]: specify the work-dir (default: work0)
  --use-pin-checksums: random programs will not print checksums, 
                       instead, checksums will be computed at runtime by the pintool
  --pin-output-mode=[checksum|verbose|summary|ordered-checksum|ordered-verbose]: specify the output mode of the pintool (default: checksum)
  --enable-pin-random-read: enable pintool to inject random values to volatile reads
  --iteration=[num]: specify how many testing runs (default: 100000000)
  --disable-swarm: disable swarm options
  --keep-temps: keep temprary dirs
  --no-vol-struct-union-fields: disable struct/union fields
  --strict-volatile-rule: enable Csmith to generate programs with respect to one-vol-access-between-two-seq-points rule
  --use-sequential-seeds: use numbers [0, n-1] as the seeds to Csmith, where n is specified by --iteration=n
  --no-skip-timeout: run all generated executables with predefined TIMEOUT (passing this option can make test very slow)
  --cfile=<file>: test the specified file (the file is supposed to be a non-preprocessed c source code)
  --help: this message
';

sub die_on_invalid_opt($) {
  print "Invalid opt: $1\n";
  die("$help_msg\n");
}

sub check_prereqs($) {
  my ($test_file) = @_;

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
  $RunSafely = "RunSafely";
  my $res = runit("$RunSafely 10 1 /dev/null ls_output.txt ls");
  die "failed: is $RunSafely in the PATH env?" if ($res);
  print_msg("succeeded\n");

  if ($TARGET_M32) {
    $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-ia32/pinatrace.so";
    $TARGET_M32_OPT = "--m32";
  }
  else {
    $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/obj-intel64/pinatrace.so";
  }

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
  $GEN_VOLATILE_ADDR = "gen_volatile_addr.pl";
  if (runit("$GEN_VOLATILE_ADDR --help > /dev/null 2>&1")) {
    print_msg("$GEN_VOLATILE_ADDR is not in PATH env\n");
    print_msg("one more try...\n");
    $GEN_VOLATILE_ADDR = "$cwd/gen_volatile_addr.pl";
    if (runit("$GEN_VOLATILE_ADDR --help > /dev/null 2>&1")) {
      die "failed to run $GEN_VOLATILE_ADDR!";
    }
  }
  print_msg("succedded\n");
  if ($USE_PIN_CHECKSUMS) {
    $COMPILER_COMMON_OPTS .= " -DNOT_PRINT_CHECKSUM";
  }

  if (defined($test_file)) {
    die "$test_file doesn't exist!" unless (-f $test_file);
    print_msg("chdir $cwd\n");
    chdir $cwd or die;
    print_msg("all prereqs passed!\n");
    return;
  }

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
  my $checker_vols_out = "checker.addrs.out";
  my $checker_all_addrs_out = "";
  my $extra_checker_opt = "";
  my $vol_addrs_out = "vol.addrs.out";
  my $all_addrs_out = "";
  my $extra_gen_addr_opt = "";
  my $pin_extra_opt = "";

  if ($USE_PIN_CHECKSUMS) {
    $checker_all_addrs_out = "checker.all.addrs.out";
    $all_addrs_out = "all.addrs.out";
    $extra_checker_opt = "--all-vars-output=$checker_all_addrs_out";
    $extra_gen_addr_opt = "--all-vars-file=$checker_all_addrs_out --all-var-addrs-output=$all_addrs_out";
    $pin_extra_opt = "-all_vars_input $all_addrs_out"; 
  }

  while ($tries > 0) {
    $tries--;
    next if (run_csmith($cfile, -1, 0));
    $csmith_ok = 1;
    my $res = runit("gcc -E -I$CSMITH_HOME/runtime $cfile > $preprocessed_cfile 2>&1");
    next if (compile_cfile("ia32", "gcc", "-O0", $preprocessed_cfile, $exe));
    next if (runit("$CHECKER $TARGET_M32_OPT --checker=volatile-address $extra_checker_opt $preprocessed_cfile > $checker_vols_out 2>&1"));
    next if (runit("$GEN_VOLATILE_ADDR --vars-file=$checker_vols_out $extra_gen_addr_opt $exe > $vol_addrs_out 2>&1"));
    $test_case_ok = 1;
    my $raw_out = "$exe.raw-out";
    my $pin_cmd = "$PIN_BIN -vol_input $vol_addrs_out $pin_extra_opt $PIN_OUTPUT_MODE $PIN_SEED $PIN_RANDOM_READ";
    if (run_exe_with_pin($pin_cmd, $exe, "gcc", $raw_out) == 0) {
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

  if ($PIN_OUTPUT_MODE =~ m/ordered-/) {
    if ($CSMITH_VOL_OPTS !~ m/strict-volatile-rule/) {
      $CSMITH_VOL_OPTS .= "--strict-volatile-rule ";
    }
  }
  print_msg("chdir $cwd\n");
  chdir $cwd or die;
  print_msg("all prereqs passed!\n");
}

sub main() {
  my $opt;
  my @unused = ();
  my $test_file = undef;

  while(defined ($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "pin-output-mode") {
        die_on_invalid_opt($opt) if 
          (($2 ne "checksum") && ($2 ne "summary") && ($2 ne "verbose") && ($2 ne "ordered-checksum") && ($2 ne "ordered-verbose"));
        $PIN_OUTPUT_MODE = "-output_mode $2";
      }
      elsif ($1 eq "pin-seed") {
        $PIN_SEED = "-seed $2";
      }
      elsif ($1 eq "work-dir") {
        $WORKING_DIR = $2;
      }
      elsif ($1 eq "iteration") {
        $ITERATION = $2;
      }
      elsif ($1 eq "cfile") {
        my $cwd = cwd();
        $test_file = "$cwd/$2";
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
      elsif ($1 eq "no-vol-struct-union-fields") {
        $CSMITH_VOL_OPTS .= "--$1 ";
      }
      elsif ($1 eq "strict-volatile-rule") {
        $CSMITH_VOL_OPTS .= "--$1 ";
      }
      elsif ($1 eq "use-pin-checksums") {
        $USE_PIN_CHECKSUMS = 1;
      }
      elsif ($1 eq "keep-temps") {
        $KEEP_TEMPS = 1;
      }
      elsif ($1 eq "disable-swarm") {
        $USE_SWARM = 0;
      }
      elsif ($1 eq "use-sequential-seeds") {
        $USE_SEQUENTIAL_SEEDS = 1;
      }
      elsif ($1 eq "no-skip-timeout") {
        $SKIP_TIMEOUT = 0;
      }
      elsif ($1 eq "m32") {
        $TARGET_M32 = 1;
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
  check_prereqs($test_file);
  go_test($test_file);
}

main();

