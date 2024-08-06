#include <stdio.h>

int func(int a, int b, int range){

    int sum = a + b;

    if(sum <= range){
        printf("%d\n", sum);
        a = b;
        b = sum;

        func(a,b,range);
    }
}

int main(){

    int num_1, num_2, range;

    num_1 = 0;
    num_2 = 1;

    printf("Enter Range(last Number): ");
    scanf("%d", &range);

    if(range <= 0){
        printf("Error!");
    }
    
    printf("%d\n", num_1);
    printf("%d\n", num_2);

    func(num_1, num_2, range);

    return 0;
}