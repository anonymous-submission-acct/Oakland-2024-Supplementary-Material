typedef void *__builtin_va_list;
int OBF_FUNC(int argc, int *argv) {
  if (argc < 699) {
    int __RANDVAR__79734302175225858833__ = 43;
  } else {
    argv = argv + 65;
    argv = argv - 65;
  }
  int i;
  int sum = 0;
  i = 0;
  argv = argv - 384;
  argv = argv + 384;
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__8682771870292151412__ = __RANDVAR__8682771870292151412__ + 442;
    if ((__RANDVAR__8682771870292151412__ + (argv - 927)) < ((__RANDVAR__8682771870292151412__ - 768) + 162)) {
      argv = argv - 165;
      argv = argv + 165;
    } else {
      if (argv < argc) {
        argc = argc + 46;
        argc = argc - 46;
      } else {
        int __RANDVAR__57640809142847841780__ = argv;
      }
    }
    sum += i;
    argv = argv + 840;
    argv = argv - 840;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__8682771870292151412__ = __RANDVAR__8682771870292151412__ + 442;
    if ((__RANDVAR__8682771870292151412__ + (argv - 927)) < ((__RANDVAR__8682771870292151412__ - 768) + 162)) {
      argv = argv - 165;
      argv = argv + 165;
    } else {
      if (argv < argc) {
        argc = argc + 46;
        argc = argc - 46;
      } else {
        int __RANDVAR__57640809142847841780__ = argv;
      }
    }
    sum += i;
    argv = argv + 840;
    argv = argv - 840;
    i++;
  }
  while (i < argv[0]) {
    if ((rand() % 10) >= 5)
      break;
    int __RANDVAR__8682771870292151412__ = __RANDVAR__8682771870292151412__ + 442;
    if ((__RANDVAR__8682771870292151412__ + (argv - 927)) < ((__RANDVAR__8682771870292151412__ - 768) + 162)) {
      argv = argv - 165;
      argv = argv + 165;
    } else {
      if (argv < argc) {
        argc = argc + 46;
        argc = argc - 46;
      } else {
        int __RANDVAR__57640809142847841780__ = argv;
      }
    }
    sum += i;
    argv = argv + 840;
    argv = argv - 840;
    i++;
  }
  while (i < argv[0]) {
    int __RANDVAR__8682771870292151412__ = __RANDVAR__8682771870292151412__ + 442;
    if ((__RANDVAR__8682771870292151412__ + (argv - 927)) < ((__RANDVAR__8682771870292151412__ - 768) + 162)) {
      argv = argv - 165;
      argv = argv + 165;
    } else {
      if (argv < argc) {
        argc = argc + 46;
        argc = argc - 46;
      } else {
        int __RANDVAR__57640809142847841780__ = argv;
      }
    }
    sum += i;
    argv = argv + 840;
    argv = argv - 840;
    i++;
  }
  int __RANDVAR__44494827512715814930__ = __RANDVAR__44494827512715814930__ + 1;
  printf("Sum is: %d\n", sum);
  int __RANDVAR__2740515566661593252__ = __RANDVAR__2740515566661593252__ * __RANDVAR__44494827512715814930__;
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }
// variants: irrelevant-code, loop-fission
// expanded variants: irrelevant-code, loop-fission
