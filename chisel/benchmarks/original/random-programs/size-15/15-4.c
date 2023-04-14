unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  localStaticState[0UL] = input + 814135068UL;
  localStaticState[1UL] = input + 81067353UL;
  switch (((int) (localStaticState[0UL] - localStaticState[((int) localStaticState[1UL]) % 2UL])) % 4UL)
  {
    case 0UL:
      _induction3_2_2 = 0UL;
      _index2_4 = 0UL;
      while (_index2_4 < 4UL)
    {
      localStaticState[1UL] += localStaticState[_induction3_2_2];
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_4++;
    }

      _induction5_4_2 = 0UL;
      _index4_3 = 0UL;
      while (_index4_3 < 3UL)
    {
      if ((localStaticState[1UL] >> 3U) & 1)
      {
        localStaticState[_index4_3 % 2UL] = localStaticState[_induction5_4_2] + localStaticState[_induction5_4_2 % 2UL];
      }
      else
      {
        localStaticState[1UL] = localStaticState[_induction5_4_2] + localStaticState[((int) localStaticState[0UL]) % 2UL];
        localStaticState[_index4_3 % 2UL] = localStaticState[0UL] * localStaticState[1UL];
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_3++;
    }

      _induction7_6_2 = 0UL;
      _index6_2 = 0UL;
      while (_index6_2 < 2UL)
    {
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_2++;
    }

      break;

    case 1UL:
      _induction1_0_2 = 0UL;
      _index0_1 = 0UL;
      while (_index0_1 < 1UL)
    {
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_1++;
    }

      break;

    default:
      if (!((localStaticState[0UL] >> 2U) & 1))
    {
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
    }
      localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[1UL];
      localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) + 3859644522;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 3 4 5 7 9 15