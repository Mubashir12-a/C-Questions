#include <stdio.h>


typedef struct{
    int nums;
    char names[49];
    long long int numbers;
} info;

int main(){

    info students[5] = {
        {1001, "Stud-01", 7889525252},
        {1002, "Stud-02", 7889544782},
        {1003, "Stud-03", 7884859242}
    };

    for(int k = 0; k < 3; k++){
        printf("\n%s\t\tID = %d\tP.no = %lld\n", students[k].names, students[k].nums, students[k].numbers);
    }

    return 0;
}