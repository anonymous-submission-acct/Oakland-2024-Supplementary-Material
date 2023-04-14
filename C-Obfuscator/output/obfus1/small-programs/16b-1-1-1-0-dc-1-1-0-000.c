typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  t = str;
  int __RANDVAR__92412813242369709471__ = 0;
  while (__RANDVAR__92412813242369709471__ == 0) {
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
    __RANDVAR__92412813242369709471__ = 1;
  }
  if (argc > 127)
    sum += *t;
  else
    sum *= *t;
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
