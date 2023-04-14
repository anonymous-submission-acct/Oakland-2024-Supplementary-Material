typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
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
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_3;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[85];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 201UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 193:
        _1_OBF_FUNC_jumpTab[79] = (void *)185UL;
        { _1_OBF_FUNC_next___0 = 290UL; }
        break;
      case 84:;
        if ((localStaticState[0UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next___0 = 251UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 79UL; }
        }
        break;
      case 267:
        _1_OBF_FUNC_jumpTab[59] = (void *)280UL;
        { _1_OBF_FUNC_next___0 = 214UL; }
        break;
      case 263:
      _1_OBF_FUNC_lab68:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next___0 = 302UL; }
        break;
      case 183:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 187:
        _1_OBF_FUNC_jumpTab[9] = (void *)221UL;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 314:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 141UL; }
        break;
      case 162:
      _1_OBF_FUNC_lab21:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 207UL; }
        break;
      case 151:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 106:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 101UL; }
        break;
      case 226:
      _1_OBF_FUNC_lab17:
        _index6_3 = (unsigned int)((unsigned long)_index6_3 + 2UL);
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 93:
      _1_OBF_FUNC_lab12:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 145UL; }
        break;
      case 236:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 260:
        _1_OBF_FUNC_jumpTab[7] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 20:
        _1_OBF_FUNC_jumpTab[49] = (void *)315UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 155:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 217:
        _1_OBF_FUNC_jumpTab[70] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 244UL; }
        break;
      case 309:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 222:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 295:
        _1_OBF_FUNC_next = 66UL;
        { _1_OBF_FUNC_next___0 = 222UL; }
        break;
      case 224:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 53:
      _1_OBF_FUNC_lab23:
        localStaticState[0UL] = localStaticState[_induction7_6_2] - localStaticState[(unsigned long)_index6_3 % 2UL];
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 181:
      _1_OBF_FUNC_lab26:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 174UL; }
        break;
      case 125:
        _1_OBF_FUNC_next = 67UL;
        { _1_OBF_FUNC_next___0 = 137UL; }
        break;
      case 280:
      _1_OBF_FUNC_lab59:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 219UL; }
        break;
      case 300:
        _1_OBF_FUNC_jumpTab[74] = (void *)102UL;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 166:
        _1_OBF_FUNC_jumpTab[63] = (void *)301UL;
        { _1_OBF_FUNC_next___0 = 247UL; }
        break;
      case 212:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 290:
        _1_OBF_FUNC_jumpTab[80] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 173UL; }
        break;
      case 108:
        _1_OBF_FUNC_next = 58UL;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 45:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 248:
        _1_OBF_FUNC_jumpTab[37] = (void *)42UL;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 79:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 70:
        _1_OBF_FUNC_jumpTab[3] = (void *)114UL;
        { _1_OBF_FUNC_next___0 = 257UL; }
        break;
      case 234:
        _1_OBF_FUNC_jumpTab[57] = (void *)58UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 286:
      _1_OBF_FUNC_lab44:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 37:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 136:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 252UL; }
        break;
      case 29:
        _1_OBF_FUNC_jumpTab[51] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 172UL; }
        break;
      case 74:
        _1_OBF_FUNC_jumpTab[8] = (void *)275UL;
        { _1_OBF_FUNC_next___0 = 187UL; }
        break;
      case 240:
        _1_OBF_FUNC_jumpTab[16] = (void *)265UL;
        { _1_OBF_FUNC_next___0 = 103UL; }
        break;
      case 48:
      _1_OBF_FUNC_lab81:;
        { _1_OBF_FUNC_next___0 = 292UL; }
        break;
      case 69:;
        if (localStaticState[0UL] & 1U) {
          { _1_OBF_FUNC_next___0 = 304UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 224UL; }
        }
        break;
      case 266:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 209UL; }
        break;
      case 198:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 44:
        _1_OBF_FUNC_jumpTab[14] = (void *)232UL;
        { _1_OBF_FUNC_next___0 = 184UL; }
        break;
      case 156:
        _1_OBF_FUNC_jumpTab[42] = (void *)294UL;
        { _1_OBF_FUNC_next___0 = 223UL; }
        break;
      case 50:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 242UL; }
        break;
      case 11:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 284:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 182UL; }
        break;
      case 139:
        _1_OBF_FUNC_next = 60UL;
        { _1_OBF_FUNC_next___0 = 130UL; }
        break;
      case 258:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 298UL; }
        break;
      case 174:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 262UL; }
        break;
      case 97:
        _1_OBF_FUNC_jumpTab[12] = (void *)93UL;
        { _1_OBF_FUNC_next___0 = 160UL; }
        break;
      case 204:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 120UL; }
        break;
      case 313:
      _1_OBF_FUNC_lab0:
        _index14_0 = 0U;
        { _1_OBF_FUNC_next___0 = 249UL; }
        break;
      case 135:
        _1_OBF_FUNC_jumpTab[26] = (void *)181UL;
        { _1_OBF_FUNC_next___0 = 211UL; }
        break;
      case 231:
        _1_OBF_FUNC_jumpTab[73] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 300UL; }
        break;
      case 164:
        _1_OBF_FUNC_jumpTab[18] = (void *)196UL;
        { _1_OBF_FUNC_next___0 = 220UL; }
        break;
      case 176:
        _1_OBF_FUNC_jumpTab[31] = (void *)83UL;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 63:
        _1_OBF_FUNC_jumpTab[62] = (void *)51UL;
        { _1_OBF_FUNC_next___0 = 166UL; }
        break;
      case 83:
      _1_OBF_FUNC_lab31:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 295UL; }
        break;
      case 249:
        _1_OBF_FUNC_next = 81UL;
        { _1_OBF_FUNC_next___0 = 177UL; }
        break;
      case 117:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 61:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 274UL; }
        break;
      case 35:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 203UL; }
        break;
      case 318:
        _1_OBF_FUNC_next = 53UL;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 244:
        _1_OBF_FUNC_jumpTab[71] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 303:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 237:
        _1_OBF_FUNC_jumpTab[83] = (void *)272UL;
        { _1_OBF_FUNC_next___0 = 229UL; }
        break;
      case 220:
        _1_OBF_FUNC_jumpTab[19] = (void *)64UL;
        { _1_OBF_FUNC_next___0 = 192UL; }
        break;
      case 251:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 161:
        _1_OBF_FUNC_jumpTab[66] = (void *)21UL;
        { _1_OBF_FUNC_next___0 = 149UL; }
        break;
      case 130:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 40:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 177:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 59:
      _1_OBF_FUNC_lab25:
        localStaticState[_induction9_8_2] = localStaticState[1UL] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 124:
      _1_OBF_FUNC_lab45:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 194UL; }
        break;
      case 109:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 110:
        _1_OBF_FUNC_next = 84UL;
        { _1_OBF_FUNC_next___0 = 228UL; }
        break;
      case 281:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 112:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next___0 = 279UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 271UL; }
        }
        break;
      case 277:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 289:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 149:
        _1_OBF_FUNC_jumpTab[67] = (void *)9UL;
        { _1_OBF_FUNC_next___0 = 297UL; }
        break;
      case 65:;
        if ((localStaticState[1UL] >> 1U) & 1U) {
          { _1_OBF_FUNC_next___0 = 10UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 212UL; }
        }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 68:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 188:
      _1_OBF_FUNC_lab56:;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 229:
        _1_OBF_FUNC_jumpTab[84] = (void *)133UL;
        { _1_OBF_FUNC_next___0 = 308UL; }
        break;
      case 282:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 169UL; }
        break;
      case 194:
        _1_OBF_FUNC_next = 28UL;
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 246:
        _1_OBF_FUNC_next = 84UL;
        { _1_OBF_FUNC_next___0 = 180UL; }
        break;
      case 49:
      _1_OBF_FUNC_lab61:
        localStaticState[0UL] = (unsigned int)((long)input + 4255344362L);
        { _1_OBF_FUNC_next___0 = 122UL; }
        break;
      case 19:
        _1_OBF_FUNC_next = 57UL;
        { _1_OBF_FUNC_next___0 = 236UL; }
        break;
      case 202:
        _1_OBF_FUNC_jumpTab[24] = (void *)82UL;
        { _1_OBF_FUNC_next___0 = 273UL; }
        break;
      case 272:
      _1_OBF_FUNC_lab83:;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 288:
      _1_OBF_FUNC_lab55:
        _index8_0++;
        { _1_OBF_FUNC_next___0 = 246UL; }
        break;
      case 238:
        _1_OBF_FUNC_next = 81UL;
        { _1_OBF_FUNC_next___0 = 68UL; }
        break;
      case 4:
        _1_OBF_FUNC_jumpTab[53] = (void *)142UL;
        { _1_OBF_FUNC_next___0 = 216UL; }
        break;
      case 81:
        _1_OBF_FUNC_jumpTab[10] = (void *)115UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 126:
      _1_OBF_FUNC_lab28:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 99UL; }
        break;
      case 179:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 116:
      _1_OBF_FUNC_lab77:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[(unsigned long)_index2_0 % 2UL] + localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 317UL; }
        break;
      case 104:
        _1_OBF_FUNC_jumpTab[40] = (void *)98UL;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 264:
        _1_OBF_FUNC_jumpTab[36] = (void *)239UL;
        { _1_OBF_FUNC_next___0 = 248UL; }
        break;
      case 102:
      _1_OBF_FUNC_lab74:
        localStaticState[_index2_0] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] * localStaticState[(unsigned long)_induction1_0_2 % 2UL];
        { _1_OBF_FUNC_next___0 = 215UL; }
        break;
      case 9:
      _1_OBF_FUNC_lab67:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 123:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 310:
      _1_OBF_FUNC_lab20:
        localStaticState[_induction9_8_2] = localStaticState[1UL] * localStaticState[_index12_0];
        { _1_OBF_FUNC_next___0 = 254UL; }
        break;
      case 128:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 60:
        _1_OBF_FUNC_next = 83UL;
        { _1_OBF_FUNC_next___0 = 274UL; }
        break;
      case 140:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 73:
      _1_OBF_FUNC_lab15:;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 232:
      _1_OBF_FUNC_lab14:
        _index4_0++;
        { _1_OBF_FUNC_next___0 = 266UL; }
        break;
      case 158:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 54:
        _1_OBF_FUNC_next = 59UL;
        { _1_OBF_FUNC_next___0 = 34UL; }
        break;
      case 250:
        _1_OBF_FUNC_jumpTab[48] = (void *)76UL;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 245:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 304:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 12:
        _1_OBF_FUNC_next = 56UL;
        { _1_OBF_FUNC_next___0 = 120UL; }
        break;
      case 269:
        _1_OBF_FUNC_next = 66UL;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 46:
        _1_OBF_FUNC_jumpTab[32] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 105UL; }
        break;
      case 186:
      _1_OBF_FUNC_lab69:;
        { _1_OBF_FUNC_next___0 = 84UL; }
        break;
      case 119:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 157:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 38:
        _1_OBF_FUNC_jumpTab[21] = (void *)162UL;
        { _1_OBF_FUNC_next___0 = 138UL; }
        break;
      case 167:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 279:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 306:
        _1_OBF_FUNC_jumpTab[76] = (void *)5UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 131:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 200UL; }
        break;
      case 28:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 180:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 301:
      _1_OBF_FUNC_lab63:
        localStaticState[0UL] *= localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 284UL; }
        break;
      case 163:
        _1_OBF_FUNC_next = 63UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 169:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 216:
        _1_OBF_FUNC_jumpTab[54] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 230UL; }
        break;
      case 80:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 171UL; }
        break;
      case 0:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 66:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 72:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 247:
        _1_OBF_FUNC_jumpTab[64] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 153UL; }
        break;
      case 178:
        _1_OBF_FUNC_jumpTab[56] = (void *)188UL;
        { _1_OBF_FUNC_next___0 = 234UL; }
        break;
      case 30:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 203:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 6:
        _1_OBF_FUNC_jumpTab[2] = (void *)33UL;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 311:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 210UL; }
        break;
      case 105:
        _1_OBF_FUNC_jumpTab[33] = (void *)18UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 145:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 151UL; }
        break;
      case 196:
      _1_OBF_FUNC_lab18:
        localStaticState[(unsigned long)_index0_1 % 2UL] *= localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next___0 = 163UL; }
        break;
      case 207:
        _1_OBF_FUNC_next = 55UL;
        { _1_OBF_FUNC_next___0 = 158UL; }
        break;
      case 235:
        _1_OBF_FUNC_jumpTab[82] = (void *)261UL;
        { _1_OBF_FUNC_next___0 = 237UL; }
        break;
      case 100:
      _1_OBF_FUNC_lab50:;
        { _1_OBF_FUNC_next___0 = 41UL; }
        break;
      case 56:
        _1_OBF_FUNC_jumpTab[41] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 156UL; }
        break;
      case 230:
        _1_OBF_FUNC_jumpTab[55] = (void *)288UL;
        { _1_OBF_FUNC_next___0 = 178UL; }
        break;
      case 103:
        _1_OBF_FUNC_jumpTab[17] = (void *)226UL;
        { _1_OBF_FUNC_next___0 = 164UL; }
        break;
      case 129:
      _1_OBF_FUNC_lab22:;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 270:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 92:
      _1_OBF_FUNC_lab35:;
        { _1_OBF_FUNC_next___0 = 259UL; }
        break;
      case 32:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 195:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 66UL; }
        break;
      case 147:
        _1_OBF_FUNC_next = 68UL;
        { _1_OBF_FUNC_next___0 = 191UL; }
        break;
      case 268:
        _1_OBF_FUNC_jumpTab[35] = (void *)92UL;
        { _1_OBF_FUNC_next___0 = 264UL; }
        break;
      case 210:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 5:
      _1_OBF_FUNC_lab76:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next___0 = 318UL; }
        break;
      case 192:
        _1_OBF_FUNC_jumpTab[20] = (void *)310UL;
        { _1_OBF_FUNC_next___0 = 38UL; }
        break;
      case 76:
      _1_OBF_FUNC_lab48:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 278UL; }
        break;
      case 185:
      _1_OBF_FUNC_lab79:
        _index10_0 = 0U;
        { _1_OBF_FUNC_next___0 = 195UL; }
        break;
      case 257:
        _1_OBF_FUNC_jumpTab[4] = (void *)189UL;
        { _1_OBF_FUNC_next___0 = 148UL; }
        break;
      case 273:
        _1_OBF_FUNC_jumpTab[25] = (void *)59UL;
        { _1_OBF_FUNC_next___0 = 135UL; }
        break;
      case 255:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 204UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 12UL; }
        }
        break;
      case 278:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 51:
      _1_OBF_FUNC_lab62:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 47:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 293UL; }
        break;
      case 27:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 171:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 208:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 26UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 86UL; }
        }
        break;
      case 291:
        _1_OBF_FUNC_jumpTab[45] = (void *)124UL;
        { _1_OBF_FUNC_next___0 = 299UL; }
        break;
      case 227:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 82:
      _1_OBF_FUNC_lab24:
        _index14_0++;
        { _1_OBF_FUNC_next___0 = 238UL; }
        break;
      case 99:
        _1_OBF_FUNC_next = 75UL;
        { _1_OBF_FUNC_next___0 = 270UL; }
        break;
      case 215:
        _1_OBF_FUNC_next = 82UL;
        { _1_OBF_FUNC_next___0 = 312UL; }
        break;
      case 261:
      _1_OBF_FUNC_lab82:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 150UL; }
        break;
      case 3:;
        if ((unsigned long)_index0_1 < 1UL) {
          { _1_OBF_FUNC_next___0 = 167UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 303UL; }
        }
        break;
      case 221:
      _1_OBF_FUNC_lab9:;
        { _1_OBF_FUNC_next___0 = 154UL; }
        break;
      case 219:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 183UL; }
        break;
      case 122:
        _1_OBF_FUNC_next = 49UL;
        { _1_OBF_FUNC_next___0 = 281UL; }
        break;
      case 90:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 254:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 157UL; }
        break;
      case 114:
      _1_OBF_FUNC_lab3:;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 89:
        _1_OBF_FUNC_jumpTab[44] = (void *)286UL;
        { _1_OBF_FUNC_next___0 = 291UL; }
        break;
      case 299:
        _1_OBF_FUNC_jumpTab[46] = (void *)253UL;
        { _1_OBF_FUNC_next___0 = 206UL; }
        break;
      case 58:
      _1_OBF_FUNC_lab57:
        localStaticState[_induction15_14_2] = localStaticState[_induction9_8_2] + localStaticState[_induction15_14_2];
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 18:
      _1_OBF_FUNC_lab33:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next___0 = 258UL; }
        break;
      case 88:
        _1_OBF_FUNC_jumpTab[38] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 276UL; }
        break;
      case 159:
      _1_OBF_FUNC_lab72:
        _index0_1 = 0U;
        { _1_OBF_FUNC_next___0 = 282UL; }
        break;
      case 91:
        _1_OBF_FUNC_jumpTab[30] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 176UL; }
        break;
      case 296:
        _1_OBF_FUNC_jumpTab[1] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 62:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 143:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 10:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 294:
      _1_OBF_FUNC_lab42:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 118:
      _1_OBF_FUNC_lab75:;
        { _1_OBF_FUNC_next___0 = 208UL; }
        break;
      case 315:
      _1_OBF_FUNC_lab49:
        localStaticState[1UL] = input * 1208268713U;
        { _1_OBF_FUNC_next___0 = 305UL; }
        break;
      case 132:
        _1_OBF_FUNC_next = 72UL;
        { _1_OBF_FUNC_next___0 = 199UL; }
        break;
      case 141:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 213:
        _1_OBF_FUNC_jumpTab[28] = (void *)126UL;
        { _1_OBF_FUNC_next___0 = 307UL; }
        break;
      case 42:
      _1_OBF_FUNC_lab37:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 31:
        _1_OBF_FUNC_jumpTab[11] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 97UL; }
        break;
      case 16:
        _1_OBF_FUNC_jumpTab[50] = (void *)100UL;
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 71:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 262:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 14:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 287UL; }
        break;
      case 265:
      _1_OBF_FUNC_lab16:
        localStaticState[1UL] = localStaticState[(unsigned long)_induction7_6_2 % 2UL] * localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 199:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 95:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 94:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 152:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)_index8_0 % 2UL]) % 6UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 8UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 125UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 47UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 108UL;
        } break;
        }
        break;
      case 144:
        _1_OBF_FUNC_next = 43UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 1:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 142:
      _1_OBF_FUNC_lab53:
        _index12_0 = 0U;
        { _1_OBF_FUNC_next___0 = 14UL; }
        break;
      case 259:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 60UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 61UL; }
        }
        break;
      case 26:
        _1_OBF_FUNC_next = 77UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 253:
      _1_OBF_FUNC_lab46:
        _index0_1++;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 190:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 307:
        _1_OBF_FUNC_jumpTab[29] = (void *)316UL;
        { _1_OBF_FUNC_next___0 = 91UL; }
        break;
      case 133:
      _1_OBF_FUNC_lab84:;
        { _1_OBF_FUNC_next___0 = 255UL; }
        break;
      case 146:
        _1_OBF_FUNC_next = 76UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 276:
        _1_OBF_FUNC_jumpTab[39] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 104UL; }
        break;
      case 23:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 173:
        _1_OBF_FUNC_jumpTab[81] = (void *)48UL;
        { _1_OBF_FUNC_next___0 = 235UL; }
        break;
      case 285:
        _1_OBF_FUNC_jumpTab[61] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 302:
        _1_OBF_FUNC_next = 62UL;
        { _1_OBF_FUNC_next___0 = 155UL; }
        break;
      case 252:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 256:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 277UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 106UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 147UL;
        } break;
        }
        break;
      case 55:;
        return (0U);
        break;
      case 214:
        _1_OBF_FUNC_jumpTab[60] = (void *)205UL;
        { _1_OBF_FUNC_next___0 = 285UL; }
        break;
      case 211:
        _1_OBF_FUNC_jumpTab[27] = (void *)36UL;
        { _1_OBF_FUNC_next___0 = 213UL; }
        break;
      case 298:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 184:
        _1_OBF_FUNC_jumpTab[15] = (void *)73UL;
        { _1_OBF_FUNC_next___0 = 240UL; }
        break;
      case 160:
        _1_OBF_FUNC_jumpTab[13] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 44UL; }
        break;
      case 165:
        _1_OBF_FUNC_next = 74UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 218:
      _1_OBF_FUNC_lab58:
        _induction15_14_2 = 0U;
        { _1_OBF_FUNC_next___0 = 314UL; }
        break;
      case 209:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 316:
      _1_OBF_FUNC_lab29:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next___0 = 225UL; }
        break;
      case 182:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 78:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 17:
        _1_OBF_FUNC_jumpTab[72] = (void *)159UL;
        { _1_OBF_FUNC_next___0 = 231UL; }
        break;
      case 201:
        _1_OBF_FUNC_jumpTab[0] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 296UL; }
        break;
      case 206:
        _1_OBF_FUNC_jumpTab[47] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 250UL; }
        break;
      case 24:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 111:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 87:
        _1_OBF_FUNC_jumpTab[6] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 260UL; }
        break;
      case 25:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 137:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 205:
      _1_OBF_FUNC_lab60:
        _index10_0++;
        { _1_OBF_FUNC_next___0 = 311UL; }
        break;
      case 312:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 86:
        _1_OBF_FUNC_next = 27UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 225:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 64:
      _1_OBF_FUNC_lab19:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 132UL; }
        break;
      case 113:
        _1_OBF_FUNC_jumpTab[75] = (void *)118UL;
        { _1_OBF_FUNC_next___0 = 306UL; }
        break;
      case 36:
      _1_OBF_FUNC_lab27:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 15:
        _1_OBF_FUNC_jumpTab[69] = (void *)186UL;
        { _1_OBF_FUNC_next___0 = 217UL; }
        break;
      case 241:
      _1_OBF_FUNC_lab43:
        _induction15_14_2 = (unsigned int)(((unsigned long)_induction15_14_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 50UL; }
        break;
      case 57:
        _1_OBF_FUNC_jumpTab[77] = (void *)116UL;
        { _1_OBF_FUNC_next___0 = 197UL; }
        break;
      case 96:;
        if ((unsigned long)_index6_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 43UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 30UL; }
        }
        break;
      case 75:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 308:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 43:
        _1_OBF_FUNC_next = 16UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 227UL; }
        break;
      case 101:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 283:
      _1_OBF_FUNC_lab34:
        _index6_3 = 0U;
        { _1_OBF_FUNC_next___0 = 136UL; }
        break;
      case 297:
        _1_OBF_FUNC_jumpTab[68] = (void *)263UL;
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 170:
        _1_OBF_FUNC_next = 69UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 243:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 2:;
        if ((unsigned long)_index10_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 170UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 146UL; }
        }
        break;
      case 305:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 309UL; }
        break;
      case 153:
        _1_OBF_FUNC_jumpTab[65] = (void *)233UL;
        { _1_OBF_FUNC_next___0 = 161UL; }
        break;
      case 121:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 197:
        _1_OBF_FUNC_jumpTab[78] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 193UL; }
        break;
      case 8:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 274:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 228:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 200:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 175:
        _1_OBF_FUNC_jumpTab[23] = (void *)53UL;
        { _1_OBF_FUNC_next___0 = 202UL; }
        break;
      case 317:
        _1_OBF_FUNC_next = 40UL;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 13:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab[58] = (void *)218UL;
        { _1_OBF_FUNC_next___0 = 267UL; }
        break;
      case 239:
      _1_OBF_FUNC_lab36:;
        { _1_OBF_FUNC_next___0 = 152UL; }
        break;
      case 134:
        _1_OBF_FUNC_next = 75UL;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 67:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 138:
        _1_OBF_FUNC_jumpTab[22] = (void *)129UL;
        { _1_OBF_FUNC_next___0 = 175UL; }
        break;
      case 242:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 77:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 223:
        _1_OBF_FUNC_jumpTab[43] = (void *)241UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 33:
      _1_OBF_FUNC_lab2:
        localStaticState[_induction9_8_2] = localStaticState[_index8_0] + localStaticState[_induction13_12_2];
        { _1_OBF_FUNC_next___0 = 131UL; }
        break;
      case 287:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 293:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 150:
        _1_OBF_FUNC_next = 33UL;
        { _1_OBF_FUNC_next___0 = 190UL; }
        break;
      case 292:;
        if ((unsigned long)_index14_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 19UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 168UL; }
        }
        break;
      case 271:
        _1_OBF_FUNC_next = 66UL;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 41:;
        if ((localStaticState[0UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next___0 = 198UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 269UL; }
        }
        break;
      case 39:
        _1_OBF_FUNC_jumpTab[34] = (void *)283UL;
        { _1_OBF_FUNC_next___0 = 268UL; }
        break;
      case 115:
      _1_OBF_FUNC_lab10:;
        { _1_OBF_FUNC_next___0 = 96UL; }
        break;
      case 168:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 236UL; }
        break;
      case 233:
      _1_OBF_FUNC_lab65:;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 275:
      _1_OBF_FUNC_lab8:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 139UL; }
        break;
      case 148:
        _1_OBF_FUNC_jumpTab[5] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 172:
        _1_OBF_FUNC_jumpTab[52] = (void *)313UL;
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 191:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 98:
      _1_OBF_FUNC_lab40:
        localStaticState[0UL] = localStaticState[(unsigned long)_index2_0 % 2UL] + localStaticState[_index2_0];
        { _1_OBF_FUNC_next___0 = 165UL; }
        break;
      case 154:;
        if ((unsigned long)_index12_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 179UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 37UL; }
        }
        break;
      case 21:
      _1_OBF_FUNC_lab66:;
        { _1_OBF_FUNC_next___0 = 256UL; }
        break;
      case 85:;
        return ((unsigned int)((unsigned long)localStaticState[0UL] + (unsigned long)localStaticState[1UL] * 675237199UL));
        break;
      case 127:
        _1_OBF_FUNC_next = 79UL;
        { _1_OBF_FUNC_next___0 = 245UL; }
        break;
      case 107:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 120:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 189:
      _1_OBF_FUNC_lab4:
        localStaticState[_induction13_12_2] = localStaticState[_induction9_8_2] + localStaticState[_induction13_12_2];
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:indirect-goto, irrelevant-code, flatten:switch
