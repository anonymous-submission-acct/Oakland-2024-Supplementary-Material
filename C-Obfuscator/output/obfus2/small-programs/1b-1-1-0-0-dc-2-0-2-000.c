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
  int __RANDVAR__80573334600476375248__;
  int __RANDVAR__59899670446175406347__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[57] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56};
  {
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab52:
    sum += i;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab56:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab16;
    } else {
      goto _1_OBF_FUNC_lab18;
    }
  _1_OBF_FUNC_lab39:
    i = 0;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab30:
    sum += i;
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab55:;
    if (__RANDVAR__80573334600476375248__ == 0) {
      goto _1_OBF_FUNC_lab49;
    } else {
      goto _1_OBF_FUNC_lab39;
    }
  _1_OBF_FUNC_lab43:
    i++;
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab19:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab44;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab20:
    __RANDVAR__80573334600476375248__ = 1;
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab0:
    sum = 0;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab33:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab38;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab5:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab30;
    } else {
      goto _1_OBF_FUNC_lab56;
    }
  _1_OBF_FUNC_lab4:
    i++;
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab1:
    sum += i;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab53:
    sum += i;
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab46:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab21:
    __RANDVAR__59899670446175406347__ = 0;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab17:
    sum += i;
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab11:
    i++;
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab22:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab53;
    }
  _1_OBF_FUNC_lab8:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab52;
    } else {
      goto _1_OBF_FUNC_lab33;
    }
  _1_OBF_FUNC_lab41:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab25:;
    return (0);
  _1_OBF_FUNC_lab9:
    i++;
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab51:
    i++;
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab38:
    sum += i;
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab32:
    i++;
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab3:
    i++;
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab12:
    sum += i;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab18:
    __RANDVAR__59899670446175406347__ = 1;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab2:
    sum += i;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab49:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab48;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab36:
    i++;
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab6:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab1;
    } else {
      goto _1_OBF_FUNC_lab5;
    }
  _1_OBF_FUNC_lab47:
    sum += i;
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab48:
    sum += i;
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab27:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab17;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab42:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab47;
    } else {
      goto _1_OBF_FUNC_lab50;
    }
  _1_OBF_FUNC_lab44:
    sum += i;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab7:
    __RANDVAR__80573334600476375248__ = 0;
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab29:;
    if (__RANDVAR__59899670446175406347__ == 0) {
      goto _1_OBF_FUNC_lab19;
    } else {
      goto _1_OBF_FUNC_lab41;
    }
  _1_OBF_FUNC_lab37:
    i++;
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab45:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab12;
    } else {
      goto _1_OBF_FUNC_lab56;
    }
  _1_OBF_FUNC_lab13:
    i++;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab16:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab2;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab50:;
    if (!(i < *(argv + 0))) {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab34:
    sum += i;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab14:
    i++;
    goto _1_OBF_FUNC_lab27;
  _1_OBF_FUNC_lab24:
    i++;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab10:
    i = 0;
    goto _1_OBF_FUNC_lab7;
  }
}
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:goto
