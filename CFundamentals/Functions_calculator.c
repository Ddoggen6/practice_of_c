#include <stdio.h>


int add(int a, int b){
    return a + b;
}



int substract(int a, int b){
    return a - b;
}



int multiply(int a, int b){
    return a * b;
}


int divide(int a, int b){
    return a / b;

}

int main() {
    
    int a, b;
    char op;
  
    printf("Enter a character and the operation that you want to do: ");
    scanf("%d %d %c", &a, &b, &op);

    if(op == '+'){
      printf("%d", add(a, b));
    } else if (op == '-'){
        printf("%d", substract(a, b));
    } else if (op == '*'){
        printf("%d", multiply(a, b));

    } else if (op == '/' && b == 0){
        printf("Invalid input");
    }
     else if (op == '/'){
        printf("%d", divide(a, b));
    } else {
        printf("Invalid input");
    }

    return 0;
}

