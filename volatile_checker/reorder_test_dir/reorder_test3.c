volatile int g1;

int f1(void)
{
  int l;
  l = (g1, g1);
  return l;
}

int f2(void)
{
  int l;
  l = (g1, g1, g1);
  return l;
}

int f3(void)
{
  int l = g1;
  l = (l, g1);
  return l;
}

int f4(void)
{
  return g1 && g1 || g1;
}

int f5(int p1, int p2)
{
  return g1 + p;
}

int f6(void)
{
  return f5(g1, f4());
}

int f6(void)
{
  int l[2] = {g1+g1, g1+g1};
  return l[0];
}
