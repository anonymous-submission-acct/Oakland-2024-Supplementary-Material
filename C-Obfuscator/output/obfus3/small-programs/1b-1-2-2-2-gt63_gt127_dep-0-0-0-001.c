typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argv = argv + 991;
  argv = argv - 991;
  unsigned char c = argv[0];
  if (c > 63) {
    argc = argc + 43;
    argc = argc - 43;
    printf("if-1-win ");
    argv = argv + 201;
    argv = argv - 201;
    unsigned char x = (c / 3) * 2;
    argc = argc + 413;
    argc = argc - 413;
    if (c > 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    printf("if-1-lose\n");
  }
  if (argv < argc) {
    int __RANDVAR__16606107477984731030__ = 369;
  } else {
    argc = argc - 613;
    argc = argc + 613;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, irrelevant-code, loop-unroll
// expanded variants: loop-fission, irrelevant-code, loop-unroll
