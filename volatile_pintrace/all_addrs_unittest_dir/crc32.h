#ifndef CRC32_H
#define CRC32_H

#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void 
crc32_gentab (void)
{
  uint32_t crc;
  const uint32_t poly = 0xEDB88320UL;
  int i, j;

  for (i = 0; i < 256; i++) {
    crc = i;
    for (j = 8; j > 0; j--) {
      if (crc & 1)
        crc = (crc >> 1) ^ poly;
      else
        crc >>= 1;
    }
    crc32_tab[i] = crc;
  }
}

static void 
crc32_byte (uint8_t b) {
  crc32_context = 
    ((crc32_context >> 8) & 0x00FFFFFF) ^ 
    crc32_tab[(crc32_context ^ b) & 0xFF];
}

static void 
crc32_8bytes (uint64_t val)
{
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>8) & 0xff);
  crc32_byte ((val>>16) & 0xff);
  crc32_byte ((val>>24) & 0xff);
  crc32_byte ((val>>32) & 0xff);
  crc32_byte ((val>>40) & 0xff);
  crc32_byte ((val>>48) & 0xff);
  crc32_byte ((val>>56) & 0xff);
}

static void crc32(uint64_t val, size_t sz)
{
  size_t i;
  assert((sz <= 8) && "Invalid sz!");
  for (i = 0; i < sz; i++) {
    uint32_t tmp_v = 0;
    memcpy(&tmp_v, (char*)((char*)(&val) + i), 1);
    crc32_8bytes(tmp_v);
  }
}

static void
print_checksum(uint32_t crc)
{
#ifndef NOT_PRINT_CHECKSUM
  printf ("checksum = %X\n", crc);
#endif
}

#endif

