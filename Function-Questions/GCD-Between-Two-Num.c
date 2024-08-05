#include <stdio.h>

int Large_Num(int a, int b);
int GCD(int N, int num_1, int num_2);

int main(){

    int num_1, num_2, N, gcd;

    printf("Enter Number-1: ");
    scanf("%d", &num_1);
    printf("Enter Number-2: ");
    scanf("%d", &num_2);

    N = Large_Num(num_1, num_2);

    gcd = GCD(N, num_1, num_2);

    printf("The Greatest Common Divisor is : %d", gcd);

    return 0;
}



int Large_Num(int a, int b){

    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int GCD(int N, int num_1, int num_2){

    for(int i = N; i > 0; i--){
        if(num_1 % i == 0 && num_2 % i == 0){
            return i;
        }
    }
}