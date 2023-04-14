typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int n)
{
  int r;
  int reverse = 0;
  int __RANDVAR__82110276689700448207__ = 0;
  while (__RANDVAR__82110276689700448207__ == 0) {
    if (n) {
      r = n % 10;
      reverse = (reverse * 10) + r;
      n = n / 10;
    }
    if (n) {
      r = n % 10;
      reverse = (reverse * 10) + r;
      n = n / 10;
    }
    if (n) {
      r = n % 10;
      reverse = (reverse * 10) + r;
      n = n / 10;
    }
    while (n) {
      if (n) {
        r = n % 10;
        reverse = (reverse * 10) + r;
        n = n / 10;
      }
      if (n) {
        r = n % 10;
        reverse = (reverse * 10) + r;
        n = n / 10;
      }
      if (n) {
        r = n % 10;
        reverse = (reverse * 10) + r;
        n = n / 10;
      }
    }
    __RANDVAR__82110276689700448207__ = 1;
  }
  return reverse;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
