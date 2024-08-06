#include <stdio.h>

int func(int n){

    if(n <= 0){
        return 0;
    }

    return n + func(n - 1);
}

int main(){

    int range;

    printf("Enter Range(n): ");
    scanf("%d", &range);

    printf("The Sum of first %d natural Nums is : %d\n",range, func(range));

    return 0;
}