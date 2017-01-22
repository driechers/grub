#include "common.h"

void imemcpy (void *dst, void *src, uint32 num)
{
  uint32 c;
  for (c=0;c<num;++c) ((uint8*)dst)[c]=((uint8*)src)[c];
};
