/* 
Q5- WRITE A PROGRAM TO DETERMINE WHETER A 
CHARACTER EXECUTED BY THE USER IS LOWERCASE 
OR NOT. 
*/


#include <stdio.h>

int main(){
    char ch = 'a';
    printf("The characcter is %c", ch);
    printf("The value of character is %d\n", ch);

    if(ch >=97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character not lowercase\n");
    }
    return 0;
}