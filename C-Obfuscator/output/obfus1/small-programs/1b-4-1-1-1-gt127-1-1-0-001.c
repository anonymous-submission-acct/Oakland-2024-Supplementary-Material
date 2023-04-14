typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  if (argv[0] > 127) {
    sum += 1;
  }
  i = 0;
  int __RANDVAR__62063874615146508667__ = 0;
  while (__RANDVAR__62063874615146508667__ == 0) {
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
    __RANDVAR__62063874615146508667__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
