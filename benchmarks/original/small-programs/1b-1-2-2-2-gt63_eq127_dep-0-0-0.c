int OBF_FUNC(int argc, int *argv)
{
  unsigned char c = argv[0];
  if (c > 63)
  {
    printf("if-1-win ");
    unsigned char x = (c / 3) * 2;
    if (x == 127)
      printf("if-2-win\n");
    else
      printf("if-2-lose\n");
  }
  else
  {
    printf("if-1-lose\n");
  }
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

