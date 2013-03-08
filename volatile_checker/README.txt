
* volatile_checker is a tool that checks certain properties of volatile accesses.

* how to build the tool:
  LLVM_PATH=/where/llvm-3.2/is/installed make

* Currently, it supports two individual checkers: which can be invoked by 
  
  - access-once: given some variables, this checker checks if these variables are only accessed
    through ACCESS_ONCE() macro. The checker exits with 0 upon success.

    which can be invoked using the command below:
    volatile_checker --checker=access-once --access-once-vars=x,y,z <source_file> 
       where x,y,z are vars to be checked

  - volatile-reorder: it checks that if there is at most one volatile access between two sequence points,
    and exits with 0 upon success.

    which can be invoked using the command below:
    volatile_checker --checker=volatile-reorder <source_file>

    for example, if we apply the checker to foo.c, shown as below:
    /* foo.c */
    volatile int g1;
    volatile int g2;
    int foo(int p) 
    {
      return g1;
    }

    void bar(void)
    {
      foo(g2 == foo(foo(1)));
    }
  
    the checker will generate output like this:

    Functions that have volatile accesses: 
    foo : volatile access to g1 at line 5
    bar : volatile access to g2 at line 10

    Error: Offensive Expr is at line 10: foo(g2 == foo(foo(1)))
      multiple volatile accesses:
      g2
      foo(1)

   also, `echo $?' returns 255.
   Note that in the above output, if a function has multiple volatile accesses, 
   only one of these accesses is shown below "Function that have volatile accesses"

   The detailed output is for manual analysis, and checking the exit value should be sufficient
   for writing testing oracle such as test1.sh.

* Csmith command line option to generate programs which strictly conform with 
  the one-access-between-two-sequence-points rule:

  csmith --strict-volatile-rule

* Csmith command line option to generate programs with ACCESS_ONCE macros
  csmith --enable-access-once

