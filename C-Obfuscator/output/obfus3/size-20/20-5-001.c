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
  unsigned int _index0_5;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
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
  unsigned long _1_OBF_FUNC_next;
  {
    { _1_OBF_FUNC_next = 101UL; }
    while (1) {
      switch (_1_OBF_FUNC_next) {
      case 62:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 256UL; }
        break;
      case 283:
        _index6_0++;
        { _1_OBF_FUNC_next = 257UL; }
        break;
      case 18:;
        if (tmp___7 % 10 >= 5) {
          { _1_OBF_FUNC_next = 99UL; }
        } else {
          { _1_OBF_FUNC_next = 238UL; }
        }
        break;
      case 155:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 102UL; }
        break;
      case 166:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 234UL; }
        break;
      case 125:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 267UL; }
        break;
      case 275:
        tmp___15 = rand();
        { _1_OBF_FUNC_next = 105UL; }
        break;
      case 147:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 48UL; }
        break;
      case 248:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 140UL; }
        break;
      case 249:
        _index2_2++;
        { _1_OBF_FUNC_next = 211UL; }
        break;
      case 255:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 170:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 40UL; }
        break;
      case 211:;
        if ((unsigned long)_index2_2 < 2UL) {
          { _1_OBF_FUNC_next = 1UL; }
        } else {
          { _1_OBF_FUNC_next = 111UL; }
        }
        break;
      case 203:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 312UL; }
        break;
      case 297:;
        if (tmp___1 % 10 >= 5) {
          { _1_OBF_FUNC_next = 103UL; }
        } else {
          { _1_OBF_FUNC_next = 168UL; }
        }
        break;
      case 219:;
        if ((unsigned long)_index4_3 < 3UL) {
          { _1_OBF_FUNC_next = 23UL; }
        } else {
          { _1_OBF_FUNC_next = 19UL; }
        }
        break;
      case 161:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 255UL; }
        break;
      case 25:
        tmp___9 = rand();
        { _1_OBF_FUNC_next = 76UL; }
        break;
      case 233:
        _index4_3 = 0U;
        { _1_OBF_FUNC_next = 219UL; }
        break;
      case 299:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 10UL; }
        break;
      case 42:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 147UL; }
        break;
      case 217:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 124:
        _index0_5 = (unsigned int)((unsigned long)_index0_5 + 2UL);
        { _1_OBF_FUNC_next = 262UL; }
        break;
      case 118:
        _index0_5 = 0U;
        { _1_OBF_FUNC_next = 262UL; }
        break;
      case 231:
        tmp___0 = rand();
        { _1_OBF_FUNC_next = 214UL; }
        break;
      case 52:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 195UL; }
        break;
      case 257:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 278UL; }
        } else {
          { _1_OBF_FUNC_next = 83UL; }
        }
        break;
      case 300:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 63UL; }
        break;
      case 169:;
        if (tmp___16 % 10 >= 5) {
          { _1_OBF_FUNC_next = 199UL; }
        } else {
          { _1_OBF_FUNC_next = 258UL; }
        }
        break;
      case 276:
        _index4_3++;
        { _1_OBF_FUNC_next = 268UL; }
        break;
      case 63:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 94UL; }
        break;
      case 83:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 96UL; }
        break;
      case 198:
        _index6_0++;
        { _1_OBF_FUNC_next = 106UL; }
        break;
      case 251:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 306UL; }
        } else {
          { _1_OBF_FUNC_next = 165UL; }
        }
        break;
      case 174:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 317:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 307UL; }
        } else {
          { _1_OBF_FUNC_next = 63UL; }
        }
        break;
      case 134:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 126UL; }
        break;
      case 216:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 202:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 217UL; }
        break;
      case 273:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 242UL; }
        break;
      case 54:;
        if ((unsigned long)_index0_5 < 5UL) {
          { _1_OBF_FUNC_next = 231UL; }
        } else {
          { _1_OBF_FUNC_next = 232UL; }
        }
        break;
      case 218:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 294UL; }
        } else {
          { _1_OBF_FUNC_next = 266UL; }
        }
        break;
      case 19:;
        if ((unsigned long)_index4_3 < 3UL) {
          { _1_OBF_FUNC_next = 25UL; }
        } else {
          { _1_OBF_FUNC_next = 207UL; }
        }
        break;
      case 229:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 167UL; }
        break;
      case 21:
        _index6_0++;
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 177:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 127UL; }
        break;
      case 100:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 304UL; }
        break;
      case 26:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 142UL; }
        break;
      case 164:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 26UL; }
        } else {
          { _1_OBF_FUNC_next = 295UL; }
        }
        break;
      case 302:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 106:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 87UL; }
        } else {
          { _1_OBF_FUNC_next = 129UL; }
        }
        break;
      case 266:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 200UL; }
        break;
      case 35:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 272UL; }
        break;
      case 14:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 212UL; }
        break;
      case 37:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 138UL; }
        break;
      case 105:;
        if (tmp___15 % 10 >= 5) {
          { _1_OBF_FUNC_next = 293UL; }
        } else {
          { _1_OBF_FUNC_next = 246UL; }
        }
        break;
      case 285:
        tmp___16 = rand();
        { _1_OBF_FUNC_next = 169UL; }
        break;
      case 136:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 203UL; }
        break;
      case 141:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next = 233UL; }
        break;
      case 32:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 85UL; }
        break;
      case 59:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 79UL; }
        break;
      case 128:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 124UL; }
        break;
      case 89:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 177UL; }
        break;
      case 34:
        localStaticState[0UL] *= localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 6UL; }
        break;
      case 242:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 110UL; }
        break;
      case 145:
        _index6_0++;
        { _1_OBF_FUNC_next = 251UL; }
        break;
      case 271:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 41UL; }
        break;
      case 30:;
        if (tmp___14 % 10 >= 5) {
          { _1_OBF_FUNC_next = 120UL; }
        } else {
          { _1_OBF_FUNC_next = 218UL; }
        }
        break;
      case 119:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 89UL; }
        break;
      case 79:
        _index6_0++;
        { _1_OBF_FUNC_next = 181UL; }
        break;
      case 138:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 263UL; }
        } else {
          { _1_OBF_FUNC_next = 153UL; }
        }
        break;
      case 10:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 179UL; }
        break;
      case 78:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 24UL; }
        break;
      case 31:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 183UL; }
        break;
      case 150:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 61UL; }
        break;
      case 15:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 210UL; }
        break;
      case 22:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 177UL; }
        break;
      case 181:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 75UL; }
        } else {
          { _1_OBF_FUNC_next = 170UL; }
        }
        break;
      case 65:
        tmp___14 = rand();
        { _1_OBF_FUNC_next = 30UL; }
        break;
      case 8:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 288UL; }
        break;
      case 13:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 291UL; }
        break;
      case 9:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 37UL; }
        break;
      case 308:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 198UL; }
        break;
      case 247:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 265UL; }
        } else {
          { _1_OBF_FUNC_next = 176UL; }
        }
        break;
      case 204:;
        if ((unsigned long)_index2_2 < 2UL) {
          { _1_OBF_FUNC_next = 121UL; }
        } else {
          { _1_OBF_FUNC_next = 211UL; }
        }
        break;
      case 142:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 295UL; }
        break;
      case 256:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 235UL; }
        break;
      case 1:
        tmp___4 = rand();
        { _1_OBF_FUNC_next = 282UL; }
        break;
      case 311:;
        if (tmp___10 % 10 >= 5) {
          { _1_OBF_FUNC_next = 165UL; }
        } else {
          { _1_OBF_FUNC_next = 254UL; }
        }
        break;
      case 101:
        localStaticState[0UL] = (unsigned int)((unsigned long)input * 73477743UL);
        { _1_OBF_FUNC_next = 201UL; }
        break;
      case 151:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 193UL; }
        break;
      case 175:
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 128UL; }
        break;
      case 223:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 157UL; }
        break;
      case 64:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 171UL; }
        break;
      case 97:
        _index2_2++;
        { _1_OBF_FUNC_next = 154UL; }
        break;
      case 291:
        _index6_0++;
        { _1_OBF_FUNC_next = 165UL; }
        break;
      case 319:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 22UL; }
        break;
      case 6:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next = 196UL; }
        break;
      case 288:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 174UL; }
        break;
      case 253:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 42UL; }
        break;
      case 238:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 92UL; }
        } else {
          { _1_OBF_FUNC_next = 188UL; }
        }
        break;
      case 98:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 298UL; }
        } else {
          { _1_OBF_FUNC_next = 186UL; }
        }
        break;
      case 278:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 187UL; }
        } else {
          { _1_OBF_FUNC_next = 51UL; }
        }
        break;
      case 76:;
        if (tmp___9 % 10 >= 5) {
          { _1_OBF_FUNC_next = 207UL; }
        } else {
          { _1_OBF_FUNC_next = 15UL; }
        }
        break;
      case 298:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 91UL; }
        break;
      case 81:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 49UL; }
        break;
      case 167:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 147UL; }
        break;
      case 234:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 270UL; }
        break;
      case 213:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 225UL; }
        } else {
          { _1_OBF_FUNC_next = 281UL; }
        }
        break;
      case 194:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 52UL; }
        } else {
          { _1_OBF_FUNC_next = 62UL; }
        }
        break;
      case 43:
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 32UL; }
        break;
      case 73:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 125UL; }
        break;
      case 173:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 50UL; }
        break;
      case 260:
        tmp___7 = rand();
        { _1_OBF_FUNC_next = 18UL; }
        break;
      case 315:;
        return ((localStaticState[0UL] + localStaticState[1UL]) + 317240796U);
        break;
      case 212:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 283UL; }
        break;
      case 120:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 275UL; }
        } else {
          { _1_OBF_FUNC_next = 293UL; }
        }
        break;
      case 33:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 314UL; }
        break;
      case 115:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next = 122UL; }
        break;
      case 295:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 239UL; }
        break;
      case 245:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 302UL; }
        break;
      case 267:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 173UL; }
        break;
      case 123:
        _index6_0++;
        { _1_OBF_FUNC_next = 129UL; }
        break;
      case 235:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 148:;
        if (tmp % 10 >= 5) {
          { _1_OBF_FUNC_next = 54UL; }
        } else {
          { _1_OBF_FUNC_next = 175UL; }
        }
        break;
      case 214:;
        if (tmp___0 % 10 >= 5) {
          { _1_OBF_FUNC_next = 232UL; }
        } else {
          { _1_OBF_FUNC_next = 43UL; }
        }
        break;
      case 241:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 88UL; }
        break;
      case 268:;
        if ((unsigned long)_index4_3 < 3UL) {
          { _1_OBF_FUNC_next = 9UL; }
        } else {
          { _1_OBF_FUNC_next = 315UL; }
        }
        break;
      case 314:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 206UL; }
        break;
      case 127:
        _index6_0++;
        { _1_OBF_FUNC_next = 120UL; }
        break;
      case 126:
        _index2_2++;
        { _1_OBF_FUNC_next = 111UL; }
        break;
      case 140:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 113UL; }
        break;
      case 312:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 145UL; }
        break;
      case 270:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 241UL; }
        break;
      case 154:;
        if ((unsigned long)_index2_2 < 2UL) {
          { _1_OBF_FUNC_next = 237UL; }
        } else {
          { _1_OBF_FUNC_next = 204UL; }
        }
        break;
      case 49:
        _index6_0++;
        { _1_OBF_FUNC_next = 99UL; }
        break;
      case 187:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 166UL; }
        } else {
          { _1_OBF_FUNC_next = 270UL; }
        }
        break;
      case 27:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 144UL; }
        break;
      case 290:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 296:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 146UL; }
        } else {
          { _1_OBF_FUNC_next = 223UL; }
        }
        break;
      case 284:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 252UL; }
        break;
      case 131:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next = 118UL; }
        break;
      case 80:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 34UL; }
        } else {
          { _1_OBF_FUNC_next = 159UL; }
        }
        break;
      case 91:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 186UL; }
        break;
      case 306:
        tmp___10 = rand();
        { _1_OBF_FUNC_next = 311UL; }
        break;
      case 274:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 57UL; }
        break;
      case 72:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 123UL; }
        break;
      case 61:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 116UL; }
        break;
      case 318:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 100UL; }
        break;
      case 226:
        tmp___13 = rand();
        { _1_OBF_FUNC_next = 20UL; }
        break;
      case 188:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 290UL; }
        break;
      case 39:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 301UL; }
        } else {
          { _1_OBF_FUNC_next = 257UL; }
        }
        break;
      case 225:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 243UL; }
        break;
      case 103:;
        if ((unsigned long)_index0_5 < 5UL) {
          { _1_OBF_FUNC_next = 46UL; }
        } else {
          { _1_OBF_FUNC_next = 80UL; }
        }
        break;
      case 287:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 64UL; }
        break;
      case 254:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 98UL; }
        } else {
          { _1_OBF_FUNC_next = 151UL; }
        }
        break;
      case 183:
        _index4_3++;
        { _1_OBF_FUNC_next = 207UL; }
        break;
      case 197:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 150UL; }
        break;
      case 281:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 229UL; }
        break;
      case 195:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 62UL; }
        break;
      case 307:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 300UL; }
        break;
      case 157:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 271UL; }
        break;
      case 20:;
        if (tmp___13 % 10 >= 5) {
          { _1_OBF_FUNC_next = 268UL; }
        } else {
          { _1_OBF_FUNC_next = 78UL; }
        }
        break;
      case 186:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 136UL; }
        break;
      case 224:
        tmp___11 = rand();
        { _1_OBF_FUNC_next = 139UL; }
        break;
      case 239:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 299UL; }
        break;
      case 199:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 296UL; }
        } else {
          { _1_OBF_FUNC_next = 31UL; }
        }
        break;
      case 222:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 248UL; }
        break;
      case 146:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 143UL; }
        } else {
          { _1_OBF_FUNC_next = 248UL; }
        }
        break;
      case 87:
        tmp___6 = rand();
        { _1_OBF_FUNC_next = 191UL; }
        break;
      case 316:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 133UL; }
        break;
      case 304:
        localStaticState[_index6_0] -= localStaticState[(unsigned long)_induction5_4_2 % 2UL];
        { _1_OBF_FUNC_next = 319UL; }
        break;
      case 196:
        _index2_2 = 0U;
        { _1_OBF_FUNC_next = 154UL; }
        break;
      case 116:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 216UL; }
        break;
      case 301:
        tmp___12 = rand();
        { _1_OBF_FUNC_next = 71UL; }
        break;
      case 92:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 11UL; }
        } else {
          { _1_OBF_FUNC_next = 273UL; }
        }
        break;
      case 96:
        _index4_3++;
        { _1_OBF_FUNC_next = 19UL; }
        break;
      case 206:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 284UL; }
        break;
      case 28:;
        if (tmp___3 % 10 >= 5) {
          { _1_OBF_FUNC_next = 211UL; }
        } else {
          { _1_OBF_FUNC_next = 35UL; }
        }
        break;
      case 55:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 65UL; }
        } else {
          { _1_OBF_FUNC_next = 120UL; }
        }
        break;
      case 99:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 279UL; }
        } else {
          { _1_OBF_FUNC_next = 181UL; }
        }
        break;
      case 94:
        localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
        { _1_OBF_FUNC_next = 107UL; }
        break;
      case 232:;
        if ((unsigned long)_index0_5 < 5UL) {
          { _1_OBF_FUNC_next = 180UL; }
        } else {
          { _1_OBF_FUNC_next = 103UL; }
        }
        break;
      case 200:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 252UL; }
        break;
      case 88:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 212UL; }
        break;
      case 129:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 260UL; }
        } else {
          { _1_OBF_FUNC_next = 99UL; }
        }
        break;
      case 41:
        _index6_0++;
        { _1_OBF_FUNC_next = 199UL; }
        break;
      case 262:;
        if ((unsigned long)_index0_5 < 5UL) {
          { _1_OBF_FUNC_next = 172UL; }
        } else {
          { _1_OBF_FUNC_next = 54UL; }
        }
        break;
      case 193:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 312UL; }
        break;
      case 258:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 164UL; }
        } else {
          { _1_OBF_FUNC_next = 161UL; }
        }
        break;
      case 313:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 73UL; }
        } else {
          { _1_OBF_FUNC_next = 267UL; }
        }
        break;
      case 133:
        _index0_5 = (unsigned int)((unsigned long)_index0_5 + 2UL);
        { _1_OBF_FUNC_next = 103UL; }
        break;
      case 139:;
        if (tmp___11 % 10 >= 5) {
          { _1_OBF_FUNC_next = 39UL; }
        } else {
          { _1_OBF_FUNC_next = 215UL; }
        }
        break;
      case 172:
        tmp = rand();
        { _1_OBF_FUNC_next = 148UL; }
        break;
      case 207:;
        if ((unsigned long)_index4_3 < 3UL) {
          { _1_OBF_FUNC_next = 226UL; }
        } else {
          { _1_OBF_FUNC_next = 268UL; }
        }
        break;
      case 252:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 21UL; }
        break;
      case 272:
        _index2_2++;
        { _1_OBF_FUNC_next = 204UL; }
        break;
      case 265:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 303UL; }
        } else {
          { _1_OBF_FUNC_next = 8UL; }
        }
        break;
      case 143:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 222UL; }
        break;
      case 237:
        tmp___2 = rand();
        { _1_OBF_FUNC_next = 277UL; }
        break;
      case 130:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 8UL; }
        break;
      case 165:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 224UL; }
        } else {
          { _1_OBF_FUNC_next = 39UL; }
        }
        break;
      case 210:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 251UL; }
        break;
      case 11:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 3UL; }
        break;
      case 303:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 130UL; }
        break;
      case 67:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 313UL; }
        } else {
          { _1_OBF_FUNC_next = 202UL; }
        }
        break;
      case 137:
        localStaticState[_induction7_6_2] = localStaticState[(unsigned long)_index6_0 % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 33UL; }
        break;
      case 190:;
        if (tmp___5 % 10 >= 5) {
          { _1_OBF_FUNC_next = 19UL; }
        } else {
          { _1_OBF_FUNC_next = 115UL; }
        }
        break;
      case 293:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next = 285UL; }
        } else {
          { _1_OBF_FUNC_next = 199UL; }
        }
        break;
      case 48:
        _index6_0++;
        { _1_OBF_FUNC_next = 138UL; }
        break;
      case 57:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 308UL; }
        break;
      case 102:
        _index0_5 = (unsigned int)((unsigned long)_index0_5 + 2UL);
        { _1_OBF_FUNC_next = 232UL; }
        break;
      case 176:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 287UL; }
        break;
      case 159:;
        if ((localStaticState[0UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next = 141UL; }
        } else {
          { _1_OBF_FUNC_next = 315UL; }
        }
        break;
      case 75:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 194UL; }
        } else {
          { _1_OBF_FUNC_next = 27UL; }
        }
        break;
      case 171:
        _index6_0++;
        { _1_OBF_FUNC_next = 39UL; }
        break;
      case 180:
        tmp___1 = rand();
        { _1_OBF_FUNC_next = 297UL; }
        break;
      case 40:
        _index4_3++;
        { _1_OBF_FUNC_next = 219UL; }
        break;
      case 179:
        _index6_0++;
        { _1_OBF_FUNC_next = 293UL; }
        break;
      case 24:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 55UL; }
        break;
      case 205:;
        if (tmp___8 % 10 >= 5) {
          { _1_OBF_FUNC_next = 181UL; }
        } else {
          { _1_OBF_FUNC_next = 67UL; }
        }
        break;
      case 50:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 81UL; }
        break;
      case 277:;
        if (tmp___2 % 10 >= 5) {
          { _1_OBF_FUNC_next = 204UL; }
        } else {
          { _1_OBF_FUNC_next = 104UL; }
        }
        break;
      case 263:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 213UL; }
        } else {
          { _1_OBF_FUNC_next = 253UL; }
        }
        break;
      case 104:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 97UL; }
        break;
      case 85:
        _index0_5 = (unsigned int)((unsigned long)_index0_5 + 2UL);
        { _1_OBF_FUNC_next = 54UL; }
        break;
      case 110:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 72UL; }
        break;
      case 107:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 13UL; }
        break;
      case 243:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 281UL; }
        break;
      case 29:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 318UL; }
        } else {
          { _1_OBF_FUNC_next = 304UL; }
        }
        break;
      case 51:
        localStaticState[_index6_0] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next = 14UL; }
        break;
      case 122:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next = 106UL; }
        break;
      case 209:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 197UL; }
        } else {
          { _1_OBF_FUNC_next = 61UL; }
        }
        break;
      case 168:
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 155UL; }
        break;
      case 191:;
        if (tmp___6 % 10 >= 5) {
          { _1_OBF_FUNC_next = 129UL; }
        } else {
          { _1_OBF_FUNC_next = 44UL; }
        }
        break;
      case 153:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 276UL; }
        break;
      case 47:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next = 249UL; }
        break;
      case 201:
        localStaticState[1UL] = (unsigned int)((unsigned long)input * 741053607UL);
        { _1_OBF_FUNC_next = 131UL; }
        break;
      case 279:
        tmp___8 = rand();
        { _1_OBF_FUNC_next = 205UL; }
        break;
      case 246:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 29UL; }
        } else {
          { _1_OBF_FUNC_next = 119UL; }
        }
        break;
      case 23:
        tmp___5 = rand();
        { _1_OBF_FUNC_next = 190UL; }
        break;
      case 121:
        tmp___3 = rand();
        { _1_OBF_FUNC_next = 28UL; }
        break;
      case 3:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
        { _1_OBF_FUNC_next = 273UL; }
        break;
      case 294:;
        if (localStaticState[1UL] & 1U) {
          { _1_OBF_FUNC_next = 137UL; }
        } else {
          { _1_OBF_FUNC_next = 314UL; }
        }
        break;
      case 71:;
        if (tmp___12 % 10 >= 5) {
          { _1_OBF_FUNC_next = 257UL; }
        } else {
          { _1_OBF_FUNC_next = 247UL; }
        }
        break;
      case 46:
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next = 316UL; }
        break;
      case 144:
        localStaticState[(unsigned long)_index4_3 % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)_index4_3 % 2UL];
        { _1_OBF_FUNC_next = 59UL; }
        break;
      case 282:;
        if (tmp___4 % 10 >= 5) {
          { _1_OBF_FUNC_next = 111UL; }
        } else {
          { _1_OBF_FUNC_next = 47UL; }
        }
        break;
      case 113:
        localStaticState[(unsigned long)_index6_0 % 2UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] + localStaticState[_index6_0];
        { _1_OBF_FUNC_next = 271UL; }
        break;
      case 44:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 209UL; }
        } else {
          { _1_OBF_FUNC_next = 274UL; }
        }
        break;
      case 215:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next = 317UL; }
        } else {
          { _1_OBF_FUNC_next = 245UL; }
        }
        break;
      case 111:;
        if ((unsigned long)_index2_2 < 2UL) {
          { _1_OBF_FUNC_next = 134UL; }
        } else {
          { _1_OBF_FUNC_next = 159UL; }
        }
        break;
      }
    }
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:switch
