#include <stdio.h>

int main(){

    int x, y, sum;

    printf("Enter Num_1 : ");
    scanf("%d", &x);
    printf("Enter Num_2 : ");
    scanf("%d", &y);

    int *p, *q;

    p = &x;
    q = &y;

    sum = (*p + *q);

    printf("\nSum Is : %d \n", sum);

    return 0;
}