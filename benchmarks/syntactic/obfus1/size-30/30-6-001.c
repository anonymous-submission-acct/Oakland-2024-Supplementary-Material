typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = (input * 1055697178UL) + 507474929U;
  localStaticState[1UL] = input - 249371270UL;
  if ((localStaticState[0UL] >> 1U) & 1) {
    _induction1_0_2 = 0UL;
    _index0_3 = 0UL;
    int __RANDVAR__70814336799571823756__ = 0;
    while (__RANDVAR__70814336799571823756__ == 0) {
      if (_index0_3 < 3UL) {
        localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      if (_index0_3 < 3UL) {
        localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      if (_index0_3 < 3UL) {
        localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      while (_index0_3 < 3UL) {
        if (_index0_3 < 3UL) {
          localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
        if (_index0_3 < 3UL) {
          localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
        if (_index0_3 < 3UL) {
          localStaticState[_induction1_0_2] += localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
      }
      __RANDVAR__70814336799571823756__ = 1;
    }
  }
  if ((localStaticState[0UL] >> 3U) & 1) {
  }
  switch (((int)localStaticState[1UL]) % 4UL) {
  case 0UL:
    localStaticState[((int)localStaticState[0UL]) % 2UL] -= localStaticState[0UL];
    if (localStaticState[0UL] & 1) {
      localStaticState[1UL] += localStaticState[1UL];
    }
    break;
  case 1UL:
    if (localStaticState[1UL] & 1) {
      localStaticState[1UL] = localStaticState[0UL] + localStaticState[1UL];
      localStaticState[0UL] *= localStaticState[((int)localStaticState[1UL]) % 2UL];
    }
    if ((localStaticState[1UL] >> 1U) & 1) {
      if ((localStaticState[1UL] >> 3U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[0UL];
      }
    } else {
      switch (((int)localStaticState[1UL]) % 4UL) {
      case 0UL:
        localStaticState[1UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
        localStaticState[1UL] += localStaticState[1UL];
        break;
      case 1UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
        break;
      default:
        if (!((localStaticState[1UL] >> 3U) & 1)) {
          localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
        }
        break;
      }
    }
    break;
  default:
    if ((localStaticState[0UL] >> 1U) & 1) {
    }
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    int __RANDVAR__18712587203006248160__ = 0;
    while (__RANDVAR__18712587203006248160__ == 0) {
      if (_index2_0 < 0UL) {
        localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }
      if (_index2_0 < 0UL) {
        localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }
      if (_index2_0 < 0UL) {
        localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
        localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }
      while (_index2_0 < 0UL) {
        if (_index2_0 < 0UL) {
          localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
          localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_0 += 2UL;
        }
        if (_index2_0 < 0UL) {
          localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
          localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_0 += 2UL;
        }
        if (_index2_0 < 0UL) {
          localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_0 % 2UL] * localStaticState[0UL];
          localStaticState[_index2_0] = localStaticState[0UL] + localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_0 += 2UL;
        }
      }
      __RANDVAR__18712587203006248160__ = 1;
    }
    break;
  }
  return localStaticState[0UL] + localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
