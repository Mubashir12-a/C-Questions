#include <stdio.h>

int main(){

    int count = 0;
    char ch;

    FILE *ptr;
    ptr = fopen("C:\\Users\\mubas\\Desktop\\C-Questions\\Working-With-Files\\demo.txt", "r");

    ch = getc(ptr);

    while(ch != EOF){
        ch = getc(ptr);

        if(ch == ' '){
            count++;
        }
    }

    printf("%d spaces in given file", count);

    return 0;
}