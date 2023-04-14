typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_0;
  localStaticState[0UL] = (input + 8665136UL) * 3454496844;
  localStaticState[1UL] = (input - 203512587UL) - (localStaticState[0UL] - 1091850798U);
  _induction1_0_2 = 0UL;
  _index0_0 = 0UL;
  int __RANDVAR__91392196123781953158__ = 0;
  while (__RANDVAR__91392196123781953158__ == 0) {
    if (_index0_0 < 0UL) {
      localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0 += 2UL;
    }
    if (_index0_0 < 0UL) {
      localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0 += 2UL;
    }
    if (_index0_0 < 0UL) {
      localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0 += 2UL;
    }
    while (_index0_0 < 0UL) {
      if (_index0_0 < 0UL) {
        localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0 += 2UL;
      }
      if (_index0_0 < 0UL) {
        localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0 += 2UL;
      }
      if (_index0_0 < 0UL) {
        localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_0 += 2UL;
      }
    }
    __RANDVAR__91392196123781953158__ = 1;
  }
  return localStaticState[0UL] - localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
