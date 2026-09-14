#include "gen.h"
#include <stdio.h>

int main() {
  int x = 20 + 20 + 20;
  float y = 7.67676767;

  char *word = "gene";
  char *word2 = "rics";

  Type(x, y) result = add_generics(x, y);
  Type(word, word2) result2 = add_generics(word, word2);

  printf("result: %f\n", result);
  printf("result str: %s", result2);
  return 0;
}
