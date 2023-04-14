typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  if (argc < (606 - 547)) {
    int __RANDVAR__2881818359527466169__ = 305;
  } else {
    argc = argc - 302;
    argc = argc + 302;
  }
  int i;
  int j;
  int sum = 0;
  int __RANDVAR__90018935882061613096__ = argc;
  const char *str = argv[1];
  __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ + 315;
  __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ - 315;
  register const char *s;
  int __RANDVAR__68853222110257997634__ = (143 + 552) + argv;
  register const char *t;
  t = str;
  if (argc < 611) {
    __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ + 478;
    __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ - 478;
  } else {
    argc = argc - 790;
    argc = argc + 790;
  }
  while (*t) {
    { sum += *t; }
    ++t;
  }
  if (sum > 127)
    sum += *t;
  else
    sum *= *t;
  printf("Sum is: %d\n", sum);
  __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ - 504;
  __RANDVAR__90018935882061613096__ = __RANDVAR__90018935882061613096__ + 504;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
