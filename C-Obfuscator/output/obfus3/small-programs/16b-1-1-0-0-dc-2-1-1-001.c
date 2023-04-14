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
  int __RANDVAR__81456730091548720739__;
  int i;
  int __RANDVAR__37588246185872025672__;
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
  int __RANDVAR__85262503683687874757__;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int __RANDVAR__79347208977307049986__;
  int __RANDVAR__97043407349396065344__;
  int __RANDVAR__28900333055994920081__;
  int __RANDVAR__88345789465165210724__;
  int __RANDVAR__63923994159855589814__;
  int __RANDVAR__81849691720692356538__;
  int __RANDVAR__47514199780362185023__;
  int tmp___3;
  int __RANDVAR__79347208977307049986_____0;
  int __RANDVAR__97043407349396065344_____0;
  int __RANDVAR__28900333055994920081_____0;
  int __RANDVAR__88345789465165210724_____0;
  int __RANDVAR__63923994159855589814_____0;
  int __RANDVAR__81849691720692356538_____0;
  int __RANDVAR__47514199780362185023_____0;
  int tmp___4;
  int __RANDVAR__79347208977307049986_____1;
  int __RANDVAR__97043407349396065344_____1;
  int __RANDVAR__28900333055994920081_____1;
  int __RANDVAR__88345789465165210724_____1;
  int __RANDVAR__63923994159855589814_____1;
  int __RANDVAR__81849691720692356538_____1;
  int __RANDVAR__47514199780362185023_____1;
  int __RANDVAR__79347208977307049986_____2;
  int __RANDVAR__97043407349396065344_____2;
  int __RANDVAR__28900333055994920081_____2;
  int __RANDVAR__88345789465165210724_____2;
  int __RANDVAR__63923994159855589814_____2;
  int __RANDVAR__81849691720692356538_____2;
  int __RANDVAR__47514199780362185023_____2;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 4UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 11:
        i++;
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 101:
        argc -= 180;
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 44:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 107UL; }
        break;
      case 82:
        __RANDVAR__28900333055994920081_____0 = 650;
        { _1_OBF_FUNC_next = 92UL; }
        break;
      case 113:
        __RANDVAR__79347208977307049986_____0 = (int)((argv + __RANDVAR__37588246185872025672__) + 830);
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 38:
        tmp = rand();
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 66:
        __RANDVAR__28900333055994920081_____2 = 650;
        { _1_OBF_FUNC_next = 98UL; }
        break;
      case 93:
        __RANDVAR__88345789465165210724_____0 = 599;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 40:;
        if (655 * argc < __RANDVAR__37588246185872025672__) {
          { _1_OBF_FUNC_next = 94UL; }
        } else {
          { _1_OBF_FUNC_next = 90UL; }
        }
        break;
      case 80:
        __RANDVAR__97043407349396065344_____2 = 754;
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 97:;
        if (655 * argc < __RANDVAR__37588246185872025672__) {
          { _1_OBF_FUNC_next = 91UL; }
        } else {
          { _1_OBF_FUNC_next = 81UL; }
        }
        break;
      case 98:;
        if (655 * argc < __RANDVAR__37588246185872025672__) {
          { _1_OBF_FUNC_next = 110UL; }
        } else {
          { _1_OBF_FUNC_next = 2UL; }
        }
        break;
      case 104:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 113UL; }
        }
        break;
      case 0:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 32:
        i++;
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 77:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 69UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 48:;
        if ((argc + 946) + 295 < __RANDVAR__81456730091548720739__ - 628881) {
          { _1_OBF_FUNC_next = 49UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 118:;
        if (*t) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 25:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 77UL; }
        break;
      case 52:
        __RANDVAR__47514199780362185023_____2 = 5;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 99:
        __RANDVAR__97043407349396065344_____0 = 754;
        { _1_OBF_FUNC_next = 78UL; }
        break;
      case 102:
        t++;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 53:
        argc += 180;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 10:
        __RANDVAR__81849691720692356538_____2 = 749;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 92:;
        if (655 * argc < __RANDVAR__37588246185872025672__) {
          { _1_OBF_FUNC_next = 93UL; }
        } else {
          { _1_OBF_FUNC_next = 36UL; }
        }
        break;
      case 14:
        argc -= 180;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 81:
        __RANDVAR__63923994159855589814__++;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 36:
        __RANDVAR__63923994159855589814_____0++;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 94:
        __RANDVAR__88345789465165210724_____1 = 599;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 46:
        __RANDVAR__28900333055994920081__ = 650;
        { _1_OBF_FUNC_next = 97UL; }
        break;
      case 35:
        t++;
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 49:
        __RANDVAR__28900333055994920081_____1 = 650;
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 7:
        __RANDVAR__81849691720692356538__ = 749;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 8:;
        if (__RANDVAR__37588246185872025672__ < (argc + 941) + __RANDVAR__85262503683687874757__) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 116UL; }
        }
        break;
      case 79:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 61UL; }
        } else {
          { _1_OBF_FUNC_next = 103UL; }
        }
        break;
      case 54:;
        if (*t) {
          { _1_OBF_FUNC_next = 16UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 4:
        __RANDVAR__81456730091548720739__ = argc;
        { _1_OBF_FUNC_next = 108UL; }
        break;
      case 63:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 31:;
        if (*t) {
          { _1_OBF_FUNC_next = 43UL; }
        } else {
          { _1_OBF_FUNC_next = 67UL; }
        }
        break;
      case 65:
        __RANDVAR__79347208977307049986_____1 = (int)((argv + __RANDVAR__37588246185872025672__) + 830);
        { _1_OBF_FUNC_next = 56UL; }
        break;
      case 24:
        i = 0;
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 86:
        __RANDVAR__81456730091548720739__ -= 291;
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 111:
        __RANDVAR__81456730091548720739__ += 13;
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 56:;
        if (__RANDVAR__37588246185872025672__ < (argc + 941) + __RANDVAR__85262503683687874757__) {
          { _1_OBF_FUNC_next = 60UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 21:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 47UL; }
        } else {
          { _1_OBF_FUNC_next = 41UL; }
        }
        break;
      case 64:
        __RANDVAR__81456730091548720739__ -= 13;
        { _1_OBF_FUNC_next = 111UL; }
        break;
      case 33:
        __RANDVAR__47514199780362185023_____1 = 5;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 59:;
        if ((argc + 946) + 295 < __RANDVAR__81456730091548720739__ - 628881) {
          { _1_OBF_FUNC_next = 66UL; }
        } else {
          { _1_OBF_FUNC_next = 10UL; }
        }
        break;
      case 100:
        __RANDVAR__81849691720692356538_____0 = 749;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 103:
        sum += i;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 58:
        t++;
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 28:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 5:;
        if (*t) {
          { _1_OBF_FUNC_next = 83UL; }
        } else {
          { _1_OBF_FUNC_next = 54UL; }
        }
        break;
      case 96:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 5UL; }
        } else {
          { _1_OBF_FUNC_next = 9UL; }
        }
        break;
      case 110:
        __RANDVAR__88345789465165210724_____2 = 599;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 16:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 112UL; }
        break;
      case 68:
        __RANDVAR__85262503683687874757__ = 102648;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 41:
        sum += i;
        { _1_OBF_FUNC_next = 117UL; }
        break;
      case 115:
        t++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 29:
        i++;
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 117:
        i++;
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 67:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 108:
        __RANDVAR__37588246185872025672__ = (__RANDVAR__81456730091548720739__ - 815) - argc;
        { _1_OBF_FUNC_next = 73UL; }
        break;
      case 39:
        sum += i;
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 3:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 73:
        sum = 0;
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 9:
        __RANDVAR__79347208977307049986__ = (int)((argv + __RANDVAR__37588246185872025672__) + 830);
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 2:
        __RANDVAR__63923994159855589814_____2++;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 71:;
        if (__RANDVAR__37588246185872025672__ < (argc + 941) + __RANDVAR__85262503683687874757__) {
          { _1_OBF_FUNC_next = 80UL; }
        } else {
          { _1_OBF_FUNC_next = 101UL; }
        }
        break;
      case 27:
        __RANDVAR__81456730091548720739__ += 291;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 61:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 69UL; }
        }
        break;
      case 62:
        sum += i;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 47:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 0UL; }
        } else {
          { _1_OBF_FUNC_next = 61UL; }
        }
        break;
      case 83:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 104UL; }
        break;
      case 106:
        argc += 180;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 60:
        __RANDVAR__97043407349396065344_____1 = 754;
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 75:
        str = (char const *)*(argv + 1);
        { _1_OBF_FUNC_next = 68UL; }
        break;
      case 78:;
        if ((argc + 946) + 295 < __RANDVAR__81456730091548720739__ - 628881) {
          { _1_OBF_FUNC_next = 82UL; }
        } else {
          { _1_OBF_FUNC_next = 100UL; }
        }
        break;
      case 18:
        __RANDVAR__47514199780362185023_____0 = 5;
        { _1_OBF_FUNC_next = 115UL; }
        break;
      case 30:;
        if (__RANDVAR__37588246185872025672__ < (argc + 941) + __RANDVAR__85262503683687874757__) {
          { _1_OBF_FUNC_next = 99UL; }
        } else {
          { _1_OBF_FUNC_next = 14UL; }
        }
        break;
      case 116:
        argc -= 180;
        { _1_OBF_FUNC_next = 106UL; }
        break;
      case 51:
        argc += 180;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 107:
        __RANDVAR__47514199780362185023__ = 5;
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 20:
        __RANDVAR__97043407349396065344__ = 754;
        { _1_OBF_FUNC_next = 105UL; }
        break;
      case 69:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 62UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      case 43:
        __RANDVAR__79347208977307049986_____2 = (int)((argv + __RANDVAR__37588246185872025672__) + 830);
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 105:;
        if ((argc + 946) + 295 < __RANDVAR__81456730091548720739__ - 628881) {
          { _1_OBF_FUNC_next = 46UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 1:
        __RANDVAR__81849691720692356538_____1 = 749;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 112:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 31UL; }
        } else {
          { _1_OBF_FUNC_next = 65UL; }
        }
        break;
      case 6:
        sum += (int)*t;
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 26:
        t = str;
        { _1_OBF_FUNC_next = 86UL; }
        break;
      case 91:
        __RANDVAR__88345789465165210724__ = 599;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 74:
        argc += 180;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 42:
        argc -= 180;
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 85:;
        return (0);
        break;
      case 50:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 90:
        __RANDVAR__63923994159855589814_____1++;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      }
    }
  }
}
// variants: irrelevant-code, loop-fission, flatten
// expanded variants: irrelevant-code, loop-fission, flatten:switch
