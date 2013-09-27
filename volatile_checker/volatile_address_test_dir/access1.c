
#define ACCESS_ONCE(v) (*(volatile typeof(v) *)&(v))

int g1;
int foo(void)
{
  return ACCESS_ONCE(g1);
}
