/*
Q6- The distance between two cities (in km) is input through the keyboard. 
    Write a program to convert and print this distance in meters, feet, inches and inches.
*/

#include <stdio.h>

int main(){
  // Input distance in km  
    float km, meters, feet, inches;
    printf("Enter the distance between two cities (in km): ");
    scanf("%f", &km);
 // Conversions
    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
 // Output
    printf("\nDistance in meters: %.2f", meters);
    printf("\nDistance in feet: %.2f", feet);
    printf("\nDistance in inches: %.2f", inches);

    return 0;
}





    
    
