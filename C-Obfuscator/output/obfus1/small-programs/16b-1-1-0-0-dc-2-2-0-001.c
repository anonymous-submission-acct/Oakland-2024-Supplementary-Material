typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  s = str;
  int __RANDVAR__42647703100921343097__ = 0;
  while (__RANDVAR__42647703100921343097__ == 0) {
    if (*s) {
      sum += *s;
      ++s;
    }
    if (*s) {
      sum += *s;
      ++s;
    }
    if (*s) {
      sum += *s;
      ++s;
    }
    while (*s) {
      if (*s) {
        sum += *s;
        ++s;
      }
      if (*s) {
        sum += *s;
        ++s;
      }
      if (*s) {
        sum += *s;
        ++s;
      }
    }
    __RANDVAR__42647703100921343097__ = 1;
  }
  unsigned int len = s - str;
  i = 0;
  int __RANDVAR__95545327569405356452__ = 0;
  while (__RANDVAR__95545327569405356452__ == 0) {
    if (i < len) {
      sum += str[i];
      i++;
    }
    if (i < len) {
      sum += str[i];
      i++;
    }
    if (i < len) {
      sum += str[i];
      i++;
    }
    while (i < len) {
      if (i < len) {
        sum += str[i];
        i++;
      }
      if (i < len) {
        sum += str[i];
        i++;
      }
      if (i < len) {
        sum += str[i];
        i++;
      }
    }
    __RANDVAR__95545327569405356452__ = 1;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
