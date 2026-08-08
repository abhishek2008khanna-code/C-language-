/* 
Q5- Ramesh's basic salary is given by the user. His Dearness Allowence is 40% of basic salary, 
    and house rent allowence is 20% of basic salary. Write a program to calculate his gross salary.

*/




#include <stdio.h>

int main(){
    float Basic, DA, HRA, gross;
    printf("Enter the Basic salary: ");
    scanf("%f", &Basic);
    
    DA = 0.4 * Basic;
    HRA = 0.2 * Basic;
    gross = DA + HRA + Basic;
    
    printf("Dearness Allowence = %.2f\n", DA);
    printf("House Rent Alloweence = %.2f\n", HRA);
    printf("Gross Salary = %.2f\n", gross);
    
    return 0;
}