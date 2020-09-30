// Lei Lin
// Systems Level Programming
// Work 03: Eul Up Your C Engine
// Due 09/30/20

// Problem 1
// Multiples of 3 and 5
// Find the sum of all the multiples of 3 or 5 below 1000.

#include<stdio.h>

int main() {
  int i;
  int ans = 0;
  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans = ans + i;
    }
  }
  printf("%i\n", ans);
  return 0;
}
