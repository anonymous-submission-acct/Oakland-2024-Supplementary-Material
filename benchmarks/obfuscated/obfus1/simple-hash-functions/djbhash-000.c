typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  int __RANDVAR__13484067823194637590__ = (296 + 409) + 480;
  unsigned int hash = 5381;
  __RANDVAR__13484067823194637590__ = __RANDVAR__13484067823194637590__ - 821;
  __RANDVAR__13484067823194637590__ = __RANDVAR__13484067823194637590__ + 821;
  unsigned int i = 0;
  int __RANDVAR__97400655077304440828__ = __RANDVAR__97400655077304440828__ + 1;
  while (i < len) {
    hash = ((hash << 5) + hash) + (*str);
    __RANDVAR__13484067823194637590__ = __RANDVAR__13484067823194637590__ - 43;
    __RANDVAR__13484067823194637590__ = __RANDVAR__13484067823194637590__ + 43;
    str++;
    i++;
  }
  int __RANDVAR__71785284879268590882__ = (__RANDVAR__13484067823194637590__ + 822) - (123 * 778);
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0x49a54935)
    printf("You win!\n");
  return 0;
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
