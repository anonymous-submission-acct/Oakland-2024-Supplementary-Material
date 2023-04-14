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
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 9UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 12:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 11:
        _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 22:
        localStaticState[1UL] = (unsigned int)((unsigned long)input - 368257686UL);
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 16:;
        if ((localStaticState[0UL] >> 2U) & 1U) {
          { _1_OBF_FUNC_next = 5UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 15:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 25:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 20:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 4:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 12UL; }
        }
        break;
      case 13:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 5:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] *= localStaticState[1UL];
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 1:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 6:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 7:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 24:
        localStaticState[1UL] *= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 23:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next = 16UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 14:
        localStaticState[(unsigned long)_index0_3 % 2UL] += localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 19:;
        return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) - 4131362848L));
        break;
      case 0:
        _index4_0++;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 17:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next = 23UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 9:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input - 752198737UL) + 550572913UL);
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 27:;
        if (!((localStaticState[1UL] >> 4U) & 1U)) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 8:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 28:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 3:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 10:
        _index0_3++;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      }
    }
  }
}
// variants: flatten
// expanded variants: flatten:switch
