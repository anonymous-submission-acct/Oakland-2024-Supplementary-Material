typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__13487560020817699445__ = 869;
  if (argv < (__RANDVAR__13487560020817699445__ + argv)) {
    int __RANDVAR__26116403169774462023__ = __RANDVAR__26116403169774462023__ + 1;
    if (argc < (105 - (751 - __RANDVAR__13487560020817699445__))) {
      __RANDVAR__13487560020817699445__ = __RANDVAR__13487560020817699445__ - 603;
      __RANDVAR__13487560020817699445__ = __RANDVAR__13487560020817699445__ + 603;
    } else {
      int __RANDVAR__96563754390317988578__ = argc;
    }
  } else {
    int __RANDVAR__91251174393014727278__ = (__RANDVAR__91251174393014727278__ - 759) + __RANDVAR__91251174393014727278__;
  }
  unsigned char c = argv[0];
  if (c > 63) {
    printf("if-1-win ");
    if (c > 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  } else {
    printf("if-1-lose\n");
  }
  argv = argv - 830;
  argv = argv + 830;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll, irrelevant-code
// expanded variants: loop-unroll, irrelevant-code
