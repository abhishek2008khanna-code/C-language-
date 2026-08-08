/* 
Q3- WRITE A PROGRAM TO CONVERT CELSIUS TO 
FAHRENHIET. 
*/

#include <stdio.h>

int main()
{

    float Celsius, Fahrenhiet;

    printf("Enter the temperature in Celsius:\n");
    scanf("%f", &Celsius);

    Fahrenhiet = (Celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenhiet is %.2f\n", Fahrenhiet);

    return 0;
}