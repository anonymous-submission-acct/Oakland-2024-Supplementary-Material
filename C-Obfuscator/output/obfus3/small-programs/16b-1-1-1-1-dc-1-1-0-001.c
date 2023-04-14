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
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
  int __RANDVAR__23609193520882551372__;
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
  void *_1_OBF_FUNC_jumpTab[251] = {&&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab187, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab191, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab206, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab210, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab215, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab217, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab221, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab223, &&_1_OBF_FUNC_lab224, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab230, &&_1_OBF_FUNC_lab231, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab236, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab238, &&_1_OBF_FUNC_lab239, &&_1_OBF_FUNC_lab240, &&_1_OBF_FUNC_lab241, &&_1_OBF_FUNC_lab242, &&_1_OBF_FUNC_lab243, &&_1_OBF_FUNC_lab244, &&_1_OBF_FUNC_lab245, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab247, &&_1_OBF_FUNC_lab248, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251};
  {
    { _1_OBF_FUNC_next = 203UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 1]); }
  _1_OBF_FUNC_lab132:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab236:
    t++;
    goto _1_OBF_FUNC_lab204;
  _1_OBF_FUNC_lab32:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab22:
    t++;
    goto _1_OBF_FUNC_lab229;
  _1_OBF_FUNC_lab39:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab109:
    t++;
    goto _1_OBF_FUNC_lab127;
  _1_OBF_FUNC_lab166:
    t++;
    goto _1_OBF_FUNC_lab207;
  _1_OBF_FUNC_lab168:;
    if (*t) {
      goto _1_OBF_FUNC_lab18;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab53:;
    if (__RANDVAR__23609193520882551372__ == 0) {
      goto _1_OBF_FUNC_lab174;
    } else {
      goto _1_OBF_FUNC_lab29;
    }
  _1_OBF_FUNC_lab203:
    sum = 0;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab188:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab146:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab85:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab223;
    } else {
      goto _1_OBF_FUNC_lab59;
    }
  _1_OBF_FUNC_lab17:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab221;
  _1_OBF_FUNC_lab209:
    t++;
    goto _1_OBF_FUNC_lab227;
  _1_OBF_FUNC_lab99:;
    if (*t) {
      goto _1_OBF_FUNC_lab17;
    } else {
      goto _1_OBF_FUNC_lab47;
    }
  _1_OBF_FUNC_lab206:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab129;
    } else {
      goto _1_OBF_FUNC_lab168;
    }
  _1_OBF_FUNC_lab161:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab86;
  _1_OBF_FUNC_lab58:;
    if (*t) {
      goto _1_OBF_FUNC_lab192;
    } else {
      goto _1_OBF_FUNC_lab150;
    }
  _1_OBF_FUNC_lab196:;
    if (*t) {
      goto _1_OBF_FUNC_lab213;
    } else {
      goto _1_OBF_FUNC_lab44;
    }
  _1_OBF_FUNC_lab21:;
    if (*t) {
      goto _1_OBF_FUNC_lab105;
    } else {
      goto _1_OBF_FUNC_lab227;
    }
  _1_OBF_FUNC_lab176:
    t++;
    goto _1_OBF_FUNC_lab223;
  _1_OBF_FUNC_lab191:;
    if (*t) {
      goto _1_OBF_FUNC_lab48;
    } else {
      goto _1_OBF_FUNC_lab181;
    }
  _1_OBF_FUNC_lab192:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab243;
  _1_OBF_FUNC_lab197:
    t++;
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab200:;
    if (*t) {
      goto _1_OBF_FUNC_lab87;
    } else {
      goto _1_OBF_FUNC_lab150;
    }
  _1_OBF_FUNC_lab69:
    tmp = rand();
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab131:
    __RANDVAR__23609193520882551372__ = 1;
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab45:
    t++;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab245:
    t++;
    goto _1_OBF_FUNC_lab149;
  _1_OBF_FUNC_lab180:;
    if (*t) {
      goto _1_OBF_FUNC_lab153;
    } else {
      goto _1_OBF_FUNC_lab163;
    }
  _1_OBF_FUNC_lab55:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab128;
  _1_OBF_FUNC_lab29:;
    if (__RANDVAR__23609193520882551372__ == 0) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab63:
    t++;
    goto _1_OBF_FUNC_lab180;
  _1_OBF_FUNC_lab73:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab53;
    } else {
      goto _1_OBF_FUNC_lab119;
    }
  _1_OBF_FUNC_lab78:;
    if (*t) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab223;
    }
  _1_OBF_FUNC_lab36:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab91:
    t++;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab218:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab106;
  _1_OBF_FUNC_lab56:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab72;
  _1_OBF_FUNC_lab103:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab245;
  _1_OBF_FUNC_lab224:
    t++;
    goto _1_OBF_FUNC_lab134;
  _1_OBF_FUNC_lab19:
    t = str;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab119:;
    if (*t) {
      goto _1_OBF_FUNC_lab177;
    } else {
      goto _1_OBF_FUNC_lab16;
    }
  _1_OBF_FUNC_lab4:;
    if (*t) {
      goto _1_OBF_FUNC_lab142;
    } else {
      goto _1_OBF_FUNC_lab180;
    }
  _1_OBF_FUNC_lab221:
    t++;
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab194:;
    if (*t) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab204;
    }
  _1_OBF_FUNC_lab201:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab198;
  _1_OBF_FUNC_lab204:;
    if (*t) {
      goto _1_OBF_FUNC_lab97;
    } else {
      goto _1_OBF_FUNC_lab208;
    }
  _1_OBF_FUNC_lab3:
    t++;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab208:;
    if (*t) {
      goto _1_OBF_FUNC_lab146;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab227:;
    if (*t) {
      goto _1_OBF_FUNC_lab74;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab169:;
    if (*t) {
      goto _1_OBF_FUNC_lab30;
    }
  _1_OBF_FUNC_lab71:;
    if (*t) {
      goto _1_OBF_FUNC_lab76;
    } else {
      goto _1_OBF_FUNC_lab107;
    }
  _1_OBF_FUNC_lab95:
    t++;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab212:
    t++;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab177:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab220;
  _1_OBF_FUNC_lab23:;
    if (*t) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab182;
    }
  _1_OBF_FUNC_lab114:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab14;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab165:;
    if (__RANDVAR__23609193520882551372__ == 0) {
      goto _1_OBF_FUNC_lab242;
    } else {
      goto _1_OBF_FUNC_lab53;
    }
  _1_OBF_FUNC_lab223:;
    if (*t) {
      goto _1_OBF_FUNC_lab233;
    } else {
      goto _1_OBF_FUNC_lab131;
    }
  _1_OBF_FUNC_lab175:
    t++;
    goto _1_OBF_FUNC_lab169;
  _1_OBF_FUNC_lab134:;
    if (*t) {
      goto _1_OBF_FUNC_lab173;
    } else {
      goto _1_OBF_FUNC_lab44;
    }
  _1_OBF_FUNC_lab213:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab10:
    __RANDVAR__23609193520882551372__ = 0;
    goto _1_OBF_FUNC_lab230;
  _1_OBF_FUNC_lab164:;
    if (*t) {
      goto _1_OBF_FUNC_lab98;
    } else {
      goto _1_OBF_FUNC_lab196;
    }
  _1_OBF_FUNC_lab199:;
    if (*t) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab14;
    }
  _1_OBF_FUNC_lab76:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab251;
  _1_OBF_FUNC_lab81:;
    if (*t) {
      goto _1_OBF_FUNC_lab36;
    } else {
      goto _1_OBF_FUNC_lab117;
    }
  _1_OBF_FUNC_lab51:;
    if (*t) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab194;
    }
  _1_OBF_FUNC_lab187:;
    if (*t) {
      goto _1_OBF_FUNC_lab190;
    } else {
      goto _1_OBF_FUNC_lab2;
    }
  _1_OBF_FUNC_lab54:
    str = (char const *)*(argv + 1);
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab86:
    t++;
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab149:;
    if (*t) {
      goto _1_OBF_FUNC_lab246;
    } else {
      goto _1_OBF_FUNC_lab187;
    }
  _1_OBF_FUNC_lab52:;
    if (*t) {
      goto _1_OBF_FUNC_lab249;
    } else {
      goto _1_OBF_FUNC_lab130;
    }
  _1_OBF_FUNC_lab18:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab60:
    t++;
    goto _1_OBF_FUNC_lab163;
  _1_OBF_FUNC_lab243:
    t++;
    goto _1_OBF_FUNC_lab150;
  _1_OBF_FUNC_lab14:;
    if (*t) {
      goto _1_OBF_FUNC_lab137;
    } else {
      goto _1_OBF_FUNC_lab223;
    }
  _1_OBF_FUNC_lab249:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab197;
  _1_OBF_FUNC_lab251:
    t++;
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab183:;
    if (*t) {
      goto _1_OBF_FUNC_lab147;
    } else {
      goto _1_OBF_FUNC_lab25;
    }
  _1_OBF_FUNC_lab48:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab210:
    t++;
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab126:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab120:;
    if (*t) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab169;
    }
  _1_OBF_FUNC_lab129:;
    if (*t) {
      goto _1_OBF_FUNC_lab240;
    } else {
      goto _1_OBF_FUNC_lab66;
    }
  _1_OBF_FUNC_lab20:
    t++;
    goto _1_OBF_FUNC_lab196;
  _1_OBF_FUNC_lab172:
    t++;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab82:
    t++;
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab31:
    t++;
    goto _1_OBF_FUNC_lab228;
  _1_OBF_FUNC_lab106:
    t++;
    goto _1_OBF_FUNC_lab208;
  _1_OBF_FUNC_lab62:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab212;
  _1_OBF_FUNC_lab115:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab82;
  _1_OBF_FUNC_lab214:
    t++;
    goto _1_OBF_FUNC_lab141;
  _1_OBF_FUNC_lab38:
    t++;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab88:;
    if (*t) {
      goto _1_OBF_FUNC_lab171;
    } else {
      goto _1_OBF_FUNC_lab207;
    }
  _1_OBF_FUNC_lab151:
    t++;
    goto _1_OBF_FUNC_lab78;
  _1_OBF_FUNC_lab233:;
    if (*t) {
      goto _1_OBF_FUNC_lab112;
    } else {
      goto _1_OBF_FUNC_lab61;
    }
  _1_OBF_FUNC_lab124:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab211:;
    if (*t) {
      goto _1_OBF_FUNC_lab188;
    } else {
      goto _1_OBF_FUNC_lab239;
    }
  _1_OBF_FUNC_lab127:;
    if (*t) {
      goto _1_OBF_FUNC_lab56;
    } else {
      goto _1_OBF_FUNC_lab159;
    }
  _1_OBF_FUNC_lab240:;
    if (*t) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab52;
    }
  _1_OBF_FUNC_lab111:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab214;
  _1_OBF_FUNC_lab83:
    sum *= (int)*t;
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab97:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab231;
  _1_OBF_FUNC_lab107:;
    if (*t) {
      goto _1_OBF_FUNC_lab39;
    } else {
      goto _1_OBF_FUNC_lab199;
    }
  _1_OBF_FUNC_lab125:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab162;
  _1_OBF_FUNC_lab137:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab85;
  _1_OBF_FUNC_lab220:
    t++;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab2:;
    if (*t) {
      goto _1_OBF_FUNC_lab178;
    } else {
      goto _1_OBF_FUNC_lab129;
    }
  _1_OBF_FUNC_lab6:;
    if (*t) {
      goto _1_OBF_FUNC_lab218;
    } else {
      goto _1_OBF_FUNC_lab208;
    }
  _1_OBF_FUNC_lab121:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab238:
    t++;
    goto _1_OBF_FUNC_lab150;
  _1_OBF_FUNC_lab178:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab206;
  _1_OBF_FUNC_lab156:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab217;
  _1_OBF_FUNC_lab144:
    t++;
    goto _1_OBF_FUNC_lab129;
  _1_OBF_FUNC_lab72:
    t++;
    goto _1_OBF_FUNC_lab159;
  _1_OBF_FUNC_lab207:;
    if (*t) {
      goto _1_OBF_FUNC_lab92;
    } else {
      goto _1_OBF_FUNC_lab107;
    }
  _1_OBF_FUNC_lab7:
    t++;
    goto _1_OBF_FUNC_lab194;
  _1_OBF_FUNC_lab231:
    t++;
    goto _1_OBF_FUNC_lab208;
  _1_OBF_FUNC_lab159:;
    if (*t) {
      goto _1_OBF_FUNC_lab104;
    } else {
      goto _1_OBF_FUNC_lab196;
    }
  _1_OBF_FUNC_lab237:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab215;
  _1_OBF_FUNC_lab173:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab157;
  _1_OBF_FUNC_lab26:
    t++;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab250:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab144;
  _1_OBF_FUNC_lab16:;
    if (*t) {
      goto _1_OBF_FUNC_lab161;
    } else {
      goto _1_OBF_FUNC_lab200;
    }
  _1_OBF_FUNC_lab145:;
    if (*t) {
      goto _1_OBF_FUNC_lab156;
    } else {
      goto _1_OBF_FUNC_lab199;
    }
  _1_OBF_FUNC_lab230:;
    if (__RANDVAR__23609193520882551372__ == 0) {
      goto _1_OBF_FUNC_lab69;
    } else {
      goto _1_OBF_FUNC_lab165;
    }
  _1_OBF_FUNC_lab1:
    t++;
    goto _1_OBF_FUNC_lab58;
  _1_OBF_FUNC_lab113:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab164;
    } else {
      goto _1_OBF_FUNC_lab51;
    }
  _1_OBF_FUNC_lab77:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab136:
    t++;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab89:
    __RANDVAR__23609193520882551372__ = 1;
    goto _1_OBF_FUNC_lab230;
  _1_OBF_FUNC_lab190:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab244;
  _1_OBF_FUNC_lab5:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab25:;
    if (*t) {
      goto _1_OBF_FUNC_lab94;
    } else {
      goto _1_OBF_FUNC_lab134;
    }
  _1_OBF_FUNC_lab37:;
    if (*t) {
      goto _1_OBF_FUNC_lab237;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab108:
    t++;
    goto _1_OBF_FUNC_lab117;
  _1_OBF_FUNC_lab142:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab117:;
    if (*t) {
      goto _1_OBF_FUNC_lab126;
    } else {
      goto _1_OBF_FUNC_lab37;
    }
  _1_OBF_FUNC_lab141:;
    if (*t) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab229;
    }
  _1_OBF_FUNC_lab98:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab59:;
    if (*t) {
      goto _1_OBF_FUNC_lab49;
    } else {
      goto _1_OBF_FUNC_lab93;
    }
  _1_OBF_FUNC_lab202:
    t++;
    goto _1_OBF_FUNC_lab71;
  _1_OBF_FUNC_lab24:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab163:;
    if (*t) {
      goto _1_OBF_FUNC_lab24;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab47:;
    if (*t) {
      goto _1_OBF_FUNC_lab124;
    } else {
      goto _1_OBF_FUNC_lab58;
    }
  _1_OBF_FUNC_lab135:
    t++;
    goto _1_OBF_FUNC_lab187;
  _1_OBF_FUNC_lab79:;
    if (sum > 127) {
      goto _1_OBF_FUNC_lab121;
    } else {
      goto _1_OBF_FUNC_lab83;
    }
  _1_OBF_FUNC_lab61:;
    if (*t) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab78;
    }
  _1_OBF_FUNC_lab94:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab224;
  _1_OBF_FUNC_lab174:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab241;
  _1_OBF_FUNC_lab110:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab248;
  _1_OBF_FUNC_lab92:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab210;
  _1_OBF_FUNC_lab102:;
    if (*t) {
      goto _1_OBF_FUNC_lab132;
    } else {
      goto _1_OBF_FUNC_lab127;
    }
  _1_OBF_FUNC_lab74:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab44:;
    if (*t) {
      goto _1_OBF_FUNC_lab183;
    } else {
      goto _1_OBF_FUNC_lab89;
    }
  _1_OBF_FUNC_lab181:;
    if (*t) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab40:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab175;
  _1_OBF_FUNC_lab130:;
    if (*t) {
      goto _1_OBF_FUNC_lab250;
    } else {
      goto _1_OBF_FUNC_lab129;
    }
  _1_OBF_FUNC_lab50:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab165;
    } else {
      goto _1_OBF_FUNC_lab191;
    }
  _1_OBF_FUNC_lab93:;
    if (*t) {
      goto _1_OBF_FUNC_lab77;
    } else {
      goto _1_OBF_FUNC_lab67;
    }
  _1_OBF_FUNC_lab46:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab196;
    } else {
      goto _1_OBF_FUNC_lab81;
    }
  _1_OBF_FUNC_lab242:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab9:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab176;
  _1_OBF_FUNC_lab229:;
    if (*t) {
      goto _1_OBF_FUNC_lab62;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab244:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab2;
    } else {
      goto _1_OBF_FUNC_lab211;
    }
  _1_OBF_FUNC_lab13:
    t++;
    goto _1_OBF_FUNC_lab239;
  _1_OBF_FUNC_lab75:;
    if (*t) {
      goto _1_OBF_FUNC_lab201;
    } else {
      goto _1_OBF_FUNC_lab88;
    }
  _1_OBF_FUNC_lab219:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab236;
  _1_OBF_FUNC_lab153:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab60;
  _1_OBF_FUNC_lab112:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab118;
  _1_OBF_FUNC_lab67:;
    if (*t) {
      goto _1_OBF_FUNC_lab247;
    } else {
      goto _1_OBF_FUNC_lab14;
    }
  _1_OBF_FUNC_lab217:
    t++;
    goto _1_OBF_FUNC_lab199;
  _1_OBF_FUNC_lab157:
    t++;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab118:
    t++;
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab104:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab222:
    t++;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab241:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab75;
    }
  _1_OBF_FUNC_lab66:
    __RANDVAR__23609193520882551372__ = 1;
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab90:;
    if (*t) {
      goto _1_OBF_FUNC_lab57;
    } else {
      goto _1_OBF_FUNC_lab228;
    }
  _1_OBF_FUNC_lab70:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab44;
    } else {
      goto _1_OBF_FUNC_lab102;
    }
  _1_OBF_FUNC_lab150:;
    if (*t) {
      goto _1_OBF_FUNC_lab55;
    } else {
      goto _1_OBF_FUNC_lab187;
    }
  _1_OBF_FUNC_lab57:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab49:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab172;
  _1_OBF_FUNC_lab239:;
    if (*t) {
      goto _1_OBF_FUNC_lab103;
    } else {
      goto _1_OBF_FUNC_lab149;
    }
  _1_OBF_FUNC_lab30:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab128:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab187;
    } else {
      goto _1_OBF_FUNC_lab99;
    }
  _1_OBF_FUNC_lab171:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab166;
  _1_OBF_FUNC_lab64:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab151;
  _1_OBF_FUNC_lab215:
    t++;
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab247:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab41:
    t++;
    goto _1_OBF_FUNC_lab181;
  _1_OBF_FUNC_lab182:
    __RANDVAR__23609193520882551372__ = 1;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab248:
    t++;
    goto _1_OBF_FUNC_lab52;
  _1_OBF_FUNC_lab162:;
    return (0);
  _1_OBF_FUNC_lab87:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab238;
  _1_OBF_FUNC_lab28:;
    if (*t) {
      goto _1_OBF_FUNC_lab111;
    } else {
      goto _1_OBF_FUNC_lab141;
    }
  _1_OBF_FUNC_lab105:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab209;
  _1_OBF_FUNC_lab228:;
    if (*t) {
      goto _1_OBF_FUNC_lab115;
    } else {
      goto _1_OBF_FUNC_lab145;
    }
  _1_OBF_FUNC_lab147:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab136;
  _1_OBF_FUNC_lab27:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab114;
  _1_OBF_FUNC_lab198:
    t++;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab84:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab199;
    } else {
      goto _1_OBF_FUNC_lab120;
    }
  _1_OBF_FUNC_lab43:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab246:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab135;
  }
}
// variants: loop-unroll, loop-fission, flatten
// expanded variants: loop-unroll, loop-fission, flatten:goto
