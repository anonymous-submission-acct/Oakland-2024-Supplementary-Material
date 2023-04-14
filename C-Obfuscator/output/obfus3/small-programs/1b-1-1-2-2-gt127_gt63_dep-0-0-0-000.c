typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  argv = argv + 251;
  argv = argv - 251;
  unsigned char x;
  unsigned char c = argv[0];
  int __RANDVAR__29086115014068465601__ = argv;
  if (argv < ((__RANDVAR__29086115014068465601__ - 951) * 107)) {
    int __RANDVAR__11202206382629130917__ = 107;
  } else {
    argc = argc + 396;
    argc = argc - 396;
  }
  if (c > 127)
    x = c / 3;
  else
    x = c * 2;
  int __RANDVAR__44653634738107943363__ = (151 * __RANDVAR__44653634738107943363__) + (__RANDVAR__44653634738107943363__ * 650);
  if (x > 63)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  __RANDVAR__44653634738107943363__ = __RANDVAR__44653634738107943363__ - 856;
  __RANDVAR__44653634738107943363__ = __RANDVAR__44653634738107943363__ + 856;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, irrelevant-code, loop-unroll
// expanded variants: loop-unroll, irrelevant-code, loop-unroll
