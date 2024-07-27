// Using Goto-loop:

#include <stdio.h>

int main(){

    int num, reminder, sum;

    printf("Enter Number: ");
    scanf("%d", &num);

    sum = 0;

    Algor:
    if(num > 0){
        reminder = num % 10;
        sum = sum + reminder;
        num = num / 10;
        goto Algor;
    }

    printf("%d", sum);

    return 0;
}