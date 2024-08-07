#include <stdio.h>
#include <string.h>


void Func(char string[], int start, int end, char string_2[]){

    if(start < strlen(string)){
        string_2[start] = string[end];
        Func(string, start + 1, end - 1, string_2);
    }
    else{
        string_2[start] = '\0';
        printf("%s", string_2);
    }

}


int main(){

    char str[50];
    char str_2[50];

    printf("Enter String: ");
    scanf("%49s", str);

    int len = strlen(str);

    Func(str, 0, len - 1, str_2);

    return 0;
}