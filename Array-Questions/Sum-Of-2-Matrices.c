// Write a program to find the sum of 2 matrices or 2D-Arrays and store it in 3rd matrices or 2D-Array:

#include <stdio.h>

#define GREEN "\x1B[32m"
#define RESET "\x1B[0m"
#define BLUE "\x1B[34m"

int main(){

    int range;

    printf(GREEN"Enter size of matrices [x = y]: "RESET);
    scanf("%d", &range);

    int arr_1[range][range], arr_2[range][range], sum[range][range];

    printf(GREEN "\nEnter Elements For Matrix-1:\n\n" RESET);

    for(int i = 0; i < range; i++){

        printf(GREEN"Now Row %d:\n" RESET, i+1);

        for(int j = 0; j < range; j++){
            printf(BLUE"Enter The Row %d Element %d : "RESET, i + 1, j + 1);
            scanf("%d", &arr_1[i][j]);
        }
    }

    printf(GREEN"\nEnter Elements For Matrix-2:\n\n"RESET);

    for(int i = 0; i < range; i++){

        printf(GREEN"Now Row %d: \n"RESET, i+1);

        for(int j = 0; j < range; j++){
            printf(BLUE"Enter The Row %d Element %d : "RESET, i + 1, j + 1);
            scanf("%d", &arr_2[i][j]);
        }
    }

    printf(GREEN"\nThe Sum Matrix is: \n\n"RESET);

    for(int i = 0; i < range; i++){
        for(int j = 0; j < range; j++){
            sum[i][j] = arr_1[i][j] + arr_2[i][j];
            printf(BLUE"Sum of Row %d Element %d : %d \n"RESET, i + 1, j + 1, sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}