#include <stdio.h>

int Chk(int N){

    if(N < 1){
        return 0;
    }
    else if(N == 2){
        return 1;
    }
    else if(N % 2 == 0){
        return 0;
    }
    else{
        for(int i = 3; i*i <= N; i += 2){
            if(N % i == 0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}


int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);


    if(Chk(num)){
        printf("Number Is Prime!");
    }
    else{
        printf("Number Is Not Prime!");
    }

    return 0;
}