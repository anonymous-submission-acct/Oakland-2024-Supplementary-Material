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
  unsigned int _index0_0;
  int __RANDVAR__367936028393140181__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[37] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36};
  {
    { _1_OBF_FUNC_next = 26UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:
    localStaticState[1UL] = (unsigned int)(((unsigned long)input - 203512587UL) - (unsigned long)(localStaticState[0UL] - 1091850798U));
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 7UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab28:
    _index0_0 = 0U;
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab24:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab23:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 5UL; }
    } else {
      { _1_OBF_FUNC_next = 10UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    __RANDVAR__367936028393140181__ = 0;
    { _1_OBF_FUNC_next = 19UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab26:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 8665136UL) * 3454496844UL);
    { _1_OBF_FUNC_next = 17UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 2UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab12:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab31:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 4UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 28UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 1UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab22:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab19:;
    if (__RANDVAR__367936028393140181__ == 0) {
      { _1_OBF_FUNC_next = 14UL; }
    } else {
      { _1_OBF_FUNC_next = 36UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab14:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_next = 4UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 33UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab13:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 29UL; }
    } else {
      { _1_OBF_FUNC_next = 27UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab30:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 31UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab18:
    _index0_0 = (unsigned int)((unsigned long)_index0_0 + 2UL);
    { _1_OBF_FUNC_next = 6UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:;
    return (localStaticState[0UL] - localStaticState[1UL]);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 12UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab25:
    localStaticState[_index0_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    __RANDVAR__367936028393140181__ = 1;
    { _1_OBF_FUNC_next = 19UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab21:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 25UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 24UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:;
    if ((unsigned long)_index0_0 < 0UL) {
      { _1_OBF_FUNC_next = 35UL; }
    } else {
      { _1_OBF_FUNC_next = 6UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  }
}
// variants: loop-unroll, irrelevant-code, flatten
// expanded variants: loop-unroll, irrelevant-code, flatten:indirect-goto
