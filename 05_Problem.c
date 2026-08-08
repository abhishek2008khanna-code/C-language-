/*
Q5- The length & bredth of a rectangle & radius of a circle are input through the keyboard. Write a program to calculate
    the area & perimeter of the rectangle and the area and circumference of the circle
*/

#include <stdio.h>

int main()
{
    float length, breadth, radius, perimeter, rectArea, circleArea, circumference;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Formula,

    perimeter = 2 * (length + breadth);
    rectArea = length * breadth;
    circleArea = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("\nPerimeter of rectangle is %.2f", perimeter);          // 10
    printf("\nArea of rectangle is %.2f", rectArea);                // 6
    printf("\nArea of circle is %.2f", circleArea);                 // 28.26
    printf("\nCircumference of the circle is %.2f", circumference); // 18.84

    return 0;
}

// l = 3
// b = 2
// r = 3
