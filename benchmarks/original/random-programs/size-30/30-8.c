unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_1;
  unsigned int _induction13_12_2;
  unsigned int _index12_1;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  localStaticState[0UL] = input + 704296640UL;
  localStaticState[1UL] = (input - localStaticState[0UL]) - 3930225871;
  _induction1_0_2 = 0UL;
  _index0_4 = 0UL;
  while (_index0_4 < 4UL)
  {
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        if ((localStaticState[1UL] >> 4U) & 1)
        {
          localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction1_0_2 % 2UL];
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0 += 2UL;
      }

      localStaticState[_index2_0] = localStaticState[_induction3_2_2] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0++;
    }

    _induction7_6_2 = 0UL;
    _index6_0 = 0UL;
    while (_index6_0 < 0UL)
    {
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_0++;
    }

    _induction9_8_2 = 0UL;
    _index8_0 = 0UL;
    while (_index8_0 < 0UL)
    {
      localStaticState[_induction1_0_2] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[_induction1_0_2 % 2UL];
      _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
      _index8_0++;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_4++;
  }

  localStaticState[((int) localStaticState[0UL]) % 2UL] += localStaticState[((int) localStaticState[1UL]) % 2UL];
  localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[1UL];
  if ((localStaticState[0UL] >> 1U) & 1)
  {
    _induction11_10_2 = 0UL;
    _index10_1 = 0UL;
    while (_index10_1 < 1UL)
    {
      if ((localStaticState[0UL] >> 4U) & 1)
      {
        localStaticState[_index10_1] = localStaticState[1UL] + localStaticState[_induction11_10_2 % 2UL];
      }
      _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
      _index10_1++;
    }

  }
  _induction13_12_2 = 0UL;
  _index12_1 = 0UL;
  while (_index12_1 < 1UL)
  {
    if (localStaticState[0UL] & 1)
    {
      localStaticState[_induction13_12_2] = localStaticState[_index12_1] + localStaticState[1UL];
    }
    if ((localStaticState[0UL] >> 2U) & 1)
    {
      localStaticState[_induction13_12_2] = localStaticState[1UL] + localStaticState[_induction13_12_2 % 2UL];
      _induction15_14_2 = 0UL;
      _index14_0 = 0UL;
      while (_index14_0 < 0UL)
      {
        if (localStaticState[0UL] & 1)
        {
          _induction17_16_2 = 0UL;
          _index16_0 = 0UL;
          while (_index16_0 < 0UL)
          {
            localStaticState[_index16_0 % 2UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[_induction17_16_2];
            _induction17_16_2 = (_induction17_16_2 + 1UL) % 2UL;
            _index16_0 += 2UL;
          }

        }
        if (localStaticState[0UL] & 1)
        {
        }
        _induction15_14_2 = (_induction15_14_2 + 1UL) % 2UL;
        _index14_0++;
      }

    }
    _induction13_12_2 = (_induction13_12_2 + 1UL) % 2UL;
    _index12_1++;
  }

  return localStaticState[0UL] - localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 4 22 18 6 2