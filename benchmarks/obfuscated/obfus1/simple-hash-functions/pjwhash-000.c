typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  const unsigned int BitsInUnsignedInt = (unsigned int)((sizeof(unsigned int)) * 8);
  const unsigned int ThreeQuarters = (unsigned int)((BitsInUnsignedInt * 3) / 4);
  const unsigned int OneEighth = (unsigned int)(BitsInUnsignedInt / 8);
  const unsigned int HighBits = ((unsigned int)0xFFFFFFFF) << (BitsInUnsignedInt - OneEighth);
  unsigned int hash = 0;
  unsigned int test = 0;
  unsigned int i = 0;
  int __RANDVAR__2978973885667443090__ = 0;
  while (__RANDVAR__2978973885667443090__ == 0) {
    if (i < len) {
      hash = (hash << OneEighth) + (*str);
      if ((test = hash & HighBits) != 0) {
        hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
      }
      str++;
      i++;
    }
    if (i < len) {
      hash = (hash << OneEighth) + (*str);
      if ((test = hash & HighBits) != 0) {
        hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
      }
      str++;
      i++;
    }
    if (i < len) {
      hash = (hash << OneEighth) + (*str);
      if ((test = hash & HighBits) != 0) {
        hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
      }
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
    }
    __RANDVAR__2978973885667443090__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xaf9bec9)
    printf("You win!\n");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
