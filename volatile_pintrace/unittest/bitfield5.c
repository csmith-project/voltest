struct S1 {
  volatile unsigned f1:12;
  unsigned f2:1;
  volatile unsigned f3:1;
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
