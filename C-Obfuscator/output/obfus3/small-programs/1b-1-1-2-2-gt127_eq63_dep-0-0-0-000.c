typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char x;
  unsigned char c = argv[0];
  if (c > 127)
    x = c / 3;
  else
    x = c * 2;
  if (x == 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, loop-unroll, loop-fission
// expanded variants: loop-unroll, loop-unroll, loop-fission
