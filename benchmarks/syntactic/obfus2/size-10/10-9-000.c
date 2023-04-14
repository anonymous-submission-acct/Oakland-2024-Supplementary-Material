typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  localStaticState[0UL] = (input * 719137533UL) + 1718950238;
  localStaticState[1UL] = input + localStaticState[0UL];
  if ((localStaticState[0UL] >> 3U) & 1) {
  }
  _induction1_0_2 = 0UL;
  _index0_2 = 0UL;
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[_index0_2 % 2UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[_index0_2 % 2UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[_index0_2 % 2UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index0_2] - localStaticState[_index0_2 % 2UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  localStaticState[0UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[((int)localStaticState[1UL]) % 2UL];
  localStaticState[1UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
  return (localStaticState[0UL] + localStaticState[1UL]) + 276188989U;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
