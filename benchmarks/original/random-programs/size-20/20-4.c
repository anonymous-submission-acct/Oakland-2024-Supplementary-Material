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
  unsigned int _index6_0;
  unsigned int _induction9_8_2;
  unsigned int _index8_0;
  localStaticState[0UL] = (input + 605627732UL) + 200211981U;
  localStaticState[1UL] = input + 641054356UL;
  if ((localStaticState[1UL] >> 4U) & 1)
  {
  }
  localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL)
  {
    if ((localStaticState[1UL] >> 3U) & 1)
    {
      switch (((int) localStaticState[_index0_3 % 2UL]) % 4UL)
      {
        case 0UL:
          _induction5_4_2 = 0UL;
          _index4_0 = 0UL;
          while (_index4_0 < 0UL)
        {
          localStaticState[_index4_0] = localStaticState[_index0_3 % 2UL] * localStaticState[_induction5_4_2];
          localStaticState[1UL] = localStaticState[_induction1_0_2 % 2UL] * localStaticState[1UL];
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_0++;
        }

          if (!((localStaticState[1UL] >> 4U) & 1))
        {
          localStaticState[0UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
          localStaticState[_induction1_0_2] = localStaticState[_index0_3 % 2UL] + localStaticState[_induction1_0_2];
        }
          break;

        case 1UL:
          _induction3_2_2 = 0UL;
          _index2_0 = 0UL;
          while (_index2_0 < 0UL)
        {
          localStaticState[_index0_3 % 2UL] = localStaticState[0UL] + localStaticState[_index2_0];
          localStaticState[_induction3_2_2 % 2UL] = localStaticState[_induction1_0_2] + localStaticState[_induction3_2_2];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_0 += 2UL;
        }

          break;

        default:
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          while (_index6_0 < 0UL)
        {
          if ((localStaticState[1UL] >> 4U) & 1)
          {
            _induction9_8_2 = 0UL;
            _index8_0 = 0UL;
            while (_index8_0 < 0UL)
            {
              localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_index6_0] - localStaticState[_induction9_8_2];
              _induction9_8_2 = (_induction9_8_2 + 1UL) % 2UL;
              _index8_0 += 2UL;
            }

          }
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }

          break;

      }

    }
    else
      if ((localStaticState[1UL] >> 4U) & 1)
    {
      localStaticState[_index0_3 % 2UL] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[0UL];
      localStaticState[_induction1_0_2] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }

  return (localStaticState[0UL] - localStaticState[1UL]) * 549299039U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

/// 0 12 22 4 6 24 1 21 20 30 28 5