
struct S1 {
  volatile int a1;
  int a2;
};

struct S2 {
  struct S1 a1;
};

struct S2 g2;
/* no vol */
int f6(void)
{
  return g2.a1.a2;
}

struct S1 f7(void)
{
  return g2.a1;
}
