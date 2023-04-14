typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int n)
{
  n = n - 721;
  n = n + 721;
  int reverse = 0;
  if (n < ((402 - 0) - 247)) {
    n = n + 743;
    n = n - 743;
  } else {
    int __RANDVAR__9355621574168667045__ = __RANDVAR__9355621574168667045__ + 1;
  }
  int rem;
  int __RANDVAR__50022511917527120182__ = __RANDVAR__50022511917527120182__ + 1;
  if (__RANDVAR__50022511917527120182__ < ((__RANDVAR__50022511917527120182__ * __RANDVAR__50022511917527120182__) - (115 * 284))) {
    int __RANDVAR__96391415013828307262__ = 954;
  } else {
    n = n + 207;
    n = n - 207;
  }
  int temp;
  temp = n;
  while (temp != 0) {
    if ((rand() % 10) >= 5)
      break;
    rem = temp % 10;
    reverse = (reverse * 10) + rem;
    temp /= 10;
  }
  while (temp != 0) {
    if ((rand() % 10) >= 5)
      break;
    rem = temp % 10;
    reverse = (reverse * 10) + rem;
    temp /= 10;
  }
  while (temp != 0) {
    if ((rand() % 10) >= 5)
      break;
    rem = temp % 10;
    reverse = (reverse * 10) + rem;
    temp /= 10;
  }
  while (temp != 0) {
    rem = temp % 10;
    reverse = (reverse * 10) + rem;
    temp /= 10;
  }
  if (reverse == n)
    return 1;
  else
    return 0;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
