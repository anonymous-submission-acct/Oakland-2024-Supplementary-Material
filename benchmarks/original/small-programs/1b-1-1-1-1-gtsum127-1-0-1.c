int OBF_FUNC(int argc, int *argv)
{
  int i;
  int sum = 0;
  i = 0;
  while (i < argv[0])
  {
    sum += i;
    i++;
  }

  if (sum > 8128)
    printf("Sum is: %d\n", sum);
  else
    printf("Sum is: %d\n", sum);
  return 0;
}

int main(int argc, char *argv[])
{
  return OBF_FUNC(argc, strtoul(argv[1]));
}

