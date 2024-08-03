#include <stdio.h>

int fibo(int range, int num_1, int num_2){

    int sum = 0;

    printf("%d\n", num_1);
    if (num_2 <= range) {
        printf("%d\n", num_2);
    }

    do{
        sum = num_1 + num_2;
        
        if(sum <= range){
            printf("%d + %d = %d\n", num_1, num_2, sum);
        }

        num_1 = num_2;
        num_2 = sum;
    } while(sum <= range);

}

int main(){

    int range, num_1, num_2;

    printf("Enter Range: ");
    scanf("%d", &range);

     num_1 = 0;
     num_2 = 1;

    
    if(range > 0){
        fibo(range, num_1, num_2);
    }

    return 0;
}