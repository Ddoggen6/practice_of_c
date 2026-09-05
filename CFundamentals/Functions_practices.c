#include <stdio.h>

int sums(int a, int b){
    return a + b;
}



int main(){

  int a, b;

  printf("What number do you want to sume?(only intergers): \n");
  printf("Number one: ");
  scanf("%d", &a);
  printf("Number two: ");
  scanf("%d", &b);

  int result = sums(a, b);

  printf("Youre result is: %d", result);
 return 0;
}
