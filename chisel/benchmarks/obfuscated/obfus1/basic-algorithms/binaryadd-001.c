typedef void *__builtin_va_list;
#include <stdlib.h>
long int OBF_FUNC(long int binary1, long int binary2)
{
  int i = 0;
  int remainder = 0;
  int sum[20];
  int binarySum = 0;
  int __RANDVAR__33769265534207733804__ = 0;
  while (__RANDVAR__33769265534207733804__ == 0) {
    if ((binary1 != 0) || (binary2 != 0)) {
      sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
      remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
      binary1 = binary1 / 10;
      binary2 = binary2 / 10;
      i++;
    }
    if ((binary1 != 0) || (binary2 != 0)) {
      sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
      remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
      binary1 = binary1 / 10;
      binary2 = binary2 / 10;
      i++;
    }
    if ((binary1 != 0) || (binary2 != 0)) {
      sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
      remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
      binary1 = binary1 / 10;
      binary2 = binary2 / 10;
      i++;
    }
    while ((binary1 != 0) || (binary2 != 0)) {
      if ((binary1 != 0) || (binary2 != 0)) {
        sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
        remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
        i++;
      }
      if ((binary1 != 0) || (binary2 != 0)) {
        sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
        remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
        i++;
      }
      if ((binary1 != 0) || (binary2 != 0)) {
        sum[i] = (((binary1 % 10) + (binary2 % 10)) + remainder) % 2;
        remainder = (((binary1 % 10) + (binary2 % 10)) + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
        i++;
      }
    }
    __RANDVAR__33769265534207733804__ = 1;
  }
  if (remainder != 0) {
    sum[i] = remainder;
    i++;
  }
  --i;
  int __RANDVAR__28654720317275973171__ = 0;
  while (__RANDVAR__28654720317275973171__ == 0) {
    if (i >= 0) {
      binarySum = (binarySum * 10) + sum[i];
      i -= 1;
    }
    if (i >= 0) {
      binarySum = (binarySum * 10) + sum[i];
      i -= 1;
    }
    if (i >= 0) {
      binarySum = (binarySum * 10) + sum[i];
      i -= 1;
    }
    while (i >= 0) {
      if (i >= 0) {
        binarySum = (binarySum * 10) + sum[i];
        i -= 1;
      }
      if (i >= 0) {
        binarySum = (binarySum * 10) + sum[i];
        i -= 1;
      }
      if (i >= 0) {
        binarySum = (binarySum * 10) + sum[i];
        i -= 1;
      }
    }
    __RANDVAR__28654720317275973171__ = 1;
  }
  return binarySum;
}
int main(int argc, char *argv[]) {
  long int binary1;
  long int binary2;
  binary1 = atol(argv[1]);
  binary2 = atol(argv[2]);
  printf("%ld", OBF_FUNC(binary1, binary2));
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
