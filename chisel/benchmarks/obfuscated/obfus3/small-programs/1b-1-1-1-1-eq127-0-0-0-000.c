typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__63962633607600419103__ = 155 * (__RANDVAR__63962633607600419103__ - 409);
  if (__RANDVAR__63962633607600419103__ < 218) {
    argv = argv + 975;
    argv = argv - 975;
  } else {
    int __RANDVAR__10895768603539130711__ = 740;
  }
  unsigned char c = argv[0];
  if (c == 127)
    printf("win\n");
  else
    printf("lose\n");
  int __RANDVAR__78893179528385024319__ = 306 - (argc * 263);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, irrelevant-code, loop-fission
// expanded variants: loop-unroll, irrelevant-code, loop-fission
