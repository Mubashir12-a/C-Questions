#include <stdio.h>

int main(){

    int size;

    printf("Enter Array size: ");
    scanf("%d", &size);

    int arr_1[size];
    int arr_2[size];

    for(int i = 0; i < size; i++){
        printf("Enter Element-%d of Array-1: ", i+1);
        scanf("%d", &arr_1[i]);
    }

    int *Arr_01, *Arr_02;

    Arr_01 = arr_1;
    Arr_02 = arr_2;

    printf("\nAfter Copy Arr-1 Element into Arr-2:\n");

    for(int i = 0; i < size; i++){
        *(Arr_02 + i) = *(Arr_01 + i);
        printf("Element-%d of arr_2: %d\n",i+1, *(Arr_02+i));
    }

    return 0;
}