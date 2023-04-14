unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_1;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  localStaticState[0UL] = (input * 929461163UL) + 307729438U;
  localStaticState[1UL] = (input - 66465542UL) + (localStaticState[0UL] + 69353370UL);
  _induction1_0_2 = 0UL;
  _index0_9 = 0UL;
  while (_index0_9 < 9UL)
  {
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0 += 2UL;
      }

      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0 += 2UL;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_9 += 2UL;
  }

  _induction7_6_2 = 0UL;
  _index6_1 = 0UL;
  while (_index6_1 < 1UL)
  {
    localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_induction7_6_2 % 2UL] - localStaticState[_induction7_6_2];
    _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
    _index6_1++;
  }

  _induction9_8_2 = 0UL;
  _index8_0 = 0UL;
  while (_index8_0 < 0UL)
  {
    _induction11_10_2 = 0UL;
    _index10_0 = 0UL;
    while (_index10_0 < 0UL)
    {
      if (localStaticState[0UL] & 1)
      {
      }
      _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
      _index10_0++;
    }

    _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
    _index8_0 += 2UL;
  }

  return localStaticState[0UL] + localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0