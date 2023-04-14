typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(char str1[], char str2[])
{
  int i = 0;
  int j = 0;
  int __RANDVAR__78263561478976248059__ = 0;
  while (__RANDVAR__78263561478976248059__ == 0) {
    if (str1[i] != '\0') {
      i++;
    }
    if (str1[i] != '\0') {
      i++;
    }
    if (str1[i] != '\0') {
      i++;
    }
    while (str1[i] != '\0') {
      if (str1[i] != '\0') {
        i++;
      }
      if (str1[i] != '\0') {
        i++;
      }
      if (str1[i] != '\0') {
        i++;
      }
    }
    __RANDVAR__78263561478976248059__ = 1;
  }
  int __RANDVAR__62778789044401705615__ = 0;
  while (__RANDVAR__62778789044401705615__ == 0) {
    if (str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
    }
    if (str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
    }
    if (str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
    }
    while (str2[j] != '\0') {
      if (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
      }
      if (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
      }
      if (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
      }
    }
    __RANDVAR__62778789044401705615__ = 1;
  }
  str1[i] = '\0';
  printf("String after concatenation: %s\n", str1);
}
int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 1;
  }
  int compare;
  char *str1 = argv[1];
  char *str2 = argv[2];
  OBF_FUNC(str1, str2);
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
