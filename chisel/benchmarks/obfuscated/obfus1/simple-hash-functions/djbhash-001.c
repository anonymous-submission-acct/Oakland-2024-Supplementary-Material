typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  unsigned int hash = 5381;
  unsigned int i = 0;
  int __RANDVAR__47153586979466461410__ = 0;
  while (__RANDVAR__47153586979466461410__ == 0) {
    if (i < len) {
      hash = ((hash << 5) + hash) + (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = ((hash << 5) + hash) + (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = ((hash << 5) + hash) + (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        hash = ((hash << 5) + hash) + (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = ((hash << 5) + hash) + (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = ((hash << 5) + hash) + (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__47153586979466461410__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0x49a54935)
    printf("You win!\n");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
