typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int n)
{
  int octalNumber[100];
  int i = 1;
  int j;
  long int remainder;
  long int quotient;
  quotient = n;
  int __RANDVAR__39485418688634389548__ = 0;
  while (__RANDVAR__39485418688634389548__ == 0) {
    if (quotient != 0) {
      octalNumber[i++] = quotient % 8;
      quotient = quotient / 8;
    }
    if (quotient != 0) {
      octalNumber[i++] = quotient % 8;
      quotient = quotient / 8;
    }
    if (quotient != 0) {
      octalNumber[i++] = quotient % 8;
      quotient = quotient / 8;
    }
    while (quotient != 0) {
      if (quotient != 0) {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
      }
      if (quotient != 0) {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
      }
      if (quotient != 0) {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
      }
    }
    __RANDVAR__39485418688634389548__ = 1;
  }
  printf("Equivalent octal value of decimal number %d: \n", n);
  j = i - 1;
  int __RANDVAR__26287364000904567991__ = 0;
  while (__RANDVAR__26287364000904567991__ == 0) {
    if (j > 0) {
      printf("%d", octalNumber[j]);
      j--;
    }
    if (j > 0) {
      printf("%d", octalNumber[j]);
      j--;
    }
    if (j > 0) {
      printf("%d", octalNumber[j]);
      j--;
    }
    for (; j > 0;) {
      if (j > 0) {
        printf("%d", octalNumber[j]);
        j--;
      }
      if (j > 0) {
        printf("%d", octalNumber[j]);
        j--;
      }
      if (j > 0) {
        printf("%d", octalNumber[j]);
        j--;
      }
    }
    __RANDVAR__26287364000904567991__ = 1;
  }
}
int main(int argc, char *argv[]) {
  OBF_FUNC(atoi(argv[1]));
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
