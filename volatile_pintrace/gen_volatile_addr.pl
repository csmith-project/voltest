#!/usr/bin/perl

use strict;
use warnings;
use Cwd;

my $VERBOSE = 0;
my $KEEP_TEMPS = 1;
my $OUTPUT_FILE = "";
my %name_to_addr = ();
my @all_addrs = ();

my $UNIT_TEST_DIR = "unittest";
my $TMP_TEST_DIR = "tmp_unittest_dir";

sub print_msg($) {
  my ($msg) = @_;
  print $msg if ($VERBOSE);
}

sub runit ($) {
  my ($cmd) = @_;
  print_msg("runit: $cmd\n");
  if ((system "$cmd") != 0) {
    return -1;
  }
  my $exit_value  = $? >> 8;
  return $exit_value;
}

sub process_nm_output($) {
  my ($nm_fname) = @_;

  my @addresses = ();
  open INF, "<$nm_fname" or die "Cannot open $nm_fname!";
  while (my $line = <INF>) {
    chomp $line;
    if ($line =~ m/0*([0-9a-fA-F]+)[\s\t]+[rbBdD][\s\t](.+)$/) {
      my $addr = hex($1);
      my $name = $2;
      die "duplicate var name[$name]!" if (defined($name_to_addr{$name}));
      $name_to_addr{$name} = $addr;
      #print "add one: $name, $addr\n";
    }
  }
  close INF;
  return 0;
}

sub get_name($) {
  my ($str) = @_;

  $str =~ s/[(\s\t]//g;
  if ($str =~ m/(.+?)[\+\.]/) {
    return $1;
  }
  return $str;
}

sub process_addr_file($) {
  my ($addr_file) = @_;

  my $next_addr = 0;
  open INF, "<$addr_file" or die "cannot open $addr_file!";
  my $curr_addr = 0;
  while (my $line = <INF>) {
    chomp $line;
    next if ($line eq "Succeeded");
    my @a = split(';', $line);
    if (@a != 4) {
      print "Invalid line:$line\n";
      return -1;
    }
    my $name = get_name($a[0]);
    my $addr = $name_to_addr{$name};
    if (!defined($addr)) {
      # print "unknown name[$name]!\n";
      # return -1;
      # it is possible that a var in the source code does not
      # appear in nm's outout, e.g. compiler can optimize out
      # an unused static global
      next;
    }
    my $bits_offset = $a[1];
    my $bits_size = $a[2];
    my $ptr_str = $a[3];
    if (($bits_offset % 8) == 0) {
      my $sz;
      if (($bits_size % 8) == 0) {
        $addr = $addr + $bits_offset / 8;
        $sz = $bits_size / 8;
        my $s = sprintf "$a[0]; 0x%x; $sz;$ptr_str\n", $addr;
        push @all_addrs, $s;
      }
      else {
        $addr = $addr + ($bits_offset / 8);
        $sz = int($bits_size / 8) + 1;
        my $s = sprintf "$a[0]; 0x%x; $sz;$ptr_str\n", $addr;
        push @all_addrs, $s;
      }
      $curr_addr = $addr + $sz;
    }
    else {
      my $tmp_addr = $addr + int(($bits_offset + $bits_size) / 8);
      # print "$tmp_addr, $addr, $curr_addr\n";
      next if ($tmp_addr < $curr_addr);
      $curr_addr = $addr if (!$curr_addr);
      $addr = $curr_addr;
      if (($bits_offset + $bits_size) % 8) {
        $curr_addr = $tmp_addr + 1;
      }
      else {
        $curr_addr = $tmp_addr;
      }
      my $sz = $curr_addr - $addr;
      next if ($sz < 1);
      my $s = sprintf "$a[0]; 0x%x; $sz;$ptr_str\n", $addr;
      push @all_addrs, $s;
    }
  }
  close INF;
  return 0;
}

sub dump_result() {
  if ($OUTPUT_FILE ne "") {
    open OUT, "<$OUTPUT_FILE" or die "cannot open $OUTPUT_FILE!";
    foreach my $s (@all_addrs) {
      print OUT "$s";
    }
    close OUT;
  }
  else {
    foreach my $s (@all_addrs) {
      print "$s";
    }
  }
}

sub doit($$$) {
  my ($addr_file, $exec, $for_unit_test) = @_;

  my $cmd;
  my $res;

  my $nm_out = "$exec.nm.out";
  $cmd = "nm $exec > $nm_out 2>&1";
  $res = runit($cmd);
  if ($res) {
    print "failed to run $cmd\n";
    goto out;
  }
  $res = process_nm_output($nm_out);
  if ($res) {
    print "failed to process nm output!\n";
    goto out;
  }
  $res = process_addr_file($addr_file);
  if ($res) {
    print "failed to process address file!\n";
    goto out;
  }

  dump_result() if (!$for_unit_test);
out:
  return $res if ($for_unit_test);
  if (!$KEEP_TEMPS) {
    system("rm -rf $nm_out");
  }
  die if ($res);
  return 0;
}

sub do_one_unit_test($$$) {
  my ($cfile, $ref_out, $regenerate) = @_;

  %name_to_addr = ();
  @all_addrs = ();
  my $checker = "../../volatile_checker/volatile_checker --checker=volatile-address";
  my $checker_out = "checker.out";
  my $exec = "tmp_test.out";
  my $cmd;
  $cmd = "$checker $cfile > $checker_out 2>&1";
  return -1 if (runit($cmd));
  $cmd = "gcc $cfile -o tmp_test.out";
  return -1 if (runit($cmd));
  return -1 if (doit($checker_out, $exec, 1));
  if ($regenerate) {
    open OUT, ">$ref_out" or die "cannot open $ref_out";
    foreach my $s (@all_addrs) {
      print OUT "$s";
    }
    close OUT;
    return 0;
  }
  
  my $i = 0;
  my $curr_name = "";
  my $curr_ref_base = 0;
  my $curr_new_base = 0;
  open INF, "<$ref_out" or die "cannot open $ref_out";
  while (my $line = <INF>) {
    chomp $line;
    my $new_str = $all_addrs[$i];
    goto fail unless (defined($new_str));
    my @ref_a = split(';', $line);
    my @new_a = split(';', $new_str);
    goto fail if ((@ref_a != 4) || (@new_a != 4));
    goto fail if ($ref_a[0] ne $new_a[0]);
    goto fail if ($ref_a[2] != $new_a[2]);
    my $ref_ptr = $ref_a[3];
    my $new_ptr = $new_a[3];
    $ref_ptr =~ s/\s//g;
    $new_ptr =~ s/\s//g;
    goto fail if ($ref_ptr ne $new_ptr);
    my $ref_name = get_name($ref_a[0]);
    my $new_name = get_name($ref_a[0]);
    goto fail if ($ref_name ne $new_name);
    my $ref_addr = $ref_a[1];
    my $new_addr = $new_a[1];
    $ref_addr =~ s/^[\s]0x//;
    $new_addr =~ s/^[\s]0x//;
    $ref_addr = hex($ref_addr);
    $new_addr = $ref_addr;
    $i++;
    if ($curr_name ne $ref_name) {
      $curr_name = $ref_name;
      $curr_ref_base = $ref_addr;
      $curr_new_base = $new_addr;
      next;
    }
    else {
      # print "$ref_addr, $curr_ref_base, $new_addr, $curr_new_base\n";
      goto fail if (($ref_addr - $curr_ref_base) != ($new_addr - $curr_new_base));
    }
  }
  goto fail if ($i != @all_addrs);
  close INF;
  return 0;

fail:
  close INF;
  return -1;
}

sub do_unit_test($) {
  my ($regenerate) = @_;
  
  my $msg;
  if ($regenerate) {
    $msg = "Start regenerating ref output for each unittest...";
  }
  else {
    $msg = "Start unit-testing...";
  }
  print "$msg\n";
  if (-d $TMP_TEST_DIR) {
    system("rm -rf $TMP_TEST_DIR/*");
  }
  else {
    mkdir $TMP_TEST_DIR or die;
  }

  my $cwd = cwd();
  $UNIT_TEST_DIR = "$cwd/$UNIT_TEST_DIR";
  chdir $TMP_TEST_DIR or die;
  my @all_tests = glob("$UNIT_TEST_DIR/*.c");
  foreach my $test (@all_tests) {
    my $ref_out = $test;
    $ref_out =~ s/\.c/\.out/;
    print "  [$test]...";
    if (do_one_unit_test($test, $ref_out, $regenerate)) {
      print "FAILED!\n";
    }
    else {
      print "SUCCEEDED!\n";
    }
  }
}

###################################################

my $help_msg = '
gen_volatile_addr.pl --vars-file=<file> exec
  where:
  exec: executable
  --vars-file=<file>: vars file generated by volatile_checker
  --not-keep-temps: do not keep the temp files
  --verbose: print verbose message
  --output=<file>: where to dump the generated result [default: stdout]
  --test: do unit-testing using the existing test cases
  --regenerate-test-output: regenerate output of unittest
  --help: this message
';

sub die_on_invalid_opt($) {
  print "Invalid opt: $1\n";
  print("$help_msg\n");
  die;
}

sub main() {
  my $opt;
  my @unused = ();
  my $addr_file;
  my $test = 0;
  my $regenerate = 0;

  while(defined($opt = shift @ARGV)) {
    if ($opt =~ m/^--(.+)=(.+)$/) {
      if ($1 eq "output") {
        $OUTPUT_FILE = $2;
      }
      elsif ($1 eq "vars-file") {
        $addr_file = $2;
      }
      else {
        die_on_invalid_opt($opt); 
      }
    }
    elsif ($opt =~ m/^--(.+)$/) {
      if ($1 eq "verbose") {
        $VERBOSE = 1;
      }
      elsif ($1 eq "not-keep-temps") {
        $KEEP_TEMPS = 0;
      }
      elsif ($1 eq "help") {
        print "$help_msg\n";
        exit 0;
      }
      elsif ($1 eq "test") {
        $test = 1;
      }
      elsif ($1 eq "regenerate-test-output") {
        $regenerate = 1;
      }
      else {
        die_on_invalid_opt($opt); 
      }
    }
    else {
      push @unused, $opt
    }
  }
   
  if ($test) {
    do_unit_test($regenerate);
    return;
  }

  if (@unused == 0) {
    print("please give an input exec file");
    print "$help_msg\n";
    die;
  }
  elsif (@unused > 1) {
    die_on_invalid_opt("Multiple inputs!");
  }

  doit($addr_file, $unused[0], 0);
}

main();

