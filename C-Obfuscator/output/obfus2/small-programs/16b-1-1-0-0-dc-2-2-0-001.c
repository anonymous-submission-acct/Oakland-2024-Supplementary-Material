typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum;
  char const *str;
  register char const *s;
  int __RANDVAR__22268872406269415186__;
  unsigned int len;
  int __RANDVAR__73588088800842793739__;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 0UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 15:
        s++;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 8:;
        if (*s) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 35UL; }
        }
        break;
      case 33:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 6:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 57:;
        if (__RANDVAR__22268872406269415186__ == 0) {
          { _1_OBF_FUNC_next = 51UL; }
        } else {
          { _1_OBF_FUNC_next = 41UL; }
        }
        break;
      case 22:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 45UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 39:
        i++;
        { _1_OBF_FUNC_next = 46UL; }
        break;
      case 47:;
        if (*s) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 23UL; }
        }
        break;
      case 10:
        i++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 20:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 48:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 45:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 54:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 43:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 51:;
        if (*s) {
          { _1_OBF_FUNC_next = 49UL; }
        } else {
          { _1_OBF_FUNC_next = 44UL; }
        }
        break;
      case 23:
        __RANDVAR__22268872406269415186__ = 1;
        { _1_OBF_FUNC_next = 57UL; }
        break;
      case 3:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 2:
        s++;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 19:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 9:
        str = (char const *)*(argv + 1);
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 5:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 58UL; }
        }
        break;
      case 41:
        len = (unsigned int)(s - str);
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 50:
        i++;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 11:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 49:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 36:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 53:;
        if (*s) {
          { _1_OBF_FUNC_next = 36UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 14:
        i++;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 1:
        sum += (int)*(str + i);
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 52:
        i = 0;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 16:
        __RANDVAR__73588088800842793739__ = 0;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 18:
        s++;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 7:
        s = str;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 46:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 58UL; }
        }
        break;
      case 12:
        s++;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 37:
        s++;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 40:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 4:
        i++;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 26:
        __RANDVAR__22268872406269415186__ = 0;
        { _1_OBF_FUNC_next = 57UL; }
        break;
      case 58:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 35:;
        if (*s) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 0:
        sum = 0;
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 32:;
        if (__RANDVAR__73588088800842793739__ == 0) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 27:
        i++;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 44:;
        if (*s) {
          { _1_OBF_FUNC_next = 48UL; }
        } else {
          { _1_OBF_FUNC_next = 53UL; }
        }
        break;
      case 24:;
        if (*s) {
          { _1_OBF_FUNC_next = 55UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 21:
        __RANDVAR__73588088800842793739__ = 1;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 30:;
        if ((unsigned int)i < len) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 46UL; }
        }
        break;
      case 55:
        sum += (int)*s;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 28:;
        return (0);
        break;
      case 13:
        s++;
        { _1_OBF_FUNC_next = 35UL; }
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
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:switch
