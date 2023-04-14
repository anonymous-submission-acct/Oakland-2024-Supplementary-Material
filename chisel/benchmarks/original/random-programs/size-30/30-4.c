unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_2;
  localStaticState[0UL] = input + 59732214UL;
  localStaticState[1UL] = (input + localStaticState[0UL]) - 3238365211;
  switch (((int) (localStaticState[1UL] - localStaticState[((int) localStaticState[0UL]) % 2UL])) % 4UL)
  {
    case 0UL:
      if (localStaticState[0UL] & 1)
    {
      if (!((localStaticState[0UL] >> 3U) & 1))
      {
        localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
      }
    }
      if ((localStaticState[0UL] >> 2U) & 1)
    {
      localStaticState[1UL] = localStaticState[0UL] - localStaticState[1UL];
      if ((localStaticState[1UL] >> 4U) & 1)
      {
        _induction5_4_2 = 0UL;
        _index4_2 = 0UL;
        while (_index4_2 < 2UL)
        {
          if (!((localStaticState[1UL] >> 3U) & 1))
          {
            localStaticState[_induction5_4_2] = localStaticState[0UL] + localStaticState[_index4_2];
            localStaticState[_induction5_4_2] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[_induction5_4_2];
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_2++;
        }

        localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
        localStaticState[((int) localStaticState[1UL]) % 2UL] -= localStaticState[1UL];
      }
    }
      break;

    case 1UL:
      if ((localStaticState[0UL] >> 4U) & 1)
    {
    }
      _induction1_0_2 = 0UL;
      _index0_2 = 0UL;
      while (_index0_2 < 2UL)
    {
      switch (((int) (localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[_index0_2 % 2UL])) % 4UL)
      {
        case 0UL:
          if ((localStaticState[0UL] >> 4U) & 1)
        {
          localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
          localStaticState[_index0_2] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
        }
        else
          if ((localStaticState[0UL] >> 1U) & 1)
        {
        }
          break;

        case 1UL:
          if ((localStaticState[1UL] >> 4U) & 1)
        {
        }
          break;

        default:
          if (!((localStaticState[0UL] >> 4U) & 1))
        {
          _induction3_2_2 = 0UL;
          _index2_0 = 0UL;
          while (_index2_0 < 0UL)
          {
            localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_index0_2 % 2UL] - localStaticState[_induction1_0_2];
            _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
            _index2_0++;
          }

        }
          break;

      }

      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_2++;
    }

      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) - 4020615311;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 2 3 1 25 7 12 0 4 20
