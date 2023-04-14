typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum;
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[33] = {&&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab34};
  {
    { _1_OBF_FUNC_next = 17UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2]); }
  _1_OBF_FUNC_lab19:
    sum += i;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab20:;
    return (0);
  _1_OBF_FUNC_lab16:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab23:
    i++;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab15:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab29:
    sum += i;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab10:
    tmp = rand();
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab12:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab24;
    } else {
      goto _1_OBF_FUNC_lab7;
    }
  _1_OBF_FUNC_lab34:;
    if (sum == 8128) {
      goto _1_OBF_FUNC_lab16;
    } else {
      goto _1_OBF_FUNC_lab15;
    }
  _1_OBF_FUNC_lab3:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab2;
    } else {
      goto _1_OBF_FUNC_lab34;
    }
  _1_OBF_FUNC_lab4:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab13:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab3;
    }
  _1_OBF_FUNC_lab28:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab2:
    sum += i;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab18:
    i++;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab17:
    sum = 0;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab21:
    i++;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab5:
    i = 0;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab31:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab3;
    } else {
      goto _1_OBF_FUNC_lab29;
    }
  _1_OBF_FUNC_lab7:
    sum += i;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab6:
    i++;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab22:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab13;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab24:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab13;
    }
  _1_OBF_FUNC_lab32:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab24;
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
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:goto
