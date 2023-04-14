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
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
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
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  int tmp___33;
  int tmp___34;
  int tmp___35;
  int tmp___36;
  int tmp___37;
  int tmp___38;
  int tmp___39;
  int tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
  int tmp___44;
  int tmp___45;
  int tmp___46;
  int tmp___47;
  int tmp___48;
  int tmp___49;
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 350UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 92:
        tmp___14 = rand();
        { _1_OBF_FUNC_next = 277UL; }
        break;
      case 468:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next = 274UL; }
        } else {
          { _1_OBF_FUNC_next = 448UL; }
        }
        break;
      case 395:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 399UL; }
        break;
      case 586:
        tmp___28 = rand();
        { _1_OBF_FUNC_next = 217UL; }
        break;
      case 96:
        tmp___40 = rand();
        { _1_OBF_FUNC_next = 151UL; }
        break;
      case 452:
        tmp___8 = rand();
        { _1_OBF_FUNC_next = 468UL; }
        break;
      case 289:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 390UL; }
        break;
      case 241:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 453UL; }
        break;
      case 409:
        tmp___31 = rand();
        { _1_OBF_FUNC_next = 457UL; }
        break;
      case 346:;
        if (tmp___21 % 10 >= 5) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 400UL; }
        }
        break;
      case 511:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 159:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 484UL; }
        break;
      case 606:;
        if (tmp___47 % 10 >= 5) {
          { _1_OBF_FUNC_next = 33UL; }
        } else {
          { _1_OBF_FUNC_next = 577UL; }
        }
        break;
      case 585:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 116UL; }
        break;
      case 580:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 586UL; }
        } else {
          { _1_OBF_FUNC_next = 281UL; }
        }
        break;
      case 2:
        tmp___12 = rand();
        { _1_OBF_FUNC_next = 89UL; }
        break;
      case 280:
        _index8_0++;
        { _1_OBF_FUNC_next = 147UL; }
        break;
      case 151:;
        if (tmp___40 % 10 >= 5) {
          { _1_OBF_FUNC_next = 138UL; }
        } else {
          { _1_OBF_FUNC_next = 515UL; }
        }
        break;
      case 484:
        _index8_0++;
        { _1_OBF_FUNC_next = 210UL; }
        break;
      case 223:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 582UL; }
        } else {
          { _1_OBF_FUNC_next = 51UL; }
        }
        break;
      case 302:
        tmp___29 = rand();
        { _1_OBF_FUNC_next = 311UL; }
        break;
      case 607:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 257UL; }
        break;
      case 290:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 45UL; }
        break;
      case 114:;
        if (tmp___15 % 10 >= 5) {
          { _1_OBF_FUNC_next = 170UL; }
        } else {
          { _1_OBF_FUNC_next = 407UL; }
        }
        break;
      case 60:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 359UL; }
        } else {
          { _1_OBF_FUNC_next = 518UL; }
        }
        break;
      case 542:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 165UL; }
        break;
      case 460:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 590UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 436:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 98UL; }
        break;
      case 91:;
        if (tmp___13 % 10 >= 5) {
          { _1_OBF_FUNC_next = 594UL; }
        } else {
          { _1_OBF_FUNC_next = 499UL; }
        }
        break;
      case 486:
        _index8_0++;
        { _1_OBF_FUNC_next = 140UL; }
        break;
      case 583:;
        if (tmp___26 % 10 >= 5) {
          { _1_OBF_FUNC_next = 509UL; }
        } else {
          { _1_OBF_FUNC_next = 494UL; }
        }
        break;
      case 123:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 284UL; }
        break;
      case 495:
        tmp___34 = rand();
        { _1_OBF_FUNC_next = 261UL; }
        break;
      case 487:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 243UL; }
        break;
      case 4:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 192UL; }
        break;
      case 437:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 161UL; }
        break;
      case 404:
        _index8_0++;
        { _1_OBF_FUNC_next = 427UL; }
        break;
      case 378:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 61UL; }
        } else {
          { _1_OBF_FUNC_next = 594UL; }
        }
        break;
      case 177:;
        if (tmp___24 % 10 >= 5) {
          { _1_OBF_FUNC_next = 147UL; }
        } else {
          { _1_OBF_FUNC_next = 429UL; }
        }
        break;
      case 100:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 525UL; }
        break;
      case 196:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 576UL; }
        break;
      case 457:;
        if (tmp___31 % 10 >= 5) {
          { _1_OBF_FUNC_next = 43UL; }
        } else {
          { _1_OBF_FUNC_next = 1UL; }
        }
        break;
      case 242:;
        if (tmp___41 % 10 >= 5) {
          { _1_OBF_FUNC_next = 39UL; }
        } else {
          { _1_OBF_FUNC_next = 321UL; }
        }
        break;
      case 200:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 330UL; }
        } else {
          { _1_OBF_FUNC_next = 58UL; }
        }
        break;
      case 573:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 328UL; }
        break;
      case 406:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 351UL; }
        break;
      case 98:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 182UL; }
        } else {
          { _1_OBF_FUNC_next = 587UL; }
        }
        break;
      case 87:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 413:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 372UL; }
        break;
      case 152:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 153UL; }
        break;
      case 386:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 328:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 154UL; }
        } else {
          { _1_OBF_FUNC_next = 483UL; }
        }
        break;
      case 118:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next = 434UL; }
        } else {
          { _1_OBF_FUNC_next = 463UL; }
        }
        break;
      case 31:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 115UL; }
        break;
      case 30:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 271UL; }
        } else {
          { _1_OBF_FUNC_next = 121UL; }
        }
        break;
      case 356:
        _index8_0++;
        { _1_OBF_FUNC_next = 80UL; }
        break;
      case 122:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 332UL; }
        } else {
          { _1_OBF_FUNC_next = 580UL; }
        }
        break;
      case 185:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 458UL; }
        } else {
          { _1_OBF_FUNC_next = 599UL; }
        }
        break;
      case 38:
        tmp___41 = rand();
        { _1_OBF_FUNC_next = 242UL; }
        break;
      case 134:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 501UL; }
        } else {
          { _1_OBF_FUNC_next = 26UL; }
        }
        break;
      case 407:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 566UL; }
        break;
      case 372:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 221UL; }
        break;
      case 415:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 479UL; }
        } else {
          { _1_OBF_FUNC_next = 391UL; }
        }
        break;
      case 588:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 532UL; }
        } else {
          { _1_OBF_FUNC_next = 17UL; }
        }
        break;
      case 397:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 196UL; }
        break;
      case 595:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 71UL; }
        } else {
          { _1_OBF_FUNC_next = 449UL; }
        }
        break;
      case 427:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 286UL; }
        } else {
          { _1_OBF_FUNC_next = 112UL; }
        }
        break;
      case 416:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 598UL; }
        break;
      case 9:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 513:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 335UL; }
        break;
      case 525:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 268UL; }
        break;
      case 454:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 60UL; }
        break;
      case 17:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 395UL; }
        }
        break;
      case 422:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 147:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 549UL; }
        } else {
          { _1_OBF_FUNC_next = 191UL; }
        }
        break;
      case 319:
        _index8_0++;
        { _1_OBF_FUNC_next = 470UL; }
        break;
      case 298:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 527UL; }
        break;
      case 390:
        _index8_0++;
        { _1_OBF_FUNC_next = 387UL; }
        break;
      case 264:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 490UL; }
        break;
      case 180:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 442UL; }
        break;
      case 355:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 347UL; }
        break;
      case 281:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 302UL; }
        } else {
          { _1_OBF_FUNC_next = 269UL; }
        }
        break;
      case 430:
        tmp___5 = rand();
        { _1_OBF_FUNC_next = 502UL; }
        break;
      case 206:
        _index8_0++;
        { _1_OBF_FUNC_next = 580UL; }
        break;
      case 24:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 425UL; }
        } else {
          { _1_OBF_FUNC_next = 285UL; }
        }
        break;
      case 201:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 237UL; }
        break;
      case 39:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 132UL; }
        } else {
          { _1_OBF_FUNC_next = 369UL; }
        }
        break;
      case 545:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 231UL; }
        break;
      case 110:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 26UL; }
        break;
      case 398:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 477UL; }
        break;
      case 444:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 341UL; }
        break;
      case 176:;
        if (tmp___46 % 10 >= 5) {
          { _1_OBF_FUNC_next = 260UL; }
        } else {
          { _1_OBF_FUNC_next = 290UL; }
        }
        break;
      case 300:
        tmp___7 = rand();
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 601:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 241UL; }
        break;
      case 77:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 368UL; }
        break;
      case 453:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 178UL; }
        } else {
          { _1_OBF_FUNC_next = 257UL; }
        }
        break;
      case 408:
        tmp___24 = rand();
        { _1_OBF_FUNC_next = 177UL; }
        break;
      case 301:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 318UL; }
        break;
      case 154:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 104UL; }
        break;
      case 529:
        tmp___23 = rand();
        { _1_OBF_FUNC_next = 251UL; }
        break;
      case 108:;
        if (tmp___35 % 10 >= 5) {
          { _1_OBF_FUNC_next = 257UL; }
        } else {
          { _1_OBF_FUNC_next = 312UL; }
        }
        break;
      case 357:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 557UL; }
        break;
      case 230:
        tmp___6 = rand();
        { _1_OBF_FUNC_next = 181UL; }
        break;
      case 366:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 293UL; }
        break;
      case 481:
        _index8_0++;
        { _1_OBF_FUNC_next = 378UL; }
        break;
      case 418:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 121UL; }
        break;
      case 503:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 493UL; }
        break;
      case 342:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 459UL; }
        break;
      case 171:;
        if (tmp___42 % 10 >= 5) {
          { _1_OBF_FUNC_next = 169UL; }
        } else {
          { _1_OBF_FUNC_next = 555UL; }
        }
        break;
      case 477:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 604UL; }
        } else {
          { _1_OBF_FUNC_next = 113UL; }
        }
        break;
      case 99:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 494:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 99UL; }
        break;
      case 599:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 2118568387U);
        break;
      case 479:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 454UL; }
        } else {
          { _1_OBF_FUNC_next = 359UL; }
        }
        break;
      case 374:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 212UL; }
        break;
      case 127:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 180UL; }
        break;
      case 514:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 319UL; }
        break;
      case 71:
        tmp___11 = rand();
        { _1_OBF_FUNC_next = 343UL; }
        break;
      case 1:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 574UL; }
        break;
      case 443:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 442UL; }
        break;
      case 138:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 38UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 195:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 92UL; }
        } else {
          { _1_OBF_FUNC_next = 24UL; }
        }
        break;
      case 210:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 159UL; }
        } else {
          { _1_OBF_FUNC_next = 596UL; }
        }
        break;
      case 557:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 380UL; }
        } else {
          { _1_OBF_FUNC_next = 335UL; }
        }
        break;
      case 399:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 195UL; }
        break;
      case 429:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 356UL; }
        break;
      case 183:
        tmp___9 = rand();
        { _1_OBF_FUNC_next = 88UL; }
        break;
      case 153:
        _index2_0++;
        { _1_OBF_FUNC_next = 51UL; }
        break;
      case 191:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 386UL; }
        } else {
          { _1_OBF_FUNC_next = 252UL; }
        }
        break;
      case 104:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 483UL; }
        } else {
          { _1_OBF_FUNC_next = 488UL; }
        }
        break;
      case 267:;
        if (tmp___30 % 10 >= 5) {
          { _1_OBF_FUNC_next = 295UL; }
        } else {
          { _1_OBF_FUNC_next = 100UL; }
        }
        break;
      case 237:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 345UL; }
        break;
      case 465:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 359UL; }
        break;
      case 140:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 207UL; }
        } else {
          { _1_OBF_FUNC_next = 487UL; }
        }
        break;
      case 51:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next = 495UL; }
        } else {
          { _1_OBF_FUNC_next = 185UL; }
        }
        break;
      case 331:;
        if (tmp___45 % 10 >= 5) {
          { _1_OBF_FUNC_next = 58UL; }
        } else {
          { _1_OBF_FUNC_next = 156UL; }
        }
        break;
      case 169:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 326UL; }
        } else {
          { _1_OBF_FUNC_next = 260UL; }
        }
        break;
      case 322:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 280UL; }
        break;
      case 70:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 398UL; }
        break;
      case 182:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 506UL; }
        } else {
          { _1_OBF_FUNC_next = 7UL; }
        }
        break;
      case 50:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 374UL; }
        break;
      case 455:
        _index2_0++;
        { _1_OBF_FUNC_next = 460UL; }
        break;
      case 265:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 517UL; }
        break;
      case 61:
        tmp___13 = rand();
        { _1_OBF_FUNC_next = 91UL; }
        break;
      case 238:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 393UL; }
        break;
      case 435:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 502:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next = 477UL; }
        } else {
          { _1_OBF_FUNC_next = 194UL; }
        }
        break;
      case 576:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 479UL; }
        break;
      case 598:
        _index8_0++;
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 212:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 189UL; }
        break;
      case 69:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 310UL; }
        } else {
          { _1_OBF_FUNC_next = 200UL; }
        }
        break;
      case 459:
        _index8_0++;
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 391:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 56UL; }
        } else {
          { _1_OBF_FUNC_next = 528UL; }
        }
        break;
      case 97:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 473:
        _index8_0++;
        { _1_OBF_FUNC_next = 17UL; }
        break;
      case 116:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 172:
        _index8_0++;
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 555:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 435UL; }
        break;
      case 189:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 384UL; }
        } else {
          { _1_OBF_FUNC_next = 40UL; }
        }
        break;
      case 72:
        tmp___16 = rand();
        { _1_OBF_FUNC_next = 597UL; }
        break;
      case 325:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 230UL; }
        } else {
          { _1_OBF_FUNC_next = 81UL; }
        }
        break;
      case 54:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 473UL; }
        break;
      case 295:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 424UL; }
        } else {
          { _1_OBF_FUNC_next = 542UL; }
        }
        break;
      case 45:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 411UL; }
        break;
      case 217:;
        if (tmp___28 % 10 >= 5) {
          { _1_OBF_FUNC_next = 281UL; }
        } else {
          { _1_OBF_FUNC_next = 106UL; }
        }
        break;
      case 80:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 408UL; }
        } else {
          { _1_OBF_FUNC_next = 147UL; }
        }
        break;
      case 293:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 299UL; }
        break;
      case 424:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 551UL; }
        break;
      case 40:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 571UL; }
        } else {
          { _1_OBF_FUNC_next = 169UL; }
        }
        break;
      case 482:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 87UL; }
        break;
      case 88:;
        if (tmp___9 % 10 >= 5) {
          { _1_OBF_FUNC_next = 140UL; }
        } else {
          { _1_OBF_FUNC_next = 545UL; }
        }
        break;
      case 184:
        _index8_0++;
        { _1_OBF_FUNC_next = 143UL; }
        break;
      case 602:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 125UL; }
        break;
      case 499:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 481UL; }
        break;
      case 447:
        _index8_0++;
        { _1_OBF_FUNC_next = 345UL; }
        break;
      case 236:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 248:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 480UL; }
        break;
      case 597:;
        if (tmp___16 % 10 >= 5) {
          { _1_OBF_FUNC_next = 588UL; }
        } else {
          { _1_OBF_FUNC_next = 208UL; }
        }
        break;
      case 574:
        _index8_0++;
        { _1_OBF_FUNC_next = 268UL; }
        break;
      case 144:
        _index8_0++;
        { _1_OBF_FUNC_next = 170UL; }
        break;
      case 67:;
        if (tmp___33 % 10 >= 5) {
          { _1_OBF_FUNC_next = 210UL; }
        } else {
          { _1_OBF_FUNC_next = 554UL; }
        }
        break;
      case 352:;
        if (tmp___22 % 10 >= 5) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 298UL; }
        }
        break;
      case 440:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 430UL; }
        } else {
          { _1_OBF_FUNC_next = 477UL; }
        }
        break;
      case 75:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 244UL; }
        break;
      case 411:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 179UL; }
        } else {
          { _1_OBF_FUNC_next = 33UL; }
        }
        break;
      case 347:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next = 328UL; }
        break;
      case 584:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 453UL; }
        break;
      case 533:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 470UL; }
        break;
      case 341:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next = 460UL; }
        break;
      case 299:
        _index0_2 = (unsigned int)((unsigned long)_index0_2 + 2UL);
        { _1_OBF_FUNC_next = 182UL; }
        break;
      case 192:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 157UL; }
        } else {
          { _1_OBF_FUNC_next = 479UL; }
        }
        break;
      case 113:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 413UL; }
        } else {
          { _1_OBF_FUNC_next = 285UL; }
        }
        break;
      case 126:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 234UL; }
        }
        break;
      case 532:
        tmp___17 = rand();
        { _1_OBF_FUNC_next = 504UL; }
        break;
      case 493:
        _index8_0++;
        { _1_OBF_FUNC_next = 449UL; }
        break;
      case 279:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 512UL; }
        break;
      case 380:
        tmp___37 = rand();
        { _1_OBF_FUNC_next = 175UL; }
        break;
      case 498:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 127UL; }
        break;
      case 506:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 366UL; }
        } else {
          { _1_OBF_FUNC_next = 293UL; }
        }
        break;
      case 512:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 607UL; }
        break;
      case 284:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 418UL; }
        break;
      case 234:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 498UL; }
        } else {
          { _1_OBF_FUNC_next = 365UL; }
        }
        break;
      case 52:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next = 305UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next = 505UL;
        } break;
        default: {
          _1_OBF_FUNC_next = 388UL;
        } break;
        }
        break;
      case 148:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 440UL; }
        break;
      case 541:
        _index8_0++;
        { _1_OBF_FUNC_next = 434UL; }
        break;
      case 94:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 97UL; }
        break;
      case 505:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 276UL; }
        break;
      case 549:
        tmp___25 = rand();
        { _1_OBF_FUNC_next = 95UL; }
        break;
      case 268:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 409UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 112:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 117UL; }
        break;
      case 345:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 300UL; }
        } else {
          { _1_OBF_FUNC_next = 434UL; }
        }
        break;
      case 311:;
        if (tmp___29 % 10 >= 5) {
          { _1_OBF_FUNC_next = 269UL; }
        } else {
          { _1_OBF_FUNC_next = 0UL; }
        }
        break;
      case 215:;
        if (tmp___19 % 10 >= 5) {
          { _1_OBF_FUNC_next = 121UL; }
        } else {
          { _1_OBF_FUNC_next = 406UL; }
        }
        break;
      case 569:
        localStaticState[1UL] = input - 761529717U;
        { _1_OBF_FUNC_next = 52UL; }
        break;
      case 11:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 120UL; }
        break;
      case 93:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 75UL; }
        break;
      case 554:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 403UL; }
        break;
      case 556:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 148UL; }
        break;
      case 81:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 464UL; }
        } else {
          { _1_OBF_FUNC_next = 195UL; }
        }
        break;
      case 467:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 387UL; }
        break;
      case 262:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 163UL; }
        break;
      case 564:
        _index8_0++;
        { _1_OBF_FUNC_next = 411UL; }
        break;
      case 351:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 431UL; }
        break;
      case 362:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 93UL; }
        } else {
          { _1_OBF_FUNC_next = 542UL; }
        }
        break;
      case 146:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 47UL; }
        break;
      case 12:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 186UL; }
        break;
      case 509:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 558UL; }
        } else {
          { _1_OBF_FUNC_next = 295UL; }
        }
        break;
      case 239:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 446UL; }
        } else {
          { _1_OBF_FUNC_next = 25UL; }
        }
        break;
      case 56:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 528UL; }
        break;
      case 47:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 25UL; }
        break;
      case 490:
        _index8_0++;
        { _1_OBF_FUNC_next = 69UL; }
        break;
      case 109:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 110UL; }
        break;
      case 536:
        _index8_0++;
        { _1_OBF_FUNC_next = 445UL; }
        break;
      case 18:;
        if (tmp___38 % 10 >= 5) {
          { _1_OBF_FUNC_next = 40UL; }
        } else {
          { _1_OBF_FUNC_next = 255UL; }
        }
        break;
      case 305:
        localStaticState[0UL] -= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 599UL; }
        break;
      case 389:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 587:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 402UL; }
        } else {
          { _1_OBF_FUNC_next = 253UL; }
        }
        break;
      case 360:;
        if (tmp___43 % 10 >= 5) {
          { _1_OBF_FUNC_next = 69UL; }
        } else {
          { _1_OBF_FUNC_next = 410UL; }
        }
        break;
      case 272:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 342UL; }
        } else {
          { _1_OBF_FUNC_next = 602UL; }
        }
        break;
      case 120:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 295UL; }
        break;
      case 343:;
        if (tmp___11 % 10 >= 5) {
          { _1_OBF_FUNC_next = 449UL; }
        } else {
          { _1_OBF_FUNC_next = 437UL; }
        }
        break;
      case 260:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 265UL; }
        } else {
          { _1_OBF_FUNC_next = 152UL; }
        }
        break;
      case 384:
        tmp___38 = rand();
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 133:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 382UL; }
        } else {
          { _1_OBF_FUNC_next = 170UL; }
        }
        break;
      case 312:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 359:;
        if ((unsigned long)_index0_2 < 2UL) {
          { _1_OBF_FUNC_next = 436UL; }
        } else {
          { _1_OBF_FUNC_next = 182UL; }
        }
        break;
      case 179:
        tmp___47 = rand();
        { _1_OBF_FUNC_next = 606UL; }
        break;
      case 373:;
        if (tmp___36 % 10 >= 5) {
          { _1_OBF_FUNC_next = 557UL; }
        } else {
          { _1_OBF_FUNC_next = 279UL; }
        }
        break;
      case 48:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 483UL; }
        break;
      case 161:
        _index8_0++;
        { _1_OBF_FUNC_next = 595UL; }
        break;
      case 286:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 404UL; }
        break;
      case 25:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 23UL; }
        } else {
          { _1_OBF_FUNC_next = 362UL; }
        }
        break;
      case 393:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 595UL; }
        break;
      case 458:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 236UL; }
        break;
      case 143:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 96UL; }
        } else {
          { _1_OBF_FUNC_next = 138UL; }
        }
        break;
      case 463:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 447UL; }
        break;
      case 581:
        _index8_0++;
        { _1_OBF_FUNC_next = 519UL; }
        break;
      case 561:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 357UL; }
        break;
      case 394:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 509UL; }
        break;
      case 55:
        _index2_0++;
        { _1_OBF_FUNC_next = 185UL; }
        break;
      case 558:
        tmp___30 = rand();
        { _1_OBF_FUNC_next = 267UL; }
        break;
      case 527:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 303UL; }
        break;
      case 255:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 567UL; }
        break;
      case 321:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 226UL; }
        break;
      case 257:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 6UL; }
        } else {
          { _1_OBF_FUNC_next = 557UL; }
        }
        break;
      case 250:;
        if (tmp___20 % 10 >= 5) {
          { _1_OBF_FUNC_next = 239UL; }
        } else {
          { _1_OBF_FUNC_next = 123UL; }
        }
        break;
      case 519:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 86UL; }
        } else {
          { _1_OBF_FUNC_next = 143UL; }
        }
        break;
      case 515:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 184UL; }
        break;
      case 464:
        tmp___10 = rand();
        { _1_OBF_FUNC_next = 491UL; }
        break;
      case 29:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next = 50UL; }
        } else {
          { _1_OBF_FUNC_next = 152UL; }
        }
        break;
      case 175:;
        if (tmp___37 % 10 >= 5) {
          { _1_OBF_FUNC_next = 335UL; }
        } else {
          { _1_OBF_FUNC_next = 232UL; }
        }
        break;
      case 528:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 4UL; }
        break;
      case 518:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 397UL; }
        } else {
          { _1_OBF_FUNC_next = 196UL; }
        }
        break;
      case 303:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 529UL; }
        } else {
          { _1_OBF_FUNC_next = 80UL; }
        }
        break;
      case 244:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 134UL; }
        break;
      case 471:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 434:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 452UL; }
        } else {
          { _1_OBF_FUNC_next = 274UL; }
        }
        break;
      case 449:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 2UL; }
        } else {
          { _1_OBF_FUNC_next = 378UL; }
        }
        break;
      case 163:
        _index8_0++;
        { _1_OBF_FUNC_next = 364UL; }
        break;
      case 37:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 349UL; }
        break;
      case 20:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 584UL; }
        break;
      case 400:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 471UL; }
        break;
      case 446:
        tmp___21 = rand();
        { _1_OBF_FUNC_next = 346UL; }
        break;
      case 560:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 443UL; }
        break;
      case 517:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 82:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 223UL; }
        } else {
          { _1_OBF_FUNC_next = 355UL; }
        }
        break;
      case 26:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 292UL; }
        } else {
          { _1_OBF_FUNC_next = 509UL; }
        }
        break;
      case 337:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 377UL; }
        break;
      case 571:
        tmp___42 = rand();
        { _1_OBF_FUNC_next = 171UL; }
        break;
      case 402:
        localStaticState[(unsigned long)_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[(unsigned long)_index0_2 % 2UL];
        { _1_OBF_FUNC_next = 253UL; }
        break;
      case 43:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 426UL; }
        } else {
          { _1_OBF_FUNC_next = 142UL; }
        }
        break;
      case 377:
        _index8_0++;
        { _1_OBF_FUNC_next = 58UL; }
        break;
      case 145:
        tmp___49 = rand();
        { _1_OBF_FUNC_next = 205UL; }
        break;
      case 178:
        tmp___35 = rand();
        { _1_OBF_FUNC_next = 108UL; }
        break;
      case 0:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 530UL; }
        break;
      case 181:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next = 81UL; }
        } else {
          { _1_OBF_FUNC_next = 201UL; }
        }
        break;
      case 369:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 422UL; }
        break;
      case 604:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 70UL; }
        break;
      case 208:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 144UL; }
        break;
      case 95:;
        if (tmp___25 % 10 >= 5) {
          { _1_OBF_FUNC_next = 191UL; }
        } else {
          { _1_OBF_FUNC_next = 322UL; }
        }
        break;
      case 21:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 239UL; }
        break;
      case 277:;
        if (tmp___14 % 10 >= 5) {
          { _1_OBF_FUNC_next = 24UL; }
        } else {
          { _1_OBF_FUNC_next = 297UL; }
        }
        break;
      case 330:
        tmp___45 = rand();
        { _1_OBF_FUNC_next = 331UL; }
        break;
      case 387:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 289UL; }
        } else {
          { _1_OBF_FUNC_next = 560UL; }
        }
        break;
      case 297:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 167UL; }
        break;
      case 231:
        _index8_0++;
        { _1_OBF_FUNC_next = 274UL; }
        break;
      case 243:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 325UL; }
        break;
      case 33:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 139UL; }
        } else {
          { _1_OBF_FUNC_next = 364UL; }
        }
        break;
      case 41:
        _index8_0++;
        { _1_OBF_FUNC_next = 339UL; }
        break;
      case 132:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 172UL; }
        break;
      case 530:
        _index8_0++;
        { _1_OBF_FUNC_next = 281UL; }
        break;
      case 491:;
        if (tmp___10 % 10 >= 5) {
          { _1_OBF_FUNC_next = 195UL; }
        } else {
          { _1_OBF_FUNC_next = 238UL; }
        }
        break;
      case 7:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 444UL; }
        break;
      case 6:
        tmp___36 = rand();
        { _1_OBF_FUNC_next = 373UL; }
        break;
      case 501:
        tmp___22 = rand();
        { _1_OBF_FUNC_next = 352UL; }
        break;
      case 5:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 86:
        tmp___39 = rand();
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 269:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 37UL; }
        } else {
          { _1_OBF_FUNC_next = 109UL; }
        }
        break;
      case 259:
        tmp___43 = rand();
        { _1_OBF_FUNC_next = 360UL; }
        break;
      case 566:
        _index8_0++;
        { _1_OBF_FUNC_next = 133UL; }
        break;
      case 167:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 133UL; }
        break;
      case 232:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 561UL; }
        break;
      case 207:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 486UL; }
        break;
      case 339:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 259UL; }
        } else {
          { _1_OBF_FUNC_next = 69UL; }
        }
        break;
      case 361:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 5UL; }
        break;
      case 274:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 183UL; }
        } else {
          { _1_OBF_FUNC_next = 140UL; }
        }
        break;
      case 445:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 593UL; }
        } else {
          { _1_OBF_FUNC_next = 11UL; }
        }
        break;
      case 425:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 533UL; }
        break;
      case 28:
        _index8_0++;
        { _1_OBF_FUNC_next = 191UL; }
        break;
      case 388:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 599UL; }
        break;
      case 253:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 465UL; }
        break;
      case 23:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 146UL; }
        break;
      case 285:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 455UL; }
        break;
      case 470:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 514UL; }
        } else {
          { _1_OBF_FUNC_next = 361UL; }
        }
        break;
      case 474:
        tmp___20 = rand();
        { _1_OBF_FUNC_next = 250UL; }
        break;
      case 350:
        localStaticState[0UL] = input * 1984782336U;
        { _1_OBF_FUNC_next = 569UL; }
        break;
      case 226:
        _index8_0++;
        { _1_OBF_FUNC_next = 138UL; }
        break;
      case 121:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 474UL; }
        } else {
          { _1_OBF_FUNC_next = 239UL; }
        }
        break;
      case 165:
        _index2_0++;
        { _1_OBF_FUNC_next = 223UL; }
        break;
      case 101:;
        if (tmp___44 % 10 >= 5) {
          { _1_OBF_FUNC_next = 200UL; }
        } else {
          { _1_OBF_FUNC_next = 264UL; }
        }
        break;
      case 349:
        _index8_0++;
        { _1_OBF_FUNC_next = 269UL; }
        break;
      case 318:
        _index8_0++;
        { _1_OBF_FUNC_next = 588UL; }
        break;
      case 124:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 134UL; }
        break;
      case 233:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 581UL; }
        break;
      case 480:
        _index8_0++;
        { _1_OBF_FUNC_next = 594UL; }
        break;
      case 551:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 445UL; }
        break;
      case 426:
        tmp___32 = rand();
        { _1_OBF_FUNC_next = 270UL; }
        break;
      case 332:
        tmp___27 = rand();
        { _1_OBF_FUNC_next = 396UL; }
        break;
      case 156:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 547UL; }
        break;
      case 396:;
        if (tmp___27 % 10 >= 5) {
          { _1_OBF_FUNC_next = 580UL; }
        } else {
          { _1_OBF_FUNC_next = 416UL; }
        }
        break;
      case 504:;
        if (tmp___17 % 10 >= 5) {
          { _1_OBF_FUNC_next = 17UL; }
        } else {
          { _1_OBF_FUNC_next = 301UL; }
        }
        break;
      case 158:
        _index8_0++;
        { _1_OBF_FUNC_next = 303UL; }
        break;
      case 364:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 145UL; }
        } else {
          { _1_OBF_FUNC_next = 427UL; }
        }
        break;
      case 596:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 394UL; }
        break;
      case 197:;
        if (tmp___48 % 10 >= 5) {
          { _1_OBF_FUNC_next = 364UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 3:;
        if (tmp___39 % 10 >= 5) {
          { _1_OBF_FUNC_next = 143UL; }
        } else {
          { _1_OBF_FUNC_next = 233UL; }
        }
        break;
      case 442:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 22UL; }
        } else {
          { _1_OBF_FUNC_next = 365UL; }
        }
        break;
      case 590:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 82UL; }
        break;
      case 276:
        _index0_2 = 0U;
        { _1_OBF_FUNC_next = 192UL; }
        break;
      case 410:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 582:
        tmp___18 = rand();
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 593:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 536UL; }
        break;
      case 270:;
        if (tmp___32 % 10 >= 5) {
          { _1_OBF_FUNC_next = 142UL; }
        } else {
          { _1_OBF_FUNC_next = 12UL; }
        }
        break;
      case 594:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 248UL; }
        } else {
          { _1_OBF_FUNC_next = 94UL; }
        }
        break;
      case 488:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 34UL; }
        break;
      case 252:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 124UL; }
        break;
      case 89:;
        if (tmp___12 % 10 >= 5) {
          { _1_OBF_FUNC_next = 378UL; }
        } else {
          { _1_OBF_FUNC_next = 503UL; }
        }
        break;
      case 129:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 389UL; }
        break;
      case 382:
        tmp___15 = rand();
        { _1_OBF_FUNC_next = 114UL; }
        break;
      case 251:;
        if (tmp___23 % 10 >= 5) {
          { _1_OBF_FUNC_next = 80UL; }
        } else {
          { _1_OBF_FUNC_next = 65UL; }
        }
        break;
      case 125:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 260UL; }
        break;
      case 271:
        tmp___19 = rand();
        { _1_OBF_FUNC_next = 215UL; }
        break;
      case 376:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 440UL; }
        } else {
          { _1_OBF_FUNC_next = 585UL; }
        }
        break;
      case 142:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 367UL; }
        } else {
          { _1_OBF_FUNC_next = 210UL; }
        }
        break;
      case 170:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 72UL; }
        } else {
          { _1_OBF_FUNC_next = 588UL; }
        }
        break;
      case 367:
        tmp___33 = rand();
        { _1_OBF_FUNC_next = 67UL; }
        break;
      case 567:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next = 519UL; }
        break;
      case 34:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 573UL; }
        break;
      case 292:
        tmp___26 = rand();
        { _1_OBF_FUNC_next = 583UL; }
        break;
      case 368:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 513UL; }
        break;
      case 261:;
        if (tmp___34 % 10 >= 5) {
          { _1_OBF_FUNC_next = 185UL; }
        } else {
          { _1_OBF_FUNC_next = 601UL; }
        }
        break;
      case 194:
        localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next = 556UL; }
        break;
      case 335:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 77UL; }
        } else {
          { _1_OBF_FUNC_next = 29UL; }
        }
        break;
      case 431:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 84:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 376UL; }
        break;
      case 8:;
        if (tmp___18 % 10 >= 5) {
          { _1_OBF_FUNC_next = 51UL; }
        } else {
          { _1_OBF_FUNC_next = 482UL; }
        }
        break;
      case 403:
        _index8_0++;
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 58:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next = 337UL; }
        } else {
          { _1_OBF_FUNC_next = 553UL; }
        }
        break;
      case 157:
        tmp = rand();
        { _1_OBF_FUNC_next = 415UL; }
        break;
      case 22:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next = 467UL; }
        break;
      case 221:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 325UL; }
        break;
      case 448:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 541UL; }
        break;
      case 310:
        tmp___44 = rand();
        { _1_OBF_FUNC_next = 101UL; }
        break;
      case 115:
        _index8_0++;
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 139:
        tmp___48 = rand();
        { _1_OBF_FUNC_next = 197UL; }
        break;
      case 577:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 564UL; }
        break;
      case 483:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next = 84UL; }
        } else {
          { _1_OBF_FUNC_next = 440UL; }
        }
        break;
      case 365:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 326:
        tmp___46 = rand();
        { _1_OBF_FUNC_next = 176UL; }
        break;
      case 547:
        _index8_0++;
        { _1_OBF_FUNC_next = 200UL; }
        break;
      case 186:
        _index8_0++;
        { _1_OBF_FUNC_next = 43UL; }
        break;
      case 65:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 158UL; }
        break;
      case 553:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 511UL; }
        break;
      case 106:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 206UL; }
        break;
      case 117:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next = 169UL; }
        break;
      case 205:;
        if (tmp___49 % 10 >= 5) {
          { _1_OBF_FUNC_next = 427UL; }
        } else {
          { _1_OBF_FUNC_next = 262UL; }
        }
        break;
      }
    }
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:switch
