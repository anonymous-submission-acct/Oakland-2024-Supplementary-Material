typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char x;
  unsigned char c = argv[0];
  argc = argc - 513;
  argc = argc + 513;
  if (c > 127)
    x = c / 3;
  else
    x = c * 2;
  int __RANDVAR__46703574366029238645__ = 605;
  if (argv < 69) {
    int __RANDVAR__43945741002751854182__ = __RANDVAR__46703574366029238645__;
  } else {
    argv = argv - 935;
    argv = argv + 935;
  }
  if (x == 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
