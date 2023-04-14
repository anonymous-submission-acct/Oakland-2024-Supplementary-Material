typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 4UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 2:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 8:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 1:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 6:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 3UL; }
        }
        break;
      case 3:;
        return ((localStaticState[0UL] - localStaticState[1UL]) * 727051838U);
        break;
      case 4:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input * 624914246UL) * 1380279005UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 7:;
        if (!((localStaticState[1UL] >> 1U) & 1U)) {
          { _1_OBF_FUNC_next = 6UL; }
        } else {
          { _1_OBF_FUNC_next = 3UL; }
        }
        break;
      case 0:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 5:
        localStaticState[1UL] = (unsigned int)((unsigned long)input + 582783585UL);
        { _1_OBF_FUNC_next = 1UL; }
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
