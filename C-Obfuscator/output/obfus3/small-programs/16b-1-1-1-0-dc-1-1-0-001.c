typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int(rand)();
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
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
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 2UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 159:;
        if (*t) {
          { _1_OBF_FUNC_next = 53UL; }
        } else {
          { _1_OBF_FUNC_next = 102UL; }
        }
        break;
      case 2:
        sum = 0;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 62:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 4:
        tmp___20 = rand();
        { _1_OBF_FUNC_next = 9UL; }
        break;
      case 81:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 100UL; }
        break;
      case 53:
        tmp___13 = rand();
        { _1_OBF_FUNC_next = 90UL; }
        break;
      case 12:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 40:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 156UL; }
        break;
      case 82:
        tmp___19 = rand();
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 71:;
        if (tmp___22 % 10 >= 5) {
          { _1_OBF_FUNC_next = 58UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 72:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 154:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 91UL; }
        break;
      case 151:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 147:
        t++;
        { _1_OBF_FUNC_next = 159UL; }
        break;
      case 105:;
        if (tmp___17 % 10 >= 5) {
          { _1_OBF_FUNC_next = 87UL; }
        } else {
          { _1_OBF_FUNC_next = 38UL; }
        }
        break;
      case 120:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 137UL; }
        } else {
          { _1_OBF_FUNC_next = 81UL; }
        }
        break;
      case 115:
        sum *= (int)*t;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 118:
        t++;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 91:
        t++;
        { _1_OBF_FUNC_next = 137UL; }
        break;
      case 27:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 101:;
        if (tmp___15 % 10 >= 5) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 148UL; }
        }
        break;
      case 10:
        tmp___6 = rand();
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 16:
        str = (char const *)*(argv + 1);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 0:;
        if (tmp___18 % 10 >= 5) {
          { _1_OBF_FUNC_next = 87UL; }
        } else {
          { _1_OBF_FUNC_next = 46UL; }
        }
        break;
      case 70:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 137:;
        if (*t) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 124:;
        if (*t) {
          { _1_OBF_FUNC_next = 112UL; }
        } else {
          { _1_OBF_FUNC_next = 143UL; }
        }
        break;
      case 54:
        tmp___12 = rand();
        { _1_OBF_FUNC_next = 60UL; }
        break;
      case 141:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next = 104UL; }
        } else {
          { _1_OBF_FUNC_next = 12UL; }
        }
        break;
      case 9:;
        if (tmp___20 % 10 >= 5) {
          { _1_OBF_FUNC_next = 123UL; }
        } else {
          { _1_OBF_FUNC_next = 73UL; }
        }
        break;
      case 8:;
        if (tmp___19 % 10 >= 5) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      case 33:;
        if (tmp___10 % 10 >= 5) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 55UL; }
        }
        break;
      case 49:
        t++;
        { _1_OBF_FUNC_next = 104UL; }
        break;
      case 138:
        tmp___22 = rand();
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 31:
        tmp___9 = rand();
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 14:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next = 104UL; }
        } else {
          { _1_OBF_FUNC_next = 11UL; }
        }
        break;
      case 96:
        t++;
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 22:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 146UL; }
        break;
      case 127:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 78UL; }
        break;
      case 47:;
        if (*t) {
          { _1_OBF_FUNC_next = 130UL; }
        } else {
          { _1_OBF_FUNC_next = 124UL; }
        }
        break;
      case 3:;
        if (tmp___14 % 10 >= 5) {
          { _1_OBF_FUNC_next = 102UL; }
        } else {
          { _1_OBF_FUNC_next = 94UL; }
        }
        break;
      case 145:
        tmp = rand();
        { _1_OBF_FUNC_next = 120UL; }
        break;
      case 69:
        t++;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 61:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 107UL; }
        break;
      case 24:
        t = str;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 150:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 109UL; }
        break;
      case 17:
        t++;
        { _1_OBF_FUNC_next = 143UL; }
        break;
      case 92:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 123:;
        if (*t) {
          { _1_OBF_FUNC_next = 52UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 29:;
        if (*t) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 123UL; }
        }
        break;
      case 76:;
        if (tmp___21 % 10 >= 5) {
          { _1_OBF_FUNC_next = 42UL; }
        } else {
          { _1_OBF_FUNC_next = 61UL; }
        }
        break;
      case 119:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next = 143UL; }
        } else {
          { _1_OBF_FUNC_next = 133UL; }
        }
        break;
      case 99:
        t++;
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 6:
        t++;
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 146:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 47UL; }
        } else {
          { _1_OBF_FUNC_next = 150UL; }
        }
        break;
      case 152:;
        return (0);
        break;
      case 45:;
        if (tmp___11 % 10 >= 5) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 5:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 38:
        tmp___18 = rand();
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 100:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 137UL; }
        } else {
          { _1_OBF_FUNC_next = 27UL; }
        }
        break;
      case 32:
        tmp___10 = rand();
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 153:
        tmp___14 = rand();
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 112:
        tmp___5 = rand();
        { _1_OBF_FUNC_next = 119UL; }
        break;
      case 107:
        t++;
        { _1_OBF_FUNC_next = 123UL; }
        break;
      case 11:
        tmp___7 = rand();
        { _1_OBF_FUNC_next = 141UL; }
        break;
      case 87:;
        if (*t) {
          { _1_OBF_FUNC_next = 82UL; }
        } else {
          { _1_OBF_FUNC_next = 29UL; }
        }
        break;
      case 158:
        t++;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 7:
        t++;
        { _1_OBF_FUNC_next = 56UL; }
        break;
      case 109:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 47UL; }
        } else {
          { _1_OBF_FUNC_next = 154UL; }
        }
        break;
      case 90:;
        if (tmp___13 % 10 >= 5) {
          { _1_OBF_FUNC_next = 102UL; }
        } else {
          { _1_OBF_FUNC_next = 153UL; }
        }
        break;
      case 64:
        tmp___17 = rand();
        { _1_OBF_FUNC_next = 105UL; }
        break;
      case 86:;
        if (*t) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 159UL; }
        }
        break;
      case 73:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 99UL; }
        break;
      case 20:;
        if (tmp___16 % 10 >= 5) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 127UL; }
        }
        break;
      case 58:;
        if (*t) {
          { _1_OBF_FUNC_next = 92UL; }
        } else {
          { _1_OBF_FUNC_next = 149UL; }
        }
        break;
      case 126:
        t++;
        { _1_OBF_FUNC_next = 86UL; }
        break;
      case 135:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 124UL; }
        } else {
          { _1_OBF_FUNC_next = 62UL; }
        }
        break;
      case 46:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 7UL; }
        break;
      case 85:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 142:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 152UL; }
        break;
      case 59:
        tmp___8 = rand();
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 60:;
        if (tmp___12 % 10 >= 5) {
          { _1_OBF_FUNC_next = 159UL; }
        } else {
          { _1_OBF_FUNC_next = 151UL; }
        }
        break;
      case 78:
        t++;
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 134:
        tmp___15 = rand();
        { _1_OBF_FUNC_next = 101UL; }
        break;
      case 114:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 148:
        tmp___16 = rand();
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 23:
        t++;
        { _1_OBF_FUNC_next = 124UL; }
        break;
      case 149:;
        if (argc > 127) {
          { _1_OBF_FUNC_next = 85UL; }
        } else {
          { _1_OBF_FUNC_next = 115UL; }
        }
        break;
      case 117:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 26:;
        if (*t) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 86UL; }
        }
        break;
      case 19:;
        if (tmp___9 % 10 >= 5) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 117UL; }
        }
        break;
      case 102:;
        if (*t) {
          { _1_OBF_FUNC_next = 134UL; }
        } else {
          { _1_OBF_FUNC_next = 56UL; }
        }
        break;
      case 56:;
        if (*t) {
          { _1_OBF_FUNC_next = 64UL; }
        } else {
          { _1_OBF_FUNC_next = 87UL; }
        }
        break;
      case 143:;
        if (*t) {
          { _1_OBF_FUNC_next = 10UL; }
        } else {
          { _1_OBF_FUNC_next = 104UL; }
        }
        break;
      case 55:
        tmp___11 = rand();
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 133:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 23UL; }
        break;
      case 94:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 147UL; }
        break;
      case 52:
        tmp___21 = rand();
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 74:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 124UL; }
        } else {
          { _1_OBF_FUNC_next = 114UL; }
        }
        break;
      case 104:;
        if (*t) {
          { _1_OBF_FUNC_next = 59UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      case 130:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 135UL; }
        break;
      case 156:
        t++;
        { _1_OBF_FUNC_next = 87UL; }
        break;
      case 63:;
        if (*t) {
          { _1_OBF_FUNC_next = 145UL; }
        } else {
          { _1_OBF_FUNC_next = 137UL; }
        }
        break;
      case 42:;
        if (*t) {
          { _1_OBF_FUNC_next = 138UL; }
        } else {
          { _1_OBF_FUNC_next = 58UL; }
        }
        break;
      }
    }
  }
}
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
// variants: loop-fission, loop-fission, flatten
// expanded variants: loop-fission, loop-fission, flatten:switch
