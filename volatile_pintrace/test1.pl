#!/usr/bin/perl

use strict;
use warnings;

my $TEST_INPUT = "small.c";
my $SCRATCH = "/scratch/chenyang";
my %COMPILERS = (
  "gcc" => "$SCRATCH/compilers/compiler-install/gcc-r202631-install/bin/gcc -O0",
  "clang" => "$SCRATCH/compilers/compiler-install/llvm-r191259-install/bin/clang -O0",
  "ccomp" => "$SCRATCH/compilers/compiler-install/compcert-2.0/bin/ccomp",
);
my $ARCH32 = 1;
my $CHECK_CHECKSUM = 1;

my $PIN_HOME = "$SCRATCH/programs/pin-2.12-55942-gcc.4.4.7-linux";
my $CHECKER = "$SCRATCH/voltest/volatile_checker/volatile_checker";
my $GEN_VOLATILE_ADDR = "$SCRATCH/voltest/volatile_pintrace/gen_volatile_addr.pl";
my $RUN_SAFELY = "$SCRATCH/voltest/volatile_pintrace/RunSafely";
my $CHECKER_ADDR_OUT = "checker.addr.out.txt";
my $VOL_ADDR_OUT_PREFIX = "vol_addr_out";

my $PIN_MODE = "checksum";
my $ARCH_OPT = "";
my $ARCH_CHECKER_OPT = "";
my $PIN_BIN = "";

sub runit ($) {
  my $cmd = shift;
  print "runit:[$cmd]\n";
  if ((system "$cmd") == -1) {
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub abort_if_fail($) {
  my ($cmd) = @_;
  exit(1) if (runit($cmd));
}

sub has_warning($$) {
  my ($out_fn, $warnings) = @_;
  my $bad = 0;
  open INF, "<$out_fn" or exit(1);
  while (my $line = <INF>) {
    chomp $line;
    if (grep { $line =~ m/$_/} @$warnings) {
      $bad = 1;
      last;
    }
  }
  close INF;
  return $bad;
}

sub pre_check() {
  my $pre_out = "pre_out.clang.txt";
  abort_if_fail("clang -pedantic -Wall -O0 -c $TEST_INPUT  >$pre_out 2>&1");
  my @clang_warnings = (
    'conversions than data arguments',
    'incompatible redeclaration',
    'ordered comparison between pointer',
    'eliding middle term',
    'end of non-void function',
    'invalid in C99',
    'specifies type',
    'should return a value',
    'uninitialized',
    'incompatible pointer to',
    'incompatible integer to',
    'type specifier missing',
  ); 
  exit(1) if has_warning($pre_out, \@clang_warnings);

  $pre_out = "pre_out.gcc.txt";
  abort_if_fail("gcc -Wall -Wextra -O2 $TEST_INPUT >$pre_out 2>&1");
  my @gcc_warnings = (
    'uninitialized',
    'without a cast',
    'control reaches end',
    'null argument',
    'return type defaults',
    'useless type name in empty declaration',
    'no semicolon at end',
    'type defaults to',
    'format',
    'incompatible pointer',
    'ordered comparison of pointer with integer',
    'declaration does not declare anything',
    'expects type',
    'pointer from integer',
    'incompatible implicit',
    'excess elements in struct initializer',
    'comparison between pointer and integer',
  );
  exit(1) if has_warning($pre_out, \@clang_warnings);
}

sub do_one_compiler($$) {
  my ($comp_name, $all_out_files) = @_;
  my $comp_cmd = $COMPILERS{$comp_name};
  my $input_root = $TEST_INPUT;
  $input_root =~ s/\.c$//;

  if ($comp_name =~ m/ccomp/) {
    abort_if_fail("$comp_cmd -fall $TEST_INPUT -o ${input_root}_$comp_name > cc_out.$comp_name.txt 2>&1");
  }
  else {
    abort_if_fail("$comp_cmd $ARCH_OPT $TEST_INPUT -w -o ${input_root}_$comp_name > cc_out.$comp_name.txt 2>&1");
  }
  abort_if_fail("$GEN_VOLATILE_ADDR --vars-file=$CHECKER_ADDR_OUT ${input_root}_$comp_name > $VOL_ADDR_OUT_PREFIX.$comp_name.txt");
  abort_if_fail("$RUN_SAFELY 20 1 /dev/null out.$comp_name.txt $PIN_BIN -vol_input $VOL_ADDR_OUT_PREFIX.$comp_name.txt -output_mode $PIN_MODE -- ./${input_root}_$comp_name > /dev/null 2>&1");
  push @$all_out_files, "out.$comp_name.txt";
}

sub get_checksums($) {
  my ($fname) = @_;
  my $checksum = undef;
  my $vol_checksum = undef;

  open INF, "<$fname" or exit 1;
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/vol_access_checksum = ([0-9a-fA-F]+)/) {
      $vol_checksum = $1;
    }
    elsif ($line =~ m/checksum = ([0-9a-fA-F]+)/) {
      $checksum = $1;
    }
  }
  close INF;
  exit 1 unless (defined $vol_checksum);
  return ($checksum, $vol_checksum);
}

sub check_outputs($) {
  my ($all_out_files) = @_;
  my %all_vol_checksums = ();
  exit 1 if (scalar(@$all_out_files) < 1);
  my ($checksum, $vol_checksum) = get_checksums($all_out_files->[0]);
  $all_vol_checksums{$vol_checksum} = 1;
  for (my $i = 1; $i < @$all_out_files; $i++) {
    my ($tmp_checksum, $tmp_vol_checksum) = get_checksums($all_out_files->[$i]);
    if ($CHECK_CHECKSUM) {
      exit 1 unless (defined($tmp_checksum) && defined($checksum));
      exit 1 if ($checksum ne $tmp_checksum);
    }
    $all_vol_checksums{$tmp_vol_checksum} = 1;
    #exit 1 unless (defined($tmp_vol_checksum) && defined($vol_checksum));
    #exit 1 if ($vol_checksum eq $tmp_vol_checksum);
  }
  # a stronger invariant: each compiler produces a different vol_checksum
  # (if we have more than 2 compilers)
  exit 1 if (scalar(keys %COMPILERS) != scalar(keys %all_vol_checksums));
}

sub run_framac() {
  my $framac_input = $TEST_INPUT;
  $framac_input =~ s/\.c$/-framac.c/;
  abort_if_fail("cp -f $TEST_INPUT $framac_input");
  my $s = "";
  open INF, "<$framac_input" or exit 1;
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/int main \(int argc, char\* argv\[\]\)/) {
      $s .= "int argc; char **argv; int main (void)\n";
    }
    else {
      $s .= "$line\n";
    }
  }
  close INF;

  open OUTF, ">$framac_input" or exit 1;
  print OUTF $s;
  close OUTF;

  my $framac_out = "out_framac.txt";
  my $framac_mach = "x86_64";
  if ($ARCH32) {
    $framac_mach = "x86_32";
  }
  abort_if_fail("RunSafely.sh 20 1 /dev/null $framac_out frama-c -cpp-command \\\"gcc -C -Dvolatile= -E -I.\\\" -val-signed-overflow-alarms -val -stop-at-first-alarm -no-val-show-progress -machdep $framac_mach -obviously-terminates -precise-unions $framac_input");

  my $bad = 0;
  open INF, "<$framac_out" or exit 1;
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/user error|assert/) {
      $bad = 1;
      last;
    }
  }
  close INF;
  exit 1 if ($bad);
}

sub go() {
  system("rm -f out*.txt");
  my $pin_target = "obj-intel64";
  if ($ARCH32) {
    $ARCH_OPT = "-m32";
    $ARCH_CHECKER_OPT = "--m32";
    $pin_target = "obj-ia32";
  }
  $PIN_BIN = "$PIN_HOME/pin.sh -injection child -t $PIN_HOME/source/tools/ManualExamples/$pin_target/pinatrace.so";

  pre_check();
  abort_if_fail("$CHECKER $ARCH_CHECKER_OPT --checker=volatile-address $TEST_INPUT > $CHECKER_ADDR_OUT 2>&1");
  
  my @all_out_files = ();
  foreach my $comp_name (sort keys %COMPILERS) {
    do_one_compiler($comp_name, \@all_out_files);
  }
  check_outputs(\@all_out_files);
  run_framac();
}

go();

