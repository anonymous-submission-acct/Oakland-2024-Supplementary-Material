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
  unsigned long _1_OBF_FUNC_next;
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 10UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 77:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 25:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 52:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 43:;
        {
          _1_OBF_FUNC_next___0 = 38UL;
        }
        break;
      case 51:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 44:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 75:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 53:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 42:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 8:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 54:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 70:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 12UL; }
        break;
      case 69:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)_index0_3 % 2UL];
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 46:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 27:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 31:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 59:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 40:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 72:
        localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_index0_3 % 2UL] * localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 41:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 14:
        localStaticState[_induction1_0_2] += localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 48:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 9UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 18UL; }
        }
        break;
      case 6:
        localStaticState[1UL] = input * localStaticState[0UL] - 1897958079U;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 26:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 61:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 56:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 35:
        localStaticState[_induction1_0_2] = localStaticState[1UL] - localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 11:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 45:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 21:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 10:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 30:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 9:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 18:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 66:;
        {
          _1_OBF_FUNC_next___0 = 64UL;
        }
        break;
      case 38:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 44UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 57UL; }
        }
        break;
      case 15:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 3:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 64:;
        return (localStaticState[0UL] * localStaticState[1UL] - 1015278320U);
        break;
      case 12:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 0:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 7:;
        switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 6UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 26UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 11UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 28UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 41UL;
        } break;
        }
        break;
      case 34:;
        switch (_1_OBF_FUNC_next) {
        case 6UL: {
          _1_OBF_FUNC_next___0 = 66UL;
        } break;
        case 18UL: {
          _1_OBF_FUNC_next___0 = 35UL;
        } break;
        case 12UL: {
          _1_OBF_FUNC_next___0 = 0UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 15UL;
        } break;
        case 26UL: {
          _1_OBF_FUNC_next___0 = 39UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 8UL;
        } break;
        case 15UL: {
          _1_OBF_FUNC_next___0 = 69UL;
        } break;
        case 17UL: {
          _1_OBF_FUNC_next___0 = 43UL;
        } break;
        case 5UL: {
          _1_OBF_FUNC_next___0 = 61UL;
        } break;
        case 20UL: {
          _1_OBF_FUNC_next___0 = 6UL;
        } break;
        case 13UL: {
          _1_OBF_FUNC_next___0 = 62UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 52UL;
        } break;
        case 23UL: {
          _1_OBF_FUNC_next___0 = 74UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 50UL;
        } break;
        case 25UL: {
          _1_OBF_FUNC_next___0 = 72UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 22UL;
        } break;
        case 21UL: {
          _1_OBF_FUNC_next___0 = 14UL;
        } break;
        case 11UL: {
          _1_OBF_FUNC_next___0 = 27UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 70UL;
        } break;
        case 19UL: {
          _1_OBF_FUNC_next___0 = 51UL;
        } break;
        case 14UL: {
          _1_OBF_FUNC_next___0 = 77UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 34UL;
        } break;
        }
        break;
      case 57:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 62:;
        {
          _1_OBF_FUNC_next___0 = 7UL;
        }
        break;
      case 39:
        localStaticState[_induction1_0_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 22:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 50:;
        {
          _1_OBF_FUNC_next___0 = 48UL;
        }
        break;
      case 13:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 65:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 28:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 74:
        localStaticState[0UL] = input - 120651548U;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:switch, irrelevant-code, flatten:switch
