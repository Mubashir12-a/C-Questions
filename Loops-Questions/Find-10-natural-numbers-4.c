#include <stdio.h>

int main(){

    int num, range;

    range = 10;
    num = 1;

    do {
        printf("%d \n", num);
        num++;
    }
    while(num <= range);

    return 0;
}