typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_6;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = input - 263503274U;
  localStaticState[1UL] = (input + localStaticState[0UL]) - 2390388115U;
  if ((localStaticState[1UL] >> 4U) & 1) {
    _induction1_0_2 = 0UL;
    _index0_6 = 0UL;
    while (_index0_6 < 6UL) {
      if ((rand() % 10) >= 5)
        break;
      localStaticState[_induction1_0_2 % 2UL] += localStaticState[((int)localStaticState[1UL]) % 2UL];
      localStaticState[_index0_6 % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction1_0_2 % 2UL];
      if ((localStaticState[1UL] >> 1U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index0_6 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_6 += 2UL;
    }
    while (_index0_6 < 6UL) {
      if ((rand() % 10) >= 5)
        break;
      localStaticState[_induction1_0_2 % 2UL] += localStaticState[((int)localStaticState[1UL]) % 2UL];
      localStaticState[_index0_6 % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction1_0_2 % 2UL];
      if ((localStaticState[1UL] >> 1U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index0_6 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_6 += 2UL;
    }
    while (_index0_6 < 6UL) {
      if ((rand() % 10) >= 5)
        break;
      localStaticState[_induction1_0_2 % 2UL] += localStaticState[((int)localStaticState[1UL]) % 2UL];
      localStaticState[_index0_6 % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction1_0_2 % 2UL];
      if ((localStaticState[1UL] >> 1U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index0_6 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_6 += 2UL;
    }
    while (_index0_6 < 6UL) {
      localStaticState[_induction1_0_2 % 2UL] += localStaticState[((int)localStaticState[1UL]) % 2UL];
      localStaticState[_index0_6 % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[_induction1_0_2 % 2UL];
      if ((localStaticState[1UL] >> 1U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index0_6 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_6 += 2UL;
    }
    _induction3_2_2 = 0UL;
    _index2_2 = 0UL;
    while (_index2_2 < 2UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_2 += 2UL;
    }
    while (_index2_2 < 2UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_2 += 2UL;
    }
    while (_index2_2 < 2UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_2 += 2UL;
    }
    while (_index2_2 < 2UL) {
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_2 += 2UL;
    }
  }
  if ((localStaticState[1UL] >> 1U) & 1) {
    localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
  }
  _induction5_4_2 = 0UL;
  _index4_3 = 0UL;
  while (_index4_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    if ((localStaticState[1UL] >> 3U) & 1) {
      switch (((int)(localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL])) % 4UL) {
      case 0UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index4_3 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        break;
      case 1UL:
        if ((localStaticState[0UL] >> 2U) & 1) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        } else {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
        }
        break;
      default:
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        break;
      }
    }
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_3++;
  }
  while (_index4_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    if ((localStaticState[1UL] >> 3U) & 1) {
      switch (((int)(localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL])) % 4UL) {
      case 0UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index4_3 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        break;
      case 1UL:
        if ((localStaticState[0UL] >> 2U) & 1) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        } else {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
        }
        break;
      default:
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        break;
      }
    }
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_3++;
  }
  while (_index4_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    if ((localStaticState[1UL] >> 3U) & 1) {
      switch (((int)(localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL])) % 4UL) {
      case 0UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index4_3 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        break;
      case 1UL:
        if ((localStaticState[0UL] >> 2U) & 1) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        } else {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
        }
        break;
      default:
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        while (_index6_0 < 0UL) {
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        break;
      }
    }
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_3++;
  }
  while (_index4_3 < 3UL) {
    if ((localStaticState[1UL] >> 3U) & 1) {
      switch (((int)(localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL])) % 4UL) {
      case 0UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_index4_3 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        break;
      case 1UL:
        if ((localStaticState[0UL] >> 2U) & 1) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] += localStaticState[1UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        } else {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2];
        }
        break;
      default:
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        while (_index6_0 < 0UL) {
          localStaticState[_index6_0 % 2UL] = localStaticState[_induction5_4_2] * localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }
        break;
      }
    }
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_3++;
  }
  return (localStaticState[0UL] * localStaticState[1UL]) * 3661809250;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission
// expanded variants: loop-fission
