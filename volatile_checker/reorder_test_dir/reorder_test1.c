volatile int g1;

int f1(void)
{
  return g1 + g1;
}

int f2(void)
{
  return f1();
}

int f3(void)
{
  return f2();
}

