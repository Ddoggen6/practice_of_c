#include <stdio.h>
int main () {
    int i = 1;
    printf("Enter a number greater than 0 but lower than 100: ");
    scanf("%d", &i);

    if (i <= 0 || i >= 100) {
    printf("Invalid number.\n");
    return 1;
}

    do{
        printf("%d ", i);
        i++;
    } while(i < 100 && i > 0);

    return 0;
}