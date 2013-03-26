#include "crc32.h"

int g_1 = 1;

int main(void)
{
  crc32_gentab();
  crc32(g_1, sizeof(int));
  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}
