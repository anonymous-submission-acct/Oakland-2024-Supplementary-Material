unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_7;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_1;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  localStaticState[0UL] = input + 1936550286U;
  localStaticState[1UL] = input + (localStaticState[0UL] + 1010991736UL);
  if (localStaticState[0UL] & 1)
  {
    localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
  }
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
  _induction1_0_2 = 0UL;
  _index0_4 = 0UL;
  while (_index0_4 < 4UL)
  {
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_4++;
  }

  switch (((int) (localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[0UL])) % 4UL)
  {
    case 0UL:
      _induction3_2_2 = 0UL;
      _index2_7 = 0UL;
      while (_index2_7 < 7UL)
    {
      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        if ((localStaticState[0UL] >> 2U) & 1)
        {
          localStaticState[_index4_0] = localStaticState[_index4_0 % 2UL] * localStaticState[1UL];
          localStaticState[_index4_0] = localStaticState[_induction5_4_2] - localStaticState[_induction3_2_2];
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0 += 2UL;
      }

      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_7 += 2UL;
    }

      break;

    case 1UL:
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[1UL];
      break;

    default:
      _induction7_6_2 = 0UL;
      _index6_1 = 0UL;
      while (_index6_1 < 1UL)
    {
      localStaticState[((int) localStaticState[0UL]) % 2UL] *= localStaticState[_induction7_6_2 % 2UL];
      localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[1UL];
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_1++;
    }

      break;

  }

  _induction9_8_2 = 0UL;
  _index8_0 = 0UL;
  while (_index8_0 < 0UL)
  {
    if ((localStaticState[1UL] >> 4U) & 1)
    {
      localStaticState[_index8_0] = localStaticState[_induction9_8_2 % 2UL] * localStaticState[_induction9_8_2];
    }
    _induction11_10_2 = 0UL;
    _index10_0 = 0UL;
    while (_index10_0 < 0UL)
    {
      if ((localStaticState[1UL] >> 1U) & 1)
      {
      }
      _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
      _index10_0++;
    }

    _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
    _index8_0++;
  }

  return (localStaticState[0UL] + localStaticState[1UL]) * 483207376;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 2358417011