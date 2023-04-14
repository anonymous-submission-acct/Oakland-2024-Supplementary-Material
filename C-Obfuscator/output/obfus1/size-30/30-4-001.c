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
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_2;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[48] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47};
  {
    { _1_OBF_FUNC_next = 19UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab16:
    _index2_0 = 0U;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab3:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab34:;
    if (!((localStaticState[1UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab1;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab18:;
    if ((unsigned long)_index4_2 < 2UL) {
      goto _1_OBF_FUNC_lab34;
    } else {
      goto _1_OBF_FUNC_lab6;
    }
  _1_OBF_FUNC_lab12:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab42;
  _1_OBF_FUNC_lab14:;
    if (localStaticState[0UL] & 1U) {
      goto _1_OBF_FUNC_lab33;
    } else {
      goto _1_OBF_FUNC_lab38;
    }
  _1_OBF_FUNC_lab44:;
    if ((unsigned long)_index0_2 < 2UL) {
      goto _1_OBF_FUNC_lab46;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab5:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index0_2 % 2UL] - localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab21;
  _1_OBF_FUNC_lab13:;
    if ((localStaticState[0UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab24;
    } else {
      goto _1_OBF_FUNC_lab12;
    }
  _1_OBF_FUNC_lab19:
    localStaticState[0UL] = (unsigned int)((unsigned long)input + 59732214UL);
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab33:;
    if (!((localStaticState[0UL] >> 3U) & 1U)) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab38;
    }
  _1_OBF_FUNC_lab47:
    _index4_2++;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab46:;
    switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)_index0_2 % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab13;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab4;
      break;
    default:
      goto _1_OBF_FUNC_lab28;
    }
  _1_OBF_FUNC_lab29:
    _index0_2 = 0U;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab42:
    _index0_2++;
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab37:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab4:;
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab45:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab36:
    _index2_0++;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab28:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab12;
    }
  _1_OBF_FUNC_lab31:;
    if ((unsigned long)_index2_0 < 0UL) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab12;
    }
  _1_OBF_FUNC_lab26:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab39:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] -= localStaticState[1UL];
    goto _1_OBF_FUNC_lab23;
  _1_OBF_FUNC_lab6:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab39;
  _1_OBF_FUNC_lab0:
    localStaticState[1UL] = (unsigned int)((long)(input + localStaticState[0UL]) - 3238365211L);
    goto _1_OBF_FUNC_lab10;
  _1_OBF_FUNC_lab27:
    localStaticState[1UL] = localStaticState[0UL] - localStaticState[1UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab17:;
    if ((localStaticState[1UL] >> 4U) & 1U) {
      goto _1_OBF_FUNC_lab26;
    }
  _1_OBF_FUNC_lab23:;
    return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) - 4020615311L));
  _1_OBF_FUNC_lab21:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab36;
  _1_OBF_FUNC_lab1:
    localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab35:
    _index4_2 = 0U;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab24:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab38:;
    if ((localStaticState[0UL] >> 2U) & 1U) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab41:
    localStaticState[_index0_2] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab7:
    localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab43:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab10:;
    switch ((unsigned long)((int)(localStaticState[1UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
    case 0UL:
      goto _1_OBF_FUNC_lab14;
      break;
    case 1UL:
      goto _1_OBF_FUNC_lab37;
      break;
    default:
      goto _1_OBF_FUNC_lab23;
    }
  }
}
// variants: flatten
// expanded variants: flatten:goto
