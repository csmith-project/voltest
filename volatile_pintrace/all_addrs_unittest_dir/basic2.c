#include "crc32.h"

unsigned char g_1 = 5;
char g_2 = 50;
unsigned short g_3 = 945;
short g_4 = 445;
unsigned int g_5 = 890;
int g_6 = 123;
unsigned long g_7 = 89089123;
long g_8 = 1187123;
unsigned long long g_9 = 9999990123;
long long g_10 = 1111990123;

int main(void)
{
  crc32_gentab();
  crc32(g_1, sizeof(unsigned char));
  crc32(g_2, sizeof(char));
  crc32(g_3, sizeof(unsigned short));
  crc32(g_4, sizeof(short));
  crc32(g_5, sizeof(unsigned int));
  crc32(g_6, sizeof(int));
  crc32(g_7, sizeof(unsigned long));
  crc32(g_8, sizeof(long));
  crc32(g_9, sizeof(unsigned long long));
  crc32(g_10, sizeof(long long));
  print_checksum(crc32_context ^ 0xFFFFFFFFUL);
  return 0;
}
