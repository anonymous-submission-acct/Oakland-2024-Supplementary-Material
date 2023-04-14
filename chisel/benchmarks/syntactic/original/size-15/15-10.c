unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_4;
  localStaticState[0UL] = (input + 18491586UL) * 832458029;
  localStaticState[1UL] = (input - 879383067UL) + (1063464788UL * localStaticState[0UL]);
  switch (((int) (localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[((int) localStaticState[0UL]) % 2UL])) % 4UL)
  {
    case 0UL:
      if ((localStaticState[0UL] >> 4U) & 1)
    {
      localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[0UL];
    }
    else
    {
      localStaticState[0UL] = localStaticState[1UL] + localStaticState[0UL];
      localStaticState[0UL] -= localStaticState[1UL];
      localStaticState[((int) localStaticState[1UL]) % 2UL] *= localStaticState[((int) localStaticState[0UL]) % 2UL];
      localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[0UL]) % 2UL];
    }
      break;

    case 1UL:
      if ((localStaticState[0UL] >> 3U) & 1)
    {
      _induction1_0_2 = 0UL;
      _index0_3 = 0UL;
      while (_index0_3 < 3UL)
      {
        _induction3_2_2 = 0UL;
        _index2_0 = 0UL;
        while (_index2_0 < 0UL)
        {
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_0++;
        }

        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_3++;
      }

    }
    else
    {
      _induction5_4_2 = 0UL;
      _index4_4 = 0UL;
      while (_index4_4 < 4UL)
      {
        localStaticState[((int) localStaticState[1UL]) % 2UL] += localStaticState[0UL];
        localStaticState[_induction5_4_2] = localStaticState[_index4_4 % 2UL] - localStaticState[1UL];
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_4++;
      }

    }
      break;

    default:
      localStaticState[1UL] *= localStaticState[((int) localStaticState[1UL]) % 2UL];
      break;

  }

  return (localStaticState[0UL] + localStaticState[1UL]) - 1937745947U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 5