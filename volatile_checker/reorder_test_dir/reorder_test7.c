
struct S1 {
  volatile int f1;
};
struct S1 g;
struct S1 * volatile p = &g;
void foo(void)
{
  p = &g;
}

struct S1 **g1;
void bar(void)
{
  p = *g1;
}
