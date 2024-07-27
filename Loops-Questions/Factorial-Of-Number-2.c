// Using For-loop:


#include <stdio.h>

int main(){
    int num, fact;

    printf("Enter Number: ");
    scanf("%d", &num);

    fact = 1;

    for(    ; num > 0; num--){
        fact = fact * num;
    };

    printf("%d", fact);

    return 0;
}