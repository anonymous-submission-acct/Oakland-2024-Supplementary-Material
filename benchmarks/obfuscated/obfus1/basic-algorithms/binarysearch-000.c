typedef void *__builtin_va_list;
#include <stdlib.h>
_Bool 
    OBF_FUNC(int a[], int n, int m)
{
  int l;
  int u;
  int mid;
  l = 0;
  u = n - 1;
  int __RANDVAR__42226380406006506449__ = 0;
  while (__RANDVAR__42226380406006506449__ == 0) {
    if (l <= u) {
      mid = (l + u) / 2;
      if (m == a[mid]) {
        return 1;
      } else if (m < a[mid]) {
        u = mid - 1;
      } else
        l = mid + 1;
    }
    if (l <= u) {
      mid = (l + u) / 2;
      if (m == a[mid]) {
        return 1;
      } else if (m < a[mid]) {
        u = mid - 1;
      } else
        l = mid + 1;
    }
    if (l <= u) {
      mid = (l + u) / 2;
      if (m == a[mid]) {
        return 1;
      } else if (m < a[mid]) {
        u = mid - 1;
      } else
        l = mid + 1;
    }
    while (l <= u) {
      if (l <= u) {
        mid = (l + u) / 2;
        if (m == a[mid]) {
          return 1;
        } else if (m < a[mid]) {
          u = mid - 1;
        } else
          l = mid + 1;
      }
      if (l <= u) {
        mid = (l + u) / 2;
        if (m == a[mid]) {
          return 1;
        } else if (m < a[mid]) {
          u = mid - 1;
        } else
          l = mid + 1;
      }
      if (l <= u) {
        mid = (l + u) / 2;
        if (m == a[mid]) {
          return 1;
        } else if (m < a[mid]) {
          u = mid - 1;
        } else
          l = mid + 1;
      }
    }
    __RANDVAR__42226380406006506449__ = 1;
  }
  return 0;
}
int main(int argc, char *argv[]) {
  int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  OBF_FUNC(x, 10, 5);
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
