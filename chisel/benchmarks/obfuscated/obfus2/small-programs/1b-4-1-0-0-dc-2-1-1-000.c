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
  int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 23UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 32:
        sum += i;
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 58:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 13UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 41:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 58UL; }
        } else {
          { _1_OBF_FUNC_next = 32UL; }
        }
        break;
      case 3:;
        if (i <= *(argv + 0)) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 0:
        sum += i;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 44:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 58UL; }
        }
        break;
      case 56:
        sum += i;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 46:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 51:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 40:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 36:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 51UL; }
        } else {
          { _1_OBF_FUNC_next = 16UL; }
        }
        break;
      case 39:;
        if (i <= *(argv + 0)) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 37:
        i++;
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 52:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 59UL; }
        }
        break;
      case 54:
        sum += i;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 6:
        i++;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 11:
        i = 0;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 26:
        i++;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 28:
        sum += sum;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 31:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 16UL; }
        } else {
          { _1_OBF_FUNC_next = 0UL; }
        }
        break;
      case 4:
        sum += sum;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 20:
        i++;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 47:
        i++;
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 14:;
        return (0);
        break;
      case 19:
        tmp = rand();
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 59:
        sum += sum;
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 38:
        i++;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 61:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 30:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 36UL; }
        } else {
          { _1_OBF_FUNC_next = 56UL; }
        }
        break;
      case 16:;
        if (i < argc) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 8:
        i = 1;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 7:;
        if (i <= *(argv + 0)) {
          { _1_OBF_FUNC_next = 46UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 13:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 55:
        sum += sum;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 29:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 1:;
        if (i <= *(argv + 0)) {
          { _1_OBF_FUNC_next = 28UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 2:
        i++;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 17:
        i++;
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 50:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 39UL; }
        } else {
          { _1_OBF_FUNC_next = 55UL; }
        }
        break;
      case 23:
        sum = 0;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 43:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 14UL; }
        break;
      }
    }
  }
}
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:switch
