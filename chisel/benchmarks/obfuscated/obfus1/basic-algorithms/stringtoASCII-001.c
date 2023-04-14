typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(char str[])
{
  int i = 0;
  printf("ASCII values of each characters of given string: ");
  int __RANDVAR__15200125205864837899__ = 0;
  while (__RANDVAR__15200125205864837899__ == 0) {
    if (str[i]) {
      printf("%d ", str[i++]);
    }
    if (str[i]) {
      printf("%d ", str[i++]);
    }
    if (str[i]) {
      printf("%d ", str[i++]);
    }
    while (str[i]) {
      if (str[i]) {
        printf("%d ", str[i++]);
      }
      if (str[i]) {
        printf("%d ", str[i++]);
      }
      if (str[i]) {
        printf("%d ", str[i++]);
      }
    }
    __RANDVAR__15200125205864837899__ = 1;
  }
  printf("\n");
}
int main(int argc, char *argv[]) {
  OBF_FUNC(argv[0]);
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
