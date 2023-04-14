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
  unsigned int _index0_6;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
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
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[268] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab161, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab189, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab191, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab193, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab206, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab210, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab215, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab223, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab225, &&_1_OBF_FUNC_lab226, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab230, &&_1_OBF_FUNC_lab231, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab234, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab238, &&_1_OBF_FUNC_lab239, &&_1_OBF_FUNC_lab240, &&_1_OBF_FUNC_lab241, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab244, &&_1_OBF_FUNC_lab245, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251, &&_1_OBF_FUNC_lab252, &&_1_OBF_FUNC_lab253, &&_1_OBF_FUNC_lab254, &&_1_OBF_FUNC_lab255, &&_1_OBF_FUNC_lab256, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab258, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab260, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab263, &&_1_OBF_FUNC_lab264, &&_1_OBF_FUNC_lab265, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab267};
  {
    { _1_OBF_FUNC_next = 8UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab129:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab210;
  _1_OBF_FUNC_lab104:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab197;
  _1_OBF_FUNC_lab127:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab119;
  _1_OBF_FUNC_lab230:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab109;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab206:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab253;
  _1_OBF_FUNC_lab198:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab193;
    }
  _1_OBF_FUNC_lab6:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab220;
  _1_OBF_FUNC_lab72:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab106;
  _1_OBF_FUNC_lab33:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab88:
    localStaticState[1UL] = (input + localStaticState[0UL]) - 2390388115U;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab62:;
    if (tmp___16 % 10 >= 5) {
      goto _1_OBF_FUNC_lab198;
    } else {
      goto _1_OBF_FUNC_lab241;
    }
  _1_OBF_FUNC_lab264:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab189;
  _1_OBF_FUNC_lab214:
    _index6_0++;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab199:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab203;
  _1_OBF_FUNC_lab212:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab254;
    } else {
      goto _1_OBF_FUNC_lab123;
    }
  _1_OBF_FUNC_lab201:
    localStaticState[(unsigned long)_index0_6 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab191;
  _1_OBF_FUNC_lab223:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab251:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index4_3 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab234:
    tmp___15 = rand();
    goto _1_OBF_FUNC_lab177;
  _1_OBF_FUNC_lab25:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab128;
    } else {
      goto _1_OBF_FUNC_lab211;
    }
  _1_OBF_FUNC_lab244:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab174:;
    if (tmp___12 % 10 >= 5) {
      goto _1_OBF_FUNC_lab95;
    } else {
      goto _1_OBF_FUNC_lab240;
    }
  _1_OBF_FUNC_lab50:
    _index6_0++;
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab208:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab168;
    } else {
      goto _1_OBF_FUNC_lab205;
    }
  _1_OBF_FUNC_lab194:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab146;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab246:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab234;
    } else {
      goto _1_OBF_FUNC_lab107;
    }
  _1_OBF_FUNC_lab255:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index4_3 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab206;
  _1_OBF_FUNC_lab168:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab249;
  _1_OBF_FUNC_lab227:
    _index0_6 = 0U;
    goto _1_OBF_FUNC_lab209;
  _1_OBF_FUNC_lab157:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_6 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab148;
  _1_OBF_FUNC_lab130:
    tmp___13 = rand();
    goto _1_OBF_FUNC_lab71;
  _1_OBF_FUNC_lab45:;
    if (tmp___11 % 10 >= 5) {
      goto _1_OBF_FUNC_lab228;
    } else {
      goto _1_OBF_FUNC_lab37;
    }
  _1_OBF_FUNC_lab70:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab39:
    tmp___12 = rand();
    goto _1_OBF_FUNC_lab174;
  _1_OBF_FUNC_lab241:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab205:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab231;
    } else {
      goto _1_OBF_FUNC_lab146;
    }
  _1_OBF_FUNC_lab177:;
    if (tmp___15 % 10 >= 5) {
      goto _1_OBF_FUNC_lab107;
    } else {
      goto _1_OBF_FUNC_lab122;
    }
  _1_OBF_FUNC_lab252:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab195;
    } else {
      goto _1_OBF_FUNC_lab109;
    }
  _1_OBF_FUNC_lab9:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab211:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab172;
    } else {
      goto _1_OBF_FUNC_lab73;
    }
  _1_OBF_FUNC_lab121:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab55;
    } else {
      goto _1_OBF_FUNC_lab206;
    }
  _1_OBF_FUNC_lab215:;
    if ((unsigned long)_index0_6 < 6UL) {
      goto _1_OBF_FUNC_lab199;
    } else {
      goto _1_OBF_FUNC_lab229;
    }
  _1_OBF_FUNC_lab207:
    _index2_2 = (unsigned int)((unsigned long)_index2_2 + 2UL);
    goto _1_OBF_FUNC_lab213;
  _1_OBF_FUNC_lab24:
    _index0_6 = (unsigned int)((unsigned long)_index0_6 + 2UL);
    goto _1_OBF_FUNC_lab229;
  _1_OBF_FUNC_lab237:
    _index6_0++;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab23:;
    switch ((unsigned long)((int)(localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab49;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab135;
      break;
    default:
      goto _1_OBF_FUNC_lab44;
    }
  _1_OBF_FUNC_lab19:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
    goto _1_OBF_FUNC_lab151;
  _1_OBF_FUNC_lab116:
    _index6_0++;
    goto _1_OBF_FUNC_lab198;
  _1_OBF_FUNC_lab138:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab157;
    } else {
      goto _1_OBF_FUNC_lab148;
    }
  _1_OBF_FUNC_lab250:
    _index4_3 = 0U;
    goto _1_OBF_FUNC_lab252;
  _1_OBF_FUNC_lab258:
    _index6_0++;
    goto _1_OBF_FUNC_lab208;
  _1_OBF_FUNC_lab143:
    _index6_0++;
    goto _1_OBF_FUNC_lab228;
  _1_OBF_FUNC_lab109:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab82;
    } else {
      goto _1_OBF_FUNC_lab63;
    }
  _1_OBF_FUNC_lab153:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_6 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab69:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab59;
    }
  _1_OBF_FUNC_lab107:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab166;
    } else {
      goto _1_OBF_FUNC_lab198;
    }
  _1_OBF_FUNC_lab87:;
    if (tmp___14 % 10 >= 5) {
      goto _1_OBF_FUNC_lab246;
    } else {
      goto _1_OBF_FUNC_lab245;
    }
  _1_OBF_FUNC_lab213:;
    if ((unsigned long)_index2_2 < 2UL) {
      goto _1_OBF_FUNC_lab117;
    } else {
      goto _1_OBF_FUNC_lab211;
    }
  _1_OBF_FUNC_lab81:
    tmp = rand();
    goto _1_OBF_FUNC_lab141;
  _1_OBF_FUNC_lab144:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
    goto _1_OBF_FUNC_lab101;
  _1_OBF_FUNC_lab200:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab258;
  _1_OBF_FUNC_lab228:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab39;
    } else {
      goto _1_OBF_FUNC_lab95;
    }
  _1_OBF_FUNC_lab225:
    _index6_0++;
    goto _1_OBF_FUNC_lab197;
  _1_OBF_FUNC_lab80:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_6 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab17:
    localStaticState[(unsigned long)_index0_6 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab138;
  _1_OBF_FUNC_lab54:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab134:
    _index6_0++;
    goto _1_OBF_FUNC_lab246;
  _1_OBF_FUNC_lab197:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab124;
    } else {
      goto _1_OBF_FUNC_lab246;
    }
  _1_OBF_FUNC_lab8:
    localStaticState[0UL] = input - 263503274U;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab238:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab68;
  _1_OBF_FUNC_lab35:;
    if ((unsigned long)_index0_6 < 6UL) {
      goto _1_OBF_FUNC_lab89;
    } else {
      goto _1_OBF_FUNC_lab215;
    }
  _1_OBF_FUNC_lab147:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab208;
  _1_OBF_FUNC_lab4:
    _index0_6 = (unsigned int)((unsigned long)_index0_6 + 2UL);
    goto _1_OBF_FUNC_lab215;
  _1_OBF_FUNC_lab63:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab130;
    } else {
      goto _1_OBF_FUNC_lab69;
    }
  _1_OBF_FUNC_lab141:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab35;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab76:
    localStaticState[(unsigned long)_index0_6 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab239;
  _1_OBF_FUNC_lab101:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab226:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab92;
  _1_OBF_FUNC_lab117:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab207;
  _1_OBF_FUNC_lab265:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab238;
  _1_OBF_FUNC_lab137:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab186:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab135:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab144;
    } else {
      goto _1_OBF_FUNC_lab149;
    }
  _1_OBF_FUNC_lab75:
    localStaticState[(unsigned long)_index0_6 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
    goto _1_OBF_FUNC_lab256;
  _1_OBF_FUNC_lab183:
    _index0_6 = (unsigned int)((unsigned long)_index0_6 + 2UL);
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab178:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab206;
  _1_OBF_FUNC_lab114:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab210:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab121;
    } else {
      goto _1_OBF_FUNC_lab188;
    }
  _1_OBF_FUNC_lab38:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab134;
  _1_OBF_FUNC_lab92:
    _index4_3++;
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab66:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab85:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab102;
  _1_OBF_FUNC_lab161:;
    if ((unsigned long)_index2_2 < 2UL) {
      goto _1_OBF_FUNC_lab142;
    } else {
      goto _1_OBF_FUNC_lab213;
    }
  _1_OBF_FUNC_lab30:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab167;
    } else {
      goto _1_OBF_FUNC_lab196;
    }
  _1_OBF_FUNC_lab122:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab193:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab263;
  _1_OBF_FUNC_lab191:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab153;
    } else {
      goto _1_OBF_FUNC_lab120;
    }
  _1_OBF_FUNC_lab47:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab225;
  _1_OBF_FUNC_lab176:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab49:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index4_3 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab108:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab128:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab227;
  _1_OBF_FUNC_lab74:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab63;
    } else {
      goto _1_OBF_FUNC_lab11;
    }
  _1_OBF_FUNC_lab219:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab226;
    }
  _1_OBF_FUNC_lab164:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index4_3 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab238;
  _1_OBF_FUNC_lab68:
    _index4_3++;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab44:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab104;
  _1_OBF_FUNC_lab98:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
    goto _1_OBF_FUNC_lab178;
  _1_OBF_FUNC_lab253:
    _index4_3++;
    goto _1_OBF_FUNC_lab252;
  _1_OBF_FUNC_lab11:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab175;
    } else {
      goto _1_OBF_FUNC_lab238;
    }
  _1_OBF_FUNC_lab71:;
    if (tmp___13 % 10 >= 5) {
      goto _1_OBF_FUNC_lab69;
    } else {
      goto _1_OBF_FUNC_lab58;
    }
  _1_OBF_FUNC_lab151:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab203:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab229;
    } else {
      goto _1_OBF_FUNC_lab66;
    }
  _1_OBF_FUNC_lab142:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab254:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
    goto _1_OBF_FUNC_lab265;
  _1_OBF_FUNC_lab267:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab161;
    } else {
      goto _1_OBF_FUNC_lab70;
    }
  _1_OBF_FUNC_lab120:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab196:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab118;
    } else {
      goto _1_OBF_FUNC_lab228;
    }
  _1_OBF_FUNC_lab65:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab213;
    }
  _1_OBF_FUNC_lab156:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab229:;
    if ((unsigned long)_index0_6 < 6UL) {
      goto _1_OBF_FUNC_lab13;
    } else {
      goto _1_OBF_FUNC_lab51;
    }
  _1_OBF_FUNC_lab155:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab19;
    } else {
      goto _1_OBF_FUNC_lab223;
    }
  _1_OBF_FUNC_lab188:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab154;
  _1_OBF_FUNC_lab58:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab23;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab222:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab215;
    } else {
      goto _1_OBF_FUNC_lab114;
    }
  _1_OBF_FUNC_lab179:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab267;
  _1_OBF_FUNC_lab190:
    _index2_2 = 0U;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab173:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab83:
    _index6_0++;
    goto _1_OBF_FUNC_lab205;
  _1_OBF_FUNC_lab86:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab237;
  _1_OBF_FUNC_lab37:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab185;
  _1_OBF_FUNC_lab124:
    tmp___14 = rand();
    goto _1_OBF_FUNC_lab87;
  _1_OBF_FUNC_lab158:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab98;
    } else {
      goto _1_OBF_FUNC_lab184;
    }
  _1_OBF_FUNC_lab56:
    _index0_6 = (unsigned int)((unsigned long)_index0_6 + 2UL);
    goto _1_OBF_FUNC_lab209;
  _1_OBF_FUNC_lab102:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab214;
  _1_OBF_FUNC_lab82:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab74;
  _1_OBF_FUNC_lab77:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab189:
    _index6_0++;
    goto _1_OBF_FUNC_lab121;
  _1_OBF_FUNC_lab263:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab116;
  _1_OBF_FUNC_lab166:
    tmp___16 = rand();
    goto _1_OBF_FUNC_lab62;
  _1_OBF_FUNC_lab249:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab205;
    } else {
      goto _1_OBF_FUNC_lab33;
    }
  _1_OBF_FUNC_lab209:;
    if ((unsigned long)_index0_6 < 6UL) {
      goto _1_OBF_FUNC_lab81;
    } else {
      goto _1_OBF_FUNC_lab35;
    }
  _1_OBF_FUNC_lab79:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab0;
    } else {
      goto _1_OBF_FUNC_lab206;
    }
  _1_OBF_FUNC_lab204:
    _index6_0++;
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab260:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_6 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab195:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab230;
  _1_OBF_FUNC_lab202:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab86;
  _1_OBF_FUNC_lab0:;
    switch ((unsigned long)((int)(localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab255;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab158;
      break;
    default:
      goto _1_OBF_FUNC_lab93;
    }
  _1_OBF_FUNC_lab167:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab240:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab137;
  _1_OBF_FUNC_lab256:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab260;
    } else {
      goto _1_OBF_FUNC_lab186;
    }
  _1_OBF_FUNC_lab148:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab185:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab73:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab250;
  _1_OBF_FUNC_lab106:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab165;
    } else {
      goto _1_OBF_FUNC_lab192;
    }
  _1_OBF_FUNC_lab231:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab194;
  _1_OBF_FUNC_lab220:
    _index4_3++;
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab154:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab139:
    _index2_2 = (unsigned int)((unsigned long)_index2_2 + 2UL);
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab132:
    _index2_2 = (unsigned int)((unsigned long)_index2_2 + 2UL);
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab46:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab244;
  _1_OBF_FUNC_lab34:
    _index6_0++;
    goto _1_OBF_FUNC_lab196;
  _1_OBF_FUNC_lab55:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab264;
  _1_OBF_FUNC_lab146:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab129;
    } else {
      goto _1_OBF_FUNC_lab121;
    }
  _1_OBF_FUNC_lab91:;
    if ((unsigned long)_index2_2 < 2UL) {
      goto _1_OBF_FUNC_lab72;
    } else {
      goto _1_OBF_FUNC_lab165;
    }
  _1_OBF_FUNC_lab31:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab85;
    } else {
      goto _1_OBF_FUNC_lab226;
    }
  _1_OBF_FUNC_lab110:;
    switch ((unsigned long)((int)(localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab251;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab155;
      break;
    default:
      goto _1_OBF_FUNC_lab176;
    }
  _1_OBF_FUNC_lab245:
    localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[(unsigned long)_induction7_6_2 % 2UL];
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab118:
    tmp___11 = rand();
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab184:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab206;
  _1_OBF_FUNC_lab89:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab15:
    _index2_2 = (unsigned int)((unsigned long)_index2_2 + 2UL);
    goto _1_OBF_FUNC_lab161;
  _1_OBF_FUNC_lab13:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] += localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab201;
  _1_OBF_FUNC_lab175:;
    switch ((unsigned long)((int)(localStaticState[_induction5_4_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab164;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab212;
      break;
    default:
      goto _1_OBF_FUNC_lab173;
    }
  _1_OBF_FUNC_lab192:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab139;
  _1_OBF_FUNC_lab51:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab190;
  _1_OBF_FUNC_lab95:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab202;
    } else {
      goto _1_OBF_FUNC_lab238;
    }
  _1_OBF_FUNC_lab172:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab94:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab196;
    } else {
      goto _1_OBF_FUNC_lab127;
    }
  _1_OBF_FUNC_lab59:;
    return ((unsigned int)((long)(localStaticState[0UL] * localStaticState[1UL]) * 3661809250L));
  _1_OBF_FUNC_lab149:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab93:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab147;
  _1_OBF_FUNC_lab16:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab165:;
    if ((unsigned long)_index2_2 < 2UL) {
      goto _1_OBF_FUNC_lab179;
    } else {
      goto _1_OBF_FUNC_lab161;
    }
  _1_OBF_FUNC_lab239:;
    if ((localStaticState[1UL] >> 1U) & 1U) {
      goto _1_OBF_FUNC_lab80;
    } else {
      goto _1_OBF_FUNC_lab77;
    }
  _1_OBF_FUNC_lab119:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab204;
  _1_OBF_FUNC_lab123:
    localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab238;
  _1_OBF_FUNC_lab43:
    _index6_0++;
    goto _1_OBF_FUNC_lab146;
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
// expanded variants: loop-fission, flatten:goto
