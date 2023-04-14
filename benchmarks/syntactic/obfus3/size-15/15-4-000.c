typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  localStaticState[0UL] = input + 814135068UL;
  localStaticState[1UL] = input + 81067353UL;
  switch (((int)(localStaticState[0UL] - localStaticState[((int)localStaticState[1UL]) % 2UL])) % 4UL) {
  case 0UL:
    _induction3_2_2 = 0UL;
    _index2_4 = 0UL;
    int __RANDVAR__93796298356272665606__ = 0;
    while (__RANDVAR__93796298356272665606__ == 0) {
      if (_index2_4 < 4UL) {
        localStaticState[1UL] += localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_4++;
      }
      if (_index2_4 < 4UL) {
        localStaticState[1UL] += localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_4++;
      }
      if (_index2_4 < 4UL) {
        localStaticState[1UL] += localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_4++;
      }
      while (_index2_4 < 4UL) {
        if (_index2_4 < 4UL) {
          localStaticState[1UL] += localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_4++;
        }
        if (_index2_4 < 4UL) {
          localStaticState[1UL] += localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_4++;
        }
        if (_index2_4 < 4UL) {
          localStaticState[1UL] += localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_4++;
        }
      }
      __RANDVAR__93796298356272665606__ = 1;
    }
    _induction5_4_2 = 0UL;
    _index4_3 = 0UL;
    int __RANDVAR__89010544916876085134__ = 0;
    while (__RANDVAR__89010544916876085134__ == 0) {
      if (_index4_3 < 3UL) {
        if ((localStaticState[1UL] >> 3U) & 1) {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
        } else {
          localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      if (_index4_3 < 3UL) {
        if ((localStaticState[1UL] >> 3U) & 1) {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
        } else {
          localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      if (_index4_3 < 3UL) {
        if ((localStaticState[1UL] >> 3U) & 1) {
          localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
        } else {
          localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      while (_index4_3 < 3UL) {
        if (_index4_3 < 3UL) {
          if ((localStaticState[1UL] >> 3U) & 1) {
            localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
          } else {
            localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
        if (_index4_3 < 3UL) {
          if ((localStaticState[1UL] >> 3U) & 1) {
            localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
          } else {
            localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
        if (_index4_3 < 3UL) {
          if ((localStaticState[1UL] >> 3U) & 1) {
            localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
          } else {
            localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
      }
      __RANDVAR__89010544916876085134__ = 1;
    }
    _induction7_6_2 = 0UL;
    _index6_2 = 0UL;
    int __RANDVAR__57531082915878950560__ = 0;
    while (__RANDVAR__57531082915878950560__ == 0) {
      if (_index6_2 < 2UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_2++;
      }
      if (_index6_2 < 2UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_2++;
      }
      if (_index6_2 < 2UL) {
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_2++;
      }
      while (_index6_2 < 2UL) {
        if (_index6_2 < 2UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_2++;
        }
        if (_index6_2 < 2UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_2++;
        }
        if (_index6_2 < 2UL) {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_2++;
        }
      }
      __RANDVAR__57531082915878950560__ = 1;
    }
    break;
  case 1UL:
    _induction1_0_2 = 0UL;
    _index0_1 = 0UL;
    int __RANDVAR__70095243454092493313__ = 0;
    while (__RANDVAR__70095243454092493313__ == 0) {
      if (_index0_1 < 1UL) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      if (_index0_1 < 1UL) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      if (_index0_1 < 1UL) {
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      while (_index0_1 < 1UL) {
        if (_index0_1 < 1UL) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
        if (_index0_1 < 1UL) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
        if (_index0_1 < 1UL) {
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
      }
      __RANDVAR__70095243454092493313__ = 1;
    }
    break;
  default:
    if (!((localStaticState[0UL] >> 2U) & 1)) {
      localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[((int)localStaticState[0UL]) % 2UL];
    }
    localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[1UL];
    localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
    break;
  }
  return (localStaticState[0UL] + localStaticState[1UL]) + 3859644522;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll, irrelevant-code, irrelevant-code
// expanded variants: loop-unroll, irrelevant-code, irrelevant-code
