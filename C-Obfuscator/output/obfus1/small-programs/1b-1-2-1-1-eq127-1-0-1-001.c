typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__20604299675174586722__ = 0;
  while (__RANDVAR__20604299675174586722__ == 0) {
    if (i < argv[0]) {
      if (argv[0] == 127)
        sum += i;
      else
        sum *= i;
      i++;
    }
    if (i < argv[0]) {
      if (argv[0] == 127)
        sum += i;
      else
        sum *= i;
      i++;
    }
    if (i < argv[0]) {
      if (argv[0] == 127)
        sum += i;
      else
        sum *= i;
      i++;
    }
    while (i < argv[0]) {
      if (i < argv[0]) {
        if (argv[0] == 127)
          sum += i;
        else
          sum *= i;
        i++;
      }
      if (i < argv[0]) {
        if (argv[0] == 127)
          sum += i;
        else
          sum *= i;
        i++;
      }
      if (i < argv[0]) {
        if (argv[0] == 127)
          sum += i;
        else
          sum *= i;
        i++;
      }
    }
    __RANDVAR__20604299675174586722__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
