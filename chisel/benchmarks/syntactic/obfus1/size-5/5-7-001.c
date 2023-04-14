typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  localStaticState[0UL] = (input - 304302104UL) + 3878855248;
  localStaticState[1UL] = input + (212242731UL - localStaticState[0UL]);
  if (!((localStaticState[0UL] >> 1U) & 1)) {
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[0UL];
  }
  if ((localStaticState[0UL] >> 2U) & 1) {
    _induction1_0_2 = 0UL;
    _index0_3 = 0UL;
    int __RANDVAR__25682410180461845062__ = 0;
    while (__RANDVAR__25682410180461845062__ == 0) {
      if (_index0_3 < 3UL) {
        localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      if (_index0_3 < 3UL) {
        localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      if (_index0_3 < 3UL) {
        localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }
      while (_index0_3 < 3UL) {
        if (_index0_3 < 3UL) {
          localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
        if (_index0_3 < 3UL) {
          localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
        if (_index0_3 < 3UL) {
          localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[0UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_3++;
        }
      }
      __RANDVAR__25682410180461845062__ = 1;
    }
  }
  return (localStaticState[0UL] + localStaticState[1UL]) - 1792313359U;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
