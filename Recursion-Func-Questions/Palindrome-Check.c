#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Func(char string[], int start, int end){

    if(start >= end){
        return 1;
    }

    if(string[start] != string[end]){
        return 0;
    }

    return Func(string, start + 1, end - 1);
}



int main(){

    char str[50];

    printf("Enter String: ");
    scanf("%49s", str);

    int len = strlen(str);

    for(int i = 0; i < len; i++){
        str[i] = tolower(str[i]);
    }

    if(Func(str, 0, len - 1)){
        printf("String Is Palindrome");
    }
    else{
        printf("String Is Not Palindrome");
    }
    return 0;
}