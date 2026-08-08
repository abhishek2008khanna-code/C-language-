/* 
Q3- Write a program to sum first ten 
natural numbers using while loop
*/

#include <stdio.h>

int main(){
    int i = 1; // Start from 1 (first natural number)
    int sum = 0; // Initialize sum to 0

    while(i<=10){ // Loop runs until i = 10
        sum += i; // Add i to sum
        i++; // Increment i
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    

    return 0;
}