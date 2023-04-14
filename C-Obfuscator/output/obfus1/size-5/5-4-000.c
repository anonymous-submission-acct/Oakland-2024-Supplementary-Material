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
struct _1_OBF_FUNC_argStruct {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int *input;
  unsigned int _1_OBF_FUNC_return;
  unsigned long _1_OBF_FUNC_next;
};
char **_global_envp;
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(strtol)();
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:
    _1_OBF_FUNC_arg->localStaticState[_1_OBF_FUNC_arg->_index0_1] = _1_OBF_FUNC_arg->localStaticState[(unsigned long)((int)_1_OBF_FUNC_arg->localStaticState[0UL]) % 2UL] + _1_OBF_FUNC_arg->localStaticState[(unsigned long)_1_OBF_FUNC_arg->_index0_1 % 2UL];
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 12UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = (_1_OBF_FUNC_arg->localStaticState[0UL] - _1_OBF_FUNC_arg->localStaticState[1UL]) + 561002488U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 13UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:
    _1_OBF_FUNC_arg->localStaticState[0UL] = (unsigned int)((unsigned long)*(_1_OBF_FUNC_arg->input) * 936224497UL + 544459364UL);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab7:
    (_1_OBF_FUNC_arg->_index0_1)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab3:;
    if ((unsigned long)_1_OBF_FUNC_arg->_index0_1 < 1UL) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 10UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab12:
    _1_OBF_FUNC_arg->_induction1_0_2 = (unsigned int)(((unsigned long)_1_OBF_FUNC_arg->_induction1_0_2 + 1UL) % 2UL);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 7UL; }
    return;
  }
}
unsigned int OBF_FUNC(unsigned int input) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[13])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg) = {&OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_6, &OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_7, &OBF_FUNC_FLATTEN_SPLIT_2, &OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_3, &OBF_FUNC_FLATTEN_SPLIT_1, &OBF_FUNC_FLATTEN_SPLIT_8, &OBF_FUNC_FLATTEN_SPLIT_5, &OBF_FUNC_FLATTEN_SPLIT_10, &OBF_FUNC_FLATTEN_SPLIT_0, &OBF_FUNC_FLATTEN_SPLIT_4};
  {
    { _1_OBF_FUNC_arg._1_OBF_FUNC_next = 6UL; }
    _1_OBF_FUNC_arg.input = &input;
    while (1) {
      if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 12) {
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
      } else {
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next - 0]))(&_1_OBF_FUNC_arg);
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    _1_OBF_FUNC_arg->localStaticState[1UL] = (unsigned int)((unsigned long)*(_1_OBF_FUNC_arg->input) * (429642679UL + (unsigned long)_1_OBF_FUNC_arg->localStaticState[0UL]));
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:
    _1_OBF_FUNC_arg->_index0_1 = 0U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab11:
    _1_OBF_FUNC_arg->_induction1_0_2 = 0U;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:;
    if (!((_1_OBF_FUNC_arg->localStaticState[0UL] >> 4U) & 1U)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    }
    return;
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
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab10:
    _1_OBF_FUNC_arg->localStaticState[1UL] = _1_OBF_FUNC_arg->localStaticState[(unsigned long)_1_OBF_FUNC_arg->_index0_1 % 2UL] * _1_OBF_FUNC_arg->localStaticState[(unsigned long)((int)_1_OBF_FUNC_arg->localStaticState[1UL]) % 2UL];
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
// variants: flatten
// expanded variants: flatten:call
