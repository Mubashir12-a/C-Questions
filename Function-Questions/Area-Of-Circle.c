#include <stdio.h>
#define RESET "\x1B[0m"
#define GREEN "\x1B[32m"
#define CYAN "\x1B[36m"
#define PI 3.14159

void AreaCircle(int x){

    float area = PI * x * x;

    printf(GREEN"The area of circle is :"CYAN"%.2f\n"RESET, area);

}

int main(){

    int r;

    printf(CYAN"Enter Radius of Circle : "RESET);
    scanf("%d", &r);

    AreaCircle(r);

    return 0;
}