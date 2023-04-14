typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char x;
  unsigned char c = argv[0];
  if (c > 127)
    x = c / 3;
  else
    x = c * 2;
  if (((551 * 815) * (786 * 162)) < (argc * argc)) {
    argc = argc - 0;
    argc = argc + 0;
  } else {
    int __RANDVAR__10320358623318897535__ = __RANDVAR__10320358623318897535__ + 1;
  }
  if (x > 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
