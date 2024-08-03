#include <stdio.h>

int func(int num, int fact){

    if(num <= 0){
        return fact;
    }
    else{
        fact = fact * num;
        num--;
        return func(num, fact);
    }
}

int main(){
    int num, fact;

    printf("Enter Number: ");
    scanf("%d", &num);

    fact = 1;

    if(num < 0){
        printf("Factorail Is not available for Negative Numbers");
    }
    else if(num == 0 || num == 1){
        printf("The Factorial Of %d is : %d\n", num, fact);
    }
    else{
        printf("The Factorial Of %d is : %d\n", num, func(num,fact));
    }
}