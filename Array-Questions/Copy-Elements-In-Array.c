// Write a program to copy elements from an array to another array:

#include <stdio.h>

int main(){

    int arr[100], arr_2[100], range;

    printf("Enter No.of Elements : ");
    scanf("%d", &range);

    for(int i = 0; i < range; i++){
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < range; i++){
        arr_2[i] = arr[i];
        printf("Array-2 Element %d : %d \n", i+1, arr_2[i]);
    }

    return 0;
}