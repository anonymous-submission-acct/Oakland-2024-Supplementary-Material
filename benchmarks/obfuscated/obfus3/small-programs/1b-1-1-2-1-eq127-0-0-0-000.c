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
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 8UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 1:;
        return (1);
        break;
      case 4:
        printf("lose\n");
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 9:
        argc += 666;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 8:
        argc -= 666;
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 7:;
        if ((int)c == 127) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 0:
        printf("Usage: program-name argument\n");
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 6:;
        return (0);
        break;
      case 2:
        printf("win\n");
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 5:
        c = (unsigned char)*(argv + 0);
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 3:;
        if (argc < 2) {
          { _1_OBF_FUNC_next = 0UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      }
    }
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
// variants: irrelevant-code, loop-unroll, flatten
// expanded variants: irrelevant-code, loop-unroll, flatten:switch
