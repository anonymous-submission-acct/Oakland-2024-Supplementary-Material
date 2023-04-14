typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(int a[], int n, int m)
{
  int __RANDVAR__91736385167910125981__ = 834;
  int i;
  int __RANDVAR__93099488387000985316__ = m;
  int c = 0;
  int __RANDVAR__45275679719384465350__ = 620 - (m + __RANDVAR__91736385167910125981__);
  i = 0;
  __RANDVAR__93099488387000985316__ = __RANDVAR__93099488387000985316__ - 903;
  __RANDVAR__93099488387000985316__ = __RANDVAR__93099488387000985316__ + 903;
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__81733323231450011640__ = __RANDVAR__45275679719384465350__;
    if (((680 * __RANDVAR__45275679719384465350__) * n) < 428) {
      int __RANDVAR__91630008237789627411__ = __RANDVAR__45275679719384465350__ - __RANDVAR__81733323231450011640__;
    } else {
      if (__RANDVAR__93099488387000985316__ < (__RANDVAR__91736385167910125981__ * (n - __RANDVAR__93099488387000985316__))) {
        int __RANDVAR__72999513234701042260__ = 125;
      } else {
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ + 954;
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ - 954;
      }
    }
    if (a[i] == m) {
      int __RANDVAR__10060670426058626630__ = n;
      c = 1;
      int __RANDVAR__77630322212313172629__ = n;
      break;
    }
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__81733323231450011640__ = __RANDVAR__45275679719384465350__;
    if (((680 * __RANDVAR__45275679719384465350__) * n) < 428) {
      int __RANDVAR__91630008237789627411__ = __RANDVAR__45275679719384465350__ - __RANDVAR__81733323231450011640__;
    } else {
      if (__RANDVAR__93099488387000985316__ < (__RANDVAR__91736385167910125981__ * (n - __RANDVAR__93099488387000985316__))) {
        int __RANDVAR__72999513234701042260__ = 125;
      } else {
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ + 954;
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ - 954;
      }
    }
    if (a[i] == m) {
      int __RANDVAR__10060670426058626630__ = n;
      c = 1;
      int __RANDVAR__77630322212313172629__ = n;
      break;
    }
    i++;
  }
  for (; i < n;) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__81733323231450011640__ = __RANDVAR__45275679719384465350__;
    if (((680 * __RANDVAR__45275679719384465350__) * n) < 428) {
      int __RANDVAR__91630008237789627411__ = __RANDVAR__45275679719384465350__ - __RANDVAR__81733323231450011640__;
    } else {
      if (__RANDVAR__93099488387000985316__ < (__RANDVAR__91736385167910125981__ * (n - __RANDVAR__93099488387000985316__))) {
        int __RANDVAR__72999513234701042260__ = 125;
      } else {
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ + 954;
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ - 954;
      }
    }
    if (a[i] == m) {
      int __RANDVAR__10060670426058626630__ = n;
      c = 1;
      int __RANDVAR__77630322212313172629__ = n;
      break;
    }
    i++;
  }
  for (; i < n;) {
    int __RANDVAR__81733323231450011640__ = __RANDVAR__45275679719384465350__;
    if (((680 * __RANDVAR__45275679719384465350__) * n) < 428) {
      int __RANDVAR__91630008237789627411__ = __RANDVAR__45275679719384465350__ - __RANDVAR__81733323231450011640__;
    } else {
      if (__RANDVAR__93099488387000985316__ < (__RANDVAR__91736385167910125981__ * (n - __RANDVAR__93099488387000985316__))) {
        int __RANDVAR__72999513234701042260__ = 125;
      } else {
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ + 954;
        __RANDVAR__45275679719384465350__ = __RANDVAR__45275679719384465350__ - 954;
      }
    }
    if (a[i] == m) {
      int __RANDVAR__10060670426058626630__ = n;
      c = 1;
      int __RANDVAR__77630322212313172629__ = n;
      break;
    }
    i++;
  }
  n = n + 64;
  n = n - 64;
  if (c == 0)
    printf("The number is not in the list\n");
  else
    printf("The number is found\n");
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
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
