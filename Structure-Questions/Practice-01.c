#include <stdio.h>

typedef struct {
    int x;
    int y;
} values;

typedef struct {
    values V1;
    int sum;
} result;


int main(){

    values P1 = {5, 10};      // Here I initialized the  value of x, y;
    result R1 = {P1, P1.x + P1.y}; // Then I recalled those value and with v, and added them by their variable names;

    values P2 = {20, 30};
    result R2 = {P2, P2.x + P2.y};

    printf("The sum is = %d\n", R1.sum);
    printf("The sum is = %d\n", R2.sum);

    return 0;
}