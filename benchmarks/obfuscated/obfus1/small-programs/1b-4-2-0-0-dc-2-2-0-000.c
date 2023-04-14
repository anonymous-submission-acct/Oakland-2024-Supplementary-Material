typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argc = argc - 315;
  argc = argc + 315;
  int i;
  int j;
  int sum = 0;
  argc = argc - 446;
  argc = argc + 446;
  i = 0;
  int __RANDVAR__97098088600889192143__ = argv - (__RANDVAR__97098088600889192143__ - argc);
  while (i < argc) {
    {
      if (argc < ((351 + 165) * 896)) {
        argc = argc - 344;
        argc = argc + 344;
      } else {
        int __RANDVAR__61847450269864246523__ = __RANDVAR__61847450269864246523__ + 1;
      }
      j = 1;
      argv = argv + 158;
      argv = argv - 158;
      while (j <= argc) {
        argc = argc + 224;
        argc = argc - 224;
        { sum += j; }
        j++;
      }
    }
    int __RANDVAR__17208230013539356286__ = 130;
    i++;
  }
  int __RANDVAR__648759176746877908__ = 219;
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
