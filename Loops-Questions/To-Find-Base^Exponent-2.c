// Using While-loop:


#include <stdio.h>

int main(){

    int num, exponent, output, i;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    output = num;
    i = 1;

    while(i < exponent){
        output = output * num;
        i++;
    }

    printf("%d", output);

    return 0;
}