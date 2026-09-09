#include <stdio.h>

int main() {
   int scores[8] = {45, 78, 92, 63, 87, 34, 91, 56};
   int *start_ptr, *end_ptr;
   start_ptr = scores;
   end_ptr = scores + 7;

   int *current_ptr = scores;

   while (current_ptr <= end_ptr){
    if(*current_ptr >= 60 && *current_ptr <= 90){
        printf("Value %d is in range\n", *current_ptr);
    } else if(*current_ptr <= 59){
        printf("Value %d is out of range\n", *current_ptr);
    } else{
        printf("Value %d is out of range\n", *current_ptr);
    }
    current_ptr++;
   }
    if(current_ptr > end_ptr){
        printf("Traversal complete\n");
    }
    return 0;
}
