#include <stdio.h>

int main(){

    int range, num;

    printf("Enter Range: ");
    scanf("%d", &range);

    num = 2;

    while(num <= range){
        printf("%d \n", num);
        num += 2;
    };

    return 0;
}