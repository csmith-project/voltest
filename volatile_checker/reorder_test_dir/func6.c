volatile int g1;

int f1(int p1)
{
  return g1; 
}

int f2(void)
{
  return g1;
}

void f3(void)
{
  int l;
  f1((l = (f2() && 1), 1)); 
}

