// Q9- Implement 8 using other types of loops.

#include <stdio.h>

int main()
{
    int n = 4; 
    int prime = 0; 

    
    int i = 2;  
    while (i < n)
    {   

    
        if (n % i == 0 && n!=2)
        {
            prime = 1; 
            break; 
        }
        i++;
    }
    

    
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