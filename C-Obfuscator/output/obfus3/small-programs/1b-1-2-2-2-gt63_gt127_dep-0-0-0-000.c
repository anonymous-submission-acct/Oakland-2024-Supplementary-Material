typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__91763551055946171967__ = argc;
  if (argc < __RANDVAR__91763551055946171967__) {
    argv = argv - 762;
    argv = argv + 762;
  } else {
    if ((argc * (argc - 22)) < (argc + 454)) {
      argv = argv + 163;
      argv = argv - 163;
    } else {
      argc = argc - 139;
      argc = argc + 139;
    }
  }
  unsigned char c = argv[0];
  if (c > 63) {
    printf("if-1-win ");
    unsigned char x = (c / 3) * 2;
    if (c > 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    printf("if-1-lose\n");
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, irrelevant-code, loop-fission
// expanded variants: loop-unroll, irrelevant-code, loop-fission
