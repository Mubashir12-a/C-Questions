#include <stdio.h>

int main(){

    int k = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", k);
            k++;
        }

        printf("\n");
    }


    printf("\n");
    // In Reverse:

    int l = 9;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", l);
            l--;
        }

        printf("\n");
    }



    return 0;
}