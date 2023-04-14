typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  unsigned int hash = 0;
  unsigned int i = 0;
  while (i < len) {
    hash = (((*str) + (hash << 6)) + (hash << 16)) - hash;
    str++;
    i++;
  }
  int __RANDVAR__44036359474502129268__ = 573;
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0x89dcd66e)
    printf("You win!\n");
  return 0;
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
