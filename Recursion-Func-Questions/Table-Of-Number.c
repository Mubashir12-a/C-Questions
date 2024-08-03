#include <stdio.h>

int func(int num, int range){

    if(range > 10){
        return 0;
    }

    printf("%d x %d = %d\n", num, range, num*range);
    range++;
    func(num,range);

}

int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    int i = 1;

    func(num, i);

    return 0;
}