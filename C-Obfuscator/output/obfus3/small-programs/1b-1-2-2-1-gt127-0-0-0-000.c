typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char c = argv[0];
  argc = argc - 507;
  argc = argc + 507;
  if (argc > 1) {
    if (c > 127)
      printf("win\n");
    else
      printf("lose\n");
  } else {
    int __RANDVAR__8228442935138384077__ = __RANDVAR__8228442935138384077__ + 1;
    printf("Usage: program-name character\n");
  }
  int __RANDVAR__61009013419526112693__ = 234;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission, loop-unroll
// expanded variants: irrelevant-code, loop-fission, loop-unroll
