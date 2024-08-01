// Write a program to find the sum of digonal elements in 2D-array:

#include <stdio.h>

int main(){

    int range;

    printf("Enter size of matrices [x = y]: ");
    scanf("%d", &range);

       int sum = 0;
       int arr[range][range];

    // int arr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    for(int i = 0; i < range; i++){
        for(int j = 0; j < range; j++){
            printf("Enter The Row %d Element %d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }

        printf("\n");
    }

    for(int i = 0; i < range; i++){
        sum = sum + arr[i][i];
        printf("Diagonal Element %d : %d \n", i + 1, arr[i][i]);
    }

    printf("\nThe Sum Of digonal Elements in matrices : %d", sum);

    return 0;
}