typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
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
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 29UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 33:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 24UL; }
        }
        break;
      case 28:
        sum++;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 37:
        i++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 1:
        sum += i;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 15:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 11UL; }
        }
        break;
      case 18:
        sum++;
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 26:;
        if (*(argv + i) > 127) {
          { _1_OBF_FUNC_next = 28UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 6:
        sum += i;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 11:;
        if (*(argv + i) > 127) {
          { _1_OBF_FUNC_next = 27UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 22:
        sum += i;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 0:;
        if (*(argv + i) > 127) {
          { _1_OBF_FUNC_next = 18UL; }
        } else {
          { _1_OBF_FUNC_next = 22UL; }
        }
        break;
      case 36:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 34:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 0UL; }
        }
        break;
      case 5:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 30UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 29:
        sum = 0;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 40:;
        return (0);
        break;
      case 38:
        sum += i;
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 9:
        tmp = rand();
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 23:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 24:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 23UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 30:;
        if (*(argv + i) > 127) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 38UL; }
        }
        break;
      case 3:
        i = 0;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 27:
        sum++;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 17:
        i++;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 2:
        sum++;
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 35:
        i++;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 32:
        i++;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 12:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 33UL; }
        }
        break;
      case 7:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 5UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      case 19:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 15UL; }
        break;
      }
    }
  }
}
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:switch
