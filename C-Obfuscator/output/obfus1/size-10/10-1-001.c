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
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[39] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38};
  {
    { _1_OBF_FUNC_next = 15UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab38:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab9:
    localStaticState[_induction1_0_2] += localStaticState[1UL];
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab7:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab18:;
    return ((localStaticState[0UL] - localStaticState[1UL]) - 1879284913U);
  _1_OBF_FUNC_lab31:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab38;
    } else {
      goto _1_OBF_FUNC_lab3;
    }
  _1_OBF_FUNC_lab19:
    _index2_4 = 0U;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab5:
    _index6_0++;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab21:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab1:;
    if (!((unsigned long)_index6_0 < 0UL)) {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab4:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab13;
    }
  _1_OBF_FUNC_lab6:
    localStaticState[1UL] = (unsigned int)((unsigned long)input * ((unsigned long)localStaticState[0UL] + 436519216UL));
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab0:
    _index0_3 = 0U;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab15:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 276835458UL) - 575082560UL);
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab37:
    _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab26:;
    if ((unsigned long)_index0_3 < 3UL) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab30;
    }
  _1_OBF_FUNC_lab11:
    localStaticState[_induction3_2_2] = localStaticState[(unsigned long)_index2_4 % 2UL] + localStaticState[_induction3_2_2];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab2:
    _index0_3 = (unsigned int)((unsigned long)_index0_3 + 2UL);
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab32:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] *= localStaticState[1UL];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab30:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab20:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab11;
    } else {
      goto _1_OBF_FUNC_lab32;
    }
  _1_OBF_FUNC_lab29:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab12:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_index4_0] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab33:
    localStaticState[(unsigned long)_index2_4 % 2UL] = localStaticState[_induction5_4_2] - localStaticState[(unsigned long)_index6_0 % 2UL];
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab34:
    _index2_4 = (unsigned int)((unsigned long)_index2_4 + 2UL);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab24:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab8:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab17:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab23:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab3:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab13:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[(unsigned long)_index6_0 % 2UL];
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
