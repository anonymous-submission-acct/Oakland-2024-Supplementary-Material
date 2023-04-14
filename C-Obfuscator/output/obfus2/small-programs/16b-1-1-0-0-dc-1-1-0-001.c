typedef void *__builtin_va_list;
struct _1_OBF_FUNC_argStruct;
char **_global_argv;
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
int _global_argc;
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
extern int(printf)();
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
struct _1_OBF_FUNC_argStruct {
  int __RANDVAR__42163187225304671775__;
  int i;
  int j;
  int sum;
  char const *str;
  char const *s;
  char const *t;
  int __RANDVAR__63575845028135856191__;
  int __RANDVAR__24621151360752836488__;
  int __RANDVAR__24937954630114512893__;
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
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg);
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
void OBF_FUNC_FLATTEN_SPLIT_2(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab12:;
    if ((unsigned long)*(_1_OBF_FUNC_arg->argv) < (unsigned long)(705 - *(_1_OBF_FUNC_arg->argc) * 502)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 19UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 16UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_3(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab15:
    *(_1_OBF_FUNC_arg->argv) += 622;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_14(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab16:
    *(_1_OBF_FUNC_arg->argc) += 983;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 11UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_16(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab14:
    _1_OBF_FUNC_arg->__RANDVAR__63575845028135856191__ = (int)*(_1_OBF_FUNC_arg->argv);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 9UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_6(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab11:
    *(_1_OBF_FUNC_arg->argc) -= 983;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_10(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab4:;
    if (*(_1_OBF_FUNC_arg->t)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 18UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 6UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_0(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab19:
    (_1_OBF_FUNC_arg->__RANDVAR__42163187225304671775__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 3UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_9(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab10:
    *(_1_OBF_FUNC_arg->argv) -= 622;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 15UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_18(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab8:;
    if ((unsigned long)*(_1_OBF_FUNC_arg->argv) < (unsigned long)*(_1_OBF_FUNC_arg->argc)) {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 14UL; }
    } else {
      { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 10UL; }
    }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_11(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab1:
    (_1_OBF_FUNC_arg->__RANDVAR__24937954630114512893__)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 17UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_12(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab0:
    _1_OBF_FUNC_arg->str = (char const *)*(*(_1_OBF_FUNC_arg->argv) + 1);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 13UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_19(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab18:
    _1_OBF_FUNC_arg->sum += (int)*(_1_OBF_FUNC_arg->t);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 5UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_7(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab13:
    *(_1_OBF_FUNC_arg->argv) -= 538;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 2UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_5(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab9:
    _1_OBF_FUNC_arg->t = _1_OBF_FUNC_arg->str;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 21UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_17(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab17:;
    _1_OBF_FUNC_arg->_1_OBF_FUNC_return = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 22UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_15(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab6:
    printf("Sum is: %d\n", _1_OBF_FUNC_arg->sum);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 1UL; }
    return;
  }
}
int OBF_FUNC(int argc, int *argv) {
  struct _1_OBF_FUNC_argStruct _1_OBF_FUNC_arg;
  void (*_1_OBF_FUNC_jumpTab[22])(struct _1_OBF_FUNC_argStruct * _1_OBF_FUNC_arg) = {&OBF_FUNC_FLATTEN_SPLIT_12, &OBF_FUNC_FLATTEN_SPLIT_11, &OBF_FUNC_FLATTEN_SPLIT_8, &OBF_FUNC_FLATTEN_SPLIT_4, &OBF_FUNC_FLATTEN_SPLIT_10, &OBF_FUNC_FLATTEN_SPLIT_13, &OBF_FUNC_FLATTEN_SPLIT_15, &OBF_FUNC_FLATTEN_SPLIT_12, &OBF_FUNC_FLATTEN_SPLIT_18, &OBF_FUNC_FLATTEN_SPLIT_5, &OBF_FUNC_FLATTEN_SPLIT_9, &OBF_FUNC_FLATTEN_SPLIT_6, &OBF_FUNC_FLATTEN_SPLIT_2, &OBF_FUNC_FLATTEN_SPLIT_7, &OBF_FUNC_FLATTEN_SPLIT_16, &OBF_FUNC_FLATTEN_SPLIT_3, &OBF_FUNC_FLATTEN_SPLIT_14, &OBF_FUNC_FLATTEN_SPLIT_17, &OBF_FUNC_FLATTEN_SPLIT_19, &OBF_FUNC_FLATTEN_SPLIT_0, &OBF_FUNC_FLATTEN_SPLIT_12, &OBF_FUNC_FLATTEN_SPLIT_1};
  {
    { _1_OBF_FUNC_arg._1_OBF_FUNC_next = 12UL; }
    _1_OBF_FUNC_arg.argc = &argc;
    _1_OBF_FUNC_arg.argv = &argv;
    while (1) {
      if (_1_OBF_FUNC_arg._1_OBF_FUNC_next > 21) {
        return (_1_OBF_FUNC_arg._1_OBF_FUNC_return);
      } else {
        (*(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_arg._1_OBF_FUNC_next - 0]))(&_1_OBF_FUNC_arg);
      }
    }
  }
}
void OBF_FUNC_FLATTEN_SPLIT_8(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab2:
    *(_1_OBF_FUNC_arg->argv) += 538;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 8UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_13(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab5:
    (_1_OBF_FUNC_arg->t)++;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_1(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab21:
    _1_OBF_FUNC_arg->__RANDVAR__24621151360752836488__ = (int)*(_1_OBF_FUNC_arg->argv);
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 4UL; }
    return;
  }
}
void OBF_FUNC_FLATTEN_SPLIT_4(struct _1_OBF_FUNC_argStruct *_1_OBF_FUNC_arg) {
  {
  _1_OBF_FUNC_lab3:
    _1_OBF_FUNC_arg->sum = 0;
    { _1_OBF_FUNC_arg->_1_OBF_FUNC_next = 0UL; }
    return;
  }
}
// variants: irrelevant-code, flatten
// expanded variants: irrelevant-code, flatten:call
