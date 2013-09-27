volatile int g1;
volatile int g2;

int f1(void)
{
  return g1;
}

int f2(int p1, int p2)
{
  return p1+p2;
}

int f3(void)
{
  return f2(f1(), g2);
}
