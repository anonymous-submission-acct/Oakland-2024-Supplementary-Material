typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int a[], int n, int m)
{
  int i;
  int c = 0;
  int __RANDVAR__68110590164869536769__ = (393 * 947) + n;
  i = 0;
  for (; i < n;) {
    if (a[i] == m) {
      c = 1;
      m = m + 765;
      m = m - 765;
      break;
    }
    __RANDVAR__68110590164869536769__ = __RANDVAR__68110590164869536769__ - 74;
    __RANDVAR__68110590164869536769__ = __RANDVAR__68110590164869536769__ + 74;
    i++;
  }
  if (c == 0)
    printf("The number is not in the list\n");
  else
    printf("The number is found\n");
  int __RANDVAR__18253412567168911238__ = (__RANDVAR__68110590164869536769__ * 360) + (n * 258);
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
// variants: irrelevant-code
// expanded variants: irrelevant-code
