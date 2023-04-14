#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int OBF_FUNC(char* str, unsigned int len)
{
   const unsigned int fnv_prime = 0x811C9DC5;
   unsigned int hash      = 0;
   unsigned int i         = 0;

   while (i < len) {
        hash *= fnv_prime;
      hash ^= (*str);
        str++;
        i++;
   }

   return hash;
}
/* End Of FNV Hash Function */

int main(int argc, char* argv[]) {
  unsigned char *str = argv[1];
  
  unsigned int hash = OBF_FUNC(str, strlen(str));
  
  //printf("%x\n", hash);
  
  if (hash == 0xee3c81d4)
		printf("You win!\n");
  return 0;
}

