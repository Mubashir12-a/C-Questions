#include <stdio.h>
#include <string.h>

union val {
    int int_num;
    float float_num;
    char str[10];
};


int main(){

    union val u1;

    u1.int_num = 20;
    printf("%d\n", u1.int_num);  // -> 20

    u1.float_num = 15.5;
    printf("%.1f\n", u1.float_num);  // -> 15.5

    strcpy(u1.str, "Hello");
    printf("%s\n", u1.str);   // -> Hello


    printf("%d\n", u1.int_num);  // -> unknown value
    printf("%.1f\n", u1.float_num);  // -> unknown value
    printf("%s\n", u1.str);   // -> Hello (because previous values was replaced by new value);

///////////////////////////////////////////////////////////////////////////////////////////////////

    union val u2;

    printf("%s\n", u2.str);  // Undefined or "trash" value since u2 is uninitialized.

    u2 = u1;

    printf("%s\n", u2.str);  // Hello will be displayed because now u1 & u2 shares same values;

    return 0;
}