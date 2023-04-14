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
  unsigned int _index0_0;
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[47] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46};
  {
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab39:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 24UL; }
    } else {
      { _1_OBF_FUNC_next = 30UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 42UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab14:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 11UL; }
    } else {
      { _1_OBF_FUNC_next = 39UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 16UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab24:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab37:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      { _1_OBF_FUNC_next = 3UL; }
    } else {
      { _1_OBF_FUNC_next = 43UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab40:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 39UL; }
    } else {
      { _1_OBF_FUNC_next = 1UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 15UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab43:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 17UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    _index0_0++;
    { _1_OBF_FUNC_next = 30UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab13:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      { _1_OBF_FUNC_next = 34UL; }
    } else {
      { _1_OBF_FUNC_next = 7UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab42:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 2UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab45:;
    return (localStaticState[0UL] + localStaticState[1UL]);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:
    _index0_0++;
    { _1_OBF_FUNC_next = 6UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab23:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 46UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:
    localStaticState[0UL] = input + 1761416874U;
    { _1_OBF_FUNC_next = 4UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 28UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab46:
    _index0_0 = 0U;
    { _1_OBF_FUNC_next = 14UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab22:
    _index0_0++;
    { _1_OBF_FUNC_next = 39UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 37UL; }
    } else {
      { _1_OBF_FUNC_next = 41UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 6UL; }
    } else {
      { _1_OBF_FUNC_next = 32UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      { _1_OBF_FUNC_next = 23UL; }
    } else {
      { _1_OBF_FUNC_next = 28UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab28:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:
    _index0_0++;
    { _1_OBF_FUNC_next = 14UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:
    localStaticState[1UL] = (input + localStaticState[0UL]) + 3909065487U;
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:
    tmp = rand();
    { _1_OBF_FUNC_next = 40UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab15:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 7UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab41:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
    { _1_OBF_FUNC_next = 45UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab30:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 29UL; }
    } else {
      { _1_OBF_FUNC_next = 6UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab32:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      { _1_OBF_FUNC_next = 35UL; }
    } else {
      { _1_OBF_FUNC_next = 2UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab16:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 43UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  }
}
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:indirect-goto
