#include <stdio.h>
#include <string.h>


typedef struct {
    char make[20];
    int model_year;
    int id_type;

    union {
        int id_num;
        char VIN[20];
    } id;

} vehicle;


int main(){
    vehicle car1;

    strcpy(car1.make, "FORD");
    car1.model_year = 2022;
    car1.id_type = 1;

    car1.id.id_num = 254855;
    strcpy(car1.id.VIN, "2RCHPP3055");


    printf("Make: %s\n", car1.make);
    printf("Model Year: %d\n", car1.model_year);

    if(car1.id_type == 0){
        printf("ID: %d\n", car1.id.id_num);
    }
    else{
        printf("ID: %s\n", car1.id.VIN);
    }
}