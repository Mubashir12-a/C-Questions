// Using Do-While-loop:


#include <stdio.h>

int main(){

    int num, range;

    printf("Enter Range: ");
    scanf("%d", &range);

    num = 2;

    do{
        printf("%d \n", num);
        num += 2;
    }
    while(num <= range);

    return 0;
}