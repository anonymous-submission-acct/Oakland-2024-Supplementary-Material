unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = input * 1197701593U;
  localStaticState[1UL] = input + (localStaticState[0UL] + 302937465UL);
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[1UL];
  localStaticState[((int) localStaticState[0UL]) % 2UL] = localStaticState[0UL] * localStaticState[((int) localStaticState[1UL]) % 2UL];
  _induction1_0_2 = 0UL;
  _index0_2 = 0UL;
  while (_index0_2 < 2UL)
  {
    if (!(localStaticState[0UL] & 1))
    {
      _induction3_2_2 = 0UL;
      _index2_0 = 0UL;
      while (_index2_0 < 0UL)
      {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0++;
      }

    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2++;
  }

  return (localStaticState[0UL] - localStaticState[1UL]) + 52975321U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// 0 1
