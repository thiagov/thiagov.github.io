// https://www.reddit.com/r/dailyprogrammer/comments/45w6ad/20160216_challenge_254_easy_atbash_cipher/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("input.txt", "r");
  char c;
  while((c = fgetc(fp)) != EOF) {
    if((c >= 'a' && c <= 'z') )
      printf("%c", 'z' - (c - 'a'));
    else if(c >= 'A' && c <= 'Z')
      printf("%c", 'Z' - (c - 'A'));
    else
      printf("%c", c);
  }
  return 0;
}
