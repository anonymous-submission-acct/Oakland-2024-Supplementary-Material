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
  unsigned int _index10_9;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  localStaticState[0UL] = input + 786238786U;
  localStaticState[1UL] = input - localStaticState[0UL];
  switch (((int) localStaticState[((int) localStaticState[1UL]) % 2UL]) % 4UL)
  {
    case 0UL:
      _induction11_10_2 = 0UL;
      _index10_9 = 0UL;
      while (_index10_9 < 9UL)
    {
      localStaticState[_induction11_10_2] = localStaticState[_induction11_10_2 % 2UL] - localStaticState[_induction11_10_2];
      localStaticState[_induction11_10_2] = localStaticState[_induction11_10_2 % 2UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
      _induction13_12_2 = 0UL;
      _index12_0 = 0UL;
      while (_index12_0 < 0UL)
      {
        _induction13_12_2 = (_induction13_12_2 + 1UL) % 2UL;
        _index12_0 += 2UL;
      }

      _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
      _index10_9 += 2UL;
    }

      break;

    case 1UL:
      _induction1_0_2 = 0UL;
      _index0_4 = 0UL;
      while (_index0_4 < 4UL)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_index2_0] - localStaticState[0UL];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0++;
      }

      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        if ((localStaticState[1UL] >> 4U) & 1)
        {
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          while (_index6_0 < 0UL)
          {
            localStaticState[_index4_0] -= localStaticState[((int) localStaticState[1UL]) % 2UL];
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0 += 2UL;
          }

        }
        else
        {
          _induction9_8_2 = 0UL;
          _index8_0 = 0UL;
          while (_index8_0 < 0UL)
          {
            localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_index4_0 % 2UL] + localStaticState[_induction9_8_2];
            localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_index8_0] + localStaticState[((int) localStaticState[0UL]) % 2UL];
            _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
            _index8_0++;
          }

        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0++;
      }

      if ((localStaticState[1UL] >> 3U) & 1)
      {
        localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[_induction1_0_2];
      }
      localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[_index0_4 % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_4++;
    }

      break;

    default:
      localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) - 3000139179;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 11 7 3 3508728510 3508728511