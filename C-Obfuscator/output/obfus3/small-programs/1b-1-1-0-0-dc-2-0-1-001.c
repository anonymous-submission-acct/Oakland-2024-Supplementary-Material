typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int(printf)();
char **_global_envp;
extern int(strtoul)();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
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
  int sum;
  int __RANDVAR__47888733787485224865__;
  int __RANDVAR__21526537379964246864__;
  int __RANDVAR__20806269633128621441__;
  int __RANDVAR__68805441388094528133__;
  int __RANDVAR__71623255271838404732__;
  int __RANDVAR__49236625998652963583__;
  int __RANDVAR__37801990454094724671__;
  int __RANDVAR__52724944658658789189__;
  int __RANDVAR__67630478704052763169__;
  int __RANDVAR__2556335932723160743__;
  int __RANDVAR__49060315192805422232__;
  int __RANDVAR__83559518199975377201__;
  int __RANDVAR__52272840884874619084__;
  int __RANDVAR__10324407645974611021__;
  int __RANDVAR__35800125096990708189__;
  int __RANDVAR__96293235492928540776__;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 322UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 332:
        sum += i;
        { _1_OBF_FUNC_next = 299UL; }
        break;
      case 555:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 771UL; }
        } else {
          { _1_OBF_FUNC_next = 946UL; }
        }
        break;
      case 35:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 481UL; }
        } else {
          { _1_OBF_FUNC_next = 959UL; }
        }
        break;
      case 84:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 526UL; }
        } else {
          { _1_OBF_FUNC_next = 206UL; }
        }
        break;
      case 493:
        sum += i;
        { _1_OBF_FUNC_next = 307UL; }
        break;
      case 957:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 912UL; }
        } else {
          { _1_OBF_FUNC_next = 755UL; }
        }
        break;
      case 460:
        i++;
        { _1_OBF_FUNC_next = 641UL; }
        break;
      case 215:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 130UL; }
        break;
      case 28:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 882UL; }
        } else {
          { _1_OBF_FUNC_next = 888UL; }
        }
        break;
      case 411:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 875UL; }
        } else {
          { _1_OBF_FUNC_next = 545UL; }
        }
        break;
      case 304:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 249UL; }
        } else {
          { _1_OBF_FUNC_next = 157UL; }
        }
        break;
      case 293:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 638UL; }
        } else {
          { _1_OBF_FUNC_next = 337UL; }
        }
        break;
      case 444:
        i++;
        { _1_OBF_FUNC_next = 467UL; }
        break;
      case 672:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 752UL; }
        } else {
          { _1_OBF_FUNC_next = 863UL; }
        }
        break;
      case 748:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 108UL; }
        } else {
          { _1_OBF_FUNC_next = 796UL; }
        }
        break;
      case 788:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 842UL; }
        } else {
          { _1_OBF_FUNC_next = 618UL; }
        }
        break;
      case 760:
        sum += i;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 427:
        i++;
        { _1_OBF_FUNC_next = 251UL; }
        break;
      case 564:
        i++;
        { _1_OBF_FUNC_next = 374UL; }
        break;
      case 378:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 46UL; }
        } else {
          { _1_OBF_FUNC_next = 447UL; }
        }
        break;
      case 439:
        __RANDVAR__10324407645974611021__ = 1;
        { _1_OBF_FUNC_next = 762UL; }
        break;
      case 375:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 830UL; }
        } else {
          { _1_OBF_FUNC_next = 578UL; }
        }
        break;
      case 675:
        i++;
        { _1_OBF_FUNC_next = 540UL; }
        break;
      case 22:
        sum += i;
        { _1_OBF_FUNC_next = 849UL; }
        break;
      case 671:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 851UL; }
        } else {
          { _1_OBF_FUNC_next = 292UL; }
        }
        break;
      case 241:
        i++;
        { _1_OBF_FUNC_next = 519UL; }
        break;
      case 150:
        i++;
        { _1_OBF_FUNC_next = 809UL; }
        break;
      case 196:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 589UL; }
        } else {
          { _1_OBF_FUNC_next = 475UL; }
        }
        break;
      case 810:
        i++;
        { _1_OBF_FUNC_next = 421UL; }
        break;
      case 269:
        i++;
        { _1_OBF_FUNC_next = 290UL; }
        break;
      case 515:
        sum += i;
        { _1_OBF_FUNC_next = 577UL; }
        break;
      case 878:
        sum += i;
        { _1_OBF_FUNC_next = 866UL; }
        break;
      case 355:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 435UL; }
        } else {
          { _1_OBF_FUNC_next = 356UL; }
        }
        break;
      case 252:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 275UL; }
        } else {
          { _1_OBF_FUNC_next = 795UL; }
        }
        break;
      case 79:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 232UL; }
        } else {
          { _1_OBF_FUNC_next = 945UL; }
        }
        break;
      case 756:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 491UL; }
        } else {
          { _1_OBF_FUNC_next = 220UL; }
        }
        break;
      case 783:
        i++;
        { _1_OBF_FUNC_next = 157UL; }
        break;
      case 449:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 326UL; }
        } else {
          { _1_OBF_FUNC_next = 825UL; }
        }
        break;
      case 624:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 897UL; }
        } else {
          { _1_OBF_FUNC_next = 131UL; }
        }
        break;
      case 679:
        sum += i;
        { _1_OBF_FUNC_next = 651UL; }
        break;
      case 137:
        i++;
        { _1_OBF_FUNC_next = 930UL; }
        break;
      case 59:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 335UL; }
        } else {
          { _1_OBF_FUNC_next = 468UL; }
        }
        break;
      case 64:
        i++;
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 876:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 838UL; }
        } else {
          { _1_OBF_FUNC_next = 880UL; }
        }
        break;
      case 918:
        i++;
        { _1_OBF_FUNC_next = 693UL; }
        break;
      case 691:
        sum += i;
        { _1_OBF_FUNC_next = 151UL; }
        break;
      case 583:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 571UL; }
        } else {
          { _1_OBF_FUNC_next = 111UL; }
        }
        break;
      case 100:;
        if (__RANDVAR__96293235492928540776__ == 0) {
          { _1_OBF_FUNC_next = 597UL; }
        } else {
          { _1_OBF_FUNC_next = 454UL; }
        }
        break;
      case 327:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 348UL; }
        } else {
          { _1_OBF_FUNC_next = 155UL; }
        }
        break;
      case 434:
        sum += i;
        { _1_OBF_FUNC_next = 856UL; }
        break;
      case 174:
        sum += i;
        { _1_OBF_FUNC_next = 655UL; }
        break;
      case 376:
        i++;
        { _1_OBF_FUNC_next = 558UL; }
        break;
      case 499:
        i++;
        { _1_OBF_FUNC_next = 664UL; }
        break;
      case 853:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 839UL; }
        } else {
          { _1_OBF_FUNC_next = 337UL; }
        }
        break;
      case 728:
        sum += i;
        { _1_OBF_FUNC_next = 166UL; }
        break;
      case 245:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 799UL; }
        } else {
          { _1_OBF_FUNC_next = 932UL; }
        }
        break;
      case 791:
        i++;
        { _1_OBF_FUNC_next = 88UL; }
        break;
      case 854:
        sum += i;
        { _1_OBF_FUNC_next = 654UL; }
        break;
      case 170:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 625UL; }
        } else {
          { _1_OBF_FUNC_next = 450UL; }
        }
        break;
      case 62:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 803UL; }
        } else {
          { _1_OBF_FUNC_next = 504UL; }
        }
        break;
      case 859:
        i++;
        { _1_OBF_FUNC_next = 603UL; }
        break;
      case 540:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 827UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 896:
        i++;
        { _1_OBF_FUNC_next = 880UL; }
        break;
      case 513:
        i++;
        { _1_OBF_FUNC_next = 164UL; }
        break;
      case 676:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 738UL; }
        } else {
          { _1_OBF_FUNC_next = 596UL; }
        }
        break;
      case 967:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 420UL; }
        break;
      case 329:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 399UL; }
        } else {
          { _1_OBF_FUNC_next = 540UL; }
        }
        break;
      case 368:
        sum += i;
        { _1_OBF_FUNC_next = 388UL; }
        break;
      case 253:
        __RANDVAR__52724944658658789189__ = 0;
        { _1_OBF_FUNC_next = 614UL; }
        break;
      case 153:
        __RANDVAR__21526537379964246864__ = 1;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 909:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 888UL; }
        break;
      case 725:
        sum += i;
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 498:
        sum += i;
        { _1_OBF_FUNC_next = 698UL; }
        break;
      case 166:
        i++;
        { _1_OBF_FUNC_next = 254UL; }
        break;
      case 557:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 835UL; }
        } else {
          { _1_OBF_FUNC_next = 373UL; }
        }
        break;
      case 362:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 531UL; }
        }
        break;
      case 240:
        i++;
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 445:
        sum += i;
        { _1_OBF_FUNC_next = 721UL; }
        break;
      case 322:
        sum = 0;
        { _1_OBF_FUNC_next = 765UL; }
        break;
      case 849:
        i++;
        { _1_OBF_FUNC_next = 667UL; }
        break;
      case 481:
        sum += i;
        { _1_OBF_FUNC_next = 703UL; }
        break;
      case 32:
        i++;
        { _1_OBF_FUNC_next = 287UL; }
        break;
      case 244:
        sum += i;
        { _1_OBF_FUNC_next = 83UL; }
        break;
      case 701:
        __RANDVAR__71623255271838404732__ = 0;
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 794:
        sum += i;
        { _1_OBF_FUNC_next = 371UL; }
        break;
      case 721:
        i++;
        { _1_OBF_FUNC_next = 148UL; }
        break;
      case 796:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 417UL; }
        } else {
          { _1_OBF_FUNC_next = 924UL; }
        }
        break;
      case 765:
        i = 0;
        { _1_OBF_FUNC_next = 29UL; }
        break;
      case 397:
        sum += i;
        { _1_OBF_FUNC_next = 303UL; }
        break;
      case 661:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 196UL; }
        } else {
          { _1_OBF_FUNC_next = 170UL; }
        }
        break;
      case 259:
        sum += i;
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 902:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 138UL; }
        } else {
          { _1_OBF_FUNC_next = 512UL; }
        }
        break;
      case 382:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 315UL; }
        } else {
          { _1_OBF_FUNC_next = 516UL; }
        }
        break;
      case 683:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 933UL; }
        } else {
          { _1_OBF_FUNC_next = 293UL; }
        }
        break;
      case 86:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 590UL; }
        } else {
          { _1_OBF_FUNC_next = 750UL; }
        }
        break;
      case 154:
        i++;
        { _1_OBF_FUNC_next = 144UL; }
        break;
      case 600:
        i++;
        { _1_OBF_FUNC_next = 93UL; }
        break;
      case 920:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 90UL; }
        } else {
          { _1_OBF_FUNC_next = 37UL; }
        }
        break;
      case 568:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 98UL; }
        } else {
          { _1_OBF_FUNC_next = 153UL; }
        }
        break;
      case 504:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 854UL; }
        } else {
          { _1_OBF_FUNC_next = 237UL; }
        }
        break;
      case 458:
        i++;
        { _1_OBF_FUNC_next = 266UL; }
        break;
      case 758:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 629UL; }
        } else {
          { _1_OBF_FUNC_next = 876UL; }
        }
        break;
      case 323:
        i++;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 442:
        sum += i;
        { _1_OBF_FUNC_next = 773UL; }
        break;
      case 234:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 457UL; }
        } else {
          { _1_OBF_FUNC_next = 568UL; }
        }
        break;
      case 321:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 343UL; }
        } else {
          { _1_OBF_FUNC_next = 942UL; }
        }
        break;
      case 946:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 914UL; }
        } else {
          { _1_OBF_FUNC_next = 749UL; }
        }
        break;
      case 263:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 631UL; }
        } else {
          { _1_OBF_FUNC_next = 699UL; }
        }
        break;
      case 66:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 418UL; }
        } else {
          { _1_OBF_FUNC_next = 895UL; }
        }
        break;
      case 582:
        sum += i;
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 927:
        sum += i;
        { _1_OBF_FUNC_next = 527UL; }
        break;
      case 72:
        i++;
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 806:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 522UL; }
        } else {
          { _1_OBF_FUNC_next = 463UL; }
        }
        break;
      case 521:
        i++;
        { _1_OBF_FUNC_next = 699UL; }
        break;
      case 897:
        sum += i;
        { _1_OBF_FUNC_next = 406UL; }
        break;
      case 319:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 928UL; }
        } else {
          { _1_OBF_FUNC_next = 657UL; }
        }
        break;
      case 141:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 143UL; }
        } else {
          { _1_OBF_FUNC_next = 11UL; }
        }
        break;
      case 63:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 861UL; }
        } else {
          { _1_OBF_FUNC_next = 396UL; }
        }
        break;
      case 561:
        sum += i;
        { _1_OBF_FUNC_next = 896UL; }
        break;
      case 787:
        i++;
        { _1_OBF_FUNC_next = 512UL; }
        break;
      case 813:
        i++;
        { _1_OBF_FUNC_next = 425UL; }
        break;
      case 895:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 294UL; }
        } else {
          { _1_OBF_FUNC_next = 236UL; }
        }
        break;
      case 446:
        sum += i;
        { _1_OBF_FUNC_next = 626UL; }
        break;
      case 390:
        sum += i;
        { _1_OBF_FUNC_next = 562UL; }
        break;
      case 124:
        sum += i;
        { _1_OBF_FUNC_next = 200UL; }
        break;
      case 666:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 570UL; }
        } else {
          { _1_OBF_FUNC_next = 779UL; }
        }
        break;
      case 924:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 580UL; }
        } else {
          { _1_OBF_FUNC_next = 453UL; }
        }
        break;
      case 37:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 265UL; }
        } else {
          { _1_OBF_FUNC_next = 80UL; }
        }
        break;
      case 696:
        i++;
        { _1_OBF_FUNC_next = 267UL; }
        break;
      case 92:
        i++;
        { _1_OBF_FUNC_next = 716UL; }
        break;
      case 769:
        i++;
        { _1_OBF_FUNC_next = 687UL; }
        break;
      case 916:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 369UL; }
        } else {
          { _1_OBF_FUNC_next = 254UL; }
        }
        break;
      case 588:
        i++;
        { _1_OBF_FUNC_next = 304UL; }
        break;
      case 934:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 473UL; }
        } else {
          { _1_OBF_FUNC_next = 302UL; }
        }
        break;
      case 149:
        __RANDVAR__52724944658658789189__ = 1;
        { _1_OBF_FUNC_next = 614UL; }
        break;
      case 115:
        i++;
        { _1_OBF_FUNC_next = 428UL; }
        break;
      case 708:
        i++;
        { _1_OBF_FUNC_next = 840UL; }
        break;
      case 405:
        sum += i;
        { _1_OBF_FUNC_next = 764UL; }
        break;
      case 532:
        sum += i;
        { _1_OBF_FUNC_next = 511UL; }
        break;
      case 126:;
        if (__RANDVAR__71623255271838404732__ == 0) {
          { _1_OBF_FUNC_next = 873UL; }
        } else {
          { _1_OBF_FUNC_next = 486UL; }
        }
        break;
      case 251:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 936UL; }
        } else {
          { _1_OBF_FUNC_next = 501UL; }
        }
        break;
      case 56:
        sum += i;
        { _1_OBF_FUNC_next = 260UL; }
        break;
      case 937:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 136UL; }
        } else {
          { _1_OBF_FUNC_next = 490UL; }
        }
        break;
      case 65:
        sum += i;
        { _1_OBF_FUNC_next = 708UL; }
        break;
      case 122:
        i++;
        { _1_OBF_FUNC_next = 942UL; }
        break;
      case 780:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 660UL; }
        } else {
          { _1_OBF_FUNC_next = 634UL; }
        }
        break;
      case 951:
        i++;
        { _1_OBF_FUNC_next = 432UL; }
        break;
      case 885:
        i++;
        { _1_OBF_FUNC_next = 748UL; }
        break;
      case 906:
        i++;
        { _1_OBF_FUNC_next = 852UL; }
        break;
      case 545:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 387UL; }
        } else {
          { _1_OBF_FUNC_next = 421UL; }
        }
        break;
      case 538:
        sum += i;
        { _1_OBF_FUNC_next = 885UL; }
        break;
      case 954:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 568UL; }
        break;
      case 119:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 361UL; }
        } else {
          { _1_OBF_FUNC_next = 749UL; }
        }
        break;
      case 764:
        i++;
        { _1_OBF_FUNC_next = 121UL; }
        break;
      case 847:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 48UL; }
        } else {
          { _1_OBF_FUNC_next = 659UL; }
        }
        break;
      case 191:
        i++;
        { _1_OBF_FUNC_next = 155UL; }
        break;
      case 318:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 30UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 360:
        i++;
        { _1_OBF_FUNC_next = 490UL; }
        break;
      case 611:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 77UL; }
        } else {
          { _1_OBF_FUNC_next = 523UL; }
        }
        break;
      case 179:
        sum += i;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 431:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 743UL; }
        } else {
          { _1_OBF_FUNC_next = 681UL; }
        }
        break;
      case 736:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 210UL; }
        } else {
          { _1_OBF_FUNC_next = 756UL; }
        }
        break;
      case 875:
        sum += i;
        { _1_OBF_FUNC_next = 917UL; }
        break;
      case 531:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 931UL; }
        } else {
          { _1_OBF_FUNC_next = 585UL; }
        }
        break;
      case 812:
        i++;
        { _1_OBF_FUNC_next = 248UL; }
        break;
      case 347:
        i++;
        { _1_OBF_FUNC_next = 95UL; }
        break;
      case 630:
        sum += i;
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 3:
        sum += i;
        { _1_OBF_FUNC_next = 137UL; }
        break;
      case 228:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 515UL; }
        } else {
          { _1_OBF_FUNC_next = 206UL; }
        }
        break;
      case 617:
        i++;
        { _1_OBF_FUNC_next = 170UL; }
        break;
      case 370:
        sum += i;
        { _1_OBF_FUNC_next = 520UL; }
        break;
      case 497:
        sum += i;
        { _1_OBF_FUNC_next = 154UL; }
        break;
      case 283:
        i++;
        { _1_OBF_FUNC_next = 700UL; }
        break;
      case 300:
        i++;
        { _1_OBF_FUNC_next = 310UL; }
        break;
      case 604:
        i++;
        { _1_OBF_FUNC_next = 847UL; }
        break;
      case 719:
        sum += i;
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 193:
        sum += i;
        { _1_OBF_FUNC_next = 669UL; }
        break;
      case 749:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 920UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 625:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 841UL; }
        } else {
          { _1_OBF_FUNC_next = 63UL; }
        }
        break;
      case 130:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 277UL; }
        } else {
          { _1_OBF_FUNC_next = 28UL; }
        }
        break;
      case 282:
        sum += i;
        { _1_OBF_FUNC_next = 241UL; }
        break;
      case 173:;
        if (__RANDVAR__37801990454094724671__ == 0) {
          { _1_OBF_FUNC_next = 676UL; }
        } else {
          { _1_OBF_FUNC_next = 314UL; }
        }
        break;
      case 129:
        i++;
        { _1_OBF_FUNC_next = 853UL; }
        break;
      case 365:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 642UL; }
        } else {
          { _1_OBF_FUNC_next = 93UL; }
        }
        break;
      case 822:
        i++;
        { _1_OBF_FUNC_next = 884UL; }
        break;
      case 200:
        i++;
        { _1_OBF_FUNC_next = 253UL; }
        break;
      case 714:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 586UL; }
        } else {
          { _1_OBF_FUNC_next = 291UL; }
        }
        break;
      case 348:
        sum += i;
        { _1_OBF_FUNC_next = 191UL; }
        break;
      case 636:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 69UL; }
        } else {
          { _1_OBF_FUNC_next = 411UL; }
        }
        break;
      case 724:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 222UL; }
        } else {
          { _1_OBF_FUNC_next = 379UL; }
        }
        break;
      case 560:
        i++;
        { _1_OBF_FUNC_next = 320UL; }
        break;
      case 898:
        sum += i;
        { _1_OBF_FUNC_next = 816UL; }
        break;
      case 403:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 725UL; }
        } else {
          { _1_OBF_FUNC_next = 413UL; }
        }
        break;
      case 938:
        i++;
        { _1_OBF_FUNC_next = 247UL; }
        break;
      case 117:
        sum += i;
        { _1_OBF_FUNC_next = 560UL; }
        break;
      case 155:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 423UL; }
        } else {
          { _1_OBF_FUNC_next = 712UL; }
        }
        break;
      case 899:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 172UL; }
        } else {
          { _1_OBF_FUNC_next = 746UL; }
        }
        break;
      case 161:
        i++;
        { _1_OBF_FUNC_next = 195UL; }
        break;
      case 307:
        i++;
        { _1_OBF_FUNC_next = 592UL; }
        break;
      case 217:
        i++;
        { _1_OBF_FUNC_next = 735UL; }
        break;
      case 61:
        sum += i;
        { _1_OBF_FUNC_next = 643UL; }
        break;
      case 436:
        i++;
        { _1_OBF_FUNC_next = 228UL; }
        break;
      case 142:
        i++;
        { _1_OBF_FUNC_next = 516UL; }
        break;
      case 480:
        i++;
        { _1_OBF_FUNC_next = 749UL; }
        break;
      case 494:
        sum += i;
        { _1_OBF_FUNC_next = 948UL; }
        break;
      case 419:
        sum += i;
        { _1_OBF_FUNC_next = 828UL; }
        break;
      case 432:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 231UL; }
        } else {
          { _1_OBF_FUNC_next = 467UL; }
        }
        break;
      case 404:
        i++;
        { _1_OBF_FUNC_next = 908UL; }
        break;
      case 249:
        sum += i;
        { _1_OBF_FUNC_next = 783UL; }
        break;
      case 425:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 843UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 688:
        sum += i;
        { _1_OBF_FUNC_next = 901UL; }
        break;
      case 556:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 960UL; }
        } else {
          { _1_OBF_FUNC_next = 455UL; }
        }
        break;
      case 299:
        i++;
        { _1_OBF_FUNC_next = 349UL; }
        break;
      case 911:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 68UL; }
        } else {
          { _1_OBF_FUNC_next = 603UL; }
        }
        break;
      case 731:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 296UL; }
        } else {
          { _1_OBF_FUNC_next = 357UL; }
        }
        break;
      case 692:
        sum += i;
        { _1_OBF_FUNC_next = 593UL; }
        break;
      case 325:
        sum += i;
        { _1_OBF_FUNC_next = 115UL; }
        break;
      case 591:;
        if (__RANDVAR__83559518199975377201__ == 0) {
          { _1_OBF_FUNC_next = 330UL; }
        } else {
          { _1_OBF_FUNC_next = 711UL; }
        }
        break;
      case 97:
        sum += i;
        { _1_OBF_FUNC_next = 233UL; }
        break;
      case 846:
        sum += i;
        { _1_OBF_FUNC_next = 507UL; }
        break;
      case 231:
        sum += i;
        { _1_OBF_FUNC_next = 444UL; }
        break;
      case 8:
        i++;
        { _1_OBF_FUNC_next = 683UL; }
        break;
      case 932:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 728UL; }
        } else {
          { _1_OBF_FUNC_next = 254UL; }
        }
        break;
      case 247:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 552UL; }
        } else {
          { _1_OBF_FUNC_next = 474UL; }
        }
        break;
      case 0:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 332UL; }
        } else {
          { _1_OBF_FUNC_next = 349UL; }
        }
        break;
      case 732:
        sum += i;
        { _1_OBF_FUNC_next = 918UL; }
        break;
      case 507:
        i++;
        { _1_OBF_FUNC_next = 255UL; }
        break;
      case 359:
        i++;
        { _1_OBF_FUNC_next = 357UL; }
        break;
      case 527:
        i++;
        { _1_OBF_FUNC_next = 832UL; }
        break;
      case 143:
        sum += i;
        { _1_OBF_FUNC_next = 465UL; }
        break;
      case 590:
        sum += i;
        { _1_OBF_FUNC_next = 162UL; }
        break;
      case 260:
        i++;
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 525:
        sum += i;
        { _1_OBF_FUNC_next = 704UL; }
        break;
      case 528:
        i++;
        { _1_OBF_FUNC_next = 937UL; }
        break;
      case 192:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 282UL; }
        } else {
          { _1_OBF_FUNC_next = 519UL; }
        }
        break;
      case 935:
        __RANDVAR__49060315192805422232__ = 0;
        { _1_OBF_FUNC_next = 958UL; }
        break;
      case 345:
        i++;
        { _1_OBF_FUNC_next = 863UL; }
        break;
      case 917:
        i++;
        { _1_OBF_FUNC_next = 545UL; }
        break;
      case 653:
        i++;
        { _1_OBF_FUNC_next = 428UL; }
        break;
      case 451:
        sum += i;
        { _1_OBF_FUNC_next = 548UL; }
        break;
      case 607:;
        if (__RANDVAR__2556335932723160743__ == 0) {
          { _1_OBF_FUNC_next = 127UL; }
        } else {
          { _1_OBF_FUNC_next = 125UL; }
        }
        break;
      case 224:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 565UL; }
        } else {
          { _1_OBF_FUNC_next = 908UL; }
        }
        break;
      case 324:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 886UL; }
        } else {
          { _1_OBF_FUNC_next = 887UL; }
        }
        break;
      case 205:
        sum += i;
        { _1_OBF_FUNC_next = 250UL; }
        break;
      case 473:
        sum += i;
        { _1_OBF_FUNC_next = 944UL; }
        break;
      case 803:
        sum += i;
        { _1_OBF_FUNC_next = 372UL; }
        break;
      case 565:
        sum += i;
        { _1_OBF_FUNC_next = 404UL; }
        break;
      case 553:
        i++;
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 643:
        i++;
        { _1_OBF_FUNC_next = 628UL; }
        break;
      case 91:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 610UL; }
        } else {
          { _1_OBF_FUNC_next = 237UL; }
        }
        break;
      case 29:
        __RANDVAR__47888733787485224865__ = 0;
        { _1_OBF_FUNC_next = 922UL; }
        break;
      case 337:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 619UL; }
        } else {
          { _1_OBF_FUNC_next = 572UL; }
        }
        break;
      case 41:
        i++;
        { _1_OBF_FUNC_next = 80UL; }
        break;
      case 268:
        i++;
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 158:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 855UL; }
        } else {
          { _1_OBF_FUNC_next = 964UL; }
        }
        break;
      case 139:
        sum += i;
        { _1_OBF_FUNC_next = 472UL; }
        break;
      case 98:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 902UL; }
        } else {
          { _1_OBF_FUNC_next = 952UL; }
        }
        break;
      case 686:
        i++;
        { _1_OBF_FUNC_next = 904UL; }
        break;
      case 377:
        sum += i;
        { _1_OBF_FUNC_next = 696UL; }
        break;
      case 572:
        __RANDVAR__83559518199975377201__ = 1;
        { _1_OBF_FUNC_next = 591UL; }
        break;
      case 48:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 695UL; }
        } else {
          { _1_OBF_FUNC_next = 483UL; }
        }
        break;
      case 776:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 272UL; }
        }
        break;
      case 702:
        i++;
        { _1_OBF_FUNC_next = 672UL; }
        break;
      case 703:
        i++;
        { _1_OBF_FUNC_next = 959UL; }
        break;
      case 184:
        sum += i;
        { _1_OBF_FUNC_next = 913UL; }
        break;
      case 596:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 731UL; }
        } else {
          { _1_OBF_FUNC_next = 362UL; }
        }
        break;
      case 146:
        sum += i;
        { _1_OBF_FUNC_next = 821UL; }
        break;
      case 842:
        sum += i;
        { _1_OBF_FUNC_next = 823UL; }
        break;
      case 428:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 893UL; }
        } else {
          { _1_OBF_FUNC_next = 52UL; }
        }
        break;
      case 502:
        i++;
        { _1_OBF_FUNC_next = 956UL; }
        break;
      case 218:
        i++;
        { _1_OBF_FUNC_next = 555UL; }
        break;
      case 82:
        __RANDVAR__35800125096990708189__ = 1;
        { _1_OBF_FUNC_next = 456UL; }
        break;
      case 151:
        i++;
        { _1_OBF_FUNC_next = 407UL; }
        break;
      case 753:
        sum += i;
        { _1_OBF_FUNC_next = 518UL; }
        break;
      case 955:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 820UL; }
        } else {
          { _1_OBF_FUNC_next = 550UL; }
        }
        break;
      case 49:
        i++;
        { _1_OBF_FUNC_next = 611UL; }
        break;
      case 541:
        i++;
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 71:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 107UL; }
        } else {
          { _1_OBF_FUNC_next = 373UL; }
        }
        break;
      case 457:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 784UL; }
        } else {
          { _1_OBF_FUNC_next = 943UL; }
        }
        break;
      case 74:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 178UL; }
        } else {
          { _1_OBF_FUNC_next = 88UL; }
        }
        break;
      case 968:
        sum += i;
        { _1_OBF_FUNC_next = 819UL; }
        break;
      case 530:
        i++;
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 467:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 34UL; }
        } else {
          { _1_OBF_FUNC_next = 337UL; }
        }
        break;
      case 352:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 141UL; }
        } else {
          { _1_OBF_FUNC_next = 888UL; }
        }
        break;
      case 227:
        sum += i;
        { _1_OBF_FUNC_next = 301UL; }
        break;
      case 168:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 754UL; }
        } else {
          { _1_OBF_FUNC_next = 666UL; }
        }
        break;
      case 113:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 780UL; }
        } else {
          { _1_OBF_FUNC_next = 755UL; }
        }
        break;
      case 511:
        i++;
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 536:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 549UL; }
        } else {
          { _1_OBF_FUNC_next = 95UL; }
        }
        break;
      case 734:
        sum += i;
        { _1_OBF_FUNC_next = 44UL; }
        break;
      case 851:
        sum += i;
        { _1_OBF_FUNC_next = 508UL; }
        break;
      case 850:
        sum += i;
        { _1_OBF_FUNC_next = 288UL; }
        break;
      case 236:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 689UL; }
        } else {
          { _1_OBF_FUNC_next = 82UL; }
        }
        break;
      case 592:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 462UL; }
        } else {
          { _1_OBF_FUNC_next = 853UL; }
        }
        break;
      case 435:
        sum += i;
        { _1_OBF_FUNC_next = 104UL; }
        break;
      case 372:
        i++;
        { _1_OBF_FUNC_next = 504UL; }
        break;
      case 328:
        i++;
        { _1_OBF_FUNC_next = 273UL; }
        break;
      case 960:
        sum += i;
        { _1_OBF_FUNC_next = 238UL; }
        break;
      case 573:
        i++;
        { _1_OBF_FUNC_next = 546UL; }
        break;
      case 343:
        sum += i;
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 54:
        sum += i;
        { _1_OBF_FUNC_next = 364UL; }
        break;
      case 929:
        sum += i;
        { _1_OBF_FUNC_next = 879UL; }
        break;
      case 506:
        i = 0;
        { _1_OBF_FUNC_next = 311UL; }
        break;
      case 966:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 451UL; }
        } else {
          { _1_OBF_FUNC_next = 606UL; }
        }
        break;
      case 710:
        sum += i;
        { _1_OBF_FUNC_next = 645UL; }
        break;
      case 178:
        sum += i;
        { _1_OBF_FUNC_next = 791UL; }
        break;
      case 465:
        i++;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 623:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 285UL; }
        } else {
          { _1_OBF_FUNC_next = 430UL; }
        }
        break;
      case 448:
        i++;
        { _1_OBF_FUNC_next = 134UL; }
        break;
      case 410:
        i++;
        { _1_OBF_FUNC_next = 223UL; }
        break;
      case 429:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 870UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 182:
        sum += i;
        { _1_OBF_FUNC_next = 812UL; }
        break;
      case 939:
        sum += i;
        { _1_OBF_FUNC_next = 424UL; }
        break;
      case 548:
        i++;
        { _1_OBF_FUNC_next = 606UL; }
        break;
      case 222:
        sum += i;
        { _1_OBF_FUNC_next = 551UL; }
        break;
      case 837:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 346UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 371:
        i++;
        { _1_OBF_FUNC_next = 759UL; }
        break;
      case 414:
        i++;
        { _1_OBF_FUNC_next = 475UL; }
        break;
      case 156:
        sum += i;
        { _1_OBF_FUNC_next = 479UL; }
        break;
      case 677:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 75UL; }
        } else {
          { _1_OBF_FUNC_next = 847UL; }
        }
        break;
      case 33:;
        if (__RANDVAR__49236625998652963583__ == 0) {
          { _1_OBF_FUNC_next = 461UL; }
        } else {
          { _1_OBF_FUNC_next = 25UL; }
        }
        break;
      case 90:
        sum += i;
        { _1_OBF_FUNC_next = 530UL; }
        break;
      case 712:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 334UL; }
        } else {
          { _1_OBF_FUNC_next = 103UL; }
        }
        break;
      case 599:
        i++;
        { _1_OBF_FUNC_next = 318UL; }
        break;
      case 42:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 678UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 577:
        i++;
        { _1_OBF_FUNC_next = 206UL; }
        break;
      case 585:
        __RANDVAR__37801990454094724671__ = 1;
        { _1_OBF_FUNC_next = 173UL; }
        break;
      case 726:
        i++;
        { _1_OBF_FUNC_next = 537UL; }
        break;
      case 681:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 309UL; }
        } else {
          { _1_OBF_FUNC_next = 149UL; }
        }
        break;
      case 290:
        __RANDVAR__49236625998652963583__ = 0;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 239:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 927UL; }
        } else {
          { _1_OBF_FUNC_next = 832UL; }
        }
        break;
      case 877:
        i++;
        { _1_OBF_FUNC_next = 681UL; }
        break;
      case 571:
        sum += i;
        { _1_OBF_FUNC_next = 38UL; }
        break;
      case 790:
        sum += i;
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 777:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 259UL; }
        } else {
          { _1_OBF_FUNC_next = 681UL; }
        }
        break;
      case 735:
        __RANDVAR__52272840884874619084__ = 0;
        { _1_OBF_FUNC_next = 566UL; }
        break;
      case 135:
        __RANDVAR__68805441388094528133__ = 1;
        { _1_OBF_FUNC_next = 226UL; }
        break;
      case 152:
        i++;
        { _1_OBF_FUNC_next = 66UL; }
        break;
      case 472:
        i++;
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 793:
        i++;
        { _1_OBF_FUNC_next = 362UL; }
        break;
      case 969:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 807UL; }
        } else {
          { _1_OBF_FUNC_next = 431UL; }
        }
        break;
      case 863:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 401UL; }
        } else {
          { _1_OBF_FUNC_next = 164UL; }
        }
        break;
      case 254:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 955UL; }
        } else {
          { _1_OBF_FUNC_next = 652UL; }
        }
        break;
      case 363:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 199UL; }
        } else {
          { _1_OBF_FUNC_next = 777UL; }
        }
        break;
      case 684:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 374UL; }
        }
        break;
      case 132:
        i++;
        { _1_OBF_FUNC_next = 945UL; }
        break;
      case 637:
        sum += i;
        { _1_OBF_FUNC_next = 163UL; }
        break;
      case 261:
        i++;
        { _1_OBF_FUNC_next = 957UL; }
        break;
      case 409:
        sum += i;
        { _1_OBF_FUNC_next = 87UL; }
        break;
      case 456:;
        if (__RANDVAR__35800125096990708189__ == 0) {
          { _1_OBF_FUNC_next = 616UL; }
        } else {
          { _1_OBF_FUNC_next = 496UL; }
        }
        break;
      case 26:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 36UL; }
        } else {
          { _1_OBF_FUNC_next = 380UL; }
        }
        break;
      case 619:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 889UL; }
        } else {
          { _1_OBF_FUNC_next = 683UL; }
        }
        break;
      case 717:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 874UL; }
        } else {
          { _1_OBF_FUNC_next = 956UL; }
        }
        break;
      case 828:
        i++;
        { _1_OBF_FUNC_next = 313UL; }
        break;
      case 212:
        sum += i;
        { _1_OBF_FUNC_next = 466UL; }
        break;
      case 172:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 647UL; }
        }
        break;
      case 36:
        sum += i;
        { _1_OBF_FUNC_next = 953UL; }
        break;
      case 298:
        sum += i;
        { _1_OBF_FUNC_next = 860UL; }
        break;
      case 889:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 691UL; }
        } else {
          { _1_OBF_FUNC_next = 407UL; }
        }
        break;
      case 741:
        sum += i;
        { _1_OBF_FUNC_next = 116UL; }
        break;
      case 190:
        sum += i;
        { _1_OBF_FUNC_next = 437UL; }
        break;
      case 950:
        i++;
        { _1_OBF_FUNC_next = 795UL; }
        break;
      case 406:
        i++;
        { _1_OBF_FUNC_next = 131UL; }
        break;
      case 713:
        i++;
        { _1_OBF_FUNC_next = 924UL; }
        break;
      case 131:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 543UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 640:
        sum += i;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 956:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 146UL; }
        } else {
          { _1_OBF_FUNC_next = 602UL; }
        }
        break;
      case 27:
        __RANDVAR__71623255271838404732__ = 1;
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 784:
        sum += i;
        { _1_OBF_FUNC_next = 709UL; }
        break;
      case 841:
        sum += i;
        { _1_OBF_FUNC_next = 857UL; }
        break;
      case 745:
        sum += i;
        { _1_OBF_FUNC_next = 781UL; }
        break;
      case 265:
        sum += i;
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 484:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 962UL; }
        } else {
          { _1_OBF_FUNC_next = 716UL; }
        }
        break;
      case 60:
        sum += i;
        { _1_OBF_FUNC_next = 541UL; }
        break;
      case 358:
        i++;
        { _1_OBF_FUNC_next = 523UL; }
        break;
      case 512:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 774UL; }
        } else {
          { _1_OBF_FUNC_next = 831UL; }
        }
        break;
      case 335:
        sum += i;
        { _1_OBF_FUNC_next = 770UL; }
        break;
      case 373:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 110UL; }
        } else {
          { _1_OBF_FUNC_next = 367UL; }
        }
        break;
      case 597:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 270UL; }
        } else {
          { _1_OBF_FUNC_next = 501UL; }
        }
        break;
      case 839:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 488UL; }
        } else {
          { _1_OBF_FUNC_next = 852UL; }
        }
        break;
      case 945:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 760UL; }
        } else {
          { _1_OBF_FUNC_next = 531UL; }
        }
        break;
      case 961:
        i++;
        { _1_OBF_FUNC_next = 447UL; }
        break;
      case 89:
        sum += i;
        { _1_OBF_FUNC_next = 218UL; }
        break;
      case 818:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 869UL; }
        } else {
          { _1_OBF_FUNC_next = 824UL; }
        }
        break;
      case 317:
        i++;
        { _1_OBF_FUNC_next = 634UL; }
        break;
      case 116:
        i++;
        { _1_OBF_FUNC_next = 433UL; }
        break;
      case 25:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 952UL; }
        break;
      case 2:
        sum += i;
        { _1_OBF_FUNC_next = 808UL; }
        break;
      case 133:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 926UL; }
        } else {
          { _1_OBF_FUNC_next = 766UL; }
        }
        break;
      case 601:
        i++;
        { _1_OBF_FUNC_next = 278UL; }
        break;
      case 543:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 434UL; }
        } else {
          { _1_OBF_FUNC_next = 263UL; }
        }
        break;
      case 331:
        i++;
        { _1_OBF_FUNC_next = 291UL; }
        break;
      case 420:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 327UL; }
        } else {
          { _1_OBF_FUNC_next = 234UL; }
        }
        break;
      case 286:
        i++;
        { _1_OBF_FUNC_next = 319UL; }
        break;
      case 243:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 445UL; }
        } else {
          { _1_OBF_FUNC_next = 148UL; }
        }
        break;
      case 893:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 894UL; }
        } else {
          { _1_OBF_FUNC_next = 474UL; }
        }
        break;
      case 297:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 538UL; }
        } else {
          { _1_OBF_FUNC_next = 748UL; }
        }
        break;
      case 659:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 714UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 654:
        i++;
        { _1_OBF_FUNC_next = 237UL; }
        break;
      case 771:
        sum += i;
        { _1_OBF_FUNC_next = 665UL; }
        break;
      case 814:
        i++;
        { _1_OBF_FUNC_next = 964UL; }
        break;
      case 949:
        i++;
        { _1_OBF_FUNC_next = 384UL; }
        break;
      case 751:
        sum += i;
        { _1_OBF_FUNC_next = 601UL; }
        break;
      case 5:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 7UL; }
        } else {
          { _1_OBF_FUNC_next = 337UL; }
        }
        break;
      case 970:
        sum += i;
        { _1_OBF_FUNC_next = 336UL; }
        break;
      case 468:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 532UL; }
        } else {
          { _1_OBF_FUNC_next = 76UL; }
        }
        break;
      case 488:
        sum += i;
        { _1_OBF_FUNC_next = 906UL; }
        break;
      case 111:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 890UL; }
        } else {
          { _1_OBF_FUNC_next = 964UL; }
        }
        break;
      case 858:
        i++;
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 306:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 751UL; }
        } else {
          { _1_OBF_FUNC_next = 278UL; }
        }
        break;
      case 879:
        i++;
        { _1_OBF_FUNC_next = 883UL; }
        break;
      case 738:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 579UL; }
        } else {
          { _1_OBF_FUNC_next = 546UL; }
        }
        break;
      case 256:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 609UL; }
        } else {
          { _1_OBF_FUNC_next = 85UL; }
        }
        break;
      case 175:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 167UL; }
        } else {
          { _1_OBF_FUNC_next = 899UL; }
        }
        break;
      case 302:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 489UL; }
        } else {
          { _1_OBF_FUNC_next = 723UL; }
        }
        break;
      case 108:
        sum += i;
        { _1_OBF_FUNC_next = 915UL; }
        break;
      case 880:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 71UL; }
        } else {
          { _1_OBF_FUNC_next = 135UL; }
        }
        break;
      case 559:
        i++;
        { _1_OBF_FUNC_next = 661UL; }
        break;
      case 266:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 864UL; }
        } else {
          { _1_OBF_FUNC_next = 66UL; }
        }
        break;
      case 381:
        sum += i;
        { _1_OBF_FUNC_next = 458UL; }
        break;
      case 763:
        i++;
        { _1_OBF_FUNC_next = 899UL; }
        break;
      case 69:
        sum += i;
        { _1_OBF_FUNC_next = 392UL; }
        break;
      case 610:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 409UL; }
        } else {
          { _1_OBF_FUNC_next = 62UL; }
        }
        break;
      case 706:
        i++;
        { _1_OBF_FUNC_next = 848UL; }
        break;
      case 273:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 212UL; }
        } else {
          { _1_OBF_FUNC_next = 818UL; }
        }
        break;
      case 819:
        i++;
        { _1_OBF_FUNC_next = 574UL; }
        break;
      case 723:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 905UL; }
        } else {
          { _1_OBF_FUNC_next = 450UL; }
        }
        break;
      case 606:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 525UL; }
        } else {
          { _1_OBF_FUNC_next = 329UL; }
        }
        break;
      case 904:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 929UL; }
        } else {
          { _1_OBF_FUNC_next = 883UL; }
        }
        break;
      case 7:
        sum += i;
        { _1_OBF_FUNC_next = 120UL; }
        break;
      case 160:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 789UL; }
        } else {
          { _1_OBF_FUNC_next = 735UL; }
        }
        break;
      case 258:
        i++;
        { _1_OBF_FUNC_next = 175UL; }
        break;
      case 718:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 198UL; }
        break;
      case 729:
        i++;
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 380:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 767UL; }
        } else {
          { _1_OBF_FUNC_next = 341UL; }
        }
        break;
      case 454:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 888UL; }
        break;
      case 114:
        sum += i;
        { _1_OBF_FUNC_next = 460UL; }
        break;
      case 838:
        sum += i;
        { _1_OBF_FUNC_next = 395UL; }
        break;
      case 550:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 446UL; }
        } else {
          { _1_OBF_FUNC_next = 648UL; }
        }
        break;
      case 894:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 745UL; }
        } else {
          { _1_OBF_FUNC_next = 482UL; }
        }
        break;
      case 871:
        sum += i;
        { _1_OBF_FUNC_next = 342UL; }
        break;
      case 447:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 719UL; }
        } else {
          { _1_OBF_FUNC_next = 595UL; }
        }
        break;
      case 658:
        sum += i;
        { _1_OBF_FUNC_next = 283UL; }
        break;
      case 816:
        i++;
        { _1_OBF_FUNC_next = 252UL; }
        break;
      case 204:
        sum += i;
        { _1_OBF_FUNC_next = 726UL; }
        break;
      case 799:
        sum += i;
        { _1_OBF_FUNC_next = 264UL; }
        break;
      case 489:
        sum += i;
        { _1_OBF_FUNC_next = 305UL; }
        break;
      case 136:
        sum += i;
        { _1_OBF_FUNC_next = 360UL; }
        break;
      case 186:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 397UL; }
        } else {
          { _1_OBF_FUNC_next = 797UL; }
        }
        break;
      case 811:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 225UL; }
        } else {
          { _1_OBF_FUNC_next = 74UL; }
        }
        break;
      case 140:
        sum += i;
        { _1_OBF_FUNC_next = 517UL; }
        break;
      case 416:
        i++;
        { _1_OBF_FUNC_next = 624UL; }
        break;
      case 176:
        i++;
        { _1_OBF_FUNC_next = 712UL; }
        break;
      case 720:
        sum += i;
        { _1_OBF_FUNC_next = 782UL; }
        break;
      case 159:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 279UL; }
        } else {
          { _1_OBF_FUNC_next = 24UL; }
        }
        break;
      case 9:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 497UL; }
        } else {
          { _1_OBF_FUNC_next = 144UL; }
        }
        break;
      case 821:
        i++;
        { _1_OBF_FUNC_next = 602UL; }
        break;
      case 364:
        i++;
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 95:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 798UL; }
        } else {
          { _1_OBF_FUNC_next = 884UL; }
        }
        break;
      case 344:
        sum += i;
        { _1_OBF_FUNC_next = 963UL; }
        break;
      case 194:
        sum += i;
        { _1_OBF_FUNC_next = 410UL; }
        break;
      case 943:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 139UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 459:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 168UL; }
        } else {
          { _1_OBF_FUNC_next = 661UL; }
        }
        break;
      case 768:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 97UL; }
        } else {
          { _1_OBF_FUNC_next = 969UL; }
        }
        break;
      case 539:
        sum += i;
        { _1_OBF_FUNC_next = 599UL; }
        break;
      case 292:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 925UL; }
        } else {
          { _1_OBF_FUNC_next = 848UL; }
        }
        break;
      case 423:
        sum += i;
        { _1_OBF_FUNC_next = 176UL; }
        break;
      case 19:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 801UL; }
        } else {
          { _1_OBF_FUNC_next = 701UL; }
        }
        break;
      case 351:
        sum += i;
        { _1_OBF_FUNC_next = 763UL; }
        break;
      case 232:
        sum += i;
        { _1_OBF_FUNC_next = 132UL; }
        break;
      case 944:
        i++;
        { _1_OBF_FUNC_next = 302UL; }
        break;
      case 285:
        sum += i;
        { _1_OBF_FUNC_next = 476UL; }
        break;
      case 831:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 772UL; }
        } else {
          { _1_OBF_FUNC_next = 290UL; }
        }
        break;
      case 508:
        i++;
        { _1_OBF_FUNC_next = 292UL; }
        break;
      case 867:
        sum += i;
        { _1_OBF_FUNC_next = 524UL; }
        break;
      case 455:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 575UL; }
        } else {
          { _1_OBF_FUNC_next = 677UL; }
        }
        break;
      case 827:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 316UL; }
        } else {
          { _1_OBF_FUNC_next = 639UL; }
        }
        break;
      case 535:
        i++;
        { _1_OBF_FUNC_next = 337UL; }
        break;
      case 207:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 608UL; }
        } else {
          { _1_OBF_FUNC_next = 228UL; }
        }
        break;
      case 915:
        i++;
        { _1_OBF_FUNC_next = 796UL; }
        break;
      case 593:
        i++;
        { _1_OBF_FUNC_next = 717UL; }
        break;
      case 314:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 804UL; }
        break;
      case 947:
        i++;
        { _1_OBF_FUNC_next = 367UL; }
        break;
      case 443:
        sum += i;
        { _1_OBF_FUNC_next = 510UL; }
        break;
      case 308:
        i++;
        { _1_OBF_FUNC_next = 666UL; }
        break;
      case 903:
        sum += i;
        { _1_OBF_FUNC_next = 240UL; }
        break;
      case 612:
        i++;
        { _1_OBF_FUNC_next = 236UL; }
        break;
      case 638:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 627UL; }
        } else {
          { _1_OBF_FUNC_next = 432UL; }
        }
        break;
      case 542:
        sum += i;
        { _1_OBF_FUNC_next = 258UL; }
        break;
      case 962:
        sum += i;
        { _1_OBF_FUNC_next = 92UL; }
        break;
      case 77:
        sum += i;
        { _1_OBF_FUNC_next = 358UL; }
        break;
      case 589:
        sum += i;
        { _1_OBF_FUNC_next = 414UL; }
        break;
      case 4:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 509UL; }
        } else {
          { _1_OBF_FUNC_next = 681UL; }
        }
        break;
      case 476:
        i++;
        { _1_OBF_FUNC_next = 430UL; }
        break;
      case 533:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 966UL; }
        } else {
          { _1_OBF_FUNC_next = 540UL; }
        }
        break;
      case 462:
        sum += i;
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 634:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 55UL; }
        } else {
          { _1_OBF_FUNC_next = 957UL; }
        }
        break;
      case 657:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 51UL; }
        } else {
          { _1_OBF_FUNC_next = 809UL; }
        }
        break;
      case 766:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 898UL; }
        } else {
          { _1_OBF_FUNC_next = 252UL; }
        }
        break;
      case 501:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 536UL; }
        } else {
          { _1_OBF_FUNC_next = 433UL; }
        }
        break;
      case 823:
        i++;
        { _1_OBF_FUNC_next = 618UL; }
        break;
      case 673:
        sum += i;
        { _1_OBF_FUNC_next = 576UL; }
        break;
      case 656:
        sum += i;
        { _1_OBF_FUNC_next = 757UL; }
        break;
      case 201:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 438UL; }
        } else {
          { _1_OBF_FUNC_next = 362UL; }
        }
        break;
      case 910:
        i++;
        { _1_OBF_FUNC_next = 701UL; }
        break;
      case 163:
        i++;
        { _1_OBF_FUNC_next = 207UL; }
        break;
      case 901:
        i++;
        { _1_OBF_FUNC_next = 271UL; }
        break;
      case 829:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 234UL; }
        break;
      case 20:
        sum += i;
        { _1_OBF_FUNC_next = 564UL; }
        break;
      case 505:
        i++;
        { _1_OBF_FUNC_next = 396UL; }
        break;
      case 199:
        sum += i;
        { _1_OBF_FUNC_next = 165UL; }
        break;
      case 316:
        sum += i;
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 250:
        i++;
        { _1_OBF_FUNC_next = 682UL; }
        break;
      case 873:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 280UL; }
        } else {
          { _1_OBF_FUNC_next = 158UL; }
        }
        break;
      case 437:
        i++;
        { _1_OBF_FUNC_next = 899UL; }
        break;
      case 737:
        i++;
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 655:
        i++;
        { _1_OBF_FUNC_next = 647UL; }
        break;
      case 931:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 297UL; }
        } else {
          { _1_OBF_FUNC_next = 924UL; }
        }
        break;
      case 144:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 688UL; }
        } else {
          { _1_OBF_FUNC_next = 271UL; }
        }
        break;
      case 475:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 204UL; }
        } else {
          { _1_OBF_FUNC_next = 537UL; }
        }
        break;
      case 278:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 734UL; }
        } else {
          { _1_OBF_FUNC_next = 453UL; }
        }
        break;
      case 264:
        i++;
        { _1_OBF_FUNC_next = 932UL; }
        break;
      case 781:
        i++;
        { _1_OBF_FUNC_next = 482UL; }
        break;
      case 6:
        i++;
        { _1_OBF_FUNC_next = 400UL; }
        break;
      case 58:
        sum += i;
        { _1_OBF_FUNC_next = 949UL; }
        break;
      case 162:
        i++;
        { _1_OBF_FUNC_next = 750UL; }
        break;
      case 206:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 727UL; }
        } else {
          { _1_OBF_FUNC_next = 164UL; }
        }
        break;
      case 615:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 826UL; }
        } else {
          { _1_OBF_FUNC_next = 0UL; }
        }
        break;
      case 773:
        i++;
        { _1_OBF_FUNC_next = 557UL; }
        break;
      case 887:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 690UL; }
        } else {
          { _1_OBF_FUNC_next = 937UL; }
        }
        break;
      case 242:
        sum += i;
        { _1_OBF_FUNC_next = 529UL; }
        break;
      case 757:
        i++;
        { _1_OBF_FUNC_next = 758UL; }
        break;
      case 820:
        sum += i;
        { _1_OBF_FUNC_next = 99UL; }
        break;
      case 639:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 398UL; }
        } else {
          { _1_OBF_FUNC_next = 425UL; }
        }
        break;
      case 185:
        i++;
        { _1_OBF_FUNC_next = 236UL; }
        break;
      case 479:
        i++;
        { _1_OBF_FUNC_next = 895UL; }
        break;
      case 99:
        i++;
        { _1_OBF_FUNC_next = 550UL; }
        break;
      case 801:
        sum += i;
        { _1_OBF_FUNC_next = 910UL; }
        break;
      case 386:
        sum += i;
        { _1_OBF_FUNC_next = 617UL; }
        break;
      case 892:
        sum += i;
        { _1_OBF_FUNC_next = 702UL; }
        break;
      case 336:
        i++;
        { _1_OBF_FUNC_next = 514UL; }
        break;
      case 852:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 903UL; }
        } else {
          { _1_OBF_FUNC_next = 5UL; }
        }
        break;
      case 700:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 544UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 277:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 534UL; }
        } else {
          { _1_OBF_FUNC_next = 319UL; }
        }
        break;
      case 157:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 965UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 395:
        i++;
        { _1_OBF_FUNC_next = 880UL; }
        break;
      case 281:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 494UL; }
        } else {
          { _1_OBF_FUNC_next = 935UL; }
        }
        break;
      case 198:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 274UL; }
        } else {
          { _1_OBF_FUNC_next = 352UL; }
        }
        break;
      case 792:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 556UL; }
        } else {
          { _1_OBF_FUNC_next = 847UL; }
        }
        break;
      case 886:
        sum += i;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 333:
        sum += i;
        { _1_OBF_FUNC_next = 112UL; }
        break;
      case 755:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 159UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 398:
        sum += i;
        { _1_OBF_FUNC_next = 813UL; }
        break;
      case 17:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 59UL; }
        } else {
          { _1_OBF_FUNC_next = 420UL; }
        }
        break;
      case 618:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 970UL; }
        } else {
          { _1_OBF_FUNC_next = 514UL; }
        }
        break;
      case 861:
        sum += i;
        { _1_OBF_FUNC_next = 505UL; }
        break;
      case 80:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 194UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 235:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 400UL; }
        }
        break;
      case 413:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 794UL; }
        } else {
          { _1_OBF_FUNC_next = 759UL; }
        }
        break;
      case 262:
        i++;
        { _1_OBF_FUNC_next = 415UL; }
        break;
      case 280:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 333UL; }
        } else {
          { _1_OBF_FUNC_next = 684UL; }
        }
        break;
      case 669:
        i++;
        { _1_OBF_FUNC_next = 119UL; }
        break;
      case 418:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 219UL; }
        } else {
          { _1_OBF_FUNC_next = 904UL; }
        }
        break;
      case 490:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 740UL; }
        } else {
          { _1_OBF_FUNC_next = 818UL; }
        }
        break;
      case 914:
        sum += i;
        { _1_OBF_FUNC_next = 480UL; }
        break;
      case 50:
        i++;
        { _1_OBF_FUNC_next = 681UL; }
        break;
      case 807:
        sum += i;
        { _1_OBF_FUNC_next = 650UL; }
        break;
      case 394:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 919UL; }
        } else {
          { _1_OBF_FUNC_next = 375UL; }
        }
        break;
      case 43:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 581UL; }
        } else {
          { _1_OBF_FUNC_next = 880UL; }
        }
        break;
      case 94:
        i++;
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 491:
        sum += i;
        { _1_OBF_FUNC_next = 621UL; }
        break;
      case 342:
        i++;
        { _1_OBF_FUNC_next = 837UL; }
        break;
      case 517:
        i++;
        { _1_OBF_FUNC_next = 293UL; }
        break;
      case 357:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 464UL; }
        } else {
          { _1_OBF_FUNC_next = 201UL; }
        }
        break;
      case 315:
        sum += i;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 844:
        sum += i;
        { _1_OBF_FUNC_next = 289UL; }
        break;
      case 722:
        sum += i;
        { _1_OBF_FUNC_next = 262UL; }
        break;
      case 747:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 174UL; }
        } else {
          { _1_OBF_FUNC_next = 647UL; }
        }
        break;
      case 440:
        i++;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 197:
        i++;
        { _1_OBF_FUNC_next = 450UL; }
        break;
      case 826:
        sum += i;
        { _1_OBF_FUNC_next = 858UL; }
        break;
      case 537:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 386UL; }
        } else {
          { _1_OBF_FUNC_next = 170UL; }
        }
        break;
      case 804:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 724UL; }
        } else {
          { _1_OBF_FUNC_next = 568UL; }
        }
        break;
      case 412:
        i++;
        { _1_OBF_FUNC_next = 393UL; }
        break;
      case 361:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 89UL; }
        } else {
          { _1_OBF_FUNC_next = 555UL; }
        }
        break;
      case 767:
        sum += i;
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 759:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 730UL; }
        } else {
          { _1_OBF_FUNC_next = 16UL; }
        }
        break;
      case 563:
        i++;
        { _1_OBF_FUNC_next = 373UL; }
        break;
      case 171:
        i++;
        { _1_OBF_FUNC_next = 818UL; }
        break;
      case 534:
        sum += i;
        { _1_OBF_FUNC_next = 286UL; }
        break;
      case 210:
        sum += i;
        { _1_OBF_FUNC_next = 632UL; }
        break;
      case 110:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 939UL; }
        } else {
          { _1_OBF_FUNC_next = 806UL; }
        }
        break;
      case 474:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 811UL; }
        } else {
          { _1_OBF_FUNC_next = 700UL; }
        }
        break;
      case 518:
        i++;
        { _1_OBF_FUNC_next = 78UL; }
        break;
      case 477:
        i++;
        { _1_OBF_FUNC_next = 657UL; }
        break;
      case 169:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 353UL; }
        } else {
          { _1_OBF_FUNC_next = 304UL; }
        }
        break;
      case 450:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 459UL; }
        } else {
          { _1_OBF_FUNC_next = 815UL; }
        }
        break;
      case 795:
        __RANDVAR__37801990454094724671__ = 0;
        { _1_OBF_FUNC_next = 173UL; }
        break;
      case 770:
        i++;
        { _1_OBF_FUNC_next = 468UL; }
        break;
      case 93:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 495UL; }
        } else {
          { _1_OBF_FUNC_next = 310UL; }
        }
        break;
      case 21:
        i++;
        { _1_OBF_FUNC_next = 558UL; }
        break;
      case 874:
        sum += i;
        { _1_OBF_FUNC_next = 502UL; }
        break;
      case 872:
        i++;
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 746:
        __RANDVAR__96293235492928540776__ = 1;
        { _1_OBF_FUNC_next = 100UL; }
        break;
      case 276:
        i++;
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 608:
        sum += i;
        { _1_OBF_FUNC_next = 436UL; }
        break;
      case 101:
        __RANDVAR__20806269633128621441__ = 1;
        { _1_OBF_FUNC_next = 422UL; }
        break;
      case 913:
        i++;
        { _1_OBF_FUNC_next = 652UL; }
        break;
      case 752:
        sum += i;
        { _1_OBF_FUNC_next = 345UL; }
        break;
      case 621:
        i++;
        { _1_OBF_FUNC_next = 220UL; }
        break;
      case 51:
        sum += i;
        { _1_OBF_FUNC_next = 150UL; }
        break;
      case 88:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 658UL; }
        } else {
          { _1_OBF_FUNC_next = 700UL; }
        }
        break;
      case 134:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 390UL; }
        } else {
          { _1_OBF_FUNC_next = 911UL; }
        }
        break;
      case 248:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 230UL; }
        } else {
          { _1_OBF_FUNC_next = 236UL; }
        }
        break;
      case 326:
        sum += i;
        { _1_OBF_FUNC_next = 211UL; }
        break;
      case 492:
        i++;
        { _1_OBF_FUNC_next = 375UL; }
        break;
      case 570:
        sum += i;
        { _1_OBF_FUNC_next = 663UL; }
        break;
      case 840:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 180UL; }
        } else {
          { _1_OBF_FUNC_next = 664UL; }
        }
        break;
      case 296:
        sum += i;
        { _1_OBF_FUNC_next = 359UL; }
        break;
      case 213:
        i++;
        { _1_OBF_FUNC_next = 201UL; }
        break;
      case 255:
        __RANDVAR__10324407645974611021__ = 0;
        { _1_OBF_FUNC_next = 762UL; }
        break;
      case 695:
        sum += i;
        { _1_OBF_FUNC_next = 668UL; }
        break;
      case 52:
        __RANDVAR__52272840884874619084__ = 1;
        { _1_OBF_FUNC_next = 566UL; }
        break;
      case 514:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 324UL; }
        } else {
          { _1_OBF_FUNC_next = 490UL; }
        }
        break;
      case 138:
        sum += i;
        { _1_OBF_FUNC_next = 787UL; }
        break;
      case 424:
        i++;
        { _1_OBF_FUNC_next = 806UL; }
        break;
      case 67:
        sum += i;
        { _1_OBF_FUNC_next = 328UL; }
        break;
      case 10:
        i++;
        { _1_OBF_FUNC_next = 940UL; }
        break;
      case 685:
        sum += i;
        { _1_OBF_FUNC_next = 938UL; }
        break;
      case 602:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 186UL; }
        } else {
          { _1_OBF_FUNC_next = 940UL; }
        }
        break;
      case 341:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 498UL; }
        } else {
          { _1_OBF_FUNC_next = 531UL; }
        }
        break;
      case 667:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 124UL; }
        } else {
          { _1_OBF_FUNC_next = 253UL; }
        }
        break;
      case 105:
        __RANDVAR__2556335932723160743__ = 1;
        { _1_OBF_FUNC_next = 607UL; }
        break;
      case 834:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 533UL; }
        }
        break;
      case 38:
        i++;
        { _1_OBF_FUNC_next = 111UL; }
        break;
      case 786:;
        return (0);
        break;
      case 964:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 671UL; }
        } else {
          { _1_OBF_FUNC_next = 558UL; }
        }
        break;
      case 551:
        i++;
        { _1_OBF_FUNC_next = 379UL; }
        break;
      case 415:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 640UL; }
        } else {
          { _1_OBF_FUNC_next = 683UL; }
        }
        break;
      case 785:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 710UL; }
        } else {
          { _1_OBF_FUNC_next = 596UL; }
        }
        break;
      case 374:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 582UL; }
        } else {
          { _1_OBF_FUNC_next = 158UL; }
        }
        break;
      case 824:
        __RANDVAR__49060315192805422232__ = 1;
        { _1_OBF_FUNC_next = 958UL; }
        break;
      case 664:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 325UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 942:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 850UL; }
        } else {
          { _1_OBF_FUNC_next = 350UL; }
        }
        break;
      case 715:
        sum += i;
        { _1_OBF_FUNC_next = 427UL; }
        break;
      case 120:
        i++;
        { _1_OBF_FUNC_next = 337UL; }
        break;
      case 216:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 484UL; }
        } else {
          { _1_OBF_FUNC_next = 523UL; }
        }
        break;
      case 870:
        sum += i;
        { _1_OBF_FUNC_next = 500UL; }
        break;
      case 832:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 60UL; }
        } else {
          { _1_OBF_FUNC_next = 4UL; }
        }
        break;
      case 635:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 646UL; }
        } else {
          { _1_OBF_FUNC_next = 79UL; }
        }
        break;
      case 40:
        sum += i;
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 905:
        sum += i;
        { _1_OBF_FUNC_next = 354UL; }
        break;
      case 13:
        i++;
        { _1_OBF_FUNC_next = 755UL; }
        break;
      case 546:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 39UL; }
        } else {
          { _1_OBF_FUNC_next = 785UL; }
        }
        break;
      case 882:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 61UL; }
        } else {
          { _1_OBF_FUNC_next = 628UL; }
        }
        break;
      case 566:;
        if (__RANDVAR__52272840884874619084__ == 0) {
          { _1_OBF_FUNC_next = 187UL; }
        } else {
          { _1_OBF_FUNC_next = 909UL; }
        }
        break;
      case 529:
        i++;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 309:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 615UL; }
        } else {
          { _1_OBF_FUNC_next = 318UL; }
        }
        break;
      case 694:
        i++;
        { _1_OBF_FUNC_next = 831UL; }
        break;
      case 523:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 394UL; }
        } else {
          { _1_OBF_FUNC_next = 558UL; }
        }
        break;
      case 220:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 753UL; }
        } else {
          { _1_OBF_FUNC_next = 78UL; }
        }
        break;
      case 848:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 630UL; }
        } else {
          { _1_OBF_FUNC_next = 558UL; }
        }
        break;
      case 485:
        sum += i;
        { _1_OBF_FUNC_next = 769UL; }
        break;
      case 933:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 117UL; }
        } else {
          { _1_OBF_FUNC_next = 320UL; }
        }
        break;
      case 925:
        sum += i;
        { _1_OBF_FUNC_next = 706UL; }
        break;
      case 187:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 547UL; }
        } else {
          { _1_OBF_FUNC_next = 602UL; }
        }
        break;
      case 353:
        sum += i;
        { _1_OBF_FUNC_next = 588UL; }
        break;
      case 641:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 140UL; }
        } else {
          { _1_OBF_FUNC_next = 293UL; }
        }
        break;
      case 1:
        sum += i;
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 642:
        sum += i;
        { _1_OBF_FUNC_next = 600UL; }
        break;
      case 275:
        sum += i;
        { _1_OBF_FUNC_next = 950UL; }
        break;
      case 864:
        sum += i;
        { _1_OBF_FUNC_next = 152UL; }
        break;
      case 963:
        i++;
        { _1_OBF_FUNC_next = 429UL; }
        break;
      case 782:
        i++;
        { _1_OBF_FUNC_next = 533UL; }
        break;
      case 16:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 355UL; }
        } else {
          { _1_OBF_FUNC_next = 853UL; }
        }
        break;
      case 383:
        __RANDVAR__2556335932723160743__ = 0;
        { _1_OBF_FUNC_next = 607UL; }
        break;
      case 578:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 707UL; }
        } else {
          { _1_OBF_FUNC_next = 558UL; }
        }
        break;
      case 121:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 790UL; }
        } else {
          { _1_OBF_FUNC_next = 940UL; }
        }
        break;
      case 301:
        i++;
        { _1_OBF_FUNC_next = 805UL; }
        break;
      case 857:
        i++;
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 430:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 503UL; }
        } else {
          { _1_OBF_FUNC_next = 70UL; }
        }
        break;
      case 798:
        sum += i;
        { _1_OBF_FUNC_next = 822UL; }
        break;
      case 225:
        sum += i;
        { _1_OBF_FUNC_next = 276UL; }
        break;
      case 30:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 239UL; }
        }
        break;
      case 526:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 637UL; }
        } else {
          { _1_OBF_FUNC_next = 207UL; }
        }
        break;
      case 522:
        sum += i;
        { _1_OBF_FUNC_next = 733UL; }
        break;
      case 670:
        sum += i;
        { _1_OBF_FUNC_next = 921UL; }
        break;
      case 76:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 377UL; }
        } else {
          { _1_OBF_FUNC_next = 267UL; }
        }
        break;
      case 808:
        i++;
        { _1_OBF_FUNC_next = 245UL; }
        break;
      case 127:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 224UL; }
        } else {
          { _1_OBF_FUNC_next = 130UL; }
        }
        break;
      case 552:
        sum += i;
        { _1_OBF_FUNC_next = 941UL; }
        break;
      case 520:
        i++;
        { _1_OBF_FUNC_next = 788UL; }
        break;
      case 226:;
        if (__RANDVAR__68805441388094528133__ == 0) {
          { _1_OBF_FUNC_next = 113UL; }
        } else {
          { _1_OBF_FUNC_next = 829UL; }
        }
        break;
      case 678:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 878UL; }
        } else {
          { _1_OBF_FUNC_next = 623UL; }
        }
        break;
      case 271:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 720UL; }
        } else {
          { _1_OBF_FUNC_next = 533UL; }
        }
        break;
      case 464:
        sum += i;
        { _1_OBF_FUNC_next = 213UL; }
        break;
      case 627:
        sum += i;
        { _1_OBF_FUNC_next = 951UL; }
        break;
      case 594:
        i++;
        { _1_OBF_FUNC_next = 501UL; }
        break;
      case 581:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 656UL; }
        } else {
          { _1_OBF_FUNC_next = 758UL; }
        }
        break;
      case 761:
        i++;
        { _1_OBF_FUNC_next = 674UL; }
        break;
      case 148:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 295UL; }
        } else {
          { _1_OBF_FUNC_next = 45UL; }
        }
        break;
      case 289:
        i++;
        { _1_OBF_FUNC_next = 306UL; }
        break;
      case 44:
        i++;
        { _1_OBF_FUNC_next = 453UL; }
        break;
      case 46:
        sum += i;
        { _1_OBF_FUNC_next = 961UL; }
        break;
      case 707:
        sum += i;
        { _1_OBF_FUNC_next = 376UL; }
        break;
      case 495:
        sum += i;
        { _1_OBF_FUNC_next = 300UL; }
        break;
      case 860:
        i++;
        { _1_OBF_FUNC_next = 216UL; }
        break;
      case 959:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 193UL; }
        } else {
          { _1_OBF_FUNC_next = 119UL; }
        }
        break;
      case 544:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 118UL; }
        } else {
          { _1_OBF_FUNC_next = 674UL; }
        }
        break;
      case 478:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 370UL; }
        } else {
          { _1_OBF_FUNC_next = 788UL; }
        }
        break;
      case 188:
        i++;
        { _1_OBF_FUNC_next = 531UL; }
        break;
      case 23:
        sum += i;
        { _1_OBF_FUNC_next = 612UL; }
        break;
      case 400:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 907UL; }
        } else {
          { _1_OBF_FUNC_next = 624UL; }
        }
        break;
      case 483:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 670UL; }
        } else {
          { _1_OBF_FUNC_next = 208UL; }
        }
        break;
      case 580:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 844UL; }
        } else {
          { _1_OBF_FUNC_next = 306UL; }
        }
        break;
      case 310:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 351UL; }
        } else {
          { _1_OBF_FUNC_next = 899UL; }
        }
        break;
      case 103:
        __RANDVAR__68805441388094528133__ = 0;
        { _1_OBF_FUNC_next = 226UL; }
        break;
      case 384:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 190UL; }
        } else {
          { _1_OBF_FUNC_next = 899UL; }
        }
        break;
      case 908:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 443UL; }
        } else {
          { _1_OBF_FUNC_next = 281UL; }
        }
        break;
      case 665:
        i++;
        { _1_OBF_FUNC_next = 946UL; }
        break;
      case 407:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 722UL; }
        } else {
          { _1_OBF_FUNC_next = 415UL; }
        }
        break;
      case 195:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 715UL; }
        } else {
          { _1_OBF_FUNC_next = 251UL; }
        }
        break;
      case 648:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 184UL; }
        } else {
          { _1_OBF_FUNC_next = 652UL; }
        }
        break;
      case 75:
        sum += i;
        { _1_OBF_FUNC_next = 604UL; }
        break;
      case 575:
        sum += i;
        { _1_OBF_FUNC_next = 817UL; }
        break;
      case 547:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 692UL; }
        } else {
          { _1_OBF_FUNC_next = 717UL; }
        }
        break;
      case 519:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 67UL; }
        } else {
          { _1_OBF_FUNC_next = 273UL; }
        }
        break;
      case 208:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 673UL; }
        } else {
          { _1_OBF_FUNC_next = 659UL; }
        }
        break;
      case 503:
        sum += i;
        { _1_OBF_FUNC_next = 268UL; }
        break;
      case 486:
        __RANDVAR__47888733787485224865__ = 1;
        { _1_OBF_FUNC_next = 568UL; }
        break;
      case 576:
        i++;
        { _1_OBF_FUNC_next = 659UL; }
        break;
      case 928:
        sum += i;
        { _1_OBF_FUNC_next = 477UL; }
        break;
      case 930:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 58UL; }
        } else {
          { _1_OBF_FUNC_next = 384UL; }
        }
        break;
      case 921:
        i++;
        { _1_OBF_FUNC_next = 208UL; }
        break;
      case 689:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 736UL; }
        } else {
          { _1_OBF_FUNC_next = 78UL; }
        }
        break;
      case 31:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 65UL; }
        } else {
          { _1_OBF_FUNC_next = 840UL; }
        }
        break;
      case 396:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 680UL; }
        } else {
          { _1_OBF_FUNC_next = 450UL; }
        }
        break;
      case 510:
        i++;
        { _1_OBF_FUNC_next = 281UL; }
        break;
      case 743:
        sum += i;
        { _1_OBF_FUNC_next = 877UL; }
        break;
      case 55:
        sum += i;
        { _1_OBF_FUNC_next = 261UL; }
        break;
      case 699:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 775UL; }
        } else {
          { _1_OBF_FUNC_next = 287UL; }
        }
        break;
      case 223:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 792UL; }
        } else {
          { _1_OBF_FUNC_next = 439UL; }
        }
        break;
      case 45:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 561UL; }
        } else {
          { _1_OBF_FUNC_next = 880UL; }
        }
        break;
      case 421:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 449UL; }
        } else {
          { _1_OBF_FUNC_next = 236UL; }
        }
        break;
      case 24:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 227UL; }
        } else {
          { _1_OBF_FUNC_next = 805UL; }
        }
        break;
      case 81:
        i++;
        { _1_OBF_FUNC_next = 341UL; }
        break;
      case 288:
        i++;
        { _1_OBF_FUNC_next = 350UL; }
        break;
      case 948:
        i++;
        { _1_OBF_FUNC_next = 935UL; }
        break;
      case 356:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 493UL; }
        } else {
          { _1_OBF_FUNC_next = 592UL; }
        }
        break;
      case 907:
        sum += i;
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 650:
        i++;
        { _1_OBF_FUNC_next = 431UL; }
        break;
      case 660:
        sum += i;
        { _1_OBF_FUNC_next = 317UL; }
        break;
      case 14:
        i++;
        { _1_OBF_FUNC_next = 595UL; }
        break;
      case 603:
        __RANDVAR__35800125096990708189__ = 0;
        { _1_OBF_FUNC_next = 456UL; }
        break;
      case 730:
        sum += i;
        { _1_OBF_FUNC_next = 94UL; }
        break;
      case 941:
        i++;
        { _1_OBF_FUNC_next = 474UL; }
        break;
      case 39:
        sum += i;
        { _1_OBF_FUNC_next = 452UL; }
        break;
      case 855:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 368UL; }
        } else {
          { _1_OBF_FUNC_next = 583UL; }
        }
        break;
      case 616:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 776UL; }
        } else {
          { _1_OBF_FUNC_next = 66UL; }
        }
        break;
      case 238:
        i++;
        { _1_OBF_FUNC_next = 455UL; }
        break;
      case 164:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 768UL; }
        } else {
          { _1_OBF_FUNC_next = 681UL; }
        }
        break;
      case 797:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 405UL; }
        } else {
          { _1_OBF_FUNC_next = 121UL; }
        }
        break;
      case 78:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 636UL; }
        } else {
          { _1_OBF_FUNC_next = 421UL; }
        }
        break;
      case 311:
        __RANDVAR__67630478704052763169__ = 0;
        { _1_OBF_FUNC_next = 383UL; }
        break;
      case 496:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 352UL; }
        break;
      case 387:
        sum += i;
        { _1_OBF_FUNC_next = 810UL; }
        break;
      case 762:;
        if (__RANDVAR__10324407645974611021__ == 0) {
          { _1_OBF_FUNC_next = 802UL; }
        } else {
          { _1_OBF_FUNC_next = 718UL; }
        }
        break;
      case 367:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 243UL; }
        } else {
          { _1_OBF_FUNC_next = 880UL; }
        }
        break;
      case 452:
        i++;
        { _1_OBF_FUNC_next = 785UL; }
        break;
      case 825:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 968UL; }
        } else {
          { _1_OBF_FUNC_next = 574UL; }
        }
        break;
      case 401:
        sum += i;
        { _1_OBF_FUNC_next = 513UL; }
        break;
      case 965:
        sum += i;
        { _1_OBF_FUNC_next = 872UL; }
        break;
      case 214:
        i++;
        { _1_OBF_FUNC_next = 239UL; }
        break;
      case 85:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 426UL; }
        } else {
          { _1_OBF_FUNC_next = 818UL; }
        }
        break;
      case 346:
        sum += i;
        { _1_OBF_FUNC_next = 653UL; }
        break;
      case 211:
        i++;
        { _1_OBF_FUNC_next = 825UL; }
        break;
      case 118:
        sum += i;
        { _1_OBF_FUNC_next = 761UL; }
        break;
      case 668:
        i++;
        { _1_OBF_FUNC_next = 483UL; }
        break;
      case 647:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 382UL; }
        } else {
          { _1_OBF_FUNC_next = 175UL; }
        }
        break;
      case 453:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 635UL; }
        } else {
          { _1_OBF_FUNC_next = 531UL; }
        }
        break;
      case 53:;
        if (__RANDVAR__21526537379964246864__ == 0) {
          { _1_OBF_FUNC_next = 17UL; }
        } else {
          { _1_OBF_FUNC_next = 506UL; }
        }
        break;
      case 389:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 378UL; }
        } else {
          { _1_OBF_FUNC_next = 216UL; }
        }
        break;
      case 772:
        sum += i;
        { _1_OBF_FUNC_next = 269UL; }
        break;
      case 104:
        i++;
        { _1_OBF_FUNC_next = 356UL; }
        break;
      case 629:
        sum += i;
        { _1_OBF_FUNC_next = 598UL; }
        break;
      case 697:
        sum += i;
        { _1_OBF_FUNC_next = 947UL; }
        break;
      case 334:
        sum += i;
        { _1_OBF_FUNC_next = 553UL; }
        break;
      case 392:
        i++;
        { _1_OBF_FUNC_next = 411UL; }
        break;
      case 651:
        i++;
        { _1_OBF_FUNC_next = 363UL; }
        break;
      case 167:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 3UL; }
        } else {
          { _1_OBF_FUNC_next = 930UL; }
        }
        break;
      case 613:
        sum += i;
        { _1_OBF_FUNC_next = 161UL; }
        break;
      case 883:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 156UL; }
        } else {
          { _1_OBF_FUNC_next = 895UL; }
        }
        break;
      case 11:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 183UL; }
        } else {
          { _1_OBF_FUNC_next = 393UL; }
        }
        break;
      case 595:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 298UL; }
        } else {
          { _1_OBF_FUNC_next = 216UL; }
        }
        break;
      case 620:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 242UL; }
        } else {
          { _1_OBF_FUNC_next = 35UL; }
        }
        break;
      case 183:
        sum += i;
        { _1_OBF_FUNC_next = 412UL; }
        break;
      case 805:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 809:
        __RANDVAR__83559518199975377201__ = 0;
        { _1_OBF_FUNC_next = 591UL; }
        break;
      case 632:
        i++;
        { _1_OBF_FUNC_next = 756UL; }
        break;
      case 287:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 934UL; }
        } else {
          { _1_OBF_FUNC_next = 450UL; }
        }
        break;
      case 83:
        i++;
        { _1_OBF_FUNC_next = 747UL; }
        break;
      case 219:
        sum += i;
        { _1_OBF_FUNC_next = 686UL; }
        break;
      case 579:
        sum += i;
        { _1_OBF_FUNC_next = 573UL; }
        break;
      case 802:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 620UL; }
        } else {
          { _1_OBF_FUNC_next = 119UL; }
        }
        break;
      case 165:
        i++;
        { _1_OBF_FUNC_next = 777UL; }
        break;
      case 626:
        i++;
        { _1_OBF_FUNC_next = 648UL; }
        break;
      case 463:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 697UL; }
        } else {
          { _1_OBF_FUNC_next = 367UL; }
        }
        break;
      case 500:
        i++;
        { _1_OBF_FUNC_next = 223UL; }
        break;
      case 709:
        i++;
        { _1_OBF_FUNC_next = 943UL; }
        break;
      case 279:
        sum += i;
        { _1_OBF_FUNC_next = 440UL; }
        break;
      case 940:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 31UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 817:
        i++;
        { _1_OBF_FUNC_next = 677UL; }
        break;
      case 843:
        sum += i;
        { _1_OBF_FUNC_next = 366UL; }
        break;
      case 369:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 245UL; }
        }
        break;
      case 482:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 685UL; }
        } else {
          { _1_OBF_FUNC_next = 247UL; }
        }
        break;
      case 330:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 403UL; }
        } else {
          { _1_OBF_FUNC_next = 16UL; }
        }
        break;
      case 549:
        sum += i;
        { _1_OBF_FUNC_next = 347UL; }
        break;
      case 558:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 389UL; }
        } else {
          { _1_OBF_FUNC_next = 27UL; }
        }
        break;
      case 674:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 871UL; }
        } else {
          { _1_OBF_FUNC_next = 837UL; }
        }
        break;
      case 203:
        sum += i;
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 562:
        i++;
        { _1_OBF_FUNC_next = 911UL; }
        break;
      case 237:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 169UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 426:
        sum += i;
        { _1_OBF_FUNC_next = 171UL; }
        break;
      case 87:
        i++;
        { _1_OBF_FUNC_next = 62UL; }
        break;
      case 711:
        __RANDVAR__67630478704052763169__ = 1;
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 716:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 203UL; }
        } else {
          { _1_OBF_FUNC_next = 611UL; }
        }
        break;
      case 680:
        sum += i;
        { _1_OBF_FUNC_next = 197UL; }
        break;
      case 516:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 485UL; }
        } else {
          { _1_OBF_FUNC_next = 687UL; }
        }
        break;
      case 417:
        sum += i;
        { _1_OBF_FUNC_next = 713UL; }
        break;
      case 922:
        __RANDVAR__21526537379964246864__ = 0;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 704:
        i++;
        { _1_OBF_FUNC_next = 329UL; }
        break;
      case 305:
        i++;
        { _1_OBF_FUNC_next = 723UL; }
        break;
      case 461:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 235UL; }
        } else {
          { _1_OBF_FUNC_next = 131UL; }
        }
        break;
      case 270:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 613UL; }
        } else {
          { _1_OBF_FUNC_next = 195UL; }
        }
        break;
      case 662:
        i++;
        { _1_OBF_FUNC_next = 766UL; }
        break;
      case 912:
        sum += i;
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 631:
        sum += i;
        { _1_OBF_FUNC_next = 521UL; }
        break;
      case 466:
        i++;
        { _1_OBF_FUNC_next = 818UL; }
        break;
      case 754:
        sum += i;
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 687:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 542UL; }
        } else {
          { _1_OBF_FUNC_next = 175UL; }
        }
        break;
      case 433:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 365UL; }
        } else {
          { _1_OBF_FUNC_next = 899UL; }
        }
        break;
      case 112:
        i++;
        { _1_OBF_FUNC_next = 684UL; }
        break;
      case 294:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 205UL; }
        } else {
          { _1_OBF_FUNC_next = 682UL; }
        }
        break;
      case 598:
        i++;
        { _1_OBF_FUNC_next = 876UL; }
        break;
      case 698:
        i++;
        { _1_OBF_FUNC_next = 531UL; }
        break;
      case 919:
        sum += i;
        { _1_OBF_FUNC_next = 492UL; }
        break;
      case 349:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 539UL; }
        } else {
          { _1_OBF_FUNC_next = 318UL; }
        }
        break;
      case 958:;
        if (__RANDVAR__49060315192805422232__ == 0) {
          { _1_OBF_FUNC_next = 916UL; }
        } else {
          { _1_OBF_FUNC_next = 215UL; }
        }
        break;
      case 952:;
        if (__RANDVAR__47888733787485224865__ == 0) {
          { _1_OBF_FUNC_next = 133UL; }
        } else {
          { _1_OBF_FUNC_next = 804UL; }
        }
        break;
      case 70:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 834UL; }
        } else {
          { _1_OBF_FUNC_next = 101UL; }
        }
        break;
      case 107:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 732UL; }
        } else {
          { _1_OBF_FUNC_next = 693UL; }
        }
        break;
      case 303:
        i++;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 230:
        sum += i;
        { _1_OBF_FUNC_next = 185UL; }
        break;
      case 470:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 321UL; }
        } else {
          { _1_OBF_FUNC_next = 198UL; }
        }
        break;
      case 740:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 179UL; }
        } else {
          { _1_OBF_FUNC_next = 256UL; }
        }
        break;
      case 953:
        i++;
        { _1_OBF_FUNC_next = 380UL; }
        break;
      case 291:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 344UL; }
        } else {
          { _1_OBF_FUNC_next = 429UL; }
        }
        break;
      case 614:;
        if (__RANDVAR__52724944658658789189__ == 0) {
          { _1_OBF_FUNC_next = 84UL; }
        } else {
          { _1_OBF_FUNC_next = 954UL; }
        }
        break;
      case 145:
        i++;
        { _1_OBF_FUNC_next = 256UL; }
        break;
      case 866:
        i++;
        { _1_OBF_FUNC_next = 623UL; }
        break;
      case 339:
        sum += i;
        { _1_OBF_FUNC_next = 448UL; }
        break;
      case 789:
        sum += i;
        { _1_OBF_FUNC_next = 217UL; }
        break;
      case 682:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 182UL; }
        } else {
          { _1_OBF_FUNC_next = 248UL; }
        }
        break;
      case 693:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 442UL; }
        } else {
          { _1_OBF_FUNC_next = 557UL; }
        }
        break;
      case 34:
        sum += i;
        { _1_OBF_FUNC_next = 535UL; }
        break;
      case 646:
        sum += i;
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 856:
        i++;
        { _1_OBF_FUNC_next = 263UL; }
        break;
      case 102:
        i++;
        { _1_OBF_FUNC_next = 413UL; }
        break;
      case 775:
        sum += i;
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 888:;
        if (__RANDVAR__67630478704052763169__ == 0) {
          { _1_OBF_FUNC_next = 470UL; }
        } else {
          { _1_OBF_FUNC_next = 105UL; }
        }
        break;
      case 652:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 192UL; }
        } else {
          { _1_OBF_FUNC_next = 818UL; }
        }
        break;
      case 830:
        sum += i;
        { _1_OBF_FUNC_next = 323UL; }
        break;
      case 727:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 892UL; }
        } else {
          { _1_OBF_FUNC_next = 672UL; }
        }
        break;
      case 267:
        __RANDVAR__20806269633128621441__ = 0;
        { _1_OBF_FUNC_next = 422UL; }
        break;
      case 690:
        sum += i;
        { _1_OBF_FUNC_next = 528UL; }
        break;
      case 274:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 339UL; }
        } else {
          { _1_OBF_FUNC_next = 134UL; }
        }
        break;
      case 399:
        sum += i;
        { _1_OBF_FUNC_next = 675UL; }
        break;
      case 509:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 679UL; }
        } else {
          { _1_OBF_FUNC_next = 363UL; }
        }
        break;
      case 645:
        i++;
        { _1_OBF_FUNC_next = 596UL; }
        break;
      case 663:
        i++;
        { _1_OBF_FUNC_next = 779UL; }
        break;
      case 890:
        sum += i;
        { _1_OBF_FUNC_next = 814UL; }
        break;
      case 733:
        i++;
        { _1_OBF_FUNC_next = 463UL; }
        break;
      case 926:
        sum += i;
        { _1_OBF_FUNC_next = 662UL; }
        break;
      case 628:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 867UL; }
        } else {
          { _1_OBF_FUNC_next = 160UL; }
        }
        break;
      case 750:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 244UL; }
        } else {
          { _1_OBF_FUNC_next = 747UL; }
        }
        break;
      case 272:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 381UL; }
        } else {
          { _1_OBF_FUNC_next = 266UL; }
        }
        break;
      case 835:
        sum += i;
        { _1_OBF_FUNC_next = 563UL; }
        break;
      case 385:
        sum += i;
        { _1_OBF_FUNC_next = 559UL; }
        break;
      case 779:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 385UL; }
        } else {
          { _1_OBF_FUNC_next = 661UL; }
        }
        break;
      case 609:
        sum += i;
        { _1_OBF_FUNC_next = 729UL; }
        break;
      case 233:
        i++;
        { _1_OBF_FUNC_next = 969UL; }
        break;
      case 180:
        sum += i;
        { _1_OBF_FUNC_next = 499UL; }
        break;
      case 68:
        sum += i;
        { _1_OBF_FUNC_next = 859UL; }
        break;
      case 295:
        sum += i;
        { _1_OBF_FUNC_next = 737UL; }
        break;
      case 586:
        sum += i;
        { _1_OBF_FUNC_next = 331UL; }
        break;
      case 936:
        sum += i;
        { _1_OBF_FUNC_next = 594UL; }
        break;
      case 379:;
        if (i < 127) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 667UL; }
        }
        break;
      case 422:;
        if (__RANDVAR__20806269633128621441__ == 0) {
          { _1_OBF_FUNC_next = 91UL; }
        } else {
          { _1_OBF_FUNC_next = 967UL; }
        }
        break;
      case 320:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 114UL; }
        } else {
          { _1_OBF_FUNC_next = 641UL; }
        }
        break;
      case 815:
        __RANDVAR__49236625998652963583__ = 1;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 313:
        __RANDVAR__96293235492928540776__ = 0;
        { _1_OBF_FUNC_next = 100UL; }
        break;
      case 774:
        sum += i;
        { _1_OBF_FUNC_next = 694UL; }
        break;
      case 524:
        i++;
        { _1_OBF_FUNC_next = 160UL; }
        break;
      case 366:
        i++;
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 15:
        i++;
        { _1_OBF_FUNC_next = 887UL; }
        break;
      case 388:
        i++;
        { _1_OBF_FUNC_next = 583UL; }
        break;
      case 18:
        i++;
        { _1_OBF_FUNC_next = 639UL; }
        break;
      case 438:
        sum += i;
        { _1_OBF_FUNC_next = 793UL; }
        break;
      case 393:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 419UL; }
        } else {
          { _1_OBF_FUNC_next = 313UL; }
        }
        break;
      case 884:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 741UL; }
        } else {
          { _1_OBF_FUNC_next = 433UL; }
        }
        break;
      case 869:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 478UL; }
        } else {
          { _1_OBF_FUNC_next = 514UL; }
        }
        break;
      case 125:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next = 786UL; }
        break;
      case 350:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 846UL; }
        } else {
          { _1_OBF_FUNC_next = 255UL; }
        }
        break;
      case 354:
        i++;
        { _1_OBF_FUNC_next = 450UL; }
        break;
      case 574:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next = 23UL; }
        } else {
          { _1_OBF_FUNC_next = 236UL; }
        }
        break;
      }
    }
  }
}
// variants: loop-unroll, loop-unroll, flatten
// expanded variants: loop-unroll, loop-unroll, flatten:switch
