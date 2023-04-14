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
  unsigned int _index2_1;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 15UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 17:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 9:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 28UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 43:
        _index2_1 = 0U;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 41:
        _index6_2++;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 16:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 36:;
        return (localStaticState[0UL] + localStaticState[1UL]);
        break;
      case 47:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] -= localStaticState[0UL];
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 10:
        localStaticState[(unsigned long)_index6_2 % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 5:;
        if ((unsigned long)_index2_1 < 1UL) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 44UL; }
        }
        break;
      case 15:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 747458416UL) + 2719129005UL);
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 12:
        _index4_0++;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 14:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 6UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 24:
        _index2_1++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 37:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 33:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] *= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 28:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 18:
        _index0_0 = 0U;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 44:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 37UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 19:;
        switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 48UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 33UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 36UL;
        } break;
        }
        break;
      case 4:
        localStaticState[_induction3_2_2] = localStaticState[_index4_0] + localStaticState[_index2_1];
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 42:
        _index0_0++;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 0:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 23:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 32UL; }
        }
        break;
      case 26:
        localStaticState[_index4_0] = localStaticState[_index2_1] - localStaticState[_index4_0];
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 35:;
        if ((unsigned long)_index6_2 < 2UL) {
          { _1_OBF_FUNC_next = 10UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 8:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 29:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 32:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 7:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 30:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 6:
        localStaticState[_index0_0] = localStaticState[_induction1_0_2] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 40:
        _index6_2 = 0U;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 1:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 21:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input + 433059248UL) + 1641818680UL);
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 48:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 38:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_index2_1] + localStaticState[_index2_1];
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 20:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 27:
        localStaticState[0UL] *= localStaticState[(unsigned long)_induction7_6_2 % 2UL];
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 13:;
        if ((unsigned long)_index0_0 < 0UL) {
          { _1_OBF_FUNC_next = 14UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
