typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[61] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60};
  {
    { _1_OBF_FUNC_next = 0UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab0:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 297072123UL) - 467100053UL);
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab44:
    _induction9_8_2 = 0U;
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab31:
    localStaticState[0UL] *= localStaticState[(unsigned long)_index0_9 % 2UL];
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab45:
    _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab9:
    _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab35:
    localStaticState[_induction1_0_2] = localStaticState[1UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab28:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab44;
    } else {
      goto _1_OBF_FUNC_lab60;
    }
  _1_OBF_FUNC_lab52:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab50;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab47;
      break;
    default:
      goto _1_OBF_FUNC_lab13;
    }
  _1_OBF_FUNC_lab7:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab54;
    } else {
      goto _1_OBF_FUNC_lab22;
    }
  _1_OBF_FUNC_lab14:;
    if ((unsigned long)_index8_0 < 0UL) {
      goto _1_OBF_FUNC_lab8;
    } else {
      goto _1_OBF_FUNC_lab26;
    }
  _1_OBF_FUNC_lab51:
    localStaticState[1UL] = (input + localStaticState[0UL]) * 1569331502U;
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab29:
    _index0_9 = 0U;
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab6:
    _index6_0++;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab48:;
    if ((unsigned long)_index10_0 < 0UL) {
      goto _1_OBF_FUNC_lab35;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab39:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab22;
    }
  _1_OBF_FUNC_lab60:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab33:
    _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab54:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab3:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab50:
    _induction11_10_2 = 0U;
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab47:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab21:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab8:
    localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[(unsigned long)_index6_0 % 2UL] * localStaticState[_induction9_8_2];
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab22:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab20:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab26:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab4:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[(unsigned long)_induction13_12_2 % 2UL];
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab24:;
    return ((unsigned int)((unsigned long)localStaticState[0UL] + (unsigned long)localStaticState[1UL] * 8260261UL));
  _1_OBF_FUNC_lab38:
    _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab42:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab57:
    _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab40:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab57;
  _1_OBF_FUNC_lab11:
    _index8_0 = 0U;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab37:
    _index2_0++;
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab23:
    _index10_0++;
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab55:
    _index12_0 = 0U;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab5:;
    if ((unsigned long)_index12_0 < 0UL) {
      goto _1_OBF_FUNC_lab4;
    } else {
      goto _1_OBF_FUNC_lab31;
    }
  _1_OBF_FUNC_lab13:
    _induction13_12_2 = 0U;
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab49:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab59:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab52;
    } else {
      goto _1_OBF_FUNC_lab24;
    }
  _1_OBF_FUNC_lab15:
    _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab17:
    _index10_0 = 0U;
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab10:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab25:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab21;
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
// variants: flatten
// expanded variants: flatten:goto
