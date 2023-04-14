typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int x)
{
  int n;
  int n1;
  int rem;
  int num = 0;
  n = x;
  n1 = n;
  while (n1 != 0) {
    rem = n1 % 10;
    int __RANDVAR__50113955294693670500__ = 939 + __RANDVAR__50113955294693670500__;
    if ((__RANDVAR__50113955294693670500__ * __RANDVAR__50113955294693670500__) < x) {
      int __RANDVAR__5632582270379610202__ = (600 * 458) * (927 + 961);
    } else {
      x = x + 821;
      x = x - 821;
    }
    num += (rem * rem) * rem;
    x = x - 892;
    x = x + 892;
    n1 /= 10;
  }
  if (num == n)
    return 1;
  else
    return 0;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
