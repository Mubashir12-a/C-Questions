// Take students information then print on display:

#include <stdio.h>
#include <string.h>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define RESET "\033[0m"


typedef struct{
    char name[50];
    char course[50];
    int roll_no;
    long int fee_paid;
    long int balance;
    long long int p_number;
} Student_info;


Student_info Student_information(char name[], char course[], int rollno, long int feePaid, long long int contact, int limit);



int main(){
    int size;

    char name[50], course[50];
    long int roll, fees;
    int Max_fees = 25000;

    long long int contact;

    printf(BLUE"Enter No.of Students: "RESET);
    scanf("%d", &size);

    Student_info Batch_2024[size];

        for(int i = 0; i < size; i++){
            printf(RED"Student-%d\n"RESET, i + 1);

            printf("Enter Name: ");
            scanf("%49s", name);
            printf("Enter Couse: ");
            scanf("%49s", course);
            printf("Enter Roll_Number: ");
            scanf("%ld", &roll);
            printf("Enter Fee-Paid: ");
            scanf("%ld", &fees);
            printf("Enter Contact: ");
            scanf("%lld", &contact);

            Batch_2024[i] = Student_information(name, course, roll, fees, contact, Max_fees);
        }


    for(int k = 0; k < size; k++){
        printf("\n%s From %s\n\t Roll_no: %d\t Fees-Paid: %ld\t Balance: %ld\t Contact: %lld\n",
                Batch_2024[k].name, Batch_2024[k].course, Batch_2024[k].roll_no, Batch_2024[k].fee_paid,
                Batch_2024[k].balance, Batch_2024[k].p_number);
    }

    return 0;
}




Student_info Student_information(char name[], char course[], int rollno, long int feePaid, long long int contact, int limit){
    Student_info student;

    strcpy(student.name, name);
    strcpy(student.course, course);
    student.roll_no = rollno;
    student.fee_paid = feePaid;
    student.balance = limit - feePaid;
    student.p_number = contact;

    return student;
}