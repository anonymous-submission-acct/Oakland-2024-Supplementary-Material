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
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 23UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 26:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 0:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 18:
        localStaticState[_index4_0] -= localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 24:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 15:
        localStaticState[_index0_0] = localStaticState[0UL] - localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 23:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 672524980UL) + 3811164043UL);
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 28:
        localStaticState[_induction1_0_2] += localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 33:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 30UL; }
        } else {
          { _1_OBF_FUNC_next = 24UL; }
        }
        break;
      case 17:;
        if ((unsigned long)_index0_0 < 0UL) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 34UL; }
        }
        break;
      case 22:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 10:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)_index2_0 % 2UL];
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 9:
        localStaticState[1UL] = (unsigned int)((unsigned long)input + ((unsigned long)localStaticState[0UL] - 1063713032UL));
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 2:
        localStaticState[0UL] = localStaticState[_index0_0] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 5:
        _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 11:
        _index2_0++;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 34:;
        return (localStaticState[0UL] * localStaticState[1UL] - 989443596U);
        break;
      case 30:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 18UL; }
        } else {
          { _1_OBF_FUNC_next = 22UL; }
        }
        break;
      case 32:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 27:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 20:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 21:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 10UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 6:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 31:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 4:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 14:
        _index0_0 = 0U;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 12:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 16:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 1:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 19:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 33UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
