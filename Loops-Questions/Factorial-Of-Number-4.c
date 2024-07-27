#include <stdio.h>

int main(){

    int num, fact;

    printf("Enter Number: ");
    scanf("%d", &num);

    fact = 1;

    if(num == 0){
        printf("Factorial Doesn't Found");
    }
    else{
        do{
            fact = fact * num;
            num--;
        }
        while(num > 0);
    }

    printf("%d", fact);

    return 0;
}