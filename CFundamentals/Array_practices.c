#include <stdio.h>

int main(){
int numbers[10];



  for(int i = 0; i < 10; i++){
    printf("Enter a total of 10 numbers: \n");
    scanf("%d", &numbers[i]);

  }

for (int i = 0; i < 10; i++) {
    printf("Number %d: %d\n", i + 1, numbers[i]);
}



  int sum = 0;
  for(int i = 0; i < 10; i++){
    sum += numbers[i];
  }
  
  printf("%d\n", sum);

  int size = sizeof(numbers) / sizeof(numbers[0]);
  int largest = numbers[0];

      for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

  int smallest = numbers[0];
        for (int i = 1; i < size; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

printf("Largest: %d\n", largest);
printf("Smallest: %d\n", smallest);

      int target;
    int found = 0;
  printf("What number do you want to find?: ");
  scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Number found!\n");
    } else {
        printf("Number not found.\n");
    }

   float average = (float)sum / size;
    printf("Average: %.2f\n", average);
  return 0;

}
