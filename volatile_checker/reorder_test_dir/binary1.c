
volatile int g1;
volatile int g2;
volatile int g3;
void foo(void)
{
  (g1 == 0) || (g2 == g3);
}
