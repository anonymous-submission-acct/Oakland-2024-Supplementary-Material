typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(strtol)();
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  int tmp;
  unsigned int tmp___0;
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
    tmp = strtol(*(argv + 1), 0L, 10);
    a = (unsigned int)tmp;
    tmp___0 = OBF_FUNC(a);
    return ((int)tmp___0);
  }
}
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  int __RANDVAR__83223445919999558140__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[44] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43};
  {
    { _1_OBF_FUNC_next = 14UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab15:
    _index0_1++;
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab33:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab6:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab32:
    localStaticState[1UL] = (unsigned int)((unsigned long)input * (429642679UL + (unsigned long)localStaticState[0UL]));
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab19:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab26:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab37:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab26;
    } else {
      goto _1_OBF_FUNC_lab40;
    }
  _1_OBF_FUNC_lab9:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab2:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab41;
    }
  _1_OBF_FUNC_lab10:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab5:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab3:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab43:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab39:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab34;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab14:
    localStaticState[0UL] = (unsigned int)((unsigned long)input * 936224497UL + 544459364UL);
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab27:;
    return ((localStaticState[0UL] - localStaticState[1UL]) + 561002488U);
  _1_OBF_FUNC_lab13:
    __RANDVAR__83223445919999558140__ = 0;
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab7:
    _index0_1++;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab28:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab18:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab35:
    _index0_1++;
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab36:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab23:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab17:
    __RANDVAR__83223445919999558140__ = 1;
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab31:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab24:
    _index0_1++;
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab38:;
    if (__RANDVAR__83223445919999558140__ == 0) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab4:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab30:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab21:
    _index0_1++;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab42:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab1:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab29:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab11;
    } else {
      goto _1_OBF_FUNC_lab41;
    }
  _1_OBF_FUNC_lab40:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab6;
    } else {
      goto _1_OBF_FUNC_lab29;
    }
  _1_OBF_FUNC_lab11:
    localStaticState[1UL] = localStaticState[(unsigned long)_index0_1 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab20:
    _index0_1 = 0U;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab0:
    _index0_1++;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab34:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab41:;
    if ((unsigned long)_index0_1 < 1UL) {
      goto _1_OBF_FUNC_lab37;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab16:
    localStaticState[_index0_1] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index0_1 % 2UL];
    goto _1_OBF_FUNC_lab36;
  }
}
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:goto
