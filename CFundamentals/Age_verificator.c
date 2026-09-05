#include <stdio.h>
int main() {
    int age, height;
    printf("How old and tall are you?:");
    scanf("%d", &age);
    scanf("%d", &height);

    if(age < 15 && height == 150){
       printf("You are tall for youre age");
    } else if(age >15 && height < 150){
    printf("You are a bit short"); 
    } else {
      printf("you are tall buddy");
    }
} 
