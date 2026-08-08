// Q1- write a program to subtract two numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    c = a - b;
    printf("The value of c after subtracting a from b is %d", c);
    return 0;
}
