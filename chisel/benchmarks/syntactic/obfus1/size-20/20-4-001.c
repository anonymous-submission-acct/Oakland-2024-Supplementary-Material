typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
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
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[56] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55};
  {
    { _1_OBF_FUNC_next = 41UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab48:
    _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab34:
    localStaticState[1UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] * localStaticState[1UL];
    goto _1_OBF_FUNC_lab8;
  _1_OBF_FUNC_lab22:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + 641054356UL);
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab19:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab36;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab46:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab26:
    _index0_3 = 0U;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab17:;
    if ((unsigned long)_index0_3 < 3UL) {
      goto _1_OBF_FUNC_lab14;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab55:
    _index2_0 = (unsigned int)((unsigned long)_index2_0 + 2UL);
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab30:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab23:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab0:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_index0_3 % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab8:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab31:
    _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab36:
    _induction9_8_2 = 0U;
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab47:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)_index0_3 % 2UL]) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab35;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab20;
      break;
    default:
      goto _1_OBF_FUNC_lab30;
    }
  _1_OBF_FUNC_lab9:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab3:
    _index4_0++;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab25:
    localStaticState[0UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab5:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab52;
    } else {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab40:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab33:
    _index6_0++;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab49:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab50;
  _1_OBF_FUNC_lab50:
    _index0_3++;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab27:
    localStaticState[_index4_0] = localStaticState[(unsigned long)_index0_3 % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab42:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab1:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab37:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab52:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab32:
    _index8_0 = 0U;
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab14:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab47;
    } else {
      goto _1_OBF_FUNC_lab5;
    }
  _1_OBF_FUNC_lab4:;
    if ((unsigned long)_index8_0 < 0UL) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab35:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab41:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 605627732UL) + 200211981UL);
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab6:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction3_2_2];
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab21:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab10:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index6_0] - localStaticState[_induction9_8_2];
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab20:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab29:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab19;
    } else {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab16:;
    if (!((unsigned long)_index2_0 < 0UL)) {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab11:
    localStaticState[(unsigned long)_index0_3 % 2UL] = localStaticState[0UL] + localStaticState[_index2_0];
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab51:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab45:;
    if (!((localStaticState[1UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab54:;
    return ((localStaticState[0UL] - localStaticState[1UL]) * 549299039U);
  }
}
// variants: flatten
// expanded variants: flatten:goto
