typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  int __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 1;
  const unsigned int fnv_prime = 0x811C9DC5;
  unsigned int hash = 0;
  if (((__RANDVAR__92114087592812260838__ - 88) + __RANDVAR__92114087592812260838__) < __RANDVAR__92114087592812260838__) {
    int __RANDVAR__25755222600750619003__ = 253;
  } else {
    __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 472;
    __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ - 472;
  }
  unsigned int i = 0;
  __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 450;
  __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ - 450;
  while (i < len) {
    hash *= fnv_prime;
    hash ^= *str;
    str++;
    if (__RANDVAR__92114087592812260838__ < 201) {
      if (((195 * 170) + __RANDVAR__92114087592812260838__) < (270 * (__RANDVAR__92114087592812260838__ - 377))) {
        __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 475;
        __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ - 475;
      } else {
        __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 959;
        __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ - 959;
      }
    } else {
      __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ + 805;
      __RANDVAR__92114087592812260838__ = __RANDVAR__92114087592812260838__ - 805;
    }
    i++;
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
// variants: irrelevant-code
// expanded variants: irrelevant-code
