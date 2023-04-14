typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__8565363521306916472__ = 0;
  while (__RANDVAR__8565363521306916472__ == 0) {
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < argc) {
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__8565363521306916472__ = 1;
  }
  int __RANDVAR__15223853914178281847__ = 0;
  while (__RANDVAR__15223853914178281847__ == 0) {
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < argc) {
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__15223853914178281847__ = 1;
  }
  int __RANDVAR__58407694698956401462__ = 0;
  while (__RANDVAR__58407694698956401462__ == 0) {
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < argc) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < argc) {
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < argc) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__58407694698956401462__ = 1;
  }
  int __RANDVAR__90290014729442283611__ = 0;
  while (__RANDVAR__90290014729442283611__ == 0) {
    if (i < argc) {
      sum += i;
      i++;
    }
    if (i < argc) {
      sum += i;
      i++;
    }
    if (i < argc) {
      sum += i;
      i++;
    }
    while (i < argc) {
      if (i < argc) {
        sum += i;
        i++;
      }
      if (i < argc) {
        sum += i;
        i++;
      }
      if (i < argc) {
        sum += i;
        i++;
      }
    }
    __RANDVAR__90290014729442283611__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, loop-unroll
// expanded variants: loop-fission, loop-unroll
