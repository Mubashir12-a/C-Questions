#include <stdio.h>

int func(int num, int a, int b);


int main(){

    int num_1, num_2, b_num;

    printf("Enter Number-1: ");
    scanf("%d", &num_1);
    printf("Enter Number-2: ");
    scanf("%d", &num_2);


    if(num_1 > num_2){
        b_num = num_1;
    }
    else{
        b_num = num_2;
    }

    printf("The GCD is : %d", func(b_num, num_1, num_2));

    return 0;
}


int func(int num, int a, int b){

    if(a % num == 0 && b % num == 0){
        return num;
    }
    else{
        return func(num-1, a, b);
    }
}