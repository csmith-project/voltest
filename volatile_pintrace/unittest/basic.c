
volatile int g1;
volatile int g2;
volatile int g3[10];
int foo(void)
{
  return g1 + g2 + g3[3];
}

int main(void)
{
  int l = foo();
  return 0;
}
