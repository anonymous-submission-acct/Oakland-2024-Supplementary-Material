typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int a[], int n, int m, int l, int u)
{
  int __RANDVAR__92903178960994685988__ = 805;
  if (n < ((u - 783) * 484)) {
    u = u + 309;
    u = u - 309;
  } else {
    int __RANDVAR__24845537227940049502__ = 813;
    if (u < 776) {
      int __RANDVAR__84945685948167214698__ = 840 * (54 * 24);
    } else {
      int __RANDVAR__920990896689104615__ = 828;
    }
  }
  int mid;
  if (l <= u) {
    int __RANDVAR__72438251351773456857__ = n * (960 * u);
    if ((173 + (242 * 38)) < m) {
      __RANDVAR__72438251351773456857__ = __RANDVAR__72438251351773456857__ + 832;
      __RANDVAR__72438251351773456857__ = __RANDVAR__72438251351773456857__ - 832;
    } else {
      int __RANDVAR__69782340325865135645__ = __RANDVAR__69782340325865135645__ + 1;
    }
    mid = (l + u) / 2;
    if (m == a[mid]) {
      return 1;
    } else if (m < a[mid]) {
      int __RANDVAR__95062685161154219958__ = 870 + m;
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
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
