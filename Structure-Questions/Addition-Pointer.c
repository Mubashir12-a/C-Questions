#include <stdio.h>


struct value {
    int a;
    int b;
};

void add(struct value *data) {
    printf("The Sum is : %d", data->a + data->b);
};



int main(){

    // struct value A1 = {10, 20};
    // add(&A1);

    int num_1, num_2;

    printf("Enter Num-1 : ");
    scanf("%d", &num_1);

    printf("Enter Num-2 : ");
    scanf("%d", &num_2);

    struct value A2 = {num_1, num_2};
    add(&A2);

    return 0;
}