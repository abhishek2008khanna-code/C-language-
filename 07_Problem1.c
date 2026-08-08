/* 
Q1- WRITE A C PROGRAM TO CALCULATE AREA OF A 
RECTANGLE:
a: Using hard coded inputs.
b: Using inputs supplied by the user.
*/

// A:

#include <stdio.h>

int main()
{
    int length = 3; // hardcoded values
    int breadth = 6;
    printf("The area of this rectangle is %d", length * breadth);
    return 0;
}

// B:

#include <stdio.h>

int main()
{

    int length, breadth;

    printf("Enter length\n");  // user input value
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d", length * breadth);

    return 0;
}