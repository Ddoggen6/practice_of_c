#include <stdio.h>

int checkEligibility(float gpa, int credithours, int hasviolations, int hasrecommendations) {
    if(gpa >= 3.5 && credithours == 60){
        return 1;
    } else if(hasrecommendations == 1 && credithours == 60){
        return 1;
    } else if (hasviolations >= 1){
        return 0;
    } else if (gpa <= 3.4 && credithours < 60){
        return 0;
    }
    // Return 1 if eligible, 0 if not eligible
}

int main() {
    float gpa;
    int credithours, hasviolations, hasrecommendations;
    
    printf("Enter youre gpa, credithours, if you have any school violation and if you have any recomendation: ");
    scanf("%f", &gpa);
    scanf("%d", &credithours);
    scanf("%d", &hasviolations);
    scanf("%d", &hasrecommendations);
    
    // Check eligibility
    if (checkEligibility(gpa, credithours, hasviolations, hasrecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }


  printf("gpa: %.2f\n", gpa);
  printf("Credithours: %d\n", credithours);
  printf("Hasviolations: %d\n", hasviolations);
  printf("Has any recomendation: %d\n", hasrecommendations);
    
    return 0;
}
