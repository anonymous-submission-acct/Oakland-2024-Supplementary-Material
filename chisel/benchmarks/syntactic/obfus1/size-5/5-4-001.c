typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  localStaticState[0UL] = (input * 936224497UL) + 544459364U;
  localStaticState[1UL] = input * (429642679UL + localStaticState[0UL]);
  if (!((localStaticState[0UL] >> 4U) & 1)) {
    if (localStaticState[1UL] & 1) {
    }
    _induction1_0_2 = 0UL;
    _index0_1 = 0UL;
    int __RANDVAR__64108468791467314242__ = 0;
    while (__RANDVAR__64108468791467314242__ == 0) {
      if (_index0_1 < 1UL) {
        localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      if (_index0_1 < 1UL) {
        localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      if (_index0_1 < 1UL) {
        localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }
      while (_index0_1 < 1UL) {
        if (_index0_1 < 1UL) {
          localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
        if (_index0_1 < 1UL) {
          localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
        if (_index0_1 < 1UL) {
          localStaticState[1UL] = localStaticState[_index0_1 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          localStaticState[_index0_1] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index0_1 % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1++;
        }
      }
      __RANDVAR__64108468791467314242__ = 1;
    }
  }
  return (localStaticState[0UL] - localStaticState[1UL]) + 561002488U;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
