// Using Do-While-loop:


#include <stdio.h>

int main(){

    int num, reminder, reverse;

    printf("Enter Number: ");
    scanf("%d", &num);

    reverse = 0;

    do{
        reminder = num % 10;
        reverse = (reverse * 10) + reminder;
        num /= 10;
    }
    while(num > 0);

    printf("%d", reverse);

    return 0;
}