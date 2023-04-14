unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_1;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_1;
  localStaticState[0UL] = (input + 503291703UL) - 881971968;
  localStaticState[1UL] = (input + localStaticState[0UL]) - 3668800448;
  if ((localStaticState[0UL] >> 1U) & 1)
  {
    if ((localStaticState[0UL] >> 3U) & 1)
    {
      switch (((int) localStaticState[1UL]) % 4UL)
      {
        case 0UL:
          localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
          localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] - localStaticState[0UL];
          break;

        case 1UL:
          if (localStaticState[0UL] & 1)
        {
          localStaticState[((int) localStaticState[0UL]) % 2UL] *= localStaticState[0UL];
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
        }
          _induction1_0_2 = 0UL;
          _index0_1 = 0UL;
          while (_index0_1 < 1UL)
        {
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_1 += 2UL;
        }

          break;

        default:
          localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
          localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
          break;

      }

    }
    else
      if ((localStaticState[1UL] >> 2U) & 1)
    {
      localStaticState[((int) localStaticState[0UL]) % 2UL] += localStaticState[0UL];
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    }
    else
    {
      localStaticState[1UL] *= localStaticState[1UL];
      if ((localStaticState[0UL] >> 1U) & 1)
      {
        localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[0UL];
        _induction3_2_2 = 0UL;
        _index2_1 = 0UL;
        while (_index2_1 < 1UL)
        {
          localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
          localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[_index2_1] - localStaticState[1UL];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_1++;
        }

        _induction5_4_2 = 0UL;
        _index4_3 = 0UL;
        while (_index4_3 < 3UL)
        {
          if ((localStaticState[1UL] >> 1U) & 1)
          {
            localStaticState[_induction5_4_2] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_induction5_4_2] - localStaticState[((int) localStaticState[1UL]) % 2UL];
            localStaticState[_induction5_4_2 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_index4_3 % 2UL];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }

      }
    }
  }
  if ((localStaticState[1UL] >> 3U) & 1)
  {
    if (!((localStaticState[0UL] >> 1U) & 1))
    {
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      localStaticState[0UL] = localStaticState[1UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
    }
  }
  else
  {
    _induction7_6_2 = 0UL;
    _index6_1 = 0UL;
    while (_index6_1 < 1UL)
    {
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_1 += 2UL;
    }

  }
  return localStaticState[0UL] + localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 5 1 11 0 3 4 7