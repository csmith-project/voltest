#include "crc32.h"

char g_1[4] = {11,22,33,44};
int g_2[4] = {11122, 3344, 5566, 7788};

int main(void)
{
  crc32_gentab();
  crc32(g_1[0], sizeof(char));
  crc32(g_1[1], sizeof(char));
  crc32(g_1[2], sizeof(char));
  crc32(g_1[3], sizeof(char));
  crc32(g_2[0], sizeof(int));
  crc32(g_2[1], sizeof(int));
  crc32(g_2[2], sizeof(int));
  crc32(g_2[3], sizeof(int));
  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}
