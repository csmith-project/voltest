#pragma pack(push)
#pragma pack(1)
struct S0 {
   const volatile unsigned f4 : 30;
   unsigned f5 : 31;
   volatile signed f6 : 2;
   volatile signed f7 : 1;
};
#pragma pack(pop)

static struct S0 g1;

unsigned int foo(void)
{
  return  g1.f4 + g1.f5 + g1.f6 + g1.f7;
}

int main(void)
{
  foo();
  return 0;
}

