#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int OBF_FUNC(char* str, unsigned int len)
{
   unsigned int hash = len;
   unsigned int i    = 0;

   while (i < len) {
        hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
        str++;
        i++;
   }
   return hash;
}
/* End Of DEK Hash Function */

int main(int argc, char* argv[]) {
  unsigned char *str = argv[1];
  
  unsigned int hash = OBF_FUNC(str, strlen(str));
  
  //printf("%x\n", hash);
  
  if (hash == 0xde4363b7)
		printf("You win!\n");
  return 0;
}

