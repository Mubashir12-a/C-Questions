#include <stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("C:\\Users\\mubas\\Desktop\\C-Questions\\Working-With-Files\\demo.txt", "r");
    
    char ch;
    int flag, count;

    flag = 0;
    count = 0;

    do{
        ch = fgetc(ptr);

        if(ch == ' ' || ch == '\n' || ch == '\t'){
            if(flag){
                flag = 0;
            }
        }
        else{
            if(!flag){
                flag = 1;
                count++;
            }
        }
    } while(ch != EOF);

    fclose(ptr);

    printf("No.of words in file are : %d", count);

    return 0;
}