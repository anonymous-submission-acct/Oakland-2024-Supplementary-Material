typedef void *__builtin_va_list;
struct _1_OBF_FUNC_argStruct;
char **_global_argv;
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(printf)();
struct _1_OBF_FUNC_argStruct {
  unsigned char c;
  int *argc;
  int **argv;
  int _1_OBF_FUNC_return;
  unsigned long _1_OBF_FUNC_next;
};
char **_global_envp;
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
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
    tmp = strtoul(*(argv + 1));
    tmp___0 = OBF_FUNC(argc, (int *)tmp);
    return (tmp___0);
  }
}
int OBF_FUNC(int argc, int *argv) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[5])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg) = {&OBF_FUNC_FLATTEN_SPLIT_3, &OBF_FUNC_FLATTEN_SPLIT_4, &OBF_FUNC_FLATTEN_SPLIT_2, &OBF_FUNC_FLATTEN_SPLIT_0, &OBF_FUNC_FLATTEN_SPLIT_1};
  {
    { _1_OBF_FUNC_arg._1_OBF_FUNC_next = 2UL; }
    _1_OBF_FUNC_arg.argc = &argc;
    _1_OBF_FUNC_arg.argv = &argv;
    while (1) {
      if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 4) {
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
      } else {
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next - 0]))(&_1_OBF_FUNC_arg);
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab3:
    printf("win\n");
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:;
    if ((int)_1_OBF_FUNC_arg->c == 127) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    printf("lose\n");
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    _1_OBF_FUNC_arg->c = (unsigned char)*(*(_1_OBF_FUNC_arg->argv) + 0);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
// variants: loop-unroll, flatten
// expanded variants: loop-unroll, flatten:call
