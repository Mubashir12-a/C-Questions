// Using Do-While-loop:


#include <stdio.h>

int main(){

    int num, exponent, output;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    output = num;

    do{
        exponent --;
        output = output * num;
    }
    while(exponent > 1);

    printf("%d", output);

    return 0;
}