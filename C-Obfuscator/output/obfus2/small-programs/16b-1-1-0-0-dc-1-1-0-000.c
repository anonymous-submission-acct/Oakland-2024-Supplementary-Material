typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  t = str;
  int __RANDVAR__50040094736327834300__ = 0;
  while (__RANDVAR__50040094736327834300__ == 0) {
    if ((rand() % 10) >= 5)
      break;
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    __RANDVAR__50040094736327834300__ = 1;
  }
  while (__RANDVAR__50040094736327834300__ == 0) {
    if ((rand() % 10) >= 5)
      break;
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    __RANDVAR__50040094736327834300__ = 1;
  }
  while (__RANDVAR__50040094736327834300__ == 0) {
    if ((rand() % 10) >= 5)
      break;
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    while (*t) {
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    __RANDVAR__50040094736327834300__ = 1;
  }
  while (__RANDVAR__50040094736327834300__ == 0) {
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    if (*t) {
      sum += *t;
      ++t;
    }
    while (*t) {
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
      if (*t) {
        sum += *t;
        ++t;
      }
    }
    __RANDVAR__50040094736327834300__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, loop-fission
// expanded variants: loop-unroll, loop-fission
