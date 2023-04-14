typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  const unsigned int fnv_prime = 0x811C9DC5;
  unsigned int hash = 0;
  unsigned int i = 0;
  int __RANDVAR__5738724116156887369__ = 0;
  while (__RANDVAR__5738724116156887369__ == 0) {
    if (i < len) {
      hash *= fnv_prime;
      hash ^= *str;
      str++;
      i++;
    }
    if (i < len) {
      hash *= fnv_prime;
      hash ^= *str;
      str++;
      i++;
    }
    if (i < len) {
      hash *= fnv_prime;
      hash ^= *str;
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        hash *= fnv_prime;
        hash ^= *str;
        str++;
        i++;
      }
      if (i < len) {
        hash *= fnv_prime;
        hash ^= *str;
        str++;
        i++;
      }
      if (i < len) {
        hash *= fnv_prime;
        hash ^= *str;
        str++;
        i++;
      }
    }
    __RANDVAR__5738724116156887369__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xee3c81d4)
    printf("You win!\n");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
