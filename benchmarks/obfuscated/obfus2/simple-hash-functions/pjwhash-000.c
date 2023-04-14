typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  const unsigned int BitsInUnsignedInt = (unsigned int)((sizeof(unsigned int)) * 8);
  const unsigned int ThreeQuarters = (unsigned int)((BitsInUnsignedInt * 3) / 4);
  const unsigned int OneEighth = (unsigned int)(BitsInUnsignedInt / 8);
  const unsigned int HighBits = ((unsigned int)0xFFFFFFFF) << (BitsInUnsignedInt - OneEighth);
  unsigned int hash = 0;
  unsigned int test = 0;
  unsigned int i = 0;
  int __RANDVAR__65751778236056920219__ = 0;
  int __RANDVAR__48884119823502426769__ = 0;
  while (__RANDVAR__48884119823502426769__ == 0) {
    if (__RANDVAR__65751778236056920219__ == 0) {
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      int __RANDVAR__24460401236084342341__ = 0;
      while (__RANDVAR__24460401236084342341__ == 0) {
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        while (i < len) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
        }
        __RANDVAR__24460401236084342341__ = 1;
      }
      __RANDVAR__65751778236056920219__ = 1;
    }
    if (__RANDVAR__65751778236056920219__ == 0) {
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      int __RANDVAR__17628244566770082575__ = 0;
      while (__RANDVAR__17628244566770082575__ == 0) {
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        while (i < len) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
        }
        __RANDVAR__17628244566770082575__ = 1;
      }
      __RANDVAR__65751778236056920219__ = 1;
    }
    if (__RANDVAR__65751778236056920219__ == 0) {
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << OneEighth) + (*str);
        if ((test = hash & HighBits) != 0) {
          hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
        }
        str++;
        i++;
      }
      int __RANDVAR__63532429434772926508__ = 0;
      while (__RANDVAR__63532429434772926508__ == 0) {
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        if (i < len) {
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
          if (i < len) {
            hash = (hash << OneEighth) + (*str);
            if ((test = hash & HighBits) != 0) {
              hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
            }
            str++;
            i++;
          }
        }
        while (i < len) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
        }
        __RANDVAR__63532429434772926508__ = 1;
      }
      __RANDVAR__65751778236056920219__ = 1;
    }
    while (__RANDVAR__65751778236056920219__ == 0) {
      if (__RANDVAR__65751778236056920219__ == 0) {
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        int __RANDVAR__99932231281454345807__ = 0;
        while (__RANDVAR__99932231281454345807__ == 0) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          while (i < len) {
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
          }
          __RANDVAR__99932231281454345807__ = 1;
        }
        __RANDVAR__65751778236056920219__ = 1;
      }
      if (__RANDVAR__65751778236056920219__ == 0) {
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        int __RANDVAR__33968150008861682201__ = 0;
        while (__RANDVAR__33968150008861682201__ == 0) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          while (i < len) {
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
          }
          __RANDVAR__33968150008861682201__ = 1;
        }
        __RANDVAR__65751778236056920219__ = 1;
      }
      if (__RANDVAR__65751778236056920219__ == 0) {
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        if (i < len) {
          hash = (hash << OneEighth) + (*str);
          if ((test = hash & HighBits) != 0) {
            hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
          }
          str++;
          i++;
        }
        int __RANDVAR__94626015114462038874__ = 0;
        while (__RANDVAR__94626015114462038874__ == 0) {
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          if (i < len) {
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
            if (i < len) {
              hash = (hash << OneEighth) + (*str);
              if ((test = hash & HighBits) != 0) {
                hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
              }
              str++;
              i++;
            }
          }
          while (i < len) {
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
            if (i < len) {
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
              if (i < len) {
                hash = (hash << OneEighth) + (*str);
                if ((test = hash & HighBits) != 0) {
                  hash = (hash ^ (test >> ThreeQuarters)) & (~HighBits);
                }
                str++;
                i++;
              }
            }
          }
          __RANDVAR__94626015114462038874__ = 1;
        }
        __RANDVAR__65751778236056920219__ = 1;
      }
    }
    __RANDVAR__48884119823502426769__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xaf9bec9)
    printf("You win!\n");
  return 0;
}
// variants: loop-unroll, loop-unroll
// expanded variants: loop-unroll, loop-unroll
