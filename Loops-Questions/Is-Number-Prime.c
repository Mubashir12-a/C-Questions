//Using Goto-loop & conditional statement:

#include <stdio.h>

int main(){

    int i, num;

    printf("Enter Number: ");
    scanf("%d", &num);

    i = 2;

    Algor:
    if(i * i <= num){
        if(num % i == 0){
            printf("Not Prime");
            return 0;
        }
        else {
            i ++;
            goto Algor;
        };
    }
    else{
        printf("Prime Number");
    };

    return 0;
}