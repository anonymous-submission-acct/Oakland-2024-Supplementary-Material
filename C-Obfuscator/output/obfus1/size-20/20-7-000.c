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
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 7UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 1:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      case 6:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 2:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 5:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input - 514824154UL) - 220891369UL * ((unsigned long)localStaticState[0UL] + 333442959UL));
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 15:;
        if (!((localStaticState[1UL] >> 2U) & 1U)) {
          { _1_OBF_FUNC_next = 30UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 13:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 45:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction7_6_2] * localStaticState[_index2_0];
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 31:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 45UL; }
        } else {
          { _1_OBF_FUNC_next = 17UL; }
        }
        break;
      case 37:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 35UL; }
        } else {
          { _1_OBF_FUNC_next = 2UL; }
        }
        break;
      case 7:
        localStaticState[0UL] = input + 323496478U;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 12:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 39:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 17:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 21:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 41:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 36:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 0:;
        if (!((localStaticState[0UL] >> 3U) & 1U)) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 2UL; }
        }
        break;
      case 11:;
        if (!((localStaticState[1UL] >> 2U) & 1U)) {
          { _1_OBF_FUNC_next = 37UL; }
        } else {
          { _1_OBF_FUNC_next = 2UL; }
        }
        break;
      case 29:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 46UL; }
        break;
      case 30:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 4:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 44:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 22:
        _index2_0++;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 46:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 34:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 0UL; }
        } else {
          { _1_OBF_FUNC_next = 29UL; }
        }
        break;
      case 48:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 43:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 40:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 18UL; }
        }
        break;
      case 42:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 2123489238U);
        break;
      case 9:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 33:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 32:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 23:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 28:
        _index0_3++;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 26:
        localStaticState[_index4_0] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 18:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 20:
        localStaticState[(unsigned long)_induction9_8_2 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 35:
        localStaticState[_index2_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 24:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 39UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
