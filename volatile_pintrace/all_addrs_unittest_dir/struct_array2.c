#include "crc32.h"

struct S1 {
  char f1[2];
  long f2;
  int f3[2];
};

struct S2 {
  int f1;
  struct S1 f2[2];
};

struct S2 g_1 = {123, {{{11,22}, 987654, {99, 88}}, 
                      {{11,22}, 987654, {99, 88}}}};

int main(void)
{
  crc32_gentab();
  crc32(g_1.f1, sizeof(int));

  crc32(g_1.f2[0].f1[0], sizeof(char));
  crc32(g_1.f2[0].f1[1], sizeof(char));
  crc32(g_1.f2[0].f2, sizeof(long));
  crc32(g_1.f2[0].f3[0], sizeof(int));
  crc32(g_1.f2[0].f3[1], sizeof(int));

  crc32(g_1.f2[1].f1[0], sizeof(char));
  crc32(g_1.f2[1].f1[1], sizeof(char));
  crc32(g_1.f2[1].f2, sizeof(long));
  crc32(g_1.f2[1].f3[0], sizeof(int));
  crc32(g_1.f2[1].f3[1], sizeof(int));

  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}

