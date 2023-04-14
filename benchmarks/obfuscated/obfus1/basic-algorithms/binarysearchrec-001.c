typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int a[], int n, int m, int l, int u)
{
  int mid;
  if (l <= u) {
    mid = (l + u) / 2;
    if (m == a[mid]) {
      return 1;
    } else if (m < a[mid]) {
      return OBF_FUNC(a, n, m, l, mid - 1);
    } else
      return OBF_FUNC(a, n, m, mid + 1, u);
  } else
    return 0;
}
int main(int argc, char *argv[]) {
  if (argc < 12)
    return 1;
  int a[10];
  int i;
  int m;
  int c;
  int l;
  int u;
  i = 1;
  for (; i < (argc - 1);) {
    a[i - 1] = argv[i][0];
    i++;
  }
  m = (int)argv[argc - 1][0];
  l = 0;
  u = argc - 2;
  c = OBF_FUNC(a, argc - 1, m, l, u);
  if (c == 0)
    printf("Number is not found.\n");
  else
    printf("Number is found.\n");
  return 0;
}
// variants: loop-fission
// expanded variants: loop-fission
