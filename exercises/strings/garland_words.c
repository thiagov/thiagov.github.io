// https://www.reddit.com/r/dailyprogrammer/comments/3d4fwj/20150713_challenge_223_easy_garland_words/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char word[100];
  printf("Entre com uma palavra: ");
  scanf("%s", word);

  int deg = 0;               // starting/deafult degree
  int fLetterIndex = 0;      // first compared letter
  int sLetterIndex = 1;      // second compared letter
  int len = strlen(word);    // word length

  while (sLetterIndex < len) {
    // If letters are the same, move first letter index forward
    // and increment degree, otherwise reset both
    if (word[fLetterIndex] == word[sLetterIndex]) {
      deg++;
      fLetterIndex++;
    }
    else {
      deg = 0;
      fLetterIndex = 0;
    }

    sLetterIndex++;
  }

  printf("Degree: %d\n", deg);
  return 0;
}
