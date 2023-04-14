typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argc = argc + 992;
  argc = argc - 992;
  unsigned char c = argv[0];
  int __RANDVAR__39398324557808403244__ = argv;
  if (c > 127)
    printf("if-1-win ");
  else
    printf("if-1-lose ");
  if (c == 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  int __RANDVAR__20922169668208960837__ = (__RANDVAR__20922169668208960837__ * __RANDVAR__20922169668208960837__) - (794 * __RANDVAR__20922169668208960837__);
  if (((730 + argc) - (791 * argc)) < 474) {
    int __RANDVAR__86779809531498515476__ = 448;
    if (argc < 461) {
      argc = argc + 475;
      argc = argc - 475;
    } else {
      argv = argv + 450;
      argv = argv - 450;
    }
  } else {
    argc = argc - 871;
    argc = argc + 871;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-unroll, loop-unroll
// expanded variants: irrelevant-code, loop-unroll, loop-unroll
