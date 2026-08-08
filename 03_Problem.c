/*
Q3- If the marks obtained by a student in five different subjects are input through the keyboard, write a
program to find out the aggregate marks and percentage marks obtained by the student. Assume that the marks that 
can be obtained by a student in each subject is 100.
*/

#include <stdio.h>

int main(){
    // Input marks
    float marks1, marks2, marks3, marks4, marks5;
    float aggregate;
    float percentage;

    printf("Enter the marks1: ");
    scanf("%f", &marks1);
    printf("Enter the marks2: ");
    scanf("%f", &marks2);
    printf("Enter the marks3: ");
    scanf("%f", &marks3);
    printf("Enter the marks4: ");
    scanf("%f", &marks4);
    printf("Enter the marks5: ");
    scanf("%f", &marks5);

    // Calculat Aggregate

    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;

    // calculate Percentage

    percentage = ( aggregate * 100)/500;

    //Output result

    printf("\nAggregate Marks = %f", aggregate);
    printf("\nPercentage = %.2f", percentage);
    


    return 0;
}