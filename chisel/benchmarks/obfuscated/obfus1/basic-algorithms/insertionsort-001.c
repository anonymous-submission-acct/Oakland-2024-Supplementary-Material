typedef void *__builtin_va_list;
#include <stdlib.h>
void OBF_FUNC(int a[], int n)
{
  int i;
  int j;
  i = 1;
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int temp = a[i];
    j = i - 1;
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int temp = a[i];
    j = i - 1;
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int temp = a[i];
    j = i - 1;
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      if ((rand() % 10) >= 5)
        break;
      a[j + 1] = a[j];
      j = j - 1;
    }
    while ((temp < a[j]) && (j >= 0)) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
    i++;
  }
  for (; i < n;) {
    int temp = a[i];
    j = i - 1;
    while ((temp < a[j]) && (j >= 0)) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
    i++;
  }
  printf("After sorting: ");
  i = 0;
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    printf(" %d", a[i]);
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    printf(" %d", a[i]);
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    printf(" %d", a[i]);
    i++;
  }
  for (; i < n;) {
    printf(" %d", a[i]);
    i++;
  }
}
int main(int argc, char *argv[]) {
  int a[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
  OBF_FUNC(a, 10);
  return 0;
}
// variants: loop-fission
// expanded variants: loop-fission
