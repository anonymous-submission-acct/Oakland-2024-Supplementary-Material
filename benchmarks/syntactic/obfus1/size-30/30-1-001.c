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
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_9;
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
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[79] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab78};
  {
    { _1_OBF_FUNC_next = 13UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab43:
    _index16_0 = 0U;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab37:
    _index12_0++;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab30:
    _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab32:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab17;
    } else {
      goto _1_OBF_FUNC_lab35;
    }
  _1_OBF_FUNC_lab66:;
    if ((localStaticState[1UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab56;
    }
  _1_OBF_FUNC_lab16:
    _index0_2 = 0U;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab67:;
    if ((unsigned long)_index8_0 < 0UL) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab34;
    }
  _1_OBF_FUNC_lab62:
    _index8_0 = 0U;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab50:
    localStaticState[_induction15_14_2] = localStaticState[(unsigned long)_induction13_12_2 % 2UL] - localStaticState[_index12_0];
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab25:
    _induction7_6_2 = 0U;
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab4:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab18:
    _induction11_10_2 = 0U;
    goto _1_OBF_FUNC_lab58;
  _1_OBF_FUNC_lab53:
    _induction13_12_2 = 0U;
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab76:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab63;
    }
  _1_OBF_FUNC_lab51:
    _induction17_16_2 = (unsigned int)(((unsigned long)_induction17_16_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab27:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab26:
    _index10_0 = (unsigned int)((unsigned long)_index10_0 + 2UL);
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab47:
    _index12_0 = 0U;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab10:
    localStaticState[(unsigned long)_index2_9 % 2UL] = localStaticState[1UL] + localStaticState[(unsigned long)_induction3_2_2 % 2UL];
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab28:;
    if ((unsigned long)_index12_0 < 0UL) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab10;
    }
  _1_OBF_FUNC_lab42:
    _index8_0 = (unsigned int)((unsigned long)_index8_0 + 2UL);
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab5:
    _index6_0++;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab17:
    localStaticState[1UL] = localStaticState[(unsigned long)_index2_9 % 2UL] * localStaticState[1UL];
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab58:
    _index10_0 = 0U;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab1:
    _index14_0++;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab24:;
    if ((unsigned long)_index16_0 < 0UL) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab34;
    }
  _1_OBF_FUNC_lab70:
    _induction17_16_2 = 0U;
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab31:
    localStaticState[1UL] = (input - localStaticState[0UL]) + 897028582U;
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab64:
    _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab0:
    _index2_9 = 0U;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab36:
    _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab73:;
    if (localStaticState[0UL] & 1U) {
      goto _1_OBF_FUNC_lab18;
    } else {
      goto _1_OBF_FUNC_lab34;
    }
  _1_OBF_FUNC_lab56:
    localStaticState[1UL] = localStaticState[_induction3_2_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab35:
    _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab63:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab68;
  _1_OBF_FUNC_lab61:
    _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab40:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_induction17_16_2] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab51;
  _1_OBF_FUNC_lab78:;
    return ((unsigned int)((unsigned long)localStaticState[0UL] * ((unsigned long)localStaticState[1UL] + 676413248UL)));
  _1_OBF_FUNC_lab6:;
    if ((unsigned long)_index14_0 < 0UL) {
      goto _1_OBF_FUNC_lab50;
    } else {
      goto _1_OBF_FUNC_lab64;
    }
  _1_OBF_FUNC_lab29:;
    if ((unsigned long)_index2_9 < 9UL) {
      goto _1_OBF_FUNC_lab66;
    } else {
      goto _1_OBF_FUNC_lab78;
    }
  _1_OBF_FUNC_lab38:
    localStaticState[_index10_0] = localStaticState[(unsigned long)_induction11_10_2 % 2UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab60;
  _1_OBF_FUNC_lab60:
    _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab7:;
    if ((localStaticState[1UL] >> 3U) & 1U) {
      goto _1_OBF_FUNC_lab3;
    } else {
      goto _1_OBF_FUNC_lab53;
    }
  _1_OBF_FUNC_lab68:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab44:
    _index4_0 = 0U;
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab59:
    _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab3:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab2:
    _index14_0 = 0U;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab14:
    _index0_2++;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab69:
    _index6_0 = 0U;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab21:
    localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[_index6_0];
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab54:;
    if ((unsigned long)_index6_0 < 0UL) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab52;
    }
  _1_OBF_FUNC_lab22:
    _index16_0 = (unsigned int)((unsigned long)_index16_0 + 2UL);
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab20:;
    if ((unsigned long)_index10_0 < 0UL) {
      goto _1_OBF_FUNC_lab38;
    } else {
      goto _1_OBF_FUNC_lab7;
    }
  _1_OBF_FUNC_lab55:;
    if ((unsigned long)_index4_0 < 0UL) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab74;
    }
  _1_OBF_FUNC_lab52:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab34:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab33:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab13:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input - 622200036UL) + 1730499028UL);
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab74:
    _induction9_8_2 = 0U;
    goto _1_OBF_FUNC_lab62;
  _1_OBF_FUNC_lab9:
    _induction15_14_2 = 0U;
    goto _1_OBF_FUNC_lab2;
  }
}
// variants: flatten
// expanded variants: flatten:goto
