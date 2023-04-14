#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int OBF_FUNC(char* str, unsigned int len)
{
   unsigned int hash = 1315423911;
   unsigned int i    = 0;

   while (i < len) {
        hash ^= ((hash << 5) + (*str) + (hash >> 2));
        str++;
        i++;
   }

   return hash;
}
/* End Of JS Hash Function */

int main(int argc, char* argv[]) {
  unsigned char *str = argv[1];
  
  unsigned int hash = OBF_FUNC(str, strlen(str));
  
  //printf("%x\n", hash);
  
  if (hash == 0x120bdadd)
		printf("You win!\n");
  return 0;
}

