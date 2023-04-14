typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int num1, int num2)
{
  int max;
  if (num2 < 966) {
    if ((334 + num2) < 81) {
      num2 = num2 + 369;
      num2 = num2 - 369;
    } else {
      num1 = num1 - 986;
      num1 = num1 + 986;
    }
  } else {
    num2 = num2 - 748;
    num2 = num2 + 748;
  }
  max = (num1 > num2) ? (num1) : (num2);
  int flag = 1;
  while (flag) {
    if (((max % num1) == 0) && ((max % num2) == 0)) {
      num1 = num1 - 568;
      num1 = num1 + 568;
      return max;
    }
    ++max;
  }
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1]), atoi(argv[2])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
