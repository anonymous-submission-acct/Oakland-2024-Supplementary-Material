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
  unsigned int _index0_9;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[14] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13};
  {
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:;
    if (!((localStaticState[1UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab3;
    } else {
      goto _1_OBF_FUNC_lab11;
    }
  _1_OBF_FUNC_lab1:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab4:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] * localStaticState[1UL];
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab0:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + 589765119UL);
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab3:
    localStaticState[(unsigned long)_index0_9 % 2UL] += localStaticState[(unsigned long)_index0_9 % 2UL];
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab9:;
    return (localStaticState[0UL] + localStaticState[1UL]);
  _1_OBF_FUNC_lab13:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab6:
    _index0_9 = 0U;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab12:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab8:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 821628072UL) + 878588929UL);
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab2:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab11:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab13;
  }
}
// variants: flatten
// expanded variants: flatten:goto
