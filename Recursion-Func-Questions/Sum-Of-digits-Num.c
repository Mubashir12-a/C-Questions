#include <stdio.h>

int func(int num, int sum){

    int r;

    if(num > 0){
        r = num % 10;
        sum = sum + r;
        num = num / 10;

        return func(num, sum);
    }

    return sum;
}

int main(){

    int num, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("The sum of digits is : %d\n", func(num, sum));

    return 0;
}