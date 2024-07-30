// Using For-Loop:


#include <stdio.h>

int main(){

    int num, sum, reminder;

    printf("Enter Number: ");
    scanf("%d", &num);

    sum = 0;

    for(     ; num > 0; num /= 10){
        reminder = num % 10;
        sum = sum + reminder;
    }

    printf("%d", sum);

    return 0;
}