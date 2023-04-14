typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__14288992641655215901__ = 0;
  while (__RANDVAR__14288992641655215901__ == 0) {
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
    __RANDVAR__14288992641655215901__ = 1;
  }
  i = 1;
  int __RANDVAR__14616462864389215753__ = 0;
  while (__RANDVAR__14616462864389215753__ == 0) {
    if (i <= argv[0]) {
      sum += sum;
      i++;
    }
    if (i <= argv[0]) {
      sum += sum;
      i++;
    }
    if (i <= argv[0]) {
      sum += sum;
      i++;
    }
    while (i <= argv[0]) {
      if (i <= argv[0]) {
        sum += sum;
        i++;
      }
      if (i <= argv[0]) {
        sum += sum;
        i++;
      }
      if (i <= argv[0]) {
        sum += sum;
        i++;
      }
    }
    __RANDVAR__14616462864389215753__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
