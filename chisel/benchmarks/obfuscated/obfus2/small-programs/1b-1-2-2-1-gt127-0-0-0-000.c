typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char c = argv[0];
  int __RANDVAR__45823529546279328236__ = (__RANDVAR__45823529546279328236__ * __RANDVAR__45823529546279328236__) + argc;
  if (argc > 1) {
    if (c > 127)
      printf("win\n");
    else
      printf("lose\n");
  } else {
    printf("Usage: program-name character\n");
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, irrelevant-code
// expanded variants: loop-unroll, irrelevant-code
