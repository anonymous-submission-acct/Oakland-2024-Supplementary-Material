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
  {
    { _1_OBF_FUNC_next = 7UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 25:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 16:
        _index0_2++;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 10:
        _index0_2 = 0U;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 12:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 23:
        _index2_0++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 9:
        _index4_0++;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 18:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 4:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 5:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 21UL; }
        } else {
          { _1_OBF_FUNC_next = 18UL; }
        }
        break;
      case 2:
        localStaticState[1UL] = (unsigned int)((unsigned long)input - 973503319UL);
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 19:;
        return (localStaticState[0UL] + localStaticState[1UL]);
        break;
      case 0:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 14:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 17:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 21:
        localStaticState[(unsigned long)_index2_0 % 2UL] = localStaticState[_induction3_2_2] + localStaticState[(unsigned long)_index2_0 % 2UL];
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 7:
        localStaticState[0UL] = (unsigned int)((unsigned long)input * 586392748UL - 1832076986UL);
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 8:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 3:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 0UL; }
        }
        break;
      case 24:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 11:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      }
    }
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
// expanded variants: flatten:switch
