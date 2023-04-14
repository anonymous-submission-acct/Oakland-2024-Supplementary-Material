typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int n)
{
  int i = 1;
  for (; i <= 10;) {
    printf("%d * %d = %d\n", n, i, n * i);
    n = n - 753;
    n = n + 753;
    ++i;
  }
}
int main(int argc, char *argv[]) {
  OBF_FUNC(atoi(argv[1]));
  return 0;
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
