typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{
  unsigned int hash = 0;
  unsigned int i = 0;
  int __RANDVAR__93942209997136746432__ = 0;
  while (__RANDVAR__93942209997136746432__ == 0) {
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__93942209997136746432__ = 1;
  }
  int __RANDVAR__6061012062903794476__ = 0;
  while (__RANDVAR__6061012062903794476__ == 0) {
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__6061012062903794476__ = 1;
  }
  int __RANDVAR__42742037326840337527__ = 0;
  while (__RANDVAR__42742037326840337527__ == 0) {
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      if ((rand() % 10) >= 5)
        break;
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        if ((rand() % 10) >= 5)
          break;
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__42742037326840337527__ = 1;
  }
  int __RANDVAR__28028206978329916347__ = 0;
  while (__RANDVAR__28028206978329916347__ == 0) {
    if (i < len) {
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    if (i < len) {
      hash = (hash << 7) ^ (*str);
      str++;
      i++;
    }
    while (i < len) {
      if (i < len) {
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
      if (i < len) {
        hash = (hash << 7) ^ (*str);
        str++;
        i++;
      }
    }
    __RANDVAR__28028206978329916347__ = 1;
  }
  return hash;
}
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 809267)
    printf("You win!\n");
  return hash;
}
// variants: loop-fission, loop-unroll
// expanded variants: loop-fission, loop-unroll
