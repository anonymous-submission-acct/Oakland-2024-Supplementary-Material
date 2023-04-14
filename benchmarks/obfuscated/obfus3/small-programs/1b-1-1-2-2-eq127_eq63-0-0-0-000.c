typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__2399118308961082513__ = 911 + 230;
  if ((argv + (869 + 860)) < __RANDVAR__2399118308961082513__) {
    argv = argv + 905;
    argv = argv - 905;
  } else {
    argv = argv + 112;
    argv = argv - 112;
  }
  unsigned char c = argv[0];
  if (c == 127)
    printf("if-1-win ");
  else
    printf("if-1-lose ");
  if (c == 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, loop-unroll, irrelevant-code
// expanded variants: loop-unroll, loop-unroll, irrelevant-code
