typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(char line[])
{
  int i;
  int v;
  int c;
  int ch;
  int d;
  int s;
  int o;
  o = (v = (c = (ch = (d = (s = 0)))));
  i = 0;
  int __RANDVAR__73244162535618451380__ = 0;
  while (__RANDVAR__73244162535618451380__ == 0) {
    if (line[i] != '\0') {
      if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
        ++v;
      else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
        ++c;
      else if ((line[i] >= '0') && (c <= '9'))
        ++d;
      else if (line[i] == ' ')
        ++s;
      ++i;
    }
    if (line[i] != '\0') {
      if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
        ++v;
      else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
        ++c;
      else if ((line[i] >= '0') && (c <= '9'))
        ++d;
      else if (line[i] == ' ')
        ++s;
      ++i;
    }
    if (line[i] != '\0') {
      if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
        ++v;
      else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
        ++c;
      else if ((line[i] >= '0') && (c <= '9'))
        ++d;
      else if (line[i] == ' ')
        ++s;
      ++i;
    }
    for (; line[i] != '\0';) {
      if (line[i] != '\0') {
        if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
          ++v;
        else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
          ++c;
        else if ((line[i] >= '0') && (c <= '9'))
          ++d;
        else if (line[i] == ' ')
          ++s;
        ++i;
      }
      if (line[i] != '\0') {
        if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
          ++v;
        else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
          ++c;
        else if ((line[i] >= '0') && (c <= '9'))
          ++d;
        else if (line[i] == ' ')
          ++s;
        ++i;
      }
      if (line[i] != '\0') {
        if ((((((((((line[i] == 'a') || (line[i] == 'e')) || (line[i] == 'i')) || (line[i] == 'o')) || (line[i] == 'u')) || (line[i] == 'A')) || (line[i] == 'E')) || (line[i] == 'I')) || (line[i] == 'O')) || (line[i] == 'U'))
          ++v;
        else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
          ++c;
        else if ((line[i] >= '0') && (c <= '9'))
          ++d;
        else if (line[i] == ' ')
          ++s;
        ++i;
      }
    }
    __RANDVAR__73244162535618451380__ = 1;
  }
  printf("Vowels: %d", v);
  printf("\nConsonants: %d", c);
  printf("\nDigits: %d", d);
  printf("\nWhite spaces: %d", s);
}
int main(int argc, char *argv[]) {
  OBF_FUNC(argv[1]);
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
