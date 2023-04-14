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
  unsigned int _index2_4;
  int __RANDVAR__56251602584953115479__;
  int __RANDVAR__73913548466636384910__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[81] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab80};
  {
    { _1_OBF_FUNC_next = 27UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab38:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab49;
  _1_OBF_FUNC_lab78:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab32;
  _1_OBF_FUNC_lab59:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab39:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab6;
    } else {
      goto _1_OBF_FUNC_lab1;
    }
  _1_OBF_FUNC_lab63:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab33:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab15;
    } else {
      goto _1_OBF_FUNC_lab37;
    }
  _1_OBF_FUNC_lab44:;
    switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab54;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab71;
      break;
    default:
      goto _1_OBF_FUNC_lab35;
    }
  _1_OBF_FUNC_lab74:;
    if (__RANDVAR__56251602584953115479__ == 0) {
      goto _1_OBF_FUNC_lab69;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab62:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] -= localStaticState[1UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab18:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab67:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab77:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab57;
  _1_OBF_FUNC_lab19:
    _index2_4++;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab7:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab60;
    } else {
      goto _1_OBF_FUNC_lab56;
    }
  _1_OBF_FUNC_lab13:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[1UL];
    goto _1_OBF_FUNC_lab58;
  _1_OBF_FUNC_lab10:;
    if (!((localStaticState[1UL] >> 1U) & 1U)) {
      goto _1_OBF_FUNC_lab24;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab32:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab6:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab36:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab80;
    } else {
      goto _1_OBF_FUNC_lab4;
    }
  _1_OBF_FUNC_lab58:
    localStaticState[0UL] = localStaticState[1UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab47:
    __RANDVAR__56251602584953115479__ = 0;
    goto _1_OBF_FUNC_lab74;
  _1_OBF_FUNC_lab5:
    _index2_4++;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab42:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab71:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[0UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab8;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab17;
      break;
    default:
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab48:
    _index2_4++;
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab43:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab22:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab66;
    } else {
      goto _1_OBF_FUNC_lab39;
    }
  _1_OBF_FUNC_lab28:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab41:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab78;
  _1_OBF_FUNC_lab37:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab55;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab72:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab14:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab11;
  _1_OBF_FUNC_lab26:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab77;
    } else {
      goto _1_OBF_FUNC_lab4;
    }
  _1_OBF_FUNC_lab61:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab30:
    _index2_4++;
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab4:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab64;
    }
  _1_OBF_FUNC_lab65:;
    if (__RANDVAR__73913548466636384910__ == 0) {
      goto _1_OBF_FUNC_lab72;
    } else {
      goto _1_OBF_FUNC_lab17;
    }
  _1_OBF_FUNC_lab51:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab23:
    localStaticState[1UL] = (unsigned int)((unsigned long)input + ((unsigned long)localStaticState[0UL] + 401842971UL));
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab34:
    _index2_4++;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab55:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab46:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab76:
    _index0_9 = (unsigned int)((unsigned long)_index0_9 + 2UL);
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab25:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab66:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab48;
  _1_OBF_FUNC_lab57:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab56:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab68;
    } else {
      goto _1_OBF_FUNC_lab26;
    }
  _1_OBF_FUNC_lab1:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab51;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab75:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab70:
    _index0_9 = 0U;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab27:
    localStaticState[0UL] = (unsigned int)((unsigned long)input * 817265353UL + 1900068377UL);
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab24:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab35:
    localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab62;
  _1_OBF_FUNC_lab0:
    __RANDVAR__73913548466636384910__ = 0;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab21:
    __RANDVAR__56251602584953115479__ = 1;
    goto _1_OBF_FUNC_lab74;
  _1_OBF_FUNC_lab64:
    __RANDVAR__73913548466636384910__ = 1;
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab69:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab75;
    } else {
      goto _1_OBF_FUNC_lab33;
    }
  _1_OBF_FUNC_lab54:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab49:;
    if ((unsigned long)_index0_9 < 9UL) {
      goto _1_OBF_FUNC_lab41;
    } else {
      goto _1_OBF_FUNC_lab36;
    }
  _1_OBF_FUNC_lab20:;
    if ((unsigned long)_index2_4 < 4UL) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab21;
    }
  _1_OBF_FUNC_lab8:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab68:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab60:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab61;
  _1_OBF_FUNC_lab17:;
    return (localStaticState[0UL] * localStaticState[1UL]);
  _1_OBF_FUNC_lab15:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab16:
    _index2_4++;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab80:
    localStaticState[_induction1_0_2] = localStaticState[(unsigned long)_induction1_0_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab63;
  _1_OBF_FUNC_lab11:
    _index2_4 = 0U;
    goto _1_OBF_FUNC_lab47;
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
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:goto
