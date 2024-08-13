#include <stdio.h>


struct Val {
    int x;
    int y;
} v1;


int main(){

    struct Val *ptr = &v1;

    ptr -> x = 3;
    ptr -> y = 7;

    printf("x = %d & y = %d\n", ptr -> x, ptr -> y);

    return 0;
}