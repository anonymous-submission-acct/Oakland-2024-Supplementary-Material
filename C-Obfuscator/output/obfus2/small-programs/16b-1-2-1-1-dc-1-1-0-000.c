typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  int i;
  int __RANDVAR__26968948178365670930__ = (__RANDVAR__26968948178365670930__ - argc) * 914;
  if (__RANDVAR__26968948178365670930__ < (__RANDVAR__26968948178365670930__ * argc)) {
    int __RANDVAR__79073648802874886540__ = 678 + (703 - argc);
    if (argc < ((__RANDVAR__79073648802874886540__ * argc) + __RANDVAR__79073648802874886540__)) {
      int __RANDVAR__87855381386375131655__ = 853;
    } else {
      argc = argc - 194;
      argc = argc + 194;
    }
  } else {
    int __RANDVAR__20719342299032595301__ = argc;
    if (argv < 916) {
      argc = argc - 427;
      argc = argc + 427;
    } else {
      argv = argv - 168;
      argv = argv + 168;
    }
  }
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  t = str;
  int __RANDVAR__13020388010285977583__ = 929;
  while (*t) {
    if ((rand() % 10) >= 5)
      break;
    if (argv < argc) {
      int __RANDVAR__36214651619444941513__ = 113;
    } else {
      argc = argc + 386;
      argc = argc - 386;
    }
    if ((*t) > 127)
      sum += *t;
    else
      sum += *t;
    int __RANDVAR__90056569460247986873__ = argv;
    ++t;
  }
  int __RANDVAR__92821419107217343429__ = (37 * 791) + 699;
  while (*t) {
    int __RANDVAR__45500660275993632204__ = (582 * argc) + (__RANDVAR__45500660275993632204__ - 567);
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__28248767059672255424__ = 480;
    if ((*t) > 127)
      sum += *t;
    else
      sum += *t;
    int __RANDVAR__33555091386696024371__ = 378;
    ++t;
  }
  if (((__RANDVAR__92821419107217343429__ * 578) - (583 - argc)) < 420) {
    if (__RANDVAR__92821419107217343429__ < ((argv - 847) - argv)) {
      int __RANDVAR__45403104663597264179__ = 603;
    } else {
      argc = argc - 995;
      argc = argc + 995;
    }
  } else {
    int __RANDVAR__53564567745395302477__ = 274;
    if (argc < ((argc * 457) * 926)) {
      int __RANDVAR__53643822713128170378__ = 12;
    } else {
      argv = argv + 654;
      argv = argv - 654;
    }
  }
  while (*t) {
    if ((rand() % 10) >= 5)
      break;
    if ((*t) > 127)
      sum += *t;
    else
      sum += *t;
    ++t;
  }
  if (((__RANDVAR__13020388010285977583__ + argv) - argc) < argc) {
    argv = argv + 200;
    argv = argv - 200;
  } else {
    int __RANDVAR__66130450584786084674__ = 276;
  }
  while (*t) {
    __RANDVAR__92821419107217343429__ = __RANDVAR__92821419107217343429__ + 250;
    __RANDVAR__92821419107217343429__ = __RANDVAR__92821419107217343429__ - 250;
    {
      if ((*t) > 127)
        sum += *t;
      else
        sum += *t;
    }
    int __RANDVAR__92390223204233786737__ = __RANDVAR__13020388010285977583__;
    if ((677 + (__RANDVAR__92821419107217343429__ - __RANDVAR__92390223204233786737__)) < 470) {
      argv = argv + 596;
      argv = argv - 596;
    } else {
      if (argv < (981 * (234 - __RANDVAR__13020388010285977583__))) {
        __RANDVAR__13020388010285977583__ = __RANDVAR__13020388010285977583__ - 103;
        __RANDVAR__13020388010285977583__ = __RANDVAR__13020388010285977583__ + 103;
      } else {
        argv = argv + 628;
        argv = argv - 628;
      }
    }
    ++t;
  }
  if (argv < (942 + argv)) {
    __RANDVAR__92821419107217343429__ = __RANDVAR__92821419107217343429__ - 426;
    __RANDVAR__92821419107217343429__ = __RANDVAR__92821419107217343429__ + 426;
  } else {
    __RANDVAR__13020388010285977583__ = __RANDVAR__13020388010285977583__ + 86;
    __RANDVAR__13020388010285977583__ = __RANDVAR__13020388010285977583__ - 86;
  }
  printf("Sum is: %d\n", sum);
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
