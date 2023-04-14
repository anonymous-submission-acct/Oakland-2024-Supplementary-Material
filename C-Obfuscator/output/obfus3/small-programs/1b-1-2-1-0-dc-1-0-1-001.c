typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
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
    tmp = strtoul(*(argv + 1));
    tmp___0 = OBF_FUNC(argc, (int *)tmp);
    return (tmp___0);
  }
}
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum;
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
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[203] = {&&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab187, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab193, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203};
  {
    { _1_OBF_FUNC_next = 58UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab150:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 127UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab152:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 66UL; }
    } else {
      { _1_OBF_FUNC_next = 154UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab85:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 157UL; }
    } else {
      { _1_OBF_FUNC_next = 147UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab63:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab113:
    i = 0;
    { _1_OBF_FUNC_next = 188UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab138:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 20UL; }
    } else {
      { _1_OBF_FUNC_next = 27UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab135:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 70UL; }
    } else {
      { _1_OBF_FUNC_next = 4UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab117:
    sum += i;
    { _1_OBF_FUNC_next = 177UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab83:
    tmp___4 = rand();
    { _1_OBF_FUNC_next = 16UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab44:
    i++;
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab176:
    i++;
    { _1_OBF_FUNC_next = 4UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab4:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 98UL; }
    } else {
      { _1_OBF_FUNC_next = 80UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab80:
    printf("Sum is: %d\n", sum);
    { _1_OBF_FUNC_next = 71UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab73:;
    if (tmp___2 % 10 >= 5) {
      { _1_OBF_FUNC_next = 18UL; }
    } else {
      { _1_OBF_FUNC_next = 129UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab112:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 180UL; }
    } else {
      { _1_OBF_FUNC_next = 9UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab193:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 17UL; }
    } else {
      { _1_OBF_FUNC_next = 135UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab38:;
    if (tmp___15 % 10 >= 5) {
      { _1_OBF_FUNC_next = 13UL; }
    } else {
      { _1_OBF_FUNC_next = 121UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab184:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 42UL; }
    } else {
      { _1_OBF_FUNC_next = 138UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab22:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 97UL; }
    } else {
      { _1_OBF_FUNC_next = 144UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab126:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 76UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab167:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab26:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 131UL; }
    } else {
      { _1_OBF_FUNC_next = 187UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab81:
    i++;
    { _1_OBF_FUNC_next = 188UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab67:;
    if (tmp___13 % 10 >= 5) {
      { _1_OBF_FUNC_next = 27UL; }
    } else {
      { _1_OBF_FUNC_next = 36UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab12:
    i++;
    { _1_OBF_FUNC_next = 144UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab13:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 1UL; }
    } else {
      { _1_OBF_FUNC_next = 112UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab42:
    tmp___12 = rand();
    { _1_OBF_FUNC_next = 95UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab87:;
    if (tmp___11 % 10 >= 5) {
      { _1_OBF_FUNC_next = 184UL; }
    } else {
      { _1_OBF_FUNC_next = 102UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab103:
    i++;
    { _1_OBF_FUNC_next = 138UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab31:;
    if (tmp___19 % 10 >= 5) {
      { _1_OBF_FUNC_next = 9UL; }
    } else {
      { _1_OBF_FUNC_next = 181UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab192:;
    if (tmp___3 % 10 >= 5) {
      { _1_OBF_FUNC_next = 22UL; }
    } else {
      { _1_OBF_FUNC_next = 83UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab91:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab56:
    tmp___15 = rand();
    { _1_OBF_FUNC_next = 38UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab97:
    tmp___5 = rand();
    { _1_OBF_FUNC_next = 128UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab163:;
    if (tmp___21 % 10 >= 5) {
      { _1_OBF_FUNC_next = 135UL; }
    } else {
      { _1_OBF_FUNC_next = 60UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab30:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 33UL; }
    } else {
      { _1_OBF_FUNC_next = 190UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab151:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 105UL; }
    } else {
      { _1_OBF_FUNC_next = 7UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab188:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 164UL; }
    } else {
      { _1_OBF_FUNC_next = 89UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab142:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 89UL; }
    } else {
      { _1_OBF_FUNC_next = 196UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab147:
    sum += i;
    { _1_OBF_FUNC_next = 202UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab78:;
    if (tmp___9 % 10 >= 5) {
      { _1_OBF_FUNC_next = 190UL; }
    } else {
      { _1_OBF_FUNC_next = 125UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab68:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab149:;
    if (tmp___17 % 10 >= 5) {
      { _1_OBF_FUNC_next = 112UL; }
    } else {
      { _1_OBF_FUNC_next = 162UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab28:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 203UL; }
    } else {
      { _1_OBF_FUNC_next = 61UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab121:
    tmp___16 = rand();
    { _1_OBF_FUNC_next = 11UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab49:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab157:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab116:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab153:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 91UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab168:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 150UL; }
    } else {
      { _1_OBF_FUNC_next = 52UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab24:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 45UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab45:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab58:
    sum = 0;
    { _1_OBF_FUNC_next = 113UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab43:
    i++;
    { _1_OBF_FUNC_next = 184UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab109:
    sum += i;
    { _1_OBF_FUNC_next = 103UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab107:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 161UL; }
    } else {
      { _1_OBF_FUNC_next = 109UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab105:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 200UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab180:
    tmp___19 = rand();
    { _1_OBF_FUNC_next = 31UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab177:
    i++;
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab187:
    sum += i;
    { _1_OBF_FUNC_next = 43UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab162:
    tmp___18 = rand();
    { _1_OBF_FUNC_next = 165UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab146:
    sum += i;
    { _1_OBF_FUNC_next = 130UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab118:
    i++;
    { _1_OBF_FUNC_next = 193UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab95:;
    if (tmp___12 % 10 >= 5) {
      { _1_OBF_FUNC_next = 138UL; }
    } else {
      { _1_OBF_FUNC_next = 26UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab125:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 153UL; }
    } else {
      { _1_OBF_FUNC_next = 137UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab174:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 139UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab60:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 174UL; }
    } else {
      { _1_OBF_FUNC_next = 140UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab16:;
    if (tmp___4 % 10 >= 5) {
      { _1_OBF_FUNC_next = 22UL; }
    } else {
      { _1_OBF_FUNC_next = 28UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab140:
    sum += i;
    { _1_OBF_FUNC_next = 118UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab21:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 178UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab9:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 104UL; }
    } else {
      { _1_OBF_FUNC_next = 193UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab199:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab46:;
    if (tmp___22 % 10 >= 5) {
      { _1_OBF_FUNC_next = 4UL; }
    } else {
      { _1_OBF_FUNC_next = 85UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab195:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 23UL; }
    } else {
      { _1_OBF_FUNC_next = 117UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab110:
    sum += i;
    { _1_OBF_FUNC_next = 176UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab17:
    tmp___21 = rand();
    { _1_OBF_FUNC_next = 163UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab165:;
    if (tmp___18 % 10 >= 5) {
      { _1_OBF_FUNC_next = 112UL; }
    } else {
      { _1_OBF_FUNC_next = 195UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab123:
    sum += i;
    { _1_OBF_FUNC_next = 3UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab129:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 40UL; }
    } else {
      { _1_OBF_FUNC_next = 123UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab40:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 172UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab196:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 136UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab71:;
    return (0);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab20:
    tmp___13 = rand();
    { _1_OBF_FUNC_next = 67UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab158:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab128:;
    if (tmp___5 % 10 >= 5) {
      { _1_OBF_FUNC_next = 144UL; }
    } else {
      { _1_OBF_FUNC_next = 151UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab32:
    tmp___2 = rand();
    { _1_OBF_FUNC_next = 73UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab96:
    sum += i;
    { _1_OBF_FUNC_next = 122UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab170:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 24UL; }
    } else {
      { _1_OBF_FUNC_next = 57UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab61:
    sum += i;
    { _1_OBF_FUNC_next = 69UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab104:
    tmp___20 = rand();
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab66:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 158UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab98:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 175UL; }
    } else {
      { _1_OBF_FUNC_next = 110UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab136:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 89UL; }
    } else {
      { _1_OBF_FUNC_next = 119UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab154:
    sum += i;
    { _1_OBF_FUNC_next = 12UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab3:
    i++;
    { _1_OBF_FUNC_next = 89UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab145:
    tmp___6 = rand();
    { _1_OBF_FUNC_next = 124UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab69:
    i++;
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab33:
    tmp___8 = rand();
    { _1_OBF_FUNC_next = 51UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab175:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 159UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab55:;
    if (tmp___7 % 10 >= 5) {
      { _1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_next = 152UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab18:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 120UL; }
    } else {
      { _1_OBF_FUNC_next = 22UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab127:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab108:
    tmp___11 = rand();
    { _1_OBF_FUNC_next = 87UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab53:
    i++;
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab144:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 145UL; }
    } else {
      { _1_OBF_FUNC_next = 30UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab178:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 18UL; }
    } else {
      { _1_OBF_FUNC_next = 32UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab54:
    i++;
    { _1_OBF_FUNC_next = 9UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab76:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab111:;
    if (tmp___14 % 10 >= 5) {
      { _1_OBF_FUNC_next = 27UL; }
    } else {
      { _1_OBF_FUNC_next = 107UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab130:
    i++;
    { _1_OBF_FUNC_next = 190UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab181:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 160UL; }
    } else {
      { _1_OBF_FUNC_next = 96UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab47:;
    if (tmp___10 % 10 >= 5) {
      { _1_OBF_FUNC_next = 184UL; }
    } else {
      { _1_OBF_FUNC_next = 108UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab139:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab57:
    sum += i;
    { _1_OBF_FUNC_next = 54UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab51:;
    if (tmp___8 % 10 >= 5) {
      { _1_OBF_FUNC_next = 190UL; }
    } else {
      { _1_OBF_FUNC_next = 48UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab202:
    i++;
    { _1_OBF_FUNC_next = 135UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab122:
    i++;
    { _1_OBF_FUNC_next = 112UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab161:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 167UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab190:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 93UL; }
    } else {
      { _1_OBF_FUNC_next = 184UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab27:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 56UL; }
    } else {
      { _1_OBF_FUNC_next = 13UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab10:
    i++;
    { _1_OBF_FUNC_next = 30UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab120:
    tmp___3 = rand();
    { _1_OBF_FUNC_next = 192UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab124:;
    if (tmp___6 % 10 >= 5) {
      { _1_OBF_FUNC_next = 30UL; }
    } else {
      { _1_OBF_FUNC_next = 50UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab70:
    tmp___22 = rand();
    { _1_OBF_FUNC_next = 46UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab36:
    tmp___14 = rand();
    { _1_OBF_FUNC_next = 111UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab23:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 49UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab160:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 116UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab164:
    tmp = rand();
    { _1_OBF_FUNC_next = 142UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab1:
    tmp___17 = rand();
    { _1_OBF_FUNC_next = 149UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab197:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab119:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 126UL; }
    } else {
      { _1_OBF_FUNC_next = 77UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab89:;
    if (i < *(argv + 0)) {
      { _1_OBF_FUNC_next = 21UL; }
    } else {
      { _1_OBF_FUNC_next = 18UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab203:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 199UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab52:
    sum += i;
    { _1_OBF_FUNC_next = 53UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab75:;
    if (tmp___20 % 10 >= 5) {
      { _1_OBF_FUNC_next = 193UL; }
    } else {
      { _1_OBF_FUNC_next = 170UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab131:
    printf("Usage: program-name char\n");
    { _1_OBF_FUNC_next = 197UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab172:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab102:;
    if (argc < 2) {
      { _1_OBF_FUNC_next = 63UL; }
    } else {
      { _1_OBF_FUNC_next = 146UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab137:
    sum += i;
    { _1_OBF_FUNC_next = 10UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab93:
    tmp___10 = rand();
    { _1_OBF_FUNC_next = 47UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab48:
    tmp___9 = rand();
    { _1_OBF_FUNC_next = 78UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab200:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab159:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab50:
    tmp___7 = rand();
    { _1_OBF_FUNC_next = 55UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab11:;
    if (tmp___16 % 10 >= 5) {
      { _1_OBF_FUNC_next = 13UL; }
    } else {
      { _1_OBF_FUNC_next = 168UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab34:;
    return (1);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab77:
    sum += i;
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab7:
    sum += i;
    { _1_OBF_FUNC_next = 44UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  }
}
// variants: loop-fission, loop-fission, flatten
// expanded variants: loop-fission, loop-fission, flatten:indirect-goto
