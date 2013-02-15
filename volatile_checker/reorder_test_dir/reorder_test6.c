
union U2 {
   const volatile int f0;
};
union U2 g;
void foo(void)
{
    union U2 *l1;
    union U2 **l2 = &l1;
    *l2 = &g;
}
