typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  i = 0;
  int __RANDVAR__17652476678137463920__ = 0;
  while (__RANDVAR__17652476678137463920__ == 0) {
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    while (i < argv[0]) {
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
    }
    __RANDVAR__17652476678137463920__ = 1;
  }
  t = str;
  int __RANDVAR__10739619839177233891__ = 0;
  while (__RANDVAR__10739619839177233891__ == 0) {
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
    __RANDVAR__10739619839177233891__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
