// https://www.reddit.com/r/dailyprogrammer/comments/1qdw40/111113_challenge_141_easy_monty_hall_simulation/
//
// https://rosettacode.org/wiki/Monty_Hall_problem#C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char *argv[]) {
  int times, i;
  int door, reveal, choice;
  double tactic1 = 0, tactic2 = 0;

  srand(time(NULL));   /* random seed from time */
  scanf("%d", &times); /* grab number from STDIN */

  for (i = 0; i < times; i++) {
    /* generate choice and car door */
    door   = rand() % 3;
    choice = rand() % 3;
    /* first tactic */
    tactic1 += (door == choice ? 1 : 0);
    /* second tactic */
    //reveal = door == choice ? (door + 1) % 3 : 3 - door - choice;
    //choice = 3 - choice - reveal;
    //tactic2 += (door == choice ? 1 : 0);
    tactic2 += (door != choice ? 1: 0);
  }

  /* print results */
  printf("Tactic 1: %.1f winning chance\n", (tactic1/times) * 100);
  printf("Tactic 2: %.1f winning chance\n", (tactic2/times) * 100);

  return 0;
}
