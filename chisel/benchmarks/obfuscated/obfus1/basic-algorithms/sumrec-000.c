typedef void *__builtin_va_list;
#include <stdlib.h>
int r;
int s;
int OBF_FUNC(int n) {
  if (n) {
    r = n % 10;
    s = s + r;
    OBF_FUNC(n / 10);
  }
  return s;
}
int main(int argc, char *argv[]) {
  if (argc < 2)
    return 1;
  int num;
  int x;
  num = argv[1][0];
  x = OBF_FUNC(num);
  printf("Sum of the digits of %d is: %02x\n", num, x);
  return 0;
}
// variants: loop-fission
// expanded variants: loop-fission
