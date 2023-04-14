typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
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
  int i;
  int j;
  int sum;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[125] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab20, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab39, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab51, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab110, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab121, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124};
  {
    { _1_OBF_FUNC_next = 75UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab45:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab14;
    } else {
      goto _1_OBF_FUNC_lab77;
    }
  _1_OBF_FUNC_lab35:
    j++;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab25:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab58;
    } else {
      goto _1_OBF_FUNC_lab14;
    }
  _1_OBF_FUNC_lab17:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab90:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab110;
    } else {
      goto _1_OBF_FUNC_lab109;
    }
  _1_OBF_FUNC_lab118:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab51;
    } else {
      goto _1_OBF_FUNC_lab25;
    }
  _1_OBF_FUNC_lab8:
    sum += j;
    goto _1_OBF_FUNC_lab66;
  _1_OBF_FUNC_lab91:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab90;
    } else {
      goto _1_OBF_FUNC_lab60;
    }
  _1_OBF_FUNC_lab77:
    sum += j;
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab39:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab30;
  _1_OBF_FUNC_lab107:
    tmp = rand();
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab9:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab22;
    } else {
      goto _1_OBF_FUNC_lab28;
    }
  _1_OBF_FUNC_lab96:
    j++;
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab123:
    sum += j;
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab68:
    sum += j;
    goto _1_OBF_FUNC_lab56;
  _1_OBF_FUNC_lab120:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab53:
    sum += j;
    goto _1_OBF_FUNC_lab81;
  _1_OBF_FUNC_lab112:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab58:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab66:
    j++;
    goto _1_OBF_FUNC_lab121;
  _1_OBF_FUNC_lab44:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab109;
    } else {
      goto _1_OBF_FUNC_lab52;
    }
  _1_OBF_FUNC_lab122:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab43;
  _1_OBF_FUNC_lab101:
    sum += j;
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab64:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab68;
    } else {
      goto _1_OBF_FUNC_lab47;
    }
  _1_OBF_FUNC_lab51:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab12;
  _1_OBF_FUNC_lab110:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab89:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab48;
    } else {
      goto _1_OBF_FUNC_lab67;
    }
  _1_OBF_FUNC_lab0:
    j++;
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab60:
    j = 0;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab15:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab1;
    } else {
      goto _1_OBF_FUNC_lab86;
    }
  _1_OBF_FUNC_lab80:
    sum += j;
    goto _1_OBF_FUNC_lab0;
  _1_OBF_FUNC_lab12:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab25;
    } else {
      goto _1_OBF_FUNC_lab124;
    }
  _1_OBF_FUNC_lab18:
    j++;
    goto _1_OBF_FUNC_lab87;
  _1_OBF_FUNC_lab119:
    j++;
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab1:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab41:
    i++;
    goto _1_OBF_FUNC_lab90;
  _1_OBF_FUNC_lab71:
    sum += j;
    goto _1_OBF_FUNC_lab119;
  _1_OBF_FUNC_lab52:
    j = 0;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab84:
    sum += j;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab23:
    i++;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab19:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab107;
    } else {
      goto _1_OBF_FUNC_lab1;
    }
  _1_OBF_FUNC_lab83:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab121;
    } else {
      goto _1_OBF_FUNC_lab84;
    }
  _1_OBF_FUNC_lab46:
    sum += j;
    goto _1_OBF_FUNC_lab3;
  _1_OBF_FUNC_lab56:
    j++;
    goto _1_OBF_FUNC_lab64;
  _1_OBF_FUNC_lab86:
    j = 0;
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab109:;
    if (i < 127) {
      goto _1_OBF_FUNC_lab16;
    } else {
      goto _1_OBF_FUNC_lab112;
    }
  _1_OBF_FUNC_lab75:
    sum = 0;
    goto _1_OBF_FUNC_lab116;
  _1_OBF_FUNC_lab103:
    j++;
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab105:
    j++;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab10:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab108:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab118;
    } else {
      goto _1_OBF_FUNC_lab101;
    }
  _1_OBF_FUNC_lab87:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab120;
    } else {
      goto _1_OBF_FUNC_lab121;
    }
  _1_OBF_FUNC_lab73:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab39;
    } else {
      goto _1_OBF_FUNC_lab87;
    }
  _1_OBF_FUNC_lab59:
    j++;
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab69:;
    return (0);
  _1_OBF_FUNC_lab7:
    sum += j;
    goto _1_OBF_FUNC_lab96;
  _1_OBF_FUNC_lab43:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab9;
    } else {
      goto _1_OBF_FUNC_lab123;
    }
  _1_OBF_FUNC_lab16:
    j = 0;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab40:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab8;
    }
  _1_OBF_FUNC_lab22:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab114;
  _1_OBF_FUNC_lab3:
    j++;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab111:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab122;
    } else {
      goto _1_OBF_FUNC_lab9;
    }
  _1_OBF_FUNC_lab121:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab63;
    } else {
      goto _1_OBF_FUNC_lab64;
    }
  _1_OBF_FUNC_lab26:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab20;
    } else {
      goto _1_OBF_FUNC_lab7;
    }
  _1_OBF_FUNC_lab76:
    j++;
    goto _1_OBF_FUNC_lab118;
  _1_OBF_FUNC_lab28:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab17;
    } else {
      goto _1_OBF_FUNC_lab20;
    }
  _1_OBF_FUNC_lab14:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab71;
    } else {
      goto _1_OBF_FUNC_lab41;
    }
  _1_OBF_FUNC_lab5:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab108;
  _1_OBF_FUNC_lab114:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab28;
    } else {
      goto _1_OBF_FUNC_lab80;
    }
  _1_OBF_FUNC_lab63:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab81:
    j++;
    goto _1_OBF_FUNC_lab20;
  _1_OBF_FUNC_lab124:
    sum += j;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab116:
    i = 0;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab48:
    sum += j;
    goto _1_OBF_FUNC_lab105;
  _1_OBF_FUNC_lab24:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab118;
    }
  _1_OBF_FUNC_lab47:
    i++;
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab20:;
    if (j < *(argv + 0)) {
      goto _1_OBF_FUNC_lab53;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab67:
    i++;
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab30:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab87;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  }
}
// variants: loop-fission, flatten
// expanded variants: loop-fission, flatten:goto
