int OBF_FUNC(int argc, int *argv)
{
  int i;
  int j;
  int sum = 0;
  const char *str = argv[1];
  register const char *s;
  register const char *t;
  i = 0;
  while (i < 16)
  {
    {
      sum += i;
    }
    i++;
  }

  t = str;
  while (*t)
  {
    {
      sum += *t;
    }
    ++t;
  }

  printf("Sum is: %d\n", sum);
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

