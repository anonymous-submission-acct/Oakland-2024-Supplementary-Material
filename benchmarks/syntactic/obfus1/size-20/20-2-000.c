typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  unsigned int _index0_4;
  unsigned int _induction3_2_2;
  unsigned int _index2_3;
  unsigned int _induction5_4_2;
  unsigned int _index4_5;
  unsigned int _induction7_6_2;
  unsigned int _index6_0;
  localStaticState[0UL] = input + 1572625031U;
  localStaticState[1UL] = input + (623563203UL + localStaticState[0UL]);
  localStaticState[((int)localStaticState[0UL]) % 2UL] += localStaticState[0UL];
  if ((localStaticState[0UL] >> 2U) & 1) {
    _induction1_0_2 = 0UL;
    _index0_4 = 0UL;
    int __RANDVAR__74406915814969119245__ = 0;
    while (__RANDVAR__74406915814969119245__ == 0) {
      if (_index0_4 < 4UL) {
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_4 += 2UL;
      }
      if (_index0_4 < 4UL) {
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_4 += 2UL;
      }
      if (_index0_4 < 4UL) {
        _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
        _index0_4 += 2UL;
      }
      while (_index0_4 < 4UL) {
        if (_index0_4 < 4UL) {
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_4 += 2UL;
        }
        if (_index0_4 < 4UL) {
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_4 += 2UL;
        }
        if (_index0_4 < 4UL) {
          _induction1_0_2 = (_induction1_0_2 + 1UL) % 2UL;
          _index0_4 += 2UL;
        }
      }
      __RANDVAR__74406915814969119245__ = 1;
    }
    localStaticState[0UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[0UL];
    localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[((int)localStaticState[1UL]) % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
    localStaticState[0UL] *= localStaticState[1UL];
    _induction3_2_2 = 0UL;
    _index2_3 = 0UL;
    int __RANDVAR__74776510372591150364__ = 0;
    while (__RANDVAR__74776510372591150364__ == 0) {
      if (_index2_3 < 3UL) {
        localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
        localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_3 += 2UL;
      }
      if (_index2_3 < 3UL) {
        localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
        localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_3 += 2UL;
      }
      if (_index2_3 < 3UL) {
        localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
        localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
        _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
        _index2_3 += 2UL;
      }
      while (_index2_3 < 3UL) {
        if (_index2_3 < 3UL) {
          localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
          localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_3 += 2UL;
        }
        if (_index2_3 < 3UL) {
          localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
          localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_3 += 2UL;
        }
        if (_index2_3 < 3UL) {
          localStaticState[_index2_3 % 2UL] *= localStaticState[_induction3_2_2];
          localStaticState[1UL] = localStaticState[_induction3_2_2 % 2UL] * localStaticState[((int)localStaticState[1UL]) % 2UL];
          _induction3_2_2 = (_induction3_2_2 + 1UL) % 2UL;
          _index2_3 += 2UL;
        }
      }
      __RANDVAR__74776510372591150364__ = 1;
    }
    _induction5_4_2 = 0UL;
    _index4_5 = 0UL;
    int __RANDVAR__9099826206662876999__ = 0;
    while (__RANDVAR__9099826206662876999__ == 0) {
      if (_index4_5 < 5UL) {
        switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
        case 0UL:
          if ((localStaticState[1UL] >> 4U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
            localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
          }
          localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
          break;
        case 1UL:
          if ((localStaticState[1UL] >> 2U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
            localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
          }
          break;
        default:
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__29877114088985794396__ = 0;
          while (__RANDVAR__29877114088985794396__ == 0) {
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__29877114088985794396__ = 1;
          }
          break;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_5 += 2UL;
      }
      if (_index4_5 < 5UL) {
        switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
        case 0UL:
          if ((localStaticState[1UL] >> 4U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
            localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
          }
          localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
          break;
        case 1UL:
          if ((localStaticState[1UL] >> 2U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
            localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
          }
          break;
        default:
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__3454706956910948582__ = 0;
          while (__RANDVAR__3454706956910948582__ == 0) {
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__3454706956910948582__ = 1;
          }
          break;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_5 += 2UL;
      }
      if (_index4_5 < 5UL) {
        switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
        case 0UL:
          if ((localStaticState[1UL] >> 4U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
            localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
          }
          localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
          break;
        case 1UL:
          if ((localStaticState[1UL] >> 2U) & 1) {
            localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
            localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
          }
          break;
        default:
          _induction7_6_2 = 0UL;
          _index6_0 = 0UL;
          int __RANDVAR__99206331908936050019__ = 0;
          while (__RANDVAR__99206331908936050019__ == 0) {
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            if (_index6_0 < 0UL) {
              _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
              _index6_0++;
            }
            while (_index6_0 < 0UL) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
            }
            __RANDVAR__99206331908936050019__ = 1;
          }
          break;
        }
        _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
        _index4_5 += 2UL;
      }
      while (_index4_5 < 5UL) {
        if (_index4_5 < 5UL) {
          switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
          case 0UL:
            if ((localStaticState[1UL] >> 4U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
            }
            localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
            break;
          case 1UL:
            if ((localStaticState[1UL] >> 2U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
            }
            break;
          default:
            _induction7_6_2 = 0UL;
            _index6_0 = 0UL;
            int __RANDVAR__54750332463775361925__ = 0;
            while (__RANDVAR__54750332463775361925__ == 0) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              while (_index6_0 < 0UL) {
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
              }
              __RANDVAR__54750332463775361925__ = 1;
            }
            break;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_5 += 2UL;
        }
        if (_index4_5 < 5UL) {
          switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
          case 0UL:
            if ((localStaticState[1UL] >> 4U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
            }
            localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
            break;
          case 1UL:
            if ((localStaticState[1UL] >> 2U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
            }
            break;
          default:
            _induction7_6_2 = 0UL;
            _index6_0 = 0UL;
            int __RANDVAR__55653894628759585285__ = 0;
            while (__RANDVAR__55653894628759585285__ == 0) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              while (_index6_0 < 0UL) {
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
              }
              __RANDVAR__55653894628759585285__ = 1;
            }
            break;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_5 += 2UL;
        }
        if (_index4_5 < 5UL) {
          switch (((int)(localStaticState[1UL] * localStaticState[_induction5_4_2])) % 4UL) {
          case 0UL:
            if ((localStaticState[1UL] >> 4U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[1UL]) % 2UL];
              localStaticState[_induction5_4_2 % 2UL] -= localStaticState[((int)localStaticState[0UL]) % 2UL];
            }
            localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[_index4_5 % 2UL];
            break;
          case 1UL:
            if ((localStaticState[1UL] >> 2U) & 1) {
              localStaticState[_index4_5 % 2UL] = localStaticState[1UL] + localStaticState[_induction5_4_2];
              localStaticState[_induction5_4_2] = localStaticState[((int)localStaticState[0UL]) % 2UL] - localStaticState[_induction5_4_2 % 2UL];
            }
            break;
          default:
            _induction7_6_2 = 0UL;
            _index6_0 = 0UL;
            int __RANDVAR__26543301299668465158__ = 0;
            while (__RANDVAR__26543301299668465158__ == 0) {
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              if (_index6_0 < 0UL) {
                _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                _index6_0++;
              }
              while (_index6_0 < 0UL) {
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
                if (_index6_0 < 0UL) {
                  _induction7_6_2 = (_induction7_6_2 + 1UL) % 2UL;
                  _index6_0++;
                }
              }
              __RANDVAR__26543301299668465158__ = 1;
            }
            break;
          }
          _induction5_4_2 = (_induction5_4_2 + 1UL) % 2UL;
          _index4_5 += 2UL;
        }
      }
      __RANDVAR__9099826206662876999__ = 1;
    }
  }
  return localStaticState[0UL] * (localStaticState[1UL] - 247594873UL);
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-unroll
// expanded variants: loop-unroll
