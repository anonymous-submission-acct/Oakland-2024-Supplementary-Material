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
  void *_1_OBF_FUNC_jumpTab[99] = {&&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99};
  {
    { _1_OBF_FUNC_next = 40UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab34:;
    if (localStaticState[1UL] & 1U) {
      { _1_OBF_FUNC_next = 89UL; }
    } else {
      { _1_OBF_FUNC_next = 69UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab15:
    tmp = rand();
    { _1_OBF_FUNC_next = 97UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab90:
    _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
    { _1_OBF_FUNC_next = 74UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab97:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 8UL; }
    } else {
      { _1_OBF_FUNC_next = 91UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab47:
    localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 26UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab67:
    tmp___3 = rand();
    { _1_OBF_FUNC_next = 54UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab33:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 37UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab17:
    localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab26:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 90UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab91:
    localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 87UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab44:
    _index0_3 = 0U;
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab96:
    _index0_3++;
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab82:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab74:;
    if ((unsigned long)_index2_0 < 0UL) {
      { _1_OBF_FUNC_next = 80UL; }
    } else {
      { _1_OBF_FUNC_next = 35UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab61:
    localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab70:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 24UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab8:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 33UL; }
    } else {
      { _1_OBF_FUNC_next = 88UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab40:
    localStaticState[0UL] = (unsigned int)((unsigned long)input * 1055697178UL + 507474929UL);
    { _1_OBF_FUNC_next = 85UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab36:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab45:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 83UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab86:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 44UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab78:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 73UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab88:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 66UL; }
    } else {
      { _1_OBF_FUNC_next = 45UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab35:;
    if ((unsigned long)_index2_0 < 0UL) {
      { _1_OBF_FUNC_next = 67UL; }
    } else {
      { _1_OBF_FUNC_next = 77UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab24:
    _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
    { _1_OBF_FUNC_next = 31UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab80:
    tmp___2 = rand();
    { _1_OBF_FUNC_next = 92UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab25:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      { _1_OBF_FUNC_next = 49UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab21:;
    return (localStaticState[0UL] + localStaticState[1UL]);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab98:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] -= localStaticState[0UL];
    { _1_OBF_FUNC_next = 50UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab85:
    localStaticState[1UL] = (unsigned int)((unsigned long)input - 249371270UL);
    { _1_OBF_FUNC_next = 1UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab16:
    tmp___4 = rand();
    { _1_OBF_FUNC_next = 9UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab38:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab89:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[1UL];
    { _1_OBF_FUNC_next = 39UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab84:;
    switch ((unsigned long)((int)localStaticState[1UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 76UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    case 1UL: {
      _1_OBF_FUNC_next = 60UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    default: {
      _1_OBF_FUNC_next = 25UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab68:
    _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
    { _1_OBF_FUNC_next = 35UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab49:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab76:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 59UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab83:
    localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 78UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab77:;
    if ((unsigned long)_index2_0 < 0UL) {
      { _1_OBF_FUNC_next = 16UL; }
    } else {
      { _1_OBF_FUNC_next = 31UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab9:;
    if (tmp___4 % 10 >= 5) {
      { _1_OBF_FUNC_next = 31UL; }
    } else {
      { _1_OBF_FUNC_next = 43UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab66:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 12UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab55:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 32UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab39:
    localStaticState[0UL] *= localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 69UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab32:
    _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
    { _1_OBF_FUNC_next = 77UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab19:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab11:;
    if ((unsigned long)_index0_3 < 3UL) {
      { _1_OBF_FUNC_next = 15UL; }
    } else {
      { _1_OBF_FUNC_next = 8UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab87:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 96UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab71:
    _index0_3++;
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab95:
    localStaticState[1UL] += localStaticState[1UL];
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab3:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
    { _1_OBF_FUNC_next = 61UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab62:
    localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 55UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab69:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      { _1_OBF_FUNC_next = 42UL; }
    } else {
      { _1_OBF_FUNC_next = 84UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab42:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 72UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab31:;
    if ((unsigned long)_index2_0 < 0UL) {
      { _1_OBF_FUNC_next = 19UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab72:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[0UL];
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab46:
    _index2_0 = 0U;
    { _1_OBF_FUNC_next = 74UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab50:;
    if (localStaticState[0UL] & 1U) {
      { _1_OBF_FUNC_next = 95UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab73:
    _index0_3++;
    { _1_OBF_FUNC_next = 45UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab81:
    _index0_3++;
    { _1_OBF_FUNC_next = 88UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab43:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] * localStaticState[0UL];
    { _1_OBF_FUNC_next = 62UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab59:
    localStaticState[1UL] += localStaticState[1UL];
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab60:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab75:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab14:
    _induction3_2_2 = 0U;
    { _1_OBF_FUNC_next = 46UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab12:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 45UL; }
    } else {
      { _1_OBF_FUNC_next = 17UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab1:;
    if ((localStaticState[0UL] >> 1U) & 1U) {
      { _1_OBF_FUNC_next = 86UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab99:
    localStaticState[_induction1_0_2] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab37:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 88UL; }
    } else {
      { _1_OBF_FUNC_next = 99UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab54:;
    if (tmp___3 % 10 >= 5) {
      { _1_OBF_FUNC_next = 77UL; }
    } else {
      { _1_OBF_FUNC_next = 3UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab13:;
    switch ((unsigned long)((int)localStaticState[1UL]) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 98UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    case 1UL: {
      _1_OBF_FUNC_next = 34UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    default: {
      _1_OBF_FUNC_next = 14UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab92:;
    if (tmp___2 % 10 >= 5) {
      { _1_OBF_FUNC_next = 35UL; }
    } else {
      { _1_OBF_FUNC_next = 82UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab18:
    localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 70UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
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
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:indirect-goto
