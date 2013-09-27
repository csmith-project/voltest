
struct S1 {
  volatile int a1;
  int a2;
};

struct S2 {
  volatile struct S1 a1;
};

volatile struct S2 g1;
/* good */
int f1(void)
{
  int l = g1.a1.a1;
  return g1.a1.a1 + l;
}

volatile int g2[2][2];
int f2(void)
{
  return g2[0][0];
}

volatile int g3;
volatile int * volatile g4 = &g3;
int f3(void)
{
  return *g4;
}

volatile int * volatile * volatile g5 = &g4;
int f4(void)
{
  return **g5;
}

volatile int * volatile * volatile f5(void)
{
  return g5;
}

struct S4 {
  int a1;
};

struct S3 {
  volatile int *a1;
  volatile int a2[10];
  volatile struct S4 a3;
};
volatile struct S3 g6;
struct S4 f6(void)
{
  return g6.a3;
}

int f7(void)
{
  return g6.a2[0];
}

int f8(void)
{
  return *g6.a1;
}

