#include <stdio.h>

int main(){

    int sum, num, range;

    range = 10;
    num = 1;
    sum = 0;

    while(num <= range){
        sum = sum + num;
        num++;
    };

    printf("%d", sum);

    return 0;
}