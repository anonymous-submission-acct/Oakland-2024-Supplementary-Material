typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  int __RANDVAR__27188823598366698084__;
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  int __RANDVAR__77394083383820450086__;
  unsigned int _induction5_4_2;
  int __RANDVAR__28984750691011006130__;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  int __RANDVAR__7751246028242179375__;
  int __RANDVAR__72664576328095185186__;
  int __RANDVAR__75910029291163094976__;
  int __RANDVAR__62799003119145353765__;
  int __RANDVAR__93600706860354515143__;
  int __RANDVAR__5146168435190416333__;
  int __RANDVAR__66035250539181168911__;
  int __RANDVAR__16965867042611242927__;
  int __RANDVAR__24896731721301410449__;
  int __RANDVAR__2987264873004998799__;
  int __RANDVAR__73380327021112276690__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[101] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab100};
  {
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab83:
    __RANDVAR__7751246028242179375__ -= 922;
    { _1_OBF_FUNC_next = 63UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab49:;
    if ((unsigned long)_index6_0 < 0UL) {
      { _1_OBF_FUNC_next = 91UL; }
    } else {
      { _1_OBF_FUNC_next = 33UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:;
    if ((845 - __RANDVAR__28984750691011006130__) * (473 + __RANDVAR__28984750691011006130__) < __RANDVAR__27188823598366698084__) {
      { _1_OBF_FUNC_next = 87UL; }
    } else {
      { _1_OBF_FUNC_next = 73UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab38:
    _index6_0 = 0U;
    { _1_OBF_FUNC_next = 49UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:
    __RANDVAR__7751246028242179375__ += 964;
    { _1_OBF_FUNC_next = 52UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab60:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + (574658530UL + (unsigned long)localStaticState[0UL]));
    { _1_OBF_FUNC_next = 61UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab61:
    __RANDVAR__7751246028242179375__ = __RANDVAR__27188823598366698084__;
    { _1_OBF_FUNC_next = 51UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab55:
    __RANDVAR__27188823598366698084__ -= 373;
    { _1_OBF_FUNC_next = 28UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab21:
    __RANDVAR__27188823598366698084__ -= 727;
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab72:
    __RANDVAR__66035250539181168911__ *= 137;
    { _1_OBF_FUNC_next = 78UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab94:
    __RANDVAR__7751246028242179375__ -= 65;
    { _1_OBF_FUNC_next = 30UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab9:
    __RANDVAR__27188823598366698084__ += 5;
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab97:
    __RANDVAR__27188823598366698084__ += 27;
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab74:
    __RANDVAR__27188823598366698084__ += 322;
    { _1_OBF_FUNC_next = 16UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab2:
    __RANDVAR__27188823598366698084__ -= 777;
    { _1_OBF_FUNC_next = 69UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab57:
    _induction5_4_2 = 0U;
    { _1_OBF_FUNC_next = 7UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab75:;
    if ((localStaticState[0UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 46UL; }
    } else {
      { _1_OBF_FUNC_next = 33UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab63:;
    return ((localStaticState[0UL] - localStaticState[1UL]) + 433909550U);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab79:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab51:
    _induction1_0_2 = 0U;
    { _1_OBF_FUNC_next = 45UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab44:
    __RANDVAR__62799003119145353765__++;
    { _1_OBF_FUNC_next = 57UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab73:
    __RANDVAR__27188823598366698084__ -= 27;
    { _1_OBF_FUNC_next = 97UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab24:
    __RANDVAR__66035250539181168911__ -= 62;
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab30:
    __RANDVAR__7751246028242179375__ += 65;
    { _1_OBF_FUNC_next = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab88:
    __RANDVAR__93600706860354515143__ = 45003088;
    { _1_OBF_FUNC_next = 50UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab18:;
    if (__RANDVAR__27188823598366698084__ < 761 + __RANDVAR__27188823598366698084__) {
      { _1_OBF_FUNC_next = 41UL; }
    } else {
      { _1_OBF_FUNC_next = 80UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab100:;
    if (__RANDVAR__7751246028242179375__ < 71 - 380 * __RANDVAR__7751246028242179375__) {
      { _1_OBF_FUNC_next = 17UL; }
    } else {
      { _1_OBF_FUNC_next = 59UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab69:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 1050607161UL) - 662284716UL);
    { _1_OBF_FUNC_next = 55UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab50:
    _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab84:
    _index0_4 = (unsigned int)((unsigned long)_index0_4 + 2UL);
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:;
    if (__RANDVAR__27188823598366698084__ < __RANDVAR__27188823598366698084__ * 44 + 889) {
      { _1_OBF_FUNC_next = 96UL; }
    } else {
      { _1_OBF_FUNC_next = 4UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:;
    if (__RANDVAR__27188823598366698084__ < 977) {
      { _1_OBF_FUNC_next = 43UL; }
    } else {
      { _1_OBF_FUNC_next = 12UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab67:;
    if (-133 * (__RANDVAR__27188823598366698084__ + __RANDVAR__7751246028242179375__) < 512) {
      { _1_OBF_FUNC_next = 94UL; }
    } else {
      { _1_OBF_FUNC_next = 42UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab7:
    _index4_0 = 0U;
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab15:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[_induction7_6_2];
    { _1_OBF_FUNC_next = 90UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab16:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      { _1_OBF_FUNC_next = 77UL; }
    } else {
      { _1_OBF_FUNC_next = 25UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab48:
    __RANDVAR__7751246028242179375__ -= 487;
    { _1_OBF_FUNC_next = 31UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 29UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab31:
    __RANDVAR__7751246028242179375__ += 487;
    { _1_OBF_FUNC_next = 62UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab78:;
    if (985 + __RANDVAR__27188823598366698084__ < __RANDVAR__66035250539181168911__) {
      { _1_OBF_FUNC_next = 32UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab43:
    __RANDVAR__27188823598366698084__ -= 891;
    { _1_OBF_FUNC_next = 86UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab59:
    __RANDVAR__7751246028242179375__ -= 833;
    { _1_OBF_FUNC_next = 89UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab28:
    __RANDVAR__27188823598366698084__ += 373;
    { _1_OBF_FUNC_next = 60UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab71:;
    if ((unsigned long)_index4_0 < 0UL) {
      { _1_OBF_FUNC_next = 95UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
    { _1_OBF_FUNC_next = 49UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab77:
    _induction3_2_2 = 0U;
    { _1_OBF_FUNC_next = 76UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab32:
    __RANDVAR__16965867042611242927__ = __RANDVAR__7751246028242179375__;
    { _1_OBF_FUNC_next = 99UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab91:
    localStaticState[_induction3_2_2] = localStaticState[_index2_2] * localStaticState[(unsigned long)_induction3_2_2 % 2UL];
    { _1_OBF_FUNC_next = 15UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:
    __RANDVAR__75910029291163094976__ = 815;
    { _1_OBF_FUNC_next = 70UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab47:;
    if ((unsigned long)_index2_2 < 2UL) {
      { _1_OBF_FUNC_next = 6UL; }
    } else {
      { _1_OBF_FUNC_next = 25UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab80:
    __RANDVAR__77394083383820450086__ = (__RANDVAR__77394083383820450086__ - 960) - 182;
    { _1_OBF_FUNC_next = 54UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab14:
    __RANDVAR__66035250539181168911__ += 62;
    { _1_OBF_FUNC_next = 24UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab54:
    __RANDVAR__28984750691011006130__ = __RANDVAR__27188823598366698084__ - __RANDVAR__28984750691011006130__;
    { _1_OBF_FUNC_next = 1UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab82:
    _induction7_6_2 = 0U;
    { _1_OBF_FUNC_next = 56UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab99:;
    if (__RANDVAR__27188823598366698084__ < __RANDVAR__66035250539181168911__) {
      { _1_OBF_FUNC_next = 0UL; }
    } else {
      { _1_OBF_FUNC_next = 14UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab76:
    _index2_2 = 0U;
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab81:
    __RANDVAR__27188823598366698084__ += 340;
    { _1_OBF_FUNC_next = 54UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab90:
    __RANDVAR__73380327021112276690__ = __RANDVAR__7751246028242179375__ * -437;
    { _1_OBF_FUNC_next = 79UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab12:
    __RANDVAR__27188823598366698084__ += 568;
    { _1_OBF_FUNC_next = 64UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab42:
    __RANDVAR__72664576328095185186__ = 720;
    { _1_OBF_FUNC_next = 23UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab86:
    __RANDVAR__27188823598366698084__ += 891;
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab45:
    _index0_4 = 0U;
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab56:;
    if ((__RANDVAR__7751246028242179375__ + 190) + (__RANDVAR__27188823598366698084__ + 789) < __RANDVAR__27188823598366698084__) {
      { _1_OBF_FUNC_next = 72UL; }
    } else {
      { _1_OBF_FUNC_next = 37UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab70:;
    if (__RANDVAR__27188823598366698084__ * __RANDVAR__75910029291163094976__ + (__RANDVAR__75910029291163094976__ + 3) < 363) {
      { _1_OBF_FUNC_next = 93UL; }
    } else {
      { _1_OBF_FUNC_next = 100UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab96:
    __RANDVAR__27188823598366698084__ += 777;
    { _1_OBF_FUNC_next = 2UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab37:
    __RANDVAR__2987264873004998799__ *= 181;
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab89:
    __RANDVAR__7751246028242179375__ += 833;
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab64:
    __RANDVAR__27188823598366698084__ -= 568;
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab23:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] - localStaticState[0UL];
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab22:
    __RANDVAR__27188823598366698084__ -= 322;
    { _1_OBF_FUNC_next = 74UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab3:
    __RANDVAR__27188823598366698084__ -= 5;
    { _1_OBF_FUNC_next = 9UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab13:
    __RANDVAR__5146168435190416333__ = 813;
    { _1_OBF_FUNC_next = 53UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab66:
    __RANDVAR__28984750691011006130__ -= 105;
    { _1_OBF_FUNC_next = 5UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab25:
    __RANDVAR__7751246028242179375__ += 922;
    { _1_OBF_FUNC_next = 83UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab93:
    __RANDVAR__27188823598366698084__ -= 426;
    { _1_OBF_FUNC_next = 98UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab98:
    __RANDVAR__27188823598366698084__ += 426;
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:
    __RANDVAR__27188823598366698084__ = (92 - __RANDVAR__27188823598366698084__) - __RANDVAR__27188823598366698084__;
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab46:
    localStaticState[1UL] = localStaticState[_index2_2] + localStaticState[_induction3_2_2];
    { _1_OBF_FUNC_next = 48UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab52:
    __RANDVAR__7751246028242179375__ -= 964;
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab10:;
    if ((unsigned long)_index0_4 < 4UL) {
      { _1_OBF_FUNC_next = 67UL; }
    } else {
      { _1_OBF_FUNC_next = 22UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:;
    if (!((localStaticState[0UL] >> 2U) & 1U)) {
      { _1_OBF_FUNC_next = 82UL; }
    } else {
      { _1_OBF_FUNC_next = 33UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab53:;
    if (!((localStaticState[0UL] >> 1U) & 1U)) {
      { _1_OBF_FUNC_next = 3UL; }
    } else {
      { _1_OBF_FUNC_next = 33UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab95:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 88UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:
    __RANDVAR__27188823598366698084__ += 921;
    { _1_OBF_FUNC_next = 69UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab68:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      { _1_OBF_FUNC_next = 44UL; }
    } else {
      { _1_OBF_FUNC_next = 11UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:
    __RANDVAR__27188823598366698084__ -= 921;
    { _1_OBF_FUNC_next = 35UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab41:
    __RANDVAR__27188823598366698084__ -= 340;
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    __RANDVAR__24896731721301410449__ = __RANDVAR__66035250539181168911__ * 360;
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:
    _index2_2++;
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_next = 84UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab62:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[_index2_2];
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:
    __RANDVAR__27188823598366698084__ += 727;
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab87:
    __RANDVAR__28984750691011006130__ += 105;
    { _1_OBF_FUNC_next = 66UL; }
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
// variants: irrelevant-code, flatten
// expanded variants: irrelevant-code, flatten:indirect-goto
