#include <stdio.h>

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"


struct student{
    int roll_no;
    char section;
    int marks;
} s1, s2, s3;


int main(){

    s1.roll_no = 2546008;
    s2.roll_no = 2546009;
    s3.roll_no = 2546010;

    s1.section = 'A';
    s2.section = 'A';
    s3.section = 'B';

    printf(RED"Enter Marks of Student-1:"RESET"\nRoll_no (%d): ", s1.roll_no);
    scanf("%d", &s1.marks);
    printf(RED"Enter Marks of Student-2:"RESET"\nRoll_no (%d): ", s2.roll_no);
    scanf("%d", &s2.marks);
    printf(RED"Enter Marks of Student-3:"RESET"\nRoll_no (%d): ", s3.roll_no);
    scanf("%d", &s3.marks);

    int sum = s1.marks + s2.marks + s3.marks;

    printf(BLUE"\nThe Total marks is : %d\n"RESET, sum);

    return 0;
}