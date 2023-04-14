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
  int __RANDVAR__38681939688194791621__;
  int i;
  int j;
  int __RANDVAR__62643756678695836677__;
  int sum;
  char const *str;
  register char const *s;
  int __RANDVAR__5745245026876268862__;
  int __RANDVAR__27206988666760614529__;
  register char const *t;
  int tmp;
  int __RANDVAR__20951252526675217634__;
  int __RANDVAR__8146143103385182049__;
  int tmp___0;
  int __RANDVAR__20951252526675217634_____0;
  int __RANDVAR__8146143103385182049_____0;
  int tmp___1;
  int __RANDVAR__20951252526675217634_____1;
  int __RANDVAR__8146143103385182049_____1;
  int __RANDVAR__20951252526675217634_____2;
  int __RANDVAR__8146143103385182049_____2;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[116] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115};
  {
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab69:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab115:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab15:
    str = (char const *)*(argv + 1);
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab74:;
    if (__RANDVAR__62643756678695836677__ < __RANDVAR__20951252526675217634__) {
      goto _1_OBF_FUNC_lab56;
    } else {
      goto _1_OBF_FUNC_lab105;
    }
  _1_OBF_FUNC_lab92:
    sum = 0;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab67:
    __RANDVAR__20951252526675217634_____1 -= 498;
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab27:
    t++;
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab24:
    i++;
    goto _1_OBF_FUNC_lab100;
  _1_OBF_FUNC_lab19:
    __RANDVAR__62643756678695836677__ -= 706;
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab28:
    argv -= 211;
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab18:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab10:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab4:
    __RANDVAR__20951252526675217634__ += 498;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab22:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab107:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab46:
    __RANDVAR__20951252526675217634_____0 = 946;
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab95:
    t++;
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab96:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab42;
    } else {
      goto _1_OBF_FUNC_lab114;
    }
  _1_OBF_FUNC_lab17:
    __RANDVAR__62643756678695836677__ = __RANDVAR__62643756678695836677__ * 985 + 112;
    goto _1_OBF_FUNC_lab92;
  _1_OBF_FUNC_lab25:;
    if (699160 < __RANDVAR__38681939688194791621__) {
      goto _1_OBF_FUNC_lab52;
    } else {
      goto _1_OBF_FUNC_lab87;
    }
  _1_OBF_FUNC_lab48:
    t = str;
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab81:;
    if (*t) {
      goto _1_OBF_FUNC_lab111;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab38:
    __RANDVAR__62643756678695836677__ += 706;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab87:
    argv -= 112;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab45:;
    if (__RANDVAR__62643756678695836677__ < __RANDVAR__20951252526675217634_____1) {
      goto _1_OBF_FUNC_lab67;
    } else {
      goto _1_OBF_FUNC_lab36;
    }
  _1_OBF_FUNC_lab59:
    argc -= 940;
    goto _1_OBF_FUNC_lab78;
  _1_OBF_FUNC_lab63:
    __RANDVAR__62643756678695836677__ += 706;
    goto _1_OBF_FUNC_lab27;
  _1_OBF_FUNC_lab103:;
    if (*t) {
      goto _1_OBF_FUNC_lab107;
    } else {
      goto _1_OBF_FUNC_lab109;
    }
  _1_OBF_FUNC_lab61:
    __RANDVAR__20951252526675217634_____0 += 498;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab21:;
    if (i < 16) {
      goto _1_OBF_FUNC_lab72;
    } else {
      goto _1_OBF_FUNC_lab83;
    }
  _1_OBF_FUNC_lab41:
    __RANDVAR__20951252526675217634_____1 += 498;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab82:
    __RANDVAR__27206988666760614529__ = 93;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab47:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab96;
  _1_OBF_FUNC_lab68:
    __RANDVAR__20951252526675217634_____1 = 946;
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab114:
    argc -= 654;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab40:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab109;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab101:
    __RANDVAR__20951252526675217634__ = 946;
    goto _1_OBF_FUNC_lab74;
  _1_OBF_FUNC_lab57:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab100:;
    if (i < 16) {
      goto _1_OBF_FUNC_lab89;
    } else {
      goto _1_OBF_FUNC_lab84;
    }
  _1_OBF_FUNC_lab56:
    __RANDVAR__20951252526675217634__ -= 498;
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab104:
    __RANDVAR__62643756678695836677__ += 706;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab79:
    argc -= 654;
    goto _1_OBF_FUNC_lab110;
  _1_OBF_FUNC_lab1:
    argc += 654;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab112:
    argc -= 385;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab113:
    i++;
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab29:
    i = 0;
    goto _1_OBF_FUNC_lab100;
  _1_OBF_FUNC_lab55:
    argv += 211;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab89:
    tmp = rand();
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab71:
    argc += 654;
    goto _1_OBF_FUNC_lab57;
  _1_OBF_FUNC_lab76:
    __RANDVAR__62643756678695836677__ -= 706;
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab0:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab83;
    } else {
      goto _1_OBF_FUNC_lab68;
    }
  _1_OBF_FUNC_lab102:
    __RANDVAR__20951252526675217634_____2 -= 498;
    goto _1_OBF_FUNC_lab98;
  _1_OBF_FUNC_lab44:
    sum += i;
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab39:
    argv += 112;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab51:;
    if (__RANDVAR__62643756678695836677__ < __RANDVAR__20951252526675217634_____0) {
      goto _1_OBF_FUNC_lab31;
    } else {
      goto _1_OBF_FUNC_lab7;
    }
  _1_OBF_FUNC_lab70:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab81;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab72:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab23:
    argc += 654;
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab109:;
    if (*t) {
      goto _1_OBF_FUNC_lab47;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab13:
    __RANDVAR__38681939688194791621__ = 425;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab9:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab30:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab84;
    } else {
      goto _1_OBF_FUNC_lab101;
    }
  _1_OBF_FUNC_lab2:
    __RANDVAR__62643756678695836677__ += 130;
    goto _1_OBF_FUNC_lab64;
  _1_OBF_FUNC_lab11:
    __RANDVAR__62643756678695836677__ -= 706;
    goto _1_OBF_FUNC_lab104;
  _1_OBF_FUNC_lab77:;
    return (0);
  _1_OBF_FUNC_lab37:
    t++;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab50:
    __RANDVAR__62643756678695836677__ += 706;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab12:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab108:
    argc -= 654;
    goto _1_OBF_FUNC_lab71;
  _1_OBF_FUNC_lab84:;
    if (i < 16) {
      goto _1_OBF_FUNC_lab18;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab52:
    argc += 385;
    goto _1_OBF_FUNC_lab112;
  _1_OBF_FUNC_lab111:
    argc -= 654;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab98:
    __RANDVAR__20951252526675217634_____2 += 498;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab64:
    __RANDVAR__62643756678695836677__ -= 130;
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab36:
    __RANDVAR__8146143103385182049_____1 -= 926;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab14:;
    if (__RANDVAR__5745245026876268862__ < 893) {
      goto _1_OBF_FUNC_lab59;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab110:
    argc += 654;
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab91:
    __RANDVAR__5745245026876268862__ = __RANDVAR__62643756678695836677__;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab5:
    sum += i;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab31:
    __RANDVAR__20951252526675217634_____0 -= 498;
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab16:
    t++;
    goto _1_OBF_FUNC_lab81;
  _1_OBF_FUNC_lab32:;
    if (__RANDVAR__62643756678695836677__ < __RANDVAR__20951252526675217634_____2) {
      goto _1_OBF_FUNC_lab102;
    } else {
      goto _1_OBF_FUNC_lab75;
    }
  _1_OBF_FUNC_lab78:
    argc += 940;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab65:
    i++;
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab83:;
    if (i < 16) {
      goto _1_OBF_FUNC_lab94;
    } else {
      goto _1_OBF_FUNC_lab48;
    }
  _1_OBF_FUNC_lab93:
    sum += i;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab94:
    __RANDVAR__20951252526675217634_____2 = 946;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab105:
    __RANDVAR__8146143103385182049__ -= 926;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab20:
    sum += i;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab73:
    i++;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab75:
    __RANDVAR__8146143103385182049_____2 -= 926;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab7:
    __RANDVAR__8146143103385182049_____0 -= 926;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab26:
    __RANDVAR__62643756678695836677__ -= 706;
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab42:;
    if (*t) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab81;
    }
  }
}
// variants: irrelevant-code, loop-fission, flatten
// expanded variants: irrelevant-code, loop-fission, flatten:goto
