// Q4- WRITE A PROGRAM TO FIND WHETHER A YEAR ENTERED BY THE USER IS A LEEP YEAR OR NOT.
// TAKE YEARS AS AN INPUT FROM THE USER. 

#include <stdio.h>

int main(){ 
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);
    
    if(year %4==0 && year%100!=0 || year %400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    
    }

    return 0;
}