typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    if (argc < 2) {
      printf("Usage: program-name char\n");
      return 1;
    }
    sum += i;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    if (argc < 2) {
      printf("Usage: program-name char\n");
      return 1;
    }
    sum += i;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    if (argc < 2) {
      printf("Usage: program-name char\n");
      return 1;
    }
    sum += i;
    i++;
  }
  while (i < argv[0]) {
    {
      if (argc < 2) {
        printf("Usage: program-name char\n");
        return 1;
      }
      sum += i;
    }
    i++;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission
// expanded variants: loop-fission
