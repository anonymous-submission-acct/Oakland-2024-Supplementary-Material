typedef void *__builtin_va_list;
unsigned int OBF_FUNC(unsigned int input) {
  unsigned int localStaticState[2];
  int __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ + 1;
  localStaticState[0UL] = (input * 624914246UL) * 1380279005U;
  localStaticState[1UL] = input + 582783585UL;
  __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ - 157;
  __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ + 157;
  localStaticState[((int)localStaticState[0UL]) % 2UL] = localStaticState[1UL] + localStaticState[((int)localStaticState[0UL]) % 2UL];
  int __RANDVAR__50204733608073252629__ = __RANDVAR__50204733608073252629__ + 1;
  if (__RANDVAR__50204733608073252629__ < (381 * 68)) {
    __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ - 650;
    __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ + 650;
  } else {
    if (__RANDVAR__8085577317158231574__ < ((__RANDVAR__8085577317158231574__ - 44) - 341)) {
      int __RANDVAR__80852503479280339418__ = __RANDVAR__8085577317158231574__ + (391 + __RANDVAR__8085577317158231574__);
    } else {
      __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ + 891;
      __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ - 891;
    }
  }
  localStaticState[1UL] = localStaticState[0UL] + localStaticState[0UL];
  __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ + 685;
  __RANDVAR__8085577317158231574__ = __RANDVAR__8085577317158231574__ - 685;
  if (!((localStaticState[1UL] >> 1U) & 1)) {
    int __RANDVAR__46063504957503154173__ = 626;
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
// variants: irrelevant-code, loop-unroll, loop-fission
// expanded variants: irrelevant-code, loop-unroll, loop-fission
