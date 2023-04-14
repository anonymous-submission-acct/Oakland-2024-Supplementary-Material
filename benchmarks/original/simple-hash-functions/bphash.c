#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int OBF_FUNC(char* str, unsigned int len)
{
   unsigned int hash = 0;
   unsigned int i    = 0;

   while (i < len) {
        hash = hash << 7 ^ (*str);
        str++;
        i++;
   }

   return hash;
}
/* End Of BP Hash Function */

int main(int argc, char* argv[]) {
  unsigned char *str = argv[1];
  
  unsigned int hash = OBF_FUNC(str, strlen(str));
  
  //printf("%x\n", hash);
  
  if (hash == 809267)
		printf("You win!\n");
  return hash;
}

