// Write a program to search a number in an array:

#include <stdio.h>

int main(){

    int S_num, range, arr_1[range], flag;

    flag = 0;

    printf("Enter Range: ");
    scanf("%d", &range);

    for (int i = 0; i < range; i++){
        printf("Enter Element %d : ", i +1);
        scanf("%d", &arr_1[i]);
    }

    printf("Enter Number To Search : ");
    scanf("%d", &S_num);

    for(int i = 0; i < range; i++){
        if(S_num == arr_1[i]){
            printf("The Search Number Index is %d And Element Number is %d.", i, i+1);
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Number Not Found In array!");
    }
    
    return 0;
}