//Q8- Find all the roots of quadratic equation.

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, discriminant, realPart, imaginaryPart;

    printf("Enter the coefficinet of a: ");
    scanf("%f", &a);

    printf("Enter the coefficinet of b: ");
    scanf("%f", &b);

    printf("Enter the coefficinet of c: ");
    scanf("%f", &c);

    //CALCULATION

    discriminant = b*b - 4*a*c;

    if (discriminant > 0){
        // Two distcinct real roots
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0){
        // one real root (both equal)
        float root = -b / (2*a);
        printf("Roots are equal. \n");
        printf("Root = %.2f\n", root);
    }
    else{
        // complex roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different. \n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart); // Here 'i' is not a format specifier. Rather it is used as a literal character.
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);

    }
    return 0;
}
        

    


