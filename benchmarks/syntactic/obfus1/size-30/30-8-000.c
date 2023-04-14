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
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_1;
  unsigned int _induction13_12_2;
  unsigned int _index12_1;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 3UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 23:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 35UL; }
        } else {
          { _1_OBF_FUNC_next = 52UL; }
        }
        break;
      case 54:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 46:;
        if ((unsigned long)_index0_4 < 4UL) {
          { _1_OBF_FUNC_next = 8UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 35:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 5:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 57UL; }
        break;
      case 19:
        localStaticState[_induction13_12_2] = localStaticState[1UL] + localStaticState[(unsigned long)_induction13_12_2 % 2UL];
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 38:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 30:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 13UL; }
        } else {
          { _1_OBF_FUNC_next = 77UL; }
        }
        break;
      case 1:;
        if ((unsigned long)_index12_1 < 1UL) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 16UL; }
        }
        break;
      case 17:
        _index10_1++;
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 68:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 60UL; }
        break;
      case 21:;
        if ((unsigned long)_index16_0 < 0UL) {
          { _1_OBF_FUNC_next = 66UL; }
        } else {
          { _1_OBF_FUNC_next = 44UL; }
        }
        break;
      case 2:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 71:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 44UL; }
        }
        break;
      case 44:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 66:
        localStaticState[(unsigned long)_index16_0 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[_induction17_16_2];
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 12:
        _induction17_16_2 = 0U;
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 45:
        _induction17_16_2 = (unsigned int)(((unsigned long)_induction17_16_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 61:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 11:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 78UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 6:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 56UL; }
        break;
      case 27:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 13:
        localStaticState[_induction1_0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 16:;
        return (localStaticState[0UL] - localStaticState[1UL]);
        break;
      case 51:
        _index16_0 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 65:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 25UL; }
        break;
      case 52:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 65UL; }
        break;
      case 20:
        _induction15_14_2 = 0U;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 76:
        localStaticState[_index10_1] = localStaticState[1UL] + localStaticState[(unsigned long)_induction11_10_2 % 2UL];
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 67:;
        if ((unsigned long)_index10_1 < 1UL) {
          { _1_OBF_FUNC_next = 14UL; }
        } else {
          { _1_OBF_FUNC_next = 38UL; }
        }
        break;
      case 78:
        localStaticState[_induction13_12_2] = localStaticState[_index12_1] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 58:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 62UL; }
        break;
      case 72:
        _index0_4++;
        { _1_OBF_FUNC_next = 46UL; }
        break;
      case 22:
        _index14_0++;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 36:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 53:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 9:
        _index12_1++;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 77:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 55:
        localStaticState[_index2_0] = localStaticState[_induction3_2_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 0:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 57:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 60:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 38UL; }
        }
        break;
      case 32:
        _index10_1 = 0U;
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 79:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 55UL; }
        }
        break;
      case 43:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 29UL; }
        }
        break;
      case 25:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 58UL; }
        } else {
          { _1_OBF_FUNC_next = 2UL; }
        }
        break;
      case 28:;
        if ((unsigned long)_index14_0 < 0UL) {
          { _1_OBF_FUNC_next = 71UL; }
        } else {
          { _1_OBF_FUNC_next = 29UL; }
        }
        break;
      case 4:;
        if ((localStaticState[1UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 27UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 34:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 24:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 48:
        _index16_0 = (unsigned int)((unsigned long)_index16_0 + 2UL);
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 26:
        _index8_0++;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 62:
        _index6_0++;
        { _1_OBF_FUNC_next = 25UL; }
        break;
      case 3:
        localStaticState[0UL] = (unsigned int)((unsigned long)input + 704296640UL);
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 29:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 15:
        _index12_1 = 0U;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 8:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 75:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 56:
        _index2_0++;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 69:
        localStaticState[1UL] = (unsigned int)((long)(input - localStaticState[0UL]) - 3930225871L);
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 31:
        _index0_4 = 0U;
        { _1_OBF_FUNC_next = 46UL; }
        break;
      case 47:
        _index14_0 = 0U;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 14:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 76UL; }
        } else {
          { _1_OBF_FUNC_next = 61UL; }
        }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
