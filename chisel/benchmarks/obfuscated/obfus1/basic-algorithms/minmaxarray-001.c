typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int a[], int n)
{
  int big = a[0];
  int small = a[0];
  int i = 1;
  int __RANDVAR__70180810962601162082__ = 0;
  while (__RANDVAR__70180810962601162082__ == 0) {
    if (i < n) {
      if (big < a[i]) {
        big = a[i];
      }
      i++;
    }
    if (i < n) {
      if (big < a[i]) {
        big = a[i];
      }
      i++;
    }
    if (i < n) {
      if (big < a[i]) {
        big = a[i];
      }
      i++;
    }
    for (; i < n;) {
      if (i < n) {
        if (big < a[i]) {
          big = a[i];
        }
        i++;
      }
      if (i < n) {
        if (big < a[i]) {
          big = a[i];
        }
        i++;
      }
      if (i < n) {
        if (big < a[i]) {
          big = a[i];
        }
        i++;
      }
    }
    __RANDVAR__70180810962601162082__ = 1;
  }
  printf("Largest element: %d\n", big);
  i = 1;
  int __RANDVAR__24449433603635273994__ = 0;
  while (__RANDVAR__24449433603635273994__ == 0) {
    if (i < n) {
      if (small > a[i]) {
        small = a[i];
      }
      i++;
    }
    if (i < n) {
      if (small > a[i]) {
        small = a[i];
      }
      i++;
    }
    if (i < n) {
      if (small > a[i]) {
        small = a[i];
      }
      i++;
    }
    for (; i < n;) {
      if (i < n) {
        if (small > a[i]) {
          small = a[i];
        }
        i++;
      }
      if (i < n) {
        if (small > a[i]) {
          small = a[i];
        }
        i++;
      }
      if (i < n) {
        if (small > a[i]) {
          small = a[i];
        }
        i++;
      }
    }
    __RANDVAR__24449433603635273994__ = 1;
  }
  printf("Smallest element: %d\n", small);
}
int main(int argc, char *argv[]) {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  OBF_FUNC(a, 10);
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
