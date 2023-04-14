typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(rand)();
extern int(strtol)();
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
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  int __RANDVAR__29110676504195087284__;
  unsigned int _index0_2;
  int __RANDVAR__43467388252028873741__;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  int __RANDVAR__87512315818333497942__;
  int __RANDVAR__97489254228595228575__;
  unsigned int _induction5_4_2;
  int __RANDVAR__75324692762879291886__;
  int __RANDVAR__72830948378492768065__;
  int __RANDVAR__72743817970187714773__;
  unsigned int _index4_0;
  int __RANDVAR__55736840103921928706__;
  unsigned int _induction7_6_2;
  int __RANDVAR__14493993532994800908__;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  int __RANDVAR__27364710861236684983__;
  int __RANDVAR__43917346718694078359__;
  int __RANDVAR__53082032177962287082__;
  int tmp;
  int __RANDVAR__27212846635821537647__;
  int __RANDVAR__17917140384409192139__;
  int __RANDVAR__91060907674129574464__;
  int __RANDVAR__66271423655543667894__;
  int __RANDVAR__21313973761915495867__;
  int tmp___0;
  int __RANDVAR__27212846635821537647_____0;
  int __RANDVAR__17917140384409192139_____0;
  int __RANDVAR__91060907674129574464_____0;
  int __RANDVAR__66271423655543667894_____0;
  int __RANDVAR__21313973761915495867_____0;
  int tmp___1;
  int __RANDVAR__27212846635821537647_____1;
  int __RANDVAR__17917140384409192139_____1;
  int __RANDVAR__91060907674129574464_____1;
  int __RANDVAR__66271423655543667894_____1;
  int __RANDVAR__21313973761915495867_____1;
  int __RANDVAR__27212846635821537647_____2;
  int __RANDVAR__17917140384409192139_____2;
  int __RANDVAR__91060907674129574464_____2;
  int __RANDVAR__66271423655543667894_____2;
  int __RANDVAR__21313973761915495867_____2;
  int tmp___2;
  int __RANDVAR__55263576091522368180__;
  int tmp___3;
  int __RANDVAR__11076293552336221433__;
  int tmp___4;
  int __RANDVAR__11076293552336221433_____0;
  int tmp___5;
  int __RANDVAR__11076293552336221433_____1;
  int __RANDVAR__11076293552336221433_____2;
  int __RANDVAR__89673644462235323434__;
  int __RANDVAR__98823270048619348211__;
  int tmp___6;
  int __RANDVAR__96093444848016043779__;
  int __RANDVAR__3058300864712393407__;
  int __RANDVAR__75873560844759396346__;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int __RANDVAR__58201951085973112719__;
  int __RANDVAR__13844759376760238959__;
  int __RANDVAR__66488612657167399743__;
  int __RANDVAR__63208616555072126141__;
  int __RANDVAR__60240982211775740940__;
  int __RANDVAR__32264247020763072941__;
  int tmp___10;
  int __RANDVAR__96093444848016043779_____0;
  int __RANDVAR__3058300864712393407_____0;
  int __RANDVAR__75873560844759396346_____0;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int __RANDVAR__58201951085973112719_____0;
  int __RANDVAR__13844759376760238959_____0;
  int __RANDVAR__66488612657167399743_____0;
  int __RANDVAR__63208616555072126141_____0;
  int __RANDVAR__60240982211775740940_____0;
  int __RANDVAR__32264247020763072941_____0;
  int tmp___14;
  int __RANDVAR__96093444848016043779_____1;
  int __RANDVAR__3058300864712393407_____1;
  int __RANDVAR__75873560844759396346_____1;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int __RANDVAR__58201951085973112719_____1;
  int __RANDVAR__13844759376760238959_____1;
  int __RANDVAR__66488612657167399743_____1;
  int __RANDVAR__63208616555072126141_____1;
  int __RANDVAR__60240982211775740940_____1;
  int __RANDVAR__32264247020763072941_____1;
  int __RANDVAR__96093444848016043779_____2;
  int __RANDVAR__3058300864712393407_____2;
  int __RANDVAR__75873560844759396346_____2;
  int __RANDVAR__58201951085973112719_____2;
  int __RANDVAR__13844759376760238959_____2;
  int __RANDVAR__66488612657167399743_____2;
  int __RANDVAR__63208616555072126141_____2;
  int __RANDVAR__60240982211775740940_____2;
  int __RANDVAR__32264247020763072941_____2;
  int __RANDVAR__8832761854096307175__;
  int tmp___18;
  int __RANDVAR__55263576091522368180_____0;
  int tmp___19;
  int __RANDVAR__11076293552336221433_____3;
  int tmp___20;
  int __RANDVAR__11076293552336221433_____4;
  int tmp___21;
  int __RANDVAR__11076293552336221433_____5;
  int __RANDVAR__11076293552336221433_____6;
  int __RANDVAR__89673644462235323434_____0;
  int __RANDVAR__98823270048619348211_____0;
  int tmp___22;
  int __RANDVAR__96093444848016043779_____3;
  int __RANDVAR__3058300864712393407_____3;
  int __RANDVAR__75873560844759396346_____3;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int __RANDVAR__58201951085973112719_____3;
  int __RANDVAR__13844759376760238959_____3;
  int __RANDVAR__66488612657167399743_____3;
  int __RANDVAR__63208616555072126141_____3;
  int __RANDVAR__60240982211775740940_____3;
  int __RANDVAR__32264247020763072941_____3;
  int tmp___26;
  int __RANDVAR__96093444848016043779_____4;
  int __RANDVAR__3058300864712393407_____4;
  int __RANDVAR__75873560844759396346_____4;
  int tmp___27;
  int tmp___28;
  int tmp___29;
  int __RANDVAR__58201951085973112719_____4;
  int __RANDVAR__13844759376760238959_____4;
  int __RANDVAR__66488612657167399743_____4;
  int __RANDVAR__63208616555072126141_____4;
  int __RANDVAR__60240982211775740940_____4;
  int __RANDVAR__32264247020763072941_____4;
  int tmp___30;
  int __RANDVAR__96093444848016043779_____5;
  int __RANDVAR__3058300864712393407_____5;
  int __RANDVAR__75873560844759396346_____5;
  int tmp___31;
  int tmp___32;
  int tmp___33;
  int __RANDVAR__58201951085973112719_____5;
  int __RANDVAR__13844759376760238959_____5;
  int __RANDVAR__66488612657167399743_____5;
  int __RANDVAR__63208616555072126141_____5;
  int __RANDVAR__60240982211775740940_____5;
  int __RANDVAR__32264247020763072941_____5;
  int __RANDVAR__96093444848016043779_____6;
  int __RANDVAR__3058300864712393407_____6;
  int __RANDVAR__75873560844759396346_____6;
  int __RANDVAR__58201951085973112719_____6;
  int __RANDVAR__13844759376760238959_____6;
  int __RANDVAR__66488612657167399743_____6;
  int __RANDVAR__63208616555072126141_____6;
  int __RANDVAR__60240982211775740940_____6;
  int __RANDVAR__32264247020763072941_____6;
  int __RANDVAR__8832761854096307175_____0;
  int tmp___34;
  int __RANDVAR__55263576091522368180_____1;
  int tmp___35;
  int __RANDVAR__11076293552336221433_____7;
  int tmp___36;
  int __RANDVAR__11076293552336221433_____8;
  int tmp___37;
  int __RANDVAR__11076293552336221433_____9;
  int __RANDVAR__11076293552336221433_____10;
  int __RANDVAR__89673644462235323434_____1;
  int __RANDVAR__98823270048619348211_____1;
  int tmp___38;
  int __RANDVAR__96093444848016043779_____7;
  int __RANDVAR__3058300864712393407_____7;
  int __RANDVAR__75873560844759396346_____7;
  int tmp___39;
  int tmp___40;
  int tmp___41;
  int __RANDVAR__58201951085973112719_____7;
  int __RANDVAR__13844759376760238959_____7;
  int __RANDVAR__66488612657167399743_____7;
  int __RANDVAR__63208616555072126141_____7;
  int __RANDVAR__60240982211775740940_____7;
  int __RANDVAR__32264247020763072941_____7;
  int tmp___42;
  int __RANDVAR__96093444848016043779_____8;
  int __RANDVAR__3058300864712393407_____8;
  int __RANDVAR__75873560844759396346_____8;
  int tmp___43;
  int tmp___44;
  int tmp___45;
  int __RANDVAR__58201951085973112719_____8;
  int __RANDVAR__13844759376760238959_____8;
  int __RANDVAR__66488612657167399743_____8;
  int __RANDVAR__63208616555072126141_____8;
  int __RANDVAR__60240982211775740940_____8;
  int __RANDVAR__32264247020763072941_____8;
  int tmp___46;
  int __RANDVAR__96093444848016043779_____9;
  int __RANDVAR__3058300864712393407_____9;
  int __RANDVAR__75873560844759396346_____9;
  int tmp___47;
  int tmp___48;
  int tmp___49;
  int __RANDVAR__58201951085973112719_____9;
  int __RANDVAR__13844759376760238959_____9;
  int __RANDVAR__66488612657167399743_____9;
  int __RANDVAR__63208616555072126141_____9;
  int __RANDVAR__60240982211775740940_____9;
  int __RANDVAR__32264247020763072941_____9;
  int __RANDVAR__96093444848016043779_____10;
  int __RANDVAR__3058300864712393407_____10;
  int __RANDVAR__75873560844759396346_____10;
  int __RANDVAR__58201951085973112719_____10;
  int __RANDVAR__13844759376760238959_____10;
  int __RANDVAR__66488612657167399743_____10;
  int __RANDVAR__63208616555072126141_____10;
  int __RANDVAR__60240982211775740940_____10;
  int __RANDVAR__32264247020763072941_____10;
  int __RANDVAR__8832761854096307175_____1;
  int __RANDVAR__55263576091522368180_____2;
  int __RANDVAR__11076293552336221433_____11;
  int __RANDVAR__89673644462235323434_____2;
  int __RANDVAR__98823270048619348211_____2;
  int __RANDVAR__96093444848016043779_____11;
  int __RANDVAR__3058300864712393407_____11;
  int __RANDVAR__75873560844759396346_____11;
  int __RANDVAR__58201951085973112719_____11;
  int __RANDVAR__13844759376760238959_____11;
  int __RANDVAR__66488612657167399743_____11;
  int __RANDVAR__63208616555072126141_____11;
  int __RANDVAR__60240982211775740940_____11;
  int __RANDVAR__32264247020763072941_____11;
  int __RANDVAR__8832761854096307175_____2;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 374UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 893:
        __RANDVAR__3058300864712393407_____10 = 139;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 1008:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 162UL; }
        break;
      case 965:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 307UL; }
        break;
      case 538:
        __RANDVAR__43467388252028873741__ -= 144;
        { _1_OBF_FUNC_next = 961UL; }
        break;
      case 1006:
        __RANDVAR__89673644462235323434_____2 = 12 * (__RANDVAR__29110676504195087284__ + 516);
        { _1_OBF_FUNC_next = 176UL; }
        break;
      case 111:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 449UL; }
        break;
      case 213:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 104UL; }
        } else {
          { _1_OBF_FUNC_next = 774UL; }
        }
        break;
      case 865:
        tmp___30 = rand();
        { _1_OBF_FUNC_next = 507UL; }
        break;
      case 600:
        __RANDVAR__8832761854096307175_____1 = __RANDVAR__43467388252028873741__ * 741 + __RANDVAR__89673644462235323434_____1 * 113;
        { _1_OBF_FUNC_next = 270UL; }
        break;
      case 126:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 833UL; }
        break;
      case 920:
        _index8_0++;
        { _1_OBF_FUNC_next = 597UL; }
        break;
      case 427:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 133UL; }
        break;
      case 750:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 793UL; }
        break;
      case 120:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 931UL; }
        break;
      case 624:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 606UL; }
        break;
      case 343:
        __RANDVAR__3058300864712393407_____7 = 139;
        { _1_OBF_FUNC_next = 684UL; }
        break;
      case 369:
        __RANDVAR__32264247020763072941_____8 = __RANDVAR__96093444848016043779_____8 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 968:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 247UL; }
        } else {
          { _1_OBF_FUNC_next = 252UL; }
        }
        break;
      case 197:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 898UL; }
        break;
      case 1019:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 767UL; }
        break;
      case 917:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 276UL; }
        break;
      case 757:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 672UL; }
        break;
      case 1049:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 956UL; }
        break;
      case 949:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 688UL; }
        } else {
          { _1_OBF_FUNC_next = 738UL; }
        }
        break;
      case 195:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 828UL; }
        break;
      case 242:;
        if (tmp___42 % 10 >= 5) {
          { _1_OBF_FUNC_next = 307UL; }
        } else {
          { _1_OBF_FUNC_next = 655UL; }
        }
        break;
      case 794:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 451UL; }
        } else {
          { _1_OBF_FUNC_next = 862UL; }
        }
        break;
      case 1059:
        __RANDVAR__91060907674129574464_____1 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 642UL; }
        break;
      case 546:
        _index8_0++;
        { _1_OBF_FUNC_next = 885UL; }
        break;
      case 391:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 701UL; }
        break;
      case 1072:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 723UL; }
        break;
      case 1028:
        __RANDVAR__63208616555072126141_____9 = (__RANDVAR__63208616555072126141_____9 * 184) * 1142;
        { _1_OBF_FUNC_next = 965UL; }
        break;
      case 650:;
        if (__RANDVAR__96093444848016043779_____1 < -23) {
          { _1_OBF_FUNC_next = 871UL; }
        } else {
          { _1_OBF_FUNC_next = 783UL; }
        }
        break;
      case 306:
        __RANDVAR__29110676504195087284__ -= 809;
        { _1_OBF_FUNC_next = 872UL; }
        break;
      case 976:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 381UL; }
        } else {
          { _1_OBF_FUNC_next = 265UL; }
        }
        break;
      case 426:;
        if (__RANDVAR__96093444848016043779_____0 * __RANDVAR__98823270048619348211__ + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 517UL; }
        } else {
          { _1_OBF_FUNC_next = 607UL; }
        }
        break;
      case 779:
        tmp___14 = rand();
        { _1_OBF_FUNC_next = 116UL; }
        break;
      case 451:
        tmp___12 = rand();
        { _1_OBF_FUNC_next = 772UL; }
        break;
      case 618:
        __RANDVAR__17917140384409192139_____1 = (__RANDVAR__43467388252028873741__ + 630) - 573 * __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 642UL; }
        break;
      case 740:
        __RANDVAR__97489254228595228575__ = (__RANDVAR__29110676504195087284__ * __RANDVAR__29110676504195087284__) * 420;
        { _1_OBF_FUNC_next = 1044UL; }
        break;
      case 188:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 927UL; }
        } else {
          { _1_OBF_FUNC_next = 777UL; }
        }
        break;
      case 214:
        __RANDVAR__27364710861236684983__ = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 1045UL; }
        break;
      case 401:
        __RANDVAR__11076293552336221433_____0 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 722UL; }
        break;
      case 572:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 988UL; }
        } else {
          { _1_OBF_FUNC_next = 428UL; }
        }
        break;
      case 398:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 239UL; }
        break;
      case 432:
        __RANDVAR__89673644462235323434_____1 = 12 * (__RANDVAR__29110676504195087284__ + 516);
        { _1_OBF_FUNC_next = 526UL; }
        break;
      case 405:;
        if (tmp___45 % 10 >= 5) {
          { _1_OBF_FUNC_next = 428UL; }
        } else {
          { _1_OBF_FUNC_next = 939UL; }
        }
        break;
      case 129:
        __RANDVAR__29110676504195087284__ += 804;
        { _1_OBF_FUNC_next = 111UL; }
        break;
      case 338:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 800UL; }
        break;
      case 1020:
        __RANDVAR__60240982211775740940_____5 = 653;
        { _1_OBF_FUNC_next = 275UL; }
        break;
      case 529:;
        if (tmp___18 % 10 >= 5) {
          { _1_OBF_FUNC_next = 575UL; }
        } else {
          { _1_OBF_FUNC_next = 552UL; }
        }
        break;
      case 39:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 914UL; }
        break;
      case 248:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 268UL; }
        } else {
          { _1_OBF_FUNC_next = 938UL; }
        }
        break;
      case 511:
        __RANDVAR__66488612657167399743__ = 277952;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 416:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 316:
        __RANDVAR__55263576091522368180_____2 = __RANDVAR__55736840103921928706__ * 990 + (__RANDVAR__29110676504195087284__ + 813);
        { _1_OBF_FUNC_next = 577UL; }
        break;
      case 991:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 734UL; }
        break;
      case 446:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 479UL; }
        break;
      case 157:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 564UL; }
        } else {
          { _1_OBF_FUNC_next = 995UL; }
        }
        break;
      case 467:
        __RANDVAR__96093444848016043779_____1 = 237;
        { _1_OBF_FUNC_next = 712UL; }
        break;
      case 543:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1018UL; }
        break;
      case 262:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 693UL; }
        break;
      case 973:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 739UL; }
        } else {
          { _1_OBF_FUNC_next = 868UL; }
        }
        break;
      case 302:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 226UL; }
        break;
      case 710:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 464UL; }
        break;
      case 48:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 751UL; }
        break;
      case 677:
        _index8_0++;
        { _1_OBF_FUNC_next = 452UL; }
        break;
      case 371:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 692UL; }
        } else {
          { _1_OBF_FUNC_next = 238UL; }
        }
        break;
      case 742:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 985:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 277UL; }
        break;
      case 558:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 323UL; }
        break;
      case 1043:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 768UL; }
        break;
      case 452:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 840UL; }
        } else {
          { _1_OBF_FUNC_next = 142UL; }
        }
        break;
      case 881:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 565UL; }
        break;
      case 712:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 650UL; }
        break;
      case 901:
        _index8_0++;
        { _1_OBF_FUNC_next = 640UL; }
        break;
      case 363:
        __RANDVAR__66271423655543667894__ = 86;
        { _1_OBF_FUNC_next = 488UL; }
        break;
      case 167:;
        if (__RANDVAR__55736840103921928706__ < 988) {
          { _1_OBF_FUNC_next = 618UL; }
        } else {
          { _1_OBF_FUNC_next = 1059UL; }
        }
        break;
      case 396:
        _index8_0++;
        { _1_OBF_FUNC_next = 1039UL; }
        break;
      case 999:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 90UL; }
        break;
      case 328:
        __RANDVAR__87512315818333497942__ -= 811;
        { _1_OBF_FUNC_next = 583UL; }
        break;
      case 883:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 36UL; }
        break;
      case 259:
        localStaticState[0UL] = input * 1984782336U;
        { _1_OBF_FUNC_next = 429UL; }
        break;
      case 737:
        __RANDVAR__60240982211775740940_____7 = 653;
        { _1_OBF_FUNC_next = 1048UL; }
        break;
      case 570:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 1001UL; }
        break;
      case 943:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 616UL; }
        break;
      case 138:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 861UL; }
        } else {
          { _1_OBF_FUNC_next = 69UL; }
        }
        break;
      case 611:
        tmp___46 = rand();
        { _1_OBF_FUNC_next = 771UL; }
        break;
      case 63:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 453UL; }
        break;
      case 308:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 1080UL; }
        } else {
          { _1_OBF_FUNC_next = 303UL; }
        }
        break;
      case 392:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 419UL; }
        } else {
          { _1_OBF_FUNC_next = 430UL; }
        }
        break;
      case 692:
        __RANDVAR__14493993532994800908__ = (__RANDVAR__29110676504195087284__ + __RANDVAR__43467388252028873741__) * (__RANDVAR__29110676504195087284__ + __RANDVAR__14493993532994800908__);
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 872:
        __RANDVAR__29110676504195087284__ += 809;
        { _1_OBF_FUNC_next = 888UL; }
        break;
      case 174:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 311UL; }
        } else {
          { _1_OBF_FUNC_next = 603UL; }
        }
        break;
      case 809:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 128UL; }
        break;
      case 36:;
        if (__RANDVAR__29110676504195087284__ * (__RANDVAR__29110676504195087284__ * 146) < 2) {
          { _1_OBF_FUNC_next = 957UL; }
        } else {
          { _1_OBF_FUNC_next = 477UL; }
        }
        break;
      case 682:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 774UL; }
        } else {
          { _1_OBF_FUNC_next = 513UL; }
        }
        break;
      case 1044:;
        if (__RANDVAR__29110676504195087284__ * 889 + __RANDVAR__29110676504195087284__ < 847) {
          { _1_OBF_FUNC_next = 161UL; }
        } else {
          { _1_OBF_FUNC_next = 987UL; }
        }
        break;
      case 696:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 573UL; }
        break;
      case 112:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 944UL; }
        break;
      case 357:
        __RANDVAR__21313973761915495867_____1 = -179376;
        { _1_OBF_FUNC_next = 714UL; }
        break;
      case 487:
        __RANDVAR__55736840103921928706__ -= 273;
        { _1_OBF_FUNC_next = 960UL; }
        break;
      case 849:
        _index8_0++;
        { _1_OBF_FUNC_next = 155UL; }
        break;
      case 1060:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 805UL; }
        break;
      case 231:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 543UL; }
        break;
      case 345:
        __RANDVAR__13844759376760238959_____1 = (__RANDVAR__13844759376760238959_____1 + __RANDVAR__13844759376760238959_____1) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 486UL; }
        break;
      case 1075:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 508UL; }
        break;
      case 649:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 629UL; }
        } else {
          { _1_OBF_FUNC_next = 198UL; }
        }
        break;
      case 298:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 444UL; }
        break;
      case 460:;
        if (__RANDVAR__29110676504195087284__ < 825 + __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 83UL; }
        } else {
          { _1_OBF_FUNC_next = 928UL; }
        }
        break;
      case 224:
        __RANDVAR__13844759376760238959_____6 = (__RANDVAR__13844759376760238959_____6 + __RANDVAR__13844759376760238959_____6) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 716UL; }
        break;
      case 403:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 826UL; }
        break;
      case 494:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 256UL; }
        break;
      case 173:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 784UL; }
        break;
      case 839:
        __RANDVAR__60240982211775740940_____2 = 653;
        { _1_OBF_FUNC_next = 438UL; }
        break;
      case 1066:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 291UL; }
        break;
      case 165:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 205UL; }
        break;
      case 964:
        __RANDVAR__58201951085973112719_____6 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 675UL; }
        break;
      case 550:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 106UL; }
        break;
      case 456:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next = 619UL; }
        } else {
          { _1_OBF_FUNC_next = 42UL; }
        }
        break;
      case 384:
        __RANDVAR__66488612657167399743_____3 = 277952;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 219:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 999UL; }
        break;
      case 637:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 288UL; }
        break;
      case 18:
        tmp___29 = rand();
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 781:
        __RANDVAR__63208616555072126141_____1 = (__RANDVAR__63208616555072126141_____1 * 184) * 1142;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 868:;
        if (__RANDVAR__29110676504195087284__ < 825 + __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 691UL; }
        } else {
          { _1_OBF_FUNC_next = 785UL; }
        }
        break;
      case 638:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 431UL; }
        break;
      case 708:
        tmp___39 = rand();
        { _1_OBF_FUNC_next = 266UL; }
        break;
      case 639:;
        if (tmp___23 % 10 >= 5) {
          { _1_OBF_FUNC_next = 1067UL; }
        } else {
          { _1_OBF_FUNC_next = 119UL; }
        }
        break;
      case 694:;
        if (tmp___19 % 10 >= 5) {
          { _1_OBF_FUNC_next = 392UL; }
        } else {
          { _1_OBF_FUNC_next = 524UL; }
        }
        break;
      case 953:
        __RANDVAR__29110676504195087284__ += 809;
        { _1_OBF_FUNC_next = 883UL; }
        break;
      case 47:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 190UL; }
        break;
      case 69:
        __RANDVAR__29110676504195087284__ -= 809;
        { _1_OBF_FUNC_next = 953UL; }
        break;
      case 73:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 746UL; }
        } else {
          { _1_OBF_FUNC_next = 20UL; }
        }
        break;
      case 59:
        __RANDVAR__58201951085973112719_____4 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 424UL; }
        break;
      case 921:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 511UL; }
        } else {
          { _1_OBF_FUNC_next = 935UL; }
        }
        break;
      case 447:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 531UL; }
        break;
      case 420:
        __RANDVAR__43467388252028873741__ += 644;
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 705:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 879UL; }
        } else {
          { _1_OBF_FUNC_next = 306UL; }
        }
        break;
      case 520:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 563UL; }
        break;
      case 695:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 457UL; }
        break;
      case 854:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 690:
        __RANDVAR__72830948378492768065__ = 627;
        { _1_OBF_FUNC_next = 873UL; }
        break;
      case 177:;
        if (tmp___10 % 10 >= 5) {
          { _1_OBF_FUNC_next = 265UL; }
        } else {
          { _1_OBF_FUNC_next = 72UL; }
        }
        break;
      case 994:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 906UL; }
        break;
      case 567:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 254UL; }
        break;
      case 534:;
        if (tmp___40 % 10 >= 5) {
          { _1_OBF_FUNC_next = 930UL; }
        } else {
          { _1_OBF_FUNC_next = 358UL; }
        }
        break;
      case 584:
        __RANDVAR__75873560844759396346_____2 = __RANDVAR__98823270048619348211__;
        { _1_OBF_FUNC_next = 1039UL; }
        break;
      case 381:
        tmp___10 = rand();
        { _1_OBF_FUNC_next = 177UL; }
        break;
      case 604:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 636UL; }
        break;
      case 667:
        __RANDVAR__3058300864712393407_____2 = 139;
        { _1_OBF_FUNC_next = 1039UL; }
        break;
      case 193:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 360UL; }
        break;
      case 296:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 996UL; }
        break;
      case 194:
        __RANDVAR__55736840103921928706__ -= 273;
        { _1_OBF_FUNC_next = 1074UL; }
        break;
      case 322:;
        if (__RANDVAR__29110676504195087284__ * (__RANDVAR__29110676504195087284__ * 146) < 2) {
          { _1_OBF_FUNC_next = 899UL; }
        } else {
          { _1_OBF_FUNC_next = 850UL; }
        }
        break;
      case 1029:
        _index2_0++;
        { _1_OBF_FUNC_next = 285UL; }
        break;
      case 575:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 99UL; }
        } else {
          { _1_OBF_FUNC_next = 285UL; }
        }
        break;
      case 80:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 184UL; }
        break;
      case 44:
        tmp___11 = rand();
        { _1_OBF_FUNC_next = 433UL; }
        break;
      case 607:
        __RANDVAR__60240982211775740940_____0 = 653;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 444:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 316UL; }
        break;
      case 993:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 223UL; }
        break;
      case 291:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 920UL; }
        break;
      case 151:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 753UL; }
        break;
      case 104:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 682UL; }
        break;
      case 760:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 1062UL; }
        } else {
          { _1_OBF_FUNC_next = 876UL; }
        }
        break;
      case 714:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 699UL; }
        break;
      case 406:
        tmp___18 = rand();
        { _1_OBF_FUNC_next = 529UL; }
        break;
      case 164:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 360:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 136:
        __RANDVAR__60240982211775740940_____8 = 653;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 626:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 210:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 755UL; }
        break;
      case 46:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 514:;
        if (tmp___35 % 10 >= 5) {
          { _1_OBF_FUNC_next = 996UL; }
        } else {
          { _1_OBF_FUNC_next = 909UL; }
        }
        break;
      case 875:
        __RANDVAR__66488612657167399743_____1 = 277952;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 982:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 811UL; }
        } else {
          { _1_OBF_FUNC_next = 25UL; }
        }
        break;
      case 153:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 619UL; }
        break;
      case 662:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 163UL; }
        break;
      case 606:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 174UL; }
        break;
      case 26:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 401UL; }
        } else {
          { _1_OBF_FUNC_next = 590UL; }
        }
        break;
      case 506:;
        if (tmp___15 % 10 >= 5) {
          { _1_OBF_FUNC_next = 155UL; }
        } else {
          { _1_OBF_FUNC_next = 86UL; }
        }
        break;
      case 751:;
        if (__RANDVAR__96093444848016043779_____3 < -23) {
          { _1_OBF_FUNC_next = 159UL; }
        } else {
          { _1_OBF_FUNC_next = 653UL; }
        }
        break;
      case 443:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 786UL; }
        break;
      case 119:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 559UL; }
        break;
      case 1040:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 780UL; }
        break;
      case 586:
        __RANDVAR__3058300864712393407_____5 = 139;
        { _1_OBF_FUNC_next = 452UL; }
        break;
      case 402:
        __RANDVAR__58201951085973112719_____2 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 962UL; }
        break;
      case 846:;
        if (tmp___31 % 10 >= 5) {
          { _1_OBF_FUNC_next = 142UL; }
        } else {
          { _1_OBF_FUNC_next = 154UL; }
        }
        break;
      case 739:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 868UL; }
        break;
      case 505:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 709UL; }
        break;
      case 566:
        tmp___41 = rand();
        { _1_OBF_FUNC_next = 555UL; }
        break;
      case 583:
        __RANDVAR__87512315818333497942__ += 811;
        { _1_OBF_FUNC_next = 1044UL; }
        break;
      case 940:
        _index8_0++;
        { _1_OBF_FUNC_next = 222UL; }
        break;
      case 773:
        __RANDVAR__63208616555072126141_____0 = (__RANDVAR__63208616555072126141_____0 * 184) * 1142;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 969:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 585UL; }
        break;
      case 929:
        __RANDVAR__53082032177962287082__ = 424;
        { _1_OBF_FUNC_next = 259UL; }
        break;
      case 899:
        __RANDVAR__55736840103921928706__ += 273;
        { _1_OBF_FUNC_next = 471UL; }
        break;
      case 419:
        tmp___20 = rand();
        { _1_OBF_FUNC_next = 472UL; }
        break;
      case 1054:
        __RANDVAR__32264247020763072941_____3 = __RANDVAR__96093444848016043779_____3 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 411:
        __RANDVAR__66488612657167399743_____5 = 277952;
        { _1_OBF_FUNC_next = 275UL; }
        break;
      case 31:;
        if (__RANDVAR__29110676504195087284__ < 825 + __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 1078UL; }
        } else {
          { _1_OBF_FUNC_next = 167UL; }
        }
        break;
      case 41:
        __RANDVAR__63208616555072126141_____10 = (__RANDVAR__63208616555072126141_____10 * 184) * 1142;
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 874:
        __RANDVAR__43467388252028873741__ = 162;
        { _1_OBF_FUNC_next = 614UL; }
        break;
      case 292:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next = 8UL; }
        } else {
          { _1_OBF_FUNC_next = 810UL; }
        }
        break;
      case 683:
        __RANDVAR__60240982211775740940_____4 = 653;
        { _1_OBF_FUNC_next = 397UL; }
        break;
      case 1005:
        __RANDVAR__89673644462235323434__ = 12 * (__RANDVAR__29110676504195087284__ + 516);
        { _1_OBF_FUNC_next = 138UL; }
        break;
      case 800:
        _index8_0++;
        { _1_OBF_FUNC_next = 1046UL; }
        break;
      case 301:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 284UL; }
        break;
      case 860:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 305:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 765UL; }
        break;
      case 226:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 112UL; }
        break;
      case 110:
        __RANDVAR__43467388252028873741__ += 144;
        { _1_OBF_FUNC_next = 538UL; }
        break;
      case 339:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 265UL; }
        break;
      case 966:
        __RANDVAR__58201951085973112719__ = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 215UL; }
        break;
      case 441:
        _index8_0++;
        { _1_OBF_FUNC_next = 428UL; }
        break;
      case 1011:
        __RANDVAR__98823270048619348211_____2 += 334;
        { _1_OBF_FUNC_next = 12UL; }
        break;
      case 205:
        _index8_0++;
        { _1_OBF_FUNC_next = 1055UL; }
        break;
      case 490:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 634UL; }
        break;
      case 211:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 426UL; }
        } else {
          { _1_OBF_FUNC_next = 84UL; }
        }
        break;
      case 640:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 18UL; }
        } else {
          { _1_OBF_FUNC_next = 500UL; }
        }
        break;
      case 1074:
        _index2_0++;
        { _1_OBF_FUNC_next = 805UL; }
        break;
      case 249:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 560UL; }
        break;
      case 333:
        __RANDVAR__21313973761915495867_____2 = -179376;
        { _1_OBF_FUNC_next = 1019UL; }
        break;
      case 148:
        __RANDVAR__32264247020763072941_____11 = __RANDVAR__96093444848016043779_____11 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 989UL; }
        break;
      case 996:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 924UL; }
        }
        break;
      case 62:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 15UL; }
        break;
      case 960:
        _index2_0++;
        { _1_OBF_FUNC_next = 556UL; }
        break;
      case 992:
        __RANDVAR__91060907674129574464__ = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 1008UL; }
        break;
      case 672:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 1057UL; }
        break;
      case 238:
        __RANDVAR__43467388252028873741__ -= 596;
        { _1_OBF_FUNC_next = 770UL; }
        break;
      case 495:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 413UL; }
        break;
      case 897:
        _index8_0++;
        { _1_OBF_FUNC_next = 437UL; }
        break;
      case 701:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 897UL; }
        break;
      case 56:
        tmp___8 = rand();
        { _1_OBF_FUNC_next = 450UL; }
        break;
      case 455:
        __RANDVAR__21313973761915495867__ = -179376;
        { _1_OBF_FUNC_next = 488UL; }
        break;
      case 771:;
        if (tmp___46 % 10 >= 5) {
          { _1_OBF_FUNC_next = 32UL; }
        } else {
          { _1_OBF_FUNC_next = 945UL; }
        }
        break;
      case 1003:
        __RANDVAR__55263576091522368180_____1 = __RANDVAR__55736840103921928706__ * 990 + (__RANDVAR__29110676504195087284__ + 813);
        { _1_OBF_FUNC_next = 826UL; }
        break;
      case 630:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1053UL; }
        break;
      case 361:
        _index8_0++;
        { _1_OBF_FUNC_next = 1067UL; }
        break;
      case 354:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 1012UL; }
        break;
      case 741:
        __RANDVAR__75873560844759396346_____10 = __RANDVAR__98823270048619348211_____1;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 252:
        __RANDVAR__32264247020763072941_____1 = __RANDVAR__96093444848016043779_____1 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 768:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 1051UL; }
        } else {
          { _1_OBF_FUNC_next = 304UL; }
        }
        break;
      case 792:
        __RANDVAR__3058300864712393407__ = 139;
        { _1_OBF_FUNC_next = 227UL; }
        break;
      case 239:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 336:;
        if (tmp___9 % 10 >= 5) {
          { _1_OBF_FUNC_next = 938UL; }
        } else {
          { _1_OBF_FUNC_next = 217UL; }
        }
        break;
      case 526:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 110UL; }
        } else {
          { _1_OBF_FUNC_next = 348UL; }
        }
        break;
      case 711:
        __RANDVAR__98823270048619348211_____2 = __RANDVAR__43467388252028873741__ - __RANDVAR__55736840103921928706__ * 185;
        { _1_OBF_FUNC_next = 235UL; }
        break;
      case 24:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 754UL; }
        } else {
          { _1_OBF_FUNC_next = 1028UL; }
        }
        break;
      case 895:
        __RANDVAR__98823270048619348211_____1 = __RANDVAR__43467388252028873741__ - __RANDVAR__55736840103921928706__ * 185;
        { _1_OBF_FUNC_next = 1036UL; }
        break;
      case 17:
        __RANDVAR__55736840103921928706__ = 23;
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 374:
        __RANDVAR__29110676504195087284__++;
        { _1_OBF_FUNC_next = 874UL; }
        break;
      case 19:
        __RANDVAR__75873560844759396346_____8 = __RANDVAR__98823270048619348211_____1;
        { _1_OBF_FUNC_next = 649UL; }
        break;
      case 93:
        tmp___24 = rand();
        { _1_OBF_FUNC_next = 670UL; }
        break;
      case 838:
        __RANDVAR__29110676504195087284__ += 804;
        { _1_OBF_FUNC_next = 725UL; }
        break;
      case 478:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 728UL; }
        break;
      case 759:;
        if (tmp___21 % 10 >= 5) {
          { _1_OBF_FUNC_next = 755UL; }
        } else {
          { _1_OBF_FUNC_next = 881UL; }
        }
        break;
      case 269:
        __RANDVAR__63208616555072126141_____4 = (__RANDVAR__63208616555072126141_____4 * 184) * 1142;
        { _1_OBF_FUNC_next = 397UL; }
        break;
      case 215:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 946UL; }
        } else {
          { _1_OBF_FUNC_next = 408UL; }
        }
        break;
      case 628:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 384UL; }
        } else {
          { _1_OBF_FUNC_next = 379UL; }
        }
        break;
      case 37:
        __RANDVAR__75873560844759396346_____9 = __RANDVAR__98823270048619348211_____1;
        { _1_OBF_FUNC_next = 437UL; }
        break;
      case 658:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 907UL; }
        break;
      case 323:
        __RANDVAR__98823270048619348211__ = __RANDVAR__43467388252028873741__ - __RANDVAR__55736840103921928706__ * 185;
        { _1_OBF_FUNC_next = 181UL; }
        break;
      case 450:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next = 248UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 307:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 611UL; }
        } else {
          { _1_OBF_FUNC_next = 32UL; }
        }
        break;
      case 348:
        __RANDVAR__29110676504195087284__ -= 809;
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 654:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 309UL; }
        break;
      case 1064:
        __RANDVAR__75873560844759396346_____4 = __RANDVAR__98823270048619348211_____0;
        { _1_OBF_FUNC_next = 760UL; }
        break;
      case 851:;
        if (__RANDVAR__96093444848016043779_____2 * __RANDVAR__98823270048619348211__ + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 415UL; }
        } else {
          { _1_OBF_FUNC_next = 839UL; }
        }
        break;
      case 984:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 425UL; }
        break;
      case 527:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 882UL; }
        break;
      case 1058:
        __RANDVAR__43467388252028873741__ += 144;
        { _1_OBF_FUNC_next = 1007UL; }
        break;
      case 890:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 979UL; }
        break;
      case 916:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 679UL; }
        break;
      case 934:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 411UL; }
        } else {
          { _1_OBF_FUNC_next = 902UL; }
        }
        break;
      case 715:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 186UL; }
        break;
      case 530:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 335UL; }
        break;
      case 317:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 621UL; }
        break;
      case 688:;
        if (__RANDVAR__96093444848016043779_____10 * __RANDVAR__98823270048619348211_____1 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 685UL; }
        } else {
          { _1_OBF_FUNC_next = 6UL; }
        }
        break;
      case 289:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 852UL; }
        break;
      case 803:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 185UL; }
        break;
      case 161:
        __RANDVAR__75324692762879291886__++;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 175:;
        if (__RANDVAR__96093444848016043779_____3 * __RANDVAR__98823270048619348211_____0 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 733UL; }
        } else {
          { _1_OBF_FUNC_next = 736UL; }
        }
        break;
      case 652:
        __RANDVAR__32264247020763072941_____2 = __RANDVAR__96093444848016043779_____2 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 438UL; }
        break;
      case 297:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 990UL; }
        break;
      case 1039:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 77UL; }
        } else {
          { _1_OBF_FUNC_next = 678UL; }
        }
        break;
      case 1016:
        _index8_0++;
        { _1_OBF_FUNC_next = 649UL; }
        break;
      case 810:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 446UL; }
        break;
      case 29:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 168UL; }
        break;
      case 793:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 827UL; }
        break;
      case 504:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 984UL; }
        break;
      case 891:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 287UL; }
        } else {
          { _1_OBF_FUNC_next = 261UL; }
        }
        break;
      case 1012:;
        if (__RANDVAR__96093444848016043779_____7 < -23) {
          { _1_OBF_FUNC_next = 343UL; }
        } else {
          { _1_OBF_FUNC_next = 533UL; }
        }
        break;
      case 32:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 204UL; }
        } else {
          { _1_OBF_FUNC_next = 348UL; }
        }
        break;
      case 1009:
        _index8_0++;
        { _1_OBF_FUNC_next = 760UL; }
        break;
      case 53:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 393:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 518UL; }
        break;
      case 785:;
        if (__RANDVAR__55736840103921928706__ < 988) {
          { _1_OBF_FUNC_next = 377UL; }
        } else {
          { _1_OBF_FUNC_next = 300UL; }
        }
        break;
      case 975:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 493UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 1071:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 187UL; }
        } else {
          { _1_OBF_FUNC_next = 234UL; }
        }
        break;
      case 189:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 768UL; }
        break;
      case 244:
        __RANDVAR__63208616555072126141_____7 = (__RANDVAR__63208616555072126141_____7 * 184) * 1142;
        { _1_OBF_FUNC_next = 1048UL; }
        break;
      case 1013:
        _index8_0++;
        { _1_OBF_FUNC_next = 684UL; }
        break;
      case 935:
        __RANDVAR__63208616555072126141__ = (__RANDVAR__63208616555072126141__ * 184) * 1142;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 850:
        __RANDVAR__8832761854096307175_____2 = __RANDVAR__43467388252028873741__ * 741 + __RANDVAR__89673644462235323434_____2 * 113;
        { _1_OBF_FUNC_next = 1029UL; }
        break;
      case 5:
        tmp___19 = rand();
        { _1_OBF_FUNC_next = 694UL; }
        break;
      case 774:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 115UL; }
        } else {
          { _1_OBF_FUNC_next = 619UL; }
        }
        break;
      case 647:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 364UL; }
        break;
      case 181:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 243UL; }
        break;
      case 585:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 680UL; }
        break;
      case 170:
        __RANDVAR__13844759376760238959__ = (__RANDVAR__13844759376760238959__ + __RANDVAR__13844759376760238959__) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 921UL; }
        break;
      case 724:
        tmp___26 = rand();
        { _1_OBF_FUNC_next = 253UL; }
        break;
      case 89:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 706UL; }
        break;
      case 311:
        __RANDVAR__11076293552336221433_____10 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 160UL; }
        break;
      case 513:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 1023UL; }
        break;
      case 855:
        __RANDVAR__66488612657167399743_____6 = 277952;
        { _1_OBF_FUNC_next = 587UL; }
        break;
      case 439:;
        if (tmp___33 % 10 >= 5) {
          { _1_OBF_FUNC_next = 610UL; }
        } else {
          { _1_OBF_FUNC_next = 219UL; }
        }
        break;
      case 782:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 717UL; }
        break;
      case 962:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 851UL; }
        } else {
          { _1_OBF_FUNC_next = 652UL; }
        }
        break;
      case 332:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 530UL; }
        break;
      case 276:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 1060UL; }
        break;
      case 321:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 1032UL; }
        break;
      case 117:
        __RANDVAR__66488612657167399743_____7 = 277952;
        { _1_OBF_FUNC_next = 1048UL; }
        break;
      case 42:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 630UL; }
        break;
      case 717:;
        if (__RANDVAR__29110676504195087284__ * (__RANDVAR__29110676504195087284__ * 146) < 2) {
          { _1_OBF_FUNC_next = 576UL; }
        } else {
          { _1_OBF_FUNC_next = 600UL; }
        }
        break;
      case 797:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 976UL; }
        break;
      case 33:
        _index8_0++;
        { _1_OBF_FUNC_next = 248UL; }
        break;
      case 43:
        __RANDVAR__43467388252028873741__ += 137;
        { _1_OBF_FUNC_next = 1068UL; }
        break;
      case 927:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 593UL; }
        break;
      case 192:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 63UL; }
        } else {
          { _1_OBF_FUNC_next = 213UL; }
        }
        break;
      case 102:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 719UL; }
        break;
      case 684:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 708UL; }
        } else {
          { _1_OBF_FUNC_next = 207UL; }
        }
        break;
      case 74:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 778UL; }
        break;
      case 473:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 822UL; }
        break;
      case 147:
        __RANDVAR__11076293552336221433_____4 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 727:
        __RANDVAR__43467388252028873741__ -= 144;
        { _1_OBF_FUNC_next = 998UL; }
        break;
      case 561:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 175UL; }
        } else {
          { _1_OBF_FUNC_next = 1054UL; }
        }
        break;
      case 106:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 96UL; }
        } else {
          { _1_OBF_FUNC_next = 993UL; }
        }
        break;
      case 77:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 340UL; }
        break;
      case 938:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 68UL; }
        } else {
          { _1_OBF_FUNC_next = 221UL; }
        }
        break;
      case 573:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 361UL; }
        break;
      case 956:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 932UL; }
        break;
      case 225:
        __RANDVAR__63208616555072126141_____2 = (__RANDVAR__63208616555072126141_____2 * 184) * 1142;
        { _1_OBF_FUNC_next = 438UL; }
        break;
      case 795:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 293UL; }
        } else {
          { _1_OBF_FUNC_next = 269UL; }
        }
        break;
      case 309:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1061UL; }
        break;
      case 989:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 399UL; }
        break;
      case 655:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 504UL; }
        break;
      case 944:
        _index8_0++;
        { _1_OBF_FUNC_next = 198UL; }
        break;
      case 1032:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 417UL; }
        break;
      case 522:
        __RANDVAR__29110676504195087284__ += 804;
        { _1_OBF_FUNC_next = 11UL; }
        break;
      case 440:;
        if (tmp___37 % 10 >= 5) {
          { _1_OBF_FUNC_next = 702UL; }
        } else {
          { _1_OBF_FUNC_next = 496UL; }
        }
        break;
      case 691:
        __RANDVAR__27212846635821537647_____0 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 809UL; }
        break;
      case 747:;
        if (__RANDVAR__96093444848016043779_____6 * __RANDVAR__98823270048619348211_____0 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 224UL; }
        } else {
          { _1_OBF_FUNC_next = 959UL; }
        }
        break;
      case 502:;
        if (__RANDVAR__96093444848016043779_____5 * __RANDVAR__98823270048619348211_____0 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 721UL; }
        } else {
          { _1_OBF_FUNC_next = 1020UL; }
        }
        break;
      case 0:
        _index8_0++;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 16:;
        if (tmp___48 % 10 >= 5) {
          { _1_OBF_FUNC_next = 20UL; }
        } else {
          { _1_OBF_FUNC_next = 896UL; }
        }
        break;
      case 143:
        __RANDVAR__32264247020763072941_____6 = __RANDVAR__96093444848016043779_____6 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 587UL; }
        break;
      case 915:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 396UL; }
        break;
      case 597:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 290UL; }
        } else {
          { _1_OBF_FUNC_next = 65UL; }
        }
        break;
      case 243:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 260UL; }
        } else {
          { _1_OBF_FUNC_next = 976UL; }
        }
        break;
      case 1055:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 967UL; }
        } else {
          { _1_OBF_FUNC_next = 1015UL; }
        }
        break;
      case 641:
        __RANDVAR__60240982211775740940_____1 = 653;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 559:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 229UL; }
        break;
      case 680:
        __RANDVAR__96093444848016043779_____9 = 237;
        { _1_OBF_FUNC_next = 74UL; }
        break;
      case 959:
        __RANDVAR__60240982211775740940_____6 = 653;
        { _1_OBF_FUNC_next = 587UL; }
        break;
      case 853:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 412UL; }
        break;
      case 544:
        __RANDVAR__55263576091522368180__ = __RANDVAR__55736840103921928706__ * 990 + (__RANDVAR__29110676504195087284__ + 813);
        { _1_OBF_FUNC_next = 192UL; }
        break;
      case 728:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 604UL; }
        break;
      case 910:
        __RANDVAR__43917346718694078359__ = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 730UL; }
        break;
      case 496:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 447UL; }
        break;
      case 1046:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 454UL; }
        } else {
          { _1_OBF_FUNC_next = 891UL; }
        }
        break;
      case 482:
        tmp___7 = rand();
        { _1_OBF_FUNC_next = 292UL; }
        break;
      case 145:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 532UL; }
        break;
      case 15:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 498UL; }
        break;
      case 95:
        _index8_0++;
        { _1_OBF_FUNC_next = 207UL; }
        break;
      case 489:;
        if (tmp___32 % 10 >= 5) {
          { _1_OBF_FUNC_next = 569UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 926:
        __RANDVAR__11076293552336221433_____1 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 101UL; }
        break;
      case 109:
        __RANDVAR__91060907674129574464_____2 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 567UL; }
        break;
      case 25:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 331UL; }
        break;
      case 137:
        tmp___16 = rand();
        { _1_OBF_FUNC_next = 758UL; }
        break;
      case 1073:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 231UL; }
        break;
      case 1047:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 325UL; }
        break;
      case 351:
        __RANDVAR__66271423655543667894_____2 = 86;
        { _1_OBF_FUNC_next = 1019UL; }
        break;
      case 105:
        tmp___21 = rand();
        { _1_OBF_FUNC_next = 759UL; }
        break;
      case 474:
        __RANDVAR__55736840103921928706__ -= 273;
        { _1_OBF_FUNC_next = 270UL; }
        break;
      case 1045:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__27364710861236684983__) {
          { _1_OBF_FUNC_next = 910UL; }
        } else {
          { _1_OBF_FUNC_next = 971UL; }
        }
        break;
      case 286:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 278UL; }
        }
        break;
      case 185:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 5UL; }
        } else {
          { _1_OBF_FUNC_next = 392UL; }
        }
        break;
      case 772:;
        if (tmp___12 % 10 >= 5) {
          { _1_OBF_FUNC_next = 862UL; }
        } else {
          { _1_OBF_FUNC_next = 320UL; }
        }
        break;
      case 83:
        __RANDVAR__27212846635821537647_____2 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 567UL; }
        break;
      case 118:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 544UL; }
        break;
      case 190:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 817UL; }
        break;
      case 693:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 279UL; }
        break;
      case 500:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 126UL; }
        } else {
          { _1_OBF_FUNC_next = 916UL; }
        }
        break;
      case 1014:
        __RANDVAR__75873560844759396346_____0 = __RANDVAR__98823270048619348211__;
        { _1_OBF_FUNC_next = 666UL; }
        break;
      case 133:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 913UL; }
        break;
      case 763:
        _index8_0++;
        { _1_OBF_FUNC_next = 286UL; }
        break;
      case 981:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 303UL; }
        } else {
          { _1_OBF_FUNC_next = 877UL; }
        }
        break;
      case 341:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 825UL; }
        break;
      case 564:
        __RANDVAR__66488612657167399743_____11 = 277952;
        { _1_OBF_FUNC_next = 989UL; }
        break;
      case 1035:
        __RANDVAR__32264247020763072941_____5 = __RANDVAR__96093444848016043779_____5 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 275UL; }
        break;
      case 6:
        __RANDVAR__60240982211775740940_____10 = 653;
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 786:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 626UL; }
        break;
      case 275:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 807UL; }
        break;
      case 329:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 441UL; }
        break;
      case 699:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 582UL; }
        } else {
          { _1_OBF_FUNC_next = 767UL; }
        }
        break;
      case 906:
        _index8_0++;
        { _1_OBF_FUNC_next = 572UL; }
        break;
      case 92:
        __RANDVAR__63208616555072126141_____8 = (__RANDVAR__63208616555072126141_____8 * 184) * 1142;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 284:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 964UL; }
        break;
      case 158:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 2118568387U);
        break;
      case 122:;
        if (tmp___49 % 10 >= 5) {
          { _1_OBF_FUNC_next = 597UL; }
        } else {
          { _1_OBF_FUNC_next = 478UL; }
        }
        break;
      case 315:
        tmp___15 = rand();
        { _1_OBF_FUNC_next = 506UL; }
        break;
      case 805:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 1033UL; }
        } else {
          { _1_OBF_FUNC_next = 556UL; }
        }
        break;
      case 983:
        __RANDVAR__66488612657167399743_____2 = 277952;
        { _1_OBF_FUNC_next = 438UL; }
        break;
      case 1015:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 700UL; }
        break;
      case 755:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 195UL; }
        } else {
          { _1_OBF_FUNC_next = 620UL; }
        }
        break;
      case 784:
        __RANDVAR__58201951085973112719_____3 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 561UL; }
        break;
      case 1002:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 312UL; }
        break;
      case 477:
        __RANDVAR__8832761854096307175__ = __RANDVAR__43467388252028873741__ * 741 + __RANDVAR__89673644462235323434__ * 113;
        { _1_OBF_FUNC_next = 1074UL; }
        break;
      case 1001:
        _index0_2 = 0U;
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 778:;
        if (__RANDVAR__96093444848016043779_____9 < -23) {
          { _1_OBF_FUNC_next = 761UL; }
        } else {
          { _1_OBF_FUNC_next = 37UL; }
        }
        break;
      case 483:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 1027UL; }
        } else {
          { _1_OBF_FUNC_next = 306UL; }
        }
        break;
      case 184:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 966UL; }
        break;
      case 642:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 857UL; }
        break;
      case 674:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 113UL; }
        break;
      case 802:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 763UL; }
        break;
      case 557:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1010UL; }
        break;
      case 614:
        __RANDVAR__87512315818333497942__ = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 386UL; }
        break;
      case 294:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 468UL; }
        } else {
          { _1_OBF_FUNC_next = 148UL; }
        }
        break;
      case 744:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 301UL; }
        break;
      case 362:;
        if (__RANDVAR__96093444848016043779__ < -23) {
          { _1_OBF_FUNC_next = 792UL; }
        } else {
          { _1_OBF_FUNC_next = 704UL; }
        }
        break;
      case 807:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 865UL; }
        } else {
          { _1_OBF_FUNC_next = 483UL; }
        }
        break;
      case 595:
        tmp___44 = rand();
        { _1_OBF_FUNC_next = 756UL; }
        break;
      case 64:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 520UL; }
        break;
      case 464:
        __RANDVAR__96093444848016043779_____7 = 237;
        { _1_OBF_FUNC_next = 354UL; }
        break;
      case 1007:
        __RANDVAR__43467388252028873741__ -= 144;
        { _1_OBF_FUNC_next = 470UL; }
        break;
      case 327:
        tmp___47 = rand();
        { _1_OBF_FUNC_next = 592UL; }
        break;
      case 272:
        _index8_0++;
        { _1_OBF_FUNC_next = 859UL; }
        break;
      case 734:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 849UL; }
        break;
      case 524:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 218UL; }
        break;
      case 765:
        __RANDVAR__98823270048619348211_____0 = __RANDVAR__43467388252028873741__ - __RANDVAR__55736840103921928706__ * 185;
        { _1_OBF_FUNC_next = 1043UL; }
        break;
      case 146:
        __RANDVAR__43467388252028873741__ -= 644;
        { _1_OBF_FUNC_next = 420UL; }
        break;
      case 247:;
        if (__RANDVAR__96093444848016043779_____1 * __RANDVAR__98823270048619348211__ + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 345UL; }
        } else {
          { _1_OBF_FUNC_next = 641UL; }
        }
        break;
      case 967:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 818UL; }
        break;
      case 422:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 423UL; }
        break;
      case 1010:
        _index8_0++;
        { _1_OBF_FUNC_next = 188UL; }
        break;
      case 116:;
        if (tmp___14 % 10 >= 5) {
          { _1_OBF_FUNC_next = 775UL; }
        } else {
          { _1_OBF_FUNC_next = 393UL; }
        }
        break;
      case 578:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 243UL; }
        break;
      case 271:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 502UL; }
        } else {
          { _1_OBF_FUNC_next = 1035UL; }
        }
        break;
      case 686:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 362UL; }
        break;
      case 577:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 492UL; }
        } else {
          { _1_OBF_FUNC_next = 1006UL; }
        }
        break;
      case 1078:
        __RANDVAR__27212846635821537647_____1 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 642UL; }
        break;
      case 861:
        __RANDVAR__43467388252028873741__ += 144;
        { _1_OBF_FUNC_next = 390UL; }
        break;
      case 488:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 101:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 774UL; }
        break;
      case 937:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 199UL; }
        } else {
          { _1_OBF_FUNC_next = 92UL; }
        }
        break;
      case 605:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 982UL; }
        break;
      case 719:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 356UL; }
        break;
      case 515:
        __RANDVAR__11076293552336221433_____8 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 296UL; }
        break;
      case 204:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 900UL; }
        break;
      case 472:;
        if (tmp___20 % 10 >= 5) {
          { _1_OBF_FUNC_next = 430UL; }
        } else {
          { _1_OBF_FUNC_next = 657UL; }
        }
        break;
      case 840:
        tmp___31 = rand();
        { _1_OBF_FUNC_next = 846UL; }
        break;
      case 479:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 887UL; }
        break;
      case 919:
        __RANDVAR__58201951085973112719_____5 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 271UL; }
        break;
      case 90:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 656UL; }
        break;
      case 894:
        __RANDVAR__3058300864712393407_____11 = 139;
        { _1_OBF_FUNC_next = 400UL; }
        break;
      case 433:;
        if (tmp___11 % 10 >= 5) {
          { _1_OBF_FUNC_next = 794UL; }
        } else {
          { _1_OBF_FUNC_next = 713UL; }
        }
        break;
      case 142:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 70UL; }
        } else {
          { _1_OBF_FUNC_next = 569UL; }
        }
        break;
      case 576:
        __RANDVAR__55736840103921928706__ += 273;
        { _1_OBF_FUNC_next = 474UL; }
        break;
      case 643:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 742UL; }
        break;
      case 512:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 193UL; }
        break;
      case 429:
        localStaticState[1UL] = input - 761529717U;
        { _1_OBF_FUNC_next = 547UL; }
        break;
      case 820:
        __RANDVAR__32264247020763072941_____4 = __RANDVAR__96093444848016043779_____4 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 397UL; }
        break;
      case 493:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 31UL; }
        break;
      case 320:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 317UL; }
        break;
      case 845:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 436UL; }
        break;
      case 186:;
        if (__RANDVAR__96093444848016043779_____4 < -23) {
          { _1_OBF_FUNC_next = 246UL; }
        } else {
          { _1_OBF_FUNC_next = 1064UL; }
        }
        break;
      case 1052:;
        if (tmp___27 % 10 >= 5) {
          { _1_OBF_FUNC_next = 876UL; }
        } else {
          { _1_OBF_FUNC_next = 50UL; }
        }
        break;
      case 979:
        _index8_0++;
        { _1_OBF_FUNC_next = 666UL; }
        break;
      case 623:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 1UL; }
        break;
      case 789:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 35UL; }
        break;
      case 436:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 210UL; }
        break;
      case 1051:
        tmp___22 = rand();
        { _1_OBF_FUNC_next = 353UL; }
        break;
      case 885:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 540UL; }
        } else {
          { _1_OBF_FUNC_next = 832UL; }
        }
        break;
      case 465:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 654UL; }
        break;
      case 1070:
        __RANDVAR__55263576091522368180_____0 = __RANDVAR__55736840103921928706__ * 990 + (__RANDVAR__29110676504195087284__ + 813);
        { _1_OBF_FUNC_next = 185UL; }
        break;
      case 30:
        __RANDVAR__96093444848016043779_____2 = 237;
        { _1_OBF_FUNC_next = 789UL; }
        break;
      case 222:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 180UL; }
        } else {
          { _1_OBF_FUNC_next = 1067UL; }
        }
        break;
      case 729:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 696UL; }
        break;
      case 335:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 346UL; }
        break;
      case 27:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next = 976UL; }
        } else {
          { _1_OBF_FUNC_next = 337UL; }
        }
        break;
      case 1037:;
        if (__RANDVAR__96093444848016043779_____7 * __RANDVAR__98823270048619348211_____1 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 264UL; }
        } else {
          { _1_OBF_FUNC_next = 737UL; }
        }
        break;
      case 288:
        _index8_0++;
        { _1_OBF_FUNC_next = 610UL; }
        break;
      case 4:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 1081:
        __RANDVAR__66271423655543667894_____1 = 86;
        { _1_OBF_FUNC_next = 714UL; }
        break;
      case 166:;
        if (tmp___43 % 10 >= 5) {
          { _1_OBF_FUNC_next = 198UL; }
        } else {
          { _1_OBF_FUNC_next = 661UL; }
        }
        break;
      case 156:
        __RANDVAR__11076293552336221433_____3 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 803UL; }
        break;
      case 990:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 1002UL; }
        break;
      case 358:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 623UL; }
        break;
      case 911:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 994UL; }
        break;
      case 816:
        __RANDVAR__43467388252028873741__ -= 418;
        { _1_OBF_FUNC_next = 612UL; }
        break;
      case 1023:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 1069:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 160UL; }
        break;
      case 340:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 915UL; }
        break;
      case 437:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 327UL; }
        } else {
          { _1_OBF_FUNC_next = 73UL; }
        }
        break;
      case 596:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 141UL; }
        } else {
          { _1_OBF_FUNC_next = 532UL; }
        }
        break;
      case 616:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 803UL; }
        break;
      case 454:
        tmp___17 = rand();
        { _1_OBF_FUNC_next = 764UL; }
        break;
      case 270:
        _index2_0++;
        { _1_OBF_FUNC_next = 575UL; }
        break;
      case 945:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 969UL; }
        break;
      case 873:;
        if (__RANDVAR__29110676504195087284__ + __RANDVAR__29110676504195087284__ < __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 1000UL; }
        } else {
          { _1_OBF_FUNC_next = 668UL; }
        }
        break;
      case 678:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 1047UL; }
        break;
      case 507:;
        if (tmp___30 % 10 >= 5) {
          { _1_OBF_FUNC_next = 483UL; }
        } else {
          { _1_OBF_FUNC_next = 332UL; }
        }
        break;
      case 370:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 711UL; }
        break;
      case 555:;
        if (tmp___41 % 10 >= 5) {
          { _1_OBF_FUNC_next = 885UL; }
        } else {
          { _1_OBF_FUNC_next = 341UL; }
        }
        break;
      case 553:
        __RANDVAR__17917140384409192139_____2 = (__RANDVAR__43467388252028873741__ + 630) - 573 * __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 567UL; }
        break;
      case 139:;
        if (tmp___34 % 10 >= 5) {
          { _1_OBF_FUNC_next = 285UL; }
        } else {
          { _1_OBF_FUNC_next = 644UL; }
        }
        break;
      case 907:;
        if (__RANDVAR__96093444848016043779_____5 < -23) {
          { _1_OBF_FUNC_next = 586UL; }
        } else {
          { _1_OBF_FUNC_next = 954UL; }
        }
        break;
      case 484:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 577UL; }
        break;
      case 932:
        _index8_0++;
        { _1_OBF_FUNC_next = 891UL; }
        break;
      case 569:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 1026UL; }
        } else {
          { _1_OBF_FUNC_next = 610UL; }
        }
        break;
      case 904:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 183UL; }
        break;
      case 568:
        tmp___25 = rand();
        { _1_OBF_FUNC_next = 579UL; }
        break;
      case 811:
        __RANDVAR__11076293552336221433_____11 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 484UL; }
        break;
      case 285:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 132UL; }
        } else {
          { _1_OBF_FUNC_next = 158UL; }
        }
        break;
      case 88:
        localStaticState[0UL] -= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 806:
        tmp___28 = rand();
        { _1_OBF_FUNC_next = 912UL; }
        break;
      case 265:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 779UL; }
        } else {
          { _1_OBF_FUNC_next = 775UL; }
        }
        break;
      case 947:
        __RANDVAR__13844759376760238959_____4 = (__RANDVAR__13844759376760238959_____4 + __RANDVAR__13844759376760238959_____4) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 795UL; }
        break;
      case 697:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 430UL; }
        break;
      case 279:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 830:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 537UL; }
        } else {
          { _1_OBF_FUNC_next = 773UL; }
        }
        break;
      case 822:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 919UL; }
        break;
      case 124:
        __RANDVAR__21313973761915495867_____0 = -179376;
        { _1_OBF_FUNC_next = 663UL; }
        break;
      case 896:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 904UL; }
        break;
      case 424:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 367UL; }
        } else {
          { _1_OBF_FUNC_next = 820UL; }
        }
        break;
      case 997:
        tmp___13 = rand();
        { _1_OBF_FUNC_next = 952UL; }
        break;
      case 400:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 475UL; }
        } else {
          { _1_OBF_FUNC_next = 1073UL; }
        }
        break;
      case 417:
        __RANDVAR__58201951085973112719_____0 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 211UL; }
        break;
      case 987:;
        if (__RANDVAR__29110676504195087284__ < -575 * __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 690UL; }
        } else {
          { _1_OBF_FUNC_next = 816UL; }
        }
        break;
      case 670:;
        if (tmp___24 % 10 >= 5) {
          { _1_OBF_FUNC_next = 383UL; }
        } else {
          { _1_OBF_FUNC_next = 729UL; }
        }
        break;
      case 951:;
        if (__RANDVAR__96093444848016043779_____8 * __RANDVAR__98823270048619348211_____1 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 541UL; }
        } else {
          { _1_OBF_FUNC_next = 136UL; }
        }
        break;
      case 232:
        __RANDVAR__60240982211775740940_____11 = 653;
        { _1_OBF_FUNC_next = 989UL; }
        break;
      case 86:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 2UL; }
        break;
      case 909:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 550UL; }
        break;
      case 928:;
        if (__RANDVAR__55736840103921928706__ < 988) {
          { _1_OBF_FUNC_next = 553UL; }
        } else {
          { _1_OBF_FUNC_next = 109UL; }
        }
        break;
      case 939:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 911UL; }
        break;
      case 256:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1024UL; }
        break;
      case 1033:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 463UL; }
        break;
      case 1067:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 93UL; }
        } else {
          { _1_OBF_FUNC_next = 383UL; }
        }
        break;
      case 407:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 689UL; }
        break;
      case 434:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 123UL; }
        } else {
          { _1_OBF_FUNC_next = 398UL; }
        }
        break;
      case 425:
        __RANDVAR__96093444848016043779_____8 = 237;
        { _1_OBF_FUNC_next = 151UL; }
        break;
      case 1068:
        __RANDVAR__43467388252028873741__ -= 137;
        { _1_OBF_FUNC_next = 259UL; }
        break;
      case 713:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 625UL; }
        break;
      case 591:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 1079UL; }
        break;
      case 689:
        __RANDVAR__58201951085973112719_____7 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 326UL; }
        break;
      case 659:
        __RANDVAR__58201951085973112719_____10 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 949UL; }
        break;
      case 376:
        tmp___49 = rand();
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 367:;
        if (__RANDVAR__96093444848016043779_____4 * __RANDVAR__98823270048619348211_____0 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 947UL; }
        } else {
          { _1_OBF_FUNC_next = 683UL; }
        }
        break;
      case 373:
        __RANDVAR__29110676504195087284__ += 804;
        { _1_OBF_FUNC_next = 298UL; }
        break;
      case 828:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 435UL; }
        break;
      case 1080:
        tmp = rand();
        { _1_OBF_FUNC_next = 981UL; }
        break;
      case 176:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 1058UL; }
        } else {
          { _1_OBF_FUNC_next = 955UL; }
        }
        break;
      case 458:
        __RANDVAR__27212846635821537647__ = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 1008UL; }
        break;
      case 78:
        __RANDVAR__75873560844759396346_____6 = __RANDVAR__98823270048619348211_____0;
        { _1_OBF_FUNC_next = 859UL; }
        break;
      case 449:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 1070UL; }
        break;
      case 386:;
        if (357680 < __RANDVAR__87512315818333497942__) {
          { _1_OBF_FUNC_next = 328UL; }
        } else {
          { _1_OBF_FUNC_next = 740UL; }
        }
        break;
      case 40:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 107UL; }
        } else {
          { _1_OBF_FUNC_next = 41UL; }
        }
        break;
      case 330:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 558UL; }
        break;
      case 2:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 551UL; }
        break;
      case 898:
        __RANDVAR__96093444848016043779_____11 = 237;
        { _1_OBF_FUNC_next = 1076UL; }
        break;
      case 551:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 676UL; }
        break;
      case 722:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 213UL; }
        break;
      case 264:
        __RANDVAR__13844759376760238959_____7 = (__RANDVAR__13844759376760238959_____7 + __RANDVAR__13844759376760238959_____7) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 1042UL; }
        break;
      case 1034:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 951UL; }
        } else {
          { _1_OBF_FUNC_next = 369UL; }
        }
        break;
      case 821:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 1082UL; }
        break;
      case 103:;
        if ((782 - __RANDVAR__29110676504195087284__) * __RANDVAR__55736840103921928706__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 371UL; }
        } else {
          { _1_OBF_FUNC_next = 146UL; }
        }
        break;
      case 438:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 775UL; }
        break;
      case 234:
        __RANDVAR__32264247020763072941_____9 = __RANDVAR__96093444848016043779_____9 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 965UL; }
        break;
      case 35:;
        if (__RANDVAR__96093444848016043779_____2 < -23) {
          { _1_OBF_FUNC_next = 667UL; }
        } else {
          { _1_OBF_FUNC_next = 584UL; }
        }
        break;
      case 791:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 318UL; }
        } else {
          { _1_OBF_FUNC_next = 1072UL; }
        }
        break;
      case 435:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 203UL; }
        } else {
          { _1_OBF_FUNC_next = 845UL; }
        }
        break;
      case 723:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 697UL; }
        break;
      case 263:
        __RANDVAR__8832761854096307175_____0 = __RANDVAR__43467388252028873741__ * 741 + __RANDVAR__89673644462235323434_____0 * 113;
        { _1_OBF_FUNC_next = 960UL; }
        break;
      case 540:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 591UL; }
        break;
      case 397:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 304UL; }
        break;
      case 653:
        __RANDVAR__75873560844759396346_____3 = __RANDVAR__98823270048619348211_____0;
        { _1_OBF_FUNC_next = 222UL; }
        break;
      case 954:
        __RANDVAR__75873560844759396346_____5 = __RANDVAR__98823270048619348211_____0;
        { _1_OBF_FUNC_next = 452UL; }
        break;
      case 428:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 1065UL; }
        } else {
          { _1_OBF_FUNC_next = 860UL; }
        }
        break;
      case 408:
        __RANDVAR__32264247020763072941__ = __RANDVAR__96093444848016043779__ + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 780:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 631UL; }
        break;
      case 128:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__43467388252028873741__ - __RANDVAR__43467388252028873741__ * __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 51UL; }
        } else {
          { _1_OBF_FUNC_next = 124UL; }
        }
        break;
      case 287:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 1049UL; }
        break;
      case 998:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 305UL; }
        break;
      case 283:
        __RANDVAR__3058300864712393407_____0 = 139;
        { _1_OBF_FUNC_next = 666UL; }
        break;
      case 871:
        __RANDVAR__3058300864712393407_____1 = 139;
        { _1_OBF_FUNC_next = 1025UL; }
        break;
      case 160:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 702UL; }
        break;
      case 627:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 991UL; }
        break;
      case 267:
        __RANDVAR__13844759376760238959_____9 = (__RANDVAR__13844759376760238959_____9 + __RANDVAR__13844759376760238959_____9) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 556:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 406UL; }
        } else {
          { _1_OBF_FUNC_next = 575UL; }
        }
        break;
      case 749:
        __RANDVAR__11076293552336221433_____9 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 498UL; }
        break;
      case 246:
        __RANDVAR__3058300864712393407_____4 = 139;
        { _1_OBF_FUNC_next = 760UL; }
        break;
      case 152:
        __RANDVAR__29110676504195087284__ += 809;
        { _1_OBF_FUNC_next = 182UL; }
        break;
      case 625:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 890UL; }
        break;
      case 182:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 322UL; }
        break;
      case 412:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 710UL; }
        break;
      case 430:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 105UL; }
        } else {
          { _1_OBF_FUNC_next = 755UL; }
        }
        break;
      case 1082:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 296UL; }
        break;
      case 646:
        __RANDVAR__29110676504195087284__ -= 804;
        { _1_OBF_FUNC_next = 838UL; }
        break;
      case 218:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 503UL; }
        break;
      case 180:
        tmp___23 = rand();
        { _1_OBF_FUNC_next = 639UL; }
        break;
      case 603:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 1069UL; }
        break;
      case 183:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 491UL; }
        break;
      case 995:
        __RANDVAR__63208616555072126141_____11 = (__RANDVAR__63208616555072126141_____11 * 184) * 1142;
        { _1_OBF_FUNC_next = 989UL; }
        break;
      case 8:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 248UL; }
        }
        break;
      case 492:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 605UL; }
        break;
      case 326:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 1037UL; }
        } else {
          { _1_OBF_FUNC_next = 299UL; }
        }
        break;
      case 644:
        __RANDVAR__29110676504195087284__ -= 804;
        { _1_OBF_FUNC_next = 522UL; }
        break;
      case 912:;
        if (tmp___28 % 10 >= 5) {
          { _1_OBF_FUNC_next = 640UL; }
        } else {
          { _1_OBF_FUNC_next = 427UL; }
        }
        break;
      case 1000:
        __RANDVAR__29110676504195087284__ -= 828;
        { _1_OBF_FUNC_next = 978UL; }
        break;
      case 293:
        __RANDVAR__66488612657167399743_____4 = 277952;
        { _1_OBF_FUNC_next = 397UL; }
        break;
      case 700:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 173UL; }
        break;
      case 304:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 724UL; }
        } else {
          { _1_OBF_FUNC_next = 807UL; }
        }
        break;
      case 753:;
        if (__RANDVAR__96093444848016043779_____8 < -23) {
          { _1_OBF_FUNC_next = 319UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 685:
        __RANDVAR__13844759376760238959_____10 = (__RANDVAR__13844759376760238959_____10 + __RANDVAR__13844759376760238959_____10) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 668:
        __RANDVAR__72743817970187714773__++;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 1027:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 490UL; }
        break;
      case 389:
        __RANDVAR__60240982211775740940__ = 653;
        { _1_OBF_FUNC_next = 578UL; }
        break;
      case 766:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 637UL; }
        break;
      case 933:;
        if (__RANDVAR__96093444848016043779_____11 < -23) {
          { _1_OBF_FUNC_next = 894UL; }
        } else {
          { _1_OBF_FUNC_next = 829UL; }
        }
        break;
      case 121:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 1025:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 315UL; }
        } else {
          { _1_OBF_FUNC_next = 155UL; }
        }
        break;
      case 1022:
        __RANDVAR__63208616555072126141_____6 = (__RANDVAR__63208616555072126141_____6 * 184) * 1142;
        { _1_OBF_FUNC_next = 587UL; }
        break;
      case 331:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 484UL; }
        break;
      case 1065:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 925UL; }
        break;
      case 592:;
        if (tmp___47 % 10 >= 5) {
          { _1_OBF_FUNC_next = 73UL; }
        } else {
          { _1_OBF_FUNC_next = 923UL; }
        }
        break;
      case 364:;
        if (__RANDVAR__29110676504195087284__ < 825 + __RANDVAR__43467388252028873741__) {
          { _1_OBF_FUNC_next = 458UL; }
        } else {
          { _1_OBF_FUNC_next = 549UL; }
        }
        break;
      case 463:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 556UL; }
        } else {
          { _1_OBF_FUNC_next = 646UL; }
        }
        break;
      case 679:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 164UL; }
        break;
      case 85:
        __RANDVAR__29110676504195087284__ += 809;
        { _1_OBF_FUNC_next = 782UL; }
        break;
      case 10:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 1075UL; }
        break;
      case 620:
        __RANDVAR__89673644462235323434_____0 = 12 * (__RANDVAR__29110676504195087284__ + 516);
        { _1_OBF_FUNC_next = 705UL; }
        break;
      case 414:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 121UL; }
        break;
      case 930:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 566UL; }
        } else {
          { _1_OBF_FUNC_next = 885UL; }
        }
        break;
      case 471:
        __RANDVAR__55736840103921928706__ -= 273;
        { _1_OBF_FUNC_next = 1029UL; }
        break;
      case 168:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 802UL; }
        break;
      case 656:
        _index8_0++;
        { _1_OBF_FUNC_next = 569UL; }
        break;
      case 266:;
        if (tmp___39 % 10 >= 5) {
          { _1_OBF_FUNC_next = 207UL; }
        } else {
          { _1_OBF_FUNC_next = 64UL; }
        }
        break;
      case 636:
        _index8_0++;
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 278:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 321UL; }
        break;
      case 676:
        _index8_0++;
        { _1_OBF_FUNC_next = 1025UL; }
        break;
      case 880:
        __RANDVAR__96093444848016043779_____10 = 237;
        { _1_OBF_FUNC_next = 191UL; }
        break;
      case 114:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 392UL; }
        break;
      case 217:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 1004UL; }
        break;
      case 423:
        _index8_0++;
        { _1_OBF_FUNC_next = 500UL; }
        break;
      case 709:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 101UL; }
        break;
      case 383:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 568UL; }
        } else {
          { _1_OBF_FUNC_next = 1055UL; }
        }
        break;
      case 537:
        __RANDVAR__66488612657167399743_____0 = 277952;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 582:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 961:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 539UL; }
        break;
      case 260:
        tmp___6 = rand();
        { _1_OBF_FUNC_next = 27UL; }
        break;
      case 758:;
        if (tmp___16 % 10 >= 5) {
          { _1_OBF_FUNC_next = 1046UL; }
        } else {
          { _1_OBF_FUNC_next = 627UL; }
        }
        break;
      case 312:
        __RANDVAR__96093444848016043779_____3 = 237;
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 852:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 153UL; }
        break;
      case 72:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 414UL; }
        break;
      case 888:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 476UL; }
        break;
      case 971:
        __RANDVAR__43467388252028873741__ += 811;
        { _1_OBF_FUNC_next = 144UL; }
        break;
      case 236:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 554UL; }
        break;
      case 833:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 422UL; }
        break;
      case 914:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 249UL; }
        break;
      case 533:
        __RANDVAR__75873560844759396346_____7 = __RANDVAR__98823270048619348211_____1;
        { _1_OBF_FUNC_next = 684UL; }
        break;
      case 827:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 515UL; }
        } else {
          { _1_OBF_FUNC_next = 821UL; }
        }
        break;
      case 1061:
        _index8_0++;
        { _1_OBF_FUNC_next = 383UL; }
        break;
      case 590:
        __RANDVAR__43467388252028873741__ += 463;
        { _1_OBF_FUNC_next = 743UL; }
        break;
      case 199:
        __RANDVAR__66488612657167399743_____8 = 277952;
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 318:
        __RANDVAR__11076293552336221433_____5 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 697UL; }
        break;
      case 549:;
        if (__RANDVAR__55736840103921928706__ < 988) {
          { _1_OBF_FUNC_next = 350UL; }
        } else {
          { _1_OBF_FUNC_next = 992UL; }
        }
        break;
      case 818:
        __RANDVAR__98823270048619348211_____0 += 334;
        { _1_OBF_FUNC_next = 165UL; }
        break;
      case 733:
        __RANDVAR__13844759376760238959_____3 = (__RANDVAR__13844759376760238959_____3 + __RANDVAR__13844759376760238959_____3) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 628UL; }
        break;
      case 864:
        _index8_0++;
        { _1_OBF_FUNC_next = 794UL; }
        break;
      case 532:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 135UL; }
        } else {
          { _1_OBF_FUNC_next = 307UL; }
        }
        break;
      case 518:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 918UL; }
        break;
      case 738:
        __RANDVAR__32264247020763072941_____10 = __RANDVAR__96093444848016043779_____10 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 756:;
        if (tmp___44 % 10 >= 5) {
          { _1_OBF_FUNC_next = 572UL; }
        } else {
          { _1_OBF_FUNC_next = 302UL; }
        }
        break;
      case 552:
        __RANDVAR__29110676504195087284__ -= 804;
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 1076:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 933UL; }
        break;
      case 876:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 806UL; }
        } else {
          { _1_OBF_FUNC_next = 640UL; }
        }
        break;
      case 1079:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 546UL; }
        break;
      case 612:
        __RANDVAR__43467388252028873741__ += 418;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 221:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 80UL; }
        break;
      case 862:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 997UL; }
        } else {
          { _1_OBF_FUNC_next = 286UL; }
        }
        break;
      case 955:
        __RANDVAR__29110676504195087284__ -= 809;
        { _1_OBF_FUNC_next = 152UL; }
        break;
      case 486:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 875UL; }
        } else {
          { _1_OBF_FUNC_next = 781UL; }
        }
        break;
      case 736:
        __RANDVAR__60240982211775740940_____3 = 653;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 1026:
        tmp___33 = rand();
        { _1_OBF_FUNC_next = 439UL; }
        break;
      case 565:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 791UL; }
        break;
      case 541:
        __RANDVAR__13844759376760238959_____8 = (__RANDVAR__13844759376760238959_____8 + __RANDVAR__13844759376760238959_____8) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 937UL; }
        break;
      case 431:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1016UL; }
        break;
      case 135:
        tmp___42 = rand();
        { _1_OBF_FUNC_next = 242UL; }
        break;
      case 579:;
        if (tmp___25 % 10 >= 5) {
          { _1_OBF_FUNC_next = 1055UL; }
        } else {
          { _1_OBF_FUNC_next = 465UL; }
        }
        break;
      case 107:
        __RANDVAR__66488612657167399743_____10 = 277952;
        { _1_OBF_FUNC_next = 416UL; }
        break;
      case 542:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 699UL; }
        } else {
          { _1_OBF_FUNC_next = 973UL; }
        }
        break;
      case 65:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 645UL; }
        break;
      case 12:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 536UL; }
        break;
      case 547:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 88UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 570UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 46UL;
        } break;
        }
        break;
      case 730:;
        if (__RANDVAR__43467388252028873741__ < 429 * __RANDVAR__43467388252028873741__ + __RANDVAR__43917346718694078359__ * __RANDVAR__43917346718694078359__) {
          { _1_OBF_FUNC_next = 929UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 155:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 137UL; }
        } else {
          { _1_OBF_FUNC_next = 1046UL; }
        }
        break;
      case 290:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 1066UL; }
        break;
      case 721:
        __RANDVAR__13844759376760238959_____5 = (__RANDVAR__13844759376760238959_____5 + __RANDVAR__13844759376760238959_____5) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 934UL; }
        break;
      case 387:
        __RANDVAR__96093444848016043779_____4 = 237;
        { _1_OBF_FUNC_next = 715UL; }
        break;
      case 261:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 344UL; }
        break;
      case 60:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 89UL; }
        break;
      case 163:
        __RANDVAR__58201951085973112719_____1 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 968UL; }
        break;
      case 508:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 901UL; }
        break;
      case 829:
        __RANDVAR__75873560844759396346_____11 = __RANDVAR__98823270048619348211_____2;
        { _1_OBF_FUNC_next = 400UL; }
        break;
      case 922:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 651UL; }
        break;
      case 761:
        __RANDVAR__3058300864712393407_____9 = 139;
        { _1_OBF_FUNC_next = 437UL; }
        break;
      case 783:
        __RANDVAR__75873560844759396346_____1 = __RANDVAR__98823270048619348211__;
        { _1_OBF_FUNC_next = 1025UL; }
        break;
      case 536:
        _index8_0++;
        { _1_OBF_FUNC_next = 400UL; }
        break;
      case 84:
        __RANDVAR__32264247020763072941_____0 = __RANDVAR__96093444848016043779_____0 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 797UL; }
        break;
      case 957:
        __RANDVAR__55736840103921928706__ += 273;
        { _1_OBF_FUNC_next = 194UL; }
        break;
      case 661:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 638UL; }
        break;
      case 319:
        __RANDVAR__3058300864712393407_____8 = 139;
        { _1_OBF_FUNC_next = 649UL; }
        break;
      case 817:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 0UL; }
        break;
      case 687:
        tmp___37 = rand();
        { _1_OBF_FUNC_next = 440UL; }
        break;
      case 1048:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 596UL; }
        break;
      case 132:
        __RANDVAR__29110676504195087284__ -= 804;
        { _1_OBF_FUNC_next = 373UL; }
        break;
      case 531:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 749UL; }
        } else {
          { _1_OBF_FUNC_next = 62UL; }
        }
        break;
      case 415:
        __RANDVAR__13844759376760238959_____2 = (__RANDVAR__13844759376760238959_____2 + __RANDVAR__13844759376760238959_____2) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 664UL; }
        break;
      case 68:
        __RANDVAR__98823270048619348211__ -= 334;
        { _1_OBF_FUNC_next = 1040UL; }
        break;
      case 96:
        __RANDVAR__11076293552336221433_____7 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 403UL; }
        break;
      case 399:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 4UL; }
        } else {
          { _1_OBF_FUNC_next = 955UL; }
        }
        break;
      case 587:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 483UL; }
        break;
      case 404:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 669UL; }
        break;
      case 11:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 380UL; }
        break;
      case 560:
        _index8_0++;
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 20:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 376UL; }
        } else {
          { _1_OBF_FUNC_next = 597UL; }
        }
        break;
      case 645:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 120UL; }
        break;
      case 879:
        __RANDVAR__43467388252028873741__ += 144;
        { _1_OBF_FUNC_next = 727UL; }
        break;
      case 390:
        __RANDVAR__43467388252028873741__ -= 144;
        { _1_OBF_FUNC_next = 330UL; }
        break;
      case 988:
        tmp___45 = rand();
        { _1_OBF_FUNC_next = 405UL; }
        break;
      case 413:;
        if (__RANDVAR__96093444848016043779_____0 < -23) {
          { _1_OBF_FUNC_next = 283UL; }
        } else {
          { _1_OBF_FUNC_next = 1014UL; }
        }
        break;
      case 113:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 677UL; }
        break;
      case 453:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 213UL; }
        } else {
          { _1_OBF_FUNC_next = 527UL; }
        }
        break;
      case 350:
        __RANDVAR__17917140384409192139__ = (__RANDVAR__43467388252028873741__ + 630) - 573 * __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 1008UL; }
        break;
      case 346:
        __RANDVAR__96093444848016043779_____5 = 237;
        { _1_OBF_FUNC_next = 658UL; }
        break;
      case 675:;
        if (__RANDVAR__43467388252028873741__ < 652) {
          { _1_OBF_FUNC_next = 747UL; }
        } else {
          { _1_OBF_FUNC_next = 143UL; }
        }
        break;
      case 651:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 338UL; }
        break;
      case 619:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 494UL; }
        } else {
          { _1_OBF_FUNC_next = 1005UL; }
        }
        break;
      case 356:
        __RANDVAR__58201951085973112719_____8 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 1034UL; }
        break;
      case 703:
        tmp___40 = rand();
        { _1_OBF_FUNC_next = 534UL; }
        break;
      case 277:;
        if (__RANDVAR__96093444848016043779_____6 < -23) {
          { _1_OBF_FUNC_next = 799UL; }
        } else {
          { _1_OBF_FUNC_next = 78UL; }
        }
        break;
      case 377:
        __RANDVAR__17917140384409192139_____0 = (__RANDVAR__43467388252028873741__ + 630) - 573 * __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 809UL; }
        break;
      case 468:;
        if (__RANDVAR__96093444848016043779_____11 * __RANDVAR__98823270048619348211_____2 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 814UL; }
        } else {
          { _1_OBF_FUNC_next = 232UL; }
        }
        break;
      case 52:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 192UL; }
        break;
      case 58:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 767UL; }
        } else {
          { _1_OBF_FUNC_next = 975UL; }
        }
        break;
      case 1062:
        tmp___27 = rand();
        { _1_OBF_FUNC_next = 1052UL; }
        break;
      case 913:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 798UL; }
        break;
      case 657:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 404UL; }
        break;
      case 764:;
        if (tmp___17 % 10 >= 5) {
          { _1_OBF_FUNC_next = 891UL; }
        } else {
          { _1_OBF_FUNC_next = 922UL; }
        }
        break;
      case 159:
        __RANDVAR__3058300864712393407_____3 = 139;
        { _1_OBF_FUNC_next = 222UL; }
        break;
      case 754:
        __RANDVAR__66488612657167399743_____9 = 277952;
        { _1_OBF_FUNC_next = 965UL; }
        break;
      case 198:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 595UL; }
        } else {
          { _1_OBF_FUNC_next = 572UL; }
        }
        break;
      case 34:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 197UL; }
        break;
      case 563:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1013UL; }
        break;
      case 634:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 815UL; }
        break;
      case 254:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__43467388252028873741__ - __RANDVAR__43467388252028873741__ * __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 351UL; }
        } else {
          { _1_OBF_FUNC_next = 333UL; }
        }
        break;
      case 299:
        __RANDVAR__32264247020763072941_____7 = __RANDVAR__96093444848016043779_____7 + 414 * __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 1048UL; }
        break;
      case 610:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 314UL; }
        } else {
          { _1_OBF_FUNC_next = 3UL; }
        }
        break;
      case 819:
        __RANDVAR__11076293552336221433_____2 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 153UL; }
        break;
      case 1018:
        __RANDVAR__58201951085973112719_____11 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 294UL; }
        break;
      case 887:
        _index8_0++;
        { _1_OBF_FUNC_next = 227UL; }
        break;
      case 978:
        __RANDVAR__29110676504195087284__ += 828;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 725:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 501:;
        if (tmp___38 % 10 >= 5) {
          { _1_OBF_FUNC_next = 532UL; }
        } else {
          { _1_OBF_FUNC_next = 853UL; }
        }
        break;
      case 775:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 512UL; }
        } else {
          { _1_OBF_FUNC_next = 69UL; }
        }
        break;
      case 704:
        __RANDVAR__75873560844759396346__ = __RANDVAR__98823270048619348211__;
        { _1_OBF_FUNC_next = 227UL; }
        break;
      case 3:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 473UL; }
        break;
      case 841:;
        if (__RANDVAR__96093444848016043779_____10 < -23) {
          { _1_OBF_FUNC_next = 893UL; }
        } else {
          { _1_OBF_FUNC_next = 741UL; }
        }
        break;
      case 517:
        __RANDVAR__13844759376760238959_____0 = (__RANDVAR__13844759376760238959_____0 + __RANDVAR__13844759376760238959_____0) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 830UL; }
        break;
      case 924:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 687UL; }
        } else {
          { _1_OBF_FUNC_next = 702UL; }
        }
        break;
      case 314:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 766UL; }
        break;
      case 187:;
        if (__RANDVAR__96093444848016043779_____9 * __RANDVAR__98823270048619348211_____1 + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 267UL; }
        } else {
          { _1_OBF_FUNC_next = 510UL; }
        }
        break;
      case 952:;
        if (tmp___13 % 10 >= 5) {
          { _1_OBF_FUNC_next = 286UL; }
        } else {
          { _1_OBF_FUNC_next = 443UL; }
        }
        break;
      case 253:;
        if (tmp___26 % 10 >= 5) {
          { _1_OBF_FUNC_next = 807UL; }
        } else {
          { _1_OBF_FUNC_next = 60UL; }
        }
        break;
      case 925:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 329UL; }
        break;
      case 1:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 95UL; }
        break;
      case 554:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 1009UL; }
        break;
      case 980:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 460UL; }
        break;
      case 50:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 236UL; }
        break;
      case 629:
        tmp___43 = rand();
        { _1_OBF_FUNC_next = 166UL; }
        break;
      case 475:
        __RANDVAR__98823270048619348211_____2 -= 334;
        { _1_OBF_FUNC_next = 1011UL; }
        break;
      case 1057:
        __RANDVAR__96093444848016043779__ = 237;
        { _1_OBF_FUNC_next = 686UL; }
        break;
      case 99:
        tmp___34 = rand();
        { _1_OBF_FUNC_next = 139UL; }
        break;
      case 814:
        __RANDVAR__13844759376760238959_____11 = (__RANDVAR__13844759376760238959_____11 + __RANDVAR__13844759376760238959_____11) + (__RANDVAR__43467388252028873741__ - 23);
        { _1_OBF_FUNC_next = 157UL; }
        break;
      case 497:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 980UL; }
        } else {
          { _1_OBF_FUNC_next = 460UL; }
        }
        break;
      case 476:;
        if (__RANDVAR__29110676504195087284__ * (__RANDVAR__29110676504195087284__ * 146) < 2) {
          { _1_OBF_FUNC_next = 66UL; }
        } else {
          { _1_OBF_FUNC_next = 263UL; }
        }
        break;
      case 743:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 722UL; }
        break;
      case 94:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 542UL; }
        break;
      case 325:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 402UL; }
        break;
      case 144:
        __RANDVAR__43467388252028873741__ -= 811;
        { _1_OBF_FUNC_next = 259UL; }
        break;
      case 66:
        __RANDVAR__55736840103921928706__ += 273;
        { _1_OBF_FUNC_next = 487UL; }
        break;
      case 716:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 855UL; }
        } else {
          { _1_OBF_FUNC_next = 1022UL; }
        }
        break;
      case 365:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 407UL; }
        break;
      case 14:;
        if (tmp___29 % 10 >= 5) {
          { _1_OBF_FUNC_next = 500UL; }
        } else {
          { _1_OBF_FUNC_next = 10UL; }
        }
        break;
      case 539:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 895UL; }
        break;
      case 767:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 497UL; }
        } else {
          { _1_OBF_FUNC_next = 917UL; }
        }
        break;
      case 229:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 940UL; }
        break;
      case 344:
        __RANDVAR__43467388252028873741__ -= 220;
        { _1_OBF_FUNC_next = 662UL; }
        break;
      case 75:
        __RANDVAR__96093444848016043779_____0 = 237;
        { _1_OBF_FUNC_next = 495UL; }
        break;
      case 353:;
        if (tmp___22 % 10 >= 5) {
          { _1_OBF_FUNC_next = 304UL; }
        } else {
          { _1_OBF_FUNC_next = 297UL; }
        }
        break;
      case 223:
        __RANDVAR__43467388252028873741__ -= 463;
        { _1_OBF_FUNC_next = 403UL; }
        break;
      case 162:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__43467388252028873741__ - __RANDVAR__43467388252028873741__ * __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 363UL; }
        } else {
          { _1_OBF_FUNC_next = 455UL; }
        }
        break;
      case 664:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 983UL; }
        } else {
          { _1_OBF_FUNC_next = 225UL; }
        }
        break;
      case 882:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 434UL; }
        break;
      case 141:
        tmp___38 = rand();
        { _1_OBF_FUNC_next = 501UL; }
        break;
      case 123:
        __RANDVAR__11076293552336221433__ = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 22:
        tmp___36 = rand();
        { _1_OBF_FUNC_next = 1056UL; }
        break;
      case 115:
        tmp___5 = rand();
        { _1_OBF_FUNC_next = 456UL; }
        break;
      case 203:
        __RANDVAR__11076293552336221433_____6 = __RANDVAR__55736840103921928706__;
        { _1_OBF_FUNC_next = 210UL; }
        break;
      case 669:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 147UL; }
        } else {
          { _1_OBF_FUNC_next = 643UL; }
        }
        break;
      case 946:;
        if (__RANDVAR__96093444848016043779__ * __RANDVAR__98823270048619348211__ + (__RANDVAR__55736840103921928706__ + 312) < 220) {
          { _1_OBF_FUNC_next = 170UL; }
        } else {
          { _1_OBF_FUNC_next = 389UL; }
        }
        break;
      case 191:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 841UL; }
        break;
      case 51:
        __RANDVAR__66271423655543667894_____0 = 86;
        { _1_OBF_FUNC_next = 663UL; }
        break;
      case 154:
        __RANDVAR__98823270048619348211_____0 -= 334;
        { _1_OBF_FUNC_next = 674UL; }
        break;
      case 359:
        tmp___35 = rand();
        { _1_OBF_FUNC_next = 514UL; }
        break;
      case 1036:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 596UL; }
        break;
      case 859:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 262UL; }
        } else {
          { _1_OBF_FUNC_next = 744UL; }
        }
        break;
      case 510:
        __RANDVAR__60240982211775740940_____9 = 653;
        { _1_OBF_FUNC_next = 965UL; }
        break;
      case 799:
        __RANDVAR__3058300864712393407_____6 = 139;
        { _1_OBF_FUNC_next = 859UL; }
        break;
      case 706:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 387UL; }
        break;
      case 918:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 467UL; }
        break;
      case 621:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 864UL; }
        break;
      case 470:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 370UL; }
        break;
      case 877:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 647UL; }
        } else {
          { _1_OBF_FUNC_next = 364UL; }
        }
        break;
      case 67:
        _index8_0++;
        { _1_OBF_FUNC_next = 862UL; }
        break;
      case 777:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 695UL; }
        break;
      case 798:
        _index8_0++;
        { _1_OBF_FUNC_next = 876UL; }
        break;
      case 1042:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 117UL; }
        } else {
          { _1_OBF_FUNC_next = 244UL; }
        }
        break;
      case 900:
        __RANDVAR__55736840103921928706__ -= 173;
        { _1_OBF_FUNC_next = 867UL; }
        break;
      case 663:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 303UL; }
        break;
      case 268:
        tmp___9 = rand();
        { _1_OBF_FUNC_next = 336UL; }
        break;
      case 55:
        _index8_0++;
        { _1_OBF_FUNC_next = 930UL; }
        break;
      case 380:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 1003UL; }
        break;
      case 1024:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 819UL; }
        } else {
          { _1_OBF_FUNC_next = 289UL; }
        }
        break;
      case 303:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 94UL; }
        } else {
          { _1_OBF_FUNC_next = 699UL; }
        }
        break;
      case 825:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 854UL; }
        break;
      case 826:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 359UL; }
        } else {
          { _1_OBF_FUNC_next = 996UL; }
        }
        break;
      case 379:
        __RANDVAR__63208616555072126141_____3 = (__RANDVAR__63208616555072126141_____3 * 184) * 1142;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 1053:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 926UL; }
        } else {
          { _1_OBF_FUNC_next = 505UL; }
        }
        break;
      case 770:
        __RANDVAR__43467388252028873741__ += 596;
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 857:;
        if (__RANDVAR__43467388252028873741__ < __RANDVAR__43467388252028873741__ - __RANDVAR__43467388252028873741__ * __RANDVAR__29110676504195087284__) {
          { _1_OBF_FUNC_next = 1081UL; }
        } else {
          { _1_OBF_FUNC_next = 357UL; }
        }
        break;
      case 593:
        __RANDVAR__98823270048619348211_____1 += 334;
        { _1_OBF_FUNC_next = 557UL; }
        break;
      case 235:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 399UL; }
        break;
      case 815:
        __RANDVAR__96093444848016043779_____6 = 237;
        { _1_OBF_FUNC_next = 985UL; }
        break;
      case 227:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 482UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 491:
        _index8_0++;
        { _1_OBF_FUNC_next = 73UL; }
        break;
      case 923:
        __RANDVAR__98823270048619348211_____1 -= 334;
        { _1_OBF_FUNC_next = 391UL; }
        break;
      case 337:
        __RANDVAR__55736840103921928706__ += 173;
        { _1_OBF_FUNC_next = 757UL; }
        break;
      case 1056:;
        if (tmp___36 % 10 >= 5) {
          { _1_OBF_FUNC_next = 924UL; }
        } else {
          { _1_OBF_FUNC_next = 750UL; }
        }
        break;
      case 867:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 880UL; }
        break;
      case 300:
        __RANDVAR__91060907674129574464_____0 = __RANDVAR__43467388252028873741__;
        { _1_OBF_FUNC_next = 809UL; }
        break;
      case 70:
        tmp___32 = rand();
        { _1_OBF_FUNC_next = 489UL; }
        break;
      case 902:
        __RANDVAR__63208616555072126141_____5 = (__RANDVAR__63208616555072126141_____5 * 184) * 1142;
        { _1_OBF_FUNC_next = 275UL; }
        break;
      case 666:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 44UL; }
        } else {
          { _1_OBF_FUNC_next = 794UL; }
        }
        break;
      case 631:
        _index8_0++;
        { _1_OBF_FUNC_next = 938UL; }
        break;
      case 498:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 924UL; }
        break;
      case 207:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 703UL; }
        } else {
          { _1_OBF_FUNC_next = 930UL; }
        }
        break;
      case 746:
        tmp___48 = rand();
        { _1_OBF_FUNC_next = 16UL; }
        break;
      case 702:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 624UL; }
        } else {
          { _1_OBF_FUNC_next = 432UL; }
        }
        break;
      case 1004:
        __RANDVAR__98823270048619348211__ += 334;
        { _1_OBF_FUNC_next = 53UL; }
        break;
      case 931:
        __RANDVAR__58201951085973112719_____9 = (__RANDVAR__43467388252028873741__ + 484) - 428;
        { _1_OBF_FUNC_next = 1071UL; }
        break;
      case 503:;
        if (__RANDVAR__29110676504195087284__ < __RANDVAR__29110676504195087284__ + 105600) {
          { _1_OBF_FUNC_next = 156UL; }
        } else {
          { _1_OBF_FUNC_next = 943UL; }
        }
        break;
      case 832:
        __RANDVAR__43467388252028873741__ += 220;
        { _1_OBF_FUNC_next = 365UL; }
        break;
      case 457:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 659UL; }
        break;
      }
    }
  }
}
// variants: irrelevant-code, loop-fission, flatten
// expanded variants: irrelevant-code, loop-fission, flatten:switch
