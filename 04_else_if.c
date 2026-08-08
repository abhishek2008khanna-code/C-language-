// Using if-else reduces indents.
// The last"else" is optional.
// Also there can be any number of "else-if".
// Last else is executed only if all conditions fail.


#include <stdio.h>

int main(){
    int age = 17;
    if(age>60){
        printf("You can drive and you are a senior citizen\n");

    }
    else if(age>18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive");
    }

    return 0;

}
