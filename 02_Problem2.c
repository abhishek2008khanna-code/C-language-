//Q2- Find the sum of all the multiple of 3 or 5 below 1000.

// NUmbers like 3,5,6,9,10,12,........all the way upto 999. we have to add them together.

// CONDITION-- ( i % 3 ==0 || i % 5==0 )

#include <stdio.h>

int main(){
    int sum = 0;
    

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    
    printf("The sum of multiples of 3 or 5 below 1000 is %d\n", sum);

    return 0;
}