#include <stdio.h>

int main(){

    int num, fact;

    printf("Enter Number: ");
    scanf("%d", &num);

    fact = 1;

    while(num > 0){
        fact = fact * num;
        num--;
    }

    printf("%d", fact);

    return 0;
}