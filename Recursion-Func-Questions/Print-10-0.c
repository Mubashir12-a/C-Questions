#include <stdio.h>

int func(int num){

    if(num < 0){
        return 0;
    }

    printf("%d\n", num);
    num--;
    func(num);
}

int main(){

    int x = 10;

    func(x);

    return 0;
}