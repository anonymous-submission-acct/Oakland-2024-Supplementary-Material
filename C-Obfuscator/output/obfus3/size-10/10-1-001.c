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
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[39];
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 56UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 24:
      _1_OBF_FUNC_lab20:;
        { _1_OBF_FUNC_next___0 = 1UL; }
        break;
      case 88:
        _1_OBF_FUNC_next = 29UL;
        { _1_OBF_FUNC_next___0 = 82UL; }
        break;
      case 84:
      _1_OBF_FUNC_lab15:
        localStaticState[0UL] = (unsigned int)(((unsigned long)input + 276835458UL) - 575082560UL);
        { _1_OBF_FUNC_next___0 = 16UL; }
        break;
      case 62:
      _1_OBF_FUNC_lab37:
        _index4_0 = (unsigned int)((unsigned long)_index4_0 + 2UL);
        { _1_OBF_FUNC_next___0 = 32UL; }
        break;
      case 120:
      _1_OBF_FUNC_lab8:
        _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 115UL; }
        break;
      case 140:
      _1_OBF_FUNC_lab11:
        localStaticState[_induction3_2_2] = localStaticState[(unsigned long)_index2_4 % 2UL] + localStaticState[_induction3_2_2];
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 37:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 27:
        _1_OBF_FUNC_jumpTab[8] = (void *)120UL;
        { _1_OBF_FUNC_next___0 = 77UL; }
        break;
      case 0:
        _1_OBF_FUNC_jumpTab[2] = (void *)119UL;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 129:
        _1_OBF_FUNC_jumpTab[29] = (void *)45UL;
        { _1_OBF_FUNC_next___0 = 19UL; }
        break;
      case 115:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 50UL; }
        break;
      case 33:
        _1_OBF_FUNC_jumpTab[10] = (void *)67UL;
        { _1_OBF_FUNC_next___0 = 92UL; }
        break;
      case 78:
        _1_OBF_FUNC_jumpTab[14] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 71UL; }
        break;
      case 47:
      _1_OBF_FUNC_lab0:
        _index0_3 = 0U;
        { _1_OBF_FUNC_next___0 = 13UL; }
        break;
      case 20:;
        if ((unsigned long)_index6_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 122UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 114UL; }
        }
        break;
      case 68:
        _1_OBF_FUNC_jumpTab[7] = (void *)63UL;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 106:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 39:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 135UL; }
        break;
      case 95:
      _1_OBF_FUNC_lab34:
        _index2_4 = (unsigned int)((unsigned long)_index2_4 + 2UL);
        { _1_OBF_FUNC_next___0 = 118UL; }
        break;
      case 125:
        _1_OBF_FUNC_next = 30UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 126:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 28:
        _1_OBF_FUNC_jumpTab[16] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 80UL; }
        break;
      case 75:
        _1_OBF_FUNC_jumpTab[13] = (void *)127UL;
        { _1_OBF_FUNC_next___0 = 78UL; }
        break;
      case 2:
        _1_OBF_FUNC_next = 13UL;
        { _1_OBF_FUNC_next___0 = 101UL; }
        break;
      case 44:
        _1_OBF_FUNC_next = 33UL;
        { _1_OBF_FUNC_next___0 = 21UL; }
        break;
      case 56:
        _1_OBF_FUNC_jumpTab[0] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 52UL; }
        break;
      case 22:
        _1_OBF_FUNC_jumpTab[20] = (void *)24UL;
        { _1_OBF_FUNC_next___0 = 141UL; }
        break;
      case 58:
        _1_OBF_FUNC_next = 17UL;
        { _1_OBF_FUNC_next___0 = 31UL; }
        break;
      case 107:
        _1_OBF_FUNC_jumpTab[22] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 61UL; }
        break;
      case 29:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 71:
        _1_OBF_FUNC_jumpTab[15] = (void *)84UL;
        { _1_OBF_FUNC_next___0 = 28UL; }
        break;
      case 76:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 122:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 85:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 11:
        _1_OBF_FUNC_next = 11UL;
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 7:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 143:
        _1_OBF_FUNC_next = 23UL;
        { _1_OBF_FUNC_next___0 = 89UL; }
        break;
      case 119:
      _1_OBF_FUNC_lab2:
        _index0_3 = (unsigned int)((unsigned long)_index0_3 + 2UL);
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 14:
      _1_OBF_FUNC_lab23:
        _induction7_6_2 = (unsigned int)(((unsigned long)_induction7_6_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 4UL; }
        break;
      case 19:
        _1_OBF_FUNC_jumpTab[30] = (void *)109UL;
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 9:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 111:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 100:
      _1_OBF_FUNC_lab12:
        localStaticState[(unsigned long)_induction3_2_2 % 2UL] = localStaticState[_index4_0] + localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 103:
      _1_OBF_FUNC_lab24:
        _index6_0 = 0U;
        { _1_OBF_FUNC_next___0 = 15UL; }
        break;
      case 113:
        _1_OBF_FUNC_jumpTab[27] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 35UL; }
        break;
      case 86:
        _1_OBF_FUNC_next = 15UL;
        { _1_OBF_FUNC_next___0 = 104UL; }
        break;
      case 4:
        _1_OBF_FUNC_next = 5UL;
        { _1_OBF_FUNC_next___0 = 65UL; }
        break;
      case 89:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 60:
        _1_OBF_FUNC_jumpTab[31] = (void *)66UL;
        { _1_OBF_FUNC_next___0 = 10UL; }
        break;
      case 63:
      _1_OBF_FUNC_lab7:
        _index4_0 = 0U;
        { _1_OBF_FUNC_next___0 = 54UL; }
        break;
      case 51:
        _1_OBF_FUNC_next = 18UL;
        { _1_OBF_FUNC_next___0 = 3UL; }
        break;
      case 64:
        _1_OBF_FUNC_next = 34UL;
        { _1_OBF_FUNC_next___0 = 73UL; }
        break;
      case 94:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 92:
        _1_OBF_FUNC_jumpTab[11] = (void *)140UL;
        { _1_OBF_FUNC_next___0 = 102UL; }
        break;
      case 110:
        _1_OBF_FUNC_jumpTab[24] = (void *)103UL;
        { _1_OBF_FUNC_next___0 = 41UL; }
        break;
      case 23:
        _1_OBF_FUNC_jumpTab[5] = (void *)70UL;
        { _1_OBF_FUNC_next___0 = 121UL; }
        break;
      case 66:
      _1_OBF_FUNC_lab31:;
        { _1_OBF_FUNC_next___0 = 133UL; }
        break;
      case 139:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 80:
        _1_OBF_FUNC_jumpTab[17] = (void *)55UL;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 104:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 13:
        _1_OBF_FUNC_next = 26UL;
        { _1_OBF_FUNC_next___0 = 53UL; }
        break;
      case 83:
      _1_OBF_FUNC_lab33:
        localStaticState[(unsigned long)_index2_4 % 2UL] = localStaticState[_induction5_4_2] - localStaticState[(unsigned long)_index6_0 % 2UL];
        { _1_OBF_FUNC_next___0 = 96UL; }
        break;
      case 42:
        _1_OBF_FUNC_next = 38UL;
        { _1_OBF_FUNC_next___0 = 134UL; }
        break;
      case 32:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 57UL; }
        break;
      case 118:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 69UL; }
        break;
      case 67:
      _1_OBF_FUNC_lab10:
        _induction1_0_2 = 0U;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 26:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 141:
        _1_OBF_FUNC_jumpTab[21] = (void *)108UL;
        { _1_OBF_FUNC_next___0 = 107UL; }
        break;
      case 41:
        _1_OBF_FUNC_jumpTab[25] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 93:
        _1_OBF_FUNC_jumpTab[36] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 5UL; }
        break;
      case 109:
      _1_OBF_FUNC_lab30:
        _induction3_2_2 = 0U;
        { _1_OBF_FUNC_next___0 = 36UL; }
        break;
      case 133:;
        if ((unsigned long)_index4_0 < 0UL) {
          { _1_OBF_FUNC_next___0 = 42UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 76UL; }
        }
        break;
      case 10:
        _1_OBF_FUNC_jumpTab[32] = (void *)137UL;
        { _1_OBF_FUNC_next___0 = 12UL; }
        break;
      case 136:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 48UL; }
        break;
      case 15:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 30UL; }
        break;
      case 36:
        _1_OBF_FUNC_next = 19UL;
        { _1_OBF_FUNC_next___0 = 7UL; }
        break;
      case 102:
        _1_OBF_FUNC_jumpTab[12] = (void *)100UL;
        { _1_OBF_FUNC_next___0 = 75UL; }
        break;
      case 45:
      _1_OBF_FUNC_lab29:
        _induction5_4_2 = 0U;
        { _1_OBF_FUNC_next___0 = 136UL; }
        break;
      case 135:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 114:
        _1_OBF_FUNC_next = 21UL;
        { _1_OBF_FUNC_next___0 = 26UL; }
        break;
      case 34:
      _1_OBF_FUNC_lab9:
        localStaticState[_induction1_0_2] += localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 123UL; }
        break;
      case 30:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 124:
        _1_OBF_FUNC_jumpTab[38] = (void *)46UL;
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 12:
        _1_OBF_FUNC_jumpTab[33] = (void *)83UL;
        { _1_OBF_FUNC_next___0 = 40UL; }
        break;
      case 116:;
        if ((unsigned long)_index0_3 < 3UL) {
          { _1_OBF_FUNC_next___0 = 29UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 125UL; }
        }
        break;
      case 25:
        _1_OBF_FUNC_jumpTab[3] = (void *)117UL;
        { _1_OBF_FUNC_next___0 = 59UL; }
        break;
      case 130:;
        return ((localStaticState[0UL] - localStaticState[1UL]) - 1879284913U);
        break;
      case 72:
      _1_OBF_FUNC_lab26:;
        { _1_OBF_FUNC_next___0 = 116UL; }
        break;
      case 61:
        _1_OBF_FUNC_jumpTab[23] = (void *)14UL;
        { _1_OBF_FUNC_next___0 = 110UL; }
        break;
      case 73:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 128:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 49:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 137:
      _1_OBF_FUNC_lab32:
        localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] *= localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 51UL; }
        break;
      case 70:
      _1_OBF_FUNC_lab5:
        _index6_0++;
        { _1_OBF_FUNC_next___0 = 91UL; }
        break;
      case 134:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 105:;
        if ((localStaticState[1UL] >> 4U) & 1U) {
          { _1_OBF_FUNC_next___0 = 44UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 106UL; }
        }
        break;
      case 97:
      _1_OBF_FUNC_lab6:
        localStaticState[1UL] = (unsigned int)((unsigned long)input * ((unsigned long)localStaticState[0UL] + 436519216UL));
        { _1_OBF_FUNC_next___0 = 9UL; }
        break;
      case 98:
        _1_OBF_FUNC_next = 24UL;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 112:
        _1_OBF_FUNC_next = 37UL;
        { _1_OBF_FUNC_next___0 = 126UL; }
        break;
      case 57:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 144:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 8:
      _1_OBF_FUNC_lab18:;
        { _1_OBF_FUNC_next___0 = 130UL; }
        break;
      case 79:
        _1_OBF_FUNC_jumpTab[35] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 93UL; }
        break;
      case 38:;
        return (0U);
        break;
      case 131:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 117:
      _1_OBF_FUNC_lab3:
        _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 64UL; }
        break;
      case 101:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 87:
        _1_OBF_FUNC_next = 20UL;
        { _1_OBF_FUNC_next___0 = 43UL; }
        break;
      case 90:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 21:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 31:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 65:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 132:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 59:
        _1_OBF_FUNC_jumpTab[4] = (void *)142UL;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 43:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 121:
        _1_OBF_FUNC_jumpTab[6] = (void *)97UL;
        { _1_OBF_FUNC_next___0 = 68UL; }
        break;
      case 52:
        _1_OBF_FUNC_jumpTab[1] = (void *)6UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 6:
      _1_OBF_FUNC_lab1:;
        { _1_OBF_FUNC_next___0 = 20UL; }
        break;
      case 1:;
        if ((unsigned long)_index2_4 < 4UL) {
          { _1_OBF_FUNC_next___0 = 11UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 138UL; }
        }
        break;
      case 69:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 127:
      _1_OBF_FUNC_lab13:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[(unsigned long)_index6_0 % 2UL];
        { _1_OBF_FUNC_next___0 = 143UL; }
        break;
      case 81:
      _1_OBF_FUNC_lab19:
        _index2_4 = 0U;
        { _1_OBF_FUNC_next___0 = 87UL; }
        break;
      case 142:
      _1_OBF_FUNC_lab4:;
        { _1_OBF_FUNC_next___0 = 105UL; }
        break;
      case 18:
        _1_OBF_FUNC_jumpTab[26] = (void *)72UL;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 5:
        _1_OBF_FUNC_jumpTab[37] = (void *)62UL;
        { _1_OBF_FUNC_next___0 = 124UL; }
        break;
      case 74:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 90UL; }
        break;
      case 91:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 139UL; }
        break;
      case 50:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 16:
        _1_OBF_FUNC_next = 6UL;
        { _1_OBF_FUNC_next___0 = 131UL; }
        break;
      case 48:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 53:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 17:
        _1_OBF_FUNC_jumpTab[18] = (void *)8UL;
        { _1_OBF_FUNC_next___0 = 99UL; }
        break;
      case 123:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 96:
        _1_OBF_FUNC_next = 12UL;
        { _1_OBF_FUNC_next___0 = 132UL; }
        break;
      case 40:
        _1_OBF_FUNC_jumpTab[34] = (void *)95UL;
        { _1_OBF_FUNC_next___0 = 79UL; }
        break;
      case 77:
        _1_OBF_FUNC_jumpTab[9] = (void *)34UL;
        { _1_OBF_FUNC_next___0 = 33UL; }
        break;
      case 82:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 35:
        _1_OBF_FUNC_jumpTab[28] = (void *)47UL;
        { _1_OBF_FUNC_next___0 = 129UL; }
        break;
      case 55:
      _1_OBF_FUNC_lab17:
        localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        { _1_OBF_FUNC_next___0 = 88UL; }
        break;
      case 54:
        _1_OBF_FUNC_next = 31UL;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 46:
      _1_OBF_FUNC_lab38:
        _induction7_6_2 = 0U;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 138:
        _1_OBF_FUNC_next = 32UL;
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 99:
        _1_OBF_FUNC_jumpTab[19] = (void *)81UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 3:;
        {
          _1_OBF_FUNC_next___0 = (unsigned long)_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next];
        }
        break;
      case 108:
      _1_OBF_FUNC_lab21:
        _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      }
    }
  }
}
// variants: flatten, irrelevant-code, flatten
// expanded variants: flatten:indirect-goto, irrelevant-code, flatten:switch
