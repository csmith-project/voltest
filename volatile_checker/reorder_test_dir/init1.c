volatile int g1;
volatile int g2;

int foo(void)
{
  volatile int *l = &g1;
  return 1;
}

int bar(void)
{
  return (g2 + foo());
}
