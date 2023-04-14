unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = (input + 598427022UL) + 2527768284;
  localStaticState[1UL] = input + (25225933UL + localStaticState[0UL]);
  if ((localStaticState[0UL] >> 4U) & 1)
  {
    _induction1_0_2 = 0UL;
    _index0_9 = 0UL;
    while (_index0_9 < 9UL)
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }

      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_9 += 2UL;
    }

  }
  return (localStaticState[0UL] + localStaticState[1UL]) + 1552834448U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// 6 0
