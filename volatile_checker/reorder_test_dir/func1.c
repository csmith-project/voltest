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
