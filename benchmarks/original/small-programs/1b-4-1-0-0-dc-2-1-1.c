int OBF_FUNC(int argc, int *argv)
{
  int i;
  int sum = 0;
  i = 0;
  while (i < argc)
  {
    {
      sum += i;
    }
    i++;
  }

  i = 1;
  while (i <= argv[0])
  {
    {
      sum += sum;
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

