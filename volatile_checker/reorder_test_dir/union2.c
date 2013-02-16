union U1 {
  int f0;
  volatile short f1;
};

union U1 g;
int foo(void)
{
  return g.f0 + g.f0;
}
