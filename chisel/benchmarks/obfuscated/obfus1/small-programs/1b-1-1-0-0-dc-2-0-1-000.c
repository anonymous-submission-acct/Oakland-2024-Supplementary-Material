typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__20166158649452522385__ = argc;
  if (__RANDVAR__20166158649452522385__ < argc) {
    argc = argc - 366;
    argc = argc + 366;
  } else {
    argc = argc - 193;
    argc = argc + 193;
  }
  int i;
  int sum = 0;
  i = 0;
  while (i < 127) {
    { sum += i; }
    int __RANDVAR__61093659662721431555__ = __RANDVAR__61093659662721431555__ + 1;
    i++;
  }
  if ((690 + 446) < argc) {
    int __RANDVAR__36968350728486869267__ = argv;
  } else {
    int __RANDVAR__4430351750698360934__ = __RANDVAR__4430351750698360934__ + 1;
  }
  i = 0;
  int __RANDVAR__77191061348135929675__ = 563 + argc;
  if (argv < ((803 - __RANDVAR__77191061348135929675__) + (argc - 345))) {
    if (((__RANDVAR__77191061348135929675__ + argc) * __RANDVAR__77191061348135929675__) < __RANDVAR__77191061348135929675__) {
      int __RANDVAR__41095571893707254341__ = argc;
    } else {
      int __RANDVAR__36695078894835687143__ = 927;
    }
  } else {
    int __RANDVAR__40121562766866597338__ = argv;
  }
  while (i < argv[0]) {
    argc = argc - 20;
    argc = argc + 20;
    {
      int __RANDVAR__7049929695797502784__ = __RANDVAR__7049929695797502784__ + 1;
      sum += i;
    }
    i++;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
