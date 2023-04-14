typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int rand();
extern int strtol();
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  int tmp;
  unsigned int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
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
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_4;
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
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[182];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 336UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 91:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 221UL; }
        break;
      case 547:
        _1_OBF_FUNC_next = 83UL;
        { _1_OBF_FUNC_next___0 = 223UL; }
        break;
      case 375:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 560UL; }
        break;
      case 37:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 589:
        _1_OBF_FUNC_jumpTab[5] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 345UL; }
        break;
      case 428:
      _1_OBF_FUNC_lab168:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 382UL; }
        break;
      case 30:
        _1_OBF_FUNC_jumpTab[148] = (void *)287UL;
        { _1_OBF_FUNC_next___0 = 100UL; }
        break;
      case 607:
        _1_OBF_FUNC_jumpTab[10] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 519UL; }
        break;
      case 123:
        _1_OBF_FUNC_jumpTab[37] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 593:
        _1_OBF_FUNC_next = 71UL;
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 575:
        _1_OBF_FUNC_jumpTab[110] = (void *)340UL;
        { _1_OBF_FUNC_next___0 = 148UL; }
        break;
      case 309:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 396:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 425UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 211UL; }
        }
        break;
      case 300:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 419:
      _1_OBF_FUNC_lab127:
        tmp___7 = rand();
        { _1_OBF_FUNC_next___0 = 392UL; }
        break;
      case 515:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 590:
        _1_OBF_FUNC_jumpTab[104] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 235UL; }
        break;
      case 509:
      _1_OBF_FUNC_lab34:;
        { _1_OBF_FUNC_next___0 = 601UL; }
        break;
      case 420:
      _1_OBF_FUNC_lab115:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 233UL; }
        break;
      case 398:
        _1_OBF_FUNC_jumpTab[22] = (void *)634UL;
        { _1_OBF_FUNC_next___0 = 448UL; }
        break;
      case 80:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 424UL; }
        break;
      case 190:
        _1_OBF_FUNC_next = 111UL;
        { _1_OBF_FUNC_next___0 = 361UL; }
        break;
      case 192:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 292:
      _1_OBF_FUNC_lab81:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 154UL; }
        break;
      case 94:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 245:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 28:
        _1_OBF_FUNC_jumpTab[2] = (void *)624UL;
        { _1_OBF_FUNC_next___0 = 302UL; }
        break;
      case 57:
        _1_OBF_FUNC_next = 166UL;
        { _1_OBF_FUNC_next___0 = 162UL; }
        break;
      case 390:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 480UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 25UL; }
        }
        break;
      case 31:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 310:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 333:
        _1_OBF_FUNC_next = 163UL;
        { _1_OBF_FUNC_next___0 = 357UL; }
        break;
      case 348:
      _1_OBF_FUNC_lab64:;
        { _1_OBF_FUNC_next___0 = 502UL; }
        break;
      case 541:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 61:
        _1_OBF_FUNC_jumpTab[112] = (void *)141UL;
        { _1_OBF_FUNC_next___0 = 79UL; }
        break;
      case 464:
      _1_OBF_FUNC_lab30:;
        { _1_OBF_FUNC_next___0 = 207UL; }
        break;
      case 214:
        _1_OBF_FUNC_jumpTab[89] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 454UL; }
        break;
      case 486:
        _1_OBF_FUNC_next = 53UL;
        { _1_OBF_FUNC_next___0 = 492UL; }
        break;
      case 374:
        _1_OBF_FUNC_jumpTab[136] = (void *)48UL;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 122:
        _1_OBF_FUNC_next = 143UL;
        { _1_OBF_FUNC_next___0 = 610UL; }
        break;
      case 48:
      _1_OBF_FUNC_lab138:;
        { _1_OBF_FUNC_next___0 = 335UL; }
        break;
      case 600:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 562:
        _1_OBF_FUNC_jumpTab[157] = (void *)574UL;
        { _1_OBF_FUNC_next___0 = 145UL; }
        break;
      case 231:
      _1_OBF_FUNC_lab161:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 210UL; }
        break;
      case 425:
        _1_OBF_FUNC_next = 105UL;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 634:
      _1_OBF_FUNC_lab24:;
        { _1_OBF_FUNC_next___0 = 569UL; }
        break;
      case 298:
        _1_OBF_FUNC_jumpTab[169] = (void *)577UL;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 46:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 372:
        _1_OBF_FUNC_jumpTab[50] = (void *)400UL;
        { _1_OBF_FUNC_next___0 = 172UL; }
        break;
      case 241:
        _1_OBF_FUNC_jumpTab[68] = (void *)254UL;
        { _1_OBF_FUNC_next___0 = 271UL; }
        break;
      case 573:
      _1_OBF_FUNC_lab72:;
        { _1_OBF_FUNC_next___0 = 230UL; }
        break;
      case 429:
        _1_OBF_FUNC_jumpTab[52] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 165UL; }
        break;
      case 345:
        _1_OBF_FUNC_jumpTab[6] = (void *)152UL;
        { _1_OBF_FUNC_next___0 = 470UL; }
        break;
      case 521:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 514:
      _1_OBF_FUNC_lab28:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 366:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 222:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 256:
        _1_OBF_FUNC_jumpTab[135] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 374UL; }
        break;
      case 347:
        _1_OBF_FUNC_jumpTab[116] = (void *)2UL;
        { _1_OBF_FUNC_next___0 = 208UL; }
        break;
      case 584:
      _1_OBF_FUNC_lab53:;
        { _1_OBF_FUNC_next___0 = 356UL; }
        break;
      case 86:
        _1_OBF_FUNC_next = 118UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 164:
        _1_OBF_FUNC_next = 87UL;
        { _1_OBF_FUNC_next___0 = 630UL; }
        break;
      case 334:
        _1_OBF_FUNC_next = 103UL;
        { _1_OBF_FUNC_next___0 = 206UL; }
        break;
      case 568:
      _1_OBF_FUNC_lab139:;
        { _1_OBF_FUNC_next___0 = 260UL; }
        break;
      case 59:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 559:;
        if (tmp___13 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 602UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 157UL; }
        }
        break;
      case 566:
      _1_OBF_FUNC_lab67:
        _index4_4 = 0U;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 12:
        _1_OBF_FUNC_next = 154UL;
        { _1_OBF_FUNC_next___0 = 404UL; }
        break;
      case 490:
        _1_OBF_FUNC_next = 90UL;
        { _1_OBF_FUNC_next___0 = 600UL; }
        break;
      case 283:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 621:
      _1_OBF_FUNC_lab73:
        tmp___4 = rand();
        { _1_OBF_FUNC_next___0 = 482UL; }
        break;
      case 404:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 385:
        _1_OBF_FUNC_jumpTab[146] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 473UL; }
        break;
      case 629:
        _1_OBF_FUNC_next = 64UL;
        { _1_OBF_FUNC_next___0 = 367UL; }
        break;
      case 163:
        _1_OBF_FUNC_next = 97UL;
        { _1_OBF_FUNC_next___0 = 300UL; }
        break;
      case 65:
        _1_OBF_FUNC_jumpTab[58] = (void *)341UL;
        { _1_OBF_FUNC_next___0 = 184UL; }
        break;
      case 383:
        _1_OBF_FUNC_next = 71UL;
        { _1_OBF_FUNC_next___0 = 529UL; }
        break;
      case 299:
        _1_OBF_FUNC_jumpTab[164] = (void *)587UL;
        { _1_OBF_FUNC_next___0 = 379UL; }
        break;
      case 446:
        _1_OBF_FUNC_jumpTab[55] = (void *)530UL;
        { _1_OBF_FUNC_next___0 = 337UL; }
        break;
      case 555:
        _1_OBF_FUNC_jumpTab[178] = (void *)33UL;
        { _1_OBF_FUNC_next___0 = 328UL; }
        break;
      case 236:
        _1_OBF_FUNC_jumpTab[30] = (void *)611UL;
        { _1_OBF_FUNC_next___0 = 405UL; }
        break;
      case 488:
        _1_OBF_FUNC_jumpTab[39] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 79:
        _1_OBF_FUNC_jumpTab[113] = (void *)420UL;
        { _1_OBF_FUNC_next___0 = 378UL; }
        break;
      case 119:
        _1_OBF_FUNC_jumpTab[106] = (void *)9UL;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 582:
      _1_OBF_FUNC_lab135:;
        { _1_OBF_FUNC_next___0 = 549UL; }
        break;
      case 408:
      _1_OBF_FUNC_lab154:
        tmp___2 = rand();
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 259:
        _1_OBF_FUNC_next = 155UL;
        { _1_OBF_FUNC_next___0 = 309UL; }
        break;
      case 510:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 175:
      _1_OBF_FUNC_lab93:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 257UL; }
        break;
      case 187:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 401:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 529UL; }
        break;
      case 130:
        _1_OBF_FUNC_next = 57UL;
        { _1_OBF_FUNC_next___0 = 361UL; }
        break;
      case 115:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 111:
        _1_OBF_FUNC_jumpTab[170] = (void *)194UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 70:
        _1_OBF_FUNC_next = 180UL;
        { _1_OBF_FUNC_next___0 = 410UL; }
        break;
      case 158:
        _1_OBF_FUNC_jumpTab[139] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 533UL; }
        break;
      case 579:;
        if ((unsigned long)_index4_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 603UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 471UL; }
        }
        break;
      case 295:
        _1_OBF_FUNC_jumpTab[161] = (void *)467UL;
        { _1_OBF_FUNC_next___0 = 324UL; }
        break;
      case 186:
        _1_OBF_FUNC_jumpTab[1] = (void *)475UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 361:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 41:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 344:
        _1_OBF_FUNC_next = 161UL;
        { _1_OBF_FUNC_next___0 = 201UL; }
        break;
      case 10:
        _1_OBF_FUNC_next = 73UL;
        { _1_OBF_FUNC_next___0 = 641UL; }
        break;
      case 232:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 170UL; }
        break;
      case 633:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 333UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 36UL; }
        }
        break;
      case 247:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 273:;
        if (tmp___10 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 438UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 363UL; }
        }
        break;
      case 252:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 50UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 135UL; }
        }
        break;
      case 432:
      _1_OBF_FUNC_lab124:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 87:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 199:
      _1_OBF_FUNC_lab149:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 131UL; }
        break;
      case 43:
        _1_OBF_FUNC_jumpTab[102] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 598UL; }
        break;
      case 226:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 564UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 219UL; }
        }
        break;
      case 326:
        _1_OBF_FUNC_jumpTab[49] = (void *)73UL;
        { _1_OBF_FUNC_next___0 = 372UL; }
        break;
      case 319:
        _1_OBF_FUNC_next = 152UL;
        { _1_OBF_FUNC_next___0 = 552UL; }
        break;
      case 314:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 17:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 615:
        _1_OBF_FUNC_next = 147UL;
        { _1_OBF_FUNC_next___0 = 640UL; }
        break;
      case 561:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 193:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 358UL; }
        break;
      case 342:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 83:
        _1_OBF_FUNC_next = 138UL;
        { _1_OBF_FUNC_next___0 = 364UL; }
        break;
      case 557:
      _1_OBF_FUNC_lab183:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] *= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 478UL; }
        break;
      case 198:
        _1_OBF_FUNC_jumpTab[108] = (void *)525UL;
        { _1_OBF_FUNC_next___0 = 505UL; }
        break;
      case 393:
        _1_OBF_FUNC_jumpTab[143] = (void *)78UL;
        { _1_OBF_FUNC_next___0 = 305UL; }
        break;
      case 403:
        _1_OBF_FUNC_jumpTab[98] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 323UL; }
        break;
      case 268:
        _1_OBF_FUNC_next = 128UL;
        { _1_OBF_FUNC_next___0 = 435UL; }
        break;
      case 392:
        _1_OBF_FUNC_next = 60UL;
        { _1_OBF_FUNC_next___0 = 499UL; }
        break;
      case 322:
        _1_OBF_FUNC_jumpTab[46] = (void *)513UL;
        { _1_OBF_FUNC_next___0 = 445UL; }
        break;
      case 595:
        _1_OBF_FUNC_jumpTab[75] = (void *)60UL;
        { _1_OBF_FUNC_next___0 = 638UL; }
        break;
      case 443:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 585UL; }
        break;
      case 455:
      _1_OBF_FUNC_lab155:;
        { _1_OBF_FUNC_next___0 = 249UL; }
        break;
      case 505:
        _1_OBF_FUNC_jumpTab[109] = (void *)339UL;
        { _1_OBF_FUNC_next___0 = 575UL; }
        break;
      case 328:
        _1_OBF_FUNC_jumpTab[179] = (void *)280UL;
        { _1_OBF_FUNC_next___0 = 415UL; }
        break;
      case 560:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 378:
        _1_OBF_FUNC_jumpTab[114] = (void *)185UL;
        { _1_OBF_FUNC_next___0 = 434UL; }
        break;
      case 495:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 18:
        _1_OBF_FUNC_next = 97UL;
        { _1_OBF_FUNC_next___0 = 227UL; }
        break;
      case 88:
        _1_OBF_FUNC_jumpTab[138] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 158UL; }
        break;
      case 233:
        _1_OBF_FUNC_next = 169UL;
        { _1_OBF_FUNC_next___0 = 449UL; }
        break;
      case 297:
        _1_OBF_FUNC_jumpTab[128] = (void *)237UL;
        { _1_OBF_FUNC_next___0 = 217UL; }
        break;
      case 205:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 330:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 495UL; }
        break;
      case 168:
        _1_OBF_FUNC_jumpTab[156] = (void *)150UL;
        { _1_OBF_FUNC_next___0 = 562UL; }
        break;
      case 384:
        _1_OBF_FUNC_next = 38UL;
        { _1_OBF_FUNC_next___0 = 222UL; }
        break;
      case 507:
      _1_OBF_FUNC_lab35:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 18491586UL) * 832458029UL);
        { _1_OBF_FUNC_next___0 = 583UL; }
        break;
      case 185:
      _1_OBF_FUNC_lab116:;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 548:
      _1_OBF_FUNC_lab79:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 258UL; }
        break;
      case 622:
        _1_OBF_FUNC_next = 168UL;
        { _1_OBF_FUNC_next___0 = 321UL; }
        break;
      case 211:
        _1_OBF_FUNC_next = 52UL;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 373:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 493UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 18UL; }
        }
        break;
      case 411:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 427:
        _1_OBF_FUNC_jumpTab[95] = (void *)132UL;
        { _1_OBF_FUNC_next___0 = 317UL; }
        break;
      case 74:
        _1_OBF_FUNC_jumpTab[137] = (void *)568UL;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 207:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next___0 = 142UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 620UL; }
        }
        break;
      case 171:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 484:
        _1_OBF_FUNC_next = 118UL;
        { _1_OBF_FUNC_next___0 = 312UL; }
        break;
      case 638:
        _1_OBF_FUNC_jumpTab[76] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 581UL; }
        break;
      case 153:
        _1_OBF_FUNC_jumpTab[62] = (void *)348UL;
        { _1_OBF_FUNC_next___0 = 456UL; }
        break;
      case 338:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 62:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 308UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 474UL; }
        }
        break;
      case 500:
      _1_OBF_FUNC_lab117:
        tmp___13 = rand();
        { _1_OBF_FUNC_next___0 = 599UL; }
        break;
      case 157:
        _1_OBF_FUNC_next = 99UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 461:
        _1_OBF_FUNC_jumpTab[163] = (void *)250UL;
        { _1_OBF_FUNC_next___0 = 299UL; }
        break;
      case 613:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 357:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 156:
      _1_OBF_FUNC_lab147:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)_index4_4 % 2UL] - localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 161UL; }
        break;
      case 550:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 290:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 561UL; }
        break;
      case 569:;
        if (tmp___11 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 593UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 84UL; }
        }
        break;
      case 597:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 89:
        _1_OBF_FUNC_jumpTab[175] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 567:
        _1_OBF_FUNC_jumpTab[14] = (void *)0UL;
        { _1_OBF_FUNC_next___0 = 627UL; }
        break;
      case 96:
        _1_OBF_FUNC_jumpTab[100] = (void *)77UL;
        { _1_OBF_FUNC_next___0 = 412UL; }
        break;
      case 191:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 163UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 35UL; }
        }
        break;
      case 38:
        _1_OBF_FUNC_jumpTab[4] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 589UL; }
        break;
      case 470:
        _1_OBF_FUNC_jumpTab[7] = (void *)124UL;
        { _1_OBF_FUNC_next___0 = 240UL; }
        break;
      case 21:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 623:
      _1_OBF_FUNC_lab160:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 494UL; }
        break;
      case 540:
        _1_OBF_FUNC_jumpTab[167] = (void *)98UL;
        { _1_OBF_FUNC_next___0 = 202UL; }
        break;
      case 154:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 612UL; }
        break;
      case 603:
        _1_OBF_FUNC_next = 117UL;
        { _1_OBF_FUNC_next___0 = 528UL; }
        break;
      case 399:
        _1_OBF_FUNC_jumpTab[87] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 460UL; }
        break;
      case 92:
        _1_OBF_FUNC_next = 145UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 636:
        _1_OBF_FUNC_jumpTab[72] = (void *)423UL;
        { _1_OBF_FUNC_next___0 = 594UL; }
        break;
      case 24:
        _1_OBF_FUNC_next = 150UL;
        { _1_OBF_FUNC_next___0 = 205UL; }
        break;
      case 149:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 449:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 257:
        _1_OBF_FUNC_next = 98UL;
        { _1_OBF_FUNC_next___0 = 125UL; }
        break;
      case 306:
      _1_OBF_FUNC_lab68:;
        { _1_OBF_FUNC_next___0 = 579UL; }
        break;
      case 165:
        _1_OBF_FUNC_jumpTab[53] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 489UL; }
        break;
      case 413:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 495UL; }
        break;
      case 402:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 445:
        _1_OBF_FUNC_jumpTab[47] = (void *)476UL;
        { _1_OBF_FUNC_next___0 = 246UL; }
        break;
      case 630:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 76:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 281:;
        return (0U);
        break;
      case 132:
      _1_OBF_FUNC_lab97:;
        { _1_OBF_FUNC_next___0 = 14UL; }
        break;
      case 33:
      _1_OBF_FUNC_lab180:;
        { _1_OBF_FUNC_next___0 = 605UL; }
        break;
      case 572:
        _1_OBF_FUNC_jumpTab[13] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 567UL; }
        break;
      case 49:
        _1_OBF_FUNC_jumpTab[83] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 155:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 90:
        _1_OBF_FUNC_jumpTab[176] = (void *)195UL;
        { _1_OBF_FUNC_next___0 = 389UL; }
        break;
      case 352:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 384UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 315UL; }
        }
        break;
      case 261:
        _1_OBF_FUNC_next = 173UL;
        { _1_OBF_FUNC_next___0 = 181UL; }
        break;
      case 150:
      _1_OBF_FUNC_lab158:;
        { _1_OBF_FUNC_next___0 = 159UL; }
        break;
      case 301:
        _1_OBF_FUNC_next = 70UL;
        { _1_OBF_FUNC_next___0 = 411UL; }
        break;
      case 128:
        _1_OBF_FUNC_next = 116UL;
        { _1_OBF_FUNC_next___0 = 580UL; }
        break;
      case 506:
      _1_OBF_FUNC_lab59:
        localStaticState[0UL] = localStaticState[1UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 160UL; }
        break;
      case 469:
        _1_OBF_FUNC_next = 114UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 235:
        _1_OBF_FUNC_jumpTab[105] = (void *)472UL;
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 181:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 162:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 263:
        _1_OBF_FUNC_jumpTab[78] = (void *)97UL;
        { _1_OBF_FUNC_next___0 = 632UL; }
        break;
      case 244:
        _1_OBF_FUNC_next = 172UL;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 40:
        _1_OBF_FUNC_next = 72UL;
        { _1_OBF_FUNC_next___0 = 248UL; }
        break;
      case 55:
        _1_OBF_FUNC_jumpTab[81] = (void *)512UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 609:
        _1_OBF_FUNC_jumpTab[86] = (void *)626UL;
        { _1_OBF_FUNC_next___0 = 399UL; }
        break;
      case 531:
        _1_OBF_FUNC_jumpTab[27] = (void *)29UL;
        { _1_OBF_FUNC_next___0 = 485UL; }
        break;
      case 619:
        _1_OBF_FUNC_jumpTab[67] = (void *)520UL;
        { _1_OBF_FUNC_next___0 = 241UL; }
        break;
      case 305:
        _1_OBF_FUNC_jumpTab[144] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 477UL; }
        break;
      case 556:
        _1_OBF_FUNC_next = 157UL;
        { _1_OBF_FUNC_next___0 = 588UL; }
        break;
      case 421:
        _1_OBF_FUNC_next = 183UL;
        { _1_OBF_FUNC_next___0 = 155UL; }
        break;
      case 543:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 120UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 86UL; }
        }
        break;
      case 177:
        _1_OBF_FUNC_next = 93UL;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 0:
      _1_OBF_FUNC_lab16:
        _index4_4++;
        { _1_OBF_FUNC_next___0 = 238UL; }
        break;
      case 617:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 533:
        _1_OBF_FUNC_jumpTab[140] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 240:
        _1_OBF_FUNC_jumpTab[8] = (void *)189UL;
        { _1_OBF_FUNC_next___0 = 355UL; }
        break;
      case 213:;
        if (tmp___12 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 457UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 75UL; }
        }
        break;
      case 448:
        _1_OBF_FUNC_jumpTab[23] = (void *)266UL;
        { _1_OBF_FUNC_next___0 = 204UL; }
        break;
      case 308:
        _1_OBF_FUNC_next = 102UL;
        { _1_OBF_FUNC_next___0 = 149UL; }
        break;
      case 359:
      _1_OBF_FUNC_lab122:;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 368:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 239UL; }
        break;
      case 611:
      _1_OBF_FUNC_lab32:;
        { _1_OBF_FUNC_next___0 = 614UL; }
        break;
      case 395:
      _1_OBF_FUNC_lab76:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 301UL; }
        break;
      case 346:
        _1_OBF_FUNC_jumpTab[17] = (void *)110UL;
        { _1_OBF_FUNC_next___0 = 353UL; }
        break;
      case 148:
        _1_OBF_FUNC_jumpTab[111] = (void *)294UL;
        { _1_OBF_FUNC_next___0 = 61UL; }
        break;
      case 104:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 307:
        _1_OBF_FUNC_jumpTab[121] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 362UL; }
        break;
      case 546:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 144:
        _1_OBF_FUNC_jumpTab[84] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 282:
        _1_OBF_FUNC_jumpTab[57] = (void *)506UL;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 69:
      _1_OBF_FUNC_lab94:;
        { _1_OBF_FUNC_next___0 = 633UL; }
        break;
      case 527:
        _1_OBF_FUNC_next = 127UL;
        { _1_OBF_FUNC_next___0 = 178UL; }
        break;
      case 315:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 222UL; }
        break;
      case 608:
        _1_OBF_FUNC_jumpTab[97] = (void *)481UL;
        { _1_OBF_FUNC_next___0 = 403UL; }
        break;
      case 388:
        _1_OBF_FUNC_jumpTab[153] = (void *)455UL;
        { _1_OBF_FUNC_next___0 = 327UL; }
        break;
      case 147:
        _1_OBF_FUNC_next = 49UL;
        { _1_OBF_FUNC_next___0 = 68UL; }
        break;
      case 304:
        _1_OBF_FUNC_jumpTab[125] = (void *)419UL;
        { _1_OBF_FUNC_next___0 = 551UL; }
        break;
      case 599:
        _1_OBF_FUNC_next = 56UL;
        { _1_OBF_FUNC_next___0 = 275UL; }
        break;
      case 477:
        _1_OBF_FUNC_jumpTab[145] = (void *)156UL;
        { _1_OBF_FUNC_next___0 = 385UL; }
        break;
      case 640:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 320:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 583:
        _1_OBF_FUNC_next = 107UL;
        { _1_OBF_FUNC_next___0 = 570UL; }
        break;
      case 50:
        _1_OBF_FUNC_next = 165UL;
        { _1_OBF_FUNC_next___0 = 613UL; }
        break;
      case 431:
        _1_OBF_FUNC_next = 160UL;
        { _1_OBF_FUNC_next___0 = 597UL; }
        break;
      case 325:
        _1_OBF_FUNC_jumpTab[35] = (void *)625UL;
        { _1_OBF_FUNC_next___0 = 444UL; }
        break;
      case 410:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 363:
        _1_OBF_FUNC_next = 144UL;
        { _1_OBF_FUNC_next___0 = 320UL; }
        break;
      case 134:
        _1_OBF_FUNC_jumpTab[21] = (void *)296UL;
        { _1_OBF_FUNC_next___0 = 398UL; }
        break;
      case 501:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 145:
        _1_OBF_FUNC_jumpTab[158] = (void *)623UL;
        { _1_OBF_FUNC_next___0 = 253UL; }
        break;
      case 3:
        _1_OBF_FUNC_jumpTab[82] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 523:
        _1_OBF_FUNC_jumpTab[181] = (void *)557UL;
        { _1_OBF_FUNC_next___0 = 329UL; }
        break;
      case 635:
      _1_OBF_FUNC_lab2:
        tmp___10 = rand();
        { _1_OBF_FUNC_next___0 = 414UL; }
        break;
      case 436:
        _1_OBF_FUNC_jumpTab[123] = (void *)242UL;
        { _1_OBF_FUNC_next___0 = 278UL; }
        break;
      case 75:
        _1_OBF_FUNC_next = 175UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 258:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 180UL; }
        break;
      case 552:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 491:
        _1_OBF_FUNC_jumpTab[142] = (void *)637UL;
        { _1_OBF_FUNC_next___0 = 393UL; }
        break;
      case 553:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 493:
        _1_OBF_FUNC_next = 179UL;
        { _1_OBF_FUNC_next___0 = 227UL; }
        break;
      case 143:
        _1_OBF_FUNC_next = 138UL;
        { _1_OBF_FUNC_next___0 = 406UL; }
        break;
      case 294:
      _1_OBF_FUNC_lab113:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 484UL; }
        break;
      case 139:
        _1_OBF_FUNC_next = 155UL;
        { _1_OBF_FUNC_next___0 = 371UL; }
        break;
      case 442:
        _1_OBF_FUNC_next = 69UL;
        { _1_OBF_FUNC_next___0 = 616UL; }
        break;
      case 142:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 171UL; }
        break;
      case 416:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 58:
      _1_OBF_FUNC_lab20:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 143UL; }
        break;
      case 93:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 184:
        _1_OBF_FUNC_jumpTab[59] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 536UL; }
        break;
      case 293:
        _1_OBF_FUNC_next = 74UL;
        { _1_OBF_FUNC_next___0 = 553UL; }
        break;
      case 114:
        _1_OBF_FUNC_jumpTab[118] = (void *)316UL;
        { _1_OBF_FUNC_next___0 = 225UL; }
        break;
      case 98:
      _1_OBF_FUNC_lab169:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 433UL; }
        break;
      case 217:
        _1_OBF_FUNC_jumpTab[129] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 126UL; }
        break;
      case 2:
      _1_OBF_FUNC_lab118:;
        { _1_OBF_FUNC_next___0 = 387UL; }
        break;
      case 101:
        _1_OBF_FUNC_jumpTab[80] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 55UL; }
        break;
      case 354:
        _1_OBF_FUNC_jumpTab[174] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 626:
      _1_OBF_FUNC_lab88:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 387:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 12UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 200UL; }
        }
        break;
      case 369:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 212:
        _1_OBF_FUNC_jumpTab[91] = (void *)175UL;
        { _1_OBF_FUNC_next___0 = 558UL; }
        break;
      case 9:
      _1_OBF_FUNC_lab108:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 177UL; }
        break;
      case 618:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 274:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 53:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 503:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 438:
        _1_OBF_FUNC_next = 138UL;
        { _1_OBF_FUNC_next___0 = 320UL; }
        break;
      case 479:
        _1_OBF_FUNC_next = 171UL;
        { _1_OBF_FUNC_next___0 = 439UL; }
        break;
      case 530:
      _1_OBF_FUNC_lab57:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 244UL; }
        break;
      case 465:
        _1_OBF_FUNC_jumpTab[16] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 346UL; }
        break;
      case 195:
      _1_OBF_FUNC_lab178:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 197UL; }
        break;
      case 331:
      _1_OBF_FUNC_lab13:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 426UL; }
        break;
      case 223:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 125:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 349:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 66:
      _1_OBF_FUNC_lab105:;
        { _1_OBF_FUNC_next___0 = 543UL; }
        break;
      case 475:
      _1_OBF_FUNC_lab3:;
        { _1_OBF_FUNC_next___0 = 516UL; }
        break;
      case 317:
        _1_OBF_FUNC_jumpTab[96] = (void *)44UL;
        { _1_OBF_FUNC_next___0 = 608UL; }
        break;
      case 336:
        _1_OBF_FUNC_jumpTab[0] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 186UL; }
        break;
      case 289:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 366UL; }
        break;
      case 288:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 136:
      _1_OBF_FUNC_lab103:
        tmp___6 = rand();
        { _1_OBF_FUNC_next___0 = 486UL; }
        break;
      case 358:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 424:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 382:
        _1_OBF_FUNC_next = 113UL;
        { _1_OBF_FUNC_next___0 = 617UL; }
        break;
      case 77:
      _1_OBF_FUNC_lab102:
        tmp___9 = rand();
        { _1_OBF_FUNC_next___0 = 517UL; }
        break;
      case 574:
      _1_OBF_FUNC_lab159:;
        { _1_OBF_FUNC_next___0 = 273UL; }
        break;
      case 266:
      _1_OBF_FUNC_lab25:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 139UL; }
        break;
      case 160:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 497UL; }
        break;
      case 585:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 97:
      _1_OBF_FUNC_lab80:
        tmp = rand();
        { _1_OBF_FUNC_next___0 = 147UL; }
        break;
      case 249:;
        return ((localStaticState[0UL] + localStaticState[1UL]) - 1937745947U);
        break;
      case 516:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 112UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 105UL; }
        }
        break;
      case 459:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 342UL; }
        break;
      case 131:
        _1_OBF_FUNC_next = 88UL;
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 105:
        _1_OBF_FUNC_next = 110UL;
        { _1_OBF_FUNC_next___0 = 138UL; }
        break;
      case 537:
        _1_OBF_FUNC_jumpTab[61] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 153UL; }
        break;
      case 391:
        _1_OBF_FUNC_next = 126UL;
        { _1_OBF_FUNC_next___0 = 277UL; }
        break;
      case 489:
        _1_OBF_FUNC_jumpTab[54] = (void *)440UL;
        { _1_OBF_FUNC_next___0 = 446UL; }
        break;
      case 494:
        _1_OBF_FUNC_next = 112UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 124:
      _1_OBF_FUNC_lab9:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 335:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 92UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 16UL; }
        }
        break;
      case 260:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 606UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 104UL; }
        }
        break;
      case 463:
        _1_OBF_FUNC_jumpTab[172] = (void *)380UL;
        { _1_OBF_FUNC_next___0 = 441UL; }
        break;
      case 54:
      _1_OBF_FUNC_lab153:;
        { _1_OBF_FUNC_next___0 = 532UL; }
        break;
      case 188:
      _1_OBF_FUNC_lab179:
        tmp___3 = rand();
        { _1_OBF_FUNC_next___0 = 289UL; }
        break;
      case 545:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 631:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 274UL; }
        break;
      case 551:
        _1_OBF_FUNC_jumpTab[126] = (void *)209UL;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 473:
        _1_OBF_FUNC_jumpTab[147] = (void *)199UL;
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 606:
        _1_OBF_FUNC_next = 174UL;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 108:
        _1_OBF_FUNC_next = 77UL;
        { _1_OBF_FUNC_next___0 = 167UL; }
        break;
      case 594:
        _1_OBF_FUNC_jumpTab[73] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 118UL; }
        break;
      case 183:
        _1_OBF_FUNC_next = 109UL;
        { _1_OBF_FUNC_next___0 = 338UL; }
        break;
      case 485:
        _1_OBF_FUNC_jumpTab[28] = (void *)464UL;
        { _1_OBF_FUNC_next___0 = 228UL; }
        break;
      case 632:
        _1_OBF_FUNC_jumpTab[79] = (void *)292UL;
        { _1_OBF_FUNC_next___0 = 101UL; }
        break;
      case 508:
        _1_OBF_FUNC_next = 69UL;
        { _1_OBF_FUNC_next___0 = 630UL; }
        break;
      case 587:
      _1_OBF_FUNC_lab166:
        _index4_4++;
        { _1_OBF_FUNC_next___0 = 592UL; }
        break;
      case 60:
      _1_OBF_FUNC_lab77:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 536:
        _1_OBF_FUNC_jumpTab[60] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 537UL; }
        break;
      case 208:
        _1_OBF_FUNC_jumpTab[117] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 114UL; }
        break;
      case 230:;
        if ((unsigned long)_index4_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 401UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 383UL; }
        }
        break;
      case 255:
        _1_OBF_FUNC_next = 129UL;
        { _1_OBF_FUNC_next___0 = 416UL; }
        break;
      case 339:
      _1_OBF_FUNC_lab111:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 364:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 250:
      _1_OBF_FUNC_lab165:
        tmp___8 = rand();
        { _1_OBF_FUNC_next___0 = 261UL; }
        break;
      case 452:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 52UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 556UL; }
        }
        break;
      case 100:
        _1_OBF_FUNC_jumpTab[149] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 102:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 112:
        _1_OBF_FUNC_next = 118UL;
        { _1_OBF_FUNC_next___0 = 138UL; }
        break;
      case 498:
      _1_OBF_FUNC_lab92:;
        { _1_OBF_FUNC_next___0 = 137UL; }
        break;
      case 169:
        _1_OBF_FUNC_next = 97UL;
        { _1_OBF_FUNC_next___0 = 349UL; }
        break;
      case 19:
        _1_OBF_FUNC_next = 79UL;
        { _1_OBF_FUNC_next___0 = 264UL; }
        break;
      case 137:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 10UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 360UL; }
        }
        break;
      case 206:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 120:
        _1_OBF_FUNC_next = 177UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 35:
        _1_OBF_FUNC_next = 115UL;
        { _1_OBF_FUNC_next___0 = 300UL; }
        break;
      case 444:
        _1_OBF_FUNC_jumpTab[36] = (void *)20UL;
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 407:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 546UL; }
        break;
      case 234:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 39:
        _1_OBF_FUNC_next = 122UL;
        { _1_OBF_FUNC_next___0 = 187UL; }
        break;
      case 400:
      _1_OBF_FUNC_lab52:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 122UL; }
        break;
      case 412:
        _1_OBF_FUNC_jumpTab[101] = (void *)136UL;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 558:
        _1_OBF_FUNC_jumpTab[92] = (void *)69UL;
        { _1_OBF_FUNC_next___0 = 279UL; }
        break;
      case 180:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 276:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 284:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 11UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 442UL; }
        }
        break;
      case 433:
        _1_OBF_FUNC_next = 92UL;
        { _1_OBF_FUNC_next___0 = 267UL; }
        break;
      case 355:
        _1_OBF_FUNC_jumpTab[9] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 607UL; }
        break;
      case 386:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 246:
        _1_OBF_FUNC_jumpTab[48] = (void *)458UL;
        { _1_OBF_FUNC_next___0 = 326UL; }
        break;
      case 377:
        _1_OBF_FUNC_next = 155UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 182:
        _1_OBF_FUNC_next = 51UL;
        { _1_OBF_FUNC_next___0 = 265UL; }
        break;
      case 356:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 397UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 469UL; }
        }
        break;
      case 340:
      _1_OBF_FUNC_lab112:
        _index4_4++;
        { _1_OBF_FUNC_next___0 = 628UL; }
        break;
      case 197:
        _1_OBF_FUNC_next = 69UL;
        { _1_OBF_FUNC_next___0 = 288UL; }
        break;
      case 423:
      _1_OBF_FUNC_lab74:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 167:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 371:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 109:
        _1_OBF_FUNC_jumpTab[141] = (void *)133UL;
        { _1_OBF_FUNC_next___0 = 491UL; }
        break;
      case 564:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 314UL; }
        break;
      case 504:
        _1_OBF_FUNC_next = 167UL;
        { _1_OBF_FUNC_next___0 = 416UL; }
        break;
      case 225:
        _1_OBF_FUNC_jumpTab[119] = (void *)215UL;
        { _1_OBF_FUNC_next___0 = 220UL; }
        break;
      case 578:
        _1_OBF_FUNC_jumpTab[134] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 256UL; }
        break;
      case 492:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 26:
        _1_OBF_FUNC_jumpTab[40] = (void *)343UL;
        { _1_OBF_FUNC_next___0 = 522UL; }
        break;
      case 170:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 270:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 472:
      _1_OBF_FUNC_lab107:
        localStaticState[1UL] = (unsigned int)(((unsigned long)input - 879383067UL) + 1063464788UL * (unsigned long)localStaticState[0UL]);
        { _1_OBF_FUNC_next___0 = 604UL; }
        break;
      case 418:
        _1_OBF_FUNC_jumpTab[64] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 554UL; }
        break;
      case 275:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 286:
        _1_OBF_FUNC_jumpTab[166] = (void *)428UL;
        { _1_OBF_FUNC_next___0 = 540UL; }
        break;
      case 248:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 321:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 224:
        _1_OBF_FUNC_next = 105UL;
        { _1_OBF_FUNC_next___0 = 439UL; }
        break;
      case 178:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 591:
        _1_OBF_FUNC_jumpTab[155] = (void *)216UL;
        { _1_OBF_FUNC_next___0 = 168UL; }
        break;
      case 159:;
        if (tmp___9 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 330UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 413UL; }
        }
        break;
      case 277:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 624:
      _1_OBF_FUNC_lab4:;
        { _1_OBF_FUNC_next___0 = 226UL; }
        break;
      case 36:
        _1_OBF_FUNC_next = 149UL;
        { _1_OBF_FUNC_next___0 = 357UL; }
        break;
      case 447:
        _1_OBF_FUNC_jumpTab[132] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 229UL; }
        break;
      case 81:
        _1_OBF_FUNC_jumpTab[43] = (void *)203UL;
        { _1_OBF_FUNC_next___0 = 576UL; }
        break;
      case 133:
      _1_OBF_FUNC_lab143:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 629UL; }
        break;
      case 466:
      _1_OBF_FUNC_lab21:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next___0 = 459UL; }
        break;
      case 478:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 247UL; }
        break;
      case 121:
        _1_OBF_FUNC_jumpTab[20] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 532:;
        if ((unsigned long)_index4_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 270UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 377UL; }
        }
        break;
      case 194:
      _1_OBF_FUNC_lab172:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 193UL; }
        break;
      case 453:
      _1_OBF_FUNC_lab36:;
        { _1_OBF_FUNC_next___0 = 191UL; }
        break;
      case 27:
      _1_OBF_FUNC_lab65:
        tmp___12 = rand();
        { _1_OBF_FUNC_next___0 = 183UL; }
        break;
      case 571:
        _1_OBF_FUNC_jumpTab[151] = (void *)54UL;
        { _1_OBF_FUNC_next___0 = 166UL; }
        break;
      case 265:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 209:
      _1_OBF_FUNC_lab128:;
        { _1_OBF_FUNC_next___0 = 563UL; }
        break;
      case 82:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 166:
        _1_OBF_FUNC_jumpTab[152] = (void *)408UL;
        { _1_OBF_FUNC_next___0 = 388UL; }
        break;
      case 596:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 311UL; }
        break;
      case 280:
      _1_OBF_FUNC_lab181:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 520:
      _1_OBF_FUNC_lab69:;
        { _1_OBF_FUNC_next___0 = 373UL; }
        break;
      case 397:
        _1_OBF_FUNC_next = 180UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 4:
        _1_OBF_FUNC_jumpTab[85] = (void *)365UL;
        { _1_OBF_FUNC_next___0 = 609UL; }
        break;
      case 291:
        _1_OBF_FUNC_jumpTab[94] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 427UL; }
        break;
      case 450:
        _1_OBF_FUNC_next = 155UL;
        { _1_OBF_FUNC_next___0 = 274UL; }
        break;
      case 389:
        _1_OBF_FUNC_jumpTab[177] = (void *)188UL;
        { _1_OBF_FUNC_next___0 = 555UL; }
        break;
      case 415:
        _1_OBF_FUNC_jumpTab[180] = (void *)71UL;
        { _1_OBF_FUNC_next___0 = 523UL; }
        break;
      case 68:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 487:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 364UL; }
        break;
      case 610:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 639:
        _1_OBF_FUNC_next = 64UL;
        { _1_OBF_FUNC_next___0 = 417UL; }
        break;
      case 474:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 149UL; }
        break;
      case 563:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 190UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 130UL; }
        }
        break;
      case 460:
        _1_OBF_FUNC_jumpTab[88] = (void *)451UL;
        { _1_OBF_FUNC_next___0 = 214UL; }
        break;
      case 227:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 565:
      _1_OBF_FUNC_lab129:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 290UL; }
        break;
      case 422:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 483:
        _1_OBF_FUNC_jumpTab[131] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 447UL; }
        break;
      case 201:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 380:
      _1_OBF_FUNC_lab174:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 535UL; }
        break;
      case 20:
      _1_OBF_FUNC_lab38:
        tmp___5 = rand();
        { _1_OBF_FUNC_next___0 = 232UL; }
        break;
      case 200:
        _1_OBF_FUNC_next = 128UL;
        { _1_OBF_FUNC_next___0 = 404UL; }
        break;
      case 129:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 93UL; }
        break;
      case 370:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 5:
        _1_OBF_FUNC_jumpTab[171] = (void *)173UL;
        { _1_OBF_FUNC_next___0 = 463UL; }
        break;
      case 237:
      _1_OBF_FUNC_lab130:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 196UL; }
        break;
      case 215:
      _1_OBF_FUNC_lab121:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)_index4_4 % 2UL] - localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 91UL; }
        break;
      case 534:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 251:
        _1_OBF_FUNC_next = 130UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 210:
        _1_OBF_FUNC_next = 178UL;
        { _1_OBF_FUNC_next___0 = 310UL; }
        break;
      case 337:
        _1_OBF_FUNC_jumpTab[56] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 282UL; }
        break;
      case 127:
        _1_OBF_FUNC_next = 121UL;
        { _1_OBF_FUNC_next___0 = 422UL; }
        break;
      case 497:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 482:
        _1_OBF_FUNC_next = 94UL;
        { _1_OBF_FUNC_next___0 = 72UL; }
        break;
      case 327:
        _1_OBF_FUNC_jumpTab[154] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 591UL; }
        break;
      case 267:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 554:
        _1_OBF_FUNC_jumpTab[65] = (void *)566UL;
        { _1_OBF_FUNC_next___0 = 116UL; }
        break;
      case 570:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 103:
        _1_OBF_FUNC_jumpTab[34] = (void *)453UL;
        { _1_OBF_FUNC_next___0 = 325UL; }
        break;
      case 517:
        _1_OBF_FUNC_next = 158UL;
        { _1_OBF_FUNC_next___0 = 542UL; }
        break;
      case 303:
        _1_OBF_FUNC_jumpTab[71] = (void *)621UL;
        { _1_OBF_FUNC_next___0 = 636UL; }
        break;
      case 29:
      _1_OBF_FUNC_lab29:
        localStaticState[0UL] -= localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 421UL; }
        break;
      case 264:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 318:
        _1_OBF_FUNC_next = 153UL;
        { _1_OBF_FUNC_next___0 = 545UL; }
        break;
      case 627:
        _1_OBF_FUNC_jumpTab[15] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 465UL; }
        break;
      case 343:
      _1_OBF_FUNC_lab42:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 547UL; }
        break;
      case 67:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 14:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 527UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 381UL; }
        }
        break;
      case 518:
        _1_OBF_FUNC_next = 182UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 106:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 386UL; }
        break;
      case 228:
        _1_OBF_FUNC_jumpTab[29] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 236UL; }
        break;
      case 262:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 631UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 450UL; }
        }
        break;
      case 539:
        _1_OBF_FUNC_jumpTab[42] = (void *)351UL;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 13:
        _1_OBF_FUNC_jumpTab[127] = (void *)565UL;
        { _1_OBF_FUNC_next___0 = 297UL; }
        break;
      case 365:
      _1_OBF_FUNC_lab87:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 182UL; }
        break;
      case 11:
        _1_OBF_FUNC_next = 80UL;
        { _1_OBF_FUNC_next___0 = 616UL; }
        break;
      case 179:
      _1_OBF_FUNC_lab152:;
        { _1_OBF_FUNC_next___0 = 396UL; }
        break;
      case 316:
      _1_OBF_FUNC_lab120:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 518UL; }
        break;
      case 580:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 216:
      _1_OBF_FUNC_lab157:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 434:
        _1_OBF_FUNC_jumpTab[115] = (void *)500UL;
        { _1_OBF_FUNC_next___0 = 347UL; }
        break;
      case 604:
        _1_OBF_FUNC_next = 135UL;
        { _1_OBF_FUNC_next___0 = 501UL; }
        break;
      case 480:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 541UL; }
        break;
      case 467:
      _1_OBF_FUNC_lab163:;
        { _1_OBF_FUNC_next___0 = 352UL; }
        break;
      case 312:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 44:
      _1_OBF_FUNC_lab98:;
        { _1_OBF_FUNC_next___0 = 252UL; }
        break;
      case 16:
        _1_OBF_FUNC_next = 76UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 586:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 529:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 637:
      _1_OBF_FUNC_lab144:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 490UL; }
        break;
      case 138:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 350:
      _1_OBF_FUNC_lab109:;
        { _1_OBF_FUNC_next___0 = 213UL; }
        break;
      case 254:
      _1_OBF_FUNC_lab70:
        _index0_3++;
        { _1_OBF_FUNC_next___0 = 169UL; }
        break;
      case 296:
      _1_OBF_FUNC_lab23:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 268UL; }
        break;
      case 238:
        _1_OBF_FUNC_next = 71UL;
        { _1_OBF_FUNC_next___0 = 534UL; }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 269:
        _1_OBF_FUNC_jumpTab[19] = (void *)466UL;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 253:
        _1_OBF_FUNC_jumpTab[159] = (void *)231UL;
        { _1_OBF_FUNC_next___0 = 462UL; }
        break;
      case 628:
        _1_OBF_FUNC_next = 72UL;
        { _1_OBF_FUNC_next___0 = 369UL; }
        break;
      case 126:
        _1_OBF_FUNC_jumpTab[130] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 483UL; }
        break;
      case 313:
      _1_OBF_FUNC_lab177:
        tmp___1 = rand();
        { _1_OBF_FUNC_next___0 = 511UL; }
        break;
      case 496:
        _1_OBF_FUNC_next = 105UL;
        { _1_OBF_FUNC_next___0 = 510UL; }
        break;
      case 417:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 524:
      _1_OBF_FUNC_lab14:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 496UL; }
        break;
      case 481:
      _1_OBF_FUNC_lab99:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 203:
      _1_OBF_FUNC_lab45:;
        { _1_OBF_FUNC_next___0 = 284UL; }
        break;
      case 204:
        _1_OBF_FUNC_jumpTab[24] = (void *)113UL;
        { _1_OBF_FUNC_next___0 = 376UL; }
        break;
      case 535:
        _1_OBF_FUNC_next = 124UL;
        { _1_OBF_FUNC_next___0 = 245UL; }
        break;
      case 614:;
        if ((localStaticState[0UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next___0 = 504UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 255UL; }
        }
        break;
      case 7:
        _1_OBF_FUNC_jumpTab[150] = (void *)179UL;
        { _1_OBF_FUNC_next___0 = 571UL; }
        break;
      case 229:
        _1_OBF_FUNC_jumpTab[133] = (void *)582UL;
        { _1_OBF_FUNC_next___0 = 578UL; }
        break;
      case 351:
      _1_OBF_FUNC_lab44:
        tmp___11 = rand();
        { _1_OBF_FUNC_next___0 = 106UL; }
        break;
      case 72:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 272:;
        if ((unsigned long)_index4_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 51UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 368UL; }
        }
        break;
      case 616:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 353:
        _1_OBF_FUNC_jumpTab[18] = (void *)58UL;
        { _1_OBF_FUNC_next___0 = 269UL; }
        break;
      case 476:
      _1_OBF_FUNC_lab49:;
        { _1_OBF_FUNC_next___0 = 437UL; }
        break;
      case 99:
      _1_OBF_FUNC_lab175:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 615UL; }
        break;
      case 151:
      _1_OBF_FUNC_lab167:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 129UL; }
        break;
      case 25:
        _1_OBF_FUNC_next = 108UL;
        { _1_OBF_FUNC_next___0 = 541UL; }
        break;
      case 220:
        _1_OBF_FUNC_jumpTab[120] = (void *)359UL;
        { _1_OBF_FUNC_next___0 = 307UL; }
        break;
      case 172:
        _1_OBF_FUNC_jumpTab[51] = (void *)584UL;
        { _1_OBF_FUNC_next___0 = 429UL; }
        break;
      case 107:
        _1_OBF_FUNC_next = 98UL;
        { _1_OBF_FUNC_next___0 = 550UL; }
        break;
      case 113:
      _1_OBF_FUNC_lab26:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 251UL; }
        break;
      case 549:;
        switch ((unsigned long)((int)(localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL])) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 402UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 407UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 391UL;
        } break;
        }
        break;
      case 302:
        _1_OBF_FUNC_jumpTab[3] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 38UL; }
        break;
      case 440:
      _1_OBF_FUNC_lab56:;
        { _1_OBF_FUNC_next___0 = 559UL; }
        break;
      case 146:
        _1_OBF_FUNC_jumpTab[45] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 322UL; }
        break;
      case 394:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 487UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 83UL; }
        }
        break;
      case 525:
      _1_OBF_FUNC_lab110:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 375UL; }
        break;
      case 451:
      _1_OBF_FUNC_lab90:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 458:
      _1_OBF_FUNC_lab50:;
        { _1_OBF_FUNC_next___0 = 262UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 122UL;
        { _1_OBF_FUNC_next___0 = 588UL; }
        break;
      case 287:
      _1_OBF_FUNC_lab150:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 218:
        _1_OBF_FUNC_jumpTab[26] = (void *)514UL;
        { _1_OBF_FUNC_next___0 = 531UL; }
        break;
      case 592:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 276UL; }
        break;
      case 360:
        _1_OBF_FUNC_next = 163UL;
        { _1_OBF_FUNC_next___0 = 641UL; }
        break;
      case 512:
      _1_OBF_FUNC_lab83:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)_index4_4 % 2UL] - localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 596UL; }
        break;
      case 42:
        _1_OBF_FUNC_jumpTab[38] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 488UL; }
        break;
      case 456:
        _1_OBF_FUNC_jumpTab[63] = (void *)27UL;
        { _1_OBF_FUNC_next___0 = 418UL; }
        break;
      case 23:
        _1_OBF_FUNC_next = 181UL;
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      case 457:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 196:
        _1_OBF_FUNC_next = 139UL;
        { _1_OBF_FUNC_next___0 = 283UL; }
        break;
      case 462:
        _1_OBF_FUNC_jumpTab[160] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 295UL; }
        break;
      case 78:
      _1_OBF_FUNC_lab145:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 443UL; }
        break;
      case 406:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 605:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 285UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 344UL; }
        }
        break;
      case 47:
      _1_OBF_FUNC_lab71:;
        { _1_OBF_FUNC_next___0 = 272UL; }
        break;
      case 242:
      _1_OBF_FUNC_lab125:
        _index4_4++;
        { _1_OBF_FUNC_next___0 = 318UL; }
        break;
      case 437:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 508UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 164UL; }
        }
        break;
      case 45:
        _1_OBF_FUNC_next = 163UL;
        { _1_OBF_FUNC_next___0 = 370UL; }
        break;
      case 362:
        _1_OBF_FUNC_jumpTab[122] = (void *)432UL;
        { _1_OBF_FUNC_next___0 = 436UL; }
        break;
      case 602:
        _1_OBF_FUNC_next = 153UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 435:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 430:
        _1_OBF_FUNC_jumpTab[33] = (void *)507UL;
        { _1_OBF_FUNC_next___0 = 103UL; }
        break;
      case 221:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 116:
        _1_OBF_FUNC_jumpTab[66] = (void *)306UL;
        { _1_OBF_FUNC_next___0 = 619UL; }
        break;
      case 324:
        _1_OBF_FUNC_jumpTab[162] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 461UL; }
        break;
      case 173:
      _1_OBF_FUNC_lab173:;
        { _1_OBF_FUNC_next___0 = 452UL; }
        break;
      case 285:
        _1_OBF_FUNC_next = 28UL;
        { _1_OBF_FUNC_next___0 = 201UL; }
        break;
      case 135:
        _1_OBF_FUNC_next = 122UL;
        { _1_OBF_FUNC_next___0 = 613UL; }
        break;
      case 32:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 468:
        _1_OBF_FUNC_next = 155UL;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 544:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 641:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 588:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 439:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 73:
      _1_OBF_FUNC_lab51:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 639UL; }
        break;
      case 219:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 314UL; }
        break;
      case 85:
        _1_OBF_FUNC_next = 139UL;
        { _1_OBF_FUNC_next___0 = 234UL; }
        break;
      case 84:
        _1_OBF_FUNC_next = 120UL;
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 542:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 176:
        _1_OBF_FUNC_jumpTab[12] = (void *)524UL;
        { _1_OBF_FUNC_next___0 = 572UL; }
        break;
      case 598:
        _1_OBF_FUNC_jumpTab[103] = (void *)66UL;
        { _1_OBF_FUNC_next___0 = 590UL; }
        break;
      case 499:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 379:
        _1_OBF_FUNC_jumpTab[165] = (void *)151UL;
        { _1_OBF_FUNC_next___0 = 286UL; }
        break;
      case 511:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 41UL; }
        break;
      case 8:
      _1_OBF_FUNC_lab126:
        localStaticState[1UL] *= localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 468UL; }
        break;
      case 538:
        _1_OBF_FUNC_next = 128UL;
        { _1_OBF_FUNC_next___0 = 321UL; }
        break;
      case 51:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 239UL; }
        break;
      case 513:
      _1_OBF_FUNC_lab48:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 293UL; }
        break;
      case 110:
      _1_OBF_FUNC_lab19:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 141:
      _1_OBF_FUNC_lab114:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 332UL; }
        break;
      case 426:
        _1_OBF_FUNC_next = 125UL;
        { _1_OBF_FUNC_next___0 = 544UL; }
        break;
      case 63:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next___0 = 538UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 622UL; }
        }
        break;
      case 271:
        _1_OBF_FUNC_jumpTab[69] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 526UL; }
        break;
      case 22:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 581:
        _1_OBF_FUNC_jumpTab[77] = (void *)548UL;
        { _1_OBF_FUNC_next___0 = 263UL; }
        break;
      case 71:
      _1_OBF_FUNC_lab182:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)_index4_4 % 2UL] - localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 431UL; }
        break;
      case 278:
        _1_OBF_FUNC_jumpTab[124] = (void *)8UL;
        { _1_OBF_FUNC_next___0 = 304UL; }
        break;
      case 454:
        _1_OBF_FUNC_jumpTab[90] = (void *)498UL;
        { _1_OBF_FUNC_next___0 = 212UL; }
        break;
      case 118:
        _1_OBF_FUNC_jumpTab[74] = (void *)395UL;
        { _1_OBF_FUNC_next___0 = 595UL; }
        break;
      case 56:
        _1_OBF_FUNC_jumpTab[107] = (void *)350UL;
        { _1_OBF_FUNC_next___0 = 198UL; }
        break;
      case 152:
      _1_OBF_FUNC_lab8:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 521UL; }
        break;
      case 243:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 381:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 178UL; }
        break;
      case 620:
        _1_OBF_FUNC_next = 59UL;
        { _1_OBF_FUNC_next___0 = 171UL; }
        break;
      case 329:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 376:
        _1_OBF_FUNC_jumpTab[25] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 218UL; }
        break;
      case 519:
        _1_OBF_FUNC_jumpTab[11] = (void *)331UL;
        { _1_OBF_FUNC_next___0 = 176UL; }
        break;
      case 405:
        _1_OBF_FUNC_jumpTab[31] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 409UL; }
        break;
      case 441:
        _1_OBF_FUNC_jumpTab[173] = (void *)99UL;
        { _1_OBF_FUNC_next___0 = 354UL; }
        break;
      case 161:
        _1_OBF_FUNC_next = 81UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 189:
      _1_OBF_FUNC_lab10:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 174:
        _1_OBF_FUNC_next = 180UL;
        { _1_OBF_FUNC_next___0 = 206UL; }
        break;
      case 95:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 576:
        _1_OBF_FUNC_jumpTab[44] = (void *)64UL;
        { _1_OBF_FUNC_next___0 = 146UL; }
        break;
      case 502:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 479UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 224UL; }
        }
        break;
      case 1:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 140:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 64:
      _1_OBF_FUNC_lab46:;
        { _1_OBF_FUNC_next___0 = 394UL; }
        break;
      case 323:
        _1_OBF_FUNC_jumpTab[99] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 96UL; }
        break;
      case 409:
        _1_OBF_FUNC_jumpTab[32] = (void *)509UL;
        { _1_OBF_FUNC_next___0 = 430UL; }
        break;
      case 471:
        _1_OBF_FUNC_next = 153UL;
        { _1_OBF_FUNC_next___0 = 528UL; }
        break;
      case 202:
        _1_OBF_FUNC_jumpTab[168] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 298UL; }
        break;
      case 117:
        _1_OBF_FUNC_next = 92UL;
        { _1_OBF_FUNC_next___0 = 503UL; }
        break;
      case 526:
        _1_OBF_FUNC_jumpTab[70] = (void *)573UL;
        { _1_OBF_FUNC_next___0 = 303UL; }
        break;
      case 522:
        _1_OBF_FUNC_jumpTab[41] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 539UL; }
        break;
      case 311:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 625:
      _1_OBF_FUNC_lab37:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 259UL; }
        break;
      case 612:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 528:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 601:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 334UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 174UL; }
        }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 367:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 15:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 341:
      _1_OBF_FUNC_lab60:;
        { _1_OBF_FUNC_next___0 = 390UL; }
        break;
      case 332:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 192UL; }
        break;
      case 577:
      _1_OBF_FUNC_lab171:
        tmp___0 = rand();
        { _1_OBF_FUNC_next___0 = 319UL; }
        break;
      case 279:
        _1_OBF_FUNC_jumpTab[93] = (void *)635UL;
        { _1_OBF_FUNC_next___0 = 291UL; }
        break;
      case 239:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 2UL];
        }
        break;
      case 414:
        _1_OBF_FUNC_next = 159UL;
        { _1_OBF_FUNC_next___0 = 618UL; }
        break;
      }
    }
  }
}
// variants: loop-fission, flatten, flatten
// expanded variants: loop-fission, flatten:indirect-goto, flatten:switch
