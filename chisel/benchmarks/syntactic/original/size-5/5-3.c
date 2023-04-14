unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = input + 894521805U;
  localStaticState[1UL] = (input + 662283559UL) + (1070919576UL - localStaticState[0UL]);
  _induction1_0_2 = 0UL;
  _index0_2 = 0UL;
  while (_index0_2 < 2UL)
  {
    localStaticState[1UL] = localStaticState[_index0_2] * localStaticState[_induction1_0_2 % 2UL];
    _induction3_2_2 = 0UL;
    _index2_0 = 0UL;
    while (_index2_0 < 0UL)
    {
      _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
      _index2_0 += 2UL;
    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_2++;
  }

  return (localStaticState[0UL] * localStaticState[1UL]) * 945270578;
} // 0

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

