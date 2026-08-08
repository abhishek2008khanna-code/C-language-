#include <stdio.h>
int sum(int, int);

int sum (int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;
    
    sum(a,b); // Function Call 
    
    return 0;
}

