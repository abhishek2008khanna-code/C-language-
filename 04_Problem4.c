/* Q4- find the largest among three different numbers entered by the user. */

#include <stdio.h>

int main(){

    int a, b, c;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    printf("Enter the number c: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("\nThe largest number is %d", a);
    }
    else if(b>a && b>c){
        printf("\nThe largest number is %d", b);
    }
    else if(c>a && c>b){
        printf("\nThe largest number is %d", c);
    }


    return 0;
}