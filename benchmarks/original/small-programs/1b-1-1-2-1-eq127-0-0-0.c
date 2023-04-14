int OBF_FUNC(int argc, int *argv)
{
  if (argc < 2)
  {
    printf("Usage: program-name argument\n");
    return 1;
  }
  unsigned char c = argv[0];
  if (c == 127)
    printf("win\n");
  else
    printf("lose\n");
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

