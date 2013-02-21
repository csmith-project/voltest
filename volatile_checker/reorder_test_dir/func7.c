
volatile int g1;
int f1(int p1)
{
  return g1;
}

int f2(int p1)
{
  return g1;
}

int f3(int p1)
{
  return g1;
}

void f4(void)
{
  f1(f2((f3(1), 1)));
}

