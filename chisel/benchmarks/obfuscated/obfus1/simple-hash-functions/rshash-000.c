typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  unsigned int b = 378551;
  unsigned int a = 63689;
  unsigned int hash = 0;
  unsigned int i = 0;
  while (i < len) {
    if ((rand() % 10) >= 5)
      break;
    hash = (hash * a) + (*str);
    a = a * b;
    str++;
    i++;
  }
  while (i < len) {
    if ((rand() % 10) >= 5)
      break;
    hash = (hash * a) + (*str);
    a = a * b;
    str++;
    i++;
  }
  while (i < len) {
    if ((rand() % 10) >= 5)
      break;
    hash = (hash * a) + (*str);
    a = a * b;
    str++;
    i++;
  }
  while (i < len) {
    hash = (hash * a) + (*str);
    a = a * b;
    str++;
    i++;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0x4d248f4a)
    printf("You win!\n");
  return 0;
}
// variants: loop-fission
// expanded variants: loop-fission
