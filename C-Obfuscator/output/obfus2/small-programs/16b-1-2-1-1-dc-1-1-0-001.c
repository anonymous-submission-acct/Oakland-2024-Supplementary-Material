typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  t = str;
  int __RANDVAR__76149438709562341576__ = 0;
  while (__RANDVAR__76149438709562341576__ == 0) {
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    while (*t) {
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
    }
    __RANDVAR__76149438709562341576__ = 1;
  }
  int __RANDVAR__23651403473454088784__ = 0;
  while (__RANDVAR__23651403473454088784__ == 0) {
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    while (*t) {
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
    }
    __RANDVAR__23651403473454088784__ = 1;
  }
  int __RANDVAR__9980374577440642023__ = 0;
  while (__RANDVAR__9980374577440642023__ == 0) {
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((rand() % 10) >= 5)
        break;
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    while (*t) {
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((rand() % 10) >= 5)
          break;
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
    }
    __RANDVAR__9980374577440642023__ = 1;
  }
  int __RANDVAR__19935902180394947877__ = 0;
  while (__RANDVAR__19935902180394947877__ == 0) {
    if (*t) {
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    if (*t) {
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
      ++t;
    }
    while (*t) {
      if (*t) {
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
      if (*t) {
        if ((*t) > 127)
          sum += *t;
        else
          sum += *t;
        ++t;
      }
    }
    __RANDVAR__19935902180394947877__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, loop-unroll
// expanded variants: loop-fission, loop-unroll
