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
  void *_1_OBF_FUNC_jumpTab[138] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab137};
  {
    { _1_OBF_FUNC_next = 88UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab88:
    localStaticState[0UL] = (unsigned int)((unsigned long)input + 546163463UL);
    { _1_OBF_FUNC_next = 12UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab101:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 97UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    case 1UL: {
      _1_OBF_FUNC_next = 92UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    default: {
      _1_OBF_FUNC_next = 44UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab55:
    _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
    { _1_OBF_FUNC_next = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab114:;
    if ((unsigned long)_index2_3 < 3UL) {
      { _1_OBF_FUNC_next = 87UL; }
    } else {
      { _1_OBF_FUNC_next = 65UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    tmp___6 = rand();
    { _1_OBF_FUNC_next = 16UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 79UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab61:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 106UL; }
    } else {
      { _1_OBF_FUNC_next = 53UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab14:
    tmp___7 = rand();
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab57:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab115:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab65:;
    if ((unsigned long)_index2_3 < 3UL) {
      { _1_OBF_FUNC_next = 83UL; }
    } else {
      { _1_OBF_FUNC_next = 63UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab72:
    _induction3_2_2 = 0U;
    { _1_OBF_FUNC_next = 95UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab30:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 55UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab91:
    _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
    { _1_OBF_FUNC_next = 129UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab64:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab82:;
    return ((unsigned int)((unsigned long)localStaticState[0UL] - (unsigned long)localStaticState[1UL] * 542707389UL));
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab23:;
    if ((unsigned long)_index4_8 < 8UL) {
      { _1_OBF_FUNC_next = 85UL; }
    } else {
      { _1_OBF_FUNC_next = 129UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab137:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    { _1_OBF_FUNC_next = 103UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab104:
    localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 119UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab121:
    _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
    { _1_OBF_FUNC_next = 56UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab89:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 134UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab112:
    _index0_3++;
    { _1_OBF_FUNC_next = 53UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab19:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      { _1_OBF_FUNC_next = 29UL; }
    } else {
      { _1_OBF_FUNC_next = 22UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab103:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab131:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 70UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab102:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 131UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    case 1UL: {
      _1_OBF_FUNC_next = 98UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    default: {
      _1_OBF_FUNC_next = 116UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab126:;
    if (tmp___3 % 10 >= 5) {
      { _1_OBF_FUNC_next = 63UL; }
    } else {
      { _1_OBF_FUNC_next = 41UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab22:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 32UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab74:;
    if ((unsigned long)_index2_3 < 3UL) {
      { _1_OBF_FUNC_next = 57UL; }
    } else {
      { _1_OBF_FUNC_next = 59UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab32:
    _index0_3++;
    { _1_OBF_FUNC_next = 108UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab16:;
    if (tmp___6 % 10 >= 5) {
      { _1_OBF_FUNC_next = 40UL; }
    } else {
      { _1_OBF_FUNC_next = 84UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab68:
    _index0_3++;
    { _1_OBF_FUNC_next = 61UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:
    _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
    { _1_OBF_FUNC_next = 63UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab21:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 123UL; }
    } else {
      { _1_OBF_FUNC_next = 108UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab123:
    tmp = rand();
    { _1_OBF_FUNC_next = 17UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab44:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 15UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab111:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab84:
    localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 115UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab92:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      { _1_OBF_FUNC_next = 137UL; }
    } else {
      { _1_OBF_FUNC_next = 103UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab37:
    tmp___4 = rand();
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    { _1_OBF_FUNC_next = 70UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab98:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      { _1_OBF_FUNC_next = 11UL; }
    } else {
      { _1_OBF_FUNC_next = 70UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab87:
    tmp___2 = rand();
    { _1_OBF_FUNC_next = 73UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab40:;
    if ((unsigned long)_index4_8 < 8UL) {
      { _1_OBF_FUNC_next = 14UL; }
    } else {
      { _1_OBF_FUNC_next = 56UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab128:
    localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 64UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab18:;
    if (tmp___7 % 10 >= 5) {
      { _1_OBF_FUNC_next = 56UL; }
    } else {
      { _1_OBF_FUNC_next = 104UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab70:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 112UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab56:;
    if ((unsigned long)_index4_8 < 8UL) {
      { _1_OBF_FUNC_next = 128UL; }
    } else {
      { _1_OBF_FUNC_next = 82UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab59:
    _induction5_4_2 = 0U;
    { _1_OBF_FUNC_next = 76UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab49:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab66:
    localStaticState[1UL] = localStaticState[(unsigned long)_induction5_4_2 % 2UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab130:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 93UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 49UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab63:;
    if ((unsigned long)_index2_3 < 3UL) {
      { _1_OBF_FUNC_next = 37UL; }
    } else {
      { _1_OBF_FUNC_next = 74UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab108:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 130UL; }
    } else {
      { _1_OBF_FUNC_next = 61UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab28:;
    if (tmp___5 % 10 >= 5) {
      { _1_OBF_FUNC_next = 129UL; }
    } else {
      { _1_OBF_FUNC_next = 66UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab39:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab93:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 61UL; }
    } else {
      { _1_OBF_FUNC_next = 34UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab106:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 108UL; }
    } else {
      { _1_OBF_FUNC_next = 101UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab41:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 2UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab76:
    _index4_8 = 0U;
    { _1_OBF_FUNC_next = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab116:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 78UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 35UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    case 1UL: {
      _1_OBF_FUNC_next = 19UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    default: {
      _1_OBF_FUNC_next = 7UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab81:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 30UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab97:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 103UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab83:
    tmp___3 = rand();
    { _1_OBF_FUNC_next = 126UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 53UL; }
    } else {
      { _1_OBF_FUNC_next = 10UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab79:
    _index0_3 = 0U;
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab134:
    _index4_8 = (unsigned int)((unsigned long)_index4_8 + 2UL);
    { _1_OBF_FUNC_next = 40UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab15:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 103UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab80:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 96UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab73:;
    if (tmp___2 % 10 >= 5) {
      { _1_OBF_FUNC_next = 65UL; }
    } else {
      { _1_OBF_FUNC_next = 80UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
    { _1_OBF_FUNC_next = 65UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab12:
    localStaticState[1UL] = (unsigned int)(((unsigned long)input + 694808198UL) - (460487822UL + (133604396UL + (unsigned long)localStaticState[0UL])));
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab129:;
    if ((unsigned long)_index4_8 < 8UL) {
      { _1_OBF_FUNC_next = 1UL; }
    } else {
      { _1_OBF_FUNC_next = 40UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab132:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 39UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
    { _1_OBF_FUNC_next = 74UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab67:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      { _1_OBF_FUNC_next = 111UL; }
    } else {
      { _1_OBF_FUNC_next = 36UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab78:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    { _1_OBF_FUNC_next = 70UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:;
    if (tmp___4 % 10 >= 5) {
      { _1_OBF_FUNC_next = 74UL; }
    } else {
      { _1_OBF_FUNC_next = 100UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 107UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    case 1UL: {
      _1_OBF_FUNC_next = 67UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    default: {
      _1_OBF_FUNC_next = 132UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 91UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab71:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 121UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab85:
    tmp___5 = rand();
    { _1_OBF_FUNC_next = 28UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab96:
    _index2_3 = (unsigned int)((unsigned long)_index2_3 + 2UL);
    { _1_OBF_FUNC_next = 114UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab119:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 89UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab107:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab95:
    _index2_3 = 0U;
    { _1_OBF_FUNC_next = 114UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab100:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab53:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 102UL; }
    } else {
      { _1_OBF_FUNC_next = 72UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab75:
    _index0_3++;
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  }
}
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:indirect-goto
