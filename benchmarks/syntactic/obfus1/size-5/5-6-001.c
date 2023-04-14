typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_0;
  localStaticState[0UL] = input + 1761416874U;
  localStaticState[1UL] = (input + localStaticState[0UL]) + 3909065487U;
  _induction1_0_2 = 0UL;
  _index0_0 = 0UL;
  int __RANDVAR__78036100821175083389__ = 0;
  while (__RANDVAR__78036100821175083389__ == 0) {
    if (_index0_0 < 0UL) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0++;
    }
    if (_index0_0 < 0UL) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0++;
    }
    if (_index0_0 < 0UL) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
        localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0++;
    }
    while (_index0_0 < 0UL) {
      if (_index0_0 < 0UL) {
        if (!((localStaticState[0UL] >> 3U) & 1)) {
          localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
        }
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0++;
      }
      if (_index0_0 < 0UL) {
        if (!((localStaticState[0UL] >> 3U) & 1)) {
          localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
        }
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0++;
      }
      if (_index0_0 < 0UL) {
        if (!((localStaticState[0UL] >> 3U) & 1)) {
          localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
          localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[_induction1_0_2] * localStaticState[_induction1_0_2];
        }
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0++;
      }
    }
    __RANDVAR__78036100821175083389__ = 1;
  }
  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
  return localStaticState[0UL] + localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
