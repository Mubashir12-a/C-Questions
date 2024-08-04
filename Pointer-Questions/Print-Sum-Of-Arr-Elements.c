#include <stdio.h>

int main(){

    int range, sum;

    sum = 0;

    printf("No.of Elements: ");
    scanf("%d", &range);

    int  arr[range];

    for(int i = 0; i < range; i++){
        printf("Enter Element-%d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int *R, *Arr, *Sum;

    R = &range;
    Arr = arr;
    Sum = &sum;

    for(int i = 0; i < *R; i++){
        *Sum = (*Sum) + (*(Arr + i));
    }

    printf("Sum Of Elements is : %d\n", *Sum);

    return 0;
}