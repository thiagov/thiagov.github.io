// https://www.reddit.com/r/dailyprogrammer/comments/38yy9s/20150608_challenge_218_easy_making_numbers/

#include <stdio.h>
#include <stdlib.h>

int getReverse(int x) {
  int reverse = 0;
  while (x != 0) {
    reverse = reverse*10 + (x%10);
    x = x/10;
  }
  return reverse;
}

int isPalindromic(int num) {
  int reverse = getReverse(num);
  if (num == reverse) return 1;
  else return 0;
}

int main() {
  int num, steps = 0;
  printf("Entre com um numero: ");
  scanf("%d", &num);

  while (!isPalindromic(num)) {
    num = num + getReverse(num);
    steps++;
  }

  printf("Foram necessarios %d passos. Numero formado: %d.\n", steps, num);
  return 0;
}
