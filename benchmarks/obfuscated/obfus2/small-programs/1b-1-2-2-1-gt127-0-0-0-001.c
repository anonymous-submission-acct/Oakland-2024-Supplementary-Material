typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__32857014072881046822__ = argc;
  unsigned char c = argv[0];
  int __RANDVAR__89042515694435965824__ = (145 * 852) + (294 - __RANDVAR__89042515694435965824__);
  if (argc > 1) {
    if (c > 127)
      printf("win\n");
    else
      printf("lose\n");
  } else {
    if (((424 + 233) - __RANDVAR__32857014072881046822__) < argc) {
      int __RANDVAR__85356158892689661358__ = __RANDVAR__85356158892689661358__ + 1;
    } else {
      int __RANDVAR__54977485295227925172__ = 403;
    }
    printf("Usage: program-name character\n");
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
