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
  unsigned int _index0_3;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 1UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 5:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 8:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 10:
        localStaticState[1UL] = (unsigned int)((unsigned long)input + (212242731UL - (unsigned long)localStaticState[0UL]));
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 4:;
        return ((localStaticState[0UL] + localStaticState[1UL]) - 1792313359U);
        break;
      case 6:;
        if (!((localStaticState[0UL] >> 1U) & 1U)) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 1:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 304302104UL) + 3878855248UL);
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 12:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)_index0_3 % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 13:
        _index0_3++;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 3:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 7:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 0UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 0:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 9:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
