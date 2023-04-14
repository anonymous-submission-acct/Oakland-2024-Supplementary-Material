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
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[26] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25};
  {
    { _1_OBF_FUNC_next = 7UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    localStaticState[1UL] = (unsigned int)((unsigned long)input - 973503319UL);
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab14:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab10:
    _index0_2 = 0U;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab21:
    localStaticState[(unsigned long)_index2_0 % 2UL] = localStaticState[_induction3_2_2] + localStaticState[(unsigned long)_index2_0 % 2UL];
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab3:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab0;
    }
  _1_OBF_FUNC_lab8:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab5:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab18;
    }
  _1_OBF_FUNC_lab16:
    _index0_2++;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab12:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab24;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab9:
    _index4_0++;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab24:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab19:;
    return (localStaticState[0UL] + localStaticState[1UL]);
  _1_OBF_FUNC_lab17:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab23:
    _index2_0++;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab11:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab18:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab25:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab7:
    localStaticState[0UL] = (unsigned int)((unsigned long)input * 586392748UL - 1832076986UL);
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab0:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab4:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
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
