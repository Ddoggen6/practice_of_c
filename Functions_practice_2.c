#include <stdio.h>

float convertTemperature(float celsius, char unit) {
    if (unit == 'F') {
        return (celsius * 9.0/5.0) + 32.0;
    } else if (unit == 'K') {
        return celsius + 273.15;
    } else {
        return -1;
    }
}

int main() {
    float celsius;
    char unit;


  printf("Enter youre temperature and the unit to convert: ");
    
    scanf("%f", &celsius);
    scanf(" %c", &unit);
    
    float result = convertTemperature(celsius, unit);
    
    if (result == -1) {
        printf("Invalid unit\n");
    } else {
        printf("Converted temperature: %.2f\n", result);
    }
    
    return 0;
}
