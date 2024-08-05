#include <stdio.h>

struct student {
    int Roll_no;
    int Marks;
    char Signature;
};

int main(){

    struct student S1, S2;

    S1.Roll_no = 10;
    S1.Marks = 68;
    S1.Signature = 'M';

    S2.Roll_no = 15;
    S2.Marks = 89;
    S2.Signature = 'm';


    printf("Student Marks: %d\n", S1.Marks);
    printf("Student Rollno: %d\n", S2.Roll_no);
    printf("Student Sign: %c\n", S1.Signature);
    
    return 0;
}

/* 
   A structure (struct) is a user-defined data type that allows
   you to combine data items of different kinds. Structures are 
   useful for grouping related variables together to create a 
   single complex data type.
*/