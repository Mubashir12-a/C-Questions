#include <stdio.h>

int func(int n, int p, int stop, int output);

int main(){
    int num, power;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Power: ");
    scanf("%d", &power);

    int stop = 0, ans = 1;

    printf("The calculation is : %d\n", func(num, power, stop, ans));

    return 0;
}


int func(int n, int p, int stop, int output){

    if(stop >= p){
        return output;
    }

    output = output * n;
    return func(n, p, stop + 1, output);
}