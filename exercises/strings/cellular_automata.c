// https://www.reddit.com/r/dailyprogrammer/comments/3jz8tt/20150907_challenge_213_easy_cellular_automata

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char entrada[300], next_iter[300];
  int num_steps = 25;
  int i, j, left, right;

  printf("Forneca a string inicial: ");
  scanf("%s", entrada);

  int entrada_size = strlen(entrada);
  for (j = 0; j < entrada_size; j++) {
    if (entrada[j] == '0') printf(" ");
    else printf("x");
  }
  printf("\n");

  for (i = 0; i < 25; i++) {
    for (j = 0; j < entrada_size; j++) {
      left = j > 0 ? (entrada[j-1] - '0') :  (entrada[entrada_size-1] -'0');
      right = (j == entrada_size - 1) ? (entrada[0] - '0') : (entrada[j+1] - '0');
      next_iter[j] = left == right ? '0' : '1';
    }
    strcpy(entrada, next_iter);
    for (j = 0; j < entrada_size; j++) {
      if (entrada[j] == '0') printf(" ");
      else printf("x");
    }
    printf("\n");
  }
  return 0;
}
