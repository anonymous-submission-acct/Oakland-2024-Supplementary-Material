typedef void *__builtin_va_list;
#include <stdlib.h>
unsigned int OBF_FUNC(char *str, unsigned int len)
{ return (unsigned int)(*str); }
int main(int argc, char *argv[]) {
  unsigned char *str = argv[1];
  unsigned int hash = OBF_FUNC(str, strlen(str));
  if (hash == 0xbd9282b2)
    printf("You win!\n");
  return 0;
}
// variants: irrelevant-code
// expanded variants: irrelevant-code
