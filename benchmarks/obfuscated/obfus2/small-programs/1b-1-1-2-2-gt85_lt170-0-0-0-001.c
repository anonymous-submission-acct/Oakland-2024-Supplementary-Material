typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  unsigned char c = argv[0];
  if (c > 85)
    printf("if-1-win ");
  else
    printf("if-1-lose ");
  if (c < 170)
    printf("if-2-win\n");
  else
    printf("if-2-lose\n");
  int __RANDVAR__52834868960683109340__ = 839;
  if ((__RANDVAR__52834868960683109340__ * (argc + __RANDVAR__52834868960683109340__)) < argv) {
    int __RANDVAR__11370832121002265061__ = __RANDVAR__11370832121002265061__ + 1;
  } else {
    argc = argc + 35;
    argc = argc - 35;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
