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
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 8UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 7:
        s++;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 9:
        t = str;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 8:
        sum = 0;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 2:
        t++;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 1:
        s = str;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 12:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 14:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 6:;
        if (*s) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 14UL; }
        }
        break;
      case 11:
        str = (char const *)*(argv + 1);
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 10:;
        if (*t) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 0:;
        return (0);
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
