typedef void *__builtin_va_list;
#include <stdlib.h>
int r;
int s;
int OBF_FUNC(int n) {
  int __RANDVAR__5681231026560871558__ = __RANDVAR__5681231026560871558__ + 1;
  if (((803 * 214) * (993 * 719)) < 125) {
    int __RANDVAR__36451634331000892150__ = __RANDVAR__36451634331000892150__ - 399;
  } else {
    int __RANDVAR__39145179537479054342__ = 15;
    if (n < 387) {
      if (__RANDVAR__39145179537479054342__ < n) {
        n = n + 122;
        n = n - 122;
      } else {
        int __RANDVAR__99770602857097851178__ = 318;
        if (__RANDVAR__99770602857097851178__ < 266) {
          __RANDVAR__99770602857097851178__ = __RANDVAR__99770602857097851178__ - 365;
          __RANDVAR__99770602857097851178__ = __RANDVAR__99770602857097851178__ + 365;
        } else {
          n = n - 710;
          n = n + 710;
        }
      }
    } else {
      int __RANDVAR__56245488578088523577__ = 862;
      if (((n - n) * 841) < n) {
        n = n + 345;
        n = n - 345;
      } else {
        n = n - 421;
        n = n + 421;
      }
    }
  }
  if (n) {
    r = n % 10;
    s = s + r;
    OBF_FUNC(n / 10);
  }
  n = n + 943;
  n = n - 943;
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
// variants: loop-fission, loop-fission, irrelevant-code
// expanded variants: loop-fission, loop-fission, irrelevant-code
