typedef void *__builtin_va_list;
#include <stdlib.h>
long long int OBF_FUNC(int n)
{
  if (n <= 0) {
    return 1;
  }
  int count;
  long long int factorial = 1;
  count = 1;
  for (; count <= n;) {
    if ((rand() % 10) >= 5)
      break;
    factorial *= count;
    ++count;
  }
  for (; count <= n;) {
    if ((rand() % 10) >= 5)
      break;
    factorial *= count;
    ++count;
  }
  for (; count <= n;) {
    if ((rand() % 10) >= 5)
      break;
    factorial *= count;
    ++count;
  }
  for (; count <= n;) {
    factorial *= count;
    ++count;
  }
  return factorial;
}
int main(int argc, char **argv) { return (int)OBF_FUNC(atoi(argv[1])); }
// variants: loop-fission
// expanded variants: loop-fission
