// #include <stdio.h>

// int main(){
//     int a = 1;
//     int b = 2;

//     int c = a + b;
//     printf("The sum is %d\n", c);

//     return 0;
// }

// CONVERTING THE ABOVE CODE INTO A FINCTION.

#include <stdio.h>

// Function Prototype
int sum(int, int);

// Funtion Definition
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);

    sum(a, b); // Function Call

    return 0;
}
