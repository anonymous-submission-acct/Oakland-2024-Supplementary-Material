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
  int i;
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[15];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 20UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 22:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 42:;
        return (0);
        break;
      case 28:
        _1_OBF_FUNC_jumpTab[3] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 49:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab[11] = (void *)18UL;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 19:
      _1_OBF_FUNC_lab8:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 4:
        _1_OBF_FUNC_jumpTab[9] = (void *)54UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 53:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 7:
      _1_OBF_FUNC_lab1:
        s = str;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 30:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 10:
        _1_OBF_FUNC_jumpTab[8] = (void *)19UL;
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 44:
      _1_OBF_FUNC_lab6:;
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 46:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 33UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 23:
        _1_OBF_FUNC_jumpTab[6] = (void *)44UL;
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 45:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 3:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 26:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 32:
        _1_OBF_FUNC_jumpTab[10] = (void *)50UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 29:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 13:
        _1_OBF_FUNC_jumpTab[1] = (void *)7UL;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 37:
      _1_OBF_FUNC_lab2:
        t++;
        { _1_OBF_FUNC_next___0 = 47UL; }
        break;
      case 51:;
        if (*s) {
          { _1_OBF_FUNC_next___0 = 30UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 45UL; }
        }
        break;
      case 36:;
        return (0);
        break;
      case 24:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 12UL; }
        break;
      case 43:
      _1_OBF_FUNC_lab7:
        s++;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 47:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 33:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 14:;
        if (*t) {
          { _1_OBF_FUNC_next___0 = 39UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 38UL; }
        }
        break;
      case 54:
      _1_OBF_FUNC_lab9:
        t = str;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 11:
      _1_OBF_FUNC_lab14:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 1:
        _1_OBF_FUNC_jumpTab[2] = (void *)37UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 8:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 16:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 25:
        _1_OBF_FUNC_jumpTab[4] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 17:
        _1_OBF_FUNC_jumpTab[12] = (void *)2UL;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 5:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 2:
      _1_OBF_FUNC_lab12:
        sum += (int)*t;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 18:
      _1_OBF_FUNC_lab11:
        str = (char const *)*(argv + 1);
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 20:
        _1_OBF_FUNC_jumpTab[0] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 41:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 9:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 48:
        _1_OBF_FUNC_jumpTab[5] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 50:
      _1_OBF_FUNC_lab10:;
        { _1_OBF_FUNC_next___0 = 14UL; }
        break;
      case 38:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 40:
        _1_OBF_FUNC_jumpTab[13] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 21:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 31:
        _1_OBF_FUNC_jumpTab[14] = (void *)11UL;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 34:
      _1_OBF_FUNC_lab0:;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 35:
        _1_OBF_FUNC_jumpTab[7] = (void *)43UL;
        { _1_OBF_FUNC_next___0 = 10UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:indirect-goto, irrelevant-code, flatten:switch
