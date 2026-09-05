#include <stdio.h>

int findlargest( int a, int b){
  if (a > b) {
   return a;
  } else if (b > a){
   return b;
  } else {
    printf("Buddy, you dont get the name of the program :v");
    return a;
  }

}

int main(){
  int a, b;

  printf("Enter the numbers that you want to inspect wich one is the most largest:");
  scanf("%d %d", &a, &b);

  int result = findlargest(a, b);
  printf("%d", result);
}
