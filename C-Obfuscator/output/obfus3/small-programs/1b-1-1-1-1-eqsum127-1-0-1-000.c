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
  int __RANDVAR__26850812499025195048__;
  int i;
  int sum;
  int __RANDVAR__39169184593150956244__;
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 20UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 35:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 33UL; }
        }
        break;
      case 27:
        i++;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 26:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 33:
        sum += i;
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 38:;
        if (sum == 8128) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 18UL; }
        }
        break;
      case 23:;
        return (0);
        break;
      case 3:
        sum += i;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 30:
        i++;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 32:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 25UL; }
        break;
      case 0:
        sum = 0;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 6:
        argc -= 714;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 21:
        sum += i;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 25:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 15UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 19:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 11:
        tmp = rand();
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 7:
        i = 0;
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 4:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 38UL; }
        }
        break;
      case 20:
        __RANDVAR__26850812499025195048__ = 658;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 18:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 12:
        argc += 714;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 8:
        sum += i;
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 14:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 24:
        __RANDVAR__39169184593150956244__++;
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 5:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 17:
        i++;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 15:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 5UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 22:
        i++;
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 36:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      }
    }
  }
}
// variants: irrelevant-code, loop-fission, flatten
// expanded variants: irrelevant-code, loop-fission, flatten:switch
