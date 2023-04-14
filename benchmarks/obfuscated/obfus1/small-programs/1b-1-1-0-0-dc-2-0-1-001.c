typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__14829130880141012918__ = 0;
  while (__RANDVAR__14829130880141012918__ == 0) {
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
    __RANDVAR__14829130880141012918__ = 1;
  }
  i = 0;
  int __RANDVAR__70903582502441388286__ = 0;
  while (__RANDVAR__70903582502441388286__ == 0) {
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
    __RANDVAR__70903582502441388286__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
