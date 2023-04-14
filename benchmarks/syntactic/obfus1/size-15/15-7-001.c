typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  localStaticState[0UL] = (input + 798602984UL) + 125128556U;
  localStaticState[1UL] = (input * localStaticState[0UL]) + 196992834;
  if ((localStaticState[1UL] >> 3U) & 1) {
    localStaticState[((int)localStaticState[0UL]) % 2UL] += localStaticState[1UL];
    if ((localStaticState[0UL] >> 2U) & 1) {
    }
  }
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[_index0_3 % 2UL];
    if (!((localStaticState[0UL] >> 2U) & 1)) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        if ((localStaticState[1UL] >> 2U) & 1) {
          localStaticState[_induction1_0_2] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2 % 2UL];
        }
      }
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }
  while (_index0_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[_index0_3 % 2UL];
    if (!((localStaticState[0UL] >> 2U) & 1)) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        if ((localStaticState[1UL] >> 2U) & 1) {
          localStaticState[_induction1_0_2] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2 % 2UL];
        }
      }
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }
  while (_index0_3 < 3UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[_index0_3 % 2UL];
    if (!((localStaticState[0UL] >> 2U) & 1)) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        if ((localStaticState[1UL] >> 2U) & 1) {
          localStaticState[_induction1_0_2] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2 % 2UL];
        }
      }
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }
  while (_index0_3 < 3UL) {
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index0_3 % 2UL] + localStaticState[_index0_3 % 2UL];
    if (!((localStaticState[0UL] >> 2U) & 1)) {
      if (!((localStaticState[0UL] >> 3U) & 1)) {
        if ((localStaticState[1UL] >> 2U) & 1) {
          localStaticState[_induction1_0_2] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2 % 2UL];
        }
      }
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }
  _induction3_2_2 = 0UL;
  _index2_4 = 0UL;
  while (_index2_4 < 4UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] + localStaticState[0UL];
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_4++;
  }
  while (_index2_4 < 4UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] + localStaticState[0UL];
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_4++;
  }
  while (_index2_4 < 4UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] + localStaticState[0UL];
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_4++;
  }
  while (_index2_4 < 4UL) {
    localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] + localStaticState[0UL];
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_4++;
  }
  return (localStaticState[0UL] - localStaticState[1UL]) * 236636024;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission
// expanded variants: loop-fission
