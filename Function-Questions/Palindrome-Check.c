#include <stdio.h>
#include <string.h>

char check(char string[]);

int main(){

    char str[50];

    printf("Enter String: ");
    scanf("%49s", str);

    check(str);

    return 0;
}



char check(char string[]){

    int len = strlen(string);

    for(int i = 0; i < len; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            int temp = string[i];
            temp = temp + 32;
            string[i] = temp;
        }
        else{
            string[i] = string[i];
        }
    }

    int flag = 0;

    for(int i = 0; i < len; i++){
        if(string[i] != string[(len - 1) - i]){
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
    }

    if(flag){
        printf("String Is Palindrome.");
    }
    else{
        printf("String Is not Palindrome!");
    }

}