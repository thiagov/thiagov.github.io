// https://www.reddit.com/r/dailyprogrammer/comments/43ouxy/20160201_challenge_252_easy_sailors_and_monkeys/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int nSailors, i, tmp;
  int numCocos = 0;
  int isSolution = 0;

  printf("Numero de marinheiros: ");
  scanf("%d", &nSailors);

  while (!isSolution) {
    numCocos++;
    tmp = numCocos;
    for (i = 1; i <= nSailors; i++) {
      tmp--;
      if (tmp%nSailors != 0) break;
      tmp = (tmp/nSailors)*(nSailors-1);
    }
    if (tmp%nSailors == 0) isSolution = 1;
    else isSolution = 0;
  }

  printf("Existiam %d cocos!\n", numCocos);

  return 0;
}
