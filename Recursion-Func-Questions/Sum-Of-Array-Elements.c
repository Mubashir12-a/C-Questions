#include <stdio.h>

int Func(int arr[], int size){

    if(size < 0){
        return 0;
    }

    if(arr[size] > 0){

        return arr[size] + Func(arr, size - 1);
    }
    else{
        return Func(arr, size - 1);
    }
}

int main(){

    int size;

    printf("Enter Size Of Array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter Element-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("%d", Func(arr, size-1));

    return 0;
}