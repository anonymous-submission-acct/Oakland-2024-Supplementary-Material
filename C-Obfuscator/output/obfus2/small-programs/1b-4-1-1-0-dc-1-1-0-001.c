typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int OBF_FUNC(int argc, int *argv) {
  int __RANDVAR__24705186057687432283__;
  int i;
  int sum;
  int __RANDVAR__17656895778476016236__;
  int __RANDVAR__90526005325822046172__;
  int __RANDVAR__93401395703392215154__;
  int __RANDVAR__24201174540917892052__;
  int __RANDVAR__62887182001299859741__;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 13UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 4:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 16:;
        if (argc < 2) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 18UL; }
        }
        break;
      case 21:
        __RANDVAR__62887182001299859741__ = (argc - __RANDVAR__62887182001299859741__) + 428;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 13:
        __RANDVAR__24705186057687432283__ = 428;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 12:
        sum = 0;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 14:
        __RANDVAR__93401395703392215154__ = 875;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 11:;
        if (__RANDVAR__17656895778476016236__ < __RANDVAR__24705186057687432283__ * 318 + (342 + __RANDVAR__17656895778476016236__)) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 6:
        __RANDVAR__17656895778476016236__ = 377;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 8:
        __RANDVAR__90526005325822046172__ = argc;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 7:
        printf("Usage: program-name char\n");
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 9:;
        return (1);
        break;
      case 0:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 2:
        sum += i;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 15:
        i++;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 19:
        __RANDVAR__24201174540917892052__ = 564;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 18:
        i = 0;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 10:;
        return (0);
        break;
      case 3:
        __RANDVAR__24705186057687432283__ += 422;
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 17:
        __RANDVAR__24705186057687432283__ -= 985;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 1:
        __RANDVAR__24705186057687432283__ += 985;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 22:
        __RANDVAR__24705186057687432283__ -= 422;
        { _1_OBF_FUNC_next = 15UL; }
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
// variants: irrelevant-code, flatten
// expanded variants: irrelevant-code, flatten:switch
