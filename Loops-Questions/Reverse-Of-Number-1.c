// Using Goto-loop:

#include <stdio.h>

int main(){

    int num, reverse, reminder;

    printf("Enter Number: ");
    scanf("%d", &num);

    reverse = 0;

    Algor:
    if(num > 0){
        reminder = num % 10;
        reverse = (reverse * 10) + reminder;
        num = num / 10;
        goto Algor;
    }
    printf("%d", reverse);

    return 0;
}