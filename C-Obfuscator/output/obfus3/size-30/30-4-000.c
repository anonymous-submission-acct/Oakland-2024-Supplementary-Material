typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(rand)();
extern int(strtol)();
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
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_2;
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
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[237] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab133, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab185, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab193, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab196, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab206, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab215, &&_1_OBF_FUNC_lab216, &&_1_OBF_FUNC_lab217, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab224, &&_1_OBF_FUNC_lab225, &&_1_OBF_FUNC_lab226, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab231, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab234, &&_1_OBF_FUNC_lab235, &&_1_OBF_FUNC_lab236};
  {
    { _1_OBF_FUNC_next = 67UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab158:
    localStaticState[1UL] = localStaticState[0UL] - localStaticState[1UL];
    goto _1_OBF_FUNC_lab229;
  _1_OBF_FUNC_lab122:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab154;
  _1_OBF_FUNC_lab26:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab155:;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab193:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab130;
  _1_OBF_FUNC_lab234:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab152;
  _1_OBF_FUNC_lab31:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab11:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab78:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab181:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab170;
    } else {
      goto _1_OBF_FUNC_lab122;
    }
  _1_OBF_FUNC_lab179:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab123:
    _index2_0++;
    goto _1_OBF_FUNC_lab227;
  _1_OBF_FUNC_lab147:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab9:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab124;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab152:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab227;
  _1_OBF_FUNC_lab145:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab87;
  _1_OBF_FUNC_lab167:
    _index4_2++;
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab213:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab50;
    }
  _1_OBF_FUNC_lab91:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab235;
  _1_OBF_FUNC_lab188:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab159;
    } else {
      goto _1_OBF_FUNC_lab96;
    }
  _1_OBF_FUNC_lab228:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab3:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] -= localStaticState[1UL];
    goto _1_OBF_FUNC_lab82;
  _1_OBF_FUNC_lab214:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab1;
    } else {
      goto _1_OBF_FUNC_lab52;
    }
  _1_OBF_FUNC_lab216:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab75:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab61;
    } else {
      goto _1_OBF_FUNC_lab136;
    }
  _1_OBF_FUNC_lab154:
    _index0_2++;
    goto _1_OBF_FUNC_lab176;
  _1_OBF_FUNC_lab104:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab148;
  _1_OBF_FUNC_lab196:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab236:;
    if ((unsigned long)_index4_2 < 2UL) {
      goto _1_OBF_FUNC_lab73;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab131:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab85;
  _1_OBF_FUNC_lab93:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab19;
    } else {
      goto _1_OBF_FUNC_lab106;
    }
  _1_OBF_FUNC_lab35:
    _index2_0++;
    goto _1_OBF_FUNC_lab212;
  _1_OBF_FUNC_lab61:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab58;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab217:
    _index0_2++;
    goto _1_OBF_FUNC_lab79;
  _1_OBF_FUNC_lab157:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab22:;
    if ((unsigned long)_index4_2 < 2UL) {
      goto _1_OBF_FUNC_lab143;
    } else {
      goto _1_OBF_FUNC_lab236;
    }
  _1_OBF_FUNC_lab112:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab76;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab156:;
    goto _1_OBF_FUNC_lab122;
  _1_OBF_FUNC_lab20:
    localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab81:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)_index0_2 % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab55;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab182;
      break;
    default:
      goto _1_OBF_FUNC_lab172;
    }
  _1_OBF_FUNC_lab76:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab129;
  _1_OBF_FUNC_lab88:
    _index4_2++;
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab8:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab79;
    } else {
      goto _1_OBF_FUNC_lab169;
    }
  _1_OBF_FUNC_lab215:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab34:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab209:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab58:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab233:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab190:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab166;
  _1_OBF_FUNC_lab235:
    _index2_0++;
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab63:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab12:
    _index2_0++;
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab19:;
    if ((unsigned long)_index4_2 < 2UL) {
      goto _1_OBF_FUNC_lab86;
    } else {
      goto _1_OBF_FUNC_lab22;
    }
  _1_OBF_FUNC_lab185:
    _index2_0++;
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab126:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab104;
    } else {
      goto _1_OBF_FUNC_lab122;
    }
  _1_OBF_FUNC_lab92:
    tmp = rand();
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab195:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab188;
  _1_OBF_FUNC_lab222:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab126;
    } else {
      goto _1_OBF_FUNC_lab110;
    }
  _1_OBF_FUNC_lab140:;
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab100:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab20;
    } else {
      goto _1_OBF_FUNC_lab83;
    }
  _1_OBF_FUNC_lab127:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab193;
    } else {
      goto _1_OBF_FUNC_lab65;
    }
  _1_OBF_FUNC_lab129:
    localStaticState[_index0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab208:
    localStaticState[1UL] = (unsigned int)((long)(input + localStaticState[0UL]) - 3238365211L);
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab231:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab190;
    } else {
      goto _1_OBF_FUNC_lab166;
    }
  _1_OBF_FUNC_lab120:
    _index4_2 = 0U;
    goto _1_OBF_FUNC_lab142;
  _1_OBF_FUNC_lab90:;
    if (tmp___12 % 10 >= 5) {
      goto _1_OBF_FUNC_lab54;
    } else {
      goto _1_OBF_FUNC_lab196;
    }
  _1_OBF_FUNC_lab205:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab144:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab175;
    } else {
      goto _1_OBF_FUNC_lab215;
    }
  _1_OBF_FUNC_lab27:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab218;
  _1_OBF_FUNC_lab176:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab233;
    } else {
      goto _1_OBF_FUNC_lab79;
    }
  _1_OBF_FUNC_lab28:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab151:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab15:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab212:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab202;
    } else {
      goto _1_OBF_FUNC_lab131;
    }
  _1_OBF_FUNC_lab65:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab0;
    } else {
      goto _1_OBF_FUNC_lab175;
    }
  _1_OBF_FUNC_lab21:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab85:
    _index0_2++;
    goto _1_OBF_FUNC_lab159;
  _1_OBF_FUNC_lab203:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab39:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab211;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab110:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab205;
  _1_OBF_FUNC_lab54:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab119;
    } else {
      goto _1_OBF_FUNC_lab206;
    }
  _1_OBF_FUNC_lab159:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab81;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab0:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab144;
  _1_OBF_FUNC_lab64:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab165;
    } else {
      goto _1_OBF_FUNC_lab122;
    }
  _1_OBF_FUNC_lab73:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab199;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab136:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab132;
  _1_OBF_FUNC_lab135:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab141;
  _1_OBF_FUNC_lab200:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab207;
  _1_OBF_FUNC_lab7:
    localStaticState[_index0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab131;
  _1_OBF_FUNC_lab86:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab213;
  _1_OBF_FUNC_lab218:
    _index4_2++;
    goto _1_OBF_FUNC_lab236;
  _1_OBF_FUNC_lab77:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab179;
    } else {
      goto _1_OBF_FUNC_lab61;
    }
  _1_OBF_FUNC_lab52:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)_index0_2 % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab112;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab155;
      break;
    default:
      goto _1_OBF_FUNC_lab219;
    }
  _1_OBF_FUNC_lab172:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab131;
    }
  _1_OBF_FUNC_lab95:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab6:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab164:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab133:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab182:;
    goto _1_OBF_FUNC_lab131;
  _1_OBF_FUNC_lab84:
    _index2_0++;
    goto _1_OBF_FUNC_lab175;
  _1_OBF_FUNC_lab50:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab198;
    } else {
      goto _1_OBF_FUNC_lab145;
    }
  _1_OBF_FUNC_lab132:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab185;
  _1_OBF_FUNC_lab70:
    localStaticState[_index0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab186:;
    if (tmp___11 % 10 >= 5) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab113;
    }
  _1_OBF_FUNC_lab130:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab65;
    } else {
      goto _1_OBF_FUNC_lab34;
    }
  _1_OBF_FUNC_lab224:
    _index2_0++;
    goto _1_OBF_FUNC_lab126;
  _1_OBF_FUNC_lab80:
    localStaticState[_index0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab122;
  _1_OBF_FUNC_lab94:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab108;
    } else {
      goto _1_OBF_FUNC_lab147;
    }
  _1_OBF_FUNC_lab166:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab158;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab107:
    localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
    goto _1_OBF_FUNC_lab209;
  _1_OBF_FUNC_lab134:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab216;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab96:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)_index0_2 % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab228;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab140;
      break;
    default:
      goto _1_OBF_FUNC_lab134;
    }
  _1_OBF_FUNC_lab113:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab135;
  _1_OBF_FUNC_lab175:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab62;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab198:
    localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
    goto _1_OBF_FUNC_lab98;
  _1_OBF_FUNC_lab160:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab124:
    tmp___12 = rand();
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab165:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab229:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab160;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab143:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab225;
  _1_OBF_FUNC_lab56:
    _index0_2 = 0U;
    goto _1_OBF_FUNC_lab176;
  _1_OBF_FUNC_lab201:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab139;
  _1_OBF_FUNC_lab83:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab44:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab7;
  _1_OBF_FUNC_lab24:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab68;
  _1_OBF_FUNC_lab219:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab234;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab169:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)_index0_2 % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab181;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab156;
      break;
    default:
      goto _1_OBF_FUNC_lab64;
    }
  _1_OBF_FUNC_lab1:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab195;
    } else {
      goto _1_OBF_FUNC_lab159;
    }
  _1_OBF_FUNC_lab226:;
    if (tmp___13 % 10 >= 5) {
      goto _1_OBF_FUNC_lab206;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab4:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab114;
  _1_OBF_FUNC_lab119:
    tmp___13 = rand();
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab139:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab68:
    _index2_0++;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab225:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab236;
    } else {
      goto _1_OBF_FUNC_lab100;
    }
  _1_OBF_FUNC_lab87:
    _index4_2++;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab17:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab217;
  _1_OBF_FUNC_lab170:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab80;
  _1_OBF_FUNC_lab114:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab212;
  _1_OBF_FUNC_lab82:;
    return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) - 4020615311L));
  _1_OBF_FUNC_lab67:
    localStaticState[0UL] = (unsigned int)((unsigned long)input + 59732214UL);
    goto _1_OBF_FUNC_lab208;
  _1_OBF_FUNC_lab206:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab201;
    } else {
      goto _1_OBF_FUNC_lab164;
    }
  _1_OBF_FUNC_lab202:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab211:
    tmp___11 = rand();
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab148:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab224;
  _1_OBF_FUNC_lab14:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab27;
  _1_OBF_FUNC_lab43:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab123;
  _1_OBF_FUNC_lab207:
    _index2_0++;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab227:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab78;
    } else {
      goto _1_OBF_FUNC_lab127;
    }
  _1_OBF_FUNC_lab220:;
    if (localStaticState[0UL] & 1U) {
      goto _1_OBF_FUNC_lab231;
    } else {
      goto _1_OBF_FUNC_lab166;
    }
  _1_OBF_FUNC_lab142:;
    if ((unsigned long)_index4_2 < 2UL) {
      goto _1_OBF_FUNC_lab92;
    } else {
      goto _1_OBF_FUNC_lab19;
    }
  _1_OBF_FUNC_lab53:
    _index2_0++;
    goto _1_OBF_FUNC_lab127;
  _1_OBF_FUNC_lab109:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab127;
    } else {
      goto _1_OBF_FUNC_lab133;
    }
  _1_OBF_FUNC_lab29:
    _index2_0++;
    goto _1_OBF_FUNC_lab206;
  _1_OBF_FUNC_lab62:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab203;
  _1_OBF_FUNC_lab141:
    _index2_0++;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab16:
    _index2_0++;
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab98:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab79:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab105;
    } else {
      goto _1_OBF_FUNC_lab1;
    }
  _1_OBF_FUNC_lab115:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab199:
    localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab46:
    _index0_2++;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab55:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab44;
    } else {
      goto _1_OBF_FUNC_lab131;
    }
  _1_OBF_FUNC_lab108:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab157;
    } else {
      goto _1_OBF_FUNC_lab126;
    }
  _1_OBF_FUNC_lab106:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab107;
    } else {
      goto _1_OBF_FUNC_lab26;
    }
  _1_OBF_FUNC_lab105:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab214;
  _1_OBF_FUNC_lab103:;
    switch ((unsigned long)((int)(localStaticState[1UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab220;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab151;
      break;
    default:
      goto _1_OBF_FUNC_lab82;
    }
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:goto
