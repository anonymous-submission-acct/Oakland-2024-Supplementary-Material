typedef void *__builtin_va_list;
#include <stdlib.h>
int OBF_FUNC(char str1[], char str2[])
{
  int i = 0;
  int flag = 0;
  int __RANDVAR__29430421563799206589__ = __RANDVAR__29430421563799206589__ + 1;
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if ((rand() % 10) >= 5)
      break;
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  while ((str1[i] != '\0') && (str2[i] != '\0')) {
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    int __RANDVAR__63224444322815174826__ = 202;
    i++;
  }
  __RANDVAR__29430421563799206589__ = __RANDVAR__29430421563799206589__ - 724;
  __RANDVAR__29430421563799206589__ = __RANDVAR__29430421563799206589__ + 724;
  if (((flag == 0) && (str1[i] == '\0')) && (str2[i] == '\0'))
    return 1;
  else
    return 0;
}
int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 1;
  }
  int compare;
  int i;
  char *str1 = argv[1];
  char *str2 = argv[2];
  compare = OBF_FUNC(str1, str2);
  if (compare == 1)
    printf("Both strings are equal.");
  else
    printf("Both strings are not equal");
  return 0;
}
// variants: irrelevant-code, loop-fission, loop-fission
// expanded variants: irrelevant-code, loop-fission, loop-fission
