typedef void *__builtin_va_list;
#include <stdlib.h>
int mock_file_ptr = 0;
int close_ptr = 0;
char *mock_fopen(char *file) { return file; }
void mock_write(char *file, char *str, int len) {
  int i = 0;
  while ((mock_file_ptr < len) && (i < len)) {
    file[mock_file_ptr++] = str[i];
    i++;
  }
  if (mock_file_ptr < len) {
    file[mock_file_ptr++] = 0;
  }
}
void mock_fclose(char *str) {
  str[close_ptr++] = 'X';
  str[mock_file_ptr] = 0;
  mock_file_ptr = 0;
}
char mock_fgetc(char *file) {
  if (mock_file_ptr >= 10) {
    return -1;
  }
  char ch = file[mock_file_ptr];
  if (ch == 0) {
    return -1;
  }
  mock_file_ptr++;
  return ch;
}
void OBF_FUNC(char *str, unsigned int len) {
  char mock_file[10];
  char *rfile;
  char *wfile;
  wfile = mock_fopen(mock_file);
  if (wfile == 0) {
    printf("Error!");
    exit(1);
  }
  mock_write(wfile, str, len);
  mock_fclose(wfile);
  rfile = mock_fopen(mock_file);
  if (rfile == 0) {
    printf("Error!");
    exit(1);
  }
  char ch = mock_fgetc(rfile);
  int __RANDVAR__91170350692073532159__ = 0;
  while (__RANDVAR__91170350692073532159__ == 0) {
    if (ch != (-1)) {
      printf("%c", ch);
      ch = mock_fgetc(rfile);
    }
    if (ch != (-1)) {
      printf("%c", ch);
      ch = mock_fgetc(rfile);
    }
    if (ch != (-1)) {
      printf("%c", ch);
      ch = mock_fgetc(rfile);
    }
    while (ch != (-1)) {
      if (ch != (-1)) {
        printf("%c", ch);
        ch = mock_fgetc(rfile);
      }
      if (ch != (-1)) {
        printf("%c", ch);
        ch = mock_fgetc(rfile);
      }
      if (ch != (-1)) {
        printf("%c", ch);
        ch = mock_fgetc(rfile);
      }
    }
    __RANDVAR__91170350692073532159__ = 1;
  }
  printf("\n");
  mock_fclose(rfile);
}
int main(int argc, char *argv[]) {
  OBF_FUNC(argv[1], strlen(argv[1]));
  return 0;
}
// variants: loop-unroll
// expanded variants: loop-unroll
