typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__64790648420004701661__ = 0;
  while (__RANDVAR__64790648420004701661__ == 0) {
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < 127) {
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__64790648420004701661__ = 1;
  }
  int __RANDVAR__671522903193887858__ = 0;
  while (__RANDVAR__671522903193887858__ == 0) {
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < 127) {
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__671522903193887858__ = 1;
  }
  int __RANDVAR__42120938335358679224__ = 0;
  while (__RANDVAR__42120938335358679224__ == 0) {
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    if (i < 127) {
      if ((rand() % 10) >= 5)
        break;
      sum += i;
      i++;
    }
    while (i < 127) {
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
      if (i < 127) {
        if ((rand() % 10) >= 5)
          break;
        sum += i;
        i++;
      }
    }
    __RANDVAR__42120938335358679224__ = 1;
  }
  int __RANDVAR__33407987828267008149__ = 0;
  while (__RANDVAR__33407987828267008149__ == 0) {
    if (i < 127) {
      sum += i;
      i++;
    }
    if (i < 127) {
      sum += i;
      i++;
    }
    if (i < 127) {
      sum += i;
      i++;
    }
    while (i < 127) {
      if (i < 127) {
        sum += i;
        i++;
      }
      if (i < 127) {
        sum += i;
        i++;
      }
      if (i < 127) {
        sum += i;
        i++;
      }
    }
    __RANDVAR__33407987828267008149__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, loop-unroll
// expanded variants: loop-fission, loop-unroll
