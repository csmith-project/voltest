struct S1 {
  volatile unsigned f1:7;
  volatile unsigned f2:7;
  volatile unsigned f3:1;
  volatile unsigned f4:1;
  volatile unsigned f5:1;
  volatile unsigned f6:1;
  volatile unsigned f7:1;
  volatile unsigned f8:1;
  volatile unsigned f9:1;
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
