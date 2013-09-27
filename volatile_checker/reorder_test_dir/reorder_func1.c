volatile int g1;

int f1(void)
{
  return g1;
}

int f2(void)
{
  return f1();
}

int f3(void)
{
  return f1();
}

int f4(void)
{
  return 1;
}

int f5(void)
{
  return f4();
}

int g2 = 1;
int f6(void)
{
  if (g2) 
    return f2();
}

int main(void)
{
  return f1() + f5();
}

