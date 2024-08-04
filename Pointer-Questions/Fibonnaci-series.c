#include <stdio.h>

int main(){

    int num_1, num_2, sum, temp, range;

    printf("Enter Range : ");
    scanf("%d", &range);

    num_1 = 0;
    num_2 = 1;
    sum = 0;
    temp = 0;

    int *p, *q, *r, *s, *t;

    p = &num_1;
    q = &num_2;
    r = &range;
    s = &sum;
    t = &temp;

    printf("%d\n", *p);
    printf("%d\n", *q);

    do{
        *s = (*p) + (*q);

        if(*s > *r){
            break;
        }

        printf("%d\n", *s);

        *t = *q;
        *q = *s;
        *p = *t;
    }while(*s <= (*r));

    return 0;
}