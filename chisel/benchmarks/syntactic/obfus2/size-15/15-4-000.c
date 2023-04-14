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
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[159] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158};
  {
    { _1_OBF_FUNC_next = 105UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab45:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab105:
    localStaticState[0UL] = (unsigned int)((unsigned long)input + 814135068UL);
    { _1_OBF_FUNC_next = 157UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab146:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 6UL; }
    } else {
      { _1_OBF_FUNC_next = 1UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab72:
    _index0_1++;
    { _1_OBF_FUNC_next = 98UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab157:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + 81067353UL);
    { _1_OBF_FUNC_next = 54UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab55:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 102UL; }
    } else {
      { _1_OBF_FUNC_next = 135UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:
    _index2_4++;
    { _1_OBF_FUNC_next = 66UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab114:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 154UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab54:;
    switch ((unsigned long)((int)(localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL])) % 4UL) {
    case 0UL: {
      _1_OBF_FUNC_next = 122UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    case 1UL: {
      _1_OBF_FUNC_next = 79UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    default: {
      _1_OBF_FUNC_next = 136UL;
    }
      { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab73:;
    if ((unsigned long)_index4_3 < 3UL) {
      { _1_OBF_FUNC_next = 7UL; }
    } else {
      { _1_OBF_FUNC_next = 144UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab83:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 90UL; }
    } else {
      { _1_OBF_FUNC_next = 2UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab98:;
    if ((unsigned long)_index0_1 < 1UL) {
      { _1_OBF_FUNC_next = 43UL; }
    } else {
      { _1_OBF_FUNC_next = 65UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab90:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 99UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab103:
    localStaticState[1UL] += localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 63UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab99:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 21UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab127:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 40UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab64:;
    if (tmp___2 % 10 >= 5) {
      { _1_OBF_FUNC_next = 134UL; }
    } else {
      { _1_OBF_FUNC_next = 107UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab92:
    _index0_1++;
    { _1_OBF_FUNC_next = 117UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab68:
    _index6_2++;
    { _1_OBF_FUNC_next = 137UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab139:
    tmp___6 = rand();
    { _1_OBF_FUNC_next = 112UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab50:;
    if ((unsigned long)_index6_2 < 2UL) {
      { _1_OBF_FUNC_next = 51UL; }
    } else {
      { _1_OBF_FUNC_next = 153UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab136:;
    if (!((localStaticState[0UL] >> 2U) & 1U)) {
      { _1_OBF_FUNC_next = 17UL; }
    } else {
      { _1_OBF_FUNC_next = 89UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab77:
    localStaticState[1UL] += localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 87UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab123:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab51:
    tmp___7 = rand();
    { _1_OBF_FUNC_next = 130UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab38:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 69UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:
    tmp = rand();
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab109:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 57UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab66:;
    if ((unsigned long)_index2_4 < 4UL) {
      { _1_OBF_FUNC_next = 5UL; }
    } else {
      { _1_OBF_FUNC_next = 35UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab113:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    tmp___4 = rand();
    { _1_OBF_FUNC_next = 85UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab59:;
    if ((unsigned long)_index6_2 < 2UL) {
      { _1_OBF_FUNC_next = 120UL; }
    } else {
      { _1_OBF_FUNC_next = 137UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab100:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 72UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab86:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_next = 138UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    _index2_4++;
    { _1_OBF_FUNC_next = 35UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab145:
    _index6_2++;
    { _1_OBF_FUNC_next = 59UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 158UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab43:
    tmp___9 = rand();
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab138:;
    return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) + 3859644522L));
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab137:;
    if ((unsigned long)_index6_2 < 2UL) {
      { _1_OBF_FUNC_next = 139UL; }
    } else {
      { _1_OBF_FUNC_next = 50UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab80:
    _index2_4 = 0U;
    { _1_OBF_FUNC_next = 66UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab44:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab42:;
    if (tmp___5 % 10 >= 5) {
      { _1_OBF_FUNC_next = 137UL; }
    } else {
      { _1_OBF_FUNC_next = 96UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab134:;
    if ((unsigned long)_index4_3 < 3UL) {
      { _1_OBF_FUNC_next = 14UL; }
    } else {
      { _1_OBF_FUNC_next = 73UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab91:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 99UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 44UL; }
    } else {
      { _1_OBF_FUNC_next = 152UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab79:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 62UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab62:
    _index0_1 = 0U;
    { _1_OBF_FUNC_next = 117UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab154:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 92UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab9:
    tmp___8 = rand();
    { _1_OBF_FUNC_next = 56UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab149:;
    if (tmp___3 % 10 >= 5) {
      { _1_OBF_FUNC_next = 73UL; }
    } else {
      { _1_OBF_FUNC_next = 55UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab152:
    localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 123UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:
    _induction7_6_2 = 0U;
    { _1_OBF_FUNC_next = 148UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab60:
    _index0_1++;
    { _1_OBF_FUNC_next = 65UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab85:;
    if (tmp___4 % 10 >= 5) {
      { _1_OBF_FUNC_next = 144UL; }
    } else {
      { _1_OBF_FUNC_next = 36UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab128:;
    if (tmp___10 % 10 >= 5) {
      { _1_OBF_FUNC_next = 115UL; }
    } else {
      { _1_OBF_FUNC_next = 74UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab96:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 145UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab97:
    _index4_3 = 0U;
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab135:
    localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 127UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab81:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab16:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 146UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 89UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab69:
    _index0_1++;
    { _1_OBF_FUNC_next = 115UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab47:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 12UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab13:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 35UL; }
    } else {
      { _1_OBF_FUNC_next = 150UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab126:;
    if ((unsigned long)_index2_4 < 4UL) {
      { _1_OBF_FUNC_next = 16UL; }
    } else {
      { _1_OBF_FUNC_next = 6UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab155:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:;
    if ((unsigned long)_index2_4 < 4UL) {
      { _1_OBF_FUNC_next = 113UL; }
    } else {
      { _1_OBF_FUNC_next = 126UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab107:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 147UL; }
    } else {
      { _1_OBF_FUNC_next = 82UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab117:;
    if ((unsigned long)_index0_1 < 1UL) {
      { _1_OBF_FUNC_next = 9UL; }
    } else {
      { _1_OBF_FUNC_next = 98UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:;
    if ((unsigned long)_index4_3 < 3UL) {
      { _1_OBF_FUNC_next = 156UL; }
    } else {
      { _1_OBF_FUNC_next = 134UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab65:;
    if ((unsigned long)_index0_1 < 1UL) {
      { _1_OBF_FUNC_next = 124UL; }
    } else {
      { _1_OBF_FUNC_next = 115UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab12:
    _index4_3++;
    { _1_OBF_FUNC_next = 73UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:
    _induction5_4_2 = 0U;
    { _1_OBF_FUNC_next = 97UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab115:;
    if ((unsigned long)_index0_1 < 1UL) {
      { _1_OBF_FUNC_next = 155UL; }
    } else {
      { _1_OBF_FUNC_next = 138UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab75:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 126UL; }
    } else {
      { _1_OBF_FUNC_next = 103UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 61UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab130:;
    if (tmp___7 % 10 >= 5) {
      { _1_OBF_FUNC_next = 153UL; }
    } else {
      { _1_OBF_FUNC_next = 109UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab39:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab21:
    _index4_3++;
    { _1_OBF_FUNC_next = 144UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab147:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab124:
    tmp___10 = rand();
    { _1_OBF_FUNC_next = 128UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 60UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:
    _index6_2++;
    { _1_OBF_FUNC_next = 153UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab87:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 110UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab31:
    _index4_3++;
    { _1_OBF_FUNC_next = 134UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab153:;
    if ((unsigned long)_index6_2 < 2UL) {
      { _1_OBF_FUNC_next = 26UL; }
    } else {
      { _1_OBF_FUNC_next = 138UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab71:;
    if (tmp___9 % 10 >= 5) {
      { _1_OBF_FUNC_next = 65UL; }
    } else {
      { _1_OBF_FUNC_next = 0UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab120:
    tmp___5 = rand();
    { _1_OBF_FUNC_next = 42UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab89:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] - localStaticState[1UL];
    { _1_OBF_FUNC_next = 86UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab56:;
    if (tmp___8 % 10 >= 5) {
      { _1_OBF_FUNC_next = 98UL; }
    } else {
      { _1_OBF_FUNC_next = 114UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab150:
    localStaticState[1UL] += localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab144:;
    if ((unsigned long)_index4_3 < 3UL) {
      { _1_OBF_FUNC_next = 83UL; }
    } else {
      { _1_OBF_FUNC_next = 10UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:;
    if ((unsigned long)_index2_4 < 4UL) {
      { _1_OBF_FUNC_next = 77UL; }
    } else {
      { _1_OBF_FUNC_next = 8UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    localStaticState[1UL] += localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab82:
    localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 39UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab102:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)_induction5_4_2 % 2UL];
    { _1_OBF_FUNC_next = 40UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab57:
    _index6_2++;
    { _1_OBF_FUNC_next = 50UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab63:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab74:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab110:
    _index2_4++;
    { _1_OBF_FUNC_next = 6UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 100UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab148:
    _index6_2 = 0U;
    { _1_OBF_FUNC_next = 59UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab156:
    tmp___2 = rand();
    { _1_OBF_FUNC_next = 64UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab122:
    _induction3_2_2 = 0U;
    { _1_OBF_FUNC_next = 80UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab14:
    tmp___3 = rand();
    { _1_OBF_FUNC_next = 149UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab158:
    _index4_3++;
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab61:
    _index2_4++;
    { _1_OBF_FUNC_next = 126UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    { _1_OBF_FUNC_next = 91UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab112:;
    if (tmp___6 % 10 >= 5) {
      { _1_OBF_FUNC_next = 50UL; }
    } else {
      { _1_OBF_FUNC_next = 45UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab40:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 31UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab26:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 4UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
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
