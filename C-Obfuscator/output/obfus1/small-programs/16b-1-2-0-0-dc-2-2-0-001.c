typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  s = str;
  while (*s) {
    if ((rand() % 10) >= 5)
      break;
    t = str;
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      { sum += *t; }
      ++t;
    }
    ++s;
  }
  while (*s) {
    if ((rand() % 10) >= 5)
      break;
    t = str;
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      { sum += *t; }
      ++t;
    }
    ++s;
  }
  while (*s) {
    if ((rand() % 10) >= 5)
      break;
    t = str;
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      if ((rand() % 10) >= 5)
        break;
      sum += *t;
      ++t;
    }
    while (*t) {
      { sum += *t; }
      ++t;
    }
    ++s;
  }
  while (*s) {
    {
      t = str;
      while (*t) {
        { sum += *t; }
        ++t;
      }
    }
    ++s;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission
// expanded variants: loop-fission
