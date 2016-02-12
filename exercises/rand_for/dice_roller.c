// https://www.reddit.com/r/dailyprogrammer/comments/10pf0j/9302012_challenge_102_easy_dice_roller/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int nDices, diceVal, modifier;
  printf("Forneca os valores a rolar: ");
  scanf("%dd%d+%d", &nDices, &diceVal, &modifier);

  int i;
  int result = 0, x;
  for (i = 0; i < nDices; i++) {
    x = (rand()%diceVal)+1;
    printf("%d\n", x);
    result += x;
  }
  result += modifier;
  printf("Numero obtido: %d\n", result);
  return 0;
}
