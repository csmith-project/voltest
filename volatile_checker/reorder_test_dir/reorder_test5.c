int *volatile g1;
int  foo(void)
{
  return *g1 + *g1;
}
