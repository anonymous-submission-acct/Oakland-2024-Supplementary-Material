unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_0;
  unsigned int _induction3_2_2;
  unsigned int _index2_1;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_2;
  localStaticState[0UL] = (input - 747458416UL) + 2719129005U;
  localStaticState[1UL] = (input + 433059248UL) + 1641818680;
  switch (((int) (localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[((int) localStaticState[0UL]) % 2UL])) % 4UL)
  {
    case 0UL:
      _induction3_2_2 = 0UL;
      _index2_1 = 0UL;
      while (_index2_1 < 1UL)
    {
      localStaticState[_induction3_2_2 % 2UL] = localStaticState[_index2_1] + localStaticState[_index2_1];
      _induction5_4_2 = 0UL;
      _index4_0 = 0UL;
      while (_index4_0 < 0UL)
      {
        localStaticState[_induction3_2_2] = localStaticState[_index4_0] + localStaticState[_index2_1];
        localStaticState[_index4_0] = localStaticState[_index2_1] - localStaticState[_index4_0];
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_0++;
      }

      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_1++;
    }

      if (localStaticState[1UL] & 1)
    {
      if ((localStaticState[0UL] >> 4U) & 1)
      {
        localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        if ((localStaticState[1UL] >> 1U) & 1)
        {
          if (localStaticState[0UL] & 1)
          {
          }
        }
      }
      localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] * localStaticState[1UL];
      localStaticState[((int) localStaticState[1UL]) % 2UL] -= localStaticState[0UL];
      if ((localStaticState[1UL] >> 1U) & 1)
      {
        _induction7_6_2 = 0UL;
        _index6_2 = 0UL;
        while (_index6_2 < 2UL)
        {
          localStaticState[_index6_2 % 2UL] = localStaticState[1UL] + localStaticState[_induction7_6_2 % 2UL];
          localStaticState[0UL] *= localStaticState[_induction7_6_2 % 2UL];
          _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
          _index6_2++;
        }

      }
    }
      break;

    case 1UL:
      localStaticState[((int) localStaticState[0UL]) % 2UL] *= localStaticState[((int) localStaticState[0UL]) % 2UL];
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[0UL] * localStaticState[1UL];
      _induction1_0_2 = 0UL;
      _index0_0 = 0UL;
      while (_index0_0 < 0UL)
    {
      if ((localStaticState[1UL] >> 1U) & 1)
      {
        localStaticState[_index0_0] = localStaticState[_induction1_0_2] + localStaticState[1UL];
      }
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_0++;
    }

      break;

  }

  return localStaticState[0UL] + localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 5 1 3 11