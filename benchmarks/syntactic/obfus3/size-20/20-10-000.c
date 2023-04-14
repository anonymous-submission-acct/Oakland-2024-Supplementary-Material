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
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_9;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[67];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 157UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 68:
      _1_OBF_FUNC_lab22:
        localStaticState[_induction11_10_2] = localStaticState[(unsigned long)_induction11_10_2 % 2UL] - localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 169UL; }
        break;
      case 121:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 42:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 49:
      _1_OBF_FUNC_lab38:
        _index0_4 = 0U;
        { _1_OBF_FUNC_next___0 = 205UL; }
        break;
      case 14:
      _1_OBF_FUNC_lab2:;
        { _1_OBF_FUNC_next___0 = 200UL; }
        break;
      case 25:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 193:
        _1_OBF_FUNC_jumpTab[31] = (void *)72UL;
        { _1_OBF_FUNC_next___0 = 104UL; }
        break;
      case 214:
      _1_OBF_FUNC_lab49:
        localStaticState[0UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 158UL; }
        break;
      case 84:;
        if ((unsigned long)_index8_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 10UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 230UL; }
        }
        break;
      case 229:
        _1_OBF_FUNC_next = 63UL;
        { _1_OBF_FUNC_next___0 = 187UL; }
        break;
      case 114:
      _1_OBF_FUNC_lab24:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 168UL; }
        break;
      case 50:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 72:
      _1_OBF_FUNC_lab31:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 231:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 128:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 212:
      _1_OBF_FUNC_lab44:;
        { _1_OBF_FUNC_next___0 = 151UL; }
        break;
      case 140:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 161UL; }
        break;
      case 171:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 177:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 109:
        _1_OBF_FUNC_jumpTab[48] = (void *)36UL;
        { _1_OBF_FUNC_next___0 = 92UL; }
        break;
      case 169:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 197:
      _1_OBF_FUNC_lab9:;
        { _1_OBF_FUNC_next___0 = 203UL; }
        break;
      case 38:;
        if ((unsigned long)_index10_9 < 9UL) {
          { _1_OBF_FUNC_next___0 = 41UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 99UL; }
        }
        break;
      case 153:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 222:
        _1_OBF_FUNC_jumpTab[24] = (void *)114UL;
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 11:
        _1_OBF_FUNC_jumpTab[20] = (void *)51UL;
        { _1_OBF_FUNC_next___0 = 37UL; }
        break;
      case 33:;
        if ((localStaticState[1UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next___0 = 226UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 124UL; }
        }
        break;
      case 188:
        _1_OBF_FUNC_next = 63UL;
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 232:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 190:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 220:
        _1_OBF_FUNC_jumpTab[18] = (void *)17UL;
        { _1_OBF_FUNC_next___0 = 147UL; }
        break;
      case 16:
        _1_OBF_FUNC_jumpTab[25] = (void *)142UL;
        { _1_OBF_FUNC_next___0 = 223UL; }
        break;
      case 170:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 207:
        _1_OBF_FUNC_next = 58UL;
        { _1_OBF_FUNC_next___0 = 152UL; }
        break;
      case 186:
      _1_OBF_FUNC_lab37:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 41:
        _1_OBF_FUNC_next = 66UL;
        { _1_OBF_FUNC_next___0 = 209UL; }
        break;
      case 53:
        _1_OBF_FUNC_next = 36UL;
        { _1_OBF_FUNC_next___0 = 173UL; }
        break;
      case 139:
        _1_OBF_FUNC_jumpTab[54] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 97UL; }
        break;
      case 206:
        _1_OBF_FUNC_jumpTab[60] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 192:
        _1_OBF_FUNC_jumpTab[14] = (void *)135UL;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 76:
        _1_OBF_FUNC_next = 33UL;
        { _1_OBF_FUNC_next___0 = 198UL; }
        break;
      case 32:
        _1_OBF_FUNC_jumpTab[7] = (void *)66UL;
        { _1_OBF_FUNC_next___0 = 201UL; }
        break;
      case 120:
        _1_OBF_FUNC_jumpTab[51] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 58:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 174:
      _1_OBF_FUNC_lab40:;
        { _1_OBF_FUNC_next___0 = 33UL; }
        break;
      case 23:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 54:
      _1_OBF_FUNC_lab11:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next___0 = 145UL; }
        break;
      case 200:;
        switch ((unsigned long)((int)localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL]) % 4UL) {
        case 0UL: {
          _1_OBF_FUNC_next___0 = 129UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 64UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 15UL;
        } break;
        }
        break;
      case 104:
        _1_OBF_FUNC_jumpTab[32] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 201:
        _1_OBF_FUNC_jumpTab[8] = (void *)74UL;
        { _1_OBF_FUNC_next___0 = 178UL; }
        break;
      case 122:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 71:
        _1_OBF_FUNC_jumpTab[10] = (void *)162UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 92:
        _1_OBF_FUNC_jumpTab[49] = (void *)214UL;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 124:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 231UL; }
        break;
      case 185:
        _1_OBF_FUNC_jumpTab[22] = (void *)68UL;
        { _1_OBF_FUNC_next___0 = 227UL; }
        break;
      case 67:
        _1_OBF_FUNC_next = 14UL;
        { _1_OBF_FUNC_next___0 = 63UL; }
        break;
      case 233:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 108:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 82:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 43:
        _1_OBF_FUNC_jumpTab[3] = (void *)115UL;
        { _1_OBF_FUNC_next___0 = 241UL; }
        break;
      case 118:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 183UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 47UL; }
        }
        break;
      case 164:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 165UL; }
        break;
      case 51:
      _1_OBF_FUNC_lab20:;
        { _1_OBF_FUNC_next___0 = 221UL; }
        break;
      case 63:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 102:
      _1_OBF_FUNC_lab36:
        _index8_0++;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 81:
        _1_OBF_FUNC_jumpTab[2] = (void *)14UL;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 175:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 134:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 180:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 39:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 74:
      _1_OBF_FUNC_lab8:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 202:
        _1_OBF_FUNC_next = 61UL;
        { _1_OBF_FUNC_next___0 = 208UL; }
        break;
      case 99:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 209UL; }
        break;
      case 83:
        _1_OBF_FUNC_jumpTab[6] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 20:
        _1_OBF_FUNC_next = 48UL;
        { _1_OBF_FUNC_next___0 = 70UL; }
        break;
      case 0:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 130:
        _1_OBF_FUNC_jumpTab[42] = (void *)35UL;
        { _1_OBF_FUNC_next___0 = 160UL; }
        break;
      case 115:
      _1_OBF_FUNC_lab3:
        _induction9_8_2 = (unsigned int)(((unsigned long)_induction9_8_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 86:
      _1_OBF_FUNC_lab55:;
        { _1_OBF_FUNC_next___0 = 118UL; }
        break;
      case 57:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 132UL; }
        break;
      case 144:
        _1_OBF_FUNC_next = 22UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab[16] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 204UL; }
        break;
      case 218:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 239UL; }
        break;
      case 119:
        _1_OBF_FUNC_jumpTab[29] = (void *)100UL;
        { _1_OBF_FUNC_next___0 = 126UL; }
        break;
      case 44:
        _1_OBF_FUNC_jumpTab[28] = (void *)146UL;
        { _1_OBF_FUNC_next___0 = 119UL; }
        break;
      case 24:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 179UL; }
        break;
      case 73:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 13:
      _1_OBF_FUNC_lab66:
        localStaticState[_induction11_10_2] = localStaticState[(unsigned long)_induction11_10_2 % 2UL] - localStaticState[_induction11_10_2];
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 26:
      _1_OBF_FUNC_lab63:
        localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[(unsigned long)_index0_4 % 2UL];
        { _1_OBF_FUNC_next___0 = 143UL; }
        break;
      case 106:
      _1_OBF_FUNC_lab15:;
        { _1_OBF_FUNC_next___0 = 84UL; }
        break;
      case 154:
      _1_OBF_FUNC_lab35:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 159UL; }
        break;
      case 143:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 123:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 59:
        _1_OBF_FUNC_jumpTab[33] = (void *)196UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 129:
        _1_OBF_FUNC_next = 59UL;
        { _1_OBF_FUNC_next___0 = 219UL; }
        break;
      case 125:
        _1_OBF_FUNC_jumpTab[44] = (void *)212UL;
        { _1_OBF_FUNC_next___0 = 194UL; }
        break;
      case 79:
      _1_OBF_FUNC_lab5:
        _index10_9 = (unsigned int)((unsigned long)_index10_9 + 2UL);
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 27:
        _1_OBF_FUNC_jumpTab[53] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 139UL; }
        break;
      case 179:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 90:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 110:
        _1_OBF_FUNC_jumpTab[61] = (void *)199UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 93:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 233UL; }
        break;
      case 146:
      _1_OBF_FUNC_lab28:;
        { _1_OBF_FUNC_next___0 = 172UL; }
        break;
      case 105:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 170UL; }
        break;
      case 182:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 29:
        _1_OBF_FUNC_next = 35UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 165:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 199:
      _1_OBF_FUNC_lab61:
        _index2_0 = 0U;
        { _1_OBF_FUNC_next___0 = 103UL; }
        break;
      case 223:
        _1_OBF_FUNC_jumpTab[26] = (void *)4UL;
        { _1_OBF_FUNC_next___0 = 216UL; }
        break;
      case 156:
        _1_OBF_FUNC_jumpTab[59] = (void *)78UL;
        { _1_OBF_FUNC_next___0 = 206UL; }
        break;
      case 148:
        _1_OBF_FUNC_jumpTab[40] = (void *)174UL;
        { _1_OBF_FUNC_next___0 = 56UL; }
        break;
      case 65:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 198UL; }
        break;
      case 205:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 173:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 198:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 219:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 34:
      _1_OBF_FUNC_lab13:
        _induction13_12_2 = 0U;
        { _1_OBF_FUNC_next___0 = 117UL; }
        break;
      case 89:
        _1_OBF_FUNC_jumpTab[62] = (void *)191UL;
        { _1_OBF_FUNC_next___0 = 91UL; }
        break;
      case 136:
        _1_OBF_FUNC_next = 55UL;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 117:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 6UL; }
        break;
      case 215:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 211UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 48UL; }
        }
        break;
      case 19:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 66:
      _1_OBF_FUNC_lab7:
        _index2_0++;
        { _1_OBF_FUNC_next___0 = 133UL; }
        break;
      case 94:
        _1_OBF_FUNC_next = 50UL;
        { _1_OBF_FUNC_next___0 = 242UL; }
        break;
      case 181:
      _1_OBF_FUNC_lab57:
        _index8_0 = 0U;
        { _1_OBF_FUNC_next___0 = 218UL; }
        break;
      case 158:
        _1_OBF_FUNC_next = 44UL;
        { _1_OBF_FUNC_next___0 = 42UL; }
        break;
      case 111:
      _1_OBF_FUNC_lab58:
        localStaticState[0UL] = input + 786238786U;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 91:
        _1_OBF_FUNC_jumpTab[63] = (void *)26UL;
        { _1_OBF_FUNC_next___0 = 131UL; }
        break;
      case 100:
      _1_OBF_FUNC_lab29:;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 62:
        _1_OBF_FUNC_next = 57UL;
        { _1_OBF_FUNC_next___0 = 182UL; }
        break;
      case 36:
      _1_OBF_FUNC_lab48:
        localStaticState[1UL] = input - localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 138:
      _1_OBF_FUNC_lab0:
        _index10_9 = 0U;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 187:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 107:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 147:
        _1_OBF_FUNC_jumpTab[19] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 46:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 60:
        _1_OBF_FUNC_jumpTab[1] = (void *)61UL;
        { _1_OBF_FUNC_next___0 = 81UL; }
        break;
      case 208:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 30:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 96:
      _1_OBF_FUNC_lab41:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[(unsigned long)_index4_0 % 2UL] + localStaticState[_induction9_8_2];
        { _1_OBF_FUNC_next___0 = 67UL; }
        break;
      case 126:
        _1_OBF_FUNC_jumpTab[30] = (void *)189UL;
        { _1_OBF_FUNC_next___0 = 193UL; }
        break;
      case 133:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 209:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 213:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 227:
        _1_OBF_FUNC_jumpTab[23] = (void *)195UL;
        { _1_OBF_FUNC_next___0 = 222UL; }
        break;
      case 150:
      _1_OBF_FUNC_lab46:;
        { _1_OBF_FUNC_next___0 = 38UL; }
        break;
      case 98:;
        if ((unsigned long)_index2_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 94UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 101UL; }
        }
        break;
      case 3:
        _1_OBF_FUNC_jumpTab[47] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 109UL; }
        break;
      case 243:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 21:
        _1_OBF_FUNC_jumpTab[11] = (void *)54UL;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 221:;
        if ((unsigned long)_index0_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 76UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 65UL; }
        }
        break;
      case 87:
        _1_OBF_FUNC_jumpTab[58] = (void *)111UL;
        { _1_OBF_FUNC_next___0 = 156UL; }
        break;
      case 113:
        _1_OBF_FUNC_jumpTab[36] = (void *)102UL;
        { _1_OBF_FUNC_next___0 = 236UL; }
        break;
      case 240:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 180UL; }
        break;
      case 112:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 85:
        _1_OBF_FUNC_next = 45UL;
        { _1_OBF_FUNC_next___0 = 171UL; }
        break;
      case 226:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 231UL; }
        break;
      case 137:
      _1_OBF_FUNC_lab65:;
        { _1_OBF_FUNC_next___0 = 215UL; }
        break;
      case 1:
        _1_OBF_FUNC_next = 25UL;
        { _1_OBF_FUNC_next___0 = 116UL; }
        break;
      case 7:
        _1_OBF_FUNC_jumpTab[35] = (void *)154UL;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 9:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 213UL; }
        break;
      case 31:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 177UL; }
        break;
      case 135:
      _1_OBF_FUNC_lab14:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 224:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 47:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 210:
      _1_OBF_FUNC_lab52:
        _induction13_12_2 = (unsigned int)(((unsigned long)_induction13_12_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 164UL; }
        break;
      case 238:
        _1_OBF_FUNC_jumpTab[66] = (void *)13UL;
        { _1_OBF_FUNC_next___0 = 207UL; }
        break;
      case 5:
        _1_OBF_FUNC_jumpTab[34] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 230:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 149UL; }
        break;
      case 80:
        _1_OBF_FUNC_next = 46UL;
        { _1_OBF_FUNC_next___0 = 46UL; }
        break;
      case 35:
      _1_OBF_FUNC_lab42:
        localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction1_0_2];
        { _1_OBF_FUNC_next___0 = 229UL; }
        break;
      case 77:
        _1_OBF_FUNC_jumpTab[50] = (void *)237UL;
        { _1_OBF_FUNC_next___0 = 120UL; }
        break;
      case 239:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 236:
        _1_OBF_FUNC_jumpTab[37] = (void *)186UL;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 149:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 127:
        _1_OBF_FUNC_jumpTab[52] = (void *)210UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 191:
      _1_OBF_FUNC_lab62:
        localStaticState[_index4_0] -= localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
        { _1_OBF_FUNC_next___0 = 93UL; }
        break;
      case 204:
        _1_OBF_FUNC_jumpTab[17] = (void *)225UL;
        { _1_OBF_FUNC_next___0 = 220UL; }
        break;
      case 116:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 196:
      _1_OBF_FUNC_lab33:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 202UL; }
        break;
      case 234:;
        return (0U);
        break;
      case 61:
      _1_OBF_FUNC_lab1:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 105UL; }
        break;
      case 75:
        _1_OBF_FUNC_jumpTab[12] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 184UL; }
        break;
      case 228:
        _1_OBF_FUNC_jumpTab[65] = (void *)137UL;
        { _1_OBF_FUNC_next___0 = 238UL; }
        break;
      case 241:
        _1_OBF_FUNC_jumpTab[4] = (void *)166UL;
        { _1_OBF_FUNC_next___0 = 55UL; }
        break;
      case 48:
        _1_OBF_FUNC_next = 28UL;
        { _1_OBF_FUNC_next___0 = 224UL; }
        break;
      case 225:
      _1_OBF_FUNC_lab17:
        _induction11_10_2 = (unsigned int)(((unsigned long)_induction11_10_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 240UL; }
        break;
      case 95:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 122UL; }
        break;
      case 157:
        _1_OBF_FUNC_jumpTab[0] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 17:
      _1_OBF_FUNC_lab18:
        _index12_0 = (unsigned int)((unsigned long)_index12_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 70:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 178:
        _1_OBF_FUNC_jumpTab[9] = (void *)197UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 168:
        _1_OBF_FUNC_next = 38UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 10:
        _1_OBF_FUNC_next = 41UL;
        { _1_OBF_FUNC_next___0 = 149UL; }
        break;
      case 103:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 243UL; }
        break;
      case 195:
      _1_OBF_FUNC_lab23:
        _index12_0 = 0U;
        { _1_OBF_FUNC_next___0 = 24UL; }
        break;
      case 203:;
        if ((unsigned long)_index12_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 163UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 95UL; }
        }
        break;
      case 55:
        _1_OBF_FUNC_jumpTab[5] = (void *)79UL;
        { _1_OBF_FUNC_next___0 = 83UL; }
        break;
      case 176:
      _1_OBF_FUNC_lab45:
        _index0_4++;
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 189:
      _1_OBF_FUNC_lab30:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 211:
        _1_OBF_FUNC_next = 40UL;
        { _1_OBF_FUNC_next___0 = 224UL; }
        break;
      case 152:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 216:
        _1_OBF_FUNC_jumpTab[27] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 44UL; }
        break;
      case 2:
        _1_OBF_FUNC_jumpTab[46] = (void *)150UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 235:
        _1_OBF_FUNC_jumpTab[39] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 148UL; }
        break;
      case 131:
        _1_OBF_FUNC_jumpTab[64] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 228UL; }
        break;
      case 97:
        _1_OBF_FUNC_jumpTab[55] = (void *)86UL;
        { _1_OBF_FUNC_next___0 = 217UL; }
        break;
      case 40:
        _1_OBF_FUNC_next = 55UL;
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 49UL;
        { _1_OBF_FUNC_next___0 = 153UL; }
        break;
      case 167:
        _1_OBF_FUNC_jumpTab[57] = (void *)181UL;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 142:
      _1_OBF_FUNC_lab25:
        _index6_0 = (unsigned int)((unsigned long)_index6_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 136UL; }
        break;
      case 132:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 78:
      _1_OBF_FUNC_lab59:
        _induction11_10_2 = 0U;
        { _1_OBF_FUNC_next___0 = 141UL; }
        break;
      case 155:
        _1_OBF_FUNC_next = 42UL;
        { _1_OBF_FUNC_next___0 = 108UL; }
        break;
      case 8:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 6:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 145:
        _1_OBF_FUNC_next = 65UL;
        { _1_OBF_FUNC_next___0 = 175UL; }
        break;
      case 160:
        _1_OBF_FUNC_jumpTab[43] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 125UL; }
        break;
      case 194:
        _1_OBF_FUNC_jumpTab[45] = (void *)176UL;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 4:
      _1_OBF_FUNC_lab26:
        _induction9_8_2 = 0U;
        { _1_OBF_FUNC_next___0 = 62UL; }
        break;
      case 101:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 242UL; }
        break;
      case 64:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 8UL; }
        break;
      case 166:
      _1_OBF_FUNC_lab4:
        _index4_0++;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 161:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 162:
      _1_OBF_FUNC_lab10:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 52:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 232UL; }
        break;
      case 163:
        _1_OBF_FUNC_next = 52UL;
        { _1_OBF_FUNC_next___0 = 122UL; }
        break;
      case 88:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 28:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 141:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 50UL; }
        break;
      case 242:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 69:
        _1_OBF_FUNC_jumpTab[15] = (void *)106UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 183:
        _1_OBF_FUNC_next = 62UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 217:
        _1_OBF_FUNC_jumpTab[56] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 167UL; }
        break;
      case 159:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 37:
        _1_OBF_FUNC_jumpTab[21] = (void *)138UL;
        { _1_OBF_FUNC_next___0 = 185UL; }
        break;
      case 151:;
        return ((unsigned int)((long)(localStaticState[0UL] + localStaticState[1UL]) - 3000139179L));
        break;
      case 56:
        _1_OBF_FUNC_jumpTab[41] = (void *)96UL;
        { _1_OBF_FUNC_next___0 = 130UL; }
        break;
      case 45:
        _1_OBF_FUNC_jumpTab[38] = (void *)49UL;
        { _1_OBF_FUNC_next___0 = 235UL; }
        break;
      case 184:
        _1_OBF_FUNC_jumpTab[13] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 192UL; }
        break;
      case 237:
      _1_OBF_FUNC_lab50:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_index2_0] - localStaticState[0UL];
        { _1_OBF_FUNC_next___0 = 29UL; }
        break;
      case 172:;
        if ((localStaticState[1UL] >> 3U) & 1U) {
          { _1_OBF_FUNC_next___0 = 155UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 188UL; }
        }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 18:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 190UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:indirect-goto, irrelevant-code, flatten:switch
