#include <stdio.h>

int main () {
    int number = 10;
    int prefixResult, postfixResult;
    prefixResult = ++number;
    postfixResult = number++;

    printf("Number: %d\n", number);
    printf("Prefix: %d\n", prefixResult);
    printf("Postfix: %d\n", postfixResult);
    

}