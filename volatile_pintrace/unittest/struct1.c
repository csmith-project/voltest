struct S1 {
  char f1;
  volatile int f2;
  unsigned f3:22;
  volatile unsigned f4:29;
};

struct S2 {
  volatile short f1[2];
  unsigned long long f2;
  struct S1 f3[3];
};

struct S2 g1;
int foo(void)
{
  return g1.f1[0] + g1.f3[1].f4;
}

int main(void)
{
  foo();
  return 0;
}
