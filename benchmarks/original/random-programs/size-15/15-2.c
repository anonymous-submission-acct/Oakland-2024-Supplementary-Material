unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_0;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = (input + 868443546UL) + 1368820046;
  localStaticState[1UL] = input + 329445214UL;
  _induction1_0_2 = 0UL;
  _index0_0 = 0UL;
  while (_index0_0 < 0UL)
  {
    localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[_induction1_0_2];
    switch (((int) (localStaticState[_induction1_0_2] - localStaticState[_index0_0])) % 4UL)
    {
      case 0UL:
        localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index0_0] * localStaticState[_induction1_0_2 % 2UL];
        break;

      case 1UL:
        _induction3_2_2 = 0UL;
        _index2_0 = 0UL;
        while (_index2_0 < 0UL)
      {
        localStaticState[_induction1_0_2 % 2UL] = localStaticState[_index2_0] + localStaticState[_induction1_0_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0++;
      }

        break;

      default:
        localStaticState[_index0_0 % 2UL] = localStaticState[1UL] + localStaticState[_index0_0];
        break;

    }

    localStaticState[_induction1_0_2] = localStaticState[_induction1_0_2 % 2UL] + localStaticState[_induction1_0_2 % 2UL];
    if ((localStaticState[1UL] >> 3U) & 1)
    {
      if ((localStaticState[0UL] >> 1U) & 1)
      {
        localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[_index0_0 % 2UL];
        localStaticState[_induction1_0_2] = localStaticState[_index0_0] + localStaticState[((int) localStaticState[1UL]) % 2UL];
      }
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_0 += 2UL;
  }

  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
  return (localStaticState[0UL] - localStaticState[1UL]) - 369322272U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0