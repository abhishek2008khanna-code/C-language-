// Q1- What will be the output of this program:

#include <stdio.h>

int main(){
    int a = 10;
    if (a = 11)
       printf("I am 11");

    else
        printf("I am not 11"); 
      

    return 0;
}

// REASON- It is because only single '=' is used instead of '=='.
// '==' means equal to.
// '=' is the assignment operator used to store a value in a variable.