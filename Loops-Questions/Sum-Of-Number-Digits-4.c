// Using Do-While-loop:


#include <stdio.h>

int main(){

    int num, reminder, sum;

    printf("Enter Number: ");
    scanf("%d", &num);

    sum = 0;

    do{
        reminder = num % 10;
        sum = sum + reminder;
        num /= 10;
    }
    while(num > 0);

    printf("%d", sum);

    return 0;
}