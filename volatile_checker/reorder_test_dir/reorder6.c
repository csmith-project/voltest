
struct S1 {
  volatile int a1;
  int a2;
};

struct S1 g3;
struct S1 f3(void)
{
  return g3; 
}

volatile int g2;
int f2(void)
{
  return g2;
}

int g1;
int f1(void)
{
  int l = (volatile int)g1;
  return l;
}
