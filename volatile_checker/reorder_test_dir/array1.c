
union U1 {
   int f0;
   volatile int f1;
};

static union U1 g1[1] = {{0x5605049BL}};
union U1 *g2 = &g1[0];
int foo(void)
{
  return (g2 == &g1[0]);
}
