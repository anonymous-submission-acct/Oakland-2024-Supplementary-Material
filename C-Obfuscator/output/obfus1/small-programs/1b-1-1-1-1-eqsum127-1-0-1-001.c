typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum = 0;
  i = 0;
  int __RANDVAR__17984754544919779380__ = 0;
  while (__RANDVAR__17984754544919779380__ == 0) {
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
    __RANDVAR__17984754544919779380__ = 1;
  }
  if (sum == 8128)
    printf("Sum is: %d\n", sum);
  else
    printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
