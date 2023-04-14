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
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 15UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 15:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 276835458UL) - 575082560UL);
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 10:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 21:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 0:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 5:
        _index6_0++;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 30:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 19:
        _index2_4 = 0U;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 37:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 13:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[(unsigned long)_index6_0 % 2UL];
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 6:
        localStaticState[1UL] = (unsigned int)((unsigned long)input * ((unsigned long)localStaticState[0UL] + 436519216UL));
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 29:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 2:
        _index0_3 = (unsigned int)((unsigned long)_index0_3 + 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 32:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] *= localStaticState[1UL];
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 3:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 26:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 30UL; }
        }
        break;
      case 1:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 21UL; }
        }
        break;
      case 9:
        localStaticState[_induction1_0_2] += localStaticState[1UL];
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 17:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 33:
        localStaticState[(unsigned long)_index2_4 % 2UL] = localStaticState[_induction5_4_2] - localStaticState[(unsigned long)_index6_0 % 2UL];
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 11:
        localStaticState[_induction3_2_2] = localStaticState[(unsigned long)_index2_4 % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 4:;
        if ((localStaticState[1UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 13UL; }
        }
        break;
      case 20:;
        if ((unsigned long)_index2_4 < 4UL) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 32UL; }
        }
        break;
      case 38:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 24:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 23:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 31:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 3UL; }
        }
        break;
      case 12:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_index4_0] + localStaticState[1UL];
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 7:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 34:
        _index2_4 = (unsigned int)((unsigned long)_index2_4 + 2UL);
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 18:;
        return ((localStaticState[0UL] - localStaticState[1UL]) - 1879284913U);
        break;
      case 8:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 2UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
