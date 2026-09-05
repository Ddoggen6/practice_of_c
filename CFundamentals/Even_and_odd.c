#include <stdio.h>

int largestnumber(int a, int b){
  if(a > b){
    return a;
  } else if(b > a){
    return b;
  } else{
   return a;
  }
}

void even_or_odd(int number){
  if(number % 2 == 0){
    printf("Even");
  } else {
    printf("Odd");
  }
}



int main(){
int a, b;


  printf("Enter two numbers");
  scanf("%d %d", &a, &b);

  int result = largestnumber(a, b);

  


  printf("largestnumber: %d\n", result);
  printf("Even or odd: ");
  even_or_odd(result);



}
