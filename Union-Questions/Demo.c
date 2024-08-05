#include <stdio.h>

/*
    union takes single memory location compared to structure but one largest member memory;
    union also stores only single member data because it takes single memory location;

    In below case union takes 4-bytes because its largest memory storage and 
    if math value is given then another member value are added the previous data will be over-written.
*/

union Sub_marks {
    int Math;         // Takes 4-bytes (8 x 4 = 32 bits) Storage.
    int Science;      // Takes 4-bytes (8 x 4 = 32 bits) Storage.
    float Percentage; // Takes 4-bytes (8 x 4 = 32 bits) Storage.
    char Grade;       // Takes 1-byte  (8 x 1 = 8 bits) Storage.
} U1, U2;



int main(){

    U1.Math = 84;
    U2.Math = 66;
    printf("U1-Math: %d\n", U1.Math);  // The first union's memory holds the value 84.
    printf("U2-Math: %d\n", U2.Math);  // The 2nd union's memory holds the value 66.

    U1.Science = 68;
    printf("U1-Science: %d\n", U1.Science);  // The first union's memory now holds the value 68.
    printf("U2-Math: %d\n", U2.Math);  /* The 2nd union's memory now holds the value 66. 
                                          because it will not be effected its another separate union. */

    printf("U1-Math: %d\n", U1.Math);  /* Here previous data was over-written;
                                          This will print the value of Science, which is 68.*/


    return 0;
}
