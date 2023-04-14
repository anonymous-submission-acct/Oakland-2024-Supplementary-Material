typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  localStaticState[0UL] = input + 792184505UL;
  localStaticState[1UL] = input + localStaticState[0UL];
  _induction1_0_2 = 0UL;
  _index0_2 = 0UL;
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    if ((rand() % 10) >= 5)
      break;
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  while (_index0_2 < 2UL) {
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2 += 2UL;
  }
  if (!((localStaticState[0UL] >> 3U) & 1)) {
    if ((localStaticState[1UL] >> 1U) & 1) {
      localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
      localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] - localStaticState[((int)localStaticState[0UL]) % 2UL];
    }
  }
  return localStaticState[0UL] * localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission
// expanded variants: loop-fission
