typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
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
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  int tmp___33;
  int tmp___34;
  int tmp___35;
  int tmp___36;
  int tmp___37;
  int tmp___38;
  int tmp___39;
  int tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
  int tmp___44;
  int tmp___45;
  int tmp___46;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[303] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab133, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab189, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab216, &&_1_OBF_FUNC_lab217, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab221, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab224, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab230, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab232, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab235, &&_1_OBF_FUNC_lab236, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab238, &&_1_OBF_FUNC_lab239, &&_1_OBF_FUNC_lab240, &&_1_OBF_FUNC_lab241, &&_1_OBF_FUNC_lab242, &&_1_OBF_FUNC_lab243, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab245, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab247, &&_1_OBF_FUNC_lab248, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251, &&_1_OBF_FUNC_lab252, &&_1_OBF_FUNC_lab253, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab255, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab259, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab262, &&_1_OBF_FUNC_lab263, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab266, &&_1_OBF_FUNC_lab267, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab269, &&_1_OBF_FUNC_lab270, &&_1_OBF_FUNC_lab271, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab273, &&_1_OBF_FUNC_lab274, &&_1_OBF_FUNC_lab275, &&_1_OBF_FUNC_lab276, &&_1_OBF_FUNC_lab277, &&_1_OBF_FUNC_lab278, &&_1_OBF_FUNC_lab279, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab283, &&_1_OBF_FUNC_lab284, &&_1_OBF_FUNC_lab285, &&_1_OBF_FUNC_lab286, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab288, &&_1_OBF_FUNC_lab289, &&_1_OBF_FUNC_lab290, &&_1_OBF_FUNC_lab291, &&_1_OBF_FUNC_lab292, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab297, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab299, &&_1_OBF_FUNC_lab300, &&_1_OBF_FUNC_lab301, &&_1_OBF_FUNC_lab302};
  {
    { _1_OBF_FUNC_next = 194UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab42:;
    if (tmp___42 % 10 >= 5) {
      { _1_OBF_FUNC_next = 110UL; }
    } else {
      { _1_OBF_FUNC_next = 139UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab119:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 97UL; }
    } else {
      { _1_OBF_FUNC_next = 205UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab259:
    sum += i;
    { _1_OBF_FUNC_next = 44UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab96:
    i++;
    { _1_OBF_FUNC_next = 184UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab199:;
    if (tmp___9 % 10 >= 5) {
      { _1_OBF_FUNC_next = 184UL; }
    } else {
      { _1_OBF_FUNC_next = 289UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab107:
    tmp___45 = rand();
    { _1_OBF_FUNC_next = 68UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab97:
    tmp___17 = rand();
    { _1_OBF_FUNC_next = 198UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab278:
    i++;
    { _1_OBF_FUNC_next = 170UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab50:
    tmp___24 = rand();
    { _1_OBF_FUNC_next = 277UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab230:
    i++;
    { _1_OBF_FUNC_next = 154UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab1:
    tmp___14 = rand();
    { _1_OBF_FUNC_next = 152UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab232:;
    return (0);
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab100:
    tmp___44 = rand();
    { _1_OBF_FUNC_next = 217UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab110:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 55UL; }
    } else {
      { _1_OBF_FUNC_next = 17UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab45:
    i++;
    { _1_OBF_FUNC_next = 251UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab145:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 208UL; }
    } else {
      { _1_OBF_FUNC_next = 86UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab204:;
    if (tmp___21 % 10 >= 5) {
      { _1_OBF_FUNC_next = 161UL; }
    } else {
      { _1_OBF_FUNC_next = 24UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab23:
    tmp___12 = rand();
    { _1_OBF_FUNC_next = 9UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab279:
    sum += i;
    { _1_OBF_FUNC_next = 202UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab160:
    tmp___19 = rand();
    { _1_OBF_FUNC_next = 132UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab65:
    i++;
    { _1_OBF_FUNC_next = 34UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab251:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 107UL; }
    } else {
      { _1_OBF_FUNC_next = 56UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab197:
    tmp___5 = rand();
    { _1_OBF_FUNC_next = 209UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab229:
    sum += sum;
    { _1_OBF_FUNC_next = 278UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab150:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 153UL; }
    } else {
      { _1_OBF_FUNC_next = 119UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab271:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 99UL; }
    } else {
      { _1_OBF_FUNC_next = 116UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab222:
    i++;
    { _1_OBF_FUNC_next = 145UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab177:
    tmp___35 = rand();
    { _1_OBF_FUNC_next = 262UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab127:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 73UL; }
    } else {
      { _1_OBF_FUNC_next = 154UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab241:
    i++;
    { _1_OBF_FUNC_next = 86UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab196:
    sum += sum;
    { _1_OBF_FUNC_next = 43UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab233:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 197UL; }
    } else {
      { _1_OBF_FUNC_next = 22UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab40:
    sum += i;
    { _1_OBF_FUNC_next = 276UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab161:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 117UL; }
    } else {
      { _1_OBF_FUNC_next = 255UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab277:;
    if (tmp___24 % 10 >= 5) {
      { _1_OBF_FUNC_next = 127UL; }
    } else {
      { _1_OBF_FUNC_next = 229UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab34:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 77UL; }
    } else {
      { _1_OBF_FUNC_next = 158UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab144:
    tmp___42 = rand();
    { _1_OBF_FUNC_next = 42UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab240:
    tmp___11 = rand();
    { _1_OBF_FUNC_next = 20UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab8:;
    if (tmp___0 % 10 >= 5) {
      { _1_OBF_FUNC_next = 88UL; }
    } else {
      { _1_OBF_FUNC_next = 40UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab117:
    tmp___22 = rand();
    { _1_OBF_FUNC_next = 109UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab39:
    sum += i;
    { _1_OBF_FUNC_next = 106UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab81:;
    if (tmp___39 % 10 >= 5) {
      { _1_OBF_FUNC_next = 237UL; }
    } else {
      { _1_OBF_FUNC_next = 242UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab51:
    i++;
    { _1_OBF_FUNC_next = 110UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab41:;
    if (tmp___41 % 10 >= 5) {
      { _1_OBF_FUNC_next = 110UL; }
    } else {
      { _1_OBF_FUNC_next = 144UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab118:
    tmp___10 = rand();
    { _1_OBF_FUNC_next = 36UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab180:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 159UL; }
    } else {
      { _1_OBF_FUNC_next = 219UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab211:
    tmp___8 = rand();
    { _1_OBF_FUNC_next = 288UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab224:
    sum += sum;
    { _1_OBF_FUNC_next = 51UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab286:
    sum += sum;
    { _1_OBF_FUNC_next = 151UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab82:
    i++;
    { _1_OBF_FUNC_next = 56UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab125:
    tmp___1 = rand();
    { _1_OBF_FUNC_next = 123UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab92:
    sum += i;
    { _1_OBF_FUNC_next = 96UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab156:
    tmp___3 = rand();
    { _1_OBF_FUNC_next = 35UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab275:
    sum += sum;
    { _1_OBF_FUNC_next = 45UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab154:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 263UL; }
    } else {
      { _1_OBF_FUNC_next = 250UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab153:
    tmp___15 = rand();
    { _1_OBF_FUNC_next = 302UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab301:;
    if (tmp___32 % 10 >= 5) {
      { _1_OBF_FUNC_next = 145UL; }
    } else {
      { _1_OBF_FUNC_next = 297UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab24:
    sum += i;
    { _1_OBF_FUNC_next = 252UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab290:
    tmp___16 = rand();
    { _1_OBF_FUNC_next = 63UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab122:
    tmp = rand();
    { _1_OBF_FUNC_next = 270UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab236:
    printf("Sum is: %d\n", sum);
    { _1_OBF_FUNC_next = 232UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab159:
    tmp___37 = rand();
    { _1_OBF_FUNC_next = 59UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab56:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 189UL; }
    } else {
      { _1_OBF_FUNC_next = 183UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab202:
    i++;
    { _1_OBF_FUNC_next = 233UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab22:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 185UL; }
    } else {
      { _1_OBF_FUNC_next = 246UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab176:
    tmp___32 = rand();
    { _1_OBF_FUNC_next = 301UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab192:
    sum += sum;
    { _1_OBF_FUNC_next = 61UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab253:
    i++;
    { _1_OBF_FUNC_next = 246UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab171:
    sum += sum;
    { _1_OBF_FUNC_next = 245UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab139:
    sum += sum;
    { _1_OBF_FUNC_next = 283UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab209:;
    if (tmp___5 % 10 >= 5) {
      { _1_OBF_FUNC_next = 22UL; }
    } else {
      { _1_OBF_FUNC_next = 279UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab75:;
    if (tmp___29 % 10 >= 5) {
      { _1_OBF_FUNC_next = 34UL; }
    } else {
      { _1_OBF_FUNC_next = 216UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab185:
    tmp___6 = rand();
    { _1_OBF_FUNC_next = 273UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab299:
    sum += i;
    { _1_OBF_FUNC_next = 137UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab151:
    i++;
    { _1_OBF_FUNC_next = 17UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab147:;
    if (tmp___34 % 10 >= 5) {
      { _1_OBF_FUNC_next = 86UL; }
    } else {
      { _1_OBF_FUNC_next = 177UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab283:
    i++;
    { _1_OBF_FUNC_next = 237UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab35:;
    if (tmp___3 % 10 >= 5) {
      { _1_OBF_FUNC_next = 233UL; }
    } else {
      { _1_OBF_FUNC_next = 190UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab74:;
    if (tmp___28 % 10 >= 5) {
      { _1_OBF_FUNC_next = 250UL; }
    } else {
      { _1_OBF_FUNC_next = 269UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab9:;
    if (tmp___12 % 10 >= 5) {
      { _1_OBF_FUNC_next = 284UL; }
    } else {
      { _1_OBF_FUNC_next = 300UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab208:
    tmp___34 = rand();
    { _1_OBF_FUNC_next = 147UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab152:;
    if (tmp___14 % 10 >= 5) {
      { _1_OBF_FUNC_next = 150UL; }
    } else {
      { _1_OBF_FUNC_next = 39UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab36:;
    if (tmp___10 % 10 >= 5) {
      { _1_OBF_FUNC_next = 130UL; }
    } else {
      { _1_OBF_FUNC_next = 240UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab49:
    sum += i;
    { _1_OBF_FUNC_next = 128UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab221:;
    if (tmp___30 % 10 >= 5) {
      { _1_OBF_FUNC_next = 158UL; }
    } else {
      { _1_OBF_FUNC_next = 105UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab269:
    sum += sum;
    { _1_OBF_FUNC_next = 230UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab270:;
    if (tmp % 10 >= 5) {
      { _1_OBF_FUNC_next = 88UL; }
    } else {
      { _1_OBF_FUNC_next = 195UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab248:;
    if (tmp___26 % 10 >= 5) {
      { _1_OBF_FUNC_next = 154UL; }
    } else {
      { _1_OBF_FUNC_next = 171UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab291:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 156UL; }
    } else {
      { _1_OBF_FUNC_next = 233UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab288:;
    if (tmp___8 % 10 >= 5) {
      { _1_OBF_FUNC_next = 184UL; }
    } else {
      { _1_OBF_FUNC_next = 239UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab164:;
    if (tmp___25 % 10 >= 5) {
      { _1_OBF_FUNC_next = 154UL; }
    } else {
      { _1_OBF_FUNC_next = 203UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab190:
    tmp___4 = rand();
    { _1_OBF_FUNC_next = 178UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab76:
    tmp___18 = rand();
    { _1_OBF_FUNC_next = 267UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab186:
    sum += sum;
    { _1_OBF_FUNC_next = 222UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab227:
    i++;
    { _1_OBF_FUNC_next = 130UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab297:
    tmp___33 = rand();
    { _1_OBF_FUNC_next = 235UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab138:
    i++;
    { _1_OBF_FUNC_next = 219UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab267:;
    if (tmp___18 % 10 >= 5) {
      { _1_OBF_FUNC_next = 205UL; }
    } else {
      { _1_OBF_FUNC_next = 249UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab128:
    i++;
    { _1_OBF_FUNC_next = 150UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab17:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 100UL; }
    } else {
      { _1_OBF_FUNC_next = 251UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab242:
    tmp___40 = rand();
    { _1_OBF_FUNC_next = 33UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab129:
    i++;
    { _1_OBF_FUNC_next = 291UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab184:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 118UL; }
    } else {
      { _1_OBF_FUNC_next = 130UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab99:
    tmp___20 = rand();
    { _1_OBF_FUNC_next = 30UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab203:
    tmp___26 = rand();
    { _1_OBF_FUNC_next = 248UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab158:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 176UL; }
    } else {
      { _1_OBF_FUNC_next = 145UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab123:;
    if (tmp___1 % 10 >= 5) {
      { _1_OBF_FUNC_next = 291UL; }
    } else {
      { _1_OBF_FUNC_next = 108UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab106:
    i++;
    { _1_OBF_FUNC_next = 284UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab183:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 196UL; }
    } else {
      { _1_OBF_FUNC_next = 236UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab79:;
    if (tmp___38 % 10 >= 5) {
      { _1_OBF_FUNC_next = 219UL; }
    } else {
      { _1_OBF_FUNC_next = 143UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab25:;
    if (tmp___23 % 10 >= 5) {
      { _1_OBF_FUNC_next = 127UL; }
    } else {
      { _1_OBF_FUNC_next = 50UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab284:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 292UL; }
    } else {
      { _1_OBF_FUNC_next = 150UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab255:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 247UL; }
    } else {
      { _1_OBF_FUNC_next = 21UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab249:
    sum += i;
    { _1_OBF_FUNC_next = 135UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab143:
    sum += sum;
    { _1_OBF_FUNC_next = 133UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab273:;
    if (tmp___6 % 10 >= 5) {
      { _1_OBF_FUNC_next = 246UL; }
    } else {
      { _1_OBF_FUNC_next = 131UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab94:
    sum += i;
    { _1_OBF_FUNC_next = 19UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab11:
    tmp___38 = rand();
    { _1_OBF_FUNC_next = 79UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab245:
    i++;
    { _1_OBF_FUNC_next = 127UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab33:;
    if (tmp___40 % 10 >= 5) {
      { _1_OBF_FUNC_next = 237UL; }
    } else {
      { _1_OBF_FUNC_next = 32UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab18:;
    if (tmp___7 % 10 >= 5) {
      { _1_OBF_FUNC_next = 246UL; }
    } else {
      { _1_OBF_FUNC_next = 259UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab252:
    i++;
    { _1_OBF_FUNC_next = 116UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab88:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 125UL; }
    } else {
      { _1_OBF_FUNC_next = 291UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab63:;
    if (tmp___16 % 10 >= 5) {
      { _1_OBF_FUNC_next = 119UL; }
    } else {
      { _1_OBF_FUNC_next = 49UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab37:
    i++;
    { _1_OBF_FUNC_next = 205UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab19:
    i++;
    { _1_OBF_FUNC_next = 271UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab43:
    i++;
    { _1_OBF_FUNC_next = 183UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab247:
    sum += i;
    { _1_OBF_FUNC_next = 207UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab137:
    i++;
    { _1_OBF_FUNC_next = 88UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab189:
    tmp___46 = rand();
    { _1_OBF_FUNC_next = 238UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab237:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 274UL; }
    } else {
      { _1_OBF_FUNC_next = 110UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab73:
    tmp___25 = rand();
    { _1_OBF_FUNC_next = 164UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab243:;
    if (tmp___43 % 10 >= 5) {
      { _1_OBF_FUNC_next = 17UL; }
    } else {
      { _1_OBF_FUNC_next = 224UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab274:
    tmp___41 = rand();
    { _1_OBF_FUNC_next = 41UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab86:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 48UL; }
    } else {
      { _1_OBF_FUNC_next = 180UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:;
    if (tmp___36 % 10 >= 5) {
      { _1_OBF_FUNC_next = 180UL; }
    } else {
      { _1_OBF_FUNC_next = 5UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab131:
    tmp___7 = rand();
    { _1_OBF_FUNC_next = 18UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab77:
    tmp___30 = rand();
    { _1_OBF_FUNC_next = 221UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab198:;
    if (tmp___17 % 10 >= 5) {
      { _1_OBF_FUNC_next = 205UL; }
    } else {
      { _1_OBF_FUNC_next = 76UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab130:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 23UL; }
    } else {
      { _1_OBF_FUNC_next = 284UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab172:
    sum += sum;
    { _1_OBF_FUNC_next = 65UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab27:
    tmp___23 = rand();
    { _1_OBF_FUNC_next = 25UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab5:
    sum += sum;
    { _1_OBF_FUNC_next = 241UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab59:;
    if (tmp___37 % 10 >= 5) {
      { _1_OBF_FUNC_next = 219UL; }
    } else {
      { _1_OBF_FUNC_next = 11UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab141:
    i++;
    { _1_OBF_FUNC_next = 161UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab109:;
    if (tmp___22 % 10 >= 5) {
      { _1_OBF_FUNC_next = 255UL; }
    } else {
      { _1_OBF_FUNC_next = 218UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab292:
    tmp___13 = rand();
    { _1_OBF_FUNC_next = 266UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab194:
    sum = 0;
    { _1_OBF_FUNC_next = 121UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab170:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 27UL; }
    } else {
      { _1_OBF_FUNC_next = 127UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab238:;
    if (tmp___46 % 10 >= 5) {
      { _1_OBF_FUNC_next = 183UL; }
    } else {
      { _1_OBF_FUNC_next = 28UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab302:;
    if (tmp___15 % 10 >= 5) {
      { _1_OBF_FUNC_next = 119UL; }
    } else {
      { _1_OBF_FUNC_next = 290UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:
    sum += i;
    { _1_OBF_FUNC_next = 37UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab134:
    i++;
    { _1_OBF_FUNC_next = 250UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab21:
    i = 1;
    { _1_OBF_FUNC_next = 170UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab276:
    i++;
    { _1_OBF_FUNC_next = 46UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab32:
    sum += sum;
    { _1_OBF_FUNC_next = 138UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab207:
    i++;
    { _1_OBF_FUNC_next = 255UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab216:
    sum += sum;
    { _1_OBF_FUNC_next = 134UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab116:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 4UL; }
    } else {
      { _1_OBF_FUNC_next = 161UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab300:
    sum += i;
    { _1_OBF_FUNC_next = 227UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab219:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 12UL; }
    } else {
      { _1_OBF_FUNC_next = 237UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab205:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 160UL; }
    } else {
      { _1_OBF_FUNC_next = 271UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab250:;
    if (i <= 4) {
      { _1_OBF_FUNC_next = 78UL; }
    } else {
      { _1_OBF_FUNC_next = 34UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab44:
    i++;
    { _1_OBF_FUNC_next = 22UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab239:
    tmp___9 = rand();
    { _1_OBF_FUNC_next = 199UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab285:;
    if (tmp___31 % 10 >= 5) {
      { _1_OBF_FUNC_next = 158UL; }
    } else {
      { _1_OBF_FUNC_next = 172UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab108:
    tmp___2 = rand();
    { _1_OBF_FUNC_next = 6UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab20:;
    if (tmp___11 % 10 >= 5) {
      { _1_OBF_FUNC_next = 130UL; }
    } else {
      { _1_OBF_FUNC_next = 92UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab195:
    tmp___0 = rand();
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab46:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 122UL; }
    } else {
      { _1_OBF_FUNC_next = 88UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab218:
    sum += i;
    { _1_OBF_FUNC_next = 141UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab181:
    tmp___28 = rand();
    { _1_OBF_FUNC_next = 74UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab178:;
    if (tmp___4 % 10 >= 5) {
      { _1_OBF_FUNC_next = 233UL; }
    } else {
      { _1_OBF_FUNC_next = 174UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab28:
    sum += sum;
    { _1_OBF_FUNC_next = 82UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab68:;
    if (tmp___45 % 10 >= 5) {
      { _1_OBF_FUNC_next = 56UL; }
    } else {
      { _1_OBF_FUNC_next = 275UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab30:;
    if (tmp___20 % 10 >= 5) {
      { _1_OBF_FUNC_next = 116UL; }
    } else {
      { _1_OBF_FUNC_next = 94UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab289:
    sum += i;
    { _1_OBF_FUNC_next = 253UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab48:
    tmp___36 = rand();
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab217:;
    if (tmp___44 % 10 >= 5) {
      { _1_OBF_FUNC_next = 251UL; }
    } else {
      { _1_OBF_FUNC_next = 286UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab262:;
    if (tmp___35 % 10 >= 5) {
      { _1_OBF_FUNC_next = 86UL; }
    } else {
      { _1_OBF_FUNC_next = 186UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab78:
    tmp___29 = rand();
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab55:
    tmp___43 = rand();
    { _1_OBF_FUNC_next = 243UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab12:
    tmp___39 = rand();
    { _1_OBF_FUNC_next = 81UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab4:
    tmp___21 = rand();
    { _1_OBF_FUNC_next = 204UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab135:
    i++;
    { _1_OBF_FUNC_next = 119UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab235:;
    if (tmp___33 % 10 >= 5) {
      { _1_OBF_FUNC_next = 145UL; }
    } else {
      { _1_OBF_FUNC_next = 192UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab121:
    i = 0;
    { _1_OBF_FUNC_next = 46UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab6:;
    if (tmp___2 % 10 >= 5) {
      { _1_OBF_FUNC_next = 291UL; }
    } else {
      { _1_OBF_FUNC_next = 299UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab149:;
    if (tmp___27 % 10 >= 5) {
      { _1_OBF_FUNC_next = 250UL; }
    } else {
      { _1_OBF_FUNC_next = 181UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab174:
    sum += i;
    { _1_OBF_FUNC_next = 129UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab61:
    i++;
    { _1_OBF_FUNC_next = 158UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab133:
    i++;
    { _1_OBF_FUNC_next = 180UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab105:
    tmp___31 = rand();
    { _1_OBF_FUNC_next = 285UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab132:;
    if (tmp___19 % 10 >= 5) {
      { _1_OBF_FUNC_next = 271UL; }
    } else {
      { _1_OBF_FUNC_next = 29UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab263:
    tmp___27 = rand();
    { _1_OBF_FUNC_next = 149UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab246:;
    if (i < argc) {
      { _1_OBF_FUNC_next = 211UL; }
    } else {
      { _1_OBF_FUNC_next = 184UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab266:;
    if (tmp___13 % 10 >= 5) {
      { _1_OBF_FUNC_next = 150UL; }
    } else {
      { _1_OBF_FUNC_next = 1UL; }
    }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  }
}
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
// variants: loop-fission, loop-fission, flatten
// expanded variants: loop-fission, loop-fission, flatten:indirect-goto
