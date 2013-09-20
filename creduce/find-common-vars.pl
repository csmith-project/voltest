#!/usr/bin/perl
##
## Copyright (c) 2013 The University of Utah
## All rights reserved.
##
## This is a helper for a predicate script for C-Reduce, for reducing programs
## that reveal "volatile defects" in C compilers.
##
## This script's task is to filter a list of locations (variables) to include
## only those that are visible in two compiled versions of a test case.  For
## this command line:
##
##   find-common-vars.pl file1 file2
##
## where file1 contains location data for one compiled version of a test case,
## and file2 contains location data fro another compiled version of the same
## test case, this script outputs the locations in file1 that also appear in
## file2.
##
## Informally, this script intersects the variable sets in file1 and file2, and
## outputs a version of file1 where variables outside the intersection have
## been removed.
##
## Note that in general, the following two commands produce different output:
##
##  find-common-vars.pl file1 file2
##  find-common-vars.pl file2 file1
##
## Although the intersection of the variables is the same in each case, the
## output of the former contains the address of the variables found in file1,
## whereas the latter contains the addresses found in file2.
##
## TODO: This script could easily output both of the intersection files in one
## run, i.e., the outputs of both of the command lines shown above.  This would
## be a small optimization to the reduction process.
##

###############################################################################

use strict;
use warnings;

my @file1_table;
my @file2_table;

my %var_refcounts = ();

## Produce the key for an array that describes a location.
##
sub var_key {
  # Join the name, size, and bitfield mask.  Use ";" as the join character
  # because it is the field separator in our input files.
  my $key = join ";", $_[0], $_[2], $_[4];
  return $key
}

## Read the file that describes the global locations in a compiled program.
## Return a reference to an array that is the parsed representation of that
## data.
##
## Each element of the returned array is an array ref, representing an input
## line.  An array that represents a line contains a record key followed by
## the fields parsed from the input file.
##
sub read_vars_file($) {
  my ($filename) = @_;
  my @table = ();

  open FILE, "<$filename" or die "cannot open $filename";
  while (<FILE>) {
    chomp;
    s/\s//g;
    my @record = split(/;/);
    die "$filename contains an invalid record"
	unless ((@record == 4) || (@record == 5));
    # For internal representation, make our records uniform length.
    if (@record == 4) {
      push(@record, "");
    }
    my $key = var_key(@record);
    unshift(@record, $key);
    push(@table, \@record);
  }
  close FILE;
  return @table;
}

## Increment the reference count for every location described in the given
## array of locations.  The argument to this function is an array of location
## data, representing the locations defined in some compiled program.
##
sub collect_var_refcounts {
  foreach my $ref (@_) {
    my $key = $ref->[0];
    my $count = $var_refcounts{$key};
    if (defined($count)) {
      $var_refcounts{$key} = $count+1;
    } else {
      $var_refcounts{$key} = 1;
    }
  }
}

## Output the data from a parsed location record.  Basically, print everything
## but the location's key.
##
sub print_record($) {
  my ($ref) = @_;
  if ($ref->[5] eq "") {
    print "$ref->[1]; $ref->[2]; $ref->[3]; $ref->[4]\n";
  } else {
    print "$ref->[1]; $ref->[2]; $ref->[3]; $ref->[4]; $ref->[5]\n";
  }
}

###############################################################################

if (@ARGV != 2) {
  print STDERR "usage: $0 <vars-file-1> <vars-file-2>\n";
  exit 1;
}

@file1_table = read_vars_file(shift @ARGV);
collect_var_refcounts(@file1_table);

@file2_table = read_vars_file(shift @ARGV);
collect_var_refcounts(@file2_table);

## When we run this script twice, like so:
##
##   find-common-vars.pl file1 file2
##   find-common-vars.pl file2 file1
##
## it is important that the common locations appear in the same order across
## the two invocations.  The easiest way to ensure this is simply to sort the
## records by key.
##
@file1_table = sort {$a->[0] cmp $b->[0]} @file1_table;

## Output the records for the common locations between file1 and file2.
foreach my $ref (@file1_table) {
  my $key = $ref->[0];
  my $count = $var_refcounts{$key};
  if ($count == 2) {
    print_record($ref);
  }
}

exit 0;

###############################################################################

## End of file.
