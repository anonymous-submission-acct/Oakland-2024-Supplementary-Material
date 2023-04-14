typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
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
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[9] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8};
  {
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    i++;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab3:
    sum += i;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab8:
    sum = 0;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab0:
    i = 0;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab2:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab5:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab3;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab7:;
    return (0);
  }
}
// variants: flatten
// expanded variants: flatten:goto
