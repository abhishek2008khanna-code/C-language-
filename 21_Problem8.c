/*
Q8- Write a program to check whether a given
number is prime or not using loop.
*/

#include <stdio.h>

int main()
{
    int n = 11; // The number we want to check
    int prime = 0; // Flag variable (0 = prime, 1 = not prime)

    // Loop from 2 to n-1
    for (int i = 2; i < n; i++)
    {   

    // If n is divisible by i, then its not prime
        if (n % i == 0 && n!=2)
        {
            prime = 1; // Mark as not prime
            break; // Exit loop early
        }
    }
    

    // After loop, check the flag
    if (prime)
    {
        printf("%d is not prime\n", n);
    }

    else
    {
        printf("%d is a prime\n", n);
    }

    return 0;
}