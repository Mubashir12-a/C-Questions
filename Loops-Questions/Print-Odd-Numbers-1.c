#include <stdio.h>

int main(){

    int range,num;

    range = 10;
    num = 1;

    Algor:
    if(num <= range){
        printf("%d \n", num);
        num += 2;
        goto Algor;
    }

    return 0;
}