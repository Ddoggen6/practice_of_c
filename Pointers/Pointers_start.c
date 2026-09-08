#include <stdio.h>

int main(){
  int number = 17;
  int *point_number;
  point_number = &number;

  char letter = 'X';
  char *point_char;
  point_char = &letter;

  float decimal = 7.8;
  float *point_float;
  point_float = &decimal;

  printf("First point: %p\n", point_number);
  printf("Second point: %p\n", point_char);
  printf("Third point: %p\n", point_float);
}
