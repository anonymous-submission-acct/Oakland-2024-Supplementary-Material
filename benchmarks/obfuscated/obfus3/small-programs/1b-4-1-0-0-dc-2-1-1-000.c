typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int printf();
char **_global_envp;
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
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
  int __RANDVAR__8029987542797313988__;
  int i;
  int __RANDVAR__52847715162396370324__;
  int sum;
  int __RANDVAR__98255943214423320633__;
  int __RANDVAR__60123250964749647558__;
  int __RANDVAR__99155645602373342926__;
  int __RANDVAR__41383051134973539136__;
  int __RANDVAR__62583322209526644760__;
  int __RANDVAR__90669140917452300237__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[40];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 33UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 90:
      _1_OBF_FUNC_lab29:
        sum += sum;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 62:
      _1_OBF_FUNC_lab4:
        argv -= 70;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 36:
      _1_OBF_FUNC_lab5:
        __RANDVAR__41383051134973539136__ = (__RANDVAR__8029987542797313988__ - __RANDVAR__52847715162396370324__) - (__RANDVAR__52847715162396370324__ - 229);
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 111:
      _1_OBF_FUNC_lab17:
        __RANDVAR__8029987542797313988__ += 648;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 48:
        _1_OBF_FUNC_jumpTab[25] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 1:
      _1_OBF_FUNC_lab39:
        __RANDVAR__60123250964749647558__ = (__RANDVAR__98255943214423320633__ - __RANDVAR__98255943214423320633__) - 519;
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 106:;
        {
          _1_OBF_FUNC_next___0 = 24UL;
        }
        break;
      case 97:
      _1_OBF_FUNC_lab6:
        __RANDVAR__8029987542797313988__ -= 20;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 31:;
        {
          _1_OBF_FUNC_next___0 = 63UL;
        }
        break;
      case 124:
      _1_OBF_FUNC_lab31:
        argc -= 797;
        { _1_OBF_FUNC_next___0 = 99UL; }
        break;
      case 115:
        _1_OBF_FUNC_jumpTab[37] = (void *)32UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 103:;
        {
          _1_OBF_FUNC_next___0 = 124UL;
        }
        break;
      case 84:;
        {
          _1_OBF_FUNC_next___0 = 90UL;
        }
        break;
      case 29:
        _1_OBF_FUNC_jumpTab[7] = (void *)37UL;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 75:;
        if (788 - __RANDVAR__8029987542797313988__ * __RANDVAR__52847715162396370324__ < __RANDVAR__52847715162396370324__) {
          { _1_OBF_FUNC_next___0 = 32UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 72UL; }
        }
        break;
      case 60:;
        if (i <= *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 93UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 82UL; }
        }
        break;
      case 96:;
        {
          _1_OBF_FUNC_next___0 = 9UL;
        }
        break;
      case 20:
      _1_OBF_FUNC_lab11:
        argc += 797;
        { _1_OBF_FUNC_next___0 = 124UL; }
        break;
      case 117:
        _1_OBF_FUNC_jumpTab[24] = (void *)3UL;
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 4:
      _1_OBF_FUNC_lab35:
        __RANDVAR__52847715162396370324__ -= 474;
        { _1_OBF_FUNC_next___0 = 83UL; }
        break;
      case 64:;
        {
          _1_OBF_FUNC_next___0 = 93UL;
        }
        break;
      case 108:
        _1_OBF_FUNC_jumpTab[18] = (void *)71UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 37:
      _1_OBF_FUNC_lab7:
        i++;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 22:;
        {
          _1_OBF_FUNC_next___0 = 4UL;
        }
        break;
      case 122:;
        {
          _1_OBF_FUNC_next___0 = 20UL;
        }
        break;
      case 58:;
        {
          _1_OBF_FUNC_next___0 = 82UL;
        }
        break;
      case 56:;
        if (i < argc) {
          { _1_OBF_FUNC_next___0 = 74UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 110UL; }
        }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = 65UL;
        }
        break;
      case 79:;
        {
          _1_OBF_FUNC_next___0 = 72UL;
        }
        break;
      case 13:
        _1_OBF_FUNC_jumpTab[8] = (void *)83UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 11:
      _1_OBF_FUNC_lab36:
        __RANDVAR__8029987542797313988__ = argc;
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 23:
        _1_OBF_FUNC_jumpTab[16] = (void *)63UL;
        { _1_OBF_FUNC_next___0 = 100UL; }
        break;
      case 121:;
        if (__RANDVAR__52847715162396370324__ < 238 + (763 - __RANDVAR__8029987542797313988__)) {
          { _1_OBF_FUNC_next___0 = 1UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 77UL; }
        }
        break;
      case 40:
      _1_OBF_FUNC_lab28:
        i = 0;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 46:;
        {
          _1_OBF_FUNC_next___0 = 110UL;
        }
        break;
      case 15:
      _1_OBF_FUNC_lab19:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 101:
        _1_OBF_FUNC_jumpTab[34] = (void *)72UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 74:
      _1_OBF_FUNC_lab21:
        __RANDVAR__98255943214423320633__ = __RANDVAR__52847715162396370324__;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 51:
        _1_OBF_FUNC_jumpTab[12] = (void *)81UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 53:
      _1_OBF_FUNC_lab9:
        i = 1;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 10:;
        {
          _1_OBF_FUNC_next___0 = 2UL;
        }
        break;
      case 65:
      _1_OBF_FUNC_lab22:
        i++;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 26:
        _1_OBF_FUNC_jumpTab[6] = (void *)97UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 91:
        _1_OBF_FUNC_jumpTab[30] = (void *)99UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 107:
        _1_OBF_FUNC_jumpTab[32] = (void *)9UL;
        { _1_OBF_FUNC_next___0 = 61UL; }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = 30UL;
        }
        break;
      case 83:
      _1_OBF_FUNC_lab8:
        __RANDVAR__52847715162396370324__ += 474;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 109:
        _1_OBF_FUNC_jumpTab[23] = (void *)30UL;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 42:
        _1_OBF_FUNC_jumpTab[4] = (void *)62UL;
        { _1_OBF_FUNC_next___0 = 114UL; }
        break;
      case 18:
        _1_OBF_FUNC_jumpTab[29] = (void *)90UL;
        { _1_OBF_FUNC_next___0 = 91UL; }
        break;
      case 78:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 63:
      _1_OBF_FUNC_lab16:
        argv += 70;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 85:;
        {
          _1_OBF_FUNC_next___0 = 24UL;
        }
        break;
      case 77:
      _1_OBF_FUNC_lab15:
        __RANDVAR__99155645602373342926__ = 116;
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 120:;
        {
          _1_OBF_FUNC_next___0 = 99UL;
        }
        break;
      case 32:
      _1_OBF_FUNC_lab37:
        __RANDVAR__62583322209526644760__ = (__RANDVAR__62583322209526644760__ + argc) - (__RANDVAR__52847715162396370324__ + 985);
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 43:;
        {
          _1_OBF_FUNC_next___0 = 69UL;
        }
        break;
      case 44:;
        {
          _1_OBF_FUNC_next___0 = 97UL;
        }
        break;
      case 38:;
        {
          _1_OBF_FUNC_next___0 = 53UL;
        }
        break;
      case 110:
      _1_OBF_FUNC_lab1:
        __RANDVAR__52847715162396370324__ -= 43;
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 3:
      _1_OBF_FUNC_lab24:
        __RANDVAR__8029987542797313988__ -= 648;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 102:;
        {
          _1_OBF_FUNC_next___0 = 49UL;
        }
        break;
      case 112:;
        {
          _1_OBF_FUNC_next___0 = 32UL;
        }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = 57UL;
        }
        break;
      case 67:
        _1_OBF_FUNC_jumpTab[9] = (void *)53UL;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 119:
      _1_OBF_FUNC_lab3:
        __RANDVAR__52847715162396370324__ = __RANDVAR__8029987542797313988__ + (233 - __RANDVAR__52847715162396370324__);
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 80:;
        if (44 - (393 - argc) < __RANDVAR__52847715162396370324__) {
          { _1_OBF_FUNC_next___0 = 71UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 4UL; }
        }
        break;
      case 14:;
        {
          _1_OBF_FUNC_next___0 = 111UL;
        }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = 36UL;
        }
        break;
      case 69:
      _1_OBF_FUNC_lab26:;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 99:
      _1_OBF_FUNC_lab30:;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 98:;
        {
          _1_OBF_FUNC_next___0 = 37UL;
        }
        break;
      case 47:
        _1_OBF_FUNC_jumpTab[3] = (void *)119UL;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 35:
        _1_OBF_FUNC_jumpTab[39] = (void *)1UL;
        { _1_OBF_FUNC_next___0 = 92UL; }
        break;
      case 94:
        _1_OBF_FUNC_jumpTab[35] = (void *)4UL;
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 114:
        _1_OBF_FUNC_jumpTab[5] = (void *)36UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 28:;
        {
          _1_OBF_FUNC_next___0 = 40UL;
        }
        break;
      case 113:;
        {
          _1_OBF_FUNC_next___0 = 15UL;
        }
        break;
      case 50:;
        {
          _1_OBF_FUNC_next___0 = 71UL;
        }
        break;
      case 87:
        _1_OBF_FUNC_jumpTab[15] = (void *)77UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 55:;
        {
          _1_OBF_FUNC_next___0 = 3UL;
        }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab[19] = (void *)15UL;
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 45:;
        {
          _1_OBF_FUNC_next___0 = 74UL;
        }
        break;
      case 93:
      _1_OBF_FUNC_lab20:
        argv -= 447;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 116:;
        {
          _1_OBF_FUNC_next___0 = 119UL;
        }
        break;
      case 104:;
        {
          _1_OBF_FUNC_next___0 = 65UL;
        }
        break;
      case 61:
        _1_OBF_FUNC_jumpTab[33] = (void *)2UL;
        { _1_OBF_FUNC_next___0 = 101UL; }
        break;
      case 59:
        _1_OBF_FUNC_jumpTab[22] = (void *)65UL;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 19:;
        {
          _1_OBF_FUNC_next___0 = 62UL;
        }
        break;
      case 21:
        _1_OBF_FUNC_jumpTab[1] = (void *)110UL;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 81:
      _1_OBF_FUNC_lab12:
        argv += 447;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 33:
        _1_OBF_FUNC_jumpTab[0] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 66:;
        {
          _1_OBF_FUNC_next___0 = 81UL;
        }
        break;
      case 57:
      _1_OBF_FUNC_lab10:;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 16:
        _1_OBF_FUNC_jumpTab[11] = (void *)20UL;
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 95:
        _1_OBF_FUNC_jumpTab[27] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 70:
        _1_OBF_FUNC_jumpTab[2] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 47UL; }
        break;
      case 123:;
        {
          _1_OBF_FUNC_next___0 = 65UL;
        }
        break;
      case 34:
        _1_OBF_FUNC_jumpTab[31] = (void *)124UL;
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 25:
        _1_OBF_FUNC_jumpTab[14] = (void *)24UL;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 68:
        _1_OBF_FUNC_jumpTab[21] = (void *)74UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 88:
        _1_OBF_FUNC_jumpTab[28] = (void *)40UL;
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 82:
      _1_OBF_FUNC_lab38:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 71:
      _1_OBF_FUNC_lab18:
        __RANDVAR__90669140917452300237__ = 646;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 105:;
        {
          _1_OBF_FUNC_next___0 = 83UL;
        }
        break;
      case 2:
      _1_OBF_FUNC_lab33:;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 72:
      _1_OBF_FUNC_lab34:;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 17:;
        {
          _1_OBF_FUNC_next___0 = 9UL;
        }
        break;
      case 49:
      _1_OBF_FUNC_lab0:
        __RANDVAR__8029987542797313988__ += 20;
        { _1_OBF_FUNC_next___0 = 97UL; }
        break;
      case 8:
        _1_OBF_FUNC_jumpTab[26] = (void *)69UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 118:;
        {
          _1_OBF_FUNC_next___0 = 77UL;
        }
        break;
      case 5:
        _1_OBF_FUNC_jumpTab[13] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 76:;
        {
          _1_OBF_FUNC_next___0 = 1UL;
        }
        break;
      case 41:;
        return (0);
        break;
      case 9:
      _1_OBF_FUNC_lab32:
        sum += i;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 30:
      _1_OBF_FUNC_lab23:
        __RANDVAR__52847715162396370324__ += 43;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 89:
        _1_OBF_FUNC_jumpTab[38] = (void *)82UL;
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 92:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 54:
        _1_OBF_FUNC_jumpTab[20] = (void *)93UL;
        { _1_OBF_FUNC_next___0 = 68UL; }
        break;
      case 73:
        _1_OBF_FUNC_jumpTab[10] = (void *)57UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 52:;
        {
          _1_OBF_FUNC_next___0 = 2UL;
        }
        break;
      case 39:;
        return (0);
        break;
      case 24:
      _1_OBF_FUNC_lab14:;
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 100:
        _1_OBF_FUNC_jumpTab[17] = (void *)111UL;
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 86:
        _1_OBF_FUNC_jumpTab[36] = (void *)11UL;
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      }
    }
  }
}
// variants: irrelevant-code, flatten, flatten
// expanded variants: irrelevant-code, flatten:goto, flatten:switch
