// Using Goto-loop:

#include <stdio.h>

int main(){

    int num, fact, otpt;

    fact = 1;
    
    printf("Enter Number: ");
    scanf("%d", &num);

    Algor:
    if(num > 0){
        fact = fact * num;
        num--;
        goto Algor;
    }
    else if(num < 0){
        printf("Enter non-negative Number.");
    }
    else{
        
    };

    printf("%d", fact);

    return 0;
}