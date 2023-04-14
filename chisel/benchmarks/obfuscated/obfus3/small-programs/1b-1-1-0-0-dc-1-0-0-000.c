typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int printf();
char **_global_envp;
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int rand();
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
  int i;
  int sum;
  int tmp;
  int tmp___0;
  int tmp___1;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[33];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 18UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 103:
      _1_OBF_FUNC_lab26:
        sum += i;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 89:;
        return (0);
        break;
      case 41:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 83:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 26:
        _1_OBF_FUNC_jumpTab[13] = (void *)12UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 79:
      _1_OBF_FUNC_lab2:
        tmp = rand();
        { _1_OBF_FUNC_next___0 = 84UL; }
        break;
      case 101:
      _1_OBF_FUNC_lab32:;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 38:;
        return (0);
        break;
      case 91:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 46:
      _1_OBF_FUNC_lab10:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 95:
        _1_OBF_FUNC_jumpTab[27] = (void *)80UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 18:
        _1_OBF_FUNC_jumpTab[0] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 100UL; }
        break;
      case 33:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 77UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 9UL; }
        }
        break;
      case 19:
        _1_OBF_FUNC_jumpTab[8] = (void *)30UL;
        { _1_OBF_FUNC_next___0 = 105UL; }
        break;
      case 90:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 54:
      _1_OBF_FUNC_lab17:;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 35:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 111:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 16:
        _1_OBF_FUNC_jumpTab[23] = (void *)104UL;
        { _1_OBF_FUNC_next___0 = 114UL; }
        break;
      case 30:
      _1_OBF_FUNC_lab8:
        tmp___1 = rand();
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 97:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 2:
        _1_OBF_FUNC_jumpTab[2] = (void *)79UL;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 106:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 108:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 34:
        _1_OBF_FUNC_jumpTab[28] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 102:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 8:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 21:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 77:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 11:
        _1_OBF_FUNC_jumpTab[29] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 99UL; }
        break;
      case 31:
      _1_OBF_FUNC_lab12:
        sum += i;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 80:
      _1_OBF_FUNC_lab27:
        i = 0;
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab[5] = (void *)87UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 24:
        _1_OBF_FUNC_jumpTab[11] = (void *)92UL;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 32:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 17:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 1:
        _1_OBF_FUNC_next = 27UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 50:
        _1_OBF_FUNC_jumpTab[7] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 59:
      _1_OBF_FUNC_lab15:;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 74:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab[6] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 50UL; }
        break;
      case 37:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 76:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 25:
        _1_OBF_FUNC_jumpTab[19] = (void *)96UL;
        { _1_OBF_FUNC_next___0 = 72UL; }
        break;
      case 55:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 72:
        _1_OBF_FUNC_jumpTab[20] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 10UL; }
        break;
      case 107:
      _1_OBF_FUNC_lab3:
        i++;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 40:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 57:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 60:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 75:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 12:
      _1_OBF_FUNC_lab13:
        i++;
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 64:
        _1_OBF_FUNC_jumpTab[18] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 58:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 71:
        _1_OBF_FUNC_jumpTab[17] = (void *)54UL;
        { _1_OBF_FUNC_next___0 = 64UL; }
        break;
      case 36:
      _1_OBF_FUNC_lab16:;
        { _1_OBF_FUNC_next___0 = 33UL; }
        break;
      case 6:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 106UL; }
        break;
      case 4:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 113:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 9:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 13:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 61:
        _1_OBF_FUNC_jumpTab[10] = (void *)46UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 99:
        _1_OBF_FUNC_jumpTab[30] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 62:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 104:
      _1_OBF_FUNC_lab23:;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 44:
      _1_OBF_FUNC_lab25:;
        { _1_OBF_FUNC_next___0 = 93UL; }
        break;
      case 110:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 73:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 32UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 39UL; }
        }
        break;
      case 51:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 84:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 63:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 56:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 42:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 98UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 15UL; }
        }
        break;
      case 87:
      _1_OBF_FUNC_lab5:
        sum += i;
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      case 81:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 114:
        _1_OBF_FUNC_jumpTab[24] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 3:
      _1_OBF_FUNC_lab4:
        sum += i;
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 28:;
        if (i < 127) {
          { _1_OBF_FUNC_next___0 = 90UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 55UL; }
        }
        break;
      case 52:
        _1_OBF_FUNC_jumpTab[26] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 29:
        _1_OBF_FUNC_jumpTab[31] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 96:
      _1_OBF_FUNC_lab19:;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 68:
      _1_OBF_FUNC_lab21:
        tmp___0 = rand();
        { _1_OBF_FUNC_next___0 = 97UL; }
        break;
      case 47:
      _1_OBF_FUNC_lab18:
        i++;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 65:
        _1_OBF_FUNC_jumpTab[16] = (void *)36UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 66:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 86:
        _1_OBF_FUNC_jumpTab[15] = (void *)59UL;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 5:
      _1_OBF_FUNC_lab0:;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 109:
        _1_OBF_FUNC_jumpTab[32] = (void *)101UL;
        { _1_OBF_FUNC_next___0 = 14UL; }
        break;
      case 67:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 112:;
        if (i < 127) {
          { _1_OBF_FUNC_next___0 = 66UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 17UL; }
        }
        break;
      case 45:
        _1_OBF_FUNC_jumpTab[4] = (void *)3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 14:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 43:
        _1_OBF_FUNC_jumpTab[3] = (void *)107UL;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 100:
        _1_OBF_FUNC_jumpTab[1] = (void *)23UL;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 85:
        _1_OBF_FUNC_jumpTab[22] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 23:
      _1_OBF_FUNC_lab1:
        i++;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 70:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 88:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 92:
      _1_OBF_FUNC_lab11:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 78:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 10:
        _1_OBF_FUNC_jumpTab[21] = (void *)68UL;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 69:
        _1_OBF_FUNC_jumpTab[12] = (void *)31UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 98:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 53:;
        if (i < 127) {
          { _1_OBF_FUNC_next___0 = 41UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 83UL; }
        }
        break;
      case 82:
        _1_OBF_FUNC_jumpTab[14] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 48:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 49:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 105:
        _1_OBF_FUNC_jumpTab[9] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 61UL; }
        break;
      case 94:
        _1_OBF_FUNC_jumpTab[25] = (void *)44UL;
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 20:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 115:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 93:;
        if (i < 127) {
          { _1_OBF_FUNC_next___0 = 4UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 91UL; }
        }
        break;
      }
    }
  }
}
// variants: loop-fission, flatten, flatten
// expanded variants: loop-fission, flatten:indirect-goto, flatten:switch
