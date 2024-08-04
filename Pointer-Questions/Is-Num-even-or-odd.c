#include <stdio.h>

int main(){

    int num;

    printf("Enter Num: ");
    scanf("%d", &num);

    int *p;

    p = &num;

    if(*p % 2 == 0){
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }

    return 0;
}