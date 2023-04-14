typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(rand)();
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
  unsigned int _index2_3;
  unsigned int _induction5_4_2;
  unsigned int _index4_8;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 88UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 28:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next = 129UL; }
        } else {
          { _1_OBF_FUNC_next = 66UL; }
        }
        break;
      case 5:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 74UL; }
        } else {
          { _1_OBF_FUNC_next = 100UL; }
        }
        break;
      case 74:;
        if ((unsigned long)_index2_3 < 3UL) {
          { _1_OBF_FUNC_next = 57UL; }
        } else {
          { _1_OBF_FUNC_next = 59UL; }
        }
        break;
      case 19:;
        if (!((localStaticState[0UL] >> 4U) & 1U)) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 22UL; }
        }
        break;
      case 130:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 93UL; }
        break;
      case 57:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 108:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 130UL; }
        } else {
          { _1_OBF_FUNC_next = 61UL; }
        }
        break;
      case 131:
        localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 78:
        localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 23:;
        if ((unsigned long)_index4_8 < 8UL) {
          { _1_OBF_FUNC_next = 85UL; }
        } else {
          { _1_OBF_FUNC_next = 129UL; }
        }
        break;
      case 12:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input + 694808198UL) - (460487822UL + (133604396UL + (unsigned long)localStaticState[0UL])));
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 98:;
        if (!((localStaticState[0UL] >> 4U) & 1U)) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 128:
        localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 3:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 91UL; }
        break;
      case 123:
        tmp = rand();
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 88:
        localStaticState[0UL] = (unsigned int)((unsigned long)input + 546163463UL);
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 85:
        tmp___5 = rand();
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 1:
        tmp___6 = rand();
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 73:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 65UL; }
        } else {
          { _1_OBF_FUNC_next = 80UL; }
        }
        break;
      case 33:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 84:
        localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 115UL; }
        break;
      case 71:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 121UL; }
        break;
      case 100:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 14:
        tmp___7 = rand();
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 53:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 102UL; }
        } else {
          { _1_OBF_FUNC_next = 72UL; }
        }
        break;
      case 114:;
        if ((unsigned long)_index2_3 < 3UL) {
          { _1_OBF_FUNC_next = 87UL; }
        } else {
          { _1_OBF_FUNC_next = 65UL; }
        }
        break;
      case 49:
        localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 63:;
        if ((unsigned long)_index2_3 < 3UL) {
          { _1_OBF_FUNC_next = 37UL; }
        } else {
          { _1_OBF_FUNC_next = 74UL; }
        }
        break;
      case 80:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 55:
        _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 101:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 97UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 92UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 44UL;
        } break;
        }
        break;
      case 93:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 61UL; }
        } else {
          { _1_OBF_FUNC_next = 34UL; }
        }
        break;
      case 129:;
        if ((unsigned long)_index4_8 < 8UL) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      case 119:
        localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 89UL; }
        break;
      case 0:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 53UL; }
        } else {
          { _1_OBF_FUNC_next = 10UL; }
        }
        break;
      case 32:
        _index0_3++;
        { _1_OBF_FUNC_next = 108UL; }
        break;
      case 59:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 11:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 22:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 103:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 61:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 106UL; }
        } else {
          { _1_OBF_FUNC_next = 53UL; }
        }
        break;
      case 92:;
        if (!((localStaticState[0UL] >> 4U) & 1U)) {
          { _1_OBF_FUNC_next = 137UL; }
        } else {
          { _1_OBF_FUNC_next = 103UL; }
        }
        break;
      case 35:
        localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 68:
        _index0_3++;
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 17:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 108UL; }
        } else {
          { _1_OBF_FUNC_next = 101UL; }
        }
        break;
      case 7:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 107:
        localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 95:
        _index2_3 = 0U;
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 96:
        _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 27:
        _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 81:
        localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 20:
        _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 18:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 104UL; }
        }
        break;
      case 30:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 97:
        localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 116:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 78UL; }
        break;
      case 65:;
        if ((unsigned long)_index2_3 < 3UL) {
          { _1_OBF_FUNC_next = 83UL; }
        } else {
          { _1_OBF_FUNC_next = 63UL; }
        }
        break;
      case 66:
        localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 67:;
        if (!((localStaticState[0UL] >> 4U) & 1U)) {
          { _1_OBF_FUNC_next = 111UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 106:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 72:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 95UL; }
        break;
      case 41:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 75:
        _index0_3++;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 36:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 82:;
        return ((unsigned int)((unsigned long)localStaticState[0UL] - (unsigned long)localStaticState[1UL] * 542707389UL));
        break;
      case 10:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 107UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 67UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 132UL;
        } break;
        }
        break;
      case 89:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 134UL; }
        break;
      case 134:
        _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 56:;
        if ((unsigned long)_index4_8 < 8UL) {
          { _1_OBF_FUNC_next = 128UL; }
        } else {
          { _1_OBF_FUNC_next = 82UL; }
        }
        break;
      case 137:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 87:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 73UL; }
        break;
      case 64:
        localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 70:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 112UL; }
        break;
      case 37:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 83:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 126:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 63UL; }
        } else {
          { _1_OBF_FUNC_next = 41UL; }
        }
        break;
      case 39:
        localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 111:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 104:
        localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 119UL; }
        break;
      case 21:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 123UL; }
        } else {
          { _1_OBF_FUNC_next = 108UL; }
        }
        break;
      case 15:
        localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 91:
        _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 16:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 84UL; }
        }
        break;
      case 102:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 131UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 98UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 116UL;
        } break;
        }
        break;
      case 121:
        _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
        { _1_OBF_FUNC_next = 56UL; }
        break;
      case 132:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 115:
        localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 34:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 35UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 19UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 7UL;
        } break;
        }
        break;
      case 29:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 40:;
        if ((unsigned long)_index4_8 < 8UL) {
          { _1_OBF_FUNC_next = 14UL; }
        } else {
          { _1_OBF_FUNC_next = 56UL; }
        }
        break;
      case 112:
        _index0_3++;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 44:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 76:
        _index4_8 = 0U;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 2:
        _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
        { _1_OBF_FUNC_next = 65UL; }
        break;
      case 79:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      }
    }
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:switch
