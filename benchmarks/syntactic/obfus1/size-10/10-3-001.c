typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_4;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[34] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33};
  {
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:
    localStaticState[0UL] = (unsigned int)((unsigned long)input + 992345021UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab21:
    _index6_4 = 0U;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab24:
    localStaticState[1UL] = (unsigned int)(((unsigned long)input + 490308643UL) * 423209266UL);
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab5:
    _index2_0++;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab28:
    _index0_3++;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab33:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab20:;
    return (localStaticState[0UL] + localStaticState[1UL]);
  _1_OBF_FUNC_lab22:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab29:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab17:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab2;
    } else {
      goto _1_OBF_FUNC_lab22;
    }
  _1_OBF_FUNC_lab0:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab2:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab31:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab18:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab15:
    _index0_3 = 0U;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab14:
    _index4_0++;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab23:;
    if ((unsigned long)_index6_4 < 4UL) {
      goto _1_OBF_FUNC_lab11;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab19:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab3:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab27:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab11:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab12:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab13:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab26:;
    if ((unsigned long)_index0_3 < 3UL) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab31;
    }
  _1_OBF_FUNC_lab32:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab1:
    _index6_4 = (unsigned int)((unsigned long)_index6_4 + 2UL);
    goto _1_OBF_FUNC_lab23;
  }
}
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
// variants: flatten
// expanded variants: flatten:goto
