#include <stdio.h>
#define PI 3.14159265358979323846

//Area of circle:

typedef struct {
    int r;
} radius;

typedef struct {
    radius recall;
    float Result;
} Area;


int main(){

    radius R1 = {5};
    Area A1 = {R1, PI * R1.r*R1.r};

    printf("The area of Circle is = %.2f", A1.Result);

    return 0;
}