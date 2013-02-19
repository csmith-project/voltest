volatile int g1;
int foo(void)
{
  return g1;
}

void bar(void)
{
  (foo(), g1);
  (g1, foo());
  (foo(), foo());
  ((foo(), foo()), foo());
  ((foo(), g1, g1, foo()), foo());
}
