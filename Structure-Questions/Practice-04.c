#include <stdio.h>
#include <string.h>


typedef struct {
    int id;
    char title[50];
    float hours;
} course;


// void update_course(course *class){
//     strcpy(class -> title, "C Fundamentals");
//     class -> id = 111;
//     class -> hours = 12.30;
// }

void update_course(course *triger, char name[], int identification, float time){
     strcpy(triger -> title, name);
     triger -> id = identification;
     triger -> hours = time;
}


void display(course triger){
    printf("%d\t%s\t%3.2f\n", triger.id, triger.title, triger.hours);
}



int main(){

    // course cs2;
    // update_course(&cs2);
    // display(cs2);

    course D1;
    update_course(&D1, "BCA", 21548, 3.20);
    display(D1);


    course D2;
    update_course(&D2, "BBA", 54646, 10.40);
    display(D2);

    return 0;
}