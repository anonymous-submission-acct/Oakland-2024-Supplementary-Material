unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_3;
  unsigned int _induction5_4_2;
  unsigned int _index4_5;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = input + 1572625031U;
  localStaticState[1UL] = input + (623563203UL + localStaticState[0UL]);
  localStaticState[((int) localStaticState[0UL]) % 2UL] += localStaticState[0UL];
  if ((localStaticState[0UL] >> 2U) & 1)
  {
    _induction1_0_2 = 0UL;
    _index0_4 = 0UL;
    while (_index0_4 < 4UL)
    {
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_4 += 2UL;
    }

    localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[0UL];
    localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
    localStaticState[0UL] *= localStaticState[1UL];
    _induction3_2_2 = 0UL;
    _index2_3 = 0UL;
    while (_index2_3 < 3UL)
    {
      localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
      localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_3 += 2UL;
    }

    _induction5_4_2 = 0UL;
    _index4_5 = 0UL;
    while (_index4_5 < 5UL)
    {
      switch (((int) (localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL)
      {
        case 0UL:
          if ((localStaticState[1UL] >> 4U) & 1)
        {
          localStaticState[_index4_5 % 2UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
          localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int) localStaticState[0UL]) % 2UL];
        }
          localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
          break;

        case 1UL:
          if ((localStaticState[1UL] >> 2U) & 1)
        {
          localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
          localStaticState[_induction5_4_2] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
        }
          break;

        default:
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          while (_index6_0 < 0UL)
        {
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_0++;
        }

          break;

      }

      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_5 += 2UL;
    }

  }
  return localStaticState[0UL] * (localStaticState[1UL] - 247594873UL);
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 3