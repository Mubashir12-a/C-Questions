#include <stdio.h>

int main(){

    int num_1, num_2, num_3;

    printf("Enter Numbers: \n");

    printf("1st Num: ");
    scanf("%d", &num_1);
    printf("2nd Num: ");
    scanf("%d", &num_2);
    printf("3rd Num: ");
    scanf("%d", &num_3);

    if(num_1 > num_2){
        if(num_1 > num_3){
            printf("%d is greatest number.", num_1);
        }
        else{
            printf("%d is greatest number.", num_3);
        };
    }
    else {
        if(num_2 > num_3){
            printf("%d is greatest number.", num_2);
        }
        else {
            printf("%d is greatest number.", num_3);
        };
    };

    return 0;
}