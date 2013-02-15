struct S1 {
  volatile int a1;
  int a2;
};

struct S2 {
  struct S1 a1;
};

struct S1 g1;
struct S1 f1(void)
{
  return g1;
}

struct S2 g2;
struct S2 f2(void)
{
  return g2;
}

struct S3 {
  struct {
    volatile int a1;
  } a1;
};
struct S3 g3;
struct S3 f3(void)
{
  return g3;
}

struct S4 {
  struct S5 {
    volatile int a1;
    int a2;
  } a1;
};
struct S4 g4;
struct S4 f4(void)
{
  return g4;
}
struct S5 g5;
struct S5 f5(void)
{
  return g5;
}

/* no vol */
int f6(void)
{
  return g2.a1.a2;
}

/* no vol */
int f7(void)
{
  return g4.a1.a2;
}

