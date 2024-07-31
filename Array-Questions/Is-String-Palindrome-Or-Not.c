// write a program to Find is Single word string palindrome or not:

#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100];
    int len, flag, temp;

    len = 0;
    flag = 0;

    printf("Enter Single Word: ");
    scanf("%s", &str);

    // To Find Length:

    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }

    // To Convert UpperCase To LowerCase Using Inbuild Func:

    // for(int i = 0; str[i] != '\0'; i++){
    //     str[i] = tolower(str[i]);
    // }

    // printf("%s", str);


    // To Covert UpperCase To LowerCase Without Inbuild Func:

    for(int i = 0; str[i] != '\0'; i++){
        temp = str[i];

        if(temp >= 'A' && temp <= 'Z'){
            temp = temp + 32;            // Because 32 is diffrence between Upper to Lower As Per ASCII.
            str[i] = temp;
        }

        // printf("%c", str[i]);
    }


    for(int i = 0, j = len - 1; i < len; i++, j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }

    if(flag == 1){
        printf("No, Its Not Palindrome.");
    }
    else{
        printf("Yes, Its Palindrome.");
    }

    return 0;
}