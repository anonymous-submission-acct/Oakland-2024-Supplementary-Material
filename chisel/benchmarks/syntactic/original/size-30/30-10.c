unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_3;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned int _induction15_14_2;
  unsigned int _index14_0;
  localStaticState[0UL] = input + 4255344362;
  localStaticState[1UL] = input * 1208268713U;
  if ((localStaticState[0UL] >> 3U) & 1)
  {
    if ((localStaticState[1UL] >> 1U) & 1)
    {
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
    }
  }
  switch (((int) localStaticState[((int) localStaticState[1UL]) % 2UL]) % 4UL)
  {
    case 0UL:
      _induction7_6_2 = 0UL;
      _index6_3 = 0UL;
      while (_index6_3 < 3UL)
    {
      localStaticState[1UL] = localStaticState[_induction7_6_2 % 2UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
      localStaticState[0UL] = localStaticState[_induction7_6_2] - localStaticState[_index6_3 % 2UL];
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_3 += 2UL;
    }

      break;

    case 1UL:
      _induction1_0_2 = 0UL;
      _index0_1 = 0UL;
      while (_index0_1 < 1UL)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_index2_0 % 2UL] + localStaticState[1UL];
        localStaticState[0UL] = localStaticState[_index2_0 % 2UL] + localStaticState[_index2_0];
        localStaticState[_index2_0] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[_induction1_0_2 % 2UL];
        _induction5_4_2 = 0UL;
        _index4_0 = 0UL;
        while (_index4_0 < 0UL)
        {
          if (localStaticState[0UL] & 1)
          {
            localStaticState[_index0_1 % 2UL] *= localStaticState[_induction1_0_2];
            localStaticState[0UL] *= localStaticState[((int) localStaticState[0UL]) % 2UL];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_0++;
        }

        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0++;
      }

      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_1++;
    }

      break;

  }

  _induction9_8_2 = 0UL;
  _index8_0 = 0UL;
  while (_index8_0 < 0UL)
  {
    _induction11_10_2 = 0UL;
    _index10_0 = 0UL;
    while (_index10_0 < 0UL)
    {
      if ((localStaticState[0UL] >> 1U) & 1)
      {
        localStaticState[_induction9_8_2] = localStaticState[1UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
      }
      _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
      _index10_0++;
    }

    _induction13_12_2 = 0UL;
    _index12_0 = 0UL;
    while (_index12_0 < 0UL)
    {
      switch (((int) localStaticState[_index8_0 % 2UL]) % 6UL)
      {
        case 0UL:
          if ((localStaticState[1UL] >> 1U) & 1)
        {
          localStaticState[_induction9_8_2] = localStaticState[1UL] * localStaticState[_index12_0];
          localStaticState[_induction9_8_2] = localStaticState[_index8_0] + localStaticState[_induction13_12_2];
        }
          break;

        case 1UL:
          if ((localStaticState[0UL] >> 3U) & 1)
        {
        }
          break;

        case 2UL:
          localStaticState[_induction13_12_2] = localStaticState[_induction9_8_2] + localStaticState[_induction13_12_2];
          break;

        default:
          _induction15_14_2 = 0UL;
          _index14_0 = 0UL;
          while (_index14_0 < 0UL)
        {
          localStaticState[_induction15_14_2] = localStaticState[_induction9_8_2] + localStaticState[_induction15_14_2];
          _induction15_14_2 = (_induction15_14_2 + 1UL) % 2UL;
          _index14_0++;
        }

          break;

      }

      _induction13_12_2 = (_induction13_12_2 + 1UL) % 2UL;
      _index12_0 += 2UL;
    }

    _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
    _index8_0++;
  }

  return localStaticState[0UL] + (localStaticState[1UL] * 675237199UL);
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 7 0 9 1 3 6 2