#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Func_2(char str[], int len, int count, int index);
int Func(char x, int j, char vowels[]);


int main(){

    char str[50];
    int count = 0;

    printf("Enter String: ");
    // scanf("%49s", str);
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for(int i = 0; i < len; i++){
        str[i] = tolower(str[i]);
    }

    int vowel_Count = Func_2(str, len, count, 0);

    printf("In Given String no.of vowels are: %d", vowel_Count);

    return 0;
}



int Func_2(char str[], int len, int count, int index){

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    if(index >= len){
        return count;
    }

    count = count + Func(str[index], 0, vowels);

    return Func_2(str, len, count, index + 1);
}



int Func(char x, int j, char vowels[]){

    if(j >= strlen(vowels)){
        return 0;
    }

    if(x == vowels[j]){
        return 1;
    }
    
    return Func(x, j+1, vowels);
}