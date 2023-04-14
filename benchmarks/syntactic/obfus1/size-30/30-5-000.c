typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_1;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_1;
  localStaticState[0UL] = (input + 503291703UL) - 881971968;
  localStaticState[1UL] = (input + localStaticState[0UL]) - 3668800448;
  if ((localStaticState[0UL] >> 1U) & 1) {
    if ((localStaticState[0UL] >> 3U) & 1) {
      switch (((int)localStaticState[1UL]) % 4UL) {
      case 0UL:
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[1UL] - localStaticState[0UL];
        break;
      case 1UL:
        if (localStaticState[0UL] & 1) {
          localStaticState[((int)localStaticState[0UL]) % 2UL] *= localStaticState[0UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
        }
        _induction1_0_2 = 0UL;
        _index0_1 = 0UL;
        int __RANDVAR__84569473222121416932__ = 0;
        while (__RANDVAR__84569473222121416932__ == 0) {
          if (_index0_1 < 1UL) {
            _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
            _index0_1 += 2UL;
          }
          if (_index0_1 < 1UL) {
            _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
            _index0_1 += 2UL;
          }
          if (_index0_1 < 1UL) {
            _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
            _index0_1 += 2UL;
          }
          while (_index0_1 < 1UL) {
            if (_index0_1 < 1UL) {
              _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
              _index0_1 += 2UL;
            }
            if (_index0_1 < 1UL) {
              _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
              _index0_1 += 2UL;
            }
            if (_index0_1 < 1UL) {
              _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
              _index0_1 += 2UL;
            }
          }
          __RANDVAR__84569473222121416932__ = 1;
        }
        break;
      default:
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
        localStaticState[1UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
        break;
      }
    } else if ((localStaticState[1UL] >> 2U) & 1) {
      localStaticState[((int)localStaticState[0UL]) % 2UL] += localStaticState[0UL];
      localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    } else {
      localStaticState[1UL] *= localStaticState[1UL];
      if ((localStaticState[0UL] >> 1U) & 1) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
        _induction3_2_2 = 0UL;
        _index2_1 = 0UL;
        int __RANDVAR__69306347457637636533__ = 0;
        while (__RANDVAR__69306347457637636533__ == 0) {
          if (_index2_1 < 1UL) {
            localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
            _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
            _index2_1++;
          }
          if (_index2_1 < 1UL) {
            localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
            _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
            _index2_1++;
          }
          if (_index2_1 < 1UL) {
            localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
            _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
            _index2_1++;
          }
          while (_index2_1 < 1UL) {
            if (_index2_1 < 1UL) {
              localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
              _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
              _index2_1++;
            }
            if (_index2_1 < 1UL) {
              localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
              _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
              _index2_1++;
            }
            if (_index2_1 < 1UL) {
              localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
              _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
              _index2_1++;
            }
          }
          __RANDVAR__69306347457637636533__ = 1;
        }
        _induction5_4_2 = 0UL;
        _index4_3 = 0UL;
        int __RANDVAR__92434288072234038109__ = 0;
        while (__RANDVAR__92434288072234038109__ == 0) {
          if (_index4_3 < 3UL) {
            if ((localStaticState[1UL] >> 1U) & 1) {
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
            }
            _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
            _index4_3++;
          }
          if (_index4_3 < 3UL) {
            if ((localStaticState[1UL] >> 1U) & 1) {
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
            }
            _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
            _index4_3++;
          }
          if (_index4_3 < 3UL) {
            if ((localStaticState[1UL] >> 1U) & 1) {
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
            }
            _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
            _index4_3++;
          }
          while (_index4_3 < 3UL) {
            if (_index4_3 < 3UL) {
              if ((localStaticState[1UL] >> 1U) & 1) {
                localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
                localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
              }
              _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
              _index4_3++;
            }
            if (_index4_3 < 3UL) {
              if ((localStaticState[1UL] >> 1U) & 1) {
                localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
                localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
              }
              _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
              _index4_3++;
            }
            if (_index4_3 < 3UL) {
              if ((localStaticState[1UL] >> 1U) & 1) {
                localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int)localStaticState[1UL]) % 2UL];
                localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
              }
              _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
              _index4_3++;
            }
          }
          __RANDVAR__92434288072234038109__ = 1;
        }
      }
    }
  }
  if ((localStaticState[1UL] >> 3U) & 1) {
    if (!((localStaticState[0UL] >> 1U) & 1)) {
      localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      localStaticState[0UL] = localStaticState[1UL] - localStaticState[((int)localStaticState[1UL]) % 2UL];
    }
  } else {
    _induction7_6_2 = 0UL;
    _index6_1 = 0UL;
    int __RANDVAR__30704763088157200727__ = 0;
    while (__RANDVAR__30704763088157200727__ == 0) {
      if (_index6_1 < 1UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_1 += 2UL;
      }
      if (_index6_1 < 1UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_1 += 2UL;
      }
      if (_index6_1 < 1UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_1 += 2UL;
      }
      while (_index6_1 < 1UL) {
        if (_index6_1 < 1UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_1 += 2UL;
        }
        if (_index6_1 < 1UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_1 += 2UL;
        }
        if (_index6_1 < 1UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_1 += 2UL;
        }
      }
      __RANDVAR__30704763088157200727__ = 1;
    }
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
