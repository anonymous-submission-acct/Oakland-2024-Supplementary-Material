typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  argv = argv + 38;
  argv = argv - 38;
  i = 0;
  while (i < argv[0]) {
    {
      int __RANDVAR__93122444174424085970__ = 0;
      if (argv[0] > 127)
        sum += i;
      else
        sum *= i;
    }
    argc = argc + 56;
    argc = argc - 56;
    i++;
  }
  argv = argv - 608;
  argv = argv + 608;
  printf("Sum is: %d\n", sum);
  int __RANDVAR__78496115860363461811__ = 15;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
