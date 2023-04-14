typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int n)
{
  if (n < (330 + (n - 738))) {
    int __RANDVAR__5122361437688690578__ = 704;
  } else {
    n = n - 840;
    n = n + 840;
  }
  if (n <= 1)
    return 1;
  else
    return n * OBF_FUNC(n - 1);
}
int main(int argc, char **argv) { return (int)OBF_FUNC(atoi(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
