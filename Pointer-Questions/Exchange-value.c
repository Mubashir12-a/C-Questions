#include <stdio.h>

int CHG(int **p, int **q){

    int temp;

    temp = **p;
    **p = **q;
    **q = temp;

    printf("%d - %d = %d", **p, **q, (**p - **q));
}

int main(){

    int num_1, num_2;

    num_1 = 10;
    num_2 = 50;

    int *a, *b;

    a = &num_1;
    b = &num_2;

    printf("%d - %d = %d\n", *a, *b, (*a - *b));

    CHG(&a, &b);

    return 0;
}

//Explaination: 

// To access pointer with another pointer like: 
/*
    int a = 10;     Initializes a with the value 10.
    int *p = &a;    p is a pointer to a
    int **q = &p;   q is a pointer to p
*/