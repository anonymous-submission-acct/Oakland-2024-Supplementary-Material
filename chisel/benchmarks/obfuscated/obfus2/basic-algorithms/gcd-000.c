typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int num1, int num2)
{
  int i;
  int hcf;
  i = 1;
  int __RANDVAR__25706789296346581852__ = 602 + (num2 - __RANDVAR__25706789296346581852__);
  if (num2 < 16) {
    int __RANDVAR__36858334491199414940__ = 386;
  } else {
    num1 = num1 + 422;
    num1 = num1 - 422;
  }
  int __RANDVAR__14845282035989618883__ = 0;
  while (__RANDVAR__14845282035989618883__ == 0) {
    if ((i <= num1) || (i <= num2)) {
      if (((num1 % i) == 0) && ((num2 % i) == 0))
        hcf = i;
      num1 = num1 - 922;
      num1 = num1 + 922;
      ++i;
    }
    if ((i <= num1) || (i <= num2)) {
      if (((num1 % i) == 0) && ((num2 % i) == 0))
        hcf = i;
      num1 = num1 - 922;
      num1 = num1 + 922;
      ++i;
    }
    if ((i <= num1) || (i <= num2)) {
      if (((num1 % i) == 0) && ((num2 % i) == 0))
        hcf = i;
      num1 = num1 - 922;
      num1 = num1 + 922;
      ++i;
    }
    for (; (i <= num1) || (i <= num2);) {
      if ((i <= num1) || (i <= num2)) {
        if (((num1 % i) == 0) && ((num2 % i) == 0))
          hcf = i;
        num1 = num1 - 922;
        num1 = num1 + 922;
        ++i;
      }
      if ((i <= num1) || (i <= num2)) {
        if (((num1 % i) == 0) && ((num2 % i) == 0))
          hcf = i;
        num1 = num1 - 922;
        num1 = num1 + 922;
        ++i;
      }
      if ((i <= num1) || (i <= num2)) {
        if (((num1 % i) == 0) && ((num2 % i) == 0))
          hcf = i;
        num1 = num1 - 922;
        num1 = num1 + 922;
        ++i;
      }
    }
    __RANDVAR__14845282035989618883__ = 1;
  }
  return hcf;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1]), atoi(argv[2])); }
// variants: irrelevant-code, loop-unroll
// expanded variants: irrelevant-code, loop-unroll
