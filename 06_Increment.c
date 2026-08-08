#include <stdio.h>

int main(){
    int i = 5; // 5
    printf("the value of i is %d\n", i);
    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    i +=2; // Same as i = i + 2

    // i++ prints i first and then increments i (post increment operator)
    // ++i increments i first and then prints i (post increment operator)
    return 0;
}