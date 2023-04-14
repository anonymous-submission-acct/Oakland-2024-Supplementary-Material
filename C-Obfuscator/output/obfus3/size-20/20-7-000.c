typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int strtol();
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  int tmp;
  unsigned int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
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
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 5UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 33:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 92:
        localStaticState[(unsigned long)_induction9_8_2 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 131:
        localStaticState[0UL] = input + 323496478U;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 2:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 132UL; }
        break;
      case 104:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 133:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input - 514824154UL) - 220891369UL * ((unsigned long)localStaticState[0UL] + 333442959UL));
        { _1_OBF_FUNC_next___0 = 135UL; }
        break;
      case 132:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 27:;
        switch (_1_OBF_FUNC_next) {
        case 11UL: {
          _1_OBF_FUNC_next___0 = 66UL;
        } break;
        case 23UL: {
          _1_OBF_FUNC_next___0 = 54UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 106UL;
        } break;
        case 42UL: {
          _1_OBF_FUNC_next___0 = 71UL;
        } break;
        case 5UL: {
          _1_OBF_FUNC_next___0 = 133UL;
        } break;
        case 15UL: {
          _1_OBF_FUNC_next___0 = 40UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 131UL;
        } break;
        case 4UL: {
          _1_OBF_FUNC_next___0 = 96UL;
        } break;
        case 33UL: {
          _1_OBF_FUNC_next___0 = 97UL;
        } break;
        case 36UL: {
          _1_OBF_FUNC_next___0 = 137UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 7UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 58UL;
        } break;
        case 43UL: {
          _1_OBF_FUNC_next___0 = 104UL;
        } break;
        case 12UL: {
          _1_OBF_FUNC_next___0 = 124UL;
        } break;
        case 22UL: {
          _1_OBF_FUNC_next___0 = 45UL;
        } break;
        case 28UL: {
          _1_OBF_FUNC_next___0 = 67UL;
        } break;
        case 26UL: {
          _1_OBF_FUNC_next___0 = 41UL;
        } break;
        case 30UL: {
          _1_OBF_FUNC_next___0 = 121UL;
        } break;
        case 18UL: {
          _1_OBF_FUNC_next___0 = 113UL;
        } break;
        case 39UL: {
          _1_OBF_FUNC_next___0 = 134UL;
        } break;
        case 35UL: {
          _1_OBF_FUNC_next___0 = 62UL;
        } break;
        case 31UL: {
          _1_OBF_FUNC_next___0 = 29UL;
        } break;
        case 37UL: {
          _1_OBF_FUNC_next___0 = 70UL;
        } break;
        case 29UL: {
          _1_OBF_FUNC_next___0 = 19UL;
        } break;
        case 24UL: {
          _1_OBF_FUNC_next___0 = 86UL;
        } break;
        case 21UL: {
          _1_OBF_FUNC_next___0 = 43UL;
        } break;
        case 41UL: {
          _1_OBF_FUNC_next___0 = 15UL;
        } break;
        case 6UL: {
          _1_OBF_FUNC_next___0 = 2UL;
        } break;
        case 34UL: {
          _1_OBF_FUNC_next___0 = 46UL;
        } break;
        case 32UL: {
          _1_OBF_FUNC_next___0 = 6UL;
        } break;
        case 44UL: {
          _1_OBF_FUNC_next___0 = 52UL;
        } break;
        case 40UL: {
          _1_OBF_FUNC_next___0 = 28UL;
        } break;
        case 13UL: {
          _1_OBF_FUNC_next___0 = 122UL;
        } break;
        case 17UL: {
          _1_OBF_FUNC_next___0 = 114UL;
        } break;
        case 46UL: {
          _1_OBF_FUNC_next___0 = 16UL;
        } break;
        case 48UL: {
          _1_OBF_FUNC_next___0 = 48UL;
        } break;
        case 20UL: {
          _1_OBF_FUNC_next___0 = 92UL;
        } break;
        case 45UL: {
          _1_OBF_FUNC_next___0 = 34UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 10UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 27UL;
        } break;
        }
        break;
      case 138:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 87:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 67:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 61:
        _1_OBF_FUNC_next = 40UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 3:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 126:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 72:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 8:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 117:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 57:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 65:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 74:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 76UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 50UL; }
        }
        break;
      case 121:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next___0 = 139UL; }
        break;
      case 10:;
        {
          _1_OBF_FUNC_next___0 = 84UL;
        }
        break;
      case 94:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 86:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 130UL; }
        break;
      case 38:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 43:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 75:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 130:
        _1_OBF_FUNC_next = 39UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 6:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 124:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 66:;
        {
          _1_OBF_FUNC_next___0 = 64UL;
        }
        break;
      case 97:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 125UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = 91UL;
        }
        break;
      case 40:;
        {
          _1_OBF_FUNC_next___0 = 35UL;
        }
        break;
      case 24:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 17UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 98UL; }
        }
        break;
      case 71:;
        {
          _1_OBF_FUNC_next___0 = 110UL;
        }
        break;
      case 139:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 41:
        localStaticState[_index4_0] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 113:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 34:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction7_6_2] * localStaticState[_index2_0];
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 137:;
        {
          _1_OBF_FUNC_next___0 = 74UL;
        }
        break;
      case 82:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 50:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 91:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 77UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 61UL; }
        }
        break;
      case 22:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 106:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      case 62:
        localStaticState[_index2_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 102:
        _1_OBF_FUNC_next = 41UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 76:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 58:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 35:;
        if (!((localStaticState[1UL] >> 2U) & 1U)) {
          { _1_OBF_FUNC_next___0 = 57UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 72UL; }
        }
        break;
      case 114:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 48:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 13:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 128:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 56:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next___0 = 128UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 94UL; }
        }
        break;
      case 18:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 64:;
        if (!((localStaticState[1UL] >> 2U) & 1U)) {
          { _1_OBF_FUNC_next___0 = 31UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 105UL; }
        }
        break;
      case 37:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 43UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 19:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 31:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 52:;
        {
          _1_OBF_FUNC_next___0 = 24UL;
        }
        break;
      case 77:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 118:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 79:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 15:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 44:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 115:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 110:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 2123489238U);
        break;
      case 5:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 42:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 59:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 79UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 126UL; }
        }
        break;
      case 140:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 88UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 33UL; }
        }
        break;
      case 36:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 98:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 73:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 30:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 88:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 54:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 46:;
        {
          _1_OBF_FUNC_next___0 = 59UL;
        }
        break;
      case 105:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 80:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 125:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 84:;
        if (!((localStaticState[0UL] >> 3U) & 1U)) {
          { _1_OBF_FUNC_next___0 = 44UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 38UL; }
        }
        break;
      case 69:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 96:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 28:;
        {
          _1_OBF_FUNC_next___0 = 25UL;
        }
        break;
      case 108:
        _1_OBF_FUNC_next = 28UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 95:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 17:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 135:
        _1_OBF_FUNC_next = 33UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 70:;
        {
          _1_OBF_FUNC_next___0 = 56UL;
        }
        break;
      case 29:;
        {
          _1_OBF_FUNC_next___0 = 140UL;
        }
        break;
      case 21:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 134:
        _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 118UL; }
        break;
      case 45:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 122:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 25:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next___0 = 95UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 138UL; }
        }
        break;
      case 16:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:switch, irrelevant-code, flatten:switch
