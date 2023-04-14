typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  int __RANDVAR__54180376708015732631__ = 595;
  return (unsigned int)(*str);
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xbd9282b2)
    printf("You win!\n");
  return 0;
}
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
