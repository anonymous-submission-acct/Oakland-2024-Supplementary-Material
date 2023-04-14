int OBF_FUNC(int argc, int *argv)
{
  int i;
  int sum = 0;
  i = 0;
  while (i < argc)
  {
    {
      if (sum < 127)
      {
        sum += 64;
      }
      sum += i;
    }
    i++;
  }

  printf("Sum is: %d\n", sum);
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

