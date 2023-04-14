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
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_9;
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
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 13UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 69:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 42:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 20:;
        if ((unsigned long)_index10_0 < 0UL) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 55:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 74UL; }
        }
        break;
      case 78:;
        return ((unsigned int)((unsigned long)localStaticState[0UL] * ((unsigned long)localStaticState[1UL] + 676413248UL)));
        break;
      case 29:;
        if ((unsigned long)_index2_9 < 9UL) {
          { _1_OBF_FUNC_next = 66UL; }
        } else {
          { _1_OBF_FUNC_next = 78UL; }
        }
        break;
      case 47:
        _index12_0 = 0U;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 38:
        localStaticState[_index10_0] = localStaticState[(unsigned long)_induction11_10_2 % 2UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
        { _1_OBF_FUNC_next = 60UL; }
        break;
      case 28:;
        if ((unsigned long)_index12_0 < 0UL) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 10UL; }
        }
        break;
      case 35:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 9:
        _induction15_14_2 = 0U;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 74:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 62UL; }
        break;
      case 32:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 17UL; }
        } else {
          { _1_OBF_FUNC_next = 35UL; }
        }
        break;
      case 16:
        _index0_2 = 0U;
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 31:
        localStaticState[1UL] = (input - localStaticState[0UL]) + 897028582U;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 40:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_induction17_16_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 70:
        _induction17_16_2 = 0U;
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 63:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 0:
        _index2_9 = 0U;
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 17:
        localStaticState[1UL] = localStaticState[(unsigned long)_index2_9 % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 76:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 63UL; }
        }
        break;
      case 43:
        _index16_0 = 0U;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 3:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[(unsigned long)_index2_9 % 2UL];
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 25:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 67:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 34UL; }
        }
        break;
      case 58:
        _index10_0 = 0U;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 50:
        localStaticState[_induction15_14_2] = localStaticState[(unsigned long)_induction13_12_2 % 2UL] - localStaticState[_index12_0];
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 66:;
        if ((localStaticState[1UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 27UL; }
        } else {
          { _1_OBF_FUNC_next = 56UL; }
        }
        break;
      case 33:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 34:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 51:
        _induction17_16_2 = (unsigned int)(((unsigned long)_induction17_16_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 21:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 59:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 53:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 54:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 21UL; }
        } else {
          { _1_OBF_FUNC_next = 52UL; }
        }
        break;
      case 7:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 53UL; }
        }
        break;
      case 10:
        localStaticState[(unsigned long)_index2_9 % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)_induction3_2_2 % 2UL];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 56:
        localStaticState[1UL] = localStaticState[_induction3_2_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 73UL; }
        break;
      case 22:
        _index16_0 = (unsigned int)((unsigned long)_index16_0 + 2UL);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 4:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 6:;
        if ((unsigned long)_index14_0 < 0UL) {
          { _1_OBF_FUNC_next = 50UL; }
        } else {
          { _1_OBF_FUNC_next = 64UL; }
        }
        break;
      case 2:
        _index14_0 = 0U;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 5:
        _index6_0++;
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 68:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 14:
        _index0_2++;
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 52:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 61:
        _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 73:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 18UL; }
        } else {
          { _1_OBF_FUNC_next = 34UL; }
        }
        break;
      case 13:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 622200036UL) + 1730499028UL);
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 60:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 62:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 26:
        _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 64:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 18:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 30:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 24:;
        if ((unsigned long)_index16_0 < 0UL) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 34UL; }
        }
        break;
      case 37:
        _index12_0++;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 36:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 27:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 44:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 1:
        _index14_0++;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
