struct S {
  volatile unsigned f1 : 2;
  volatile unsigned : 0;
  volatile unsigned f2 : 28;
};

struct S g1;
int foo(void)
{
  return g1.f2;
}

int main(void)
{
  foo();
  return 0;
}
