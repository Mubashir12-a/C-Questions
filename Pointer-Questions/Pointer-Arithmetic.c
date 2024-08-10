//Create an array of integers and use a pointer to iterate through the array, printing each element.

#include <stdio.h>

int main(){

    int arr[5] = {10,20,30,40,50};
    int *arr_2;

    arr_2 = arr;

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(arr_2 + i));
    }

    return 0;
}