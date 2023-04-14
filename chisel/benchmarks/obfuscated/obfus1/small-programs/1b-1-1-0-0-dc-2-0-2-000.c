typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__47975498549097071137__ = 0;
  while (__RANDVAR__47975498549097071137__ == 0) {
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    while (i < argv[0]) {
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
    }
    __RANDVAR__47975498549097071137__ = 1;
  }
  i = 0;
  int __RANDVAR__26142017267845551623__ = 0;
  while (__RANDVAR__26142017267845551623__ == 0) {
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    if (i < argv[0]) {
      sum += i;
      i++;
    }
    while (i < argv[0]) {
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
      if (i < argv[0]) {
        sum += i;
        i++;
      }
    }
    __RANDVAR__26142017267845551623__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
