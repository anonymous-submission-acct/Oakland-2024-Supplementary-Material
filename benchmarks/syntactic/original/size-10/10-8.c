unsigned int OBF_FUNC(unsigned int input)
{
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_3;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  localStaticState[0UL] = input - 120651548U;
  localStaticState[1UL] = (input * localStaticState[0UL]) - 1897958079U;
  _induction1_0_2 = 0UL;
  _index0_3 = 0UL;
  while (_index0_3 < 3UL)
  {
    switch (((int) (localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[((int) localStaticState[0UL]) % 2UL])) % 6UL)
    {
      case 0UL:
        break;

      case 1UL:
        localStaticState[0UL] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[1UL];
        localStaticState[0UL] = localStaticState[((int) localStaticState[0UL]) % 2UL] - localStaticState[_index0_3 % 2UL];
        _induction3_2_2 = 0UL;
        _index2_0 = 0UL;
        while (_index2_0 < 0UL)
      {
        localStaticState[_induction1_0_2 % 2UL] = localStaticState[0UL] + localStaticState[_induction3_2_2];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_0 += 2UL;
      }

        localStaticState[_induction1_0_2] += localStaticState[_induction1_0_2 % 2UL];
        break;

      case 2UL:
        localStaticState[_induction1_0_2] = localStaticState[_index0_3 % 2UL] * localStaticState[_induction1_0_2];
        break;

      default:
        localStaticState[_induction1_0_2] = localStaticState[((int) localStaticState[1UL]) % 2UL] + localStaticState[0UL];
        localStaticState[_induction1_0_2] = localStaticState[1UL] - localStaticState[_induction1_0_2 % 2UL];
        break;

    }

    _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
    _index0_3++;
  }

  return (localStaticState[0UL] * localStaticState[1UL]) - 1015278320U;
}

int main(int argc, char **argv)
{
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}

// 0 1 16777217 1965507585 4093771777 251658240 2172810240 33554432
// 16777216 1543582473 335544320 100663296 285212672