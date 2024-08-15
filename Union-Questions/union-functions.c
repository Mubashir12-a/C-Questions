#include <stdio.h>

union id {
    int id_num;
    char name[15];
};

void set_id(union id *item){
    item->id_num = 4585;
};

void show_id(union id item){
    printf("ID is : %d\n", item.id_num);
};

int main(){

    union id u1;

    set_id(&u1);
    show_id(u1);

    return 0;
}