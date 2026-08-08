// Q6- Calculate the remainder, and the quotient of two given numbers.

#include <stdio.h>

int main()
{

    int dividend, divisor;
    float quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // CALCULATION

    quotient = dividend / divisor;    // '/' gives only quotient in integer not in decimals.
    remainder = dividend % divisor;   // '%' gives the remainder

    printf("Quotient = %f\n", quotient);
    printf("REmainder = %f\n", remainder);

    return 0;
}
