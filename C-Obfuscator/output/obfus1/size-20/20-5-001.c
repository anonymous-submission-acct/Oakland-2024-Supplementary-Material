typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_5;
  unsigned int _induction3_2_2;
  unsigned int _index2_2;
  unsigned int _induction5_4_2;
  unsigned int _index4_3;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = input * 73477743UL;
  localStaticState[1UL] = input * 741053607UL;
  _induction1_0_2 = 0UL;
  _index0_5 = 0UL;
  int __RANDVAR__51374151503351940476__ = 0;
  while (__RANDVAR__51374151503351940476__ == 0) {
    if (_index0_5 < 5UL) {
      localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_5 += 2UL;
    }
    if (_index0_5 < 5UL) {
      localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_5 += 2UL;
    }
    if (_index0_5 < 5UL) {
      localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
      _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
      _index0_5 += 2UL;
    }
    while (_index0_5 < 5UL) {
      if (_index0_5 < 5UL) {
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_5 += 2UL;
      }
      if (_index0_5 < 5UL) {
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_5 += 2UL;
      }
      if (_index0_5 < 5UL) {
        localStaticState[0UL] = localStaticState[_induction1_0_2] + localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_5 += 2UL;
      }
    }
    __RANDVAR__51374151503351940476__ = 1;
  }
  if (localStaticState[0UL] & 1) {
    localStaticState[0UL] *= localStaticState[((int)localStaticState[1UL]) % 2UL];
    _induction3_2_2 = 0UL;
    _index2_2 = 0UL;
    int __RANDVAR__24077797781338601405__ = 0;
    while (__RANDVAR__24077797781338601405__ == 0) {
      if (_index2_2 < 2UL) {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_2++;
      }
      if (_index2_2 < 2UL) {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_2++;
      }
      if (_index2_2 < 2UL) {
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_2++;
      }
      while (_index2_2 < 2UL) {
        if (_index2_2 < 2UL) {
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_2++;
        }
        if (_index2_2 < 2UL) {
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_2++;
        }
        if (_index2_2 < 2UL) {
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_2++;
        }
      }
      __RANDVAR__24077797781338601405__ = 1;
    }
  }
  if ((localStaticState[0UL] >> 4U) & 1) {
    _induction5_4_2 = 0UL;
    _index4_3 = 0UL;
    int __RANDVAR__61641603111149001051__ = 0;
    while (__RANDVAR__61641603111149001051__ == 0) {
      if (_index4_3 < 3UL) {
        if (localStaticState[0UL] & 1) {
        }
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        int __RANDVAR__24703458158242054894__ = 0;
        while (__RANDVAR__24703458158242054894__ == 0) {
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          while (_index6_0 < 0UL) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
          }
          __RANDVAR__24703458158242054894__ = 1;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      if (_index4_3 < 3UL) {
        if (localStaticState[0UL] & 1) {
        }
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        int __RANDVAR__1851443666418976513__ = 0;
        while (__RANDVAR__1851443666418976513__ == 0) {
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          while (_index6_0 < 0UL) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
          }
          __RANDVAR__1851443666418976513__ = 1;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      if (_index4_3 < 3UL) {
        if (localStaticState[0UL] & 1) {
        }
        _induction7_6_2 = 0UL;
        _index6_0 = 0UL;
        int __RANDVAR__35940245225856917658__ = 0;
        while (__RANDVAR__35940245225856917658__ == 0) {
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          if (_index6_0 < 0UL) {
            if (localStaticState[0UL] & 1) {
              if (localStaticState[1UL] & 1) {
                localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
              }
              localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
              localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
              localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
            } else {
              localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
              localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
            }
            _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
            _index6_0++;
          }
          while (_index6_0 < 0UL) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
          }
          __RANDVAR__35940245225856917658__ = 1;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_3++;
      }
      while (_index4_3 < 3UL) {
        if (_index4_3 < 3UL) {
          if (localStaticState[0UL] & 1) {
          }
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__45275661453004259289__ = 0;
          while (__RANDVAR__45275661453004259289__ == 0) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__45275661453004259289__ = 1;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
        if (_index4_3 < 3UL) {
          if (localStaticState[0UL] & 1) {
          }
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__37181707099176459030__ = 0;
          while (__RANDVAR__37181707099176459030__ == 0) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__37181707099176459030__ = 1;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
        if (_index4_3 < 3UL) {
          if (localStaticState[0UL] & 1) {
          }
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__47486670376888092752__ = 0;
          while (__RANDVAR__47486670376888092752__ == 0) {
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              if (localStaticState[0UL] & 1) {
                if (localStaticState[1UL] & 1) {
                  localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                }
                localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
              } else {
                localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
              }
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                if (localStaticState[0UL] & 1) {
                  if (localStaticState[1UL] & 1) {
                    localStaticState[_induction7_6_2] = localStaticState[_index6_0 % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[_index6_0] + localStaticState[0UL];
                  }
                  localStaticState[_index6_0] -= localStaticState[_induction5_4_2 % 2UL];
                  localStaticState[_induction5_4_2] -= localStaticState[_induction7_6_2];
                  localStaticState[_index6_0 % 2UL] = localStaticState[_induction7_6_2 % 2UL] + localStaticState[_index6_0];
                } else {
                  localStaticState[_index6_0] = localStaticState[((int)localStaticState[1UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
                  localStaticState[_index4_3 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_3 % 2UL];
                }
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__47486670376888092752__ = 1;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_3++;
        }
      }
      __RANDVAR__61641603111149001051__ = 1;
    }
  }
  return (localStaticState[0UL] + localStaticState[1UL]) + 317240796U;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
