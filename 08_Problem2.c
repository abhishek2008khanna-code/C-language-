/* 
Q2- CALCULATE THE AREA OF CIRCLE AND MODIFY THE 
SAME PROGRAM TO CALCULATE THE VOLUME OF A CYLINDER 
GIVEN ITS RADIUS AND HEIGHT. 
*/

#include <stdio.h>

int main() {
    int radius;
    float area;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;  // πr²

    printf("The area of the circle is %.2f\n", area);

    return 0;
}

// FOR CYLINDER: {vol = 3.14 x r*r x h}

#include <stdio.h>

int main(){

    int radius = 2;
    int height = 3;

    printf("The volume of cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius*height);
    return 0;

    



}