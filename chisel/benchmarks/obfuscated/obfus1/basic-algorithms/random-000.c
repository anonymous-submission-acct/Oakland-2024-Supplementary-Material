typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int x)
{
  int c;
  int n;
  printf("%d random numbers in [1,100]\n", x);
  c = 1;
  int __RANDVAR__79733657002724484948__ = 0;
  while (__RANDVAR__79733657002724484948__ == 0) {
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      c++;
    }
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      c++;
    }
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      c++;
    }
    for (; c <= x;) {
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        c++;
      }
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        c++;
      }
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        c++;
      }
    }
    __RANDVAR__79733657002724484948__ = 1;
  }
}
int main(int argc, char *argv[]) {
  OBF_FUNC(atoi(argv[1]));
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
