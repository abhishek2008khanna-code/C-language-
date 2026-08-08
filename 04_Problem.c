/*
Q4- Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.
*/

#include <stdio.h>

int main()
{
    float fahrenheit, centigrade;
    printf("Enter the temperature of the city (in fahrenheit): ");
    scanf("%f", &fahrenheit);

    // Conversion,

    centigrade = (fahrenheit - 32) * 5.0 / 9.0;

    printf("The temperature of city in Centigrade unit is %.2f", centigrade);

    return 0;
}