int OBF_FUNC(int argc, int *argv)
{
  unsigned char c = argv[0];
  if (argc > 1)
  {
    if (c == 127)
      printf("win\n");
    else
      printf("lose\n");
  }
  else
  {
    printf("Usage: program-name character\n");
  }
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

