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
  unsigned int _index0_2;
  int __RANDVAR__65619581901585395825__;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int __RANDVAR__26540140809018585876__;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int __RANDVAR__32098084748399434421__;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int __RANDVAR__18899328639243078584__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[188] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab133, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab180, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab187};
  {
    { _1_OBF_FUNC_next = 151UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab29:
    __RANDVAR__26540140809018585876__ = 1;
    goto _1_OBF_FUNC_lab123;
  _1_OBF_FUNC_lab54:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab148;
    } else {
      goto _1_OBF_FUNC_lab150;
    }
  _1_OBF_FUNC_lab61:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab112:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab150;
    } else {
      goto _1_OBF_FUNC_lab126;
    }
  _1_OBF_FUNC_lab53:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab81:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab7:
    __RANDVAR__32098084748399434421__ = 0;
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab118:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab69:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab94;
    }
  _1_OBF_FUNC_lab138:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab42:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab84:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab23;
    } else {
      goto _1_OBF_FUNC_lab29;
    }
  _1_OBF_FUNC_lab91:;
    if (tmp___14 % 10 >= 5) {
      goto _1_OBF_FUNC_lab103;
    } else {
      goto _1_OBF_FUNC_lab124;
    }
  _1_OBF_FUNC_lab122:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab92;
  _1_OBF_FUNC_lab43:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab47:;
    if (tmp___12 % 10 >= 5) {
      goto _1_OBF_FUNC_lab133;
    } else {
      goto _1_OBF_FUNC_lab140;
    }
  _1_OBF_FUNC_lab186:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab168;
  _1_OBF_FUNC_lab140:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab99;
  _1_OBF_FUNC_lab3:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab175:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab184:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab105;
  _1_OBF_FUNC_lab163:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab126:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab68;
  _1_OBF_FUNC_lab8:
    _index0_2 = 0U;
    goto _1_OBF_FUNC_lab82;
  _1_OBF_FUNC_lab14:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab5:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab94:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab85;
    } else {
      goto _1_OBF_FUNC_lab84;
    }
  _1_OBF_FUNC_lab146:;
    if (__RANDVAR__18899328639243078584__ == 0) {
      goto _1_OBF_FUNC_lab128;
    } else {
      goto _1_OBF_FUNC_lab44;
    }
  _1_OBF_FUNC_lab113:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab13;
    } else {
      goto _1_OBF_FUNC_lab171;
    }
  _1_OBF_FUNC_lab110:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab142:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab67;
    } else {
      goto _1_OBF_FUNC_lab74;
    }
  _1_OBF_FUNC_lab97:
    tmp___13 = rand();
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab176:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab116;
  _1_OBF_FUNC_lab87:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab150:
    __RANDVAR__65619581901585395825__ = 1;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab153:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab158;
    } else {
      goto _1_OBF_FUNC_lab165;
    }
  _1_OBF_FUNC_lab160:
    tmp = rand();
    goto _1_OBF_FUNC_lab134;
  _1_OBF_FUNC_lab10:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab170;
  _1_OBF_FUNC_lab135:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab163;
    }
  _1_OBF_FUNC_lab173:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab104;
  _1_OBF_FUNC_lab170:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab179:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab116:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab162;
  _1_OBF_FUNC_lab48:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab98;
  _1_OBF_FUNC_lab0:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab76:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab139;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab134:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab139;
    } else {
      goto _1_OBF_FUNC_lab32;
    }
  _1_OBF_FUNC_lab107:;
    if (tmp___13 % 10 >= 5) {
      goto _1_OBF_FUNC_lab133;
    } else {
      goto _1_OBF_FUNC_lab36;
    }
  _1_OBF_FUNC_lab162:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab24:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab77:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab66:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab160;
    } else {
      goto _1_OBF_FUNC_lab109;
    }
  _1_OBF_FUNC_lab45:
    localStaticState[1UL] = input + localStaticState[0UL];
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab157:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab171:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab37;
    } else {
      goto _1_OBF_FUNC_lab14;
    }
  _1_OBF_FUNC_lab185:
    tmp___15 = rand();
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab149:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab2:;
    if (__RANDVAR__65619581901585395825__ == 0) {
      goto _1_OBF_FUNC_lab66;
    } else {
      goto _1_OBF_FUNC_lab139;
    }
  _1_OBF_FUNC_lab98:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab178:
    tmp___14 = rand();
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab125:;
    if (tmp___16 % 10 >= 5) {
      goto _1_OBF_FUNC_lab103;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab131:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab147;
    }
  _1_OBF_FUNC_lab139:
    __RANDVAR__26540140809018585876__ = 0;
    goto _1_OBF_FUNC_lab123;
  _1_OBF_FUNC_lab67:
    tmp___12 = rand();
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab121:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab60;
  _1_OBF_FUNC_lab72:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab89:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab50:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab72;
    }
  _1_OBF_FUNC_lab82:
    __RANDVAR__65619581901585395825__ = 0;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab101:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab149;
    }
  _1_OBF_FUNC_lab6:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab168:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab144;
    }
  _1_OBF_FUNC_lab85:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab135;
  _1_OBF_FUNC_lab1:;
    if (tmp___15 % 10 >= 5) {
      goto _1_OBF_FUNC_lab103;
    } else {
      goto _1_OBF_FUNC_lab26;
    }
  _1_OBF_FUNC_lab137:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab95:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab175;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab88:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab18:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab117;
  _1_OBF_FUNC_lab36:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab187:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab127;
  _1_OBF_FUNC_lab117:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab109:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab71;
    } else {
      goto _1_OBF_FUNC_lab96;
    }
  _1_OBF_FUNC_lab128:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab138;
    } else {
      goto _1_OBF_FUNC_lab15;
    }
  _1_OBF_FUNC_lab133:
    __RANDVAR__18899328639243078584__ = 0;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab22:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab102:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab153;
  _1_OBF_FUNC_lab143:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab74;
  _1_OBF_FUNC_lab19:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab144:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab86;
    } else {
      goto _1_OBF_FUNC_lab84;
    }
  _1_OBF_FUNC_lab123:;
    if (__RANDVAR__26540140809018585876__ == 0) {
      goto _1_OBF_FUNC_lab169;
    } else {
      goto _1_OBF_FUNC_lab7;
    }
  _1_OBF_FUNC_lab28:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab178;
    } else {
      goto _1_OBF_FUNC_lab132;
    }
  _1_OBF_FUNC_lab124:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab157;
  _1_OBF_FUNC_lab165:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab103;
    }
  _1_OBF_FUNC_lab27:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab90:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab130:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab46:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab131;
  _1_OBF_FUNC_lab147:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab179;
  _1_OBF_FUNC_lab119:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab112;
  _1_OBF_FUNC_lab25:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab187;
    }
  _1_OBF_FUNC_lab33:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab119;
    } else {
      goto _1_OBF_FUNC_lab100;
    }
  _1_OBF_FUNC_lab32:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab184;
  _1_OBF_FUNC_lab148:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab83;
    } else {
      goto _1_OBF_FUNC_lab33;
    }
  _1_OBF_FUNC_lab129:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab150;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab21:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab173;
  _1_OBF_FUNC_lab35:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab122;
  _1_OBF_FUNC_lab9:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab113;
    } else {
      goto _1_OBF_FUNC_lab114;
    }
  _1_OBF_FUNC_lab26:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab182;
  _1_OBF_FUNC_lab92:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab96;
  _1_OBF_FUNC_lab111:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab144;
  _1_OBF_FUNC_lab180:;
    if (tmp___11 % 10 >= 5) {
      goto _1_OBF_FUNC_lab133;
    } else {
      goto _1_OBF_FUNC_lab5;
    }
  _1_OBF_FUNC_lab13:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab27;
  _1_OBF_FUNC_lab20:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab151:
    localStaticState[0UL] = (unsigned int)((unsigned long)input * 719137533UL + 1718950238UL);
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab145:;
    if (__RANDVAR__32098084748399434421__ == 0) {
      goto _1_OBF_FUNC_lab58;
    } else {
      goto _1_OBF_FUNC_lab133;
    }
  _1_OBF_FUNC_lab104:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab105:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab93:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab174:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab100;
  _1_OBF_FUNC_lab154:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab118;
  _1_OBF_FUNC_lab37:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab155;
  _1_OBF_FUNC_lab44:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab121;
  _1_OBF_FUNC_lab86:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab101;
  _1_OBF_FUNC_lab63:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab171;
  _1_OBF_FUNC_lab73:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab29;
    } else {
      goto _1_OBF_FUNC_lab137;
    }
  _1_OBF_FUNC_lab169:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab46;
    } else {
      goto _1_OBF_FUNC_lab168;
    }
  _1_OBF_FUNC_lab83:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab129;
  _1_OBF_FUNC_lab96:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab87;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab68:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab174;
  _1_OBF_FUNC_lab100:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab172;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab79:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[(unsigned long)_index0_2 % 2UL];
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab120:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab139;
    } else {
      goto _1_OBF_FUNC_lab35;
    }
  _1_OBF_FUNC_lab39:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab103:
    __RANDVAR__32098084748399434421__ = 1;
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab155:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab172:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab75:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab58:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab11;
    } else {
      goto _1_OBF_FUNC_lab142;
    }
  _1_OBF_FUNC_lab99:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab167:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab150;
    } else {
      goto _1_OBF_FUNC_lab176;
    }
  _1_OBF_FUNC_lab23:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab89;
    } else {
      goto _1_OBF_FUNC_lab69;
    }
  _1_OBF_FUNC_lab11:
    tmp___11 = rand();
    goto _1_OBF_FUNC_lab180;
  _1_OBF_FUNC_lab60:;
    return ((localStaticState[0UL] + localStaticState[1UL]) + 276188989U);
  _1_OBF_FUNC_lab127:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab71:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab12:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab4:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab81;
  _1_OBF_FUNC_lab182:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab102;
  _1_OBF_FUNC_lab158:
    tmp___16 = rand();
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab64:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab59:
    _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab114:
    __RANDVAR__18899328639243078584__ = 1;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab132:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab185;
    } else {
      goto _1_OBF_FUNC_lab153;
    }
  _1_OBF_FUNC_lab74:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab97;
    } else {
      goto _1_OBF_FUNC_lab165;
    }
  _1_OBF_FUNC_lab15:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab154;
    } else {
      goto _1_OBF_FUNC_lab95;
    }
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
// variants: loop-fission, loop-unroll, flatten
// expanded variants: loop-fission, loop-unroll, flatten:goto
