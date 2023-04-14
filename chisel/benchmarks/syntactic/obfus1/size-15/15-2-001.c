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
  unsigned int _index0_0;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[32] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31};
  {
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab18:;
    switch ((unsigned long)((int)(localStaticState[_induction1_0_2] - localStaticState[_index0_0])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab31;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab17;
      break;
    default:
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab15:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab5:;
    if ((localStaticState[0UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab8;
    }
  _1_OBF_FUNC_lab9:
    localStaticState[(unsigned long)_index0_0 % 2UL] = localStaticState[1UL] + localStaticState[_index0_0];
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab1:
    _index0_0 = 0U;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab14:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab17:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab6:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index2_0] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab3:
    _index2_0++;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab11:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 868443546UL) + 1368820046UL);
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab22:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)_index0_0 % 2UL];
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab27:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab10:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab19:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab24:;
    if ((unsigned long)_index0_0 < 0UL) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab13;
    }
  _1_OBF_FUNC_lab0:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + 329445214UL);
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab8:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab13:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab12:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab26:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab20:;
    return ((localStaticState[0UL] - localStaticState[1UL]) - 369322272U);
  _1_OBF_FUNC_lab31:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_0] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab29:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab8;
    }
  _1_OBF_FUNC_lab2:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab6;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab4:
    localStaticState[_induction1_0_2] = localStaticState[_index0_0] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab8;
  }
}
// variants: flatten
// expanded variants: flatten:goto
