typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  if (argc < 2) {
    printf("Usage: program-name char\n");
    return 1;
  }
  i = 0;
  int __RANDVAR__81932219647720997125__ = 0;
  while (__RANDVAR__81932219647720997125__ == 0) {
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
    __RANDVAR__81932219647720997125__ = 1;
  }
  int __RANDVAR__31992573314670602831__ = 0;
  while (__RANDVAR__31992573314670602831__ == 0) {
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
    __RANDVAR__31992573314670602831__ = 1;
  }
  int __RANDVAR__49479655550420042265__ = 0;
  while (__RANDVAR__49479655550420042265__ == 0) {
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
    __RANDVAR__49479655550420042265__ = 1;
  }
  int __RANDVAR__95410259108706447702__ = 0;
  while (__RANDVAR__95410259108706447702__ == 0) {
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
    __RANDVAR__95410259108706447702__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, loop-unroll
// expanded variants: loop-fission, loop-unroll
