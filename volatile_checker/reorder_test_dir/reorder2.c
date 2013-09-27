
struct S1 {
  int a1;
};

struct S2 {
  volatile int a1;
  int a2;
};

struct S3 {
  volatile struct S1 a1;
};

struct S2 g7;
int f7(void)
{
  return g7.a1;
}

/* no vol */
int f8(void)
{
  return g7.a2;
}

struct S3 g8;
struct S1 f9(void)
{
  return g8.a1;
}

struct S1 g10;
struct f10(void)
{
  return g10;
}
