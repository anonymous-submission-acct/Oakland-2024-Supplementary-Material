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
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-unroll
// expanded variants: loop-unroll
