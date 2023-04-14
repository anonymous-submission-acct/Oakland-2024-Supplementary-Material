unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  localStaticState[0UL] = (input - 752198737UL) + 550572913U;
  localStaticState[1UL] = input - 368257686UL;
  if (!((localStaticState[1UL] >> 4U) & 1))
  {
    localStaticState[1UL] *= localStaticState[((int) localStaticState[0UL]) % 2UL];
  }
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL)
  {
    if ((localStaticState[0UL] >> 1U) & 1)
    {
      if ((localStaticState[0UL] >> 2U) & 1)
      {
        localStaticState[_induction1_0_2 % 2UL] *= localStaticState[1UL];
        localStaticState[_index0_3 % 2UL] += localStaticState[_induction1_0_2 % 2UL];
      }
    }
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      if ((localStaticState[1UL] >> 3U) & 1)
      {
        _induction5_4_2 = 0UL;
        _index4_0 = 0UL;
        while (_index4_0 < 0UL)
        {
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_0++;
        }

      }
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0 += 2UL;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }

  return (localStaticState[0UL] + localStaticState[1UL]) - 4131362848;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 2 6 7 8 10 22 23