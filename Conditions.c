#include <stdio.h>

int main() {
 int grade;
 printf("What its youre final note?: ");
scanf("%d", &grade);

if (grade >= 90) {
    printf("You are grade A");

} else if (grade <= 79) {
    printf("You are grade F");

} else {
    printf("You are grade B");
}



return 0;
}