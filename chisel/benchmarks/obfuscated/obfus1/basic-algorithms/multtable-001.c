typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int n)
{
  n = n - 338;
  n = n + 338;
  int i = 1;
  n = n + 449;
  n = n - 449;
  for (; i <= 10;) {
    printf("%d * %d = %d\n", n, i, n * i);
    ++i;
  }
}
int main(int argc, char *argv[]) {
  OBF_FUNC(atoi(argv[1]));
  return 0;
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
