// Using Goto-loop:

#include <stdio.h>

int main(){

    int num, range, sum;

    num = 1;
    sum = 0;
    range = 10;

    Algor:
    if(num <= range){
        sum = sum + num;
        num++;
        goto Algor;
    }
    printf("%d", sum);

    return 0;
}