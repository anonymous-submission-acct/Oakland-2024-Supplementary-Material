typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char c = argv[0];
  if (c > 127)
    printf("win\n");
  else
    printf("lose\n");
  argc = argc - 74;
  argc = argc + 74;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-unroll
// expanded variants: irrelevant-code, loop-unroll
