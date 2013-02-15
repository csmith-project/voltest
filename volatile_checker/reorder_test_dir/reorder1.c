volatile int g1;
volatile int *g2;
volatile int g3[10];
volatile int *g4[10];

struct S1 {
  int a1;
};

volatile struct S1 g5;
volatile struct S1 *g6;

struct S2 {
  volatile int a1;
};

struct S2 g7;

int f1(void)
{
  return g1;
}

int f2(void)
{
  return *g2;
}

int f3(void)
{
  int x = g3[0];
  return x;
}

int f4(void)
{
  return *g4[0];
}

struct S1 f5(void)
{
  return g5;
}

volatile struct S1* f6(void)
{
  return g6;
}

int f7(void)
{
  return g7.a1;
}

struct S2 f8(void)
{
  return g7;
}

