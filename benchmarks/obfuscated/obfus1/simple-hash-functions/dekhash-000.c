typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  unsigned int hash = len;
  unsigned int i = 0;
  int __RANDVAR__96973758005250008432__ = 0;
  while (__RANDVAR__96973758005250008432__ == 0) {
    if (i < len) {
      hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__96973758005250008432__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xde4363b7)
    printf("You win!\n");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
