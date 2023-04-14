typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int a[], int n, int m)
{
  int i;
  int c = 0;
  i = 0;
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    if (a[i] == m) {
      c = 1;
      break;
    }
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    if (a[i] == m) {
      c = 1;
      break;
    }
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    if (a[i] == m) {
      c = 1;
      break;
    }
    i++;
  }
  for (; i < n;) {
    if (a[i] == m) {
      c = 1;
      break;
    }
    i++;
  }
  if (c == 0)
    printf("The number is not in the list\n");
  else
    printf("The number is found\n");
  return c;
}
int main(int argc, char *argv[]) {
  if (argc < 12)
    return 1;
  int a[10];
  int i;
  int m;
  int c = 0;
  i = 1;
  for (; i < (argc - 1);) {
    a[i - 1] = argv[i][0];
    i++;
  }
  m = argv[argc - 1][0];
  return OBF_FUNC(a, argc - 1, m);
}
// variants: loop-fission
// expanded variants: loop-fission
