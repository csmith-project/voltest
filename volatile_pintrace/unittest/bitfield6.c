struct S1 {
  volatile unsigned f1:12;
  unsigned f2:4;
  volatile unsigned f3:8;
  volatile unsigned f4:8;
};

struct S1 g1;
int foo(void)
{
  return g1.f1 + g1.f2 + g1.f3;
}

int main(void)
{
  foo();
  return 0;
}
