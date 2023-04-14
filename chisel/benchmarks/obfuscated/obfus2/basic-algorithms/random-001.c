typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int x)
{
  int __RANDVAR__32312873693979068963__ = __RANDVAR__32312873693979068963__ - (843 + __RANDVAR__32312873693979068963__);
  if (__RANDVAR__32312873693979068963__ < x) {
    x = x - 749;
    x = x + 749;
  } else {
    x = x - 23;
    x = x + 23;
  }
  int c;
  x = x - 378;
  x = x + 378;
  int n;
  printf("%d random numbers in [1,100]\n", x);
  c = 1;
  int __RANDVAR__95671899262472118233__ = 0;
  while (__RANDVAR__95671899262472118233__ == 0) {
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      if (((x + 419) * x) < x) {
        x = x - 850;
        x = x + 850;
      } else {
        int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
      }
      c++;
    }
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      if (((x + 419) * x) < x) {
        x = x - 850;
        x = x + 850;
      } else {
        int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
      }
      c++;
    }
    if (c <= x) {
      n = (rand() % 100) + 1;
      printf("%d\n", n);
      if (((x + 419) * x) < x) {
        x = x - 850;
        x = x + 850;
      } else {
        int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
      }
      c++;
    }
    for (; c <= x;) {
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        if (((x + 419) * x) < x) {
          x = x - 850;
          x = x + 850;
        } else {
          int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
        }
        c++;
      }
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        if (((x + 419) * x) < x) {
          x = x - 850;
          x = x + 850;
        } else {
          int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
        }
        c++;
      }
      if (c <= x) {
        n = (rand() % 100) + 1;
        printf("%d\n", n);
        if (((x + 419) * x) < x) {
          x = x - 850;
          x = x + 850;
        } else {
          int __RANDVAR__82197814342884979811__ = __RANDVAR__82197814342884979811__ + 1;
        }
        c++;
      }
    }
    __RANDVAR__95671899262472118233__ = 1;
  }
}
int main(int argc, char *argv[]) {
  OBF_FUNC(atoi(argv[1]));
  return 0;
}
// variants: irrelevant-code, loop-unroll
// expanded variants: irrelevant-code, loop-unroll
