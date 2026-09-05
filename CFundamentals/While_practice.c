#include <stdio.h>

int main(){
    int age;
    printf("What is youre age?");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult");
    
    }
    else {
    printf("Go to study kid");
    }
     while (age >= 18 ) {
        printf("Enjoy partys");
     }
}