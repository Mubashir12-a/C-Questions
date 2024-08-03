#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toLower(char *strig);
void Vowel_Count(char *S);


int main(){

    char str[50];

    printf("Enter String: ");
    scanf("%49s", str);

    // printf("%s", str);

    Vowel_Count(str);

    return 0;
}


// To Check No.of Vowels:

void Vowel_Count(char *S){

    toLower(S);

    char Vowel[6] = {'a', 'e', 'i', 'o', 'u'};
    
    int len = strlen(S);
    int count = 0;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < 5; j++){
            if(S[i] == Vowel[j]){
                count++;
            }
        }
    }

    printf("There are %d vowels inside given string.\n", count);
}

// To Covert string into lowercase:

void toLower(char *string){

    int len = strlen(string);

    for(int i = 0; i < len; i++){
        string[i] = tolower(string[i]);
    }
}