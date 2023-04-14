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
  unsigned long _1_OBF_FUNC_next;
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 41UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 44:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 29:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 16:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 304302104UL) + 3878855248UL);
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = 28UL;
        }
        break;
      case 8:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 43:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 24:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 9:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 19:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)_index0_3 % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 41:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 17:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 6:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 12UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 24UL; }
        }
        break;
      case 22:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 42:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 21:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 32:;
        {
          _1_OBF_FUNC_next___0 = 6UL;
        }
        break;
      case 36:;
        if (!((localStaticState[0UL] >> 1U) & 1U)) {
          { _1_OBF_FUNC_next___0 = 42UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 15UL; }
        }
        break;
      case 0:;
        return ((localStaticState[0UL] + localStaticState[1UL]) - 1792313359U);
        break;
      case 12:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 40:;
        {
          _1_OBF_FUNC_next___0 = 36UL;
        }
        break;
      case 3:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 30:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 14:
        localStaticState[1UL] = (unsigned int)((unsigned long)input + (212242731UL - (unsigned long)localStaticState[0UL]));
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 28:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next___0 = 39UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 10UL; }
        }
        break;
      case 15:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 10:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 11:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 38:;
        {
          _1_OBF_FUNC_next___0 = 0UL;
        }
        break;
      case 35:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 44UL; }
        break;
      case 34:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 20:;
        switch (_1_OBF_FUNC_next) {
        case 3UL: {
          _1_OBF_FUNC_next___0 = 35UL;
        } break;
        case 6UL: {
          _1_OBF_FUNC_next___0 = 40UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 16UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 27UL;
        } break;
        case 13UL: {
          _1_OBF_FUNC_next___0 = 30UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 22UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 8UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 14UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 32UL;
        } break;
        case 12UL: {
          _1_OBF_FUNC_next___0 = 19UL;
        } break;
        case 5UL: {
          _1_OBF_FUNC_next___0 = 3UL;
        } break;
        case 4UL: {
          _1_OBF_FUNC_next___0 = 38UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 20UL;
        } break;
        }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:switch, irrelevant-code, flatten:switch
