volatile int g;

int foo(int p1) 
{
  return p1;
}

int bar(void)
{
  return foo(g + foo(g));
}
