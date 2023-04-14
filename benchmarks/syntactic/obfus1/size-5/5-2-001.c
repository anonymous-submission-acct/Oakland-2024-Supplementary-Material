typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  int __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ + 1;
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_0;
  localStaticState[0UL] = (input + 8665136UL) * 3454496844;
  __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ + 211;
  __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ - 211;
  localStaticState[1UL] = (input - 203512587UL) - (localStaticState[0UL] - 1091850798U);
  _induction1_0_2 = 0UL;
  _index0_0 = 0UL;
  while (_index0_0 < 0UL) {
    __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ + 797;
    __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ - 797;
    localStaticState[_index0_0] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_0 += 2UL;
  }
  __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ - 966;
  __RANDVAR__44473571197443443140__ = __RANDVAR__44473571197443443140__ + 966;
  return localStaticState[0UL] - localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
