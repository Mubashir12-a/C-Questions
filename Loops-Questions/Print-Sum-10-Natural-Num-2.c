// Using For-Loop:


#include <stdio.h>

int main(){

    int num,sum;

    num = 10;
    sum = 0;

    for(int i = 0; i <= num; i++){
        sum = sum + i;
    };

    printf("%d", sum);

    return 0;
}