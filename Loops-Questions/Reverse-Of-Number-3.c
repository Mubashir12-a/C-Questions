// Using While-Loop:


#include <stdio.h>

int main(){

    int num, rev, reminder;

    printf("Enter Number: ");
    scanf("%d", &num);

    rev = 0;
    
    while(num > 0){
        reminder = num % 10;
        rev = (rev * 10) + reminder;
        num = num / 10;
    }

    printf("%d", rev);

    return 0;
}