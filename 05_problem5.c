// Q5- Determine & output whether number N is even or odd

#include <stdio.h>

int main(){
    int N;
    printf("Enter the number N: ");
    scanf("%d", &N);

    if(N % 2 == 0){
        printf("%d is Even\n", N);
    }
    else{
        printf("%d is Odd\n", N);
    }


    return 0;
}