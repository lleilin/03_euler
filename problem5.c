// Lei Lin
// Systems Level Programming
// Work 03: Eul Up Your C Engine
// Due 09/30/20

// Problem 5
// Smallest multiple
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


#include<stdio.h>

int modsum(int a) {
  int count;
  int sum = 0;
  for (count = 1; count < 20; count++) {
    sum += (a % count);
  }
  return sum;
}

int main() {
  int ans = 1;
  while (modsum(ans)) {
    ans++;
  }
  printf("%i\n", ans);
  return 0;
}
