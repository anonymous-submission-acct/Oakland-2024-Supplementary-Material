typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  t = str;
  int __RANDVAR__68255098878664736562__ = 0;
  while (__RANDVAR__68255098878664736562__ == 0) {
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
    __RANDVAR__68255098878664736562__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
