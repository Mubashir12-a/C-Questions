#include <stdio.h>
#include <string.h>


char* reverse(char string[]){

    static char RevString[50];         // Static for to avoid arr delocation while returning.

    int len = strlen(string);

    for(int i = 0; i < len; i++){
        RevString[i] = string[(len - 1) - i];
    }

    RevString[len] = '\0';

    return RevString;
}



int main(){

    char str[50];

    printf("Enter String: ");
    scanf("%49s", str);

    printf("%s\n", reverse(str));

    return 0;
}