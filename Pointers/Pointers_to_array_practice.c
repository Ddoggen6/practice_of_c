#include <stdio.h>

int main(){
  int numbers[10] = {10, 17, 12, 15, 18, 29, 11, 43, 50, 55};
  int *point1;
  point1 = numbers;

    for(int i = 0; i < 10; i++){
    printf("Value: %d, Address: %p \n", *point1, (void *)point1);
    point1++;
  }

  point1 = numbers;
  printf("Now the value: %d, and the Address: %p, go back to be the first value and addres at numbers[0]", *point1, point1);



  return 0;
}
