typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(char str1[], char str2[])
{
  int i = 0;
  int flag = 0;
  int __RANDVAR__78052510592433567591__ = 0;
  while (__RANDVAR__78052510592433567591__ == 0) {
    if ((str1[i] != '\0') && (str2[i] != '\0')) {
      if (str1[i] != str2[i]) {
        flag = 1;
        break;
      }
      i++;
    }
    if ((str1[i] != '\0') && (str2[i] != '\0')) {
      if (str1[i] != str2[i]) {
        flag = 1;
        break;
      }
      i++;
    }
    if ((str1[i] != '\0') && (str2[i] != '\0')) {
      if (str1[i] != str2[i]) {
        flag = 1;
        break;
      }
      i++;
    }
    while ((str1[i] != '\0') && (str2[i] != '\0')) {
      if ((str1[i] != '\0') && (str2[i] != '\0')) {
        if (str1[i] != str2[i]) {
          flag = 1;
          break;
        }
        i++;
      }
      if ((str1[i] != '\0') && (str2[i] != '\0')) {
        if (str1[i] != str2[i]) {
          flag = 1;
          break;
        }
        i++;
      }
      if ((str1[i] != '\0') && (str2[i] != '\0')) {
        if (str1[i] != str2[i]) {
          flag = 1;
          break;
        }
        i++;
      }
    }
    __RANDVAR__78052510592433567591__ = 1;
  }
  if (((flag == 0) && (str1[i] == '\0')) && (str2[i] == '\0'))
    return 1;
  else
    return 0;
}
int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 1;
  }
  int compare;
  int i;
  char *str1 = argv[1];
  char *str2 = argv[2];
  compare = OBF_FUNC(str1, str2);
  if (compare == 1)
    printf("Both strings are equal.");
  else
    printf("Both strings are not equal");
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
