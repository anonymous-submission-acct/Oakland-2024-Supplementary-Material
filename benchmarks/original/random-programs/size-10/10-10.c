unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_1;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_4;
  localStaticState[0UL] = input + 240570794UL;
  localStaticState[1UL] = input * 678107658UL;
  _induction1_0_2 = 0UL;
  _index0_1 = 0UL;
  while (_index0_1 < 1UL)
  {
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      localStaticState[_induction1_0_2 % 2UL] += localStaticState[((int) localStaticState[1UL]) % 2UL];
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0++;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_1++;
  }

  _induction5_4_2 = 0UL;
  _index4_4 = 0UL;
  while (_index4_4 < 4UL)
  {
    _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
    _index4_4 += 2UL;
  }

  if (localStaticState[1UL] & 1)
  {
    localStaticState[((int) localStaticState[1UL]) % 2UL] -= localStaticState[((int) localStaticState[0UL]) % 2UL];
    if (!((localStaticState[0UL] >> 1U) & 1))
    {
      localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] - localStaticState[((int) localStaticState[0UL]) % 2UL];
      localStaticState[0UL] += localStaticState[0UL];
    }
  }
  return localStaticState[0UL] + localStaticState[1UL];
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0