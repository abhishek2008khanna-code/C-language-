// Q10- Compute BMI.

#include <stdio.h>

int main(){
    float mass, height, BMI;
    printf("Enter the mass in kg: ");
    scanf("%f", &mass);
    printf("Enter the height in meter: ");
    scanf("%f", &height);

    // Calculation

    BMI = mass/ (height*height);

    printf("\nYour BMI is: %.2f\n", BMI);

    // Classification

    if (BMI < 18.5){
        printf("Underweight\n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("Category: Normal weight\n");
    } else if (BMI >= 25 && BMI <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    // // Comparison Chart
    // printf("\n--- BMI Comparison Chart ---\n");
    // printf("Underweight : < 18.5\n");
    // printf("Normal      : 18.5 - 24.9\n");
    // printf("Overweight  : 25 - 29.9\n");
    // printf("Obese       : >= 30\n");

    

    return 0;
}