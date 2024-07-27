// Using Goto Loop:

#include <stdio.h>

int main(){

    int num_1,limit;

    num_1 = 1;
    limit = 10;


    Algor:
    if(num_1 <= limit){
        printf("%d \n", num_1);
        num_1++;
        goto Algor;
    };

    return 0;
}