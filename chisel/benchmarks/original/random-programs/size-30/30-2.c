unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  unsigned int _induction9_8_2;
  unsigned int _index8_5;
  unsigned int _induction11_10_2;
  unsigned int _index10_1;
  unsigned int _induction13_12_2;
  unsigned int _index12_4;
  unsigned int _induction15_14_2;
  unsigned int _index14_3;
  unsigned int _induction17_16_2;
  unsigned int _index16_0;
  unsigned int _induction19_18_2;
  unsigned int _index18_0;
  localStaticState[0UL] = (input * 398887143UL) + 3661990377;
  localStaticState[1UL] = input * 695145264UL;
  switch (((int) (localStaticState[0UL] + localStaticState[0UL])) % 4UL)
  {
    case 0UL:
      _induction1_0_2 = 0UL;
      _index0_9 = 0UL;
      while (_index0_9 < 9UL)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        localStaticState[_induction3_2_2] = localStaticState[_induction1_0_2] - localStaticState[_induction3_2_2 % 2UL];
        localStaticState[_induction3_2_2] = localStaticState[_index0_9 % 2UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }

      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_9 += 2UL;
    }

      break;

    case 1UL:
      localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
      break;

    default:
      _induction5_4_2 = 0UL;
      _index4_3 = 0UL;
      while (_index4_3 < 3UL)
    {
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_induction5_4_2 % 2UL] + localStaticState[_index4_3 % 2UL];
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_3++;
    }

      break;

  }

  if ((localStaticState[0UL] >> 1U) & 1)
  {
    if ((localStaticState[0UL] >> 1U) & 1)
    {
      if (!((localStaticState[1UL] >> 3U) & 1))
      {
        _induction7_6_2 = 0UL;
        _index6_2 = 0UL;
        while (_index6_2 < 2UL)
        {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_2 += 2UL;
        }

        localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
        localStaticState[((int) localStaticState[1UL]) % 2UL] += localStaticState[0UL];
      }
    }
    switch (((int) (localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL])) % 4UL)
    {
      case 0UL:
        _induction13_12_2 = 0UL;
        _index12_4 = 0UL;
        while (_index12_4 < 4UL)
      {
        _induction13_12_2 = (_induction13_12_2 + 1UL) % 2UL;
        _index12_4 += 2UL;
      }

        _induction15_14_2 = 0UL;
        _index14_3 = 0UL;
        while (_index14_3 < 3UL)
      {
        _induction17_16_2 = 0UL;
        _index16_0 = 0UL;
        while (_index16_0 < 0UL)
        {
          localStaticState[_induction15_14_2] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[_induction17_16_2 % 2UL];
          _induction17_16_2 = (_induction17_16_2 + 1UL) % 2UL;
          _index16_0 += 2UL;
        }

        _induction15_14_2 = (_induction15_14_2 + 1UL) % 2UL;
        _index14_3++;
      }

        break;

      case 1UL:
        _induction9_8_2 = 0UL;
        _index8_5 = 0UL;
        while (_index8_5 < 5UL)
      {
        _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
        _index8_5 += 2UL;
      }

        _induction11_10_2 = 0UL;
        _index10_1 = 0UL;
        while (_index10_1 < 1UL)
      {
        localStaticState[_induction11_10_2] *= localStaticState[((int) localStaticState[1UL]) % 2UL];
        localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_induction11_10_2 % 2UL] * localStaticState[_induction11_10_2];
        _induction11_10_2 = (_induction11_10_2 + 1UL) % 2UL;
        _index10_1 += 2UL;
      }

        break;

      default:
        _induction19_18_2 = 0UL;
        _index18_0 = 0UL;
        while (_index18_0 < 0UL)
      {
        localStaticState[_index18_0] = localStaticState[_index18_0 % 2UL] * localStaticState[_induction19_18_2 % 2UL];
        _induction19_18_2 = (_induction19_18_2 + 1UL) % 2UL;
        _index18_0 += 2UL;
      }

        break;

    }

  }
  return localStaticState[0UL] - localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 2 3 6