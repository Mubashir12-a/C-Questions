#include <stdio.h>

int SUM(int x[], int size){

    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + x[i];
    }

    return sum;
}

int main(){

    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter Element-%d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("The Sum of Array Elements is: %d", SUM(arr, size));

    return 0;
}