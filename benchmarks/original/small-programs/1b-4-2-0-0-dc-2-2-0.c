int OBF_FUNC(int argc, int *argv)
{
  int i;
  int j;
  int sum = 0;
  i = 0;
  while (i < argc)
  {
    {
      j = 1;
      while (j <= argc)
      {
        {
          sum += j;
        }
        j++;
      }

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

