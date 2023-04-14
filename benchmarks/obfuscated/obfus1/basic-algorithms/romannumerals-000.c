typedef void *__builtin_va_list;
#include <stdlib.h>
void predigits(char c1, char c2);
void postdigits(char c, int n);
char roman_Number[1000];
int i = 0;
int OBF_FUNC(int number) {
  if (number <= 0) {
    int __RANDVAR__86775247699783035093__ = 653 * number;
    if (__RANDVAR__86775247699783035093__ < number) {
      int __RANDVAR__99185500283552518352__ = __RANDVAR__86775247699783035093__;
    } else {
      number = number - 103;
      number = number + 103;
    }
    printf("Invalid number");
    return 0;
  }
  number = number - 471;
  number = number + 471;
  while (number != 0) {
    if (number >= 1000) {
      int __RANDVAR__5616217330097978606__ = 924 * __RANDVAR__5616217330097978606__;
      if (number < ((341 * __RANDVAR__5616217330097978606__) * (646 * __RANDVAR__5616217330097978606__))) {
        int __RANDVAR__59405782095585079847__ = number;
      } else {
        number = number - 16;
        number = number + 16;
      }
      postdigits('M', number / 1000);
      int __RANDVAR__67018461048181422137__ = 272 + (955 - 117);
      if (number < __RANDVAR__67018461048181422137__) {
        int __RANDVAR__81858647342933479372__ = number;
      } else {
        int __RANDVAR__81605456861063238209__ = 557;
      }
      number = number - ((number / 1000) * 1000);
    } else if (number >= 500) {
      if (number < (500 + (4 * 100))) {
        number = number - 912;
        number = number + 912;
        postdigits('D', number / 500);
        if ((389 - (number * 205)) < number) {
          int __RANDVAR__75776616253629028206__ = number;
        } else {
          if ((179 - number) < 495) {
            int __RANDVAR__45656852639108179386__ = 593;
          } else {
            int __RANDVAR__39299353198899968905__ = number;
          }
        }
        number = number - ((number / 500) * 500);
      } else {
        predigits('C', 'M');
        number = number + 862;
        number = number - 862;
        number = number - (1000 - 100);
      }
    } else if (number >= 100) {
      if (number < (100 + (3 * 100))) {
        number = number + 454;
        number = number - 454;
        postdigits('C', number / 100);
        number = number - ((number / 100) * 100);
      } else {
        int __RANDVAR__71439277133617432669__ = 622;
        predigits('L', 'D');
        number = number - (500 - 100);
      }
    } else if (number >= 50) {
      int __RANDVAR__80342601711600664642__ = 548 - 134;
      if (number < (50 + (4 * 10))) {
        int __RANDVAR__64608487669732487170__ = __RANDVAR__64608487669732487170__ + 1;
        if (__RANDVAR__64608487669732487170__ < number) {
          if (((707 * number) * (number - 640)) < 835) {
            int __RANDVAR__73779677631583620009__ = number;
          } else {
            int __RANDVAR__34545654590412317432__ = __RANDVAR__34545654590412317432__ + 1;
            if (__RANDVAR__64608487669732487170__ < ((609 + __RANDVAR__34545654590412317432__) * __RANDVAR__64608487669732487170__)) {
              int __RANDVAR__93285238981550507057__ = 105;
            } else {
              number = number - 153;
              number = number + 153;
            }
          }
        } else {
          int __RANDVAR__47712379021705497955__ = number;
        }
        postdigits('L', number / 50);
        number = number - ((number / 50) * 50);
      } else {
        if (((number + 436) - 435) < number) {
          int __RANDVAR__51157024787481726815__ = 966 + __RANDVAR__51157024787481726815__;
        } else {
          int __RANDVAR__58001919653412756401__ = (__RANDVAR__58001919653412756401__ + number) * (252 - 730);
          if (((number + __RANDVAR__58001919653412756401__) + (__RANDVAR__58001919653412756401__ - __RANDVAR__58001919653412756401__)) < 733) {
            int __RANDVAR__688314658849917967__ = number;
          } else {
            int __RANDVAR__49565700492346607420__ = 618;
          }
        }
        predigits('X', 'C');
        number = number + 308;
        number = number - 308;
        number = number - (100 - 10);
      }
    } else if (number >= 10) {
      if (number < (10 + (3 * 10))) {
        postdigits('X', number / 10);
        int __RANDVAR__64822162555612519588__ = __RANDVAR__64822162555612519588__ + 1;
        number = number - ((number / 10) * 10);
      } else {
        if (number < (number * (292 + 228))) {
          number = number + 672;
          number = number - 672;
        } else {
          number = number - 342;
          number = number + 342;
        }
        predigits('X', 'L');
        number = number - (50 - 10);
      }
    } else if (number >= 5) {
      number = number - 307;
      number = number + 307;
      if (number < (5 + (4 * 1))) {
        number = number + 969;
        number = number - 969;
        postdigits('V', number / 5);
        int __RANDVAR__56172745777109331795__ = (750 - number) + 219;
        number = number - ((number / 5) * 5);
      } else {
        number = number - 944;
        number = number + 944;
        predigits('I', 'X');
        number = number - (10 - 1);
      }
    } else if (number >= 1) {
      int __RANDVAR__68949957293637707608__ = (757 * number) + number;
      if ((__RANDVAR__68949957293637707608__ + __RANDVAR__68949957293637707608__) < __RANDVAR__68949957293637707608__) {
        int __RANDVAR__90794732330097589685__ = __RANDVAR__90794732330097589685__ + 1;
      } else {
        int __RANDVAR__61776080820899417955__ = number;
      }
      if (number < 4) {
        postdigits('I', number / 1);
        number = number - ((number / 1) * 1);
      } else {
        predigits('I', 'V');
        number = number - (5 - 1);
      }
    }
  }
  printf("Roman number will be: ");
  int j = 0;
  for (; j < i;) {
    printf("%c", roman_Number[j]);
    if (number < 47) {
      int __RANDVAR__87472003557081973365__ = (158 * 961) + (292 * __RANDVAR__87472003557081973365__);
    } else {
      number = number - 195;
      number = number + 195;
    }
    j++;
  }
  printf("\n");
  if (number < (number * number)) {
    int __RANDVAR__18991722916563656152__ = 644;
    if (__RANDVAR__18991722916563656152__ < number) {
      int __RANDVAR__37244576702208647597__ = __RANDVAR__18991722916563656152__;
    } else {
      int __RANDVAR__98749964800989284801__ = (number + 355) - (648 + __RANDVAR__98749964800989284801__);
      if (__RANDVAR__98749964800989284801__ < ((number + number) - (__RANDVAR__98749964800989284801__ + __RANDVAR__98749964800989284801__))) {
        __RANDVAR__98749964800989284801__ = __RANDVAR__98749964800989284801__ - 718;
        __RANDVAR__98749964800989284801__ = __RANDVAR__98749964800989284801__ + 718;
      } else {
        int __RANDVAR__71028466869176803649__ = 285 - (number + number);
      }
    }
  } else {
    int __RANDVAR__40050854450022802619__ = 36;
  }
  return 0;
}
int main(int argc, char *argv[]) { return OBF_FUNC(atoi(argv[1])); }
void predigits(char c1, char c2) {
  roman_Number[i++] = c1;
  roman_Number[i++] = c2;
}
void postdigits(char c, int n) {
  int j = 0;
  while (j < n) {
    roman_Number[i++] = c;
    j++;
  }
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
