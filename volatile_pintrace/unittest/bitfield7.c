struct S1 {
  volatile unsigned f1:12;
  unsigned f2:4;
  volatile unsigned f3:8;
  volatile unsigned f4:8;
};

struct S2 {
  char f1;
  struct S1 f2;
  volatile unsigned f3:10;
  volatile int f4;
};

struct S1 g1;
struct S2 g2;
int foo(void)
{
  return g1.f1 + g1.f2 + g1.f3 + g2.f4;
}

int main(void)
{
  foo();
  return 0;
}
