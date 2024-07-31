// Write a program to find sum of elements of an array:

#include <stdio.h>

int main(){

    int arr[100], sum, range;

    sum = 0;

    printf("Enter No.of Elements: ");
    scanf("%d", &range);

    for(int i = 1; i <= range; i++){
        printf("Enter Element %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= range; i++){
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}