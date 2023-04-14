typedef void *__builtin_va_list;
#include <stdlib.h>
void predigits(char c1, char c2);
void postdigits(char c, int n);
char roman_Number[1000];
int i = 0;
int OBF_FUNC(int number) {
  if (number <= 0) {
    printf("Invalid number");
    return 0;
  }
  int __RANDVAR__1980622859160481094__ = 296;
  if (((54 + 260) + (number + __RANDVAR__1980622859160481094__)) < (number + 916)) {
    if ((420 - number) < 360) {
      int __RANDVAR__31157804674186744002__ = 424;
    } else {
      int __RANDVAR__95171821097157938751__ = 872;
    }
  } else {
    int __RANDVAR__61083999159733021651__ = 864;
  }
  while (number != 0) {
    int __RANDVAR__8942843558579663112__ = number;
    if (number < 457) {
      int __RANDVAR__17705284053979211818__ = __RANDVAR__17705284053979211818__ - number;
      if (__RANDVAR__8942843558579663112__ < number) {
        number = number - 812;
        number = number + 812;
      } else {
        number = number + 265;
        number = number - 265;
      }
    } else {
      int __RANDVAR__92408016356692544576__ = number + (number + 499);
    }
    if (number >= 1000) {
      if (number < 251) {
        int __RANDVAR__6011253228234907649__ = 462;
      } else {
        int __RANDVAR__48147535316888842889__ = 31;
      }
      postdigits('M', number / 1000);
      number = number - ((number / 1000) * 1000);
    } else if (number >= 500) {
      if (number < (500 + (4 * 100))) {
        postdigits('D', number / 500);
        int __RANDVAR__52542058514853858363__ = 968 * (__RANDVAR__52542058514853858363__ - 387);
        if (((807 - 460) - (457 * 836)) < __RANDVAR__52542058514853858363__) {
          int __RANDVAR__73020540841914768788__ = 312;
        } else {
          int __RANDVAR__65907307599268593187__ = number;
        }
        number = number - ((number / 500) * 500);
      } else {
        number = number - 813;
        number = number + 813;
        predigits('C', 'M');
        int __RANDVAR__15248207349221534720__ = 67;
        number = number - (1000 - 100);
      }
    } else if (number >= 100) {
      if (number < (100 + (3 * 100))) {
        number = number + 757;
        number = number - 757;
        postdigits('C', number / 100);
        number = number + 985;
        number = number - 985;
        number = number - ((number / 100) * 100);
      } else {
        predigits('L', 'D');
        number = number - (500 - 100);
      }
    } else if (number >= 50) {
      if (number < 387) {
        number = number + 346;
        number = number - 346;
      } else {
        number = number - 183;
        number = number + 183;
      }
      if (number < (50 + (4 * 10))) {
        postdigits('L', number / 50);
        if (number < 29) {
          int __RANDVAR__49502112004318015011__ = (681 - __RANDVAR__49502112004318015011__) - __RANDVAR__49502112004318015011__;
          if (number < (495 + (__RANDVAR__49502112004318015011__ + 279))) {
            number = number + 532;
            number = number - 532;
          } else {
            number = number + 908;
            number = number - 908;
          }
        } else {
          number = number - 633;
          number = number + 633;
        }
        number = number - ((number / 50) * 50);
      } else {
        predigits('X', 'C');
        number = number + 622;
        number = number - 622;
        number = number - (100 - 10);
      }
    } else if (number >= 10) {
      if (number < ((394 * 327) * (number + 560))) {
        number = number + 193;
        number = number - 193;
      } else {
        int __RANDVAR__61825944374339667200__ = __RANDVAR__61825944374339667200__ + 1;
      }
      if (number < (10 + (3 * 10))) {
        postdigits('X', number / 10);
        number = number - ((number / 10) * 10);
      } else {
        predigits('X', 'L');
        number = number - (50 - 10);
      }
    } else if (number >= 5) {
      if (number < (5 + (4 * 1))) {
        int __RANDVAR__37910818194579166347__ = __RANDVAR__37910818194579166347__ + 1;
        if (((__RANDVAR__37910818194579166347__ + 491) + 988) < __RANDVAR__37910818194579166347__) {
          if (__RANDVAR__37910818194579166347__ < 635) {
            int __RANDVAR__68441538859281274576__ = __RANDVAR__37910818194579166347__ * __RANDVAR__68441538859281274576__;
          } else {
            int __RANDVAR__35023253658947503710__ = 894;
          }
        } else {
          int __RANDVAR__19439312605681336240__ = 601 + (number + number);
        }
        postdigits('V', number / 5);
        number = number - 12;
        number = number + 12;
        number = number - ((number / 5) * 5);
      } else {
        int __RANDVAR__81265348084704745314__ = __RANDVAR__81265348084704745314__ + 1;
        predigits('I', 'X');
        __RANDVAR__81265348084704745314__ = __RANDVAR__81265348084704745314__ - 998;
        __RANDVAR__81265348084704745314__ = __RANDVAR__81265348084704745314__ + 998;
        number = number - (10 - 1);
      }
    } else if (number >= 1) {
      int __RANDVAR__80448302558173581633__ = 133;
      if (__RANDVAR__80448302558173581633__ < ((392 + 675) * number)) {
        int __RANDVAR__22067275618037959910__ = 242 + 471;
        if (__RANDVAR__22067275618037959910__ < (519 * 24)) {
          int __RANDVAR__9105166512231338125__ = __RANDVAR__9105166512231338125__ + 1;
        } else {
          int __RANDVAR__99186727486481647835__ = 103;
        }
      } else {
        number = number + 619;
        number = number - 619;
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
  if (number < 534) {
    int __RANDVAR__94914178030483920295__ = __RANDVAR__94914178030483920295__ + 456;
  } else {
    if (number < (number - (865 + 531))) {
      number = number + 755;
      number = number - 755;
    } else {
      number = number + 725;
      number = number - 725;
    }
  }
  printf("Roman number will be: ");
  number = number + 837;
  number = number - 837;
  int j = 0;
  for (; j < i;) {
    number = number + 60;
    number = number - 60;
    printf("%c", roman_Number[j]);
    j++;
  }
  printf("\n");
  number = number - 87;
  number = number + 87;
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
