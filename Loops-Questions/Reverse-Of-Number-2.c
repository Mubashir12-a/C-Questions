#include <stdio.h>

int main(){

    int num, reverse, reminder;

    printf("Enter Number: ");
    scanf("%d", &num);

    reverse = 0;

    for(    ; num > 0; num /= 10){
        reminder = num % 10;
        reverse = (reverse * 10) + reminder;
    };

    printf("%d", reverse);

    return 0;
}