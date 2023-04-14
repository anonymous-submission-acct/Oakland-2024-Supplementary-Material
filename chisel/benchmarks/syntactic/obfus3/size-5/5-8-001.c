typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  localStaticState[0UL] = (input * 624914246UL) * 1380279005U;
  localStaticState[1UL] = input + 582783585UL;
  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
  localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
  if (!((localStaticState[1UL] >> 1U) & 1)) {
    if ((localStaticState[0UL] >> 1U) & 1) {
      localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] * localStaticState[1UL];
      localStaticState[1UL] = localStaticState[((int)localStaticState[0UL]) % 2UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
    }
  }
  return (localStaticState[0UL] - localStaticState[1UL]) * 727051838U;
}
int main(int argc, char **argv) {
  unsigned int a;
  a = strtol(argv[1], 0L, 10);
  return OBF_FUNC(a);
}
// variants: loop-fission, loop-unroll, loop-unroll
// expanded variants: loop-fission, loop-unroll, loop-unroll
