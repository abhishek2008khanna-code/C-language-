// Q7- Generate even numbers between 100 and 200.

#include <stdio.h>

int main(){
    printf("Even numbers between 100 and 200 are:\n");
    for (int i = 100; i <=200; i++)
    {
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}