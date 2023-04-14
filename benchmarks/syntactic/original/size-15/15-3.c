unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  localStaticState[0UL] = input * 1984782336;
  localStaticState[1UL] = input - 761529717U;
  switch (((int) localStaticState[((int) localStaticState[1UL]) % 2UL]) % 4UL)
  {
    case 0UL:
      localStaticState[0UL] -= localStaticState[((int) localStaticState[0UL]) % 2UL];
      break;

    case 1UL:
      _induction1_0_2 = 0UL;
      _index0_2 = 0UL;
      while (_index0_2 < 2UL)
    {
      if (localStaticState[1UL] & 1)
      {
        localStaticState[_induction1_0_2 % 2UL] = localStaticState[1UL] * localStaticState[_index0_2 % 2UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_2 += 2UL;
    }

      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
    {
      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        localStaticState[_induction5_4_2] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[_induction3_2_2];
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0 += 2UL;
      }

      if ((localStaticState[1UL] >> 3U) & 1)
      {
        localStaticState[_induction3_2_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        while (_index6_0 < 0UL)
        {
          _induction9_8_2 = 0UL;
          _index8_0 = 0UL;
          while (_index8_0 < 0UL)
          {
            _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
            _index8_0++;
          }

          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0 += 2UL;
        }

      }
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0++;
    }

      break;

    default:
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) + 2118568387U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 2