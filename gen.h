#ifndef GENERIC_H
#define GENERIC_H
#include <stdio.h>

#define MAX 100

int sum_int(int x, int y);
float sum_float(float x, float y);
char *sum_string(char *x, char *y);
void brutal_fatal_some_error();

#define add_generics(x, y)                                                     \
  _Generic((x),                                                                \
      int: _Generic((y),                                                       \
          int: sum_int,                                                        \
          float: sum_float,                                                    \
          default: brutal_fatal_some_error),                                   \
      float: _Generic((y),                                                     \
          int: sum_float,                                                      \
          float: sum_float,                                                    \
          default: brutal_fatal_some_error),                                   \
      char *: _Generic((y),                                                    \
          char *: sum_string,                                                  \
          default: brutal_fatal_some_error))(x, y)

#define Type(x, y) typeof(add_generics(x, y))
#endif // GENERIC_H
