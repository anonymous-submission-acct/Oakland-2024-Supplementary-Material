typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int x, int y)
{
  int __RANDVAR__31952807754842205066__ = 0;
  while (__RANDVAR__31952807754842205066__ == 0) {
    if (x != y) {
      if (x > y)
        return OBF_FUNC(x - y, y);
      else
        return OBF_FUNC(x, y - x);
    }
    if (x != y) {
      if (x > y)
        return OBF_FUNC(x - y, y);
      else
        return OBF_FUNC(x, y - x);
    }
    if (x != y) {
      if (x > y)
        return OBF_FUNC(x - y, y);
      else
        return OBF_FUNC(x, y - x);
    }
    while (x != y) {
      if (x != y) {
        if (x > y)
          return OBF_FUNC(x - y, y);
        else
          return OBF_FUNC(x, y - x);
      }
      if (x != y) {
        if (x > y)
          return OBF_FUNC(x - y, y);
        else
          return OBF_FUNC(x, y - x);
      }
      if (x != y) {
        if (x > y)
          return OBF_FUNC(x - y, y);
        else
          return OBF_FUNC(x, y - x);
      }
    }
    __RANDVAR__31952807754842205066__ = 1;
  }
  return x;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1]), atoi(argv[2])); }
// variants: loop-unroll
// expanded variants: loop-unroll
