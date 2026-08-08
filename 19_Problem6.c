/*
Q6- Write a program to calculate the 
fatorial of a given number using a for loop.
*/
#include <stdio.h>

int main(){
    int n;
    int factorial = 1; // Start with 1 because factorial is a product

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        factorial *= i; // multiply factorial by i
    }
    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}
