typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  if (argc < 2) {
    printf("Usage: program-name argument\n");
    return 1;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
