#include <stdio.h>

void table(int x){

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", x, i, x*i);
    }

}

int main(){

    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    table(num);

    return 0;
}