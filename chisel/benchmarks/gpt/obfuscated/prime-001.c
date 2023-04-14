typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int n)
{
  int i = 2;
  int flag = 0;
  int __RANDVAR__96960824299897680493__ = 0;
  while (__RANDVAR__96960824299897680493__ == 0) {
    if (i <= (n / 2)) {
      if ((n % i) == 0) {
        flag = 1;
        break;
      }
      i++;
    }
    if (i <= (n / 2)) {
      if ((n % i) == 0) {
        flag = 1;
        break;
      }
      i++;
    }
    if (i <= (n / 2)) {
      if ((n % i) == 0) {
        flag = 1;
        break;
      }
      i++;
    }
    while (i <= (n / 2)) {
      if (i <= (n / 2)) {
        if ((n % i) == 0) {
          flag = 1;
          break;
        }
        i++;
      }
      if (i <= (n / 2)) {
        if ((n % i) == 0) {
          flag = 1;
          break;
        }
        i++;
      }
      if (i <= (n / 2)) {
        if ((n % i) == 0) {
          flag = 1;
          break;
        }
        i++;
      }
    }
    __RANDVAR__96960824299897680493__ = 1;
  }
  if (flag == 0)
    return 1;
  else
    return 0;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
