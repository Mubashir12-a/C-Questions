//Write a function that takes two integer pointers as arguments and swaps their values.

#include <stdio.h>

int swap(int *a,int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Value of num_1: %d & num_2: %d", *a, *b);
}

int main(){
    int num_1 = 10;
    int num_2 = 20;

    printf("Before swapping:\n");
    printf("Value of num_1: %d & num_2: %d\n", num_1, num_2);
    printf("After swapping:\n");

    int *p, *q;

    p = &num_1;
    q = &num_2;

    swap(p,q);

    return 0;
}