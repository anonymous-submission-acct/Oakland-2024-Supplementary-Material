typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  if (argc < 2) {
    printf("Usage: program-name char\n");
    int __RANDVAR__12223906864344313187__ = argv;
    if (argv < argc) {
      if (argc < (argc - (argc - 561))) {
        int __RANDVAR__9759558652371375494__ = __RANDVAR__9759558652371375494__ + 1;
      } else {
        argv = argv + 264;
        argv = argv - 264;
      }
    } else {
      int __RANDVAR__31429493087588452020__ = 56;
    }
    return 1;
  }
  int __RANDVAR__58808175984280156169__ = argv;
  i = 0;
  __RANDVAR__58808175984280156169__ = __RANDVAR__58808175984280156169__ - 781;
  __RANDVAR__58808175984280156169__ = __RANDVAR__58808175984280156169__ + 781;
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__85369373711639130682__ = argc;
    sum += i;
    int __RANDVAR__62492171222322185756__ = 52;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__85369373711639130682__ = argc;
    sum += i;
    int __RANDVAR__62492171222322185756__ = 52;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__85369373711639130682__ = argc;
    sum += i;
    int __RANDVAR__62492171222322185756__ = 52;
    i++;
  }
  while (i < argv[0]) {
    int __RANDVAR__85369373711639130682__ = argc;
    sum += i;
    int __RANDVAR__62492171222322185756__ = 52;
    i++;
  }
  printf("Sum is: %d\n", sum);
  int __RANDVAR__96555384308392411789__ = 820;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
