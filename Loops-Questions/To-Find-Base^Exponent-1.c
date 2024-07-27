// Using For-loop:

#include <stdio.h>

int main(){

    int num, exponent, output;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    output = num;

    for(int i = 1; i < exponent; i++){
        output = output * num;
    };

    printf("%d", output);

    return 0;
}