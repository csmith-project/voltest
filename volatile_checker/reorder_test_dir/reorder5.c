struct S1 {
  int a1;
};

struct S2 {
  volatile struct S1 a1[10];
};

struct S3 {
  int a1;
  volatile int a2;
};

struct S4 {
  volatile struct S1 a1;
}

struct S2 g1;
struct S1 f1(void)
{
  return g1.a1[0];
}

struct S4 g2;
int f2(void)
{
  return g2.a1.a1;
}

