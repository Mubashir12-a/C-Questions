// Using For-Loop:


#include <stdio.h>

int main(){
    int range;

    printf("Enter Range: ");
    scanf("%d", &range);

    for(int i = 2; i <= range; i += 2){
        printf("%d \n", i);
    }
}