#include <stdio.h>

int fact(int x){

    int fact = 1;

    for(int i = x; i > 0; i--){
        fact = fact * i;
    }

    return fact;
}

int main(){

    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Factorial Of %d is : %d",num, fact(num));

    return 0;
}