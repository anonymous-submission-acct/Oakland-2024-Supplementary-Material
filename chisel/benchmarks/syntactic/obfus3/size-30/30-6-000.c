typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(rand)();
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 40UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 82:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 11:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 15UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 15:
        tmp = rand();
        { _1_OBF_FUNC_next = 97UL; }
        break;
      case 87:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 50:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 95UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 84:;
        switch ((unsigned long)((int)localStaticState[1UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 76UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 60UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 25UL;
        } break;
        }
        break;
      case 47:
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 36:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 68:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 32:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next = 77UL; }
        break;
      case 66:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 67:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 25:;
        if (!((localStaticState[1UL] >> 3U) & 1U)) {
          { _1_OBF_FUNC_next = 49UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 77:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 16UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 69:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 42UL; }
        } else {
          { _1_OBF_FUNC_next = 84UL; }
        }
        break;
      case 70:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 96:
        _index0_3++;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 90:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 33:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 88:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 66UL; }
        } else {
          { _1_OBF_FUNC_next = 45UL; }
        }
        break;
      case 19:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 92:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 35UL; }
        } else {
          { _1_OBF_FUNC_next = 82UL; }
        }
        break;
      case 34:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 89UL; }
        } else {
          { _1_OBF_FUNC_next = 69UL; }
        }
        break;
      case 80:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 92UL; }
        break;
      case 83:
        localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 78UL; }
        break;
      case 43:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next = 62UL; }
        break;
      case 14:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 46UL; }
        break;
      case 97:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 8UL; }
        } else {
          { _1_OBF_FUNC_next = 91UL; }
        }
        break;
      case 44:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 3:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 40:
        localStaticState[0UL] = (unsigned int)((unsigned long)input * 1055697178UL + 507474929UL);
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 62:
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 59:
        localStaticState[1UL] += localStaticState[1UL];
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 73:
        _index0_3++;
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 26:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 90UL; }
        break;
      case 55:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 45:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 83UL; }
        } else {
          { _1_OBF_FUNC_next = 13UL; }
        }
        break;
      case 18:
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 81:
        _index0_3++;
        { _1_OBF_FUNC_next = 88UL; }
        break;
      case 39:
        localStaticState[0UL] *= localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 49:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 95:
        localStaticState[1UL] += localStaticState[1UL];
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 71:
        _index0_3++;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 12:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 45UL; }
        } else {
          { _1_OBF_FUNC_next = 17UL; }
        }
        break;
      case 99:
        localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 61:
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 89:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 76:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 1:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 13UL; }
        }
        break;
      case 60:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 8:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 88UL; }
        }
        break;
      case 21:;
        return (localStaticState[0UL] + localStaticState[1UL]);
        break;
      case 9:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 31UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 98:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] -= localStaticState[0UL];
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 91:
        localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 87UL; }
        break;
      case 78:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 73UL; }
        break;
      case 74:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 80UL; }
        } else {
          { _1_OBF_FUNC_next = 35UL; }
        }
        break;
      case 38:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 75:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 24:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 46:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 54:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 77UL; }
        } else {
          { _1_OBF_FUNC_next = 3UL; }
        }
        break;
      case 85:
        localStaticState[1UL] = (unsigned int)((unsigned long)input - 249371270UL);
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 16:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 13:;
        switch ((unsigned long)((int)localStaticState[1UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 98UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 34UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 14UL;
        } break;
        }
        break;
      case 17:
        localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 72:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 37:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 88UL; }
        } else {
          { _1_OBF_FUNC_next = 99UL; }
        }
        break;
      case 35:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 67UL; }
        } else {
          { _1_OBF_FUNC_next = 77UL; }
        }
        break;
      case 86:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 31:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 42:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 72UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
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
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:switch
