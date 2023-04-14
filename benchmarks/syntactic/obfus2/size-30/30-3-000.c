typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_2;
  unsigned int _induction3_2_2;
  unsigned int _index2_0;
  unsigned int _induction5_4_2;
  unsigned int _index4_0;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = input + 3124095116;
  localStaticState[1UL] = input + localStaticState[0UL];
  localStaticState[0UL] += localStaticState[((int)localStaticState[1UL]) % 2UL];
  localStaticState[((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] + localStaticState[1UL];
  if (!((localStaticState[0UL] >> 3U) & 1)) {
    if ((localStaticState[1UL] >> 2U) & 1) {
    }
  }
  if ((localStaticState[0UL] >> 2U) & 1) {
    if ((localStaticState[1UL] >> 2U) & 1) {
      if ((localStaticState[1UL] >> 2U) & 1) {
        localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
        _induction1_0_2 = 0UL;
        _index0_2 = 0UL;
        while (_index0_2 < 2UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_2++;
        }
        while (_index0_2 < 2UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_2++;
        }
        while (_index0_2 < 2UL) {
          if ((rand() % 10) >= 5)
            break;
          localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_2++;
        }
        while (_index0_2 < 2UL) {
          localStaticState[_induction1_0_2] = localStaticState[0UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_2++;
        }
        if ((localStaticState[0UL] >> 4U) & 1) {
          if ((localStaticState[1UL] >> 1U) & 1) {
            localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
            localStaticState[1UL] += localStaticState[1UL];
          }
        }
      }
    }
  }
  _induction3_2_2 = 0UL;
  _index2_0 = 0UL;
  while (_index2_0 < 0UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_index2_0] += localStaticState[_induction3_2_2];
    localStaticState[_induction3_2_2] = localStaticState[_index2_0] + localStaticState[_induction3_2_2];
    localStaticState[1UL] = localStaticState[_index2_0] + localStaticState[1UL];
    _induction5_4_2 = 0UL;
    _index4_0 = 0UL;
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_0++;
  }
  while (_index2_0 < 0UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_index2_0] += localStaticState[_induction3_2_2];
    localStaticState[_induction3_2_2] = localStaticState[_index2_0] + localStaticState[_induction3_2_2];
    localStaticState[1UL] = localStaticState[_index2_0] + localStaticState[1UL];
    _induction5_4_2 = 0UL;
    _index4_0 = 0UL;
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_0++;
  }
  while (_index2_0 < 0UL) {
    if ((rand() % 10) >= 5)
      break;
    localStaticState[_index2_0] += localStaticState[_induction3_2_2];
    localStaticState[_induction3_2_2] = localStaticState[_index2_0] + localStaticState[_induction3_2_2];
    localStaticState[1UL] = localStaticState[_index2_0] + localStaticState[1UL];
    _induction5_4_2 = 0UL;
    _index4_0 = 0UL;
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      if ((rand() % 10) >= 5)
        break;
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        if ((rand() % 10) >= 5)
          break;
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    while (_index4_0 < 0UL) {
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_0++;
  }
  while (_index2_0 < 0UL) {
    localStaticState[_index2_0] += localStaticState[_induction3_2_2];
    localStaticState[_induction3_2_2] = localStaticState[_index2_0] + localStaticState[_induction3_2_2];
    localStaticState[1UL] = localStaticState[_index2_0] + localStaticState[1UL];
    _induction5_4_2 = 0UL;
    _index4_0 = 0UL;
    while (_index4_0 < 0UL) {
      _induction7_6_2 = 0UL;
      _index6_0 = 0UL;
      while (_index6_0 < 0UL) {
        localStaticState[_index2_0] = localStaticState[_induction7_6_2] + localStaticState[_index2_0];
        localStaticState[_index6_0] = localStaticState[_induction3_2_2 % 2UL] - localStaticState[0UL];
        _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
        _index6_0++;
      }
      _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
      _index4_0++;
    }
    _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
    _index2_0++;
  }
  if (!((localStaticState[1UL] >> 3U) & 1)) {
    localStaticState[0UL] += localStaticState[0UL];
    localStaticState[0UL] += localStaticState[0UL];
  }
  return localStaticState[0UL] - localStaticState[1UL];
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission, irrelevant-code
// expanded variants: loop-fission, irrelevant-code
