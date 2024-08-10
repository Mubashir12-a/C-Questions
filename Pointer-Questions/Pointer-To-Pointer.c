//Declare a pointer to an integer and then a pointer to that pointer. Use the double pointer to change the value of the original integer.

#include <stdio.h>

int main(){

    int num;
    num = 10;

    printf("%d\n", num);  // output = 10

    int *ptr;
    ptr = &num;
    printf("%d\n", *ptr);  // output = 10;

    int **ptr_2 = &ptr;
    **ptr_2 = 20;
    printf("%d\n", **ptr_2);  // output = 20


    printf("%d\n", *ptr);  // value modified using pointers.  output = 20
    printf("%d\n", num);   // value modified using pointers.  output = 20
 
    return 0;
}