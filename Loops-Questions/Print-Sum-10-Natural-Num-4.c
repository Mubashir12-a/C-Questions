// Using Do-While-loop:


#include <stdio.h>

int main(){

    int num, range, sum;

    num = 1;
    range = 10;
    sum = 0;

    do {
        sum = sum + num;
        num++;
    }
    while(num <= range);

    printf("%d", sum);

    return 0;
}