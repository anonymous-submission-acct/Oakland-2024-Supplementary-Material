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
  int __RANDVAR__55191348789615385639__;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int __RANDVAR__17953367476597750262__;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int __RANDVAR__36135678676074563927__;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int __RANDVAR__3016658056958596301__;
  int __RANDVAR__89148636455829572579__;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int __RANDVAR__58095954999892290250__;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;
  int __RANDVAR__37213152813336455032__;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  int tmp___33;
  int tmp___34;
  int __RANDVAR__59715572545391716306__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[321] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab133, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab189, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab191, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab216, &&_1_OBF_FUNC_lab217, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab221, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab223, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab226, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab230, &&_1_OBF_FUNC_lab231, &&_1_OBF_FUNC_lab232, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab234, &&_1_OBF_FUNC_lab235, &&_1_OBF_FUNC_lab236, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab239, &&_1_OBF_FUNC_lab240, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab243, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab247, &&_1_OBF_FUNC_lab248, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab253, &&_1_OBF_FUNC_lab254, &&_1_OBF_FUNC_lab255, &&_1_OBF_FUNC_lab256, &&_1_OBF_FUNC_lab257, &&_1_OBF_FUNC_lab258, &&_1_OBF_FUNC_lab259, &&_1_OBF_FUNC_lab260, &&_1_OBF_FUNC_lab261, &&_1_OBF_FUNC_lab262, &&_1_OBF_FUNC_lab263, &&_1_OBF_FUNC_lab264, &&_1_OBF_FUNC_lab265, &&_1_OBF_FUNC_lab266, &&_1_OBF_FUNC_lab267, &&_1_OBF_FUNC_lab268, &&_1_OBF_FUNC_lab269, &&_1_OBF_FUNC_lab270, &&_1_OBF_FUNC_lab271, &&_1_OBF_FUNC_lab272, &&_1_OBF_FUNC_lab273, &&_1_OBF_FUNC_lab274, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab276, &&_1_OBF_FUNC_lab277, &&_1_OBF_FUNC_lab278, &&_1_OBF_FUNC_lab279, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab281, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab283, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab285, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab288, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab290, &&_1_OBF_FUNC_lab291, &&_1_OBF_FUNC_lab292, &&_1_OBF_FUNC_lab293, &&_1_OBF_FUNC_lab294, &&_1_OBF_FUNC_lab295, &&_1_OBF_FUNC_lab296, &&_1_OBF_FUNC_lab297, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab299, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab303, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab306, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab308, &&_1_OBF_FUNC_lab309, &&_1_OBF_FUNC_lab310, &&_1_OBF_FUNC_lab311, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab314, &&_1_OBF_FUNC_lab315, &&_1_OBF_FUNC_lab316, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab319, &&_1_OBF_FUNC_lab320};
  {
    { _1_OBF_FUNC_next = 19UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab233:
    __RANDVAR__17953367476597750262__ = 0;
    goto _1_OBF_FUNC_lab249;
  _1_OBF_FUNC_lab309:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab310;
    } else {
      goto _1_OBF_FUNC_lab156;
    }
  _1_OBF_FUNC_lab291:
    sum += i;
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab146:
    i++;
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab23:
    sum += i;
    goto _1_OBF_FUNC_lab320;
  _1_OBF_FUNC_lab69:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab186;
    }
  _1_OBF_FUNC_lab297:
    i++;
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab129:
    tmp___25 = rand();
    goto _1_OBF_FUNC_lab264;
  _1_OBF_FUNC_lab156:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab37;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab195:
    sum += i;
    goto _1_OBF_FUNC_lab297;
  _1_OBF_FUNC_lab204:
    tmp___17 = rand();
    goto _1_OBF_FUNC_lab274;
  _1_OBF_FUNC_lab278:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab129;
    } else {
      goto _1_OBF_FUNC_lab159;
    }
  _1_OBF_FUNC_lab21:;
    if (tmp___30 % 10 >= 5) {
      goto _1_OBF_FUNC_lab181;
    } else {
      goto _1_OBF_FUNC_lab171;
    }
  _1_OBF_FUNC_lab293:
    sum += i;
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab80:
    i++;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab131:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab92;
    } else {
      goto _1_OBF_FUNC_lab94;
    }
  _1_OBF_FUNC_lab47:
    sum += i;
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab57:
    sum += i;
    goto _1_OBF_FUNC_lab228;
  _1_OBF_FUNC_lab205:
    i++;
    goto _1_OBF_FUNC_lab218;
  _1_OBF_FUNC_lab141:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab256;
  _1_OBF_FUNC_lab253:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab204;
    } else {
      goto _1_OBF_FUNC_lab182;
    }
  _1_OBF_FUNC_lab106:
    tmp___24 = rand();
    goto _1_OBF_FUNC_lab201;
  _1_OBF_FUNC_lab152:
    __RANDVAR__58095954999892290250__ = 0;
    goto _1_OBF_FUNC_lab234;
  _1_OBF_FUNC_lab110:
    __RANDVAR__17953367476597750262__ = 1;
    goto _1_OBF_FUNC_lab249;
  _1_OBF_FUNC_lab37:
    tmp___16 = rand();
    goto _1_OBF_FUNC_lab87;
  _1_OBF_FUNC_lab79:
    sum += i;
    goto _1_OBF_FUNC_lab166;
  _1_OBF_FUNC_lab35:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab0:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab115:;
    if (__RANDVAR__37213152813336455032__ == 0) {
      goto _1_OBF_FUNC_lab119;
    } else {
      goto _1_OBF_FUNC_lab181;
    }
  _1_OBF_FUNC_lab86:
    i++;
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab288:
    i++;
    goto _1_OBF_FUNC_lab100;
  _1_OBF_FUNC_lab15:
    i++;
    goto _1_OBF_FUNC_lab159;
  _1_OBF_FUNC_lab135:
    sum += i;
    goto _1_OBF_FUNC_lab148;
  _1_OBF_FUNC_lab113:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab214;
    }
  _1_OBF_FUNC_lab180:
    i++;
    goto _1_OBF_FUNC_lab292;
  _1_OBF_FUNC_lab310:
    tmp___15 = rand();
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab211:
    sum += i;
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab311:;
    if (tmp___20 % 10 >= 5) {
      goto _1_OBF_FUNC_lab214;
    } else {
      goto _1_OBF_FUNC_lab295;
    }
  _1_OBF_FUNC_lab140:;
    return (0);
  _1_OBF_FUNC_lab319:
    i++;
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab277:;
    if (tmp___21 % 10 >= 5) {
      goto _1_OBF_FUNC_lab214;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab76:
    i++;
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab134:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab133;
    } else {
      goto _1_OBF_FUNC_lab309;
    }
  _1_OBF_FUNC_lab121:
    i = 0;
    goto _1_OBF_FUNC_lab248;
  _1_OBF_FUNC_lab167:;
    if (tmp___15 % 10 >= 5) {
      goto _1_OBF_FUNC_lab271;
    } else {
      goto _1_OBF_FUNC_lab258;
    }
  _1_OBF_FUNC_lab116:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab79;
    } else {
      goto _1_OBF_FUNC_lab229;
    }
  _1_OBF_FUNC_lab281:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab232:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab89;
    } else {
      goto _1_OBF_FUNC_lab143;
    }
  _1_OBF_FUNC_lab65:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab10;
    }
  _1_OBF_FUNC_lab50:
    i = 0;
    goto _1_OBF_FUNC_lab155;
  _1_OBF_FUNC_lab119:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab188;
    } else {
      goto _1_OBF_FUNC_lab292;
    }
  _1_OBF_FUNC_lab243:
    i++;
    goto _1_OBF_FUNC_lab294;
  _1_OBF_FUNC_lab31:
    tmp___27 = rand();
    goto _1_OBF_FUNC_lab157;
  _1_OBF_FUNC_lab235:
    i++;
    goto _1_OBF_FUNC_lab255;
  _1_OBF_FUNC_lab222:
    i++;
    goto _1_OBF_FUNC_lab250;
  _1_OBF_FUNC_lab75:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab233;
    } else {
      goto _1_OBF_FUNC_lab62;
    }
  _1_OBF_FUNC_lab46:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab0;
    } else {
      goto _1_OBF_FUNC_lab100;
    }
  _1_OBF_FUNC_lab197:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab213;
    } else {
      goto _1_OBF_FUNC_lab220;
    }
  _1_OBF_FUNC_lab20:
    tmp___19 = rand();
    goto _1_OBF_FUNC_lab184;
  _1_OBF_FUNC_lab143:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab237;
    } else {
      goto _1_OBF_FUNC_lab269;
    }
  _1_OBF_FUNC_lab109:
    i++;
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab14:
    sum += i;
    goto _1_OBF_FUNC_lab191;
  _1_OBF_FUNC_lab91:
    i++;
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab3:;
    if (tmp___26 % 10 >= 5) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab135;
    }
  _1_OBF_FUNC_lab185:;
    if (__RANDVAR__55191348789615385639__ == 0) {
      goto _1_OBF_FUNC_lab175;
    } else {
      goto _1_OBF_FUNC_lab233;
    }
  _1_OBF_FUNC_lab154:;
    if (tmp___34 % 10 >= 5) {
      goto _1_OBF_FUNC_lab308;
    } else {
      goto _1_OBF_FUNC_lab149;
    }
  _1_OBF_FUNC_lab25:
    __RANDVAR__58095954999892290250__ = 1;
    goto _1_OBF_FUNC_lab234;
  _1_OBF_FUNC_lab234:;
    if (__RANDVAR__58095954999892290250__ == 0) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab102;
    }
  _1_OBF_FUNC_lab74:
    sum += i;
    goto _1_OBF_FUNC_lab144;
  _1_OBF_FUNC_lab181:
    __RANDVAR__59715572545391716306__ = 0;
    goto _1_OBF_FUNC_lab270;
  _1_OBF_FUNC_lab218:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab143;
    }
  _1_OBF_FUNC_lab208:
    tmp___33 = rand();
    goto _1_OBF_FUNC_lab262;
  _1_OBF_FUNC_lab22:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab230;
  _1_OBF_FUNC_lab226:;
    if (tmp___29 % 10 >= 5) {
      goto _1_OBF_FUNC_lab181;
    } else {
      goto _1_OBF_FUNC_lab268;
    }
  _1_OBF_FUNC_lab122:
    __RANDVAR__59715572545391716306__ = 1;
    goto _1_OBF_FUNC_lab270;
  _1_OBF_FUNC_lab249:;
    if (__RANDVAR__17953367476597750262__ == 0) {
      goto _1_OBF_FUNC_lab13;
    } else {
      goto _1_OBF_FUNC_lab219;
    }
  _1_OBF_FUNC_lab176:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab269;
    } else {
      goto _1_OBF_FUNC_lab74;
    }
  _1_OBF_FUNC_lab49:
    i++;
    goto _1_OBF_FUNC_lab278;
  _1_OBF_FUNC_lab256:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab269;
    } else {
      goto _1_OBF_FUNC_lab200;
    }
  _1_OBF_FUNC_lab168:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab303;
    } else {
      goto _1_OBF_FUNC_lab151;
    }
  _1_OBF_FUNC_lab283:
    sum += i;
    goto _1_OBF_FUNC_lab285;
  _1_OBF_FUNC_lab5:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab141;
    } else {
      goto _1_OBF_FUNC_lab218;
    }
  _1_OBF_FUNC_lab299:;
    if (__RANDVAR__89148636455829572579__ == 0) {
      goto _1_OBF_FUNC_lab253;
    } else {
      goto _1_OBF_FUNC_lab152;
    }
  _1_OBF_FUNC_lab89:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab51:
    tmp___12 = rand();
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab2:
    sum += i;
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab71:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab39;
    }
  _1_OBF_FUNC_lab212:
    tmp___28 = rand();
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab64:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab276;
    } else {
      goto _1_OBF_FUNC_lab88;
    }
  _1_OBF_FUNC_lab54:;
    if (tmp___23 % 10 >= 5) {
      goto _1_OBF_FUNC_lab102;
    } else {
      goto _1_OBF_FUNC_lab128;
    }
  _1_OBF_FUNC_lab276:
    tmp___23 = rand();
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab40:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab281;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab239:
    i++;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab213:
    sum += i;
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab28:;
    if (tmp___12 % 10 >= 5) {
      goto _1_OBF_FUNC_lab174;
    } else {
      goto _1_OBF_FUNC_lab283;
    }
  _1_OBF_FUNC_lab260:
    __RANDVAR__3016658056958596301__ = 1;
    goto _1_OBF_FUNC_lab246;
  _1_OBF_FUNC_lab30:
    tmp___26 = rand();
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab279:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab179;
  _1_OBF_FUNC_lab295:
    sum += i;
    goto _1_OBF_FUNC_lab81;
  _1_OBF_FUNC_lab87:;
    if (tmp___16 % 10 >= 5) {
      goto _1_OBF_FUNC_lab271;
    } else {
      goto _1_OBF_FUNC_lab177;
    }
  _1_OBF_FUNC_lab254:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab20;
    } else {
      goto _1_OBF_FUNC_lab113;
    }
  _1_OBF_FUNC_lab315:
    sum += i;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab248:
    __RANDVAR__89148636455829572579__ = 0;
    goto _1_OBF_FUNC_lab299;
  _1_OBF_FUNC_lab128:
    sum += i;
    goto _1_OBF_FUNC_lab239;
  _1_OBF_FUNC_lab247:
    tmp___22 = rand();
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab150:
    sum += i;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab214:
    __RANDVAR__89148636455829572579__ = 1;
    goto _1_OBF_FUNC_lab299;
  _1_OBF_FUNC_lab161:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab30;
    } else {
      goto _1_OBF_FUNC_lab107;
    }
  _1_OBF_FUNC_lab303:
    tmp___21 = rand();
    goto _1_OBF_FUNC_lab277;
  _1_OBF_FUNC_lab148:
    i++;
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab198:
    i++;
    goto _1_OBF_FUNC_lab117;
  _1_OBF_FUNC_lab44:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab23;
    } else {
      goto _1_OBF_FUNC_lab183;
    }
  _1_OBF_FUNC_lab127:;
    if (tmp___18 % 10 >= 5) {
      goto _1_OBF_FUNC_lab152;
    } else {
      goto _1_OBF_FUNC_lab14;
    }
  _1_OBF_FUNC_lab33:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab231;
    }
  _1_OBF_FUNC_lab43:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab176;
  _1_OBF_FUNC_lab173:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab140;
  _1_OBF_FUNC_lab34:
    i++;
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab158:;
    if (tmp___11 % 10 >= 5) {
      goto _1_OBF_FUNC_lab174;
    } else {
      goto _1_OBF_FUNC_lab195;
    }
  _1_OBF_FUNC_lab56:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab53;
    }
  _1_OBF_FUNC_lab246:;
    if (__RANDVAR__3016658056958596301__ == 0) {
      goto _1_OBF_FUNC_lab197;
    } else {
      goto _1_OBF_FUNC_lab121;
    }
  _1_OBF_FUNC_lab189:
    i++;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab194:
    tmp___18 = rand();
    goto _1_OBF_FUNC_lab127;
  _1_OBF_FUNC_lab29:
    tmp___31 = rand();
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab296:
    sum += i;
    goto _1_OBF_FUNC_lab189;
  _1_OBF_FUNC_lab259:
    sum += i;
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab165:
    i++;
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab255:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab59;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab219:
    __RANDVAR__36135678676074563927__ = 0;
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab221:
    sum += i;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab273:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab203;
    } else {
      goto _1_OBF_FUNC_lab183;
    }
  _1_OBF_FUNC_lab10:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab306;
    } else {
      goto _1_OBF_FUNC_lab308;
    }
  _1_OBF_FUNC_lab108:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab110;
    }
  _1_OBF_FUNC_lab58:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab223;
  _1_OBF_FUNC_lab267:
    sum += i;
    goto _1_OBF_FUNC_lab163;
  _1_OBF_FUNC_lab149:
    sum += i;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab261:
    tmp___30 = rand();
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab164:
    sum += i;
    goto _1_OBF_FUNC_lab316;
  _1_OBF_FUNC_lab237:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab5;
    }
  _1_OBF_FUNC_lab32:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab116;
    } else {
      goto _1_OBF_FUNC_lab122;
    }
  _1_OBF_FUNC_lab78:
    sum += i;
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab203:
    sum += i;
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab67:;
    if (tmp___32 % 10 >= 5) {
      goto _1_OBF_FUNC_lab308;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab240:
    i++;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab263:
    tmp = rand();
    goto _1_OBF_FUNC_lab217;
  _1_OBF_FUNC_lab42:
    i++;
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab230:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab269;
    } else {
      goto _1_OBF_FUNC_lab259;
    }
  _1_OBF_FUNC_lab186:
    sum += i;
    goto _1_OBF_FUNC_lab290;
  _1_OBF_FUNC_lab133:
    tmp___14 = rand();
    goto _1_OBF_FUNC_lab169;
  _1_OBF_FUNC_lab202:
    i++;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab114:
    sum += i;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab268:
    sum += i;
    goto _1_OBF_FUNC_lab180;
  _1_OBF_FUNC_lab250:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab35;
    } else {
      goto _1_OBF_FUNC_lab232;
    }
  _1_OBF_FUNC_lab223:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab293;
    }
  _1_OBF_FUNC_lab59:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab145:
    i++;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab138:
    sum += i;
    goto _1_OBF_FUNC_lab80;
  _1_OBF_FUNC_lab196:
    tmp___13 = rand();
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab200:
    sum += i;
    goto _1_OBF_FUNC_lab205;
  _1_OBF_FUNC_lab251:
    i++;
    goto _1_OBF_FUNC_lab232;
  _1_OBF_FUNC_lab9:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab63;
    } else {
      goto _1_OBF_FUNC_lab168;
    }
  _1_OBF_FUNC_lab94:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab51;
    } else {
      goto _1_OBF_FUNC_lab162;
    }
  _1_OBF_FUNC_lab45:;
    if (tmp___22 % 10 >= 5) {
      goto _1_OBF_FUNC_lab214;
    } else {
      goto _1_OBF_FUNC_lab150;
    }
  _1_OBF_FUNC_lab107:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab31;
    } else {
      goto _1_OBF_FUNC_lab125;
    }
  _1_OBF_FUNC_lab182:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab194;
    } else {
      goto _1_OBF_FUNC_lab254;
    }
  _1_OBF_FUNC_lab157:;
    if (tmp___27 % 10 >= 5) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab221;
    }
  _1_OBF_FUNC_lab217:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab233;
    } else {
      goto _1_OBF_FUNC_lab199;
    }
  _1_OBF_FUNC_lab55:
    sum += i;
    goto _1_OBF_FUNC_lab265;
  _1_OBF_FUNC_lab170:
    sum += i;
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab177:
    sum += i;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab26:;
    if (tmp___31 % 10 >= 5) {
      goto _1_OBF_FUNC_lab181;
    } else {
      goto _1_OBF_FUNC_lab55;
    }
  _1_OBF_FUNC_lab130:
    i++;
    goto _1_OBF_FUNC_lab273;
  _1_OBF_FUNC_lab184:;
    if (tmp___19 % 10 >= 5) {
      goto _1_OBF_FUNC_lab152;
    } else {
      goto _1_OBF_FUNC_lab315;
    }
  _1_OBF_FUNC_lab199:
    sum += i;
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab207:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab208;
    } else {
      goto _1_OBF_FUNC_lab294;
    }
  _1_OBF_FUNC_lab265:
    i++;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab90:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab134;
    } else {
      goto _1_OBF_FUNC_lab271;
    }
  _1_OBF_FUNC_lab13:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab58;
    } else {
      goto _1_OBF_FUNC_lab257;
    }
  _1_OBF_FUNC_lab88:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab106;
    } else {
      goto _1_OBF_FUNC_lab278;
    }
  _1_OBF_FUNC_lab272:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab138;
    } else {
      goto _1_OBF_FUNC_lab16;
    }
  _1_OBF_FUNC_lab169:;
    if (tmp___14 % 10 >= 5) {
      goto _1_OBF_FUNC_lab271;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab136:
    tmp___32 = rand();
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab308:
    __RANDVAR__37213152813336455032__ = 1;
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab61:
    i++;
    goto _1_OBF_FUNC_lab309;
  _1_OBF_FUNC_lab39:
    sum += i;
    goto _1_OBF_FUNC_lab235;
  _1_OBF_FUNC_lab151:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab247;
    } else {
      goto _1_OBF_FUNC_lab113;
    }
  _1_OBF_FUNC_lab159:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab161;
    } else {
      goto _1_OBF_FUNC_lab25;
    }
  _1_OBF_FUNC_lab111:
    i++;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab155:
    __RANDVAR__55191348789615385639__ = 0;
    goto _1_OBF_FUNC_lab185;
  _1_OBF_FUNC_lab171:
    sum += i;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab290:
    i++;
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab183:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab272;
    } else {
      goto _1_OBF_FUNC_lab260;
    }
  _1_OBF_FUNC_lab125:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab212;
    } else {
      goto _1_OBF_FUNC_lab159;
    }
  _1_OBF_FUNC_lab53:
    sum += i;
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab231:
    sum += i;
    goto _1_OBF_FUNC_lab288;
  _1_OBF_FUNC_lab269:
    __RANDVAR__55191348789615385639__ = 1;
    goto _1_OBF_FUNC_lab185;
  _1_OBF_FUNC_lab8:;
    if (tmp___13 % 10 >= 5) {
      goto _1_OBF_FUNC_lab174;
    } else {
      goto _1_OBF_FUNC_lab47;
    }
  _1_OBF_FUNC_lab220:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab291;
    } else {
      goto _1_OBF_FUNC_lab44;
    }
  _1_OBF_FUNC_lab70:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab82;
    } else {
      goto _1_OBF_FUNC_lab77;
    }
  _1_OBF_FUNC_lab316:
    i++;
    goto _1_OBF_FUNC_lab207;
  _1_OBF_FUNC_lab17:
    i++;
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab229:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab236;
    } else {
      goto _1_OBF_FUNC_lab117;
    }
  _1_OBF_FUNC_lab172:
    sum += i;
    goto _1_OBF_FUNC_lab243;
  _1_OBF_FUNC_lab174:
    __RANDVAR__3016658056958596301__ = 0;
    goto _1_OBF_FUNC_lab246;
  _1_OBF_FUNC_lab274:;
    if (tmp___17 % 10 >= 5) {
      goto _1_OBF_FUNC_lab152;
    } else {
      goto _1_OBF_FUNC_lab267;
    }
  _1_OBF_FUNC_lab228:
    i++;
    goto _1_OBF_FUNC_lab159;
  _1_OBF_FUNC_lab63:
    tmp___20 = rand();
    goto _1_OBF_FUNC_lab311;
  _1_OBF_FUNC_lab264:;
    if (tmp___25 % 10 >= 5) {
      goto _1_OBF_FUNC_lab102;
    } else {
      goto _1_OBF_FUNC_lab211;
    }
  _1_OBF_FUNC_lab262:;
    if (tmp___33 % 10 >= 5) {
      goto _1_OBF_FUNC_lab308;
    } else {
      goto _1_OBF_FUNC_lab172;
    }
  _1_OBF_FUNC_lab320:
    i++;
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab62:
    sum += i;
    goto _1_OBF_FUNC_lab314;
  _1_OBF_FUNC_lab100:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab279;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab1:
    i++;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab144:
    i++;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab257:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab192;
    } else {
      goto _1_OBF_FUNC_lab255;
    }
  _1_OBF_FUNC_lab123:
    sum += i;
    goto _1_OBF_FUNC_lab251;
  _1_OBF_FUNC_lab188:
    tmp___29 = rand();
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab81:
    i++;
    goto _1_OBF_FUNC_lab168;
  _1_OBF_FUNC_lab191:
    i++;
    goto _1_OBF_FUNC_lab254;
  _1_OBF_FUNC_lab266:
    sum += i;
    goto _1_OBF_FUNC_lab86;
  _1_OBF_FUNC_lab16:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab170;
    } else {
      goto _1_OBF_FUNC_lab273;
    }
  _1_OBF_FUNC_lab6:
    sum += i;
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab236:
    sum += i;
    goto _1_OBF_FUNC_lab198;
  _1_OBF_FUNC_lab60:
    sum += i;
    goto _1_OBF_FUNC_lab240;
  _1_OBF_FUNC_lab179:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab114;
    }
  _1_OBF_FUNC_lab117:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab296;
    } else {
      goto _1_OBF_FUNC_lab32;
    }
  _1_OBF_FUNC_lab192:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab71;
  _1_OBF_FUNC_lab77:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab60;
    } else {
      goto _1_OBF_FUNC_lab32;
    }
  _1_OBF_FUNC_lab83:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab233;
    } else {
      goto _1_OBF_FUNC_lab123;
    }
  _1_OBF_FUNC_lab102:
    __RANDVAR__37213152813336455032__ = 0;
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab216:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab266;
    } else {
      goto _1_OBF_FUNC_lab70;
    }
  _1_OBF_FUNC_lab201:;
    if (tmp___24 % 10 >= 5) {
      goto _1_OBF_FUNC_lab102;
    } else {
      goto _1_OBF_FUNC_lab78;
    }
  _1_OBF_FUNC_lab162:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab196;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab306:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab136;
    } else {
      goto _1_OBF_FUNC_lab207;
    }
  _1_OBF_FUNC_lab285:
    i++;
    goto _1_OBF_FUNC_lab162;
  _1_OBF_FUNC_lab163:
    i++;
    goto _1_OBF_FUNC_lab182;
  _1_OBF_FUNC_lab93:
    i++;
    goto _1_OBF_FUNC_lab156;
  _1_OBF_FUNC_lab294:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab153;
    } else {
      goto _1_OBF_FUNC_lab10;
    }
  _1_OBF_FUNC_lab48:
    i++;
    goto _1_OBF_FUNC_lab151;
  _1_OBF_FUNC_lab166:
    i++;
    goto _1_OBF_FUNC_lab229;
  _1_OBF_FUNC_lab82:
    sum += i;
    goto _1_OBF_FUNC_lab319;
  _1_OBF_FUNC_lab4:;
    if (tmp___28 % 10 >= 5) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab57;
    }
  _1_OBF_FUNC_lab19:
    sum = 0;
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab120:
    i++;
    goto _1_OBF_FUNC_lab257;
  _1_OBF_FUNC_lab7:
    i++;
    goto _1_OBF_FUNC_lab220;
  _1_OBF_FUNC_lab153:
    tmp___34 = rand();
    goto _1_OBF_FUNC_lab154;
  _1_OBF_FUNC_lab270:;
    if (__RANDVAR__59715572545391716306__ == 0) {
      goto _1_OBF_FUNC_lab216;
    } else {
      goto _1_OBF_FUNC_lab173;
    }
  _1_OBF_FUNC_lab258:
    sum += i;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab92:
    tmp___11 = rand();
    goto _1_OBF_FUNC_lab158;
  _1_OBF_FUNC_lab175:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab263;
    } else {
      goto _1_OBF_FUNC_lab250;
    }
  _1_OBF_FUNC_lab142:;
    if (__RANDVAR__36135678676074563927__ == 0) {
      goto _1_OBF_FUNC_lab131;
    } else {
      goto _1_OBF_FUNC_lab174;
    }
  _1_OBF_FUNC_lab314:
    i++;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab271:
    __RANDVAR__36135678676074563927__ = 1;
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab292:;
    if (i < *(argv + 0)) {
      goto _1_OBF_FUNC_lab261;
    } else {
      goto _1_OBF_FUNC_lab65;
    }
  }
}
// variants: loop-fission, loop-unroll, flatten
// expanded variants: loop-fission, loop-unroll, flatten:goto
