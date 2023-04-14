typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argv = argv + 199;
  argv = argv - 199;
  unsigned char c = argv[0];
  if (argv < 496) {
    int __RANDVAR__67842743426928686118__ = argv;
  } else {
    int __RANDVAR__29725324808234735017__ = __RANDVAR__29725324808234735017__ + 1;
    if (argc < __RANDVAR__29725324808234735017__) {
      int __RANDVAR__52034107420127806552__ = __RANDVAR__29725324808234735017__;
    } else {
      if (argv < 816) {
        argc = argc + 805;
        argc = argc - 805;
      } else {
        int __RANDVAR__98604538607865124924__ = 762 - (123 + 125);
      }
    }
  }
  if (c > 63) {
    printf("if-1-win ");
    unsigned char x = (c / 3) * 2;
    if (x == 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    argv = argv - 593;
    argv = argv + 593;
    printf("if-1-lose\n");
  }
  int __RANDVAR__85418561011175458283__ = 801;
  if (argc < 321) {
    argc = argc + 670;
    argc = argc - 670;
  } else {
    argc = argc + 229;
    argc = argc - 229;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, loop-fission, irrelevant-code
// expanded variants: loop-unroll, loop-fission, irrelevant-code
