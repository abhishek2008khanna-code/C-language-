/*
Q4- Write a program to implement program 5
using 'for' & 'do-while' loop.
*/

// USING FOR LOOP.

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}

// USING DO WHILE LOOP.

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    do{
    
        sum += i; // add current 1
        i++; // move to next number 
    } 
    while (i <= 10);
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}
