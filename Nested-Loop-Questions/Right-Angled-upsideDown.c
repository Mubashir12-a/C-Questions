#include <stdio.h>

int main(){

    int rows;

    printf("Enter No.of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++){
        for(int j = rows; j > i; j--){
            printf(" * ");
        }

        printf("\n");
    }




    int k = 1;

    for(int i = 0; i < rows; i++){
        for(int j = rows; j > i; j--){
            printf(" %d ", k);
            k++;
        }

        printf("\n");
    }



    int l = 1;

    for(int i = 0; i < rows; i++){
        for(int j = rows; j > i; j--){
            printf(" %d ", l);
        }
        l++;

        printf("\n");
    }

    return 0;
}