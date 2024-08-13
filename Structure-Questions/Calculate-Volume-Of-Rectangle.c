#include <stdio.h>

// Calculates the volume of a box (or rectangular prism). It multiplies the height (h), width (w), and length (l) to give you the total space inside the box.


typedef struct {
    int h;
    int w;
    int l;
} box;



int main(){

    box boxes[3] = {{1,3,5}, {2,4,6}, {3, 6, 9}};

    int k, volume;

    for (k = 0; k < 3; k++){
        volume = boxes[k].h * boxes[k].w * boxes[k].l;

        printf("The box %d volume is %d\n", k + 1, volume);
    }

    return 0;
}