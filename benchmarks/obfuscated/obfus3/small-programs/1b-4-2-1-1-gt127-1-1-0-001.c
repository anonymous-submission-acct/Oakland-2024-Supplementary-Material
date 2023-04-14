typedef void *__builtin_va_list;
struct _1_OBF_FUNC_argStruct;
char **_global_argv;
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab5:;
    if (*(*(_1_OBF_FUNC_arg->argv) + _1_OBF_FUNC_arg->i) > 127) {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL;
    } else {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL;
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab7:
    (_1_OBF_FUNC_arg->sum)++;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL;
    return;
  }
}
int OBF_FUNC(int argc, int *argv) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[11])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg);
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 7UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 16:
        _1_OBF_FUNC_arg._1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 10:
        _1_OBF_FUNC_jumpTab[10] = &OBF_FUNC_FLATTEN_SPLIT_6;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 12:
        _1_OBF_FUNC_arg.argc = &argc;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 3:
        _1_OBF_FUNC_jumpTab[3] = &OBF_FUNC_FLATTEN_SPLIT_2;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 6:
        _1_OBF_FUNC_jumpTab[1] = &OBF_FUNC_FLATTEN_SPLIT_2;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 8:
        _1_OBF_FUNC_jumpTab[7] = &OBF_FUNC_FLATTEN_SPLIT_0;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 15:;
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
        break;
      case 4:
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next]))(&_1_OBF_FUNC_arg);
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 2:
        _1_OBF_FUNC_jumpTab[8] = &OBF_FUNC_FLATTEN_SPLIT_1;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 1:
        _1_OBF_FUNC_jumpTab[6] = &OBF_FUNC_FLATTEN_SPLIT_7;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 11:;
        if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 10UL) {
          { _1_OBF_FUNC_next = 15UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 7:
        _1_OBF_FUNC_jumpTab[0] = &OBF_FUNC_FLATTEN_SPLIT_2;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 5:
        _1_OBF_FUNC_jumpTab[9] = &OBF_FUNC_FLATTEN_SPLIT_3;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 14:
        _1_OBF_FUNC_jumpTab[4] = &OBF_FUNC_FLATTEN_SPLIT_4;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 13:
        _1_OBF_FUNC_jumpTab[5] = &OBF_FUNC_FLATTEN_SPLIT_8;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 17:
        _1_OBF_FUNC_arg.argv = &argv;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab[2] = &OBF_FUNC_FLATTEN_SPLIT_5;
        { _1_OBF_FUNC_next = 3UL; }
        break;
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:;
    if (_1_OBF_FUNC_arg->i < *(_1_OBF_FUNC_arg->argc)) {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL;
    } else {
      _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL;
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab10:
    _1_OBF_FUNC_arg->i = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:
    printf("Sum is: %d\n", _1_OBF_FUNC_arg->sum);
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:
    _1_OBF_FUNC_arg->sum = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 10UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 0;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:
    (_1_OBF_FUNC_arg->i)++;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL;
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    _1_OBF_FUNC_arg->sum += _1_OBF_FUNC_arg->i;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL;
    return;
  }
}
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
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:call, irrelevant-code, flatten:switch
