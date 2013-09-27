#pragma pack(push)
#pragma pack(1)
struct S3 {
   volatile unsigned f1 : 10;
   signed f4 : 29;
   volatile unsigned f5 : 8;
};
#pragma pack(pop)

static struct S3 g1;

unsigned int foo(void)
{
  return g1.f1 + g1.f4 + g1.f5;
}

int main(void)
{
  foo();
  return 0;
}
