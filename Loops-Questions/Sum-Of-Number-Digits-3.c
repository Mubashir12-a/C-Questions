// Using While-Loop:


#include <stdio.h>

int main(){

    int num, sum, reminder;

    printf("Enter Number: ");
    scanf("%d", &num);

    sum = 0;

    while(num > 0){
        reminder = num % 10;
        sum = sum + reminder;
        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}