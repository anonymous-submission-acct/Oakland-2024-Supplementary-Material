typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int printf();
char **_global_envp;
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
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
    tmp = strtoul(*(argv + 1));
    tmp___0 = OBF_FUNC(argc, (int *)tmp);
    return (tmp___0);
  }
}
int OBF_FUNC(int argc, int *argv) {
  int i;
  int sum;
  unsigned long _1_OBF_FUNC_next;
  int __RANDVAR__84748022271636949588__;
  unsigned long _1_OBF_FUNC_next___0;
  {
    { _1_OBF_FUNC_next___0 = 165UL; }
    while (1) {
      switch (_1_OBF_FUNC_next___0) {
      case 97:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 146UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 150UL; }
        }
        break;
      case 168:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 65:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 172UL; }
        break;
      case 164:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 92UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 198UL; }
        }
        break;
      case 33:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 48:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 33UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 179UL; }
        }
        break;
      case 8:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 161UL; }
        break;
      case 146:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 15:;
        return (0);
        break;
      case 49:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 114:;
        {
          _1_OBF_FUNC_next___0 = 48UL;
        }
        break;
      case 109:
        i = 0;
        { _1_OBF_FUNC_next___0 = 133UL; }
        break;
      case 182:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 78:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 63:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 119UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 180UL; }
        }
        break;
      case 199:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 184UL; }
        break;
      case 19:;
        return (0);
        break;
      case 52:;
        return (0);
        break;
      case 47:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 122:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 74UL; }
        break;
      case 101:;
        {
          _1_OBF_FUNC_next___0 = 19UL;
        }
        break;
      case 148:;
        {
          _1_OBF_FUNC_next___0 = 164UL;
        }
        break;
      case 89:
        i = 0;
        { _1_OBF_FUNC_next___0 = 145UL; }
        break;
      case 27:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 156:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 192:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 76UL; }
        break;
      case 116:
        sum += i;
        { _1_OBF_FUNC_next___0 = 23UL; }
        break;
      case 31:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 186:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 62:
        i = 0;
        { _1_OBF_FUNC_next___0 = 112UL; }
        break;
      case 123:;
        {
          _1_OBF_FUNC_next___0 = 75UL;
        }
        break;
      case 35:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 20UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 182UL; }
        }
        break;
      case 161:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 76:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 166:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 18:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 72:
        i = 0;
        { _1_OBF_FUNC_next___0 = 66UL; }
        break;
      case 50:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 45:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 24:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 85UL; }
        break;
      case 111:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 138:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 137UL; }
        break;
      case 125:;
        return (0);
        break;
      case 57:
        i++;
        { _1_OBF_FUNC_next___0 = 156UL; }
        break;
      case 87:
        i++;
        { _1_OBF_FUNC_next___0 = 113UL; }
        break;
      case 151:
        sum += i;
        { _1_OBF_FUNC_next___0 = 49UL; }
        break;
      case 178:
        i++;
        { _1_OBF_FUNC_next___0 = 86UL; }
        break;
      case 54:;
        {
          _1_OBF_FUNC_next___0 = 13UL;
        }
        break;
      case 100:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 119:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 98:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 126UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 34UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 148UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 110UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 142UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 107UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 122UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 89UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 87UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 39UL;
        } break;
        }
        break;
      case 71:;
        return (0);
        break;
      case 67:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 18UL; }
        break;
      case 86:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 20:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 153:
        sum += i;
        { _1_OBF_FUNC_next___0 = 45UL; }
        break;
      case 105:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 137:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 124:;
        return (0);
        break;
      case 110:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 186UL; }
        break;
      case 39:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 44UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 42UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 190UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 149UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 153UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 65UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 157UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 103UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 56UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 0UL;
        } break;
        }
        break;
      case 94:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 149:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 17UL; }
        break;
      case 11:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 75:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 50UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 78UL; }
        }
        break;
      case 163:
        __RANDVAR__84748022271636949588__ = 0;
        { _1_OBF_FUNC_next___0 = 128UL; }
        break;
      case 127:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 102:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 173UL; }
        break;
      case 104:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 95UL; }
        break;
      case 0:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 43UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 196UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 123UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 4UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 151UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 189UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 24UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 72UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 80UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 58UL;
        } break;
        }
        break;
      case 159:
        i = 0;
        { _1_OBF_FUNC_next___0 = 111UL; }
        break;
      case 184:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 91:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 150:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 165:
        _1_OBF_FUNC_next = 1UL;
        { _1_OBF_FUNC_next___0 = 163UL; }
        break;
      case 173:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 158:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 144UL; }
        break;
      case 139:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 140UL; }
        break;
      case 103:
        i = 0;
        { _1_OBF_FUNC_next___0 = 188UL; }
        break;
      case 172:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 157:
        sum *= i;
        { _1_OBF_FUNC_next___0 = 94UL; }
        break;
      case 14:;
        {
          _1_OBF_FUNC_next___0 = 117UL;
        }
        break;
      case 112:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 126:;
        {
          _1_OBF_FUNC_next___0 = 15UL;
        }
        break;
      case 4:
        sum = 0;
        { _1_OBF_FUNC_next___0 = 197UL; }
        break;
      case 13:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 36UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 31UL; }
        }
        break;
      case 198:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 179:
        _1_OBF_FUNC_next = 9UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 43:;
        {
          _1_OBF_FUNC_next___0 = 71UL;
        }
        break;
      case 144:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 113:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 141:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 74:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 95:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 38:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 44:;
        {
          _1_OBF_FUNC_next___0 = 16UL;
        }
        break;
      case 5:
        _1_OBF_FUNC_next = 2UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 42:;
        {
          _1_OBF_FUNC_next___0 = 108UL;
        }
        break;
      case 197:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 85:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 22:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 12UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 14UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 114UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 102UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 83UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 8UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 67UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 62UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 130UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 98UL;
        } break;
        }
        break;
      case 53:;
        {
          _1_OBF_FUNC_next___0 = 131UL;
        }
        break;
      case 117:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 100UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 155UL; }
        }
        break;
      case 36:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 16:;
        return (0);
        break;
      case 133:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 131:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 5UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 90UL; }
        }
        break;
      case 80:
        i++;
        { _1_OBF_FUNC_next___0 = 25UL; }
        break;
      case 107:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 60UL; }
        break;
      case 60:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 142:
        sum += i;
        { _1_OBF_FUNC_next___0 = 2UL; }
        break;
      case 17:
        _1_OBF_FUNC_next = 10UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 23:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 136:
        _1_OBF_FUNC_next = 4UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 108:;
        if (sum > 8128) {
          { _1_OBF_FUNC_next___0 = 38UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 166UL; }
        }
        break;
      case 155:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 98UL; }
        break;
      case 88:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 168UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 105UL; }
        }
        break;
      case 145:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 191:;
        {
          _1_OBF_FUNC_next___0 = 35UL;
        }
        break;
      case 180:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 26:
        sum += i;
        { _1_OBF_FUNC_next___0 = 27UL; }
        break;
      case 189:
        printf("Sum is: %d\n", sum);
        { _1_OBF_FUNC_next___0 = 136UL; }
        break;
      case 25:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 10:;
        {
          _1_OBF_FUNC_next___0 = 125UL;
        }
        break;
      case 34:;
        {
          _1_OBF_FUNC_next___0 = 63UL;
        }
        break;
      case 58:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 101UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 191UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 54UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 199UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 26UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 138UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 139UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 159UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 57UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 39UL;
        } break;
        }
        break;
      case 194:;
        {
          _1_OBF_FUNC_next___0 = 175UL;
        }
        break;
      case 92:
        _1_OBF_FUNC_next = 0UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 188:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 0UL; }
        break;
      case 130:
        i++;
        { _1_OBF_FUNC_next___0 = 11UL; }
        break;
      case 83:
        sum += i;
        { _1_OBF_FUNC_next___0 = 141UL; }
        break;
      case 66:
        _1_OBF_FUNC_next = 3UL;
        { _1_OBF_FUNC_next___0 = 58UL; }
        break;
      case 128:;
        if (__RANDVAR__84748022271636949588__ == 0) {
          { _1_OBF_FUNC_next___0 = 21UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 52UL; }
        }
        break;
      case 21:;
        switch (_1_OBF_FUNC_next) {
        case 4UL: {
          _1_OBF_FUNC_next___0 = 10UL;
        } break;
        case 0UL: {
          _1_OBF_FUNC_next___0 = 53UL;
        } break;
        case 3UL: {
          _1_OBF_FUNC_next___0 = 194UL;
        } break;
        case 1UL: {
          _1_OBF_FUNC_next___0 = 104UL;
        } break;
        case 7UL: {
          _1_OBF_FUNC_next___0 = 116UL;
        } break;
        case 9UL: {
          _1_OBF_FUNC_next___0 = 192UL;
        } break;
        case 2UL: {
          _1_OBF_FUNC_next___0 = 158UL;
        } break;
        case 10UL: {
          _1_OBF_FUNC_next___0 = 109UL;
        } break;
        case 8UL: {
          _1_OBF_FUNC_next___0 = 178UL;
        } break;
        default: {
          _1_OBF_FUNC_next___0 = 22UL;
        } break;
        }
        break;
      case 90:
        _1_OBF_FUNC_next = 7UL;
        { _1_OBF_FUNC_next___0 = 22UL; }
        break;
      case 175:;
        if (i < *(argv + 0)) {
          { _1_OBF_FUNC_next___0 = 91UL; }
        } else {
          { _1_OBF_FUNC_next___0 = 47UL; }
        }
        break;
      case 140:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 56:
        i++;
        { _1_OBF_FUNC_next___0 = 127UL; }
        break;
      case 12:;
        {
          _1_OBF_FUNC_next___0 = 124UL;
        }
        break;
      case 2:
        _1_OBF_FUNC_next = 8UL;
        { _1_OBF_FUNC_next___0 = 39UL; }
        break;
      case 190:;
        {
          _1_OBF_FUNC_next___0 = 88UL;
        }
        break;
      case 196:;
        {
          _1_OBF_FUNC_next___0 = 97UL;
        }
        break;
      }
    }
  }
}
// variants: flatten, loop-unroll, flatten
// expanded variants: flatten:switch, loop-unroll, flatten:switch
