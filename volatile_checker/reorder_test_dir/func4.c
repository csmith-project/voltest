volatile int g1;
volatile int g2;

int f1(int p1)
{
  return g1;
}

int f3(int p1)
{
  return p1;
}

int f4(int p1, int p2)
{
  return 0;
}

void f2(void)
{
  f1(f1(f3(f4((5, 1), g2))));
}

