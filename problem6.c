// Lei Lin
// Systems Level Programming
// Work 03: Eul Up Your C Engine
// Due 09/30/20

// Problem 6
// Sum square difference
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<stdio.h>

int main() {
  int i;
  int sum1 = 0;
  int sum2 = 0;
  for (i = 1; i <= 100; i++) {
    sum1 += i;
    sum2 += (i * i);
  }
  int ans = sum1 * sum1 - sum2;
  printf("%i\n", ans);
  return 0;
}
