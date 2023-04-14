unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_6;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = (input - 89377591UL) + 3779334105;
  localStaticState[1UL] = input * 4161982302;
  if ((localStaticState[0UL] >> 4U) & 1)
  {
  }
  localStaticState[1UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[((int) localStaticState[1UL]) % 2UL];
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[1UL];
  if ((localStaticState[1UL] >> 3U) & 1)
  {
    localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    localStaticState[1UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] * localStaticState[1UL];
  }
  _induction1_0_2 = 0UL;
  _index0_4 = 0UL;
  while (_index0_4 < 4UL)
  {
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[_index0_4 % 2UL] + localStaticState[1UL];
      localStaticState[1UL] = localStaticState[_index2_0] + localStaticState[0UL];
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0++;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_4++;
  }

  _induction5_4_2 = 0UL;
  _index4_6 = 0UL;
  while (_index4_6 < 6UL)
  {
    _induction7_6_2 = 0UL;
    _index6_0 = 0UL;
    while (_index6_0 < 0UL)
    {
      localStaticState[0UL] = localStaticState[_induction7_6_2] * localStaticState[0UL];
      localStaticState[_induction5_4_2] = localStaticState[_induction5_4_2 % 2UL] + localStaticState[_induction7_6_2 % 2UL];
      _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
      _index6_0++;
    }

    localStaticState[1UL] = localStaticState[0UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_6 += 2UL;
  }

  return localStaticState[0UL] + (localStaticState[1UL] - 259348160UL);
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 14