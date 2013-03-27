#include "crc32.h"

struct S1 {
  char f1;
  int f2;
};

struct S2 {
  short f1;
  struct S1 f2;
};

struct S2 g_1 = {23, {9988, 4466}};

int main(void)
{
  crc32_gentab();
  crc32(g_1.f1, sizeof(short));
  crc32(g_1.f2.f1, sizeof(char));
  crc32(g_1.f2.f2, sizeof(int));
  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}
