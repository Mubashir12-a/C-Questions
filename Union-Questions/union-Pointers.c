#include <stdio.h>

union info{
    int num;
    float fl_num;
    char str[10];
};

int main(){

    union info u1;
    union info *ptr = NULL;

    ptr = &u1;

    ptr->num = 20;
    printf("num = %d\n", u1.num);

    ptr->fl_num = 15.5;
    printf("float = %.1f\n", u1.fl_num);

    printf("num = %d\n", u1.num);  // Shows unknown value or trash value because num was overwritten by float value.

    return 0;
}