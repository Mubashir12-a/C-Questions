#include <stdio.h>

int main(){
    int num_1, num_2, sum, temp, range;

    num_1 = 0;
    num_2 = 1;
    sum = 0;
    range = 100;

    Algor:
    if(sum < range){
        sum = num_1 + num_2;
        printf("%d \n", sum);

        temp = num_2;
        num_2 = sum;
        num_1 = temp;

        goto Algor;
    }
}