#include <stdio.h>

struct student {
    char name[50];
    int number;
    int age;
};

void showStudentData(struct student *st, int ST_no) {
    printf("\nStudent (%d):\n", ST_no);
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main(){

    struct student st_1 = {"Mubashir", 1005, 19};
    showStudentData(&st_1, 01);

    struct student st_2 = {"Another", 1006, 20};
    showStudentData(&st_2, 02);

    return 0;
}