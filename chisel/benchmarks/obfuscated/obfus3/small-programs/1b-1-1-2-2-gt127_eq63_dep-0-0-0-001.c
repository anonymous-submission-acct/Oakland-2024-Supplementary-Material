typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argv = argv + 587;
  argv = argv - 587;
  unsigned char x;
  unsigned char c = argv[0];
  int __RANDVAR__63606374055466675590__ = argc;
  if (c > 127)
    x = c / 3;
  else
    x = c * 2;
  int __RANDVAR__31511201160645570301__ = argc;
  if (x == 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  int __RANDVAR__66642672328208160684__ = 627;
  if (argc < 852) {
    int __RANDVAR__3584463488081552528__ = 344;
    if (argv < (__RANDVAR__31511201160645570301__ * 149)) {
      int __RANDVAR__68555319530230891839__ = (__RANDVAR__31511201160645570301__ + 978) + argc;
    } else {
      if (__RANDVAR__31511201160645570301__ < 561) {
        if (argv < 0) {
          argv = argv - 123;
          argv = argv + 123;
        } else {
          int __RANDVAR__60974415979227245027__ = __RANDVAR__31511201160645570301__;
        }
      } else {
        int __RANDVAR__60150780499609256732__ = 642;
      }
    }
  } else {
    int __RANDVAR__1366097726156704238__ = __RANDVAR__31511201160645570301__;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-unroll, loop-unroll
// expanded variants: irrelevant-code, loop-unroll, loop-unroll
