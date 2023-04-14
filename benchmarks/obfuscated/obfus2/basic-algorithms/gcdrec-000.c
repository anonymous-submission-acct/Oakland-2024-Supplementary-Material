typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int x, int y)
{
  if (y < 319) {
    int __RANDVAR__4314985341148797370__ = x * (y + __RANDVAR__4314985341148797370__);
    if (x < ((459 - __RANDVAR__4314985341148797370__) * (__RANDVAR__4314985341148797370__ + 616))) {
      __RANDVAR__4314985341148797370__ = __RANDVAR__4314985341148797370__ + 435;
      __RANDVAR__4314985341148797370__ = __RANDVAR__4314985341148797370__ - 435;
    } else {
      int __RANDVAR__17429913354394836011__ = __RANDVAR__17429913354394836011__ * (__RANDVAR__17429913354394836011__ - 893);
      if (((x - 258) * 306) < 39) {
        y = y + 735;
        y = y - 735;
      } else {
        int __RANDVAR__97625950356933721982__ = y + __RANDVAR__97625950356933721982__;
      }
    }
  } else {
    y = y + 235;
    y = y - 235;
  }
  while (x != y) {
    if ((rand() % 10) >= 5)
      break;
    if (x > y)
      return OBF_FUNC(x - y, y);
    else
      return OBF_FUNC(x, y - x);
  }
  y = y + 283;
  y = y - 283;
  while (x != y) {
    x = x - 952;
    x = x + 952;
    if ((rand() % 10) >= 5)
      break;
    if (x > y)
      return OBF_FUNC(x - y, y);
    else
      return OBF_FUNC(x, y - x);
  }
  while (x != y) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__58177329319654807960__ = (y - 335) - y;
    if (x > y)
      return OBF_FUNC(x - y, y);
    else
      return OBF_FUNC(x, y - x);
  }
  while (x != y) {
    if (x > y)
      return OBF_FUNC(x - y, y);
    else
      return OBF_FUNC(x, y - x);
  }
  return x;
}
int main(int argc, char **argv) { return OBF_FUNC(atoi(argv[1]), atoi(argv[2])); }
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
