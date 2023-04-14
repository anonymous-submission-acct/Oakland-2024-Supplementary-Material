#include <time.h>
#include <stdlib.h>
#include <string.h>

#define EOF -1
#define NULL 0

int mock_file_ptr = 0;
int close_ptr = 0;

char* mock_fopen(char* file)
{
   return file;
}

void mock_write(char* file, char* str, int len)
{
   int i = 0;
   while (mock_file_ptr < len && i < len) {
      file[mock_file_ptr++] = str[i];
      i++;
   }
   if (mock_file_ptr < len) {
      file[mock_file_ptr++] = NULL;
   }
}

void mock_fclose(char* str)
{
   str[close_ptr++] = 'X';
   str[mock_file_ptr] = NULL;
   mock_file_ptr = 0;
}

char mock_fgetc(char* file)
{
   if (mock_file_ptr >= 10) {
      return EOF;
   }
   char ch = file[mock_file_ptr];
   if (ch == NULL) {
      return EOF;
   }
   mock_file_ptr++;
   return ch;
}

void OBF_FUNC(char* str, unsigned int len)
{
   char mock_file[10];

   char *rfile;
   char *wfile;
   wfile=mock_fopen(mock_file);
   if(wfile==NULL){
      printf("Error!");
      exit(1);
   }

   mock_write(wfile, str, len);
   mock_fclose(wfile);

   rfile = mock_fopen(mock_file);
   if(rfile==NULL){
       printf("Error!");
       exit(1);
   }
   char ch = mock_fgetc(rfile);
   while(ch != EOF){
      printf("%c", ch);
      ch = mock_fgetc(rfile);
   }
   printf("\n");
   mock_fclose(rfile);
}

int main(int argc, char* argv[])
{
   OBF_FUNC(argv[1], strlen(argv[1]));
   
   return 0;
}

