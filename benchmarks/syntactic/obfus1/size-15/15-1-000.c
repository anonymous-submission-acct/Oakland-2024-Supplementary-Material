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
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 36UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 38:;
        if ((unsigned long)_index2_2 < 2UL) {
          { _1_OBF_FUNC_next = 31UL; }
        } else {
          { _1_OBF_FUNC_next = 28UL; }
        }
        break;
      case 40:;
        if (!((localStaticState[0UL] >> 2U) & 1U)) {
          { _1_OBF_FUNC_next = 12UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 27:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 14:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 8:
        _index2_2 = 0U;
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 2:
        localStaticState[1UL] = localStaticState[_index2_2] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 4:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 29:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] - localStaticState[0UL];
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 28:;
        return ((localStaticState[0UL] - localStaticState[1UL]) + 433909550U);
        break;
      case 5:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 11:
        localStaticState[_induction3_2_2] = localStaticState[_index2_2] * localStaticState[(unsigned long)_induction3_2_2 % 2UL];
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 34:
        localStaticState[1UL] = (unsigned int)((unsigned long)input + (574658530UL + (unsigned long)localStaticState[0UL]));
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 39:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 7:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 30:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 1:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 36:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 1050607161UL) - 662284716UL);
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 9:;
        if ((localStaticState[0UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 33:;
        if (!((localStaticState[0UL] >> 1U) & 1U)) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 12:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 22:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 37UL; }
        } else {
          { _1_OBF_FUNC_next = 33UL; }
        }
        break;
      case 37:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 17:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[_index2_2];
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 18:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 24:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 32:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 28UL; }
        }
        break;
      case 26:;
        if ((unsigned long)_index0_4 < 4UL) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 32UL; }
        }
        break;
      case 20:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 21:
        _index0_4 = 0U;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 19:
        _index0_4 = (unsigned int)((unsigned long)_index0_4 + 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 10:
        _index2_2++;
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 3:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 31:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
