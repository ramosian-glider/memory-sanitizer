#include "msandr_test_so.h"

void dso_memfill(char* s, unsigned n) {
  for (unsigned i = 0; i < n; ++i)
    s[i] = i;
}

int dso_callfn(int (*fn)(void)) {
  volatile int x = fn();
  return x;
}

int dso_callfn1(int (*fn)(long long, long long, long long)) {
  volatile int x = fn(1, 2, 3);
  return x;
}
