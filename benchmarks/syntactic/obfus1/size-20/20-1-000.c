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
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 0UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 15:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 0:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 297072123UL) - 467100053UL);
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 28:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 44UL; }
        } else {
          { _1_OBF_FUNC_next = 60UL; }
        }
        break;
      case 14:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 8UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      case 49:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 20:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 38:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 33:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 50:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 3:
        _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 9:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 23:
        _index10_0++;
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 42:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 6:
        _index6_0++;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 51:
        localStaticState[1UL] = (input + localStaticState[0UL]) * 1569331502U;
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 26:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 55:
        _index12_0 = 0U;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 7:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 22UL; }
        }
        break;
      case 5:;
        if ((unsigned long)_index12_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 11:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 10:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 54:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 44:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 21:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 39:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 22UL; }
        }
        break;
      case 29:
        _index0_9 = 0U;
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 25:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 59:;
        if ((unsigned long)_index0_9 < 9UL) {
          { _1_OBF_FUNC_next = 52UL; }
        } else {
          { _1_OBF_FUNC_next = 24UL; }
        }
        break;
      case 13:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 45:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 60:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 48:;
        if ((unsigned long)_index10_0 < 0UL) {
          { _1_OBF_FUNC_next = 35UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 24:;
        return ((unsigned int)((unsigned long)localStaticState[0UL] + (unsigned long)localStaticState[1UL] * 8260261UL));
        break;
      case 37:
        _index2_0++;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 57:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 4:
        localStaticState[_induction1_0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)_induction13_12_2 % 2UL];
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 22:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 31:
        localStaticState[0UL] *= localStaticState[(unsigned long)_index0_9 % 2UL];
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 17:
        _index10_0 = 0U;
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 40:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 57UL; }
        break;
      case 52:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 50UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 47UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 13UL;
        } break;
        }
        break;
      case 8:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[(unsigned long)_index6_0 % 2UL] * localStaticState[_induction9_8_2];
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 47:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 25UL; }
        break;
      case 35:
        localStaticState[_induction1_0_2] = localStaticState[1UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 38UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
