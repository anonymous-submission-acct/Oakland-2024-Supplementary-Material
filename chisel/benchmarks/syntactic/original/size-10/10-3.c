unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_4;
  localStaticState[0UL] = input + 992345021UL;
  localStaticState[1UL] = (input + 490308643UL) * 423209266U;
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL)
  {
    localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2];
    if ((localStaticState[0UL] >> 2U) & 1)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0++;
      }

      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        localStaticState[_index0_3 % 2UL] = localStaticState[_index4_0 % 2UL] + localStaticState[_induction1_0_2 % 2UL];
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0++;
      }

    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }

  _induction7_6_2 = 0UL;
  _index6_4 = 0UL;
  while (_index6_4 < 4UL)
  {
    if (localStaticState[0UL] & 1)
    {
    }
    _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
    _index6_4 += 2UL;
  }

  return localStaticState[0UL] + localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// 0 1 4 3
