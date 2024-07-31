// Write a program to Sum arr_1 and arr_2 elements and store in arr_3:

#include <stdio.h>

int main(){

    int range, arr_1[range], arr_2[range], arr_sum[range];

    printf("Enter Range: ");
    scanf("%d", &range);

    for(int i = 0; i < range; i++){
        printf("Enter 1st Array Element %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    printf("\n");

    for(int i = 0; i < range; i++){
        printf("Enter 2nd Array Element %d: ", i + 1);
        scanf("%d", &arr_2[i]);
    }

    printf("\n");
    printf("The Sum of two arrays are stored In 3rd array: \n");

    for(int i = 0; i < 5; i++){
        arr_sum[i] = arr_1[i] + arr_2[i];
        printf("In 3rd array Element %d : %d \n",i + 1, arr_sum[i]);
    }

    return 0;
}