#include <stdio.h>

int main(){

    int Num_1, Num_2;

    printf("Enter no.1 : ");
    scanf("%d", &Num_1);
    printf("Enter no.2 : ");
    scanf("%d", &Num_2);

    if(Num_1 > Num_2){
        printf("%d is greatest number between them.", Num_1);
    }
    else{
        printf("%d is greatest number between them.", Num_2);
    };

    return 0;
}