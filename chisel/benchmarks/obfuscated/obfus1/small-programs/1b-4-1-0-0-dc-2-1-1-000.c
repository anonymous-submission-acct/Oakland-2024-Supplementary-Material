typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__67815170748128403882__ = argc;
  if (argc < (786 * (295 - 620))) {
    __RANDVAR__67815170748128403882__ = __RANDVAR__67815170748128403882__ + 245;
    __RANDVAR__67815170748128403882__ = __RANDVAR__67815170748128403882__ - 245;
  } else {
    int __RANDVAR__52071230194798002094__ = __RANDVAR__52071230194798002094__ * (805 - 29);
  }
  int i;
  int sum = 0;
  i = 0;
  if (argv < (argv + 678)) {
    int __RANDVAR__27211978109335123090__ = 234 - 846;
  } else {
    int __RANDVAR__57363627156464855029__ = 873;
  }
  while (i < argc) {
    {
      argv = argv + 645;
      argv = argv - 645;
      sum += i;
    }
    i++;
  }
  i = 1;
  int __RANDVAR__62225198160814138786__ = argv;
  while (i <= argv[0]) {
    { sum += sum; }
    i++;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code
// expanded variants: irrelevant-code
