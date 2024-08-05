#include <stdio.h>

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

struct student{

    char name[50];
    int marks;
    int roll_no;

} m1, m2, m3;

int main(){

    struct student m1 = {"Student-01", 0, 560045};
    struct student m2 = {"Student-02", 0, 560046};
    struct student m3 = {"Student-03", 0, 560047};

    printf(RED"Enter Marks of %s:"RESET"\nRoll_no (%d): ", m1.name, m1.roll_no);
    scanf("%d", &m1.marks);
    printf(RED"Enter Marks of %s:"RESET"\nRoll_no (%d): ", m2.name, m2.roll_no);
    scanf("%d", &m2.marks);
    printf(RED"Enter Marks of %s:"RESET"\nRoll_no (%d): ", m3.name, m3.roll_no);
    scanf("%d", &m3.marks);

    if(m1.marks > m2.marks && m1.marks > m3.marks){
        printf(BLUE"%s (%d) scored highest marks."RESET, m1.name, m1.roll_no);
    }
    else if(m2.marks > m1.marks && m2.marks > m3.marks){
        printf(BLUE"%s (%d) scored highest marks."RESET, m2.name, m2.roll_no);
    }
    else if(m3.marks > m1.marks && m3.marks > m2.marks){
        printf(BLUE"%s (%d) scored highest marks."RESET, m3.name, m3.roll_no);
    }
    else{
        printf(RED"Error"RESET);
    }

    return 0;
}