#include <stdio.h>

int func(int num){
    if(num > 9){
        return 0;
    }
    
    num++;
    func(num);
    printf("%d\n", num);
}

int main(){

    int x;
    x = 0;

    func(x);

    return 0;
}

// The last one displays first and first one display last.