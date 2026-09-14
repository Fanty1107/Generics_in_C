#include "gen.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_int(int x, int y) { return x + y; }

float sum_float(float x, float y) { return x + y; }

char *sum_string(char *x, char *y) {
  size_t total = strlen(x) + strlen(y) + 1;

  char *buffer = (char *)malloc(total);

  if (buffer == NULL) {
    printf("buy more RAM lol");
    return NULL;
  }

  snprintf(buffer, total, "%s%s", x, y);
  return buffer;
}
