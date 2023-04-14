typedef void *__builtin_va_list;
struct _1_OBF_FUNC_argStruct;
char **_global_argv;
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int printf();
struct _1_OBF_FUNC_argStruct {
  int i;
  int sum;
  int *argc;
  int **argv;
  int _1_OBF_FUNC_return;
  unsigned long _1_OBF_FUNC_next;
};
char **_global_envp;
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:
    (_1_OBF_FUNC_arg->i)++;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:;
    if (_1_OBF_FUNC_arg->i < *(*(_1_OBF_FUNC_arg->argv) + 0)) {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL;
    } else {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 13UL;
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab14:
    printf("Sum is: %d\n", _1_OBF_FUNC_arg->sum);
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab11:
    _1_OBF_FUNC_arg->i = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL;
    return;
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  int _BARRIER_0___1;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___1; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___1:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___1; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___1:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___1; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___1:;
        }
        goto megaInit_INLINE_megaInit___1;
      }
    megaInit_INLINE_megaInit___1:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___1 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit___0;
  _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit___0;
  _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit___0;
  _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
    goto megaInit_INLINE_megaInit___0;
  megaInit_INLINE_megaInit___0:
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
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:
    _1_OBF_FUNC_arg->sum = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab7:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 15UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:;
    if (_1_OBF_FUNC_arg->i < *(*(_1_OBF_FUNC_arg->argv) + 0)) {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL;
    } else {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 14UL;
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab13:
    _1_OBF_FUNC_arg->i = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL;
    return;
  }
}
int OBF_FUNC(int argc, int *argv) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[15])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg);
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab___0[22];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 79UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 89:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 86:
        _1_OBF_FUNC_jumpTab___0[13] = (void *)29UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 71:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 87:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 56:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 48:
      _1_OBF_FUNC_lab12:
        _1_OBF_FUNC_arg.argv = &argv;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 13:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 72UL; }
        break;
      case 43:;
        if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 14UL) {
          { _1_OBF_FUNC_next___0 = 32UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 87UL; }
        }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 76:
        _1_OBF_FUNC_jumpTab___0[5] = (void *)68UL;
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 83:
      _1_OBF_FUNC_lab9:
        _1_OBF_FUNC_jumpTab[0] = &OBF_FUNC_FLATTEN_SPLIT_9;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 16:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 19:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 41:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 44:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 68:
      _1_OBF_FUNC_lab5:
        _1_OBF_FUNC_jumpTab[9] = &OBF_FUNC_FLATTEN_SPLIT_5;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 65:
        _1_OBF_FUNC_jumpTab___0[10] = (void *)30UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 17:
      _1_OBF_FUNC_lab17:
        _1_OBF_FUNC_jumpTab[5] = &OBF_FUNC_FLATTEN_SPLIT_9;
        { _1_OBF_FUNC_next___0 = 64UL; }
        break;
      case 29:
      _1_OBF_FUNC_lab13:
        _1_OBF_FUNC_jumpTab[10] = &OBF_FUNC_FLATTEN_SPLIT_9;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 45:;
        return (0);
        break;
      case 33:
        _1_OBF_FUNC_jumpTab___0[15] = (void *)88UL;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 84:
      _1_OBF_FUNC_lab3:
        _1_OBF_FUNC_jumpTab[3] = &OBF_FUNC_FLATTEN_SPLIT_9;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 67:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 37:
        _1_OBF_FUNC_jumpTab___0[16] = (void *)60UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 78:
        _1_OBF_FUNC_jumpTab___0[12] = (void *)48UL;
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 1:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 81:
      _1_OBF_FUNC_lab6:
        _1_OBF_FUNC_jumpTab[1] = &OBF_FUNC_FLATTEN_SPLIT_7;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 21:
      _1_OBF_FUNC_lab14:;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 79:
        _1_OBF_FUNC_jumpTab___0[0] = (void *)50UL;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab___0[14] = (void *)21UL;
        { _1_OBF_FUNC_next___0 = 33UL; }
        break;
      case 27:
      _1_OBF_FUNC_lab8:
        _1_OBF_FUNC_jumpTab[14] = &OBF_FUNC_FLATTEN_SPLIT_1;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 26:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 57:
        _1_OBF_FUNC_jumpTab___0[8] = (void *)27UL;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 72:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 18:;
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
        break;
      case 60:
      _1_OBF_FUNC_lab16:
        _1_OBF_FUNC_jumpTab[12] = &OBF_FUNC_FLATTEN_SPLIT_9;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 9:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 12UL; }
        break;
      case 10:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 44UL; }
        break;
      case 88:
      _1_OBF_FUNC_lab15:
        _1_OBF_FUNC_arg._1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 69:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 24:
        _1_OBF_FUNC_jumpTab___0[17] = (void *)17UL;
        { _1_OBF_FUNC_next___0 = 38UL; }
        break;
      case 14:
      _1_OBF_FUNC_lab21:
        _1_OBF_FUNC_jumpTab[13] = &OBF_FUNC_FLATTEN_SPLIT_6;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 55:
        _1_OBF_FUNC_jumpTab___0[3] = (void *)84UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 11:
      _1_OBF_FUNC_lab4:
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next]))(&_1_OBF_FUNC_arg);
        { _1_OBF_FUNC_next___0 = 10UL; }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab___0[11] = (void *)50UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 64:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 20:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 38:
        _1_OBF_FUNC_jumpTab___0[18] = (void *)75UL;
        { _1_OBF_FUNC_next___0 = 66UL; }
        break;
      case 74:
        _1_OBF_FUNC_jumpTab___0[1] = (void *)80UL;
        { _1_OBF_FUNC_next___0 = 47UL; }
        break;
      case 15:
        _1_OBF_FUNC_jumpTab___0[21] = (void *)14UL;
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 2:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 50:
      _1_OBF_FUNC_lab0:
        _1_OBF_FUNC_jumpTab[2] = &OBF_FUNC_FLATTEN_SPLIT_10;
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 49:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 73:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 59:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 54:
        _1_OBF_FUNC_jumpTab___0[6] = (void *)81UL;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 25:
      _1_OBF_FUNC_lab7:
        _1_OBF_FUNC_arg.argc = &argc;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 42:
        _1_OBF_FUNC_jumpTab___0[9] = (void *)83UL;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 28:
        _1_OBF_FUNC_jumpTab___0[20] = (void *)46UL;
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 40:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 61UL; }
        break;
      case 23:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 82:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 61:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 32:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 47:
        _1_OBF_FUNC_jumpTab___0[2] = (void *)58UL;
        { _1_OBF_FUNC_next___0 = 55UL; }
        break;
      case 35:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 75:
      _1_OBF_FUNC_lab18:
        _1_OBF_FUNC_jumpTab[4] = &OBF_FUNC_FLATTEN_SPLIT_2;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 80:
      _1_OBF_FUNC_lab1:
        _1_OBF_FUNC_jumpTab[6] = &OBF_FUNC_FLATTEN_SPLIT_8;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 77:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 70:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 5:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 4:
      _1_OBF_FUNC_lab19:;
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 8:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 51:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 41UL; }
        break;
      case 3:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 85:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 63:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 53:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 66:
        _1_OBF_FUNC_jumpTab___0[19] = (void *)4UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 36:
        _1_OBF_FUNC_jumpTab___0[7] = (void *)25UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 46:
      _1_OBF_FUNC_lab20:
        _1_OBF_FUNC_jumpTab[11] = &OBF_FUNC_FLATTEN_SPLIT_3;
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 62:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 30:
      _1_OBF_FUNC_lab10:
        _1_OBF_FUNC_jumpTab[7] = &OBF_FUNC_FLATTEN_SPLIT_0;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 31:
        _1_OBF_FUNC_jumpTab___0[4] = (void *)11UL;
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab___0[_1_OBF_FUNC_next];
        }
        break;
      case 58:
      _1_OBF_FUNC_lab2:
        _1_OBF_FUNC_jumpTab[8] = &OBF_FUNC_FLATTEN_SPLIT_4;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    (_1_OBF_FUNC_arg->i)++;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL;
    return;
  }
}
// variants: flatten, flatten, flatten
// expanded variants: flatten:call, flatten:indirect-goto, flatten:switch
