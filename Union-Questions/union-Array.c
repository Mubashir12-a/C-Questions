#include <stdio.h>
#include <string.h>


union val{
    int num;
    float fl_num;
    char name[15];
};


// int main(){

//     int len = 10;

//     union val u1[len];

//     for(int k = 0; k < len; k++){
//         u1[k].num = k + 1;
//     }

//     for(int k = 0; k < len; k++){
//         printf("%d\n", u1[k].num);
//     }

//     return 0;
// }


int main(){

    union val u2[3];

    u2[0].num = 20;
    u2[1].fl_num = 15.6;
    strcpy(u2[2].name, "Mubashir");


    printf("Arr-01\n");

    printf("\x1B[32m %d \x1B[0m \n", u2[0].num);
    printf("\x1B[31m trash value: \x1B[0m %.1f\n", u2[0].fl_num);   // undefined value or trash value because its not defined.
    printf("\x1B[31m trash value: \x1B[0m %s\n", u2[0].name);       // undefined value or trash value because its not defined.

    printf("Arr-02\n");

    printf("\x1B[31m trash value: \x1B[0m %d\n", u2[1].num);         // undefined value or trash value because its not defined.
    printf("\x1B[32m %.1f \x1B[0m \n", u2[1].fl_num);
    printf("\x1B[31m trash value: \x1B[0m %s\n", u2[1].name);        // undefined value or trash value because its not defined. 

    printf("Arr-03\n");

    printf("\x1B[31m trash value: \x1B[0m %d\n", u2[2].num);         // undefined value or trash value because its not defined.
    printf("\x1B[31m trash value: \x1B[0m %.1f\n", u2[2].fl_num);    // undefined value or trash value because its not defined.
    printf("\x1B[32m %s \x1B[0m \n", u2[2].name);



    return 0;
}