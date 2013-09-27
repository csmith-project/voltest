#define ACCESS_ONCE(v) (*(volatile typeof(v) *)&(v))

int *g1;
int * volatile g2;
int volatile g3;

int foo(void)
{
  return *(ACCESS_ONCE(g1));
}
