unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_9;
  localStaticState[0UL] = (input + 1007907884UL) * 877390418U;
  localStaticState[1UL] = input - (512363229UL - localStaticState[0UL]);
  switch (((int) localStaticState[((int) localStaticState[0UL]) % 2UL]) % 4UL)
  {
    case 0UL:
      _induction3_2_2 = 0UL;
      _index2_9 = 0UL;
      while (_index2_9 < 9UL)
    {
      if ((localStaticState[0UL] >> 3U) & 1)
      {
        localStaticState[_induction3_2_2] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
        localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] + localStaticState[_induction3_2_2 % 2UL];
      }
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_9 += 2UL;
    }

      break;

    case 1UL:
      if ((localStaticState[0UL] >> 2U) & 1)
    {
      if ((localStaticState[1UL] >> 3U) & 1)
      {
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      }
      else
      {
        localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] + localStaticState[0UL];
      }
    }
      if ((localStaticState[1UL] >> 1U) & 1)
    {
      _induction1_0_2 = 0UL;
      _index0_1 = 0UL;
      while (_index0_1 < 1UL)
      {
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_1++;
      }

    }
      break;

    default:
      if ((localStaticState[1UL] >> 1U) & 1)
    {
    }
      break;

  }

  return (localStaticState[0UL] * localStaticState[1UL]) * 2642309589U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 3 4