typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__30301647368963856109__ = argv;
  if (argc < 640) {
    int __RANDVAR__24117815599136118561__ = 321;
  } else {
    int __RANDVAR__75751014436815192117__ = 853 * (671 * argc);
  }
  unsigned char c = argv[0];
  if (c > 63) {
    argv = argv + 9;
    argv = argv - 9;
    printf("if-1-win ");
    int __RANDVAR__97993679058075178171__ = 257;
    if (c == 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    if ((argv - argc) < 444) {
      if ((argc - 366) < argv) {
        int __RANDVAR__927357693922301567__ = argc;
        if (argc < 644) {
          int __RANDVAR__54961679028390902792__ = __RANDVAR__54961679028390902792__ + 1;
        } else {
          int __RANDVAR__31195530739759483778__ = 186;
        }
      } else {
        int __RANDVAR__77385298224768135275__ = argv;
      }
    } else {
      argv = argv + 733;
      argv = argv - 733;
    }
    printf("if-1-lose\n");
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
