typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int printf();
char **_global_envp;
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
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
  unsigned long _1_OBF_FUNC_next___0;
  void *_1_OBF_FUNC_jumpTab[40] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39};
  {
    { _1_OBF_FUNC_next___0 = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next___0 - 0]); }
  _1_OBF_FUNC_lab19:;
    if (*t) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab39;
    }
  _1_OBF_FUNC_lab22:
    _1_OBF_FUNC_next = 6UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab5:;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab13:
    sum = 0;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab10:;
    switch (_1_OBF_FUNC_next) {
    case 6UL:
      goto _1_OBF_FUNC_lab28;
      break;
    case 0UL:
      goto _1_OBF_FUNC_lab35;
      break;
    case 11UL:
      goto _1_OBF_FUNC_lab12;
      break;
    case 9UL:
      goto _1_OBF_FUNC_lab31;
      break;
    case 5UL:
      goto _1_OBF_FUNC_lab17;
      break;
    case 2UL:
      goto _1_OBF_FUNC_lab6;
      break;
    case 10UL:
      goto _1_OBF_FUNC_lab3;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab13;
      break;
    case 4UL:
      goto _1_OBF_FUNC_lab30;
      break;
    case 3UL:
      goto _1_OBF_FUNC_lab5;
      break;
    case 12UL:
      goto _1_OBF_FUNC_lab11;
      break;
    default:
      goto _1_OBF_FUNC_lab10;
    }
  _1_OBF_FUNC_lab26:
    _1_OBF_FUNC_next = 2UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab30:;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab12:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab25:
    _1_OBF_FUNC_next = 12UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab16:
    _1_OBF_FUNC_next = 11UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab35:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab15:;
    return (0);
  _1_OBF_FUNC_lab17:;
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab3:
    sum *= (int)*t;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab11:
    str = (char const *)*(argv + 1);
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab31:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab27:
    _1_OBF_FUNC_next = 4UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab32:
    _1_OBF_FUNC_next = 9UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab20:
    _1_OBF_FUNC_next = 5UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab21:
    _1_OBF_FUNC_next = 0UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab8:
    _1_OBF_FUNC_next = 11UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab6:
    t = str;
    goto _1_OBF_FUNC_lab27;
  _1_OBF_FUNC_lab28:
    t++;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab14:;
    if (sum > 127) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab4;
    }
  _1_OBF_FUNC_lab23:
    _1_OBF_FUNC_next = 1UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab39:
    _1_OBF_FUNC_next = 3UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab4:
    _1_OBF_FUNC_next = 10UL;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab0:
    _1_OBF_FUNC_next = 4UL;
    goto _1_OBF_FUNC_lab10;
  }
}
// variants: flatten, flatten
// expanded variants: flatten:switch, flatten:goto
