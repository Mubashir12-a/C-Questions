#include <stdio.h>

int main(){

    int num_1, num_2, num_3;

    printf("Enter Num-1 : ");
    scanf("%d", &num_1);
    printf("Enter Num-2 : ");
    scanf("%d", &num_2);
    printf("Enter Num-3 : ");
    scanf("%d", &num_3);

    int *p, *q, *r;

    p = &num_1;
    q = &num_2; 
    r = &num_3;

    if(*p > (*q) && (*p) > (*r)){
        printf("Num-1 is Greatest.\n");
    }
    else if(*q > (*p) && *q > (*r)){
        printf("Num-2 is Greatest.\n");
    }
    else {
        printf("Num-3 is Greatest.\n");
    }

    return 0;
}