unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_8;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  unsigned int _induction11_10_2;
  unsigned int _index10_0;
  unsigned int _induction13_12_2;
  unsigned int _index12_0;
  unsigned int _induction15_14_2;
  unsigned int _index14_4;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  localStaticState[0UL] = (input + 75130041UL) * 689554236;
  localStaticState[1UL] = (input * 21937040UL) + (226543659UL - localStaticState[0UL]);
  switch (((int) (localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[1UL])) % 4UL)
  {
    case 0UL:
      if (localStaticState[1UL] & 1)
    {
    }
      if (localStaticState[0UL] & 1)
    {
      localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[1UL];
      localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
    }
      break;

    case 1UL:
      _induction1_0_2 = 0UL;
      _index0_8 = 0UL;
      while (_index0_8 < 8UL)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        _induction5_4_2 = 0UL;
        _index4_0 = 0UL;
        while (_index4_0 < 0UL)
        {
          localStaticState[_induction1_0_2] = localStaticState[_index4_0] * localStaticState[_induction3_2_2 % 2UL];
          localStaticState[_index0_8 % 2UL] += localStaticState[_index0_8 % 2UL];
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_0 += 2UL;
        }

        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }

      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_8 += 2UL;
    }

      if ((localStaticState[1UL] >> 4U) & 1)
    {
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
      localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
    }
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL)
    {
      switch (((int) (localStaticState[_induction7_6_2 % 2UL] + localStaticState[_induction7_6_2])) % 6UL)
      {
        case 0UL:
          break;

        case 1UL:
          localStaticState[1UL] *= localStaticState[_induction7_6_2];
          break;

        case 2UL:
          switch (((int) localStaticState[_induction7_6_2]) % 4UL)
        {
          case 0UL:
            localStaticState[1UL] = localStaticState[_index6_0] + localStaticState[_index6_0];
            localStaticState[1UL] = localStaticState[_induction7_6_2] * localStaticState[((int) localStaticState[0UL]) % 2UL];
            break;

          case 1UL:
            _induction9_8_2 = 0UL;
            _index8_0 = 0UL;
            while (_index8_0 < 0UL)
          {
            localStaticState[1UL] = localStaticState[_induction9_8_2 % 2UL] - localStaticState[_index8_0];
            localStaticState[_index6_0] = localStaticState[_induction9_8_2] + localStaticState[_index6_0];
            _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
            _index8_0 += 2UL;
          }

            _induction11_10_2 = 0UL;
            _index10_0 = 0UL;
            while (_index10_0 < 0UL)
          {
            _induction13_12_2 = 0UL;
            _index12_0 = 0UL;
            while (_index12_0 < 0UL)
            {
              if ((localStaticState[0UL] >> 4U) & 1)
              {
                localStaticState[0UL] = localStaticState[_induction13_12_2 % 2UL] * localStaticState[_induction13_12_2];
                localStaticState[_induction7_6_2] = localStaticState[_induction13_12_2] + localStaticState[_induction13_12_2];
              }
              localStaticState[_induction11_10_2] = localStaticState[1UL] + localStaticState[_induction13_12_2 % 2UL];
              localStaticState[_index12_0] = localStaticState[_index6_0] * localStaticState[_index10_0];
              _induction13_12_2 = (_induction13_12_2 + 1UL) % 2UL;
              _index12_0 += 2UL;
            }

            _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
            _index10_0 += 2UL;
          }

            break;

          default:
            localStaticState[0UL] = localStaticState[_index6_0] - localStaticState[((int) localStaticState[1UL]) % 2UL];
            localStaticState[_induction7_6_2] = localStaticState[0UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
            break;

        }

          break;

      }

      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_0 += 2UL;
    }

      break;

    default:
      _induction15_14_2 = 0UL;
      _index14_4 = 0UL;
      while (_index14_4 < 4UL)
    {
      _induction17_16_2 = 0UL;
      _index16_0 = 0UL;
      while (_index16_0 < 0UL)
      {
        localStaticState[((int) localStaticState[0UL]) % 2UL] += localStaticState[0UL];
        localStaticState[_induction17_16_2] = localStaticState[_induction15_14_2 % 2UL] + localStaticState[0UL];
        _induction17_16_2 = (_induction17_16_2 + 1UL) % 2UL;
        _index16_0++;
      }

      _induction15_14_2 = (_induction15_14_2 + 1UL) % 2UL;
      _index14_4++;
    }

      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) + 2145266664;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 2