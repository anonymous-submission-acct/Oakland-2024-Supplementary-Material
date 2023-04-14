unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_4;
  localStaticState[0UL] = (input * 817265353UL) + 1900068377U;
  localStaticState[1UL] = input + (localStaticState[0UL] + 401842971UL);
  switch (((int) localStaticState[((int) localStaticState[1UL]) % 2UL]) % 4UL)
  {
    case 0UL:
      if ((localStaticState[0UL] >> 1U) & 1)
    {
    }
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[0UL];
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[1UL];
      localStaticState[0UL] = localStaticState[1UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
      localStaticState[0UL] = localStaticState[1UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
      if (!((localStaticState[1UL] >> 1U) & 1))
    {
      localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[0UL];
      _induction3_2_2 = 0UL;
      _index2_4 = 0UL;
      while (_index2_4 < 4UL)
      {
        if ((localStaticState[0UL] >> 4U) & 1)
        {
        }
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_4++;
      }

    }
      break;

    case 1UL:
      switch (((int) (localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[0UL])) % 4UL)
    {
      case 0UL:
        localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[((int) localStaticState[0UL]) % 2UL];
        break;

      case 1UL:
        break;

      default:
        _induction1_0_2 = 0UL;
        _index0_9 = 0UL;
        while (_index0_9 < 9UL)
      {
        localStaticState[_induction1_0_2] = localStaticState[_induction1_0_2 % 2UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_9 += 2UL;
      }

        break;

    }

      break;

    default:
      localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      localStaticState[((int) localStaticState[0UL]) % 2UL] -= localStaticState[1UL];
      break;

  }

  return localStaticState[0UL] * localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 3