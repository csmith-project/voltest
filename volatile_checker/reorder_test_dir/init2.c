struct S {
  volatile int f;
} g1;

volatile int g2;

int foo(void)
{
  volatile int *l = &g1.f;
  return 1;
}

void bar(void)
{
  g2 + foo();
}
