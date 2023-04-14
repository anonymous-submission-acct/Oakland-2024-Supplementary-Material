unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_9;
  localStaticState[0UL] = (input + 821628072UL) + 878588929U;
  localStaticState[1UL] = input + 589765119UL;
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] * localStaticState[1UL];
  localStaticState[((int) localStaticState[1UL]) % 2UL] = localStaticState[1UL] + localStaticState[0UL];
  _induction1_0_2 = 0UL;
  _index0_9 = 0UL;
  while (_index0_9 < 9UL)
  {
    if (!((localStaticState[1UL] >> 4U) & 1))
    {
      localStaticState[_index0_9 % 2UL] += localStaticState[_index0_9 % 2UL];
    }
    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_9 += 2UL;
  }

  return localStaticState[0UL] + localStaticState[1UL];
} // 0 4

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

