#include "crc32.h"

struct S1 {
  char f1[4];
  long f2;
  int f3[4];
};

struct S1 g_1 = {{11,22,33,44}, 1234567, {2233, 3344, 5566, 7788}};

int main(void)
{
  crc32_gentab();
  crc32(g_1.f1[0], sizeof(char));
  crc32(g_1.f1[1], sizeof(char));
  crc32(g_1.f1[2], sizeof(char));
  crc32(g_1.f1[3], sizeof(char));

  crc32(g_1.f2, sizeof(long));
  
  crc32(g_1.f3[0], sizeof(int));
  crc32(g_1.f3[1], sizeof(int));
  crc32(g_1.f3[2], sizeof(int));
  crc32(g_1.f3[3], sizeof(int));
  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}
