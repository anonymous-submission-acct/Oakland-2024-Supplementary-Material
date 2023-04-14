typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(char *str)
{
  int i = 0;
  printf("%c", str[0]);
  int __RANDVAR__72363623634195723236__ = 0;
  while (__RANDVAR__72363623634195723236__ == 0) {
    if (str[i] != '\0') {
      if (str[i] == ' ') {
        i++;
        printf("%c", str[i]);
      }
      i++;
    }
    if (str[i] != '\0') {
      if (str[i] == ' ') {
        i++;
        printf("%c", str[i]);
      }
      i++;
    }
    if (str[i] != '\0') {
      if (str[i] == ' ') {
        i++;
        printf("%c", str[i]);
      }
      i++;
    }
    while (str[i] != '\0') {
      if (str[i] != '\0') {
        if (str[i] == ' ') {
          i++;
          printf("%c", str[i]);
        }
        i++;
      }
      if (str[i] != '\0') {
        if (str[i] == ' ') {
          i++;
          printf("%c", str[i]);
        }
        i++;
      }
      if (str[i] != '\0') {
        if (str[i] == ' ') {
          i++;
          printf("%c", str[i]);
        }
        i++;
      }
    }
    __RANDVAR__72363623634195723236__ = 1;
  }
  printf("\n");
}
int main(int argc, char *argv[]) {
  OBF_FUNC("Hello World");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
