#include <stdio.h>

// EOF --> end of file
// FILE --> file data type user defined
// getc() [for read only], putc() [for write and append], fclose() [for file close], fopen() [for file open] functions used with files
// getc increament by itself to ptr.

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("C:\\Users\\mubas\\Desktop\\C-Questions\\Working-With-Files\\demo.txt", "r");

    do {
        ch = getc(ptr);
        if(ch != EOF){
            printf("%c", ch);
        }
    } while (ch != EOF);

    fclose(ptr);

    return 0;
}