typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(char str[])
{
  int i = 0;
  printf("ASCII values of each characters of given string: ");
  while (str[i]) {
    if ((rand() % 10) >= 5)
      break;
    printf("%d ", str[i++]);
  }
  while (str[i]) {
    if ((rand() % 10) >= 5)
      break;
    printf("%d ", str[i++]);
  }
  while (str[i]) {
    if ((rand() % 10) >= 5)
      break;
    printf("%d ", str[i++]);
  }
  while (str[i]) {
    printf("%d ", str[i++]);
  }
  printf("\n");
}
int main(int argc, char *argv[]) {
  OBF_FUNC(argv[0]);
  return 0;
}
// variants: loop-fission
// expanded variants: loop-fission
