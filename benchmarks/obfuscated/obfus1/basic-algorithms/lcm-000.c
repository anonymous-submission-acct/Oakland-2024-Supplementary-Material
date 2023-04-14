typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int num1, int num2)
{
  int max;
  max = (num1 > num2) ? (num1) : (num2);
  int flag = 1;
  int __RANDVAR__52908668774581077358__ = 0;
  while (__RANDVAR__52908668774581077358__ == 0) {
    if (flag) {
      if (((max % num1) == 0) && ((max % num2) == 0)) {
        return max;
      }
      ++max;
    }
    if (flag) {
      if (((max % num1) == 0) && ((max % num2) == 0)) {
        return max;
      }
      ++max;
    }
    if (flag) {
      if (((max % num1) == 0) && ((max % num2) == 0)) {
        return max;
      }
      ++max;
    }
    while (flag) {
      if (flag) {
        if (((max % num1) == 0) && ((max % num2) == 0)) {
          return max;
        }
        ++max;
      }
      if (flag) {
        if (((max % num1) == 0) && ((max % num2) == 0)) {
          return max;
        }
        ++max;
      }
      if (flag) {
        if (((max % num1) == 0) && ((max % num2) == 0)) {
          return max;
        }
        ++max;
      }
    }
    __RANDVAR__52908668774581077358__ = 1;
  }
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1]), atoi(argv[2])); }
// variants: loop-unroll
// expanded variants: loop-unroll
