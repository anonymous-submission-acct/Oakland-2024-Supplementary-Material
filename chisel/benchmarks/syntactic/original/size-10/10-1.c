unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = (input + 276835458UL) - 575082560U;
  localStaticState[1UL] = input * (localStaticState[0UL] + 436519216UL);
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL)
  {
    localStaticState[_induction1_0_2] += localStaticState[1UL];
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3 += 2UL;
  }

  _induction3_2_2 = 0UL;
  _index2_4 = 0UL;
  while (_index2_4 < 4UL)
  {
    localStaticState[_induction3_2_2] = localStaticState[_index2_4 % 2UL] + localStaticState[_induction3_2_2];
    localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
    _induction5_4_2 = 0UL;
    _index4_0 = 0UL;
    while (_index4_0 < 0UL)
    {
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL)
      {
        if ((localStaticState[1UL] >> 4U) & 1)
        {
          localStaticState[_index2_4 % 2UL] = localStaticState[_induction5_4_2] - localStaticState[_index6_0 % 2UL];
          localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index4_0] + localStaticState[1UL];
        }
        localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_induction3_2_2] * localStaticState[_index6_0 % 2UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }

      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0 += 2UL;
    }

    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_4 += 2UL;
  }

  localStaticState[((int) localStaticState[0UL]) % 2UL] *= localStaticState[1UL];
  return (localStaticState[0UL] - localStaticState[1UL]) - 1879284913U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// 0
