typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int OBF_FUNC(int argc, int *argv) {
  unsigned char c;
  unsigned char x;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[9] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8};
  {
    { _1_OBF_FUNC_next = 4UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:
    printf("if-1-win ");
    { _1_OBF_FUNC_next = 1UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:
    c = (unsigned char)*(argv + 0);
    { _1_OBF_FUNC_next = 6UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    printf("if-2-win\n");
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    printf("if-2-lose\n");
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:;
    if ((int)x == 127) {
      { _1_OBF_FUNC_next = 2UL; }
    } else {
      { _1_OBF_FUNC_next = 0UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:;
    return (0);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    x = (unsigned char)(((int)c / 3) * 2);
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:;
    if ((int)c > 63) {
      { _1_OBF_FUNC_next = 8UL; }
    } else {
      { _1_OBF_FUNC_next = 7UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    printf("if-1-lose\n");
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit; }
        _global_envp_i$nit_INLINE__global_envp_i$nit:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit; }
        _global_argv_i$nit_INLINE__global_argv_i$nit:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit; }
        _global_argc_i$nit_INLINE__global_argc_i$nit:;
        }
        goto megaInit_INLINE_megaInit;
      }
    megaInit_INLINE_megaInit:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0 = 1;
    tmp = strtoul(*(argv + 1));
    tmp___0 = OBF_FUNC(argc, (int *)tmp);
    return (tmp___0);
  }
}
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:indirect-goto
