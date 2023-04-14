typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  if (((argc - 797) * (655 * argc)) < 97) {
    argc = argc - 692;
    argc = argc + 692;
  } else {
    argv = argv + 32;
    argv = argv - 32;
  }
  unsigned char c = argv[0];
  argv = argv + 524;
  argv = argv - 524;
  if (argc > 1) {
    int __RANDVAR__46528964018380555708__ = (998 - 581) * (argc - 161);
    if (c == 127)
      printf("win\n");
    else
      printf("lose\n");
  } else {
    printf("Usage: program-name character\n");
  }
  int __RANDVAR__98487804901295915220__ = __RANDVAR__98487804901295915220__ + 1;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-unroll
// expanded variants: irrelevant-code, loop-unroll
