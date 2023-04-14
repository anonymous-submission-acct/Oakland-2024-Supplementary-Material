typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char c = argv[0];
  int __RANDVAR__68334591489380671906__ = 638;
  if (c > 63) {
    if (argc < 296) {
      int __RANDVAR__35328240870666811041__ = __RANDVAR__35328240870666811041__ + (80 - __RANDVAR__35328240870666811041__);
    } else {
      argv = argv - 333;
      argv = argv + 333;
    }
    printf("if-1-win ");
    int __RANDVAR__462551496753516052__ = argc;
    int __RANDVAR__49262902599824487878__ = __RANDVAR__49262902599824487878__ + 1;
    argv = argv - 36;
    argv = argv + 36;
    if (c == 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    printf("if-1-lose\n");
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, irrelevant-code
// expanded variants: irrelevant-code, irrelevant-code
